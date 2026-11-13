#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8323BCC4"))) PPC_WEAK_FUNC(sub_8323BCC4);
PPC_FUNC_IMPL(__imp__sub_8323BCC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8323BCC8"))) PPC_WEAK_FUNC(sub_8323BCC8);
PPC_FUNC_IMPL(__imp__sub_8323BCC8) {
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
	ctx.lr = 0x8323BCD0;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x831ce778
	ctx.lr = 0x8323BCD8;
	__savefpr_28(ctx, base);
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// clrlwi r7,r9,31
	ctx.r7.u64 = ctx.r9.u32 & 0x1;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// lfs f13,9008(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// fmr f29,f13
	ctx.f29.f64 = ctx.f13.f64;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// addi r30,r11,11696
	ctx.r30.s64 = ctx.r11.s64 + 11696;
	// addi r22,r10,5696
	ctx.r22.s64 = ctx.r10.s64 + 5696;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8323bd3c
	if (cr6.eq) goto loc_8323BD3C;
	// lfs f12,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,132(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// fadds f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// lfs f10,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// stfs f11,36(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// fsubs f28,f11,f10
	ctx.f28.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// b 0x8323bd64
	goto loc_8323BD64;
loc_8323BD3C:
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8323bd58
	if (!cr6.eq) goto loc_8323BD58;
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x8323bd5c
	goto loc_8323BD5C;
loc_8323BD58:
	// lfs f0,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
loc_8323BD5C:
	// lfs f12,28(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f28,f0,f12
	ctx.f28.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
loc_8323BD64:
	// li r21,1
	ctx.r21.s64 = 1;
	// fcmpu cr6,f28,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f28.f64, ctx.f13.f64);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// blt cr6,0x8323bd78
	if (cr6.lt) goto loc_8323BD78;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8323BD78:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8323bd98
	if (cr6.eq) goto loc_8323BD98;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x831ce7c4
	ctx.lr = 0x8323BD94;
	__restfpr_28(ctx, base);
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_8323BD98:
	// lfs f0,32(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// fcmpu cr6,f28,f0
	cr6.compare(ctx.f28.f64, ctx.f0.f64);
	// bgt cr6,0x8323bdac
	if (cr6.gt) goto loc_8323BDAC;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8323BDAC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8323bdbc
	if (cr6.eq) goto loc_8323BDBC;
	// fmr f28,f0
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f0.f64;
loc_8323BDBC:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// beq cr6,0x8323bdcc
	if (cr6.eq) goto loc_8323BDCC;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8323BDCC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8323bde0
	if (cr6.eq) goto loc_8323BDE0;
	// lfs f31,132(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 132);
	ctx.f31.f64 = double(temp.f32);
	// b 0x8323bde4
	goto loc_8323BDE4;
loc_8323BDE0:
	// fdivs f31,f28,f0
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f28.f64 / ctx.f0.f64));
loc_8323BDE4:
	// rlwinm r11,r9,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x400;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8323be54
	if (!cr6.eq) goto loc_8323BE54;
	// ori r11,r9,1024
	ctx.r11.u64 = ctx.r9.u64 | 1024;
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// li r10,1306
	ctx.r10.s64 = 1306;
	// stw r31,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r31.u32);
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
	// li r6,1307
	ctx.r6.s64 = 1307;
	// li r11,1308
	ctx.r11.s64 = 1308;
	// sth r10,264(r1)
	PPC_STORE_U16(ctx.r1.u32 + 264, ctx.r10.u16);
	// sth r6,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r6.u16);
	// addi r9,r1,288
	ctx.r9.s64 = ctx.r1.s64 + 288;
	// stb r31,266(r1)
	PPC_STORE_U8(ctx.r1.u32 + 266, ctx.r31.u8);
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// stb r31,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r31.u8);
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r31.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r31,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r31.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// sth r11,296(r1)
	PPC_STORE_U16(ctx.r1.u32 + 296, ctx.r11.u16);
	// stb r31,298(r1)
	PPC_STORE_U8(ctx.r1.u32 + 298, ctx.r31.u8);
	// bl 0x8323b1d8
	ctx.lr = 0x8323BE54;
	sub_8323B1D8(ctx, base);
loc_8323BE54:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// rlwinm r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8323bf14
	if (cr6.eq) goto loc_8323BF14;
	// li r11,1911
	ctx.r11.s64 = 1911;
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// sth r11,144(r1)
	PPC_STORE_U16(ctx.r1.u32 + 144, ctx.r11.u16);
	// stb r31,146(r1)
	PPC_STORE_U8(ctx.r1.u32 + 146, ctx.r31.u8);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x8322ab20
	ctx.lr = 0x8323BE84;
	sub_8322AB20(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8323bf00
	if (cr6.eq) goto loc_8323BF00;
	// lhz r11,18(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 18);
	// li r10,12288
	ctx.r10.s64 = 12288;
	// lhz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 16);
	// addi r7,r3,16
	ctx.r7.s64 = ctx.r3.s64 + 16;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// srw r6,r10,r9
	ctx.r6.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// xori r11,r8,142
	ctx.r11.u64 = ctx.r8.u64 ^ 142;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// srawi r4,r5,31
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 31;
	// and r11,r4,r6
	ctx.r11.u64 = ctx.r4.u64 & ctx.r6.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8323bee8
	if (cr6.eq) goto loc_8323BEE8;
	// lwz r28,20(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// bne cr6,0x8323bf14
	if (!cr6.eq) goto loc_8323BF14;
	// li r6,142
	ctx.r6.s64 = 142;
	// li r5,1911
	ctx.r5.s64 = 1911;
	// li r4,344
	ctx.r4.s64 = 344;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320d628
	ctx.lr = 0x8323BEE4;
	sub_8320D628(ctx, base);
	// b 0x8323bf14
	goto loc_8323BF14;
loc_8323BEE8:
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// li r5,1911
	ctx.r5.s64 = 1911;
	// li r4,344
	ctx.r4.s64 = 344;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320d880
	ctx.lr = 0x8323BEFC;
	sub_8320D880(ctx, base);
	// b 0x8323bf14
	goto loc_8323BF14;
loc_8323BF00:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,12424
	ctx.r3.s64 = ctx.r11.s64 + 12424;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// bl 0x8320e7b8
	ctx.lr = 0x8323BF14;
	sub_8320E7B8(ctx, base);
loc_8323BF14:
	// lhz r10,40(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 40);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,583
	cr6.compare<uint32_t>(ctx.r10.u32, 583, xer);
	// bgt cr6,0x8323bfc4
	if (cr6.gt) goto loc_8323BFC4;
	// beq cr6,0x8323bfb8
	if (cr6.eq) goto loc_8323BFB8;
	// cmplwi cr6,r10,579
	cr6.compare<uint32_t>(ctx.r10.u32, 579, xer);
	// bgt cr6,0x8323bf7c
	if (cr6.gt) goto loc_8323BF7C;
	// beq cr6,0x8323bf70
	if (cr6.eq) goto loc_8323BF70;
	// cmplwi cr6,r10,541
	cr6.compare<uint32_t>(ctx.r10.u32, 541, xer);
	// beq cr6,0x8323bf64
	if (cr6.eq) goto loc_8323BF64;
	// cmplwi cr6,r10,577
	cr6.compare<uint32_t>(ctx.r10.u32, 577, xer);
	// beq cr6,0x8323bf58
	if (cr6.eq) goto loc_8323BF58;
	// cmplwi cr6,r10,578
	cr6.compare<uint32_t>(ctx.r10.u32, 578, xer);
	// bne cr6,0x8323c0e8
	if (!cr6.eq) goto loc_8323C0E8;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r30,r11,-19472
	ctx.r30.s64 = ctx.r11.s64 + -19472;
	// b 0x8323c114
	goto loc_8323C114;
loc_8323BF58:
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r30,r11,-19544
	ctx.r30.s64 = ctx.r11.s64 + -19544;
	// b 0x8323c114
	goto loc_8323C114;
loc_8323BF64:
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r30,r11,11696
	ctx.r30.s64 = ctx.r11.s64 + 11696;
	// b 0x8323c114
	goto loc_8323C114;
loc_8323BF70:
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r30,r11,-19416
	ctx.r30.s64 = ctx.r11.s64 + -19416;
	// b 0x8323c114
	goto loc_8323C114;
loc_8323BF7C:
	// cmplwi cr6,r11,580
	cr6.compare<uint32_t>(ctx.r11.u32, 580, xer);
	// beq cr6,0x8323bfac
	if (cr6.eq) goto loc_8323BFAC;
	// cmplwi cr6,r11,581
	cr6.compare<uint32_t>(ctx.r11.u32, 581, xer);
	// beq cr6,0x8323bfa0
	if (cr6.eq) goto loc_8323BFA0;
	// cmplwi cr6,r11,582
	cr6.compare<uint32_t>(ctx.r11.u32, 582, xer);
	// bne cr6,0x8323c0e8
	if (!cr6.eq) goto loc_8323C0E8;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r30,r11,-19120
	ctx.r30.s64 = ctx.r11.s64 + -19120;
	// b 0x8323c114
	goto loc_8323C114;
loc_8323BFA0:
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r30,r11,-19128
	ctx.r30.s64 = ctx.r11.s64 + -19128;
	// b 0x8323c114
	goto loc_8323C114;
loc_8323BFAC:
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r30,r11,-19264
	ctx.r30.s64 = ctx.r11.s64 + -19264;
	// b 0x8323c114
	goto loc_8323C114;
loc_8323BFB8:
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r30,r11,-19096
	ctx.r30.s64 = ctx.r11.s64 + -19096;
	// b 0x8323c114
	goto loc_8323C114;
loc_8323BFC4:
	// addi r11,r11,-584
	ctx.r11.s64 = ctx.r11.s64 + -584;
	// cmplwi cr6,r11,26
	cr6.compare<uint32_t>(ctx.r11.u32, 26, xer);
	// bgt cr6,0x8323c0e8
	if (cr6.gt) goto loc_8323C0E8;
	// lis r12,-31964
	ctx.r12.s64 = -2094792704;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-16408
	ctx.r12.s64 = ctx.r12.s64 + -16408;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8323C054;
	case 1:
		goto loc_8323C060;
	case 2:
		goto loc_8323C08C;
	case 3:
		goto loc_8323C0E8;
	case 4:
		goto loc_8323C0E8;
	case 5:
		goto loc_8323C0E8;
	case 6:
		goto loc_8323C0E8;
	case 7:
		goto loc_8323C0E8;
	case 8:
		goto loc_8323C0E8;
	case 9:
		goto loc_8323C0E8;
	case 10:
		goto loc_8323C0E8;
	case 11:
		goto loc_8323C0E8;
	case 12:
		goto loc_8323C0E8;
	case 13:
		goto loc_8323C0E8;
	case 14:
		goto loc_8323C0E8;
	case 15:
		goto loc_8323C0E8;
	case 16:
		goto loc_8323C0E8;
	case 17:
		goto loc_8323C0E8;
	case 18:
		goto loc_8323C0E8;
	case 19:
		goto loc_8323C0E8;
	case 20:
		goto loc_8323C0E8;
	case 21:
		goto loc_8323C0E8;
	case 22:
		goto loc_8323C0E8;
	case 23:
		goto loc_8323C0B8;
	case 24:
		goto loc_8323C0C4;
	case 25:
		goto loc_8323C0D0;
	case 26:
		goto loc_8323C0DC;
	default:
		return;
	}
	// lwz r25,-16300(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + -16300);
	// lwz r25,-16288(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + -16288);
	// lwz r25,-16244(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + -16244);
	// lwz r25,-16152(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + -16152);
	// lwz r25,-16152(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + -16152);
	// lwz r25,-16152(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + -16152);
	// lwz r25,-16152(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + -16152);
	// lwz r25,-16152(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + -16152);
	// lwz r25,-16152(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + -16152);
	// lwz r25,-16152(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + -16152);
	// lwz r25,-16152(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + -16152);
	// lwz r25,-16152(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + -16152);
	// lwz r25,-16152(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + -16152);
	// lwz r25,-16152(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + -16152);
	// lwz r25,-16152(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + -16152);
	// lwz r25,-16152(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + -16152);
	// lwz r25,-16152(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + -16152);
	// lwz r25,-16152(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + -16152);
	// lwz r25,-16152(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + -16152);
	// lwz r25,-16152(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + -16152);
	// lwz r25,-16152(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + -16152);
	// lwz r25,-16152(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + -16152);
	// lwz r25,-16152(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + -16152);
	// lwz r25,-16200(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + -16200);
	// lwz r25,-16188(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + -16188);
	// lwz r25,-16176(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + -16176);
	// lwz r25,-16164(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + -16164);
loc_8323C054:
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r30,r11,-19016
	ctx.r30.s64 = ctx.r11.s64 + -19016;
	// b 0x8323c114
	goto loc_8323C114;
loc_8323C060:
	// lbz r9,42(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 42);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// lfs f0,180(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// addi r27,r11,-18616
	ctx.r27.s64 = ctx.r11.s64 + -18616;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f29,f11,f0
	ctx.f29.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// b 0x8323c114
	goto loc_8323C114;
loc_8323C08C:
	// lbz r9,42(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 42);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// lfs f0,180(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// addi r27,r11,-18600
	ctx.r27.s64 = ctx.r11.s64 + -18600;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f29,f11,f0
	ctx.f29.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// b 0x8323c114
	goto loc_8323C114;
loc_8323C0B8:
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r30,r11,-18936
	ctx.r30.s64 = ctx.r11.s64 + -18936;
	// b 0x8323c114
	goto loc_8323C114;
loc_8323C0C4:
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r30,r11,-18896
	ctx.r30.s64 = ctx.r11.s64 + -18896;
	// b 0x8323c114
	goto loc_8323C114;
loc_8323C0D0:
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r30,r11,-18848
	ctx.r30.s64 = ctx.r11.s64 + -18848;
	// b 0x8323c114
	goto loc_8323C114;
loc_8323C0DC:
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r30,r11,-18728
	ctx.r30.s64 = ctx.r11.s64 + -18728;
	// b 0x8323c114
	goto loc_8323C114;
loc_8323C0E8:
	// li r11,9
	ctx.r11.s64 = 9;
	// sth r10,130(r1)
	PPC_STORE_U16(ctx.r1.u32 + 130, ctx.r10.u16);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// sth r11,128(r1)
	PPC_STORE_U16(ctx.r1.u32 + 128, ctx.r11.u16);
	// li r5,1911
	ctx.r5.s64 = 1911;
	// li r4,344
	ctx.r4.s64 = 344;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320d778
	ctx.lr = 0x8323C10C;
	sub_8320D778(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83222030
	ctx.lr = 0x8323C114;
	sub_83222030(ctx, base);
loc_8323C114:
	// addic r11,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r11.s64 = ctx.r28.s64 + -1;
	// fmr f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f31.f64;
	// li r23,3
	ctx.r23.s64 = 3;
	// sth r31,192(r1)
	PPC_STORE_U16(ctx.r1.u32 + 192, ctx.r31.u16);
	// subfe r11,r11,r28
	temp.u8 = (~ctx.r11.u32 + ctx.r28.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r28.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r28.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r31,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r31.u32);
	// addi r10,r1,200
	ctx.r10.s64 = ctx.r1.s64 + 200;
	// sth r23,194(r1)
	PPC_STORE_U16(ctx.r1.u32 + 194, ctx.r23.u16);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stw r31,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r31.u32);
	// stw r10,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r10.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stw r31,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r31.u32);
	// stw r31,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r31.u32);
	// stw r31,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r31.u32);
	// beq cr6,0x8323c16c
	if (cr6.eq) goto loc_8323C16C;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8320db50
	ctx.lr = 0x8323C168;
	sub_8320DB50(ctx, base);
	// b 0x8323c194
	goto loc_8323C194;
loc_8323C16C:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// beq cr6,0x8323c188
	if (cr6.eq) goto loc_8323C188;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x8323C184;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8323c190
	goto loc_8323C190;
loc_8323C188:
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8323C190;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8323C190:
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
loc_8323C194:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r10,r1,120
	ctx.r10.s64 = ctx.r1.s64 + 120;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// sth r31,168(r1)
	PPC_STORE_U16(ctx.r1.u32 + 168, ctx.r31.u16);
	// stb r31,170(r1)
	PPC_STORE_U8(ctx.r1.u32 + 170, ctx.r31.u8);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stw r31,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r31.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// stw r10,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r10.u32);
	// lhz r9,14(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 14);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x8323c564
	if (!cr6.gt) goto loc_8323C564;
	// mr r20,r31
	ctx.r20.u64 = ctx.r31.u64;
	// li r14,2003
	ctx.r14.s64 = 2003;
	// li r15,2004
	ctx.r15.s64 = 2004;
	// li r16,2005
	ctx.r16.s64 = 2005;
	// li r17,1472
	ctx.r17.s64 = 1472;
	// li r18,1473
	ctx.r18.s64 = 1473;
	// li r24,5
	ctx.r24.s64 = 5;
	// li r19,2001
	ctx.r19.s64 = 2001;
loc_8323C1F4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r25,r11,r20
	ctx.r25.u64 = ctx.r11.u64 + ctx.r20.u64;
	// lbz r10,5(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + 5);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x8323c540
	if (!cr6.eq) goto loc_8323C540;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r4,r1,328
	ctx.r4.s64 = ctx.r1.s64 + 328;
	// lhz r10,6(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 6);
	// stw r31,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r31.u32);
	// stb r31,338(r1)
	PPC_STORE_U8(ctx.r1.u32 + 338, ctx.r31.u8);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r11,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r11.u32);
	// sth r10,336(r1)
	PPC_STORE_U16(ctx.r1.u32 + 336, ctx.r10.u16);
	// bl 0x8322ab20
	ctx.lr = 0x8323C234;
	sub_8322AB20(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r25,16
	ctx.r3.s64 = ctx.r25.s64 + 16;
	// bl 0x83220448
	ctx.lr = 0x8323C240;
	sub_83220448(ctx, base);
	// addi r3,r28,16
	ctx.r3.s64 = ctx.r28.s64 + 16;
	// stfs f1,304(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 304, temp.u32);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x83220448
	ctx.lr = 0x8323C250;
	sub_83220448(ctx, base);
	// lhz r9,6(r25)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r25.u32 + 6);
	// stfs f1,352(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 352, temp.u32);
	// cmplwi cr6,r9,1922
	cr6.compare<uint32_t>(ctx.r9.u32, 1922, xer);
	// sth r9,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r9.u16);
	// bne cr6,0x8323c284
	if (!cr6.eq) goto loc_8323C284;
	// lfs f0,20(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f0,308(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 308, temp.u32);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x8323ba18
	ctx.lr = 0x8323C27C;
	sub_8323BA18(ctx, base);
	// li r30,6
	ctx.r30.s64 = 6;
	// b 0x8323c36c
	goto loc_8323C36C;
loc_8323C284:
	// lhz r11,6(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 6);
	// cmplwi cr6,r11,2002
	cr6.compare<uint32_t>(ctx.r11.u32, 2002, xer);
	// bne cr6,0x8323c34c
	if (!cr6.eq) goto loc_8323C34C;
	// fctiwz f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f31.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f31.f64));
	// stfd f0,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.f0.u64);
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// fctiwz f13,f1
	ctx.f13.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f13,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.f13.u64);
	// rlwinm r5,r11,16,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF;
	// lwz r10,156(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r11,r11,24,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// std r5,456(r1)
	PPC_STORE_U64(ctx.r1.u32 + 456, ctx.r5.u64);
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
	// std r4,448(r1)
	PPC_STORE_U64(ctx.r1.u32 + 448, ctx.r4.u64);
	// rlwinm r7,r10,16,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFF;
	// std r11,432(r1)
	PPC_STORE_U64(ctx.r1.u32 + 432, ctx.r11.u64);
	// rlwinm r6,r10,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// std r3,464(r1)
	PPC_STORE_U64(ctx.r1.u32 + 464, ctx.r3.u64);
	// std r7,424(r1)
	PPC_STORE_U64(ctx.r1.u32 + 424, ctx.r7.u64);
	// lfd f11,432(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 432);
	// std r6,440(r1)
	PPC_STORE_U64(ctx.r1.u32 + 440, ctx.r6.u64);
	// lfd f9,464(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 464);
	// lfd f8,440(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 440);
	// sth r14,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r14.u16);
	// lfd f6,424(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 424);
	// sth r15,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r15.u16);
	// lfd f10,448(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 448);
	// fcfid f3,f10
	ctx.f3.f64 = double(ctx.f10.s64);
	// lfd f12,456(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 456);
	// fcfid f5,f11
	ctx.f5.f64 = double(ctx.f11.s64);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// sth r16,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r16.u16);
	// fcfid f4,f12
	ctx.f4.f64 = double(ctx.f12.s64);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// fcfid f2,f6
	ctx.f2.f64 = double(ctx.f6.s64);
	// fcfid f1,f9
	ctx.f1.f64 = double(ctx.f9.s64);
	// frsp f11,f3
	ctx.f11.f64 = double(float(ctx.f3.f64));
	// stfs f11,312(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 312, temp.u32);
	// frsp f13,f5
	ctx.f13.f64 = double(float(ctx.f5.f64));
	// stfs f13,308(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 308, temp.u32);
	// frsp f0,f7
	ctx.f0.f64 = double(float(ctx.f7.f64));
	// stfs f0,356(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 356, temp.u32);
	// frsp f12,f4
	ctx.f12.f64 = double(float(ctx.f4.f64));
	// stfs f12,304(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 304, temp.u32);
	// frsp f10,f2
	ctx.f10.f64 = double(float(ctx.f2.f64));
	// stfs f10,352(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 352, temp.u32);
	// frsp f9,f1
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// stfs f9,360(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 360, temp.u32);
	// b 0x8323c36c
	goto loc_8323C36C;
loc_8323C34C:
	// cmplwi cr6,r11,2000
	cr6.compare<uint32_t>(ctx.r11.u32, 2000, xer);
	// bne cr6,0x8323c36c
	if (!cr6.eq) goto loc_8323C36C;
	// lfs f0,24(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// sth r17,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r17.u16);
	// stfs f0,308(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 308, temp.u32);
	// sth r18,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r18.u16);
	// stfs f1,356(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 356, temp.u32);
	// li r30,2
	ctx.r30.s64 = 2;
loc_8323C36C:
	// addi r27,r1,80
	ctx.r27.s64 = ctx.r1.s64 + 80;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
loc_8323C378:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8323c4a0
	if (cr6.eq) goto loc_8323C4A0;
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r11,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r11.u32);
	// lfs f0,220(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 220);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r10.u32);
	// fmuls f1,f0,f28
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// stw r31,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r31.u32);
	// stw r31,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r31.u32);
	// sth r31,392(r1)
	PPC_STORE_U16(ctx.r1.u32 + 392, ctx.r31.u16);
	// stb r31,394(r1)
	PPC_STORE_U8(ctx.r1.u32 + 394, ctx.r31.u8);
	// stw r31,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r31.u32);
	// stw r31,408(r1)
	PPC_STORE_U32(ctx.r1.u32 + 408, ctx.r31.u32);
	// stw r23,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r23.u32);
	// stb r21,420(r1)
	PPC_STORE_U8(ctx.r1.u32 + 420, ctx.r21.u8);
	// stw r24,412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 412, ctx.r24.u32);
	// lhz r9,192(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 192);
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// addi r8,r11,-5
	ctx.r8.s64 = ctx.r11.s64 + -5;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832248d8
	ctx.lr = 0x8323C3E8;
	sub_832248D8(ctx, base);
	// addi r7,r1,304
	ctx.r7.s64 = ctx.r1.s64 + 304;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfsx f31,r28,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r7.u32);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x832248d8
	ctx.lr = 0x8323C400;
	sub_832248D8(ctx, base);
	// addi r6,r1,352
	ctx.r6.s64 = ctx.r1.s64 + 352;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfsx f0,r28,r6
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r6.u32);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// bl 0x832248d8
	ctx.lr = 0x8323C418;
	sub_832248D8(ctx, base);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// lfs f0,220(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 220);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x832248d8
	ctx.lr = 0x8323C430;
	sub_832248D8(ctx, base);
	// lwz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// rlwinm r4,r5,0,18,18
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8323c474
	if (cr6.eq) goto loc_8323C474;
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// stw r31,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r31.u32);
	// sth r19,232(r1)
	PPC_STORE_U16(ctx.r1.u32 + 232, ctx.r19.u16);
	// stb r31,234(r1)
	PPC_STORE_U8(ctx.r1.u32 + 234, ctx.r31.u8);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x8322ab20
	ctx.lr = 0x8323C45C;
	sub_8322AB20(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8323c474
	if (cr6.eq) goto loc_8323C474;
	// addi r4,r3,16
	ctx.r4.s64 = ctx.r3.s64 + 16;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x832240b8
	ctx.lr = 0x8323C474;
	sub_832240B8(ctx, base);
loc_8323C474:
	// li r6,7
	ctx.r6.s64 = 7;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r5,r1,384
	ctx.r5.s64 = ctx.r1.s64 + 384;
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x8322d248
	ctx.lr = 0x8323C488;
	sub_8322D248(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83220448
	ctx.lr = 0x8323C490;
	sub_83220448(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x83222030
	ctx.lr = 0x8323C49C;
	sub_83222030(ctx, base);
	// b 0x8323c4c0
	goto loc_8323C4C0;
loc_8323C4A0:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r10,r1,352
	ctx.r10.s64 = ctx.r1.s64 + 352;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r11,r1,304
	ctx.r11.s64 = ctx.r1.s64 + 304;
	// lfsx f13,r28,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f0,r28,r11
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fmadds f31,f12,f30,f0
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f30.f64 + ctx.f0.f64));
loc_8323C4C0:
	// lhz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,1914
	cr6.compare<uint32_t>(ctx.r30.u32, 1914, xer);
	// blt cr6,0x8323c4f0
	if (cr6.lt) goto loc_8323C4F0;
	// cmplwi cr6,r30,1921
	cr6.compare<uint32_t>(ctx.r30.u32, 1921, xer);
	// bgt cr6,0x8323c4f0
	if (cr6.gt) goto loc_8323C4F0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x8323bba0
	ctx.lr = 0x8323C4EC;
	sub_8323BBA0(ctx, base);
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
loc_8323C4F0:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8323c530
	if (!cr6.eq) goto loc_8323C530;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x832248d8
	ctx.lr = 0x8323C508;
	sub_832248D8(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// sth r30,168(r1)
	PPC_STORE_U16(ctx.r1.u32 + 168, ctx.r30.u16);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,170(r1)
	PPC_STORE_U8(ctx.r1.u32 + 170, ctx.r31.u8);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// bl 0x8327bb30
	ctx.lr = 0x8323C530;
	sub_8327BB30(ctx, base);
loc_8323C530:
	// addic. r26,r26,-1
	xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	cr0.compare<int32_t>(ctx.r26.s32, 0, xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r27,r27,2
	ctx.r27.s64 = ctx.r27.s64 + 2;
	// bne 0x8323c378
	if (!cr0.eq) goto loc_8323C378;
loc_8323C540:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r20,r20,24
	ctx.r20.s64 = ctx.r20.s64 + 24;
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// lhz r8,14(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 14);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, xer);
	// blt cr6,0x8323c1f4
	if (cr6.lt) goto loc_8323C1F4;
loc_8323C564:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8320d9e8
	ctx.lr = 0x8323C56C;
	sub_8320D9E8(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x83222030
	ctx.lr = 0x8323C574;
	sub_83222030(ctx, base);
	// li r11,1309
	ctx.r11.s64 = 1309;
	// li r10,1310
	ctx.r10.s64 = 1310;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// li r30,1311
	ctx.r30.s64 = 1311;
	// stw r31,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r31.u32);
	// sth r11,280(r1)
	PPC_STORE_U16(ctx.r1.u32 + 280, ctx.r11.u16);
	// addi r9,r1,240
	ctx.r9.s64 = ctx.r1.s64 + 240;
	// stb r31,282(r1)
	PPC_STORE_U8(ctx.r1.u32 + 282, ctx.r31.u8);
	// li r8,64
	ctx.r8.s64 = 64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r6,32
	ctx.r6.s64 = 32;
	// sth r10,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r10.u16);
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// stb r31,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r31.u8);
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r31.u32);
	// sth r30,248(r1)
	PPC_STORE_U16(ctx.r1.u32 + 248, ctx.r30.u16);
	// stb r31,250(r1)
	PPC_STORE_U8(ctx.r1.u32 + 250, ctx.r31.u8);
	// bl 0x8323b1d8
	ctx.lr = 0x8323C5D0;
	sub_8323B1D8(ctx, base);
	// lfs f0,32(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f28,f0
	cr6.compare(ctx.f28.f64, ctx.f0.f64);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bge cr6,0x8323c5e4
	if (!cr6.lt) goto loc_8323C5E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8323C5E4:
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x831ce7c4
	ctx.lr = 0x8323C5F0;
	__restfpr_28(ctx, base);
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323C5F4"))) PPC_WEAK_FUNC(sub_8323C5F4);
PPC_FUNC_IMPL(__imp__sub_8323C5F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8323C5F8"))) PPC_WEAK_FUNC(sub_8323C5F8);
PPC_FUNC_IMPL(__imp__sub_8323C5F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8323C600;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x8323c670
	if (!cr6.gt) goto loc_8323C670;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_8323C620:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r30,r29,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lhz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8323c654
	if (cr6.eq) goto loc_8323C654;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x832356e0
	ctx.lr = 0x8323C63C;
	sub_832356E0(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x832356e0
	ctx.lr = 0x8323C644;
	sub_832356E0(ctx, base);
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83294018
	ctx.lr = 0x8323C654;
	sub_83294018(ctx, base);
loc_8323C654:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83209d68
	ctx.lr = 0x8323C65C;
	sub_83209D68(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, xer);
	// blt cr6,0x8323c620
	if (cr6.lt) goto loc_8323C620;
loc_8323C670:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8323c688
	if (cr6.eq) goto loc_8323C688;
	// bl 0x83209d68
	ctx.lr = 0x8323C680;
	sub_83209D68(ctx, base);
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
loc_8323C688:
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323C698"))) PPC_WEAK_FUNC(sub_8323C698);
PPC_FUNC_IMPL(__imp__sub_8323C698) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x8323C6A0;
	__savegprlr_24(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x8323c788
	if (!cr6.gt) goto loc_8323C788;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// li r24,1303
	ctx.r24.s64 = 1303;
	// li r25,1304
	ctx.r25.s64 = 1304;
	// li r26,1305
	ctx.r26.s64 = 1305;
loc_8323C6CC:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwzx r30,r29,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lhz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8323c774
	if (cr6.eq) goto loc_8323C774;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// rlwinm r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8323c754
	if (!cr6.eq) goto loc_8323C754;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8323bcc8
	ctx.lr = 0x8323C6F8;
	sub_8323BCC8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8323c774
	if (cr6.eq) goto loc_8323C774;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r8,512
	ctx.r8.s64 = 512;
	// sth r24,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r24.u16);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// stb r31,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r31.u8);
	// li r6,256
	ctx.r6.s64 = 256;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r4,128
	ctx.r4.s64 = 128;
	// sth r25,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r25.u16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r31,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r31.u8);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// sth r26,120(r1)
	PPC_STORE_U16(ctx.r1.u32 + 120, ctx.r26.u16);
	// stb r31,122(r1)
	PPC_STORE_U8(ctx.r1.u32 + 122, ctx.r31.u8);
	// bl 0x8323b1d8
	ctx.lr = 0x8323C754;
	sub_8323B1D8(ctx, base);
loc_8323C754:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x832356e0
	ctx.lr = 0x8323C75C;
	sub_832356E0(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x832356e0
	ctx.lr = 0x8323C764;
	sub_832356E0(ctx, base);
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83294018
	ctx.lr = 0x8323C774;
	sub_83294018(ctx, base);
loc_8323C774:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, xer);
	// blt cr6,0x8323c6cc
	if (cr6.lt) goto loc_8323C6CC;
loc_8323C788:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323C790"))) PPC_WEAK_FUNC(sub_8323C790);
PPC_FUNC_IMPL(__imp__sub_8323C790) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8323C798;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x8323c810
	if (!cr6.gt) goto loc_8323C810;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8323C7B8:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwzx r31,r30,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// lhz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8323c7fc
	if (cr6.eq) goto loc_8323C7FC;
	// bl 0x83221440
	ctx.lr = 0x8323C7D4;
	sub_83221440(ctx, base);
	// cmplw cr6,r27,r3
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r3.u32, xer);
	// bne cr6,0x8323c7fc
	if (!cr6.eq) goto loc_8323C7FC;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x832356e0
	ctx.lr = 0x8323C7E4;
	sub_832356E0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x832356e0
	ctx.lr = 0x8323C7EC;
	sub_832356E0(ctx, base);
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83294018
	ctx.lr = 0x8323C7FC;
	sub_83294018(ctx, base);
loc_8323C7FC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, xer);
	// blt cr6,0x8323c7b8
	if (cr6.lt) goto loc_8323C7B8;
loc_8323C810:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323C818"))) PPC_WEAK_FUNC(sub_8323C818);
PPC_FUNC_IMPL(__imp__sub_8323C818) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8323C820;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x8323c868
	if (!cr6.gt) goto loc_8323C868;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8323C844:
	// lwzx r31,r11,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lhz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8323c900
	if (cr6.eq) goto loc_8323C900;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r7
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, xer);
	// blt cr6,0x8323c844
	if (cr6.lt) goto loc_8323C844;
loc_8323C868:
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x83209df8
	ctx.lr = 0x8323C878;
	sub_83209DF8(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x83209aa8
	ctx.lr = 0x8323C884;
	sub_83209AA8(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r3.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r7.u32);
	// bl 0x83235198
	ctx.lr = 0x8323C8A8;
	sub_83235198(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// bl 0x83235198
	ctx.lr = 0x8323C8B0;
	sub_83235198(ctx, base);
	// lis r6,-31772
	ctx.r6.s64 = -2082209792;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// addi r4,r6,5696
	ctx.r4.s64 = ctx.r6.s64 + 5696;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// li r3,541
	ctx.r3.s64 = 541;
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// lfs f0,9008(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lfs f13,132(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// sth r3,40(r31)
	PPC_STORE_U16(ctx.r31.u32 + 40, ctx.r3.u16);
loc_8323C8E0:
	// stfs f0,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stb r29,42(r31)
	PPC_STORE_U8(ctx.r31.u32 + 42, ctx.r29.u8);
	// stfs f13,24(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
loc_8323C8F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8323C900:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8323c8f4
	if (!cr6.eq) goto loc_8323C8F4;
	// bl 0x83235198
	ctx.lr = 0x8323C910;
	sub_83235198(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// bl 0x83235198
	ctx.lr = 0x8323C918;
	sub_83235198(ctx, base);
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// addi r9,r11,5696
	ctx.r9.s64 = ctx.r11.s64 + 5696;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// li r8,541
	ctx.r8.s64 = 541;
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lfs f13,132(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// sth r8,40(r31)
	PPC_STORE_U16(ctx.r31.u32 + 40, ctx.r8.u16);
	// b 0x8323c8e0
	goto loc_8323C8E0;
}

__attribute__((alias("__imp__sub_8323C94C"))) PPC_WEAK_FUNC(sub_8323C94C);
PPC_FUNC_IMPL(__imp__sub_8323C94C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8323C950"))) PPC_WEAK_FUNC(sub_8323C950);
PPC_FUNC_IMPL(__imp__sub_8323C950) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8323C958;
	__savegprlr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,2(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// li r9,12288
	ctx.r9.s64 = 12288;
	// lhz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// srw r6,r9,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r8.u8 & 0x3F));
	// xori r11,r7,142
	ctx.r11.u64 = ctx.r7.u64 ^ 142;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// srawi r4,r5,31
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 31;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// and r3,r4,r6
	ctx.r3.u64 = ctx.r4.u64 & ctx.r6.u64;
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8323c9ac
	if (cr6.eq) goto loc_8323C9AC;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r31,1
	ctx.r31.s64 = 1;
	// ori r9,r11,2048
	ctx.r9.u64 = ctx.r11.u64 | 2048;
	// stw r9,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r9.u32);
loc_8323C9AC:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// li r29,541
	ctx.r29.s64 = 541;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8323ca5c
	if (!cr6.eq) goto loc_8323CA5C;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r6,64
	ctx.r6.s64 = 64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// sth r10,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r10.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r10,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r10.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832264e0
	ctx.lr = 0x8323C9E0;
	sub_832264E0(ctx, base);
	// lhz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8323ca0c
	if (!cr6.eq) goto loc_8323CA0C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x832277e8
	ctx.lr = 0x8323C9F4;
	sub_832277E8(ctx, base);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// sth r10,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r10.u16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8323ca0c
	if (!cr6.eq) goto loc_8323CA0C;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r10,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r10.u16);
loc_8323CA0C:
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// cmpwi cr6,r11,586
	cr6.compare<int32_t>(ctx.r11.s32, 586, xer);
	// bgt cr6,0x8323ca44
	if (cr6.gt) goto loc_8323CA44;
	// cmpwi cr6,r11,585
	cr6.compare<int32_t>(ctx.r11.s32, 585, xer);
	// bge cr6,0x8323ca3c
	if (!cr6.lt) goto loc_8323CA3C;
	// cmpwi cr6,r11,541
	cr6.compare<int32_t>(ctx.r11.s32, 541, xer);
	// beq cr6,0x8323ca54
	if (cr6.eq) goto loc_8323CA54;
	// cmpwi cr6,r11,576
	cr6.compare<int32_t>(ctx.r11.s32, 576, xer);
	// ble cr6,0x8323ca5c
	if (!cr6.gt) goto loc_8323CA5C;
	// cmpwi cr6,r11,584
	cr6.compare<int32_t>(ctx.r11.s32, 584, xer);
	// ble cr6,0x8323ca54
	if (!cr6.gt) goto loc_8323CA54;
	// b 0x8323ca5c
	goto loc_8323CA5C;
loc_8323CA3C:
	// sth r29,40(r30)
	PPC_STORE_U16(ctx.r30.u32 + 40, ctx.r29.u16);
	// b 0x8323ca58
	goto loc_8323CA58;
loc_8323CA44:
	// cmpwi cr6,r11,607
	cr6.compare<int32_t>(ctx.r11.s32, 607, xer);
	// blt cr6,0x8323ca5c
	if (cr6.lt) goto loc_8323CA5C;
	// cmpwi cr6,r11,610
	cr6.compare<int32_t>(ctx.r11.s32, 610, xer);
	// bgt cr6,0x8323ca5c
	if (cr6.gt) goto loc_8323CA5C;
loc_8323CA54:
	// sth r10,40(r30)
	PPC_STORE_U16(ctx.r30.u32 + 40, ctx.r10.u16);
loc_8323CA58:
	// li r31,1
	ctx.r31.s64 = 1;
loc_8323CA5C:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8323cac8
	if (!cr6.eq) goto loc_8323CAC8;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r4,r11,12484
	ctx.r4.s64 = ctx.r11.s64 + 12484;
	// bl 0x83296de8
	ctx.lr = 0x8323CA7C;
	sub_83296DE8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8323cac8
	if (!cr6.eq) goto loc_8323CAC8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,11
	ctx.r3.s64 = ctx.r11.s64 + 11;
	// bl 0x832984d0
	ctx.lr = 0x8323CA98;
	sub_832984D0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8323caa8
	if (!cr6.eq) goto loc_8323CAA8;
	// sth r29,40(r30)
	PPC_STORE_U16(ctx.r30.u32 + 40, ctx.r29.u16);
	// b 0x8323cac4
	goto loc_8323CAC4;
loc_8323CAA8:
	// cmpwi cr6,r3,100
	cr6.compare<int32_t>(ctx.r3.s32, 100, xer);
	// bne cr6,0x8323cab8
	if (!cr6.eq) goto loc_8323CAB8;
	// li r11,581
	ctx.r11.s64 = 581;
	// b 0x8323cac0
	goto loc_8323CAC0;
loc_8323CAB8:
	// li r11,585
	ctx.r11.s64 = 585;
	// stb r3,42(r30)
	PPC_STORE_U8(ctx.r30.u32 + 42, ctx.r3.u8);
loc_8323CAC0:
	// sth r11,40(r30)
	PPC_STORE_U16(ctx.r30.u32 + 40, ctx.r11.u16);
loc_8323CAC4:
	// li r31,1
	ctx.r31.s64 = 1;
loc_8323CAC8:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8323cb34
	if (!cr6.eq) goto loc_8323CB34;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r4,r11,12468
	ctx.r4.s64 = ctx.r11.s64 + 12468;
	// bl 0x83296de8
	ctx.lr = 0x8323CAE8;
	sub_83296DE8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8323cb34
	if (!cr6.eq) goto loc_8323CB34;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x832984d0
	ctx.lr = 0x8323CB04;
	sub_832984D0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8323cb14
	if (!cr6.eq) goto loc_8323CB14;
	// sth r29,40(r30)
	PPC_STORE_U16(ctx.r30.u32 + 40, ctx.r29.u16);
	// b 0x8323cb30
	goto loc_8323CB30;
loc_8323CB14:
	// cmpwi cr6,r3,100
	cr6.compare<int32_t>(ctx.r3.s32, 100, xer);
	// bne cr6,0x8323cb24
	if (!cr6.eq) goto loc_8323CB24;
	// li r11,582
	ctx.r11.s64 = 582;
	// b 0x8323cb2c
	goto loc_8323CB2C;
loc_8323CB24:
	// li r11,586
	ctx.r11.s64 = 586;
	// stb r3,42(r30)
	PPC_STORE_U8(ctx.r30.u32 + 42, ctx.r3.u8);
loc_8323CB2C:
	// sth r11,40(r30)
	PPC_STORE_U16(ctx.r30.u32 + 40, ctx.r11.u16);
loc_8323CB30:
	// li r31,1
	ctx.r31.s64 = 1;
loc_8323CB34:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8323cb54
	if (!cr6.eq) goto loc_8323CB54;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,1911
	ctx.r5.s64 = 1911;
	// li r4,344
	ctx.r4.s64 = 344;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8320d880
	ctx.lr = 0x8323CB54;
	sub_8320D880(ctx, base);
loc_8323CB54:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323CB5C"))) PPC_WEAK_FUNC(sub_8323CB5C);
PPC_FUNC_IMPL(__imp__sub_8323CB5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8323CB60"))) PPC_WEAK_FUNC(sub_8323CB60);
PPC_FUNC_IMPL(__imp__sub_8323CB60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x8323CB68;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r24,r28
	ctx.r24.u64 = ctx.r28.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x8323cc60
	if (!cr6.gt) goto loc_8323CC60;
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
loc_8323CB8C:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwzx r29,r26,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// cmplw cr6,r29,r27
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, xer);
	// beq cr6,0x8323cc4c
	if (cr6.eq) goto loc_8323CC4C;
	// lhz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8323cc4c
	if (cr6.eq) goto loc_8323CC4C;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8323cc4c
	if (!cr6.eq) goto loc_8323CC4C;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// lhz r10,14(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 14);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x8323cc1c
	if (!cr6.gt) goto loc_8323CC1C;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_8323CBD4:
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lhz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// stb r28,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r28.u8);
	// sth r10,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r10.u16);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8322b710
	ctx.lr = 0x8323CC00;
	sub_8322B710(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lhz r8,14(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 14);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// cmpw cr6,r31,r7
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r7.s32, xer);
	// blt cr6,0x8323cbd4
	if (cr6.lt) goto loc_8323CBD4;
loc_8323CC1C:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8322b868
	ctx.lr = 0x8323CC24;
	sub_8322B868(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8323cc4c
	if (!cr6.eq) goto loc_8323CC4C;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x832356e0
	ctx.lr = 0x8323CC34;
	sub_832356E0(ctx, base);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x832356e0
	ctx.lr = 0x8323CC3C;
	sub_832356E0(ctx, base);
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83294018
	ctx.lr = 0x8323CC4C;
	sub_83294018(ctx, base);
loc_8323CC4C:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmpw cr6,r24,r11
	cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, xer);
	// blt cr6,0x8323cb8c
	if (cr6.lt) goto loc_8323CB8C;
loc_8323CC60:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323CC68"))) PPC_WEAK_FUNC(sub_8323CC68);
PPC_FUNC_IMPL(__imp__sub_8323CC68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x8323CC70;
	__savegprlr_20(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bge cr6,0x8323cc94
	if (!cr6.lt) goto loc_8323CC94;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,12424
	ctx.r3.s64 = ctx.r11.s64 + 12424;
	// bl 0x8320d088
	ctx.lr = 0x8323CC94;
	sub_8320D088(ctx, base);
loc_8323CC94:
	// lwz r10,28(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// blt cr6,0x8323cec0
	if (cr6.lt) goto loc_8323CEC0;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r9,r11,24688
	ctx.r9.s64 = ctx.r11.s64 + 24688;
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8323cec0
	if (cr6.eq) goto loc_8323CEC0;
	// lwz r22,420(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 420);
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// beq cr6,0x8323cec0
	if (cr6.eq) goto loc_8323CEC0;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
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
	// add r23,r10,r11
	ctx.r23.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83221440
	ctx.lr = 0x8323CCE4;
	sub_83221440(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8323cd14
	if (!cr6.eq) goto loc_8323CD14;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lhz r4,8(r27)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r27.u32 + 8);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// addi r5,r11,12460
	ctx.r5.s64 = ctx.r11.s64 + 12460;
	// li r6,29
	ctx.r6.s64 = 29;
	// li r3,344
	ctx.r3.s64 = 344;
	// bl 0x8320d428
	ctx.lr = 0x8323CD0C;
	sub_8320D428(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_8323CD14:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r24,r28
	ctx.r24.u64 = ctx.r28.u64;
	// mr r21,r28
	ctx.r21.u64 = ctx.r28.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x8323ce88
	if (!cr6.gt) goto loc_8323CE88;
	// mr r25,r28
	ctx.r25.u64 = ctx.r28.u64;
	// li r26,1
	ctx.r26.s64 = 1;
loc_8323CD34:
	// lwz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// lwzx r30,r11,r25
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// lhz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8323ce74
	if (cr6.eq) goto loc_8323CE74;
	// bl 0x83221440
	ctx.lr = 0x8323CD50;
	sub_83221440(ctx, base);
	// cmplw cr6,r20,r3
	cr6.compare<uint32_t>(ctx.r20.u32, ctx.r3.u32, xer);
	// bne cr6,0x8323ce74
	if (!cr6.eq) goto loc_8323CE74;
	// lwz r11,28(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// blt cr6,0x8323ce64
	if (cr6.lt) goto loc_8323CE64;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// ble cr6,0x8323cdf8
	if (!cr6.gt) goto loc_8323CDF8;
loc_8323CD74:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// li r6,64
	ctx.r6.s64 = 64;
	// sth r28,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r28.u16);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stb r28,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r28.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832264e0
	ctx.lr = 0x8323CD9C;
	sub_832264E0(ctx, base);
	// lhz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8323cdc4
	if (!cr6.eq) goto loc_8323CDC4;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x832277e8
	ctx.lr = 0x8323CDB0;
	sub_832277E8(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8323cdc4
	if (!cr6.eq) goto loc_8323CDC4;
	// sth r26,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r26.u16);
loc_8323CDC4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8322b710
	ctx.lr = 0x8323CDD0;
	sub_8322B710(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8323cddc
	if (!cr6.eq) goto loc_8323CDDC;
	// mr r24,r26
	ctx.r24.u64 = ctx.r26.u64;
loc_8323CDDC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8322b710
	ctx.lr = 0x8323CDE8;
	sub_8322B710(ctx, base);
	// lwz r11,28(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// blt cr6,0x8323cd74
	if (cr6.lt) goto loc_8323CD74;
loc_8323CDF8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lhz r9,14(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 14);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x8323ce54
	if (!cr6.gt) goto loc_8323CE54;
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// add r8,r28,r9
	ctx.r8.u64 = ctx.r28.u64 + ctx.r9.u64;
loc_8323CE20:
	// lbz r8,5(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + 5);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// beq cr6,0x8323ce50
	if (cr6.eq) goto loc_8323CE50;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lhz r5,14(r6)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r6.u32 + 14);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// cmpw cr6,r10,r4
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, xer);
	// blt cr6,0x8323ce20
	if (cr6.lt) goto loc_8323CE20;
	// b 0x8323ce54
	goto loc_8323CE54;
loc_8323CE50:
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
loc_8323CE54:
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8323ce74
	if (!cr6.eq) goto loc_8323CE74;
	// b 0x8323ce68
	goto loc_8323CE68;
loc_8323CE64:
	// mr r24,r26
	ctx.r24.u64 = ctx.r26.u64;
loc_8323CE68:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// ori r10,r11,4096
	ctx.r10.u64 = ctx.r11.u64 | 4096;
	// stw r10,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r10.u32);
loc_8323CE74:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// cmpw cr6,r21,r11
	cr6.compare<int32_t>(ctx.r21.s32, ctx.r11.s32, xer);
	// blt cr6,0x8323cd34
	if (cr6.lt) goto loc_8323CD34;
loc_8323CE88:
	// lwz r31,12(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
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
	// beq cr6,0x8323ceb4
	if (cr6.eq) goto loc_8323CEB4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x8323CEB4;
	sub_83222030(ctx, base);
loc_8323CEB4:
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r24,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r24.u8);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
loc_8323CEC0:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323CEC8"))) PPC_WEAK_FUNC(sub_8323CEC8);
PPC_FUNC_IMPL(__imp__sub_8323CEC8) {
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
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8323cefc
	if (cr6.eq) goto loc_8323CEFC;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,12424
	ctx.r3.s64 = ctx.r11.s64 + 12424;
	// bl 0x8320d088
	ctx.lr = 0x8323CEFC;
	sub_8320D088(ctx, base);
loc_8323CEFC:
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8323cfa4
	if (cr6.eq) goto loc_8323CFA4;
	// lwz r9,420(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 420);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8323cfa4
	if (cr6.eq) goto loc_8323CFA4;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x8323cf6c
	if (!cr6.gt) goto loc_8323CF6C;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8323CF34:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lhz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8323cf58
	if (cr6.eq) goto loc_8323CF58;
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// li r30,1
	ctx.r30.s64 = 1;
	// ori r6,r7,4096
	ctx.r6.u64 = ctx.r7.u64 | 4096;
	// stw r6,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r6.u32);
loc_8323CF58:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r8,r11
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, xer);
	// blt cr6,0x8323cf34
	if (cr6.lt) goto loc_8323CF34;
loc_8323CF6C:
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
	// beq cr6,0x8323cf98
	if (cr6.eq) goto loc_8323CF98;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x8323CF98;
	sub_83222030(ctx, base);
loc_8323CF98:
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r30,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r30.u8);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
loc_8323CFA4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323CFBC"))) PPC_WEAK_FUNC(sub_8323CFBC);
PPC_FUNC_IMPL(__imp__sub_8323CFBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8323CFC0"))) PPC_WEAK_FUNC(sub_8323CFC0);
PPC_FUNC_IMPL(__imp__sub_8323CFC0) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r30,8(r3)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r11,r11,-2074
	ctx.r11.s64 = ctx.r11.s64 + -2074;
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(ctx.r11.u32, 15, xer);
	// bgt cr6,0x8323d088
	if (cr6.gt) goto loc_8323D088;
	// lis r12,-31964
	ctx.r12.s64 = -2094792704;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-12288
	ctx.r12.s64 = ctx.r12.s64 + -12288;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8323D040;
	case 1:
		goto loc_8323D040;
	case 2:
		goto loc_8323D040;
	case 3:
		goto loc_8323D088;
	case 4:
		goto loc_8323D088;
	case 5:
		goto loc_8323D088;
	case 6:
		goto loc_8323D088;
	case 7:
		goto loc_8323D040;
	case 8:
		goto loc_8323D040;
	case 9:
		goto loc_8323D088;
	case 10:
		goto loc_8323D088;
	case 11:
		goto loc_8323D088;
	case 12:
		goto loc_8323D088;
	case 13:
		goto loc_8323D088;
	case 14:
		goto loc_8323D088;
	case 15:
		goto loc_8323D040;
	default:
		return;
	}
	// lwz r25,-12224(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12224);
	// lwz r25,-12224(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12224);
	// lwz r25,-12224(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12224);
	// lwz r25,-12152(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12152);
	// lwz r25,-12152(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12152);
	// lwz r25,-12152(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12152);
	// lwz r25,-12152(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12152);
	// lwz r25,-12224(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12224);
	// lwz r25,-12224(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12224);
	// lwz r25,-12152(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12152);
	// lwz r25,-12152(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12152);
	// lwz r25,-12152(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12152);
	// lwz r25,-12152(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12152);
	// lwz r25,-12152(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12152);
	// lwz r25,-12152(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12152);
	// lwz r25,-12224(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12224);
loc_8323D040:
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
	// beq cr6,0x8323d06c
	if (cr6.eq) goto loc_8323D06C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x8323D06C;
	sub_83222030(ctx, base);
loc_8323D06C:
	// li r11,15
	ctx.r11.s64 = 15;
	// sth r30,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r30.u16);
	// li r10,344
	ctx.r10.s64 = 344;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r10,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r10.u16);
	// b 0x8323d08c
	goto loc_8323D08C;
loc_8323D088:
	// li r3,-4
	ctx.r3.s64 = -4;
loc_8323D08C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323D0A4"))) PPC_WEAK_FUNC(sub_8323D0A4);
PPC_FUNC_IMPL(__imp__sub_8323D0A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8323D0A8"))) PPC_WEAK_FUNC(sub_8323D0A8);
PPC_FUNC_IMPL(__imp__sub_8323D0A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab8
	ctx.lr = 0x8323D0B0;
	__savegprlr_16(ctx, base);
	// addi r12,r1,-136
	ctx.r12.s64 = ctx.r1.s64 + -136;
	// bl 0x831ce774
	ctx.lr = 0x8323D0B8;
	__savefpr_27(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r17,r11,24688
	ctx.r17.s64 = ctx.r11.s64 + 24688;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// lfs f29,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f29.f64 = double(temp.f32);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,16(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16);
	// fmr f27,f29
	ctx.f27.f64 = ctx.f29.f64;
	// fmr f28,f29
	ctx.f28.f64 = ctx.f29.f64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8323d0fc
	if (cr6.eq) goto loc_8323D0FC;
	// lwz r16,420(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + 420);
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(ctx.r16.u32, 0, xer);
	// bne cr6,0x8323d120
	if (!cr6.eq) goto loc_8323D120;
loc_8323D0FC:
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x83209aa8
	ctx.lr = 0x8323D104;
	sub_83209AA8(ctx, base);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r28.u32);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// lwz r11,16(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8323d120
	if (cr6.eq) goto loc_8323D120;
	// stw r3,420(r11)
	PPC_STORE_U32(ctx.r11.u32 + 420, ctx.r3.u32);
loc_8323D120:
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x8323c818
	ctx.lr = 0x8323D128;
	sub_8323C818(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83221440
	ctx.lr = 0x8323D134;
	sub_83221440(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8323d16c
	if (!cr6.eq) goto loc_8323D16C;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lhz r4,8(r25)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r25.u32 + 8);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// addi r5,r11,12460
	ctx.r5.s64 = ctx.r11.s64 + 12460;
	// li r6,29
	ctx.r6.s64 = 29;
	// li r3,344
	ctx.r3.s64 = 344;
	// bl 0x8320d428
	ctx.lr = 0x8323D15C;
	sub_8320D428(ctx, base);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// addi r12,r1,-136
	ctx.r12.s64 = ctx.r1.s64 + -136;
	// bl 0x831ce7c0
	ctx.lr = 0x8323D168;
	__restfpr_27(ctx, base);
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
loc_8323D16C:
	// lhz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lhz r27,8(r29)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r29.u32 + 8);
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
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
	// beq cr6,0x8323d19c
	if (cr6.eq) goto loc_8323D19C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x8323D19C;
	sub_83222030(ctx, base);
loc_8323D19C:
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// sth r27,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r27.u16);
	// mr r21,r28
	ctx.r21.u64 = ctx.r28.u64;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// lhz r10,14(r23)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r23.u32 + 14);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x8323d6e0
	if (!cr6.gt) goto loc_8323D6E0;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// mr r24,r28
	ctx.r24.u64 = ctx.r28.u64;
	// li r22,12288
	ctx.r22.s64 = 12288;
	// addi r20,r11,5696
	ctx.r20.s64 = ctx.r11.s64 + 5696;
	// addi r19,r10,12424
	ctx.r19.s64 = ctx.r10.s64 + 12424;
	// addi r18,r9,12460
	ctx.r18.s64 = ctx.r9.s64 + 12460;
loc_8323D1E8:
	// lwz r10,24(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 24);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r31,1
	ctx.r31.s64 = 1;
	// add r29,r24,r10
	ctx.r29.u64 = ctx.r24.u64 + ctx.r10.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lbz r9,5(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 5);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x8323d6c8
	if (!cr6.eq) goto loc_8323D6C8;
	// lhz r27,6(r29)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r29.u32 + 6);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// cmplwi cr6,r27,1921
	cr6.compare<uint32_t>(ctx.r27.u32, 1921, xer);
	// bgt cr6,0x8323d30c
	if (cr6.gt) goto loc_8323D30C;
	// cmplwi cr6,r27,1914
	cr6.compare<uint32_t>(ctx.r27.u32, 1914, xer);
	// bge cr6,0x8323d2d0
	if (!cr6.lt) goto loc_8323D2D0;
	// cmplwi cr6,r27,1911
	cr6.compare<uint32_t>(ctx.r27.u32, 1911, xer);
	// bgt cr6,0x8323d294
	if (cr6.gt) goto loc_8323D294;
	// beq cr6,0x8323d274
	if (cr6.eq) goto loc_8323D274;
	// cmplwi cr6,r27,1846
	cr6.compare<uint32_t>(ctx.r27.u32, 1846, xer);
	// beq cr6,0x8323d258
	if (cr6.eq) goto loc_8323D258;
	// cmplwi cr6,r27,1876
	cr6.compare<uint32_t>(ctx.r27.u32, 1876, xer);
	// bne cr6,0x8323d478
	if (!cr6.eq) goto loc_8323D478;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// bl 0x83220448
	ctx.lr = 0x8323D244;
	sub_83220448(ctx, base);
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f1.f64;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x8323d478
	goto loc_8323D478;
loc_8323D258:
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// bl 0x83220448
	ctx.lr = 0x8323D260;
	sub_83220448(ctx, base);
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x8323d478
	goto loc_8323D478;
loc_8323D274:
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8323c950
	ctx.lr = 0x8323D280;
	sub_8323C950(ctx, base);
	// lwz r9,16(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r31,r9,21,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 21) & 0x1;
	// b 0x8323d478
	goto loc_8323D478;
loc_8323D294:
	// cmplwi cr6,r9,1913
	cr6.compare<uint32_t>(ctx.r9.u32, 1913, xer);
	// bne cr6,0x8323d478
	if (!cr6.eq) goto loc_8323D478;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// bl 0x83220140
	ctx.lr = 0x8323D2A4;
	sub_83220140(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// bne cr6,0x8323d2bc
	if (!cr6.eq) goto loc_8323D2BC;
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
loc_8323D2BC:
	// stw r10,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r10.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x8323d478
	goto loc_8323D478;
loc_8323D2D0:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8323b778
	ctx.lr = 0x8323D2E4;
	sub_8323B778(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lhz r10,6(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 6);
	// sth r10,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, ctx.r10.u16);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8322bff8
	ctx.lr = 0x8323D300;
	sub_8322BFF8(ctx, base);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x8323d474
	goto loc_8323D474;
loc_8323D30C:
	// cmplwi cr6,r9,2000
	cr6.compare<uint32_t>(ctx.r9.u32, 2000, xer);
	// bgt cr6,0x8323d410
	if (cr6.gt) goto loc_8323D410;
	// beq cr6,0x8323d388
	if (cr6.eq) goto loc_8323D388;
	// cmplwi cr6,r9,1922
	cr6.compare<uint32_t>(ctx.r9.u32, 1922, xer);
	// beq cr6,0x8323d334
	if (cr6.eq) goto loc_8323D334;
	// cmplwi cr6,r9,1968
	cr6.compare<uint32_t>(ctx.r9.u32, 1968, xer);
	// bne cr6,0x8323d478
	if (!cr6.eq) goto loc_8323D478;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x8323d474
	goto loc_8323D474;
loc_8323D334:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8323b778
	ctx.lr = 0x8323D348;
	sub_8323B778(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// lhz r10,6(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 6);
	// sth r10,128(r1)
	PPC_STORE_U16(ctx.r1.u32 + 128, ctx.r10.u16);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8322bff8
	ctx.lr = 0x8323D364;
	sub_8322BFF8(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lhz r5,6(r29)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r29.u32 + 6);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8323b778
	ctx.lr = 0x8323D378;
	sub_8323B778(ctx, base);
	// stfs f1,20(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x8323d474
	goto loc_8323D474;
loc_8323D388:
	// lfs f0,132(r20)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
	// fmr f30,f0
	ctx.f30.f64 = ctx.f0.f64;
	// bl 0x832133d0
	ctx.lr = 0x8323D3A0;
	sub_832133D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8323d3c8
	if (!cr6.eq) goto loc_8323D3C8;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// lhz r4,8(r25)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r25.u32 + 8);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,122
	ctx.r6.s64 = 122;
	// li r3,344
	ctx.r3.s64 = 344;
	// bl 0x8320d428
	ctx.lr = 0x8323D3C4;
	sub_8320D428(ctx, base);
	// b 0x8323d3e0
	goto loc_8323D3E0;
loc_8323D3C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832162c8
	ctx.lr = 0x8323D3D0;
	sub_832162C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x83216380
	ctx.lr = 0x8323D3DC;
	sub_83216380(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
loc_8323D3E0:
	// sth r27,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r27.u16);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stb r28,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, ctx.r28.u8);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8322bff8
	ctx.lr = 0x8323D400;
	sub_8322BFF8(ctx, base);
	// stfs f30,24(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r30.u32 + 24, temp.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x8323d474
	goto loc_8323D474;
loc_8323D410:
	// cmplwi cr6,r9,2001
	cr6.compare<uint32_t>(ctx.r9.u32, 2001, xer);
	// bne cr6,0x8323d478
	if (!cr6.eq) goto loc_8323D478;
	// lhz r10,18(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 18);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// lhz r8,16(r29)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r29.u32 + 16);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// lwz r7,20(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// addi r5,r9,-163
	ctx.r5.s64 = ctx.r9.s64 + -163;
	// srw r4,r22,r6
	ctx.r4.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r22.u32 >> (ctx.r6.u8 & 0x3F));
	// srawi r3,r5,31
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 31;
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// cntlzw r8,r7
	ctx.r8.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// rlwinm r6,r8,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// and r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 & ctx.r10.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// and r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 & ctx.r6.u64;
	// clrlwi r4,r5,31
	ctx.r4.u64 = ctx.r5.u32 & 0x1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x8323d478
	if (!cr6.eq) goto loc_8323D478;
	// lwz r9,16(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// ori r8,r9,8192
	ctx.r8.u64 = ctx.r9.u64 | 8192;
	// stw r8,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r8.u32);
loc_8323D474:
	// li r31,1
	ctx.r31.s64 = 1;
loc_8323D478:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8323d5e8
	if (!cr6.eq) goto loc_8323D5E8;
	// lhz r10,6(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 6);
	// addi r10,r10,-1303
	ctx.r10.s64 = ctx.r10.s64 + -1303;
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// bgt cr6,0x8323d5e8
	if (cr6.gt) goto loc_8323D5E8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8323d580
	if (cr6.eq) goto loc_8323D580;
	// bdz 0x8323d58c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8323D58C;
	// bdz 0x8323d5d4
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8323D5D4;
	// bdz 0x8323d4c0
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8323D4C0;
	// bdz 0x8323d4cc
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8323D4CC;
	// bdz 0x8323d514
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8323D514;
	// bdz 0x8323d520
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8323D520;
	// bdz 0x8323d52c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8323D52C;
	// b 0x8323d574
	goto loc_8323D574;
loc_8323D4C0:
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// b 0x8323d5dc
	goto loc_8323D5DC;
loc_8323D4CC:
	// addi r31,r29,16
	ctx.r31.s64 = ctx.r29.s64 + 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83221378
	ctx.lr = 0x8323D4DC;
	sub_83221378(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8323d4f0
	if (cr6.eq) goto loc_8323D4F0;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// ori r9,r10,4
	ctx.r9.u64 = ctx.r10.u64 | 4;
	// b 0x8323d5dc
	goto loc_8323D5DC;
loc_8323D4F0:
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,1307
	ctx.r5.s64 = 1307;
	// li r4,344
	ctx.r4.s64 = 344;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8320d628
	ctx.lr = 0x8323D508;
	sub_8320D628(ctx, base);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// b 0x8323d5e8
	goto loc_8323D5E8;
loc_8323D514:
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// ori r9,r10,8
	ctx.r9.u64 = ctx.r10.u64 | 8;
	// b 0x8323d5dc
	goto loc_8323D5DC;
loc_8323D520:
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// ori r9,r10,16
	ctx.r9.u64 = ctx.r10.u64 | 16;
	// b 0x8323d5dc
	goto loc_8323D5DC;
loc_8323D52C:
	// addi r31,r29,16
	ctx.r31.s64 = ctx.r29.s64 + 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83221378
	ctx.lr = 0x8323D53C;
	sub_83221378(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8323d550
	if (cr6.eq) goto loc_8323D550;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// ori r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 | 32;
	// b 0x8323d5dc
	goto loc_8323D5DC;
loc_8323D550:
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,1310
	ctx.r5.s64 = 1310;
	// li r4,344
	ctx.r4.s64 = 344;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8320d628
	ctx.lr = 0x8323D568;
	sub_8320D628(ctx, base);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// b 0x8323d5e8
	goto loc_8323D5E8;
loc_8323D574:
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// ori r9,r10,64
	ctx.r9.u64 = ctx.r10.u64 | 64;
	// b 0x8323d5dc
	goto loc_8323D5DC;
loc_8323D580:
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// ori r9,r10,128
	ctx.r9.u64 = ctx.r10.u64 | 128;
	// b 0x8323d5dc
	goto loc_8323D5DC;
loc_8323D58C:
	// addi r31,r29,16
	ctx.r31.s64 = ctx.r29.s64 + 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83221378
	ctx.lr = 0x8323D59C;
	sub_83221378(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8323d5b0
	if (cr6.eq) goto loc_8323D5B0;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// ori r9,r10,256
	ctx.r9.u64 = ctx.r10.u64 | 256;
	// b 0x8323d5dc
	goto loc_8323D5DC;
loc_8323D5B0:
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,1304
	ctx.r5.s64 = 1304;
	// li r4,344
	ctx.r4.s64 = 344;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8320d628
	ctx.lr = 0x8323D5C8;
	sub_8320D628(ctx, base);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// b 0x8323d5e8
	goto loc_8323D5E8;
loc_8323D5D4:
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// ori r9,r10,512
	ctx.r9.u64 = ctx.r10.u64 | 512;
loc_8323D5DC:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r9,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r9.u32);
	// li r31,1
	ctx.r31.s64 = 1;
loc_8323D5E8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8323d670
	if (cr6.eq) goto loc_8323D670;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// sth r28,152(r1)
	PPC_STORE_U16(ctx.r1.u32 + 152, ctx.r28.u16);
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// stb r28,154(r1)
	PPC_STORE_U8(ctx.r1.u32 + 154, ctx.r28.u8);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r10,20(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r28,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r28.u32);
	// stw r28,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r28.u32);
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// lhz r8,6(r29)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r29.u32 + 6);
	// sth r8,152(r1)
	PPC_STORE_U16(ctx.r1.u32 + 152, ctx.r8.u16);
	// bl 0x8327ad20
	ctx.lr = 0x8323D63C;
	sub_8327AD20(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// beq cr6,0x8323d65c
	if (cr6.eq) goto loc_8323D65C;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8320e7b8
	ctx.lr = 0x8323D654;
	sub_8320E7B8(ctx, base);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// b 0x8323d670
	goto loc_8323D670;
loc_8323D65C:
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x8322dfb0
	ctx.lr = 0x8323D670;
	sub_8322DFB0(ctx, base);
loc_8323D670:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8323d6c8
	if (cr6.eq) goto loc_8323D6C8;
	// stw r28,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r28.u32);
	// addi r11,r29,16
	ctx.r11.s64 = ctx.r29.s64 + 16;
	// sth r28,184(r1)
	PPC_STORE_U16(ctx.r1.u32 + 184, ctx.r28.u16);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r28,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r28.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r28,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r28.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stb r28,186(r1)
	PPC_STORE_U8(ctx.r1.u32 + 186, ctx.r28.u8);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// stw r28,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r28.u32);
	// stw r28,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r28.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r10,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// lhz r9,6(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + 6);
	// sth r9,184(r1)
	PPC_STORE_U16(ctx.r1.u32 + 184, ctx.r9.u16);
	// stw r11,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8322dfb0
	ctx.lr = 0x8323D6C8;
	sub_8322DFB0(ctx, base);
loc_8323D6C8:
	// lhz r11,14(r23)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r23.u32 + 14);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// addi r24,r24,24
	ctx.r24.s64 = ctx.r24.s64 + 24;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r21,r10
	cr6.compare<int32_t>(ctx.r21.s32, ctx.r10.s32, xer);
	// blt cr6,0x8323d1e8
	if (cr6.lt) goto loc_8323D1E8;
loc_8323D6E0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83222030
	ctx.lr = 0x8323D6E8;
	sub_83222030(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8323d704
	if (cr6.eq) goto loc_8323D704;
	// stfs f28,28(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r30.u32 + 28, temp.u32);
	// stfs f29,36(r30)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r30.u32 + 36, temp.u32);
	// b 0x8323d724
	goto loc_8323D724;
loc_8323D704:
	// lwz r11,16(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8323d718
	if (!cr6.eq) goto loc_8323D718;
	// fmr f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f29.f64;
	// b 0x8323d71c
	goto loc_8323D71C;
loc_8323D718:
	// lfs f0,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
loc_8323D71C:
	// fadds f0,f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f28.f64));
	// stfs f0,28(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 28, temp.u32);
loc_8323D724:
	// stfs f27,32(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r30.u32 + 32, temp.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x8323cb60
	ctx.lr = 0x8323D734;
	sub_8323CB60(ctx, base);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// addi r12,r1,-136
	ctx.r12.s64 = ctx.r1.s64 + -136;
	// bl 0x831ce7c0
	ctx.lr = 0x8323D740;
	__restfpr_27(ctx, base);
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323D744"))) PPC_WEAK_FUNC(sub_8323D744);
PPC_FUNC_IMPL(__imp__sub_8323D744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8323D748"))) PPC_WEAK_FUNC(sub_8323D748);
PPC_FUNC_IMPL(__imp__sub_8323D748) {
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
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-2074
	ctx.r11.s64 = ctx.r11.s64 + -2074;
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(ctx.r11.u32, 15, xer);
	// bgt cr6,0x8323d914
	if (cr6.gt) goto loc_8323D914;
	// lis r12,-31964
	ctx.r12.s64 = -2094792704;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-10360
	ctx.r12.s64 = ctx.r12.s64 + -10360;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8323D7C8;
	case 1:
		goto loc_8323D7FC;
	case 2:
		goto loc_8323D864;
	case 3:
		goto loc_8323D914;
	case 4:
		goto loc_8323D914;
	case 5:
		goto loc_8323D914;
	case 6:
		goto loc_8323D914;
	case 7:
		goto loc_8323D8F4;
	case 8:
		goto loc_8323D904;
	case 9:
		goto loc_8323D914;
	case 10:
		goto loc_8323D914;
	case 11:
		goto loc_8323D914;
	case 12:
		goto loc_8323D914;
	case 13:
		goto loc_8323D914;
	case 14:
		goto loc_8323D914;
	case 15:
		goto loc_8323D830;
	default:
		return;
	}
	// lwz r25,-10296(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + -10296);
	// lwz r25,-10244(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + -10244);
	// lwz r25,-10140(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + -10140);
	// lwz r25,-9964(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + -9964);
	// lwz r25,-9964(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + -9964);
	// lwz r25,-9964(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + -9964);
	// lwz r25,-9964(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + -9964);
	// lwz r25,-9996(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + -9996);
	// lwz r25,-9980(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + -9980);
	// lwz r25,-9964(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + -9964);
	// lwz r25,-9964(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + -9964);
	// lwz r25,-9964(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + -9964);
	// lwz r25,-9964(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + -9964);
	// lwz r25,-9964(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + -9964);
	// lwz r25,-9964(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + -9964);
	// lwz r25,-10192(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + -10192);
loc_8323D7C8:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8323d7e4
	if (cr6.eq) goto loc_8323D7E4;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,12424
	ctx.r3.s64 = ctx.r11.s64 + 12424;
	// bl 0x8320d088
	ctx.lr = 0x8323D7E4;
	sub_8320D088(ctx, base);
loc_8323D7E4:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r3,r11,12432
	ctx.r3.s64 = ctx.r11.s64 + 12432;
	// bl 0x8328ed30
	ctx.lr = 0x8323D7F4;
	sub_8328ED30(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8323d918
	goto loc_8323D918;
loc_8323D7FC:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8323d818
	if (cr6.eq) goto loc_8323D818;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,12424
	ctx.r3.s64 = ctx.r11.s64 + 12424;
	// bl 0x8320d088
	ctx.lr = 0x8323D818;
	sub_8320D088(ctx, base);
loc_8323D818:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r3,r11,12432
	ctx.r3.s64 = ctx.r11.s64 + 12432;
	// bl 0x8328edb0
	ctx.lr = 0x8323D828;
	sub_8328EDB0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8323d918
	goto loc_8323D918;
loc_8323D830:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8323d84c
	if (cr6.eq) goto loc_8323D84C;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,12424
	ctx.r3.s64 = ctx.r11.s64 + 12424;
	// bl 0x8320d088
	ctx.lr = 0x8323D84C;
	sub_8320D088(ctx, base);
loc_8323D84C:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r3,r11,12432
	ctx.r3.s64 = ctx.r11.s64 + 12432;
	// bl 0x8328ee08
	ctx.lr = 0x8323D85C;
	sub_8328EE08(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8323d918
	goto loc_8323D918;
loc_8323D864:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x8323d880
	if (cr6.eq) goto loc_8323D880;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,12424
	ctx.r3.s64 = ctx.r11.s64 + 12424;
	// bl 0x8320d088
	ctx.lr = 0x8323D880;
	sub_8320D088(ctx, base);
loc_8323D880:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// blt cr6,0x8323d90c
	if (cr6.lt) goto loc_8323D90C;
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
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x83221440
	ctx.lr = 0x8323D8B0;
	sub_83221440(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8323d8e0
	if (!cr6.eq) goto loc_8323D8E0;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lhz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r5,r11,12496
	ctx.r5.s64 = ctx.r11.s64 + 12496;
	// li r6,29
	ctx.r6.s64 = 29;
	// li r3,344
	ctx.r3.s64 = 344;
	// bl 0x8320d428
	ctx.lr = 0x8323D8D8;
	sub_8320D428(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8323d918
	goto loc_8323D918;
loc_8323D8E0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8323d0a8
	ctx.lr = 0x8323D8EC;
	sub_8323D0A8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8323d918
	goto loc_8323D918;
loc_8323D8F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8323cec8
	ctx.lr = 0x8323D8FC;
	sub_8323CEC8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8323d918
	goto loc_8323D918;
loc_8323D904:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8323cc68
	ctx.lr = 0x8323D90C;
	sub_8323CC68(ctx, base);
loc_8323D90C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8323d918
	goto loc_8323D918;
loc_8323D914:
	// li r3,-4
	ctx.r3.s64 = -4;
loc_8323D918:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323D930"))) PPC_WEAK_FUNC(sub_8323D930);
PPC_FUNC_IMPL(__imp__sub_8323D930) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r11,26656
	ctx.r3.s64 = ctx.r11.s64 + 26656;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x83294018
	sub_83294018(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323D944"))) PPC_WEAK_FUNC(sub_8323D944);
PPC_FUNC_IMPL(__imp__sub_8323D944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8323D948"))) PPC_WEAK_FUNC(sub_8323D948);
PPC_FUNC_IMPL(__imp__sub_8323D948) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x8323D950;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31748
	ctx.r10.s64 = -2080636928;
	// li r22,0
	ctx.r22.s64 = 0;
	// addi r31,r10,26656
	ctx.r31.s64 = ctx.r10.s64 + 26656;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r19,r22
	ctx.r19.u64 = ctx.r22.u64;
	// addi r20,r11,12588
	ctx.r20.s64 = ctx.r11.s64 + 12588;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8323da04
	if (cr6.eq) goto loc_8323DA04;
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x8323d9e8
	if (!cr6.gt) goto loc_8323D9E8;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// addi r27,r10,12552
	ctx.r27.s64 = ctx.r10.s64 + 12552;
loc_8323D99C:
	// lwzx r10,r30,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r3.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8323d9d4
	if (cr6.eq) goto loc_8323D9D4;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne cr6,0x8323d9c4
	if (!cr6.eq) goto loc_8323D9C4;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// li r19,-19
	ctx.r19.s64 = -19;
	// bl 0x832083d0
	ctx.lr = 0x8323D9C0;
	sub_832083D0(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_8323D9C4:
	// stwx r22,r30,r3
	PPC_STORE_U32(ctx.r30.u32 + ctx.r3.u32, ctx.r22.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
loc_8323D9D4:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r28,r5
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r5.s32, xer);
	// blt cr6,0x8323d99c
	if (cr6.lt) goto loc_8323D99C;
loc_8323D9E8:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8323da04
	if (cr6.eq) goto loc_8323DA04;
	// bl 0x83209d68
	ctx.lr = 0x8323D9F4;
	sub_83209D68(ctx, base);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// stw r22,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r22.u32);
	// sth r22,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r22.u16);
loc_8323DA04:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8323dadc
	if (cr6.eq) goto loc_8323DADC;
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// mr r21,r22
	ctx.r21.u64 = ctx.r22.u64;
	// mr r24,r22
	ctx.r24.u64 = ctx.r22.u64;
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x8323dac0
	if (!cr6.gt) goto loc_8323DAC0;
	// lis r9,-31748
	ctx.r9.s64 = -2080636928;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
	// addi r30,r9,24688
	ctx.r30.s64 = ctx.r9.s64 + 24688;
	// addi r23,r10,12516
	ctx.r23.s64 = ctx.r10.s64 + 12516;
loc_8323DA3C:
	// lwzx r26,r25,r3
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r3.u32);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x8323daac
	if (cr6.eq) goto loc_8323DAAC;
	// lhz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8323da70
	if (cr6.eq) goto loc_8323DA70;
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(ctx.r21.s32, 0, xer);
	// bne cr6,0x8323da6c
	if (!cr6.eq) goto loc_8323DA6C;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// li r19,-19
	ctx.r19.s64 = -19;
	// bl 0x832083d0
	ctx.lr = 0x8323DA6C;
	sub_832083D0(ctx, base);
loc_8323DA6C:
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
loc_8323DA70:
	// lwz r29,44(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// lwz r27,20(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r28,48(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// bl 0x831ffe38
	ctx.lr = 0x8323DA84;
	sub_831FFE38(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x832356e0
	ctx.lr = 0x8323DA8C;
	sub_832356E0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stwx r22,r25,r11
	PPC_STORE_U32(ctx.r25.u32 + ctx.r11.u32, ctx.r22.u32);
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// stw r29,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r29.u32);
	// bl 0x831ffdd8
	ctx.lr = 0x8323DAA4;
	sub_831FFDD8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
loc_8323DAAC:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// cmpw cr6,r24,r5
	cr6.compare<int32_t>(ctx.r24.s32, ctx.r5.s32, xer);
	// blt cr6,0x8323da3c
	if (cr6.lt) goto loc_8323DA3C;
loc_8323DAC0:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8323dadc
	if (cr6.eq) goto loc_8323DADC;
	// bl 0x83209d68
	ctx.lr = 0x8323DACC;
	sub_83209D68(ctx, base);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// stw r22,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r22.u32);
	// sth r22,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r22.u16);
loc_8323DADC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83294018
	ctx.lr = 0x8323DAEC;
	sub_83294018(ctx, base);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323DAF8"))) PPC_WEAK_FUNC(sub_8323DAF8);
PPC_FUNC_IMPL(__imp__sub_8323DAF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x8323DB00;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// lis r10,-31748
	ctx.r10.s64 = -2080636928;
	// addi r29,r11,26656
	ctx.r29.s64 = ctx.r11.s64 + 26656;
	// addi r30,r10,24688
	ctx.r30.s64 = ctx.r10.s64 + 24688;
	// li r23,0
	ctx.r23.s64 = 0;
	// lhz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x8323dbf8
	if (!cr6.gt) goto loc_8323DBF8;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
loc_8323DB34:
	// lwzx r31,r25,r3
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r3.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8323db9c
	if (cr6.eq) goto loc_8323DB9C;
	// lwz r28,44(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// lwz r27,48(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r26,20(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x831ffe38
	ctx.lr = 0x8323DB54;
	sub_831FFE38(ctx, base);
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
	// bl 0x83229fd8
	ctx.lr = 0x8323DB68;
	sub_83229FD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832356e0
	ctx.lr = 0x8323DB70;
	sub_832356E0(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8323db84
	if (cr6.eq) goto loc_8323DB84;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stwx r23,r25,r11
	PPC_STORE_U32(ctx.r25.u32 + ctx.r11.u32, ctx.r23.u32);
loc_8323DB84:
	// stw r26,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r26.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r28,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r28.u32);
	// bl 0x831ffdd8
	ctx.lr = 0x8323DB94;
	sub_831FFDD8(ctx, base);
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lhz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
loc_8323DB9C:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// cmpw cr6,r24,r11
	cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, xer);
	// blt cr6,0x8323db34
	if (cr6.lt) goto loc_8323DB34;
	// addic. r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt 0x8323dbd8
	if (cr0.lt) goto loc_8323DBD8;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
loc_8323DBC0:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8323dbd8
	if (!cr6.eq) goto loc_8323DBD8;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// bge 0x8323dbc0
	if (!cr0.lt) goto loc_8323DBC0;
loc_8323DBD8:
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// rlwinm r31,r10,0,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// beq cr6,0x8323dbf8
	if (cr6.eq) goto loc_8323DBF8;
	// rlwinm r4,r31,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x83209df8
	ctx.lr = 0x8323DBF0;
	sub_83209DF8(ctx, base);
	// stw r3,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r3.u32);
	// sth r31,4(r29)
	PPC_STORE_U16(ctx.r29.u32 + 4, ctx.r31.u16);
loc_8323DBF8:
	// lhz r11,6(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 6);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x8323dcd8
	if (!cr6.gt) goto loc_8323DCD8;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
loc_8323DC14:
	// lwzx r31,r25,r3
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r3.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8323dc7c
	if (cr6.eq) goto loc_8323DC7C;
	// lwz r28,44(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// lwz r27,48(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r26,20(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x831ffe38
	ctx.lr = 0x8323DC34;
	sub_831FFE38(ctx, base);
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
	// bl 0x8328dd50
	ctx.lr = 0x8323DC48;
	sub_8328DD50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832356e0
	ctx.lr = 0x8323DC50;
	sub_832356E0(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x8323dc64
	if (!cr6.eq) goto loc_8323DC64;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// stwx r23,r25,r11
	PPC_STORE_U32(ctx.r25.u32 + ctx.r11.u32, ctx.r23.u32);
loc_8323DC64:
	// stw r26,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r26.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r28,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r28.u32);
	// bl 0x831ffdd8
	ctx.lr = 0x8323DC74;
	sub_831FFDD8(ctx, base);
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lhz r11,6(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 6);
loc_8323DC7C:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// cmpw cr6,r24,r10
	cr6.compare<int32_t>(ctx.r24.s32, ctx.r10.s32, xer);
	// blt cr6,0x8323dc14
	if (cr6.lt) goto loc_8323DC14;
	// addic. r11,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt 0x8323dcb8
	if (cr0.lt) goto loc_8323DCB8;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
loc_8323DCA0:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8323dcb8
	if (!cr6.eq) goto loc_8323DCB8;
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// bge 0x8323dca0
	if (!cr0.lt) goto loc_8323DCA0;
loc_8323DCB8:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r31,r11,0,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// cmpw cr6,r31,r10
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, xer);
	// beq cr6,0x8323dcd8
	if (cr6.eq) goto loc_8323DCD8;
	// rlwinm r4,r31,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x83209df8
	ctx.lr = 0x8323DCD0;
	sub_83209DF8(ctx, base);
	// stw r3,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r3.u32);
	// sth r31,6(r29)
	PPC_STORE_U16(ctx.r29.u32 + 6, ctx.r31.u16);
loc_8323DCD8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323DCE0"))) PPC_WEAK_FUNC(sub_8323DCE0);
PPC_FUNC_IMPL(__imp__sub_8323DCE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8323DCE8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8323ddc0
	if (cr6.eq) goto loc_8323DDC0;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r31,r11,26656
	ctx.r31.s64 = ctx.r11.s64 + 26656;
	// li r7,-1
	ctx.r7.s64 = -1;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x8323dd6c
	if (!cr6.gt) goto loc_8323DD6C;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
loc_8323DD24:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r10,r29
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, xer);
	// beq cr6,0x8323ddc0
	if (cr6.eq) goto loc_8323DDC0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8323dd44
	if (!cr6.eq) goto loc_8323DD44;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bge cr6,0x8323dd44
	if (!cr6.lt) goto loc_8323DD44;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
loc_8323DD44:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, xer);
	// blt cr6,0x8323dd24
	if (cr6.lt) goto loc_8323DD24;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// blt cr6,0x8323dd6c
	if (cr6.lt) goto loc_8323DD6C;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8323DD6C:
	// addi r11,r8,8
	ctx.r11.s64 = ctx.r8.s64 + 8;
	// rlwinm r30,r11,0,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// rlwinm r4,r30,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x83209df8
	ctx.lr = 0x8323DD7C;
	sub_83209DF8(ctx, base);
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r10,r30
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, xer);
	// bge cr6,0x8323ddb0
	if (!cr6.lt) goto loc_8323DDB0;
	// subf r9,r10,r30
	ctx.r9.s64 = ctx.r30.s64 - ctx.r10.s64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8323DD9C:
	// stwx r28,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r28.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bdnz 0x8323dd9c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8323DD9C;
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
loc_8323DDB0:
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r29.u32);
	// sth r30,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r30.u16);
loc_8323DDC0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323DDC8"))) PPC_WEAK_FUNC(sub_8323DDC8);
PPC_FUNC_IMPL(__imp__sub_8323DDC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8323DDD0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8323dec0
	if (cr6.eq) goto loc_8323DEC0;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r31,r11,26656
	ctx.r31.s64 = ctx.r11.s64 + 26656;
	// li r8,-1
	ctx.r8.s64 = -1;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// lhz r10,6(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// ble cr6,0x8323de38
	if (!cr6.gt) goto loc_8323DE38;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_8323DE08:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r10,r29
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, xer);
	// beq cr6,0x8323dec0
	if (cr6.eq) goto loc_8323DEC0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8323de28
	if (!cr6.eq) goto loc_8323DE28;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bge cr6,0x8323de28
	if (!cr6.lt) goto loc_8323DE28;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_8323DE28:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, xer);
	// blt cr6,0x8323de08
	if (cr6.lt) goto loc_8323DE08;
loc_8323DE38:
	// lhz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 12);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,12(r29)
	PPC_STORE_U16(ctx.r29.u32 + 12, ctx.r11.u16);
	// blt cr6,0x8323de60
	if (cr6.lt) goto loc_8323DE60;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8323DE60:
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r30,r11,0,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// rlwinm r4,r30,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x83209df8
	ctx.lr = 0x8323DE7C;
	sub_83209DF8(ctx, base);
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r10,r30
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, xer);
	// bge cr6,0x8323deb0
	if (!cr6.lt) goto loc_8323DEB0;
	// subf r9,r10,r30
	ctx.r9.s64 = ctx.r30.s64 - ctx.r10.s64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8323DE9C:
	// stwx r28,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r28.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bdnz 0x8323de9c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8323DE9C;
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
loc_8323DEB0:
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r29.u32);
	// sth r30,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r30.u16);
loc_8323DEC0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323DEC8"))) PPC_WEAK_FUNC(sub_8323DEC8);
PPC_FUNC_IMPL(__imp__sub_8323DEC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lhz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r10,r11,26656
	ctx.r10.s64 = ctx.r11.s64 + 26656;
	// cmplwi cr6,r9,64
	cr6.compare<uint32_t>(ctx.r9.u32, 64, xer);
	// bne cr6,0x8323df24
	if (!cr6.eq) goto loc_8323DF24;
	// lhz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x8323df24
	if (!cr6.gt) goto loc_8323DF24;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_8323DEF8:
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwzx r5,r11,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplw cr6,r5,r3
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r3.u32, xer);
	// bne cr6,0x8323df10
	if (!cr6.eq) goto loc_8323DF10;
	// stwx r6,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r6.u32);
	// lhz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
loc_8323DF10:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r7,r9
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, xer);
	// blt cr6,0x8323def8
	if (cr6.lt) goto loc_8323DEF8;
loc_8323DF24:
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,67
	cr6.compare<uint32_t>(ctx.r11.u32, 67, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lhz r8,6(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 6);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_8323DF48:
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwzx r5,r11,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplw cr6,r5,r3
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r3.u32, xer);
	// bne cr6,0x8323df60
	if (!cr6.eq) goto loc_8323DF60;
	// stwx r6,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r6.u32);
	// lhz r8,6(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 6);
loc_8323DF60:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r7,r9
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, xer);
	// blt cr6,0x8323df48
	if (cr6.lt) goto loc_8323DF48;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323DF78"))) PPC_WEAK_FUNC(sub_8323DF78);
PPC_FUNC_IMPL(__imp__sub_8323DF78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x8323DF80;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31748
	ctx.r10.s64 = -2080636928;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r31,r10,26656
	ctx.r31.s64 = ctx.r10.s64 + 26656;
	// addi r23,r11,12588
	ctx.r23.s64 = ctx.r11.s64 + 12588;
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r22,r24
	ctx.r22.u64 = ctx.r24.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8323e028
	if (cr6.eq) goto loc_8323E028;
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x8323e028
	if (!cr6.gt) goto loc_8323E028;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// addi r27,r9,12652
	ctx.r27.s64 = ctx.r9.s64 + 12652;
loc_8323DFD0:
	// lwzx r9,r30,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8323e014
	if (cr6.eq) goto loc_8323E014;
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpw cr6,r9,r25
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r25.s32, xer);
	// bne cr6,0x8323e014
	if (!cr6.eq) goto loc_8323E014;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne cr6,0x8323e004
	if (!cr6.eq) goto loc_8323E004;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// bl 0x832085e8
	ctx.lr = 0x8323E000;
	sub_832085E8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_8323E004:
	// stwx r24,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r24.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
loc_8323E014:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r28,r5
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r5.s32, xer);
	// blt cr6,0x8323dfd0
	if (cr6.lt) goto loc_8323DFD0;
loc_8323E028:
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8323e0c8
	if (cr6.eq) goto loc_8323E0C8;
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x8323e0c8
	if (!cr6.gt) goto loc_8323E0C8;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// addi r27,r10,12600
	ctx.r27.s64 = ctx.r10.s64 + 12600;
loc_8323E058:
	// lwzx r30,r29,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r9.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8323e0b4
	if (cr6.eq) goto loc_8323E0B4;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpw cr6,r10,r25
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r25.s32, xer);
	// bne cr6,0x8323e0b4
	if (!cr6.eq) goto loc_8323E0B4;
	// lhz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8323e09c
	if (cr6.eq) goto loc_8323E09C;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// bne cr6,0x8323e098
	if (!cr6.eq) goto loc_8323E098;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r22,-19
	ctx.r22.s64 = -19;
	// bl 0x832083d0
	ctx.lr = 0x8323E098;
	sub_832083D0(ctx, base);
loc_8323E098:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
loc_8323E09C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832356e0
	ctx.lr = 0x8323E0A4;
	sub_832356E0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stwx r24,r29,r11
	PPC_STORE_U32(ctx.r29.u32 + ctx.r11.u32, ctx.r24.u32);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
loc_8323E0B4:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r28,r5
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r5.s32, xer);
	// blt cr6,0x8323e058
	if (cr6.lt) goto loc_8323E058;
loc_8323E0C8:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323E0D4"))) PPC_WEAK_FUNC(sub_8323E0D4);
PPC_FUNC_IMPL(__imp__sub_8323E0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8323E0D8"))) PPC_WEAK_FUNC(sub_8323E0D8);
PPC_FUNC_IMPL(__imp__sub_8323E0D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8323E0E0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r9,r11,24688
	ctx.r9.s64 = ctx.r11.s64 + 24688;
	// lwz r11,44(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// bne cr6,0x8323e10c
	if (!cr6.eq) goto loc_8323E10C;
	// bl 0x83201a00
	ctx.lr = 0x8323E104;
	sub_83201A00(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8323E10C:
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r29,r11,26656
	ctx.r29.s64 = ctx.r11.s64 + 26656;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// lhz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x8323e184
	if (!cr6.gt) goto loc_8323E184;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_8323E130:
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwzx r31,r30,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8323e170
	if (cr6.eq) goto loc_8323E170;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8322cc08
	ctx.lr = 0x8323E158;
	sub_8322CC08(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8323e16c
	if (!cr6.eq) goto loc_8323E16C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, xer);
	// beq cr6,0x8323e190
	if (cr6.eq) goto loc_8323E190;
loc_8323E16C:
	// lhz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
loc_8323E170:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r28,r10
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, xer);
	// blt cr6,0x8323e130
	if (cr6.lt) goto loc_8323E130;
loc_8323E184:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8323E190:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323E19C"))) PPC_WEAK_FUNC(sub_8323E19C);
PPC_FUNC_IMPL(__imp__sub_8323E19C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8323E1A0"))) PPC_WEAK_FUNC(sub_8323E1A0);
PPC_FUNC_IMPL(__imp__sub_8323E1A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// vspltisw128 v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x0)));
	// li r8,16
	ctx.r8.s64 = 16;
	// vspltisw128 v62,1
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_set1_epi32(int(0x1)));
	// li r9,48
	ctx.r9.s64 = 48;
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// lis r7,-31772
	ctx.r7.s64 = -2082209792;
	// vor128 v61,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// vor128 v60,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// li r6,32
	ctx.r6.s64 = 32;
	// vor128 v59,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// addi r5,r7,5696
	ctx.r5.s64 = ctx.r7.s64 + 5696;
	// vor128 v58,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// li r4,526
	ctx.r4.s64 = 526;
	// vrlimi128 v61,v62,8,0
	simde_mm_store_ps(ctx.v61.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v62.f32), 228), 8));
	// li r7,2
	ctx.r7.s64 = 2;
	// vrlimi128 v60,v62,4,0
	simde_mm_store_ps(ctx.v60.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v62.f32), 228), 4));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vrlimi128 v59,v62,2,0
	simde_mm_store_ps(ctx.v59.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v62.f32), 228), 2));
	// stvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vrlimi128 v58,v62,1,0
	simde_mm_store_ps(ctx.v58.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v62.f32), 228), 1));
	// stvx128 v63,r3,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v57,v61,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v57.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v61.u32)));
	// stvx128 v63,r3,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v56,v60,0
	simde_mm_store_ps(ctx.v56.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v60.u32)));
	// li r10,-1
	ctx.r10.s64 = -1;
	// vcsxwfp128 v55,v59,0
	simde_mm_store_ps(ctx.v55.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v59.u32)));
	// li r31,0
	ctx.r31.s64 = 0;
	// vcsxwfp128 v54,v58,0
	simde_mm_store_ps(ctx.v54.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v58.u32)));
	// stvx128 v57,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v56,r11,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v55,r11,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v54,r11,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// sth r4,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r4.u16);
	// stb r7,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r7.u8);
	// lfs f0,132(r5)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f0,132(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r10.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stw r31,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r31.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323E250"))) PPC_WEAK_FUNC(sub_8323E250);
PPC_FUNC_IMPL(__imp__sub_8323E250) {
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
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8323e28c
	if (cr6.eq) goto loc_8323E28C;
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// li r3,-6
	ctx.r3.s64 = -6;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8323E28C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8323e1a0
	ctx.lr = 0x8323E294;
	sub_8323E1A0(ctx, base);
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

__attribute__((alias("__imp__sub_8323E2A8"))) PPC_WEAK_FUNC(sub_8323E2A8);
PPC_FUNC_IMPL(__imp__sub_8323E2A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8323E2B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8323e334
	if (cr6.eq) goto loc_8323E334;
	// addi r29,r3,64
	ctx.r29.s64 = ctx.r3.s64 + 64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x8323e334
	if (cr6.eq) goto loc_8323E334;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8326b8c0
	ctx.lr = 0x8323E2DC;
	sub_8326B8C0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8326c618
	ctx.lr = 0x8323E2E8;
	sub_8326C618(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8323e334
	if (cr6.eq) goto loc_8323E334;
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
	// beq cr6,0x8323e318
	if (cr6.eq) goto loc_8323E318;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x8323E318;
	sub_83222030(ctx, base);
loc_8323E318:
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// li r10,52
	ctx.r10.s64 = 52;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// sth r10,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r10.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8323E334:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83213150
	ctx.lr = 0x8323E33C;
	sub_83213150(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323E344"))) PPC_WEAK_FUNC(sub_8323E344);
PPC_FUNC_IMPL(__imp__sub_8323E344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8323E348"))) PPC_WEAK_FUNC(sub_8323E348);
PPC_FUNC_IMPL(__imp__sub_8323E348) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// rlwinm r9,r4,0,24,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xF0;
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// addi r10,r10,5696
	ctx.r10.s64 = ctx.r10.s64 + 5696;
	// beq cr6,0x8323e3f0
	if (cr6.eq) goto loc_8323E3F0;
	// clrlwi r8,r6,24
	ctx.r8.u64 = ctx.r6.u32 & 0xFF;
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// stw r8,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r8.u32);
	// rlwinm r7,r6,24,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFF;
	// rlwinm r4,r6,16,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFF;
	// rlwinm r8,r6,8,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFF;
	// stw r7,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r7.u32);
	// stw r4,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r4.u32);
	// li r7,16
	ctx.r7.s64 = 16;
	// stw r8,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r8.u32);
	// lvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v62,v63,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v62.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// addi r6,r1,-16
	ctx.r6.s64 = ctx.r1.s64 + -16;
	// lvx128 v61,r10,r7
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r4,r11,0,25,25
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// vmulfp128 v60,v62,v61
	simde_mm_store_ps(ctx.v60.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v61.f32)));
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stvx128 v60,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// beq cr6,0x8323e3b4
	if (cr6.eq) goto loc_8323E3B4;
	// lfs f0,-8(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
loc_8323E3B4:
	// rlwinm r9,r11,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8323e3c8
	if (cr6.eq) goto loc_8323E3C8;
	// lfs f0,-12(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
loc_8323E3C8:
	// rlwinm r9,r11,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8323e3dc
	if (cr6.eq) goto loc_8323E3DC;
	// lfs f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
loc_8323E3DC:
	// rlwinm r9,r11,0,24,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8323e3f0
	if (cr6.eq) goto loc_8323E3F0;
	// lfs f0,-4(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
loc_8323E3F0:
	// clrlwi r9,r11,28
	ctx.r9.u64 = ctx.r11.u32 & 0xF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r6,r1,-16
	ctx.r6.s64 = ctx.r1.s64 + -16;
	// rlwinm r9,r5,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFF;
	// rlwinm r8,r5,16,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFF;
	// rlwinm r7,r5,8,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFF;
	// stw r9,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r9.u32);
	// clrlwi r5,r5,24
	ctx.r5.u64 = ctx.r5.u32 & 0xFF;
	// stw r8,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r8.u32);
	// stw r7,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r7.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r5,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r5.u32);
	// lvx128 v58,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v57,v58,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v57.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v58.u32)));
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// lvx128 v59,r10,r4
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r8,r11,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// vmulfp128 v56,v57,v59
	simde_mm_store_ps(ctx.v56.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_load_ps(ctx.v59.f32)));
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stvx128 v56,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// beq cr6,0x8323e450
	if (cr6.eq) goto loc_8323E450;
	// lfs f0,-8(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
loc_8323E450:
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8323e464
	if (cr6.eq) goto loc_8323E464;
	// lfs f0,-12(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
loc_8323E464:
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8323e478
	if (cr6.eq) goto loc_8323E478;
	// lfs f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
loc_8323E478:
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lfs f0,-4(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323E490"))) PPC_WEAK_FUNC(sub_8323E490);
PPC_FUNC_IMPL(__imp__sub_8323E490) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// rlwinm r9,r10,0,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x6;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8323e4d4
	if (cr6.eq) goto loc_8323E4D4;
	// lfs f1,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,132(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// bl 0x831fbd98
	ctx.lr = 0x8323E4C0;
	sub_831FBD98(ctx, base);
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
loc_8323E4D4:
	// rlwinm r10,r10,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8323e548
	if (cr6.eq) goto loc_8323E548;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f1,60(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f1.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f0,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x8323e4fc
	if (cr6.lt) goto loc_8323E4FC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8323E4FC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8323e528
	if (cr6.eq) goto loc_8323E528;
	// li r4,0
	ctx.r4.s64 = 0;
	// fneg f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// bl 0x831fbd98
	ctx.lr = 0x8323E514;
	sub_831FBD98(ctx, base);
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
loc_8323E528:
	// lis r4,255
	ctx.r4.s64 = 16711680;
	// ori r4,r4,65535
	ctx.r4.u64 = ctx.r4.u64 | 65535;
	// bl 0x831fbd98
	ctx.lr = 0x8323E534;
	sub_831FBD98(ctx, base);
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
loc_8323E548:
	// lbz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8323e574
	if (cr6.eq) goto loc_8323E574;
	// lwz r6,132(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// lwz r5,128(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// bl 0x8323e348
	ctx.lr = 0x8323E560;
	sub_8323E348(ctx, base);
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
loc_8323E574:
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

__attribute__((alias("__imp__sub_8323E588"))) PPC_WEAK_FUNC(sub_8323E588);
PPC_FUNC_IMPL(__imp__sub_8323E588) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8323E590;
	__savegprlr_29(ctx, base);
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
	// beq cr6,0x8323e624
	if (cr6.eq) goto loc_8323E624;
	// lbz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// rlwinm r10,r11,0,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x6;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8323e5e4
	if (cr6.eq) goto loc_8323E5E4;
	// bl 0x8326a2e8
	ctx.lr = 0x8323E5B8;
	sub_8326A2E8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8326a2b0
	ctx.lr = 0x8323E5C0;
	sub_8326A2B0(ctx, base);
	// lfs f1,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,132(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x831fbd98
	ctx.lr = 0x8323E5CC;
	sub_831FBD98(ctx, base);
	// li r5,46
	ctx.r5.s64 = 46;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83266dd0
	ctx.lr = 0x8323E5DC;
	sub_83266DD0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8323E5E4:
	// lbz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8323e624
	if (cr6.eq) goto loc_8323E624;
	// bl 0x8326a2e8
	ctx.lr = 0x8323E5F4;
	sub_8326A2E8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8326a2b0
	ctx.lr = 0x8323E5FC;
	sub_8326A2B0(ctx, base);
	// lwz r6,132(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lwz r5,128(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lbz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// bl 0x8323e348
	ctx.lr = 0x8323E60C;
	sub_8323E348(ctx, base);
	// li r5,46
	ctx.r5.s64 = 46;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83266dd0
	ctx.lr = 0x8323E61C;
	sub_83266DD0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8323E624:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83213150
	ctx.lr = 0x8323E62C;
	sub_83213150(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323E634"))) PPC_WEAK_FUNC(sub_8323E634);
PPC_FUNC_IMPL(__imp__sub_8323E634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8323E638"))) PPC_WEAK_FUNC(sub_8323E638);
PPC_FUNC_IMPL(__imp__sub_8323E638) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,1473
	cr6.compare<uint32_t>(ctx.r10.u32, 1473, xer);
	// bgt cr6,0x8323e78c
	if (cr6.gt) goto loc_8323E78C;
	// beq cr6,0x8323e76c
	if (cr6.eq) goto loc_8323E76C;
	// cmplwi cr6,r10,472
	cr6.compare<uint32_t>(ctx.r10.u32, 472, xer);
	// bgt cr6,0x8323e6f8
	if (cr6.gt) goto loc_8323E6F8;
	// beq cr6,0x8323e6d8
	if (cr6.eq) goto loc_8323E6D8;
	// cmplwi cr6,r10,320
	cr6.compare<uint32_t>(ctx.r10.u32, 320, xer);
	// beq cr6,0x8323e6b8
	if (cr6.eq) goto loc_8323E6B8;
	// cmplwi cr6,r10,418
	cr6.compare<uint32_t>(ctx.r10.u32, 418, xer);
	// beq cr6,0x8323e69c
	if (cr6.eq) goto loc_8323E69C;
	// cmplwi cr6,r10,471
	cr6.compare<uint32_t>(ctx.r10.u32, 471, xer);
	// bne cr6,0x8323e8b4
	if (!cr6.eq) goto loc_8323E8B4;
	// lfs f1,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,12(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// bl 0x832248d8
	ctx.lr = 0x8323E688;
	sub_832248D8(ctx, base);
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
loc_8323E69C:
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x8323e588
	ctx.lr = 0x8323E6A4;
	sub_8323E588(ctx, base);
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
loc_8323E6B8:
	// lhz r4,2(r3)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x83223c38
	ctx.lr = 0x8323E6C4;
	sub_83223C38(ctx, base);
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
loc_8323E6D8:
	// lfs f1,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x832248d8
	ctx.lr = 0x8323E6E4;
	sub_832248D8(ctx, base);
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
loc_8323E6F8:
	// cmplwi cr6,r10,473
	cr6.compare<uint32_t>(ctx.r10.u32, 473, xer);
	// beq cr6,0x8323e74c
	if (cr6.eq) goto loc_8323E74C;
	// cmplwi cr6,r10,510
	cr6.compare<uint32_t>(ctx.r10.u32, 510, xer);
	// beq cr6,0x8323e730
	if (cr6.eq) goto loc_8323E730;
	// cmplwi cr6,r10,1472
	cr6.compare<uint32_t>(ctx.r10.u32, 1472, xer);
	// bne cr6,0x8323e8b4
	if (!cr6.eq) goto loc_8323E8B4;
	// lfs f1,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x832248d8
	ctx.lr = 0x8323E71C;
	sub_832248D8(ctx, base);
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
loc_8323E730:
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x8323e2a8
	ctx.lr = 0x8323E738;
	sub_8323E2A8(ctx, base);
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
loc_8323E74C:
	// lfs f1,24(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x832248d8
	ctx.lr = 0x8323E758;
	sub_832248D8(ctx, base);
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
loc_8323E76C:
	// lfs f1,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x832248d8
	ctx.lr = 0x8323E778;
	sub_832248D8(ctx, base);
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
loc_8323E78C:
	// cmplwi cr6,r10,1894
	cr6.compare<uint32_t>(ctx.r10.u32, 1894, xer);
	// bgt cr6,0x8323e8ac
	if (cr6.gt) goto loc_8323E8AC;
	// beq cr6,0x8323e888
	if (cr6.eq) goto loc_8323E888;
	// addi r10,r10,-1491
	ctx.r10.s64 = ctx.r10.s64 + -1491;
	// cmplwi cr6,r10,6
	cr6.compare<uint32_t>(ctx.r10.u32, 6, xer);
	// bgt cr6,0x8323e8b4
	if (cr6.gt) goto loc_8323E8B4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8323e7f0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8323E7F0;
	// bdzf 4*cr6+eq,0x8323e8b4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8323E8B4;
	// bdzf 4*cr6+eq,0x8323e8b4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8323E8B4;
	// bdzf 4*cr6+eq,0x8323e848
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8323E848;
	// bdzf 4*cr6+eq,0x8323e868
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8323E868;
	// bne cr6,0x8323e81c
	if (!cr6.eq) goto loc_8323E81C;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lfs f13,48(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lfs f0,-30452(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -30452);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x832248d8
	ctx.lr = 0x8323E7DC;
	sub_832248D8(ctx, base);
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
loc_8323E7F0:
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lfs f13,52(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lfs f0,-30452(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -30452);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x832248d8
	ctx.lr = 0x8323E808;
	sub_832248D8(ctx, base);
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
loc_8323E81C:
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lfs f13,56(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lfs f0,-30452(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -30452);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x832248d8
	ctx.lr = 0x8323E834;
	sub_832248D8(ctx, base);
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
loc_8323E848:
	// lfs f1,40(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x832248d8
	ctx.lr = 0x8323E854;
	sub_832248D8(ctx, base);
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
loc_8323E868:
	// lfs f1,44(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x832248d8
	ctx.lr = 0x8323E874;
	sub_832248D8(ctx, base);
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
loc_8323E888:
	// lhz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// extsh r4,r10
	ctx.r4.s64 = ctx.r10.s16;
	// bl 0x8322e5b0
	ctx.lr = 0x8323E898;
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
loc_8323E8AC:
	// cmplwi cr6,r10,1895
	cr6.compare<uint32_t>(ctx.r10.u32, 1895, xer);
	// beq cr6,0x8323e8c8
	if (cr6.eq) goto loc_8323E8C8;
loc_8323E8B4:
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
loc_8323E8C8:
	// lbz r10,9(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// clrlwi r4,r10,31
	ctx.r4.u64 = ctx.r10.u32 & 0x1;
	// bl 0x8320cf60
	ctx.lr = 0x8323E8D8;
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
}

__attribute__((alias("__imp__sub_8323E8EC"))) PPC_WEAK_FUNC(sub_8323E8EC);
PPC_FUNC_IMPL(__imp__sub_8323E8EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8323E8F0"))) PPC_WEAK_FUNC(sub_8323E8F0);
PPC_FUNC_IMPL(__imp__sub_8323E8F0) {
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
	// lhz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,473
	cr6.compare<uint32_t>(ctx.r11.u32, 473, xer);
	// bgt cr6,0x8323e954
	if (cr6.gt) goto loc_8323E954;
	// beq cr6,0x8323e944
	if (cr6.eq) goto loc_8323E944;
	// cmplwi cr6,r11,471
	cr6.compare<uint32_t>(ctx.r11.u32, 471, xer);
	// beq cr6,0x8323e934
	if (cr6.eq) goto loc_8323E934;
	// cmplwi cr6,r11,472
	cr6.compare<uint32_t>(ctx.r11.u32, 472, xer);
	// bne cr6,0x8323e95c
	if (!cr6.eq) goto loc_8323E95C;
	// lwz r3,12(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// bl 0x83220448
	ctx.lr = 0x8323E92C;
	sub_83220448(ctx, base);
	// stfs f1,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// b 0x8323e980
	goto loc_8323E980;
loc_8323E934:
	// lwz r3,12(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// bl 0x83220448
	ctx.lr = 0x8323E93C;
	sub_83220448(ctx, base);
	// stfs f1,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// b 0x8323e980
	goto loc_8323E980;
loc_8323E944:
	// lwz r3,12(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// bl 0x83220448
	ctx.lr = 0x8323E94C;
	sub_83220448(ctx, base);
	// stfs f1,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// b 0x8323e980
	goto loc_8323E980;
loc_8323E954:
	// cmplwi cr6,r11,1894
	cr6.compare<uint32_t>(ctx.r11.u32, 1894, xer);
	// beq cr6,0x8323e974
	if (cr6.eq) goto loc_8323E974;
loc_8323E95C:
	// li r3,-4
	ctx.r3.s64 = -4;
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
loc_8323E974:
	// lwz r3,12(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// bl 0x83222578
	ctx.lr = 0x8323E97C;
	sub_83222578(ctx, base);
	// sth r3,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r3.u16);
loc_8323E980:
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

__attribute__((alias("__imp__sub_8323E998"))) PPC_WEAK_FUNC(sub_8323E998);
PPC_FUNC_IMPL(__imp__sub_8323E998) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8323E9A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8323e9cc
	if (cr6.eq) goto loc_8323E9CC;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// li r3,-6
	ctx.r3.s64 = -6;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8323E9CC:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8323ea50
	if (cr6.eq) goto loc_8323EA50;
	// lhz r11,14(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x8323ea3c
	if (!cr6.gt) goto loc_8323EA3C;
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// ori r28,r11,65535
	ctx.r28.u64 = ctx.r11.u64 | 65535;
loc_8323E9FC:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8323ea1c
	if (cr6.eq) goto loc_8323EA1C;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// b 0x8323ea24
	goto loc_8323EA24;
loc_8323EA1C:
	// bl 0x8323e1a0
	ctx.lr = 0x8323EA20;
	sub_8323E1A0(ctx, base);
	// bl 0x83209d68
	ctx.lr = 0x8323EA24;
	sub_83209D68(ctx, base);
loc_8323EA24:
	// lhz r11,14(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r29,r10
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, xer);
	// blt cr6,0x8323e9fc
	if (cr6.lt) goto loc_8323E9FC;
loc_8323EA3C:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8323ea50
	if (cr6.eq) goto loc_8323EA50;
	// bl 0x83209d68
	ctx.lr = 0x8323EA4C;
	sub_83209D68(ctx, base);
	// stw r27,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r27.u32);
loc_8323EA50:
	// vspltisw128 v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x0)));
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r27,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r27.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r27,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r27.u32);
	// stvx128 v63,r0,r31
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r31,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323EA74"))) PPC_WEAK_FUNC(sub_8323EA74);
PPC_FUNC_IMPL(__imp__sub_8323EA74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8323EA78"))) PPC_WEAK_FUNC(sub_8323EA78);
PPC_FUNC_IMPL(__imp__sub_8323EA78) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x83209aa8
	ctx.lr = 0x8323EA98;
	sub_83209AA8(ctx, base);
	// vspltisw128 v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x0)));
	// li r10,16
	ctx.r10.s64 = 16;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r3,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8323ead4
	if (cr6.eq) goto loc_8323EAD4;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x8323ead4
	if (cr6.eq) goto loc_8323EAD4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8320e738
	ctx.lr = 0x8323EAD4;
	sub_8320E738(ctx, base);
loc_8323EAD4:
	// lwz r30,12(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lis r11,1
	ctx.r11.s64 = 65536;
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
	// beq cr6,0x8323eb00
	if (cr6.eq) goto loc_8323EB00;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83222030
	ctx.lr = 0x8323EB00;
	sub_83222030(ctx, base);
loc_8323EB00:
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// li r10,154
	ctx.r10.s64 = 154;
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// sth r10,2(r30)
	PPC_STORE_U16(ctx.r30.u32 + 2, ctx.r10.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323EB2C"))) PPC_WEAK_FUNC(sub_8323EB2C);
PPC_FUNC_IMPL(__imp__sub_8323EB2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8323EB30"))) PPC_WEAK_FUNC(sub_8323EB30);
PPC_FUNC_IMPL(__imp__sub_8323EB30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x8323EB38;
	__savegprlr_20(ctx, base);
	// li r12,-160
	ctx.r12.s64 = -160;
	// stvx128 v125,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v125.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r12,-144
	ctx.r12.s64 = -144;
	// stvx128 v126,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v126.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r12,-128
	ctx.r12.s64 = -128;
	// stvx128 v127,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,14(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r10,r4
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, xer);
	// bge cr6,0x8323ec60
	if (!cr6.lt) goto loc_8323EC60;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// bl 0x83209df8
	ctx.lr = 0x8323EB78;
	sub_83209DF8(ctx, base);
	// lhz r11,14(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 14);
	// stw r3,36(r25)
	PPC_STORE_U32(ctx.r25.u32 + 36, ctx.r3.u32);
	// extsh r31,r11
	ctx.r31.s64 = ctx.r11.s16;
	// cmpw cr6,r31,r24
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r24.s32, xer);
	// bge cr6,0x8323ec5c
	if (!cr6.lt) goto loc_8323EC5C;
	// vspltisw128 v127,0
	simde_mm_store_si128((simde__m128i*)ctx.v127.u32, simde_mm_set1_epi32(int(0x0)));
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// vspltisw128 v126,1
	simde_mm_store_si128((simde__m128i*)ctx.v126.u32, simde_mm_set1_epi32(int(0x1)));
	// rlwinm r30,r31,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r26,16
	ctx.r26.s64 = 16;
	// li r27,48
	ctx.r27.s64 = 48;
	// vor128 v63,v127,v127
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v127.u8));
	// li r20,32
	ctx.r20.s64 = 32;
	// li r21,526
	ctx.r21.s64 = 526;
	// li r22,2
	ctx.r22.s64 = 2;
	// addi r29,r11,5696
	ctx.r29.s64 = ctx.r11.s64 + 5696;
	// vrlimi128 v63,v126,1,0
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v126.f32), 228), 1));
	// li r28,-1
	ctx.r28.s64 = -1;
	// li r23,0
	ctx.r23.s64 = 0;
	// vcsxwfp128 v125,v63,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v125.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
loc_8323EBC8:
	// li r3,144
	ctx.r3.s64 = 144;
	// bl 0x83209aa8
	ctx.lr = 0x8323EBD0;
	sub_83209AA8(ctx, base);
	// vor128 v62,v127,v127
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_load_si128((simde__m128i*)ctx.v127.u8));
	// vor128 v61,v127,v127
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_load_si128((simde__m128i*)ctx.v127.u8));
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// vor128 v60,v127,v127
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_load_si128((simde__m128i*)ctx.v127.u8));
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// stvx128 v127,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// extsh r9,r31
	ctx.r9.s64 = ctx.r31.s16;
	// vrlimi128 v62,v126,8,0
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v126.f32), 228), 8));
	// stvx128 v127,r3,r26
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r26.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vrlimi128 v61,v126,4,0
	simde_mm_store_ps(ctx.v61.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v126.f32), 228), 4));
	// stvx128 v127,r3,r27
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r27.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vrlimi128 v60,v126,2,0
	simde_mm_store_ps(ctx.v60.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v126.f32), 228), 2));
	// stvx128 v127,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v125,r11,r27
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r27.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v125.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// vcsxwfp128 v59,v62,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v59.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v62.u32)));
	// vcsxwfp128 v58,v61,0
	simde_mm_store_ps(ctx.v58.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v61.u32)));
	// cmpw cr6,r31,r24
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r24.s32, xer);
	// vcsxwfp128 v57,v60,0
	simde_mm_store_ps(ctx.v57.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v60.u32)));
	// stvx128 v59,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v58,r11,r26
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r26.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v57,r11,r20
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r20.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// sth r21,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r21.u16);
	// stb r22,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r22.u8);
	// lfs f0,132(r29)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f0,132(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// stw r28,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r28.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stw r23,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r23.u32);
	// lwz r8,36(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 36);
	// stwx r3,r8,r30
	PPC_STORE_U32(ctx.r8.u32 + ctx.r30.u32, ctx.r3.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// sth r9,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r9.u16);
	// blt cr6,0x8323ebc8
	if (cr6.lt) goto loc_8323EBC8;
loc_8323EC5C:
	// sth r24,14(r25)
	PPC_STORE_U16(ctx.r25.u32 + 14, ctx.r24.u16);
loc_8323EC60:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// li r0,-160
	ctx.r0.s64 = -160;
	// lvx128 v125,r1,r0
	simde_mm_store_si128((simde__m128i*)ctx.v125.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r0,-144
	ctx.r0.s64 = -144;
	// lvx128 v126,r1,r0
	simde_mm_store_si128((simde__m128i*)ctx.v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r0,-128
	ctx.r0.s64 = -128;
	// lvx128 v127,r1,r0
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323EC80"))) PPC_WEAK_FUNC(sub_8323EC80);
PPC_FUNC_IMPL(__imp__sub_8323EC80) {
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
	// lhz r30,8(r4)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,1896
	cr6.compare<uint32_t>(ctx.r30.u32, 1896, xer);
	// bgt cr6,0x8323ed3c
	if (cr6.gt) goto loc_8323ED3C;
	// beq cr6,0x8323ed28
	if (cr6.eq) goto loc_8323ED28;
	// cmplwi cr6,r30,491
	cr6.compare<uint32_t>(ctx.r30.u32, 491, xer);
	// beq cr6,0x8323ed04
	if (cr6.eq) goto loc_8323ED04;
	// cmplwi cr6,r30,1152
	cr6.compare<uint32_t>(ctx.r30.u32, 1152, xer);
	// beq cr6,0x8323ecc0
	if (cr6.eq) goto loc_8323ECC0;
	// cmplwi cr6,r30,1254
	cr6.compare<uint32_t>(ctx.r30.u32, 1254, xer);
	// bne cr6,0x8323ed54
	if (!cr6.eq) goto loc_8323ED54;
loc_8323ECC0:
	// lwz r31,12(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
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
	// beq cr6,0x8323ecec
	if (cr6.eq) goto loc_8323ECEC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x8323ECEC;
	sub_83222030(ctx, base);
loc_8323ECEC:
	// li r11,15
	ctx.r11.s64 = 15;
	// sth r30,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r30.u16);
	// li r10,154
	ctx.r10.s64 = 154;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// sth r10,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r10.u16);
	// b 0x8323ed6c
	goto loc_8323ED6C;
loc_8323ED04:
	// lhz r11,14(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// lhz r10,30(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 30);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpw cr6,r8,r9
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, xer);
	// bge cr6,0x8323ed20
	if (!cr6.lt) goto loc_8323ED20;
	// sth r11,30(r3)
	PPC_STORE_U16(ctx.r3.u32 + 30, ctx.r11.u16);
loc_8323ED20:
	// lhz r11,30(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 30);
	// b 0x8323ed60
	goto loc_8323ED60;
loc_8323ED28:
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r3,12(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// rlwinm r4,r11,29,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// bl 0x8320cf60
	ctx.lr = 0x8323ED38;
	sub_8320CF60(ctx, base);
	// b 0x8323ed6c
	goto loc_8323ED6C;
loc_8323ED3C:
	// cmplwi cr6,r11,1949
	cr6.compare<uint32_t>(ctx.r11.u32, 1949, xer);
	// beq cr6,0x8323ed5c
	if (cr6.eq) goto loc_8323ED5C;
	// cmplwi cr6,r11,2357
	cr6.compare<uint32_t>(ctx.r11.u32, 2357, xer);
	// ble cr6,0x8323ed54
	if (!cr6.gt) goto loc_8323ED54;
	// cmplwi cr6,r11,2364
	cr6.compare<uint32_t>(ctx.r11.u32, 2364, xer);
	// ble cr6,0x8323ecc0
	if (!cr6.gt) goto loc_8323ECC0;
loc_8323ED54:
	// li r3,-4
	ctx.r3.s64 = -4;
	// b 0x8323ed70
	goto loc_8323ED70;
loc_8323ED5C:
	// lhz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 28);
loc_8323ED60:
	// lwz r3,12(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// bl 0x8322e5b0
	ctx.lr = 0x8323ED6C;
	sub_8322E5B0(ctx, base);
loc_8323ED6C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8323ED70:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323ED88"))) PPC_WEAK_FUNC(sub_8323ED88);
PPC_FUNC_IMPL(__imp__sub_8323ED88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8323ED90;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83221378
	ctx.lr = 0x8323EDAC;
	sub_83221378(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8323edcc
	if (!cr6.eq) goto loc_8323EDCC;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,154
	ctx.r3.s64 = 154;
	// bl 0x8320d6c0
	ctx.lr = 0x8323EDC8;
	sub_8320D6C0(ctx, base);
	// b 0x8323ee40
	goto loc_8323EE40;
loc_8323EDCC:
	// lwz r29,36(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// cmpwi cr6,r29,3
	cr6.compare<int32_t>(ctx.r29.s32, 3, xer);
	// beq cr6,0x8323ede4
	if (cr6.eq) goto loc_8323EDE4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,154
	ctx.r3.s64 = 154;
	// bl 0x8320d7f8
	ctx.lr = 0x8323EDE4;
	sub_8320D7F8(ctx, base);
loc_8323EDE4:
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// cmpwi cr6,r29,3
	cr6.compare<int32_t>(ctx.r29.s32, 3, xer);
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lfs f31,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
	// blt cr6,0x8323ee00
	if (cr6.lt) goto loc_8323EE00;
	// li r29,3
	ctx.r29.s64 = 3;
loc_8323EE00:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble cr6,0x8323ee40
	if (!cr6.gt) goto loc_8323EE40;
	// addi r30,r27,12
	ctx.r30.s64 = ctx.r27.s64 + 12;
	// rlwinm r11,r31,31,1,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x7FFFFFFC;
loc_8323EE14:
	// lwz r9,32(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// rlwinm r10,r31,3,26,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0x38;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x83220448
	ctx.lr = 0x8323EE28;
	sub_83220448(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// fmuls f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// stfsu f0,4(r30)
	ea = 4 + ctx.r30.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r30.u32 = ea;
	// cmpw cr6,r31,r29
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, xer);
	// rlwinm r11,r31,31,1,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x7FFFFFFC;
	// blt cr6,0x8323ee14
	if (cr6.lt) goto loc_8323EE14;
loc_8323EE40:
	// lwz r11,32(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// ori r10,r11,16
	ctx.r10.u64 = ctx.r11.u64 | 16;
	// stw r10,32(r27)
	PPC_STORE_U32(ctx.r27.u32 + 32, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323EE58"))) PPC_WEAK_FUNC(sub_8323EE58);
PPC_FUNC_IMPL(__imp__sub_8323EE58) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,1900
	cr6.compare<uint32_t>(ctx.r11.u32, 1900, xer);
	// bgt cr6,0x8323ef5c
	if (cr6.gt) goto loc_8323EF5C;
	// beq cr6,0x8323eee8
	if (cr6.eq) goto loc_8323EEE8;
	// cmplwi cr6,r11,491
	cr6.compare<uint32_t>(ctx.r11.u32, 491, xer);
	// beq cr6,0x8323eec4
	if (cr6.eq) goto loc_8323EEC4;
	// cmplwi cr6,r11,1896
	cr6.compare<uint32_t>(ctx.r11.u32, 1896, xer);
	// bne cr6,0x8323ef6c
	if (!cr6.eq) goto loc_8323EF6C;
	// lwz r3,12(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// bl 0x83220140
	ctx.lr = 0x8323EE9C;
	sub_83220140(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// li r9,8
	ctx.r9.s64 = 8;
	// subfic r8,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r11.s64;
	// rlwinm r6,r10,0,29,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// subfe r5,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r4,r5,r9
	ctx.r4.u64 = ctx.r5.u64 & ctx.r9.u64;
	// or r3,r4,r6
	ctx.r3.u64 = ctx.r4.u64 | ctx.r6.u64;
	// stw r3,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r3.u32);
	// b 0x8323ef90
	goto loc_8323EF90;
loc_8323EEC4:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83222578
	ctx.lr = 0x8323EECC;
	sub_83222578(ctx, base);
	// lhz r11,14(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 14);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, xer);
	// blt cr6,0x8323eee0
	if (cr6.lt) goto loc_8323EEE0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8323EEE0:
	// sth r11,30(r30)
	PPC_STORE_U16(ctx.r30.u32 + 30, ctx.r11.u16);
	// b 0x8323ef90
	goto loc_8323EF90;
loc_8323EEE8:
	// li r4,38
	ctx.r4.s64 = 38;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83221378
	ctx.lr = 0x8323EEF4;
	sub_83221378(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8323ef1c
	if (!cr6.eq) goto loc_8323EF1C;
	// li r5,38
	ctx.r5.s64 = 38;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,154
	ctx.r3.s64 = 154;
	// bl 0x8320d6c0
	ctx.lr = 0x8323EF0C;
	sub_8320D6C0(ctx, base);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// ori r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 | 32;
	// stw r10,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r10.u32);
	// b 0x8323ef90
	goto loc_8323EF90;
loc_8323EF1C:
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r31,20(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// bl 0x83267228
	ctx.lr = 0x8323EF2C;
	sub_83267228(ctx, base);
	// lfs f0,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,0(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// ori r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 | 32;
	// lfs f11,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// stfs f9,4(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stw r10,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r10.u32);
	// b 0x8323ef90
	goto loc_8323EF90;
loc_8323EF5C:
	// cmplwi cr6,r11,1905
	cr6.compare<uint32_t>(ctx.r11.u32, 1905, xer);
	// beq cr6,0x8323ef84
	if (cr6.eq) goto loc_8323EF84;
	// cmplwi cr6,r11,1949
	cr6.compare<uint32_t>(ctx.r11.u32, 1949, xer);
	// beq cr6,0x8323ef74
	if (cr6.eq) goto loc_8323EF74;
loc_8323EF6C:
	// li r3,-4
	ctx.r3.s64 = -4;
	// b 0x8323ef94
	goto loc_8323EF94;
loc_8323EF74:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83222578
	ctx.lr = 0x8323EF7C;
	sub_83222578(ctx, base);
	// sth r3,28(r30)
	PPC_STORE_U16(ctx.r30.u32 + 28, ctx.r3.u16);
	// b 0x8323ef90
	goto loc_8323EF90;
loc_8323EF84:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8323ed88
	ctx.lr = 0x8323EF90;
	sub_8323ED88(ctx, base);
loc_8323EF90:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8323EF94:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323EFAC"))) PPC_WEAK_FUNC(sub_8323EFAC);
PPC_FUNC_IMPL(__imp__sub_8323EFAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8323EFB0"))) PPC_WEAK_FUNC(sub_8323EFB0);
PPC_FUNC_IMPL(__imp__sub_8323EFB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8323EFB8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// ble cr6,0x8323f098
	if (!cr6.gt) goto loc_8323F098;
	// li r26,12288
	ctx.r26.s64 = 12288;
loc_8323EFE0:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x8323eff0
	if (!cr6.eq) goto loc_8323EFF0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8323f004
	goto loc_8323F004;
loc_8323EFF0:
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// rlwinm r9,r31,31,1,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x7FFFFFFC;
	// rlwinm r10,r31,3,26,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0x38;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8323F004:
	// cmpw cr6,r31,r25
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r25.s32, xer);
	// bge cr6,0x8323f080
	if (!cr6.lt) goto loc_8323F080;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// bne cr6,0x8323f01c
	if (!cr6.eq) goto loc_8323F01C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8323f030
	goto loc_8323F030;
loc_8323F01C:
	// lwz r11,32(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// rlwinm r9,r31,31,1,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x7FFFFFFC;
	// rlwinm r10,r31,3,26,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0x38;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8323F030:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8323f080
	if (cr6.eq) goto loc_8323F080;
	// lhz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// srw r8,r26,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r26.u32 >> (ctx.r10.u8 & 0x3F));
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r6,r8,24
	ctx.r6.u64 = ctx.r8.u32 & 0xFF;
	// addi r5,r9,-163
	ctx.r5.s64 = ctx.r9.s64 + -163;
	// cntlzw r4,r7
	ctx.r4.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// srawi r10,r5,31
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 31;
	// rlwinm r9,r4,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// and r7,r8,r6
	ctx.r7.u64 = ctx.r8.u64 & ctx.r6.u64;
	// and r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 & ctx.r9.u64;
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x8323f080
	if (!cr6.eq) goto loc_8323F080;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_8323F080:
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x832240b8
	ctx.lr = 0x8323F08C;
	sub_832240B8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r29
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, xer);
	// blt cr6,0x8323efe0
	if (cr6.lt) goto loc_8323EFE0;
loc_8323F098:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323F0A0"))) PPC_WEAK_FUNC(sub_8323F0A0);
PPC_FUNC_IMPL(__imp__sub_8323F0A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8323F0A8;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r29,r7,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// li r11,255
	ctx.r11.s64 = 255;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// slw r10,r11,r29
	ctx.r10.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r29.u8 & 0x3F));
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// not r25,r10
	ctx.r25.u64 = ~ctx.r10.u64;
	// bl 0x83220448
	ctx.lr = 0x8323F0D4;
	sub_83220448(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f0,21588(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21588);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// bge cr6,0x8323f158
	if (!cr6.lt) goto loc_8323F158;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8323f0fc
	if (!cr6.eq) goto loc_8323F0FC;
loc_8323F0FC:
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r28,r10,r30
	ctx.r28.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r30.u8 & 0x3F));
loc_8323F104:
	// cmpw cr6,r31,r27
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r27.s32, xer);
	// bge cr6,0x8323f150
	if (!cr6.lt) goto loc_8323F150;
	// subf r8,r31,r27
	ctx.r8.s64 = ctx.r27.s64 - ctx.r31.s64;
	// slw r10,r11,r29
	ctx.r10.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r29.u8 & 0x3F));
	// clrlwi r9,r28,24
	ctx.r9.u64 = ctx.r28.u32 & 0xFF;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
loc_8323F120:
	// lwz r8,36(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 36);
	// clrlwi r7,r9,24
	ctx.r7.u64 = ctx.r9.u32 & 0xFF;
	// lwzx r6,r8,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r5,128(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 128);
	// and r4,r25,r5
	ctx.r4.u64 = ctx.r25.u64 & ctx.r5.u64;
	// or r3,r4,r10
	ctx.r3.u64 = ctx.r4.u64 | ctx.r10.u64;
	// stw r3,128(r6)
	PPC_STORE_U32(ctx.r6.u32 + 128, ctx.r3.u32);
	// lbz r8,8(r6)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r6.u32 + 8);
	// or r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 | ctx.r8.u64;
	// stb r7,8(r6)
	PPC_STORE_U8(ctx.r6.u32 + 8, ctx.r7.u8);
	// bdnz 0x8323f120
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8323F120;
loc_8323F150:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8323F158:
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x8323f104
	goto loc_8323F104;
}

__attribute__((alias("__imp__sub_8323F160"))) PPC_WEAK_FUNC(sub_8323F160);
PPC_FUNC_IMPL(__imp__sub_8323F160) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8323F168;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r29,r7,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// li r11,255
	ctx.r11.s64 = 255;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// slw r10,r11,r29
	ctx.r10.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r29.u8 & 0x3F));
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// not r25,r10
	ctx.r25.u64 = ~ctx.r10.u64;
	// bl 0x83222578
	ctx.lr = 0x8323F194;
	sub_83222578(ctx, base);
	// cmplwi cr6,r3,255
	cr6.compare<uint32_t>(ctx.r3.u32, 255, xer);
	// bge cr6,0x8323f1a8
	if (!cr6.lt) goto loc_8323F1A8;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8323f1ac
	if (!cr6.eq) goto loc_8323F1AC;
	// b 0x8323f1b4
	goto loc_8323F1B4;
loc_8323F1A8:
	// li r3,255
	ctx.r3.s64 = 255;
loc_8323F1AC:
	// li r11,16
	ctx.r11.s64 = 16;
	// slw r28,r11,r30
	ctx.r28.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r30.u8 & 0x3F));
loc_8323F1B4:
	// cmpw cr6,r31,r27
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r27.s32, xer);
	// bge cr6,0x8323f200
	if (!cr6.lt) goto loc_8323F200;
	// subf r11,r31,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r31.s64;
	// slw r10,r3,r29
	ctx.r10.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r29.u8 & 0x3F));
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// clrlwi r9,r28,24
	ctx.r9.u64 = ctx.r28.u32 & 0xFF;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
loc_8323F1D0:
	// lwz r8,36(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 36);
	// clrlwi r7,r9,24
	ctx.r7.u64 = ctx.r9.u32 & 0xFF;
	// lwzx r6,r11,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r5,132(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 132);
	// and r4,r5,r25
	ctx.r4.u64 = ctx.r5.u64 & ctx.r25.u64;
	// or r3,r4,r10
	ctx.r3.u64 = ctx.r4.u64 | ctx.r10.u64;
	// stw r3,132(r6)
	PPC_STORE_U32(ctx.r6.u32 + 132, ctx.r3.u32);
	// lbz r8,8(r6)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r6.u32 + 8);
	// or r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stb r7,8(r6)
	PPC_STORE_U8(ctx.r6.u32 + 8, ctx.r7.u8);
	// bdnz 0x8323f1d0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8323F1D0;
loc_8323F200:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323F208"))) PPC_WEAK_FUNC(sub_8323F208);
PPC_FUNC_IMPL(__imp__sub_8323F208) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x8323F210;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r27,r7,3,0,28
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// li r11,255
	ctx.r11.s64 = 255;
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r9,r11,r27
	ctx.r9.u64 = ctx.r27.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r27.u8 & 0x3F));
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// not r25,r9
	ctx.r25.u64 = ~ctx.r9.u64;
	// slw r24,r10,r7
	ctx.r24.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r7.u8 & 0x3F));
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpw cr6,r4,r5
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, xer);
	// bge cr6,0x8323f2fc
	if (!cr6.lt) goto loc_8323F2FC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// rlwinm r28,r4,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r29,r4,r5
	ctx.r29.s64 = ctx.r5.s64 - ctx.r4.s64;
	// lfs f31,21588(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21588);
	ctx.f31.f64 = double(temp.f32);
loc_8323F254:
	// lwz r11,36(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 36);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// lwzx r31,r11,r28
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// bne cr6,0x8323f26c
	if (!cr6.eq) goto loc_8323F26C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8323f298
	goto loc_8323F298;
loc_8323F26C:
	// srawi r11,r30,3
	xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 3;
	// lwz r10,32(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32);
	// addze r9,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r8,r30,3
	xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r30.s32 >> 3;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r6,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r6.s64 = temp.s64;
	// rlwinm r5,r6,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r4,r5,r30
	ctx.r4.s64 = ctx.r30.s64 - ctx.r5.s64;
	// lwzx r10,r7,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8323F298:
	// bl 0x83220448
	ctx.lr = 0x8323F29C;
	sub_83220448(ctx, base);
	// fmuls f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// bge cr6,0x8323f2c4
	if (!cr6.lt) goto loc_8323F2C4;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ctx.r11.u64;
	// b 0x8323f2c8
	goto loc_8323F2C8;
loc_8323F2C4:
	// li r11,255
	ctx.r11.s64 = 255;
loc_8323F2C8:
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// slw r9,r11,r27
	ctx.r9.u64 = ctx.r27.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r27.u8 & 0x3F));
	// and r8,r10,r25
	ctx.r8.u64 = ctx.r10.u64 & ctx.r25.u64;
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// stw r7,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r7.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lbz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// or r5,r6,r24
	ctx.r5.u64 = ctx.r6.u64 | ctx.r24.u64;
	// clrlwi r4,r5,24
	ctx.r4.u64 = ctx.r5.u32 & 0xFF;
	// stb r4,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r4.u8);
	// bne 0x8323f254
	if (!cr0.eq) goto loc_8323F254;
loc_8323F2FC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323F308"))) PPC_WEAK_FUNC(sub_8323F308);
PPC_FUNC_IMPL(__imp__sub_8323F308) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x8323F310;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r27,r7,3,0,28
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// li r11,255
	ctx.r11.s64 = 255;
	// li r10,16
	ctx.r10.s64 = 16;
	// slw r9,r11,r27
	ctx.r9.u64 = ctx.r27.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r27.u8 & 0x3F));
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// not r25,r9
	ctx.r25.u64 = ~ctx.r9.u64;
	// slw r24,r10,r7
	ctx.r24.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r7.u8 & 0x3F));
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpw cr6,r4,r5
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, xer);
	// bge cr6,0x8323f3e0
	if (!cr6.lt) goto loc_8323F3E0;
	// rlwinm r28,r4,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r29,r4,r5
	ctx.r29.s64 = ctx.r5.s64 - ctx.r4.s64;
loc_8323F348:
	// lwz r11,36(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 36);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// lwzx r31,r11,r28
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// bne cr6,0x8323f360
	if (!cr6.eq) goto loc_8323F360;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8323f38c
	goto loc_8323F38C;
loc_8323F360:
	// srawi r11,r30,3
	xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 3;
	// lwz r10,32(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32);
	// addze r9,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r8,r30,3
	xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r30.s32 >> 3;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r6,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r6.s64 = temp.s64;
	// rlwinm r5,r6,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r4,r5,r30
	ctx.r4.s64 = ctx.r30.s64 - ctx.r5.s64;
	// lwzx r10,r7,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8323F38C:
	// bl 0x83222578
	ctx.lr = 0x8323F390;
	sub_83222578(ctx, base);
	// cmplwi cr6,r3,255
	cr6.compare<uint32_t>(ctx.r3.u32, 255, xer);
	// bge cr6,0x8323f3a8
	if (!cr6.lt) goto loc_8323F3A8;
	// subfic r11,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r9,r3
	ctx.r11.u64 = ctx.r9.u64 & ctx.r3.u64;
	// b 0x8323f3ac
	goto loc_8323F3AC;
loc_8323F3A8:
	// li r11,255
	ctx.r11.s64 = 255;
loc_8323F3AC:
	// lwz r10,132(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// slw r9,r11,r27
	ctx.r9.u64 = ctx.r27.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r27.u8 & 0x3F));
	// and r8,r10,r25
	ctx.r8.u64 = ctx.r10.u64 & ctx.r25.u64;
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// stw r7,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r7.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lbz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// or r5,r6,r24
	ctx.r5.u64 = ctx.r6.u64 | ctx.r24.u64;
	// clrlwi r4,r5,24
	ctx.r4.u64 = ctx.r5.u32 & 0xFF;
	// stb r4,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r4.u8);
	// bne 0x8323f348
	if (!cr0.eq) goto loc_8323F348;
loc_8323F3E0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323F3E8"))) PPC_WEAK_FUNC(sub_8323F3E8);
PPC_FUNC_IMPL(__imp__sub_8323F3E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x8323F3F0;
	__savegprlr_19(ctx, base);
	// stfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// li r31,-1
	ctx.r31.s64 = -1;
	// li r22,-1
	ctx.r22.s64 = -1;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// blt cr6,0x8323f420
	if (cr6.lt) goto loc_8323F420;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// ble cr6,0x8323f430
	if (!cr6.gt) goto loc_8323F430;
loc_8323F420:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r11,12704
	ctx.r3.s64 = ctx.r11.s64 + 12704;
	// bl 0x8320d088
	ctx.lr = 0x8323F430;
	sub_8320D088(ctx, base);
loc_8323F430:
	// lwz r10,28(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// blt cr6,0x83241064
	if (cr6.lt) goto loc_83241064;
	// lwz r9,16(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r21,r11,11612
	ctx.r21.s64 = ctx.r11.s64 + 11612;
	// lhz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// subf r6,r10,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r10.s64;
	// rlwinm r10,r6,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r20,r29
	ctx.r20.u64 = ctx.r29.u64;
	// lhz r28,2(r29)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r29.u32 + 2);
	// cmplwi cr6,r28,256
	cr6.compare<uint32_t>(ctx.r28.u32, 256, xer);
	// bge cr6,0x8323f484
	if (!cr6.lt) goto loc_8323F484;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// lhz r4,8(r25)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r25.u32 + 8);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r3,154
	ctx.r3.s64 = 154;
	// bl 0x8320d5b8
	ctx.lr = 0x8323F484;
	sub_8320D5B8(ctx, base);
loc_8323F484:
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83221378
	ctx.lr = 0x8323F494;
	sub_83221378(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8323f4bc
	if (!cr6.eq) goto loc_8323F4BC;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lhz r4,8(r25)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r25.u32 + 8);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r5,r11,12716
	ctx.r5.s64 = ctx.r11.s64 + 12716;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r3,154
	ctx.r3.s64 = 154;
	// bl 0x8320d428
	ctx.lr = 0x8323F4BC;
	sub_8320D428(ctx, base);
loc_8323F4BC:
	// lwz r11,28(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// blt cr6,0x8323f4d8
	if (cr6.lt) goto loc_8323F4D8;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83222578
	ctx.lr = 0x8323F4D4;
	sub_83222578(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8323F4D8:
	// lwz r11,28(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// blt cr6,0x8323f4f0
	if (cr6.lt) goto loc_8323F4F0;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x83222578
	ctx.lr = 0x8323F4EC;
	sub_83222578(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
loc_8323F4F0:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x8323f520
	if (cr6.eq) goto loc_8323F520;
	// lwz r26,36(r24)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r24.u32 + 36);
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// ble cr6,0x8323f520
	if (!cr6.gt) goto loc_8323F520;
	// lwz r11,32(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x83221558
	ctx.lr = 0x8323F510;
	sub_83221558(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8323f520
	if (!cr6.eq) goto loc_8323F520;
	// li r26,1
	ctx.r26.s64 = 1;
loc_8323F520:
	// lhz r11,14(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 14);
	// lhz r9,30(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 30);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpw cr6,r8,r10
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, xer);
	// bge cr6,0x8323f53c
	if (!cr6.lt) goto loc_8323F53C;
	// sth r11,30(r30)
	PPC_STORE_U16(ctx.r30.u32 + 30, ctx.r11.u16);
loc_8323F53C:
	// lhz r11,30(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 30);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpw cr6,r9,r26
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r26.s32, xer);
	// bge cr6,0x8323f564
	if (!cr6.lt) goto loc_8323F564;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// cmpw cr6,r26,r10
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r10.s32, xer);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// blt cr6,0x8323f560
	if (cr6.lt) goto loc_8323F560;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_8323F560:
	// sth r11,30(r30)
	PPC_STORE_U16(ctx.r30.u32 + 30, ctx.r11.u16);
loc_8323F564:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x8323f574
	if (cr6.lt) goto loc_8323F574;
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(ctx.r22.s32, 0, xer);
	// bge cr6,0x8323f57c
	if (!cr6.lt) goto loc_8323F57C;
loc_8323F574:
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r22,r9
	ctx.r22.u64 = ctx.r9.u64;
loc_8323F57C:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8323eb30
	ctx.lr = 0x8323F588;
	sub_8323EB30(ctx, base);
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// cmpwi cr6,r28,473
	cr6.compare<int32_t>(ctx.r28.s32, 473, xer);
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lhz r9,42(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 42);
	// lfs f31,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
	// lhz r8,40(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 40);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// addic r6,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// subfe r23,r6,r7
	temp.u8 = (~ctx.r6.u32 + ctx.r7.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r23.u64 = ~ctx.r6.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// beq cr6,0x8323f5c4
	if (cr6.eq) goto loc_8323F5C4;
	// cmpwi cr6,r28,1490
	cr6.compare<int32_t>(ctx.r28.s32, 1490, xer);
	// ble cr6,0x8323f5d0
	if (!cr6.gt) goto loc_8323F5D0;
	// cmpwi cr6,r28,1493
	cr6.compare<int32_t>(ctx.r28.s32, 1493, xer);
	// bgt cr6,0x8323f5d0
	if (cr6.gt) goto loc_8323F5D0;
loc_8323F5C4:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// ori r10,r11,8
	ctx.r10.u64 = ctx.r11.u64 | 8;
	// stw r10,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r10.u32);
loc_8323F5D0:
	// cmpwi cr6,r26,1
	cr6.compare<int32_t>(ctx.r26.s32, 1, xer);
	// bne cr6,0x83240660
	if (!cr6.eq) goto loc_83240660;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// bne cr6,0x8323f5e8
	if (!cr6.eq) goto loc_8323F5E8;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x8323f5f0
	goto loc_8323F5F0;
loc_8323F5E8:
	// lwz r11,32(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 32);
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8323F5F0:
	// cmpwi cr6,r28,1493
	cr6.compare<int32_t>(ctx.r28.s32, 1493, xer);
	// bgt cr6,0x832400e4
	if (cr6.gt) goto loc_832400E4;
	// beq cr6,0x8323ffbc
	if (cr6.eq) goto loc_8323FFBC;
	// cmpwi cr6,r28,473
	cr6.compare<int32_t>(ctx.r28.s32, 473, xer);
	// bgt cr6,0x8323f998
	if (cr6.gt) goto loc_8323F998;
	// beq cr6,0x8323f8e8
	if (cr6.eq) goto loc_8323F8E8;
	// cmpwi cr6,r28,337
	cr6.compare<int32_t>(ctx.r28.s32, 337, xer);
	// bgt cr6,0x8323f778
	if (cr6.gt) goto loc_8323F778;
	// beq cr6,0x8323f704
	if (cr6.eq) goto loc_8323F704;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// beq cr6,0x83241064
	if (cr6.eq) goto loc_83241064;
	// cmpwi cr6,r28,320
	cr6.compare<int32_t>(ctx.r28.s32, 320, xer);
	// beq cr6,0x8323f6a8
	if (cr6.eq) goto loc_8323F6A8;
	// cmpwi cr6,r28,335
	cr6.compare<int32_t>(ctx.r28.s32, 335, xer);
	// bne cr6,0x83240508
	if (!cr6.eq) goto loc_83240508;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83220140
	ctx.lr = 0x8323F634;
	sub_83220140(ctx, base);
	// clrlwi r28,r3,24
	ctx.r28.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x8323f654
	if (cr6.eq) goto loc_8323F654;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,335
	ctx.r5.s64 = 335;
	// li r4,155
	ctx.r4.s64 = 155;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8320d6e0
	ctx.lr = 0x8323F654;
	sub_8320D6E0(ctx, base);
loc_8323F654:
	// cmpw cr6,r31,r22
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r22.s32, xer);
	// bge cr6,0x83241064
	if (!cr6.lt) goto loc_83241064;
	// subf r11,r31,r22
	ctx.r11.s64 = ctx.r22.s64 - ctx.r31.s64;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_8323F668:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lbz r9,9(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// rlwinm r9,r9,0,29,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// beq cr6,0x8323f68c
	if (cr6.eq) goto loc_8323F68C;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// ori r9,r9,8
	ctx.r9.u64 = ctx.r9.u64 | 8;
loc_8323F68C:
	// stb r9,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r9.u8);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8323f668
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8323F668;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_8323F6A8:
	// lhz r10,2(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 2);
	// cmplwi cr6,r10,256
	cr6.compare<uint32_t>(ctx.r10.u32, 256, xer);
	// bge cr6,0x8323f6cc
	if (!cr6.lt) goto loc_8323F6CC;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,320
	ctx.r5.s64 = 320;
	// li r4,155
	ctx.r4.s64 = 155;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8320d880
	ctx.lr = 0x8323F6C8;
	sub_8320D880(ctx, base);
	// li r10,526
	ctx.r10.s64 = 526;
loc_8323F6CC:
	// cmpw cr6,r31,r22
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r22.s32, xer);
	// bge cr6,0x83241064
	if (!cr6.lt) goto loc_83241064;
	// subf r9,r31,r22
	ctx.r9.s64 = ctx.r22.s64 - ctx.r31.s64;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8323F6E0:
	// lwz r9,36(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r10,2(r8)
	PPC_STORE_U16(ctx.r8.u32 + 2, ctx.r10.u16);
	// bdnz 0x8323f6e0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8323F6E0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_8323F704:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83241064
	if (cr6.eq) goto loc_83241064;
	// lhz r11,2(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 2);
	// li r10,12288
	ctx.r10.s64 = 12288;
	// lhz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lwz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// addi r6,r11,-163
	ctx.r6.s64 = ctx.r11.s64 + -163;
	// srw r5,r10,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r7.u8 & 0x3F));
	// srawi r4,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 31;
	// clrlwi r3,r5,24
	ctx.r3.u64 = ctx.r5.u32 & 0xFF;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cntlzw r10,r8
	ctx.r10.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// and r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 & ctx.r3.u64;
	// rlwinm r8,r10,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// and r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 & ctx.r8.u64;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x83241064
	if (!cr6.eq) goto loc_83241064;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,337
	ctx.r5.s64 = 337;
	// li r4,155
	ctx.r4.s64 = 155;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8320d6e0
	ctx.lr = 0x8323F768;
	sub_8320D6E0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_8323F778:
	// cmpwi cr6,r28,471
	cr6.compare<int32_t>(ctx.r28.s32, 471, xer);
	// beq cr6,0x8323f838
	if (cr6.eq) goto loc_8323F838;
	// cmpwi cr6,r28,472
	cr6.compare<int32_t>(ctx.r28.s32, 472, xer);
	// bne cr6,0x83240508
	if (!cr6.eq) goto loc_83240508;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83220448
	ctx.lr = 0x8323F790;
	sub_83220448(ctx, base);
	// fmuls f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// cmpw cr6,r31,r22
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r22.s32, xer);
	// bge cr6,0x83241064
	if (!cr6.lt) goto loc_83241064;
	// subf r11,r31,r22
	ctx.r11.s64 = ctx.r22.s64 - ctx.r31.s64;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// blt cr6,0x8323f800
	if (cr6.lt) goto loc_8323F800;
	// addi r7,r22,-3
	ctx.r7.s64 = ctx.r22.s64 + -3;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
loc_8323F7B4:
	// lwz r8,36(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r10,r7
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, xer);
	// lwzx r6,r11,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// stfs f0,20(r6)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 20, temp.u32);
	// lwz r8,36(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// add r5,r11,r8
	ctx.r5.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stfs f0,20(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// lwz r8,36(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r8,-4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// stfs f0,20(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 20, temp.u32);
	// lwz r6,36(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwzx r5,r9,r6
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// stfs f0,20(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 20, temp.u32);
	// blt cr6,0x8323f7b4
	if (cr6.lt) goto loc_8323F7B4;
loc_8323F800:
	// cmpw cr6,r10,r22
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r22.s32, xer);
	// bge cr6,0x83241064
	if (!cr6.lt) goto loc_83241064;
	// subf r9,r10,r22
	ctx.r9.s64 = ctx.r22.s64 - ctx.r10.s64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8323F814:
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f0,20(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 20, temp.u32);
	// bdnz 0x8323f814
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8323F814;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-120(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_8323F838:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83220448
	ctx.lr = 0x8323F840;
	sub_83220448(ctx, base);
	// fmuls f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// cmpw cr6,r31,r22
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r22.s32, xer);
	// bge cr6,0x83241064
	if (!cr6.lt) goto loc_83241064;
	// subf r11,r31,r22
	ctx.r11.s64 = ctx.r22.s64 - ctx.r31.s64;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// blt cr6,0x8323f8b0
	if (cr6.lt) goto loc_8323F8B0;
	// addi r7,r22,-3
	ctx.r7.s64 = ctx.r22.s64 + -3;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
loc_8323F864:
	// lwz r8,36(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r10,r7
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, xer);
	// lwzx r6,r11,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// stfs f0,16(r6)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 16, temp.u32);
	// lwz r8,36(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// add r5,r11,r8
	ctx.r5.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stfs f0,16(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// lwz r8,36(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// add r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r8,-4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// stfs f0,16(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 16, temp.u32);
	// lwz r6,36(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwzx r5,r6,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// stfs f0,16(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 16, temp.u32);
	// blt cr6,0x8323f864
	if (cr6.lt) goto loc_8323F864;
loc_8323F8B0:
	// cmpw cr6,r10,r22
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r22.s32, xer);
	// bge cr6,0x83241064
	if (!cr6.lt) goto loc_83241064;
	// subf r9,r10,r22
	ctx.r9.s64 = ctx.r22.s64 - ctx.r10.s64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8323F8C4:
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f0,16(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 16, temp.u32);
	// bdnz 0x8323f8c4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8323F8C4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-120(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_8323F8E8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83220448
	ctx.lr = 0x8323F8F0;
	sub_83220448(ctx, base);
	// fmuls f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// cmpw cr6,r31,r22
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r22.s32, xer);
	// bge cr6,0x83241064
	if (!cr6.lt) goto loc_83241064;
	// subf r11,r31,r22
	ctx.r11.s64 = ctx.r22.s64 - ctx.r31.s64;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// blt cr6,0x8323f960
	if (cr6.lt) goto loc_8323F960;
	// addi r7,r22,-3
	ctx.r7.s64 = ctx.r22.s64 + -3;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
loc_8323F914:
	// lwz r8,36(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r10,r7
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, xer);
	// lwzx r6,r8,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// stfs f0,24(r6)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 24, temp.u32);
	// lwz r8,36(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// add r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stfs f0,24(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 24, temp.u32);
	// lwz r8,36(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// add r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r8,-4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// stfs f0,24(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 24, temp.u32);
	// lwz r6,36(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwzx r5,r6,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// stfs f0,24(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 24, temp.u32);
	// blt cr6,0x8323f914
	if (cr6.lt) goto loc_8323F914;
loc_8323F960:
	// cmpw cr6,r10,r22
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r22.s32, xer);
	// bge cr6,0x83241064
	if (!cr6.lt) goto loc_83241064;
	// subf r9,r10,r22
	ctx.r9.s64 = ctx.r22.s64 - ctx.r10.s64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8323F974:
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f0,24(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 24, temp.u32);
	// bdnz 0x8323f974
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8323F974;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-120(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_8323F998:
	// cmpwi cr6,r28,1476
	cr6.compare<int32_t>(ctx.r28.s32, 1476, xer);
	// bgt cr6,0x8323fd64
	if (cr6.gt) goto loc_8323FD64;
	// beq cr6,0x8323fd00
	if (cr6.eq) goto loc_8323FD00;
	// cmpwi cr6,r28,510
	cr6.compare<int32_t>(ctx.r28.s32, 510, xer);
	// beq cr6,0x8323fc14
	if (cr6.eq) goto loc_8323FC14;
	// cmpwi cr6,r28,1472
	cr6.compare<int32_t>(ctx.r28.s32, 1472, xer);
	// beq cr6,0x8323fae8
	if (cr6.eq) goto loc_8323FAE8;
	// cmpwi cr6,r28,1473
	cr6.compare<int32_t>(ctx.r28.s32, 1473, xer);
	// bne cr6,0x83240508
	if (!cr6.eq) goto loc_83240508;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83220448
	ctx.lr = 0x8323F9C4;
	sub_83220448(ctx, base);
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r10,r11,5696
	ctx.r10.s64 = ctx.r11.s64 + 5696;
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f0,132(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// beq cr6,0x8323f9e0
	if (cr6.eq) goto loc_8323F9E0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8323F9E0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmpw cr6,r31,r22
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r22.s32, xer);
	// rlwinm r5,r10,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bge cr6,0x83241064
	if (!cr6.lt) goto loc_83241064;
	// subf r11,r31,r22
	ctx.r11.s64 = ctx.r22.s64 - ctx.r31.s64;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// blt cr6,0x8323fa9c
	if (cr6.lt) goto loc_8323FA9C;
	// rlwinm r10,r5,4,24,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xF0;
	// addi r6,r22,-3
	ctx.r6.s64 = ctx.r22.s64 + -3;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
loc_8323FA10:
	// lwz r9,36(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
	// addi r7,r11,12
	ctx.r7.s64 = ctx.r11.s64 + 12;
	// clrlwi r31,r10,24
	ctx.r31.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r29,r10,24
	ctx.r29.u64 = ctx.r10.u32 & 0xFF;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpw cr6,r8,r6
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, xer);
	// stfs f1,36(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 36, temp.u32);
	// lbz r28,7(r9)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r9.u32 + 7);
	// or r4,r28,r4
	ctx.r4.u64 = ctx.r28.u64 | ctx.r4.u64;
	// stb r4,7(r9)
	PPC_STORE_U8(ctx.r9.u32 + 7, ctx.r4.u8);
	// lwz r9,36(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stfs f1,36(r9)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 36, temp.u32);
	// lbz r4,7(r9)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r9.u32 + 7);
	// or r3,r4,r3
	ctx.r3.u64 = ctx.r4.u64 | ctx.r3.u64;
	// stb r3,7(r9)
	PPC_STORE_U8(ctx.r9.u32 + 7, ctx.r3.u8);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwz r9,36(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r9,-4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// stfs f1,36(r9)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 36, temp.u32);
	// lbz r4,7(r9)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r9.u32 + 7);
	// or r3,r4,r31
	ctx.r3.u64 = ctx.r4.u64 | ctx.r31.u64;
	// stb r3,7(r9)
	PPC_STORE_U8(ctx.r9.u32 + 7, ctx.r3.u8);
	// lwz r9,36(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwzx r9,r9,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// stfs f1,36(r9)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 36, temp.u32);
	// lbz r7,7(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 7);
	// or r4,r7,r29
	ctx.r4.u64 = ctx.r7.u64 | ctx.r29.u64;
	// stb r4,7(r9)
	PPC_STORE_U8(ctx.r9.u32 + 7, ctx.r4.u8);
	// blt cr6,0x8323fa10
	if (cr6.lt) goto loc_8323FA10;
loc_8323FA9C:
	// cmpw cr6,r8,r22
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r22.s32, xer);
	// bge cr6,0x83241064
	if (!cr6.lt) goto loc_83241064;
	// subf r11,r8,r22
	ctx.r11.s64 = ctx.r22.s64 - ctx.r8.s64;
	// rlwinm r9,r5,4,24,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xF0;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_8323FAB4:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lbz r7,7(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// stfs f1,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// stb r6,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r6.u8);
	// bdnz 0x8323fab4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8323FAB4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-120(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_8323FAE8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83220448
	ctx.lr = 0x8323FAF0;
	sub_83220448(ctx, base);
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r10,r11,5696
	ctx.r10.s64 = ctx.r11.s64 + 5696;
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f0,132(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// beq cr6,0x8323fb0c
	if (cr6.eq) goto loc_8323FB0C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8323FB0C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmpw cr6,r31,r22
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r22.s32, xer);
	// rlwinm r5,r10,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bge cr6,0x83241064
	if (!cr6.lt) goto loc_83241064;
	// subf r11,r31,r22
	ctx.r11.s64 = ctx.r22.s64 - ctx.r31.s64;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// blt cr6,0x8323fbc8
	if (cr6.lt) goto loc_8323FBC8;
	// rlwinm r10,r5,3,24,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xF8;
	// addi r6,r22,-3
	ctx.r6.s64 = ctx.r22.s64 + -3;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
loc_8323FB3C:
	// lwz r9,36(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
	// addi r7,r11,12
	ctx.r7.s64 = ctx.r11.s64 + 12;
	// clrlwi r31,r10,24
	ctx.r31.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r29,r10,24
	ctx.r29.u64 = ctx.r10.u32 & 0xFF;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpw cr6,r8,r6
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, xer);
	// stfs f1,32(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 32, temp.u32);
	// lbz r28,7(r9)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r9.u32 + 7);
	// or r4,r28,r4
	ctx.r4.u64 = ctx.r28.u64 | ctx.r4.u64;
	// stb r4,7(r9)
	PPC_STORE_U8(ctx.r9.u32 + 7, ctx.r4.u8);
	// lwz r9,36(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stfs f1,32(r9)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 32, temp.u32);
	// lbz r4,7(r9)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r9.u32 + 7);
	// or r3,r4,r3
	ctx.r3.u64 = ctx.r4.u64 | ctx.r3.u64;
	// stb r3,7(r9)
	PPC_STORE_U8(ctx.r9.u32 + 7, ctx.r3.u8);
	// lwz r9,36(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r9,-4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// stfs f1,32(r9)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 32, temp.u32);
	// lbz r4,7(r9)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r9.u32 + 7);
	// or r3,r4,r31
	ctx.r3.u64 = ctx.r4.u64 | ctx.r31.u64;
	// stb r3,7(r9)
	PPC_STORE_U8(ctx.r9.u32 + 7, ctx.r3.u8);
	// lwz r9,36(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwzx r9,r9,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// stfs f1,32(r9)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 32, temp.u32);
	// lbz r7,7(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 7);
	// or r4,r7,r29
	ctx.r4.u64 = ctx.r7.u64 | ctx.r29.u64;
	// stb r4,7(r9)
	PPC_STORE_U8(ctx.r9.u32 + 7, ctx.r4.u8);
	// blt cr6,0x8323fb3c
	if (cr6.lt) goto loc_8323FB3C;
loc_8323FBC8:
	// cmpw cr6,r8,r22
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r22.s32, xer);
	// bge cr6,0x83241064
	if (!cr6.lt) goto loc_83241064;
	// subf r11,r8,r22
	ctx.r11.s64 = ctx.r22.s64 - ctx.r8.s64;
	// rlwinm r9,r5,3,24,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xF8;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_8323FBE0:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lbz r7,7(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// stfs f1,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// stb r6,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r6.u8);
	// bdnz 0x8323fbe0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8323FBE0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-120(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_8323FC14:
	// li r4,52
	ctx.r4.s64 = 52;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83221378
	ctx.lr = 0x8323FC20;
	sub_83221378(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8323fc50
	if (!cr6.eq) goto loc_8323FC50;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,52
	ctx.r6.s64 = 52;
	// li r5,510
	ctx.r5.s64 = 510;
	// li r4,155
	ctx.r4.s64 = 155;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8320d628
	ctx.lr = 0x8323FC40;
	sub_8320D628(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_8323FC50:
	// bl 0x83267228
	ctx.lr = 0x8323FC54;
	sub_83267228(ctx, base);
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8323fca4
	if (cr6.eq) goto loc_8323FCA4;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r1,72
	ctx.r10.s64 = ctx.r1.s64 + 72;
	// addi r11,r3,-8
	ctx.r11.s64 = ctx.r3.s64 + -8;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8323FC70:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x8323fc70
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8323FC70;
	// lfs f0,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f13,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f11,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f13,f31
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmuls f9,f11,f31
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// stfs f12,128(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f10,132(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f9,136(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
loc_8323FCA4:
	// cmpw cr6,r31,r22
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r22.s32, xer);
	// bge cr6,0x83241064
	if (!cr6.lt) goto loc_83241064;
	// rlwinm r8,r31,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r7,r31,r22
	ctx.r7.s64 = ctx.r22.s64 - ctx.r31.s64;
loc_8323FCB4:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r3,-8
	ctx.r10.s64 = ctx.r3.s64 + -8;
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// addi r9,r11,56
	ctx.r9.s64 = ctx.r11.s64 + 56;
loc_8323FCCC:
	// ldu r6,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r6.u64 = PPC_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r6,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U64(ea, ctx.r6.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x8323fccc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8323FCCC;
	// lbz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// addic. r7,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// stb r9,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r9.u8);
	// bne 0x8323fcb4
	if (!cr0.eq) goto loc_8323FCB4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_8323FD00:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83220140
	ctx.lr = 0x8323FD08;
	sub_83220140(ctx, base);
	// cmpw cr6,r31,r22
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r22.s32, xer);
	// bge cr6,0x83241064
	if (!cr6.lt) goto loc_83241064;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r10,4
	ctx.r10.s64 = 4;
	// subf r9,r31,r22
	ctx.r9.s64 = ctx.r22.s64 - ctx.r31.s64;
	// sraw r8,r10,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r8.s64 = ctx.r10.s32 >> temp.u32;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
loc_8323FD2C:
	// lwz r9,36(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// lwzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lbz r6,9(r7)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + 9);
	// clrlwi r5,r6,24
	ctx.r5.u64 = ctx.r6.u32 & 0xFF;
	// rlwinm r5,r5,0,31,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF9;
	// or r4,r5,r8
	ctx.r4.u64 = ctx.r5.u64 | ctx.r8.u64;
	// stb r4,9(r7)
	PPC_STORE_U8(ctx.r7.u32 + 9, ctx.r4.u8);
	// bdnz 0x8323fd2c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8323FD2C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_8323FD64:
	// cmpwi cr6,r28,1491
	cr6.compare<int32_t>(ctx.r28.s32, 1491, xer);
	// beq cr6,0x8323fe9c
	if (cr6.eq) goto loc_8323FE9C;
	// cmpwi cr6,r28,1492
	cr6.compare<int32_t>(ctx.r28.s32, 1492, xer);
	// bne cr6,0x83240508
	if (!cr6.eq) goto loc_83240508;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83220448
	ctx.lr = 0x8323FD7C;
	sub_83220448(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f0,4332(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4332);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f13,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x8323fda0
	if (!cr6.eq) goto loc_8323FDA0;
	// li r5,0
	ctx.r5.s64 = 0;
loc_8323FDA0:
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// cmpw cr6,r31,r22
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r22.s32, xer);
	// bge cr6,0x83241064
	if (!cr6.lt) goto loc_83241064;
	// subf r11,r31,r22
	ctx.r11.s64 = ctx.r22.s64 - ctx.r31.s64;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// blt cr6,0x8323fe50
	if (cr6.lt) goto loc_8323FE50;
	// rlwinm r10,r5,1,24,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFE;
	// addi r6,r22,-3
	ctx.r6.s64 = ctx.r22.s64 + -3;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
loc_8323FDC4:
	// lwz r9,36(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
	// addi r7,r11,12
	ctx.r7.s64 = ctx.r11.s64 + 12;
	// clrlwi r31,r10,24
	ctx.r31.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r29,r10,24
	ctx.r29.u64 = ctx.r10.u32 & 0xFF;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpw cr6,r8,r6
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, xer);
	// stfs f0,52(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 52, temp.u32);
	// lbz r28,7(r9)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r9.u32 + 7);
	// or r4,r28,r4
	ctx.r4.u64 = ctx.r28.u64 | ctx.r4.u64;
	// stb r4,7(r9)
	PPC_STORE_U8(ctx.r9.u32 + 7, ctx.r4.u8);
	// lwz r9,36(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stfs f0,52(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 52, temp.u32);
	// lbz r4,7(r9)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r9.u32 + 7);
	// or r3,r4,r3
	ctx.r3.u64 = ctx.r4.u64 | ctx.r3.u64;
	// stb r3,7(r9)
	PPC_STORE_U8(ctx.r9.u32 + 7, ctx.r3.u8);
	// lwz r9,36(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// lwz r9,-4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// stfs f0,52(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 52, temp.u32);
	// lbz r4,7(r9)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r9.u32 + 7);
	// or r3,r4,r31
	ctx.r3.u64 = ctx.r4.u64 | ctx.r31.u64;
	// stb r3,7(r9)
	PPC_STORE_U8(ctx.r9.u32 + 7, ctx.r3.u8);
	// lwz r9,36(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwzx r9,r7,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// stfs f0,52(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 52, temp.u32);
	// lbz r7,7(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 7);
	// or r4,r7,r29
	ctx.r4.u64 = ctx.r7.u64 | ctx.r29.u64;
	// stb r4,7(r9)
	PPC_STORE_U8(ctx.r9.u32 + 7, ctx.r4.u8);
	// blt cr6,0x8323fdc4
	if (cr6.lt) goto loc_8323FDC4;
loc_8323FE50:
	// cmpw cr6,r8,r22
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r22.s32, xer);
	// bge cr6,0x83241064
	if (!cr6.lt) goto loc_83241064;
	// subf r11,r8,r22
	ctx.r11.s64 = ctx.r22.s64 - ctx.r8.s64;
	// rlwinm r9,r5,1,24,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFE;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_8323FE68:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lbz r7,7(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// stfs f0,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// stb r6,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r6.u8);
	// bdnz 0x8323fe68
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8323FE68;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-120(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_8323FE9C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83220448
	ctx.lr = 0x8323FEA4;
	sub_83220448(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f0,4332(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4332);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f13,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x8323fec8
	if (!cr6.eq) goto loc_8323FEC8;
	// li r9,0
	ctx.r9.s64 = 0;
loc_8323FEC8:
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// cmpw cr6,r31,r22
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r22.s32, xer);
	// bge cr6,0x83241064
	if (!cr6.lt) goto loc_83241064;
	// subf r11,r31,r22
	ctx.r11.s64 = ctx.r22.s64 - ctx.r31.s64;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// blt cr6,0x8323ff74
	if (cr6.lt) goto loc_8323FF74;
	// addi r6,r22,-3
	ctx.r6.s64 = ctx.r22.s64 + -3;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
loc_8323FEE8:
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// clrlwi r5,r9,24
	ctx.r5.u64 = ctx.r9.u32 & 0xFF;
	// clrlwi r4,r9,24
	ctx.r4.u64 = ctx.r9.u32 & 0xFF;
	// addi r7,r11,12
	ctx.r7.s64 = ctx.r11.s64 + 12;
	// clrlwi r3,r9,24
	ctx.r3.u64 = ctx.r9.u32 & 0xFF;
	// clrlwi r31,r9,24
	ctx.r31.u64 = ctx.r9.u32 & 0xFF;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpw cr6,r8,r6
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, xer);
	// stfs f0,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 48, temp.u32);
	// lbz r29,7(r10)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7);
	// or r5,r29,r5
	ctx.r5.u64 = ctx.r29.u64 | ctx.r5.u64;
	// stb r5,7(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7, ctx.r5.u8);
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stfs f0,48(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 48, temp.u32);
	// lbz r5,7(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7);
	// or r4,r5,r4
	ctx.r4.u64 = ctx.r5.u64 | ctx.r4.u64;
	// stb r4,7(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7, ctx.r4.u8);
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// lwz r10,-4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// stfs f0,48(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 48, temp.u32);
	// lbz r5,7(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7);
	// or r4,r5,r3
	ctx.r4.u64 = ctx.r5.u64 | ctx.r3.u64;
	// stb r4,7(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7, ctx.r4.u8);
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwzx r10,r7,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	// stfs f0,48(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 48, temp.u32);
	// lbz r7,7(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7);
	// or r5,r7,r31
	ctx.r5.u64 = ctx.r7.u64 | ctx.r31.u64;
	// stb r5,7(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7, ctx.r5.u8);
	// blt cr6,0x8323fee8
	if (cr6.lt) goto loc_8323FEE8;
loc_8323FF74:
	// cmpw cr6,r8,r22
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r22.s32, xer);
	// bge cr6,0x83241064
	if (!cr6.lt) goto loc_83241064;
	// subf r11,r8,r22
	ctx.r11.s64 = ctx.r22.s64 - ctx.r8.s64;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_8323FF88:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lbz r7,7(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// stfs f0,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// stb r6,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r6.u8);
	// bdnz 0x8323ff88
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8323FF88;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-120(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_8323FFBC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83220448
	ctx.lr = 0x8323FFC4;
	sub_83220448(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f0,4332(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4332);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f13,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x8323ffe8
	if (!cr6.eq) goto loc_8323FFE8;
	// li r5,0
	ctx.r5.s64 = 0;
loc_8323FFE8:
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// cmpw cr6,r31,r22
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r22.s32, xer);
	// bge cr6,0x83241064
	if (!cr6.lt) goto loc_83241064;
	// subf r11,r31,r22
	ctx.r11.s64 = ctx.r22.s64 - ctx.r31.s64;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// blt cr6,0x83240098
	if (cr6.lt) goto loc_83240098;
	// rlwinm r10,r5,2,24,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFC;
	// addi r6,r22,-3
	ctx.r6.s64 = ctx.r22.s64 + -3;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
loc_8324000C:
	// lwz r9,36(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
	// addi r7,r11,12
	ctx.r7.s64 = ctx.r11.s64 + 12;
	// clrlwi r31,r10,24
	ctx.r31.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r29,r10,24
	ctx.r29.u64 = ctx.r10.u32 & 0xFF;
	// lwzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpw cr6,r8,r6
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, xer);
	// stfs f0,56(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 56, temp.u32);
	// lbz r28,7(r9)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r9.u32 + 7);
	// or r4,r4,r28
	ctx.r4.u64 = ctx.r4.u64 | ctx.r28.u64;
	// stb r4,7(r9)
	PPC_STORE_U8(ctx.r9.u32 + 7, ctx.r4.u8);
	// lwz r9,36(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stfs f0,56(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 56, temp.u32);
	// lbz r4,7(r9)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r9.u32 + 7);
	// or r3,r3,r4
	ctx.r3.u64 = ctx.r3.u64 | ctx.r4.u64;
	// stb r3,7(r9)
	PPC_STORE_U8(ctx.r9.u32 + 7, ctx.r3.u8);
	// lwz r9,36(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// lwz r9,-4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// stfs f0,56(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 56, temp.u32);
	// lbz r4,7(r9)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r9.u32 + 7);
	// or r3,r31,r4
	ctx.r3.u64 = ctx.r31.u64 | ctx.r4.u64;
	// stb r3,7(r9)
	PPC_STORE_U8(ctx.r9.u32 + 7, ctx.r3.u8);
	// lwz r9,36(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwzx r9,r7,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// stfs f0,56(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 56, temp.u32);
	// lbz r7,7(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 7);
	// or r4,r29,r7
	ctx.r4.u64 = ctx.r29.u64 | ctx.r7.u64;
	// stb r4,7(r9)
	PPC_STORE_U8(ctx.r9.u32 + 7, ctx.r4.u8);
	// blt cr6,0x8324000c
	if (cr6.lt) goto loc_8324000C;
loc_83240098:
	// cmpw cr6,r8,r22
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r22.s32, xer);
	// bge cr6,0x83241064
	if (!cr6.lt) goto loc_83241064;
	// subf r11,r8,r22
	ctx.r11.s64 = ctx.r22.s64 - ctx.r8.s64;
	// rlwinm r9,r5,2,24,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFC;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_832400B0:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lbz r7,7(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// stfs f0,56(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// or r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stb r6,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r6.u8);
	// bdnz 0x832400b0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832400B0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-120(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_832400E4:
	// cmpwi cr6,r28,1796
	cr6.compare<int32_t>(ctx.r28.s32, 1796, xer);
	// bgt cr6,0x83240464
	if (cr6.gt) goto loc_83240464;
	// beq cr6,0x8324043c
	if (cr6.eq) goto loc_8324043C;
	// cmpwi cr6,r28,1793
	cr6.compare<int32_t>(ctx.r28.s32, 1793, xer);
	// bgt cr6,0x832403dc
	if (cr6.gt) goto loc_832403DC;
	// beq cr6,0x832403b4
	if (cr6.eq) goto loc_832403B4;
	// cmpwi cr6,r28,1495
	cr6.compare<int32_t>(ctx.r28.s32, 1495, xer);
	// beq cr6,0x83240278
	if (cr6.eq) goto loc_83240278;
	// cmpwi cr6,r28,1496
	cr6.compare<int32_t>(ctx.r28.s32, 1496, xer);
	// beq cr6,0x8324013c
	if (cr6.eq) goto loc_8324013C;
	// cmpwi cr6,r28,1792
	cr6.compare<int32_t>(ctx.r28.s32, 1792, xer);
	// bne cr6,0x83240508
	if (!cr6.eq) goto loc_83240508;
	// li r7,2
	ctx.r7.s64 = 2;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8323f0a0
	ctx.lr = 0x8324012C;
	sub_8323F0A0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_8324013C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83220448
	ctx.lr = 0x83240144;
	sub_83220448(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// beq cr6,0x8324015c
	if (cr6.eq) goto loc_8324015C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8324015C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmpw cr6,r31,r22
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r22.s32, xer);
	// rlwinm r5,r10,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bge cr6,0x83241064
	if (!cr6.lt) goto loc_83241064;
	// subf r11,r31,r22
	ctx.r11.s64 = ctx.r22.s64 - ctx.r31.s64;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// blt cr6,0x83240228
	if (cr6.lt) goto loc_83240228;
	// clrlwi r9,r5,24
	ctx.r9.u64 = ctx.r5.u32 & 0xFF;
	// addi r6,r22,-3
	ctx.r6.s64 = ctx.r22.s64 + -3;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
loc_8324018C:
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stfs f1,44(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 44, temp.u32);
	// beq cr6,0x832401ac
	if (cr6.eq) goto loc_832401AC;
	// lbz r8,7(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7);
	// ori r4,r8,64
	ctx.r4.u64 = ctx.r8.u64 | 64;
	// stb r4,7(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7, ctx.r4.u8);
loc_832401AC:
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stfs f1,44(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 44, temp.u32);
	// beq cr6,0x832401d0
	if (cr6.eq) goto loc_832401D0;
	// lbz r8,7(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7);
	// ori r4,r8,64
	ctx.r4.u64 = ctx.r8.u64 | 64;
	// stb r4,7(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7, ctx.r4.u8);
loc_832401D0:
	// lwz r8,36(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r8,-4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	// stfs f1,44(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r8.u32 + 44, temp.u32);
	// beq cr6,0x832401f8
	if (cr6.eq) goto loc_832401F8;
	// lbz r4,7(r8)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r8.u32 + 7);
	// ori r3,r4,64
	ctx.r3.u64 = ctx.r4.u64 | 64;
	// stb r3,7(r8)
	PPC_STORE_U8(ctx.r8.u32 + 7, ctx.r3.u8);
loc_832401F8:
	// lwz r8,36(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// lwzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// stfs f1,44(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 44, temp.u32);
	// beq cr6,0x83240218
	if (cr6.eq) goto loc_83240218;
	// lbz r8,7(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7);
	// ori r4,r8,64
	ctx.r4.u64 = ctx.r8.u64 | 64;
	// stb r4,7(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7, ctx.r4.u8);
loc_83240218:
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpw cr6,r7,r6
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, xer);
	// blt cr6,0x8324018c
	if (cr6.lt) goto loc_8324018C;
loc_83240228:
	// cmpw cr6,r7,r22
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r22.s32, xer);
	// bge cr6,0x83241064
	if (!cr6.lt) goto loc_83241064;
	// subf r11,r7,r22
	ctx.r11.s64 = ctx.r22.s64 - ctx.r7.s64;
	// clrlwi r9,r5,24
	ctx.r9.u64 = ctx.r5.u32 & 0xFF;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_83240240:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stfs f1,44(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// beq cr6,0x83240260
	if (cr6.eq) goto loc_83240260;
	// lbz r8,7(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// ori r7,r8,64
	ctx.r7.u64 = ctx.r8.u64 | 64;
	// stb r7,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r7.u8);
loc_83240260:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x83240240
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83240240;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_83240278:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83220448
	ctx.lr = 0x83240280;
	sub_83220448(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// beq cr6,0x83240298
	if (cr6.eq) goto loc_83240298;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83240298:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmpw cr6,r31,r22
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r22.s32, xer);
	// rlwinm r5,r10,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bge cr6,0x83241064
	if (!cr6.lt) goto loc_83241064;
	// subf r11,r31,r22
	ctx.r11.s64 = ctx.r22.s64 - ctx.r31.s64;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// blt cr6,0x83240364
	if (cr6.lt) goto loc_83240364;
	// clrlwi r9,r5,24
	ctx.r9.u64 = ctx.r5.u32 & 0xFF;
	// addi r6,r22,-3
	ctx.r6.s64 = ctx.r22.s64 + -3;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
loc_832402C8:
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stfs f1,40(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 40, temp.u32);
	// beq cr6,0x832402e8
	if (cr6.eq) goto loc_832402E8;
	// lbz r8,7(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7);
	// ori r4,r8,32
	ctx.r4.u64 = ctx.r8.u64 | 32;
	// stb r4,7(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7, ctx.r4.u8);
loc_832402E8:
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stfs f1,40(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 40, temp.u32);
	// beq cr6,0x8324030c
	if (cr6.eq) goto loc_8324030C;
	// lbz r8,7(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7);
	// ori r4,r8,32
	ctx.r4.u64 = ctx.r8.u64 | 32;
	// stb r4,7(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7, ctx.r4.u8);
loc_8324030C:
	// lwz r8,36(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r8,-4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	// stfs f1,40(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r8.u32 + 40, temp.u32);
	// beq cr6,0x83240334
	if (cr6.eq) goto loc_83240334;
	// lbz r4,7(r8)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r8.u32 + 7);
	// ori r3,r4,32
	ctx.r3.u64 = ctx.r4.u64 | 32;
	// stb r3,7(r8)
	PPC_STORE_U8(ctx.r8.u32 + 7, ctx.r3.u8);
loc_83240334:
	// lwz r8,36(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// lwzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// stfs f1,40(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 40, temp.u32);
	// beq cr6,0x83240354
	if (cr6.eq) goto loc_83240354;
	// lbz r8,7(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7);
	// ori r4,r8,32
	ctx.r4.u64 = ctx.r8.u64 | 32;
	// stb r4,7(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7, ctx.r4.u8);
loc_83240354:
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpw cr6,r7,r6
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, xer);
	// blt cr6,0x832402c8
	if (cr6.lt) goto loc_832402C8;
loc_83240364:
	// cmpw cr6,r7,r22
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r22.s32, xer);
	// bge cr6,0x83241064
	if (!cr6.lt) goto loc_83241064;
	// subf r11,r7,r22
	ctx.r11.s64 = ctx.r22.s64 - ctx.r7.s64;
	// clrlwi r9,r5,24
	ctx.r9.u64 = ctx.r5.u32 & 0xFF;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_8324037C:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stfs f1,40(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// beq cr6,0x8324039c
	if (cr6.eq) goto loc_8324039C;
	// lbz r8,7(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// ori r7,r8,32
	ctx.r7.u64 = ctx.r8.u64 | 32;
	// stb r7,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r7.u8);
loc_8324039C:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8324037c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8324037C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_832403B4:
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8323f0a0
	ctx.lr = 0x832403CC;
	sub_8323F0A0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_832403DC:
	// cmpwi cr6,r28,1794
	cr6.compare<int32_t>(ctx.r28.s32, 1794, xer);
	// beq cr6,0x83240414
	if (cr6.eq) goto loc_83240414;
	// cmpwi cr6,r28,1795
	cr6.compare<int32_t>(ctx.r28.s32, 1795, xer);
	// bne cr6,0x83240508
	if (!cr6.eq) goto loc_83240508;
	// li r7,3
	ctx.r7.s64 = 3;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8323f0a0
	ctx.lr = 0x83240404;
	sub_8323F0A0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_83240414:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8323f0a0
	ctx.lr = 0x8324042C;
	sub_8323F0A0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_8324043C:
	// li r7,2
	ctx.r7.s64 = 2;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8323f160
	ctx.lr = 0x83240454;
	sub_8323F160(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_83240464:
	// cmpwi cr6,r28,1799
	cr6.compare<int32_t>(ctx.r28.s32, 1799, xer);
	// bgt cr6,0x832404f8
	if (cr6.gt) goto loc_832404F8;
	// beq cr6,0x832404d0
	if (cr6.eq) goto loc_832404D0;
	// cmpwi cr6,r28,1797
	cr6.compare<int32_t>(ctx.r28.s32, 1797, xer);
	// beq cr6,0x832404a8
	if (cr6.eq) goto loc_832404A8;
	// cmpwi cr6,r28,1798
	cr6.compare<int32_t>(ctx.r28.s32, 1798, xer);
	// bne cr6,0x83240508
	if (!cr6.eq) goto loc_83240508;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8323f160
	ctx.lr = 0x83240498;
	sub_8323F160(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_832404A8:
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8323f160
	ctx.lr = 0x832404C0;
	sub_8323F160(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_832404D0:
	// li r7,3
	ctx.r7.s64 = 3;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8323f160
	ctx.lr = 0x832404E8;
	sub_8323F160(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_832404F8:
	// cmpwi cr6,r28,1843
	cr6.compare<int32_t>(ctx.r28.s32, 1843, xer);
	// beq cr6,0x83240614
	if (cr6.eq) goto loc_83240614;
	// cmpwi cr6,r28,1844
	cr6.compare<int32_t>(ctx.r28.s32, 1844, xer);
	// beq cr6,0x8324052c
	if (cr6.eq) goto loc_8324052C;
loc_83240508:
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// lhz r4,8(r25)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r25.u32 + 8);
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// li r3,154
	ctx.r3.s64 = 154;
	// bl 0x8320d4d8
	ctx.lr = 0x8324051C;
	sub_8320D4D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_8324052C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83220448
	ctx.lr = 0x83240534;
	sub_83220448(ctx, base);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// cmpw cr6,r31,r22
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r22.s32, xer);
	// bge cr6,0x83241064
	if (!cr6.lt) goto loc_83241064;
	// subf r11,r31,r22
	ctx.r11.s64 = ctx.r22.s64 - ctx.r31.s64;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// blt cr6,0x832405d0
	if (cr6.lt) goto loc_832405D0;
	// addi r7,r22,-3
	ctx.r7.s64 = ctx.r22.s64 + -3;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
loc_83240554:
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r9,r7
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, xer);
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stfs f1,28(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// lbz r6,6(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// ori r5,r6,4
	ctx.r5.u64 = ctx.r6.u64 | 4;
	// stb r5,6(r10)
	PPC_STORE_U8(ctx.r10.u32 + 6, ctx.r5.u8);
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stfs f1,28(r10)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// lbz r3,6(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// ori r6,r3,4
	ctx.r6.u64 = ctx.r3.u64 | 4;
	// stb r6,6(r10)
	PPC_STORE_U8(ctx.r10.u32 + 6, ctx.r6.u8);
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// add r5,r8,r10
	ctx.r5.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r10,-4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + -4);
	// stfs f1,28(r10)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// lbz r4,6(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// ori r3,r4,4
	ctx.r3.u64 = ctx.r4.u64 | 4;
	// stb r3,6(r10)
	PPC_STORE_U8(ctx.r10.u32 + 6, ctx.r3.u8);
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwzx r10,r8,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// stfs f1,28(r10)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// lbz r8,6(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// ori r6,r8,4
	ctx.r6.u64 = ctx.r8.u64 | 4;
	// stb r6,6(r10)
	PPC_STORE_U8(ctx.r10.u32 + 6, ctx.r6.u8);
	// blt cr6,0x83240554
	if (cr6.lt) goto loc_83240554;
loc_832405D0:
	// cmpw cr6,r9,r22
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r22.s32, xer);
	// bge cr6,0x83241064
	if (!cr6.lt) goto loc_83241064;
	// subf r11,r9,r22
	ctx.r11.s64 = ctx.r22.s64 - ctx.r9.s64;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_832405E4:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lbz r9,6(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// stfs f1,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// ori r8,r9,4
	ctx.r8.u64 = ctx.r9.u64 | 4;
	// stb r8,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r8.u8);
	// bdnz 0x832405e4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832405E4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-120(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_83240614:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83222578
	ctx.lr = 0x8324061C;
	sub_83222578(ctx, base);
	// cmpw cr6,r31,r22
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r22.s32, xer);
	// bge cr6,0x83241064
	if (!cr6.lt) goto loc_83241064;
	// subf r10,r31,r22
	ctx.r10.s64 = ctx.r22.s64 - ctx.r31.s64;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83240630:
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lbz r8,6(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 6);
	// stw r3,132(r9)
	PPC_STORE_U32(ctx.r9.u32 + 132, ctx.r3.u32);
	// ori r7,r8,2
	ctx.r7.u64 = ctx.r8.u64 | 2;
	// stb r7,6(r9)
	PPC_STORE_U8(ctx.r9.u32 + 6, ctx.r7.u8);
	// bdnz 0x83240630
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83240630;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_83240660:
	// subf r27,r31,r22
	ctx.r27.s64 = ctx.r22.s64 - ctx.r31.s64;
	// li r19,0
	ctx.r19.s64 = 0;
	// cmpw cr6,r27,r26
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r26.s32, xer);
	// ble cr6,0x83240678
	if (!cr6.gt) goto loc_83240678;
loc_83240670:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83240720
	goto loc_83240720;
loc_83240678:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// ble cr6,0x8324071c
	if (!cr6.gt) goto loc_8324071C;
	// li r8,12288
	ctx.r8.s64 = 12288;
loc_83240688:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// bne cr6,0x83240698
	if (!cr6.eq) goto loc_83240698;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x832406c4
	goto loc_832406C4;
loc_83240698:
	// srawi r11,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 3;
	// lwz r9,32(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 32);
	// addze r7,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r7.s64 = temp.s64;
	// srawi r6,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 3;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r4,r6
	temp.s64 = ctx.r6.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r4.s64 = temp.s64;
	// rlwinm r3,r4,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r3,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r3.s64;
	// lwzx r9,r5,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_832406C4:
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x83240670
	if (cr6.eq) goto loc_83240670;
	// lhz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// srw r6,r8,r9
	ctx.r6.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r9.u8 & 0x3F));
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// clrlwi r4,r6,24
	ctx.r4.u64 = ctx.r6.u32 & 0xFF;
	// addi r3,r11,-163
	ctx.r3.s64 = ctx.r11.s64 + -163;
	// cntlzw r11,r5
	ctx.r11.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// srawi r9,r3,31
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 31;
	// rlwinm r7,r11,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// clrlwi r6,r9,24
	ctx.r6.u64 = ctx.r9.u32 & 0xFF;
	// and r5,r6,r4
	ctx.r5.u64 = ctx.r6.u64 & ctx.r4.u64;
	// and r4,r5,r7
	ctx.r4.u64 = ctx.r5.u64 & ctx.r7.u64;
	// clrlwi r3,r4,31
	ctx.r3.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83240670
	if (!cr6.eq) goto loc_83240670;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r10,r27
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r27.s32, xer);
	// blt cr6,0x83240688
	if (cr6.lt) goto loc_83240688;
loc_8324071C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_83240720:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8324074c
	if (!cr6.eq) goto loc_8324074C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83273b48
	ctx.lr = 0x83240734;
	sub_83273B48(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// bl 0x8323efb0
	ctx.lr = 0x83240748;
	sub_8323EFB0(ctx, base);
	// mr r24,r19
	ctx.r24.u64 = ctx.r19.u64;
loc_8324074C:
	// cmpwi cr6,r28,1496
	cr6.compare<int32_t>(ctx.r28.s32, 1496, xer);
	// bgt cr6,0x83240da0
	if (cr6.gt) goto loc_83240DA0;
	// beq cr6,0x83240d24
	if (cr6.eq) goto loc_83240D24;
	// cmpwi cr6,r28,1472
	cr6.compare<int32_t>(ctx.r28.s32, 1472, xer);
	// bgt cr6,0x83240a68
	if (cr6.gt) goto loc_83240A68;
	// beq cr6,0x832409ec
	if (cr6.eq) goto loc_832409EC;
	// cmpwi cr6,r28,472
	cr6.compare<int32_t>(ctx.r28.s32, 472, xer);
	// bgt cr6,0x83240870
	if (cr6.gt) goto loc_83240870;
	// beq cr6,0x832407f8
	if (cr6.eq) goto loc_832407F8;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// beq cr6,0x83241054
	if (cr6.eq) goto loc_83241054;
	// cmpwi cr6,r28,471
	cr6.compare<int32_t>(ctx.r28.s32, 471, xer);
	// bne cr6,0x83240f48
	if (!cr6.eq) goto loc_83240F48;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpw cr6,r31,r22
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r22.s32, xer);
	// bge cr6,0x83241054
	if (!cr6.lt) goto loc_83241054;
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_83240794:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// lwzx r27,r11,r31
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bne cr6,0x832407ac
	if (!cr6.eq) goto loc_832407AC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832407d8
	goto loc_832407D8;
loc_832407AC:
	// srawi r11,r29,3
	xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 3;
	// lwz r10,32(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 32);
	// addze r9,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r8,r29,3
	xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r29.s32 >> 3;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r6,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r6.s64 = temp.s64;
	// rlwinm r5,r6,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r4,r5,r29
	ctx.r4.s64 = ctx.r29.s64 - ctx.r5.s64;
	// lwzx r10,r7,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_832407D8:
	// bl 0x83220448
	ctx.lr = 0x832407DC;
	sub_83220448(ctx, base);
	// fmuls f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// stfs f0,16(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 16, temp.u32);
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// bne 0x83240794
	if (!cr0.eq) goto loc_83240794;
	// b 0x83241054
	goto loc_83241054;
loc_832407F8:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpw cr6,r31,r22
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r22.s32, xer);
	// bge cr6,0x83241054
	if (!cr6.lt) goto loc_83241054;
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_8324080C:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// lwzx r27,r11,r31
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bne cr6,0x83240824
	if (!cr6.eq) goto loc_83240824;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83240850
	goto loc_83240850;
loc_83240824:
	// srawi r11,r29,3
	xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 3;
	// lwz r10,32(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 32);
	// addze r9,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r8,r29,3
	xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r29.s32 >> 3;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r6,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r6.s64 = temp.s64;
	// rlwinm r5,r6,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r4,r5,r29
	ctx.r4.s64 = ctx.r29.s64 - ctx.r5.s64;
	// lwzx r10,r7,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_83240850:
	// bl 0x83220448
	ctx.lr = 0x83240854;
	sub_83220448(ctx, base);
	// fmuls f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// stfs f0,20(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 20, temp.u32);
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// bne 0x8324080c
	if (!cr0.eq) goto loc_8324080C;
	// b 0x83241054
	goto loc_83241054;
loc_83240870:
	// cmpwi cr6,r28,473
	cr6.compare<int32_t>(ctx.r28.s32, 473, xer);
	// beq cr6,0x83240974
	if (cr6.eq) goto loc_83240974;
	// cmpwi cr6,r28,510
	cr6.compare<int32_t>(ctx.r28.s32, 510, xer);
	// bne cr6,0x83240f48
	if (!cr6.eq) goto loc_83240F48;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpw cr6,r31,r22
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r22.s32, xer);
	// bge cr6,0x83241054
	if (!cr6.lt) goto loc_83241054;
	// rlwinm r26,r31,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
loc_83240890:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// lwzx r29,r11,r26
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// bne cr6,0x832408a8
	if (!cr6.eq) goto loc_832408A8;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x832408d4
	goto loc_832408D4;
loc_832408A8:
	// srawi r11,r28,3
	xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 3;
	// lwz r10,32(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 32);
	// addze r9,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r8,r28,3
	xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r28.s32 >> 3;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r6,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r6.s64 = temp.s64;
	// rlwinm r5,r6,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r4,r5,r28
	ctx.r4.s64 = ctx.r28.s64 - ctx.r5.s64;
	// lwzx r10,r7,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_832408D4:
	// li r4,52
	ctx.r4.s64 = 52;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83221378
	ctx.lr = 0x832408E0;
	sub_83221378(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83240904
	if (!cr6.eq) goto loc_83240904;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,52
	ctx.r6.s64 = 52;
	// li r5,510
	ctx.r5.s64 = 510;
	// li r4,155
	ctx.r4.s64 = 155;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8320d628
	ctx.lr = 0x83240900;
	sub_8320D628(ctx, base);
	// b 0x83240960
	goto loc_83240960;
loc_83240904:
	// bl 0x83267228
	ctx.lr = 0x83240908;
	sub_83267228(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r29,56
	ctx.r10.s64 = ctx.r29.s64 + 56;
	// addi r11,r3,-8
	ctx.r11.s64 = ctx.r3.s64 + -8;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83240918:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x83240918
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83240918;
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83240954
	if (cr6.eq) goto loc_83240954;
	// lfs f0,112(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,116(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f31,f0
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// lfs f11,120(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f31,f13
	ctx.f10.f64 = double(float(ctx.f31.f64 * ctx.f13.f64));
	// fmuls f9,f31,f11
	ctx.f9.f64 = double(float(ctx.f31.f64 * ctx.f11.f64));
	// stfs f12,112(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 112, temp.u32);
	// stfs f10,116(r29)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r29.u32 + 116, temp.u32);
	// stfs f9,120(r29)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r29.u32 + 120, temp.u32);
loc_83240954:
	// lbz r11,6(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 6);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stb r10,6(r29)
	PPC_STORE_U8(ctx.r29.u32 + 6, ctx.r10.u8);
loc_83240960:
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// bne 0x83240890
	if (!cr0.eq) goto loc_83240890;
	// b 0x83241054
	goto loc_83241054;
loc_83240974:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpw cr6,r31,r22
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r22.s32, xer);
	// bge cr6,0x83241054
	if (!cr6.lt) goto loc_83241054;
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_83240988:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// lwzx r27,r11,r31
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bne cr6,0x832409a0
	if (!cr6.eq) goto loc_832409A0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832409cc
	goto loc_832409CC;
loc_832409A0:
	// srawi r11,r29,3
	xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 3;
	// lwz r10,32(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 32);
	// addze r9,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r8,r29,3
	xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r29.s32 >> 3;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r6,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r6.s64 = temp.s64;
	// rlwinm r5,r6,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r4,r5,r29
	ctx.r4.s64 = ctx.r29.s64 - ctx.r5.s64;
	// lwzx r10,r7,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_832409CC:
	// bl 0x83220448
	ctx.lr = 0x832409D0;
	sub_83220448(ctx, base);
	// fmuls f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// stfs f0,24(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 24, temp.u32);
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// bne 0x83240988
	if (!cr0.eq) goto loc_83240988;
	// b 0x83241054
	goto loc_83241054;
loc_832409EC:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpw cr6,r31,r22
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r22.s32, xer);
	// bge cr6,0x83241054
	if (!cr6.lt) goto loc_83241054;
	// rlwinm r28,r31,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
loc_832409FC:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// lwzx r31,r11,r28
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// bne cr6,0x83240a14
	if (!cr6.eq) goto loc_83240A14;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83240a40
	goto loc_83240A40;
loc_83240A14:
	// srawi r11,r29,3
	xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 3;
	// lwz r10,32(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 32);
	// addze r9,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r8,r29,3
	xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r29.s32 >> 3;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r6,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r6.s64 = temp.s64;
	// rlwinm r5,r6,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r4,r5,r29
	ctx.r4.s64 = ctx.r29.s64 - ctx.r5.s64;
	// lwzx r11,r7,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_83240A40:
	// bl 0x83220448
	ctx.lr = 0x83240A44;
	sub_83220448(ctx, base);
	// lbz r11,7(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7);
	// stfs f1,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// ori r10,r11,8
	ctx.r10.u64 = ctx.r11.u64 | 8;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// stb r10,7(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7, ctx.r10.u8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// bne 0x832409fc
	if (!cr0.eq) goto loc_832409FC;
	// b 0x83241054
	goto loc_83241054;
loc_83240A68:
	// cmpwi cr6,r28,1492
	cr6.compare<int32_t>(ctx.r28.s32, 1492, xer);
	// bgt cr6,0x83240c10
	if (cr6.gt) goto loc_83240C10;
	// beq cr6,0x83240b88
	if (cr6.eq) goto loc_83240B88;
	// cmpwi cr6,r28,1473
	cr6.compare<int32_t>(ctx.r28.s32, 1473, xer);
	// beq cr6,0x83240b0c
	if (cr6.eq) goto loc_83240B0C;
	// cmpwi cr6,r28,1491
	cr6.compare<int32_t>(ctx.r28.s32, 1491, xer);
	// bne cr6,0x83240f48
	if (!cr6.eq) goto loc_83240F48;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpw cr6,r31,r22
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r22.s32, xer);
	// bge cr6,0x83241054
	if (!cr6.lt) goto loc_83241054;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// rlwinm r28,r31,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f31,4332(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4332);
	ctx.f31.f64 = double(temp.f32);
loc_83240A9C:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// lwzx r31,r11,r28
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// bne cr6,0x83240ab4
	if (!cr6.eq) goto loc_83240AB4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83240ae0
	goto loc_83240AE0;
loc_83240AB4:
	// srawi r11,r29,3
	xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 3;
	// lwz r10,32(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 32);
	// addze r9,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r8,r29,3
	xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r29.s32 >> 3;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r6,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r6.s64 = temp.s64;
	// rlwinm r5,r6,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r4,r5,r29
	ctx.r4.s64 = ctx.r29.s64 - ctx.r5.s64;
	// lwzx r11,r7,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_83240AE0:
	// bl 0x83220448
	ctx.lr = 0x83240AE4;
	sub_83220448(ctx, base);
	// lbz r11,7(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7);
	// fmuls f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// stb r10,7(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7, ctx.r10.u8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// bne 0x83240a9c
	if (!cr0.eq) goto loc_83240A9C;
	// b 0x83241054
	goto loc_83241054;
loc_83240B0C:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpw cr6,r31,r22
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r22.s32, xer);
	// bge cr6,0x83241054
	if (!cr6.lt) goto loc_83241054;
	// rlwinm r28,r31,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
loc_83240B1C:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// lwzx r31,r11,r28
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// bne cr6,0x83240b34
	if (!cr6.eq) goto loc_83240B34;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83240b60
	goto loc_83240B60;
loc_83240B34:
	// srawi r11,r29,3
	xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 3;
	// lwz r10,32(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 32);
	// addze r9,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r8,r29,3
	xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r29.s32 >> 3;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r6,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r6.s64 = temp.s64;
	// rlwinm r5,r6,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r4,r5,r29
	ctx.r4.s64 = ctx.r29.s64 - ctx.r5.s64;
	// lwzx r11,r7,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_83240B60:
	// bl 0x83220448
	ctx.lr = 0x83240B64;
	sub_83220448(ctx, base);
	// lbz r11,7(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7);
	// stfs f1,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// ori r10,r11,16
	ctx.r10.u64 = ctx.r11.u64 | 16;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// stb r10,7(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7, ctx.r10.u8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// bne 0x83240b1c
	if (!cr0.eq) goto loc_83240B1C;
	// b 0x83241054
	goto loc_83241054;
loc_83240B88:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpw cr6,r31,r22
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r22.s32, xer);
	// bge cr6,0x83241054
	if (!cr6.lt) goto loc_83241054;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// rlwinm r28,r31,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f31,4332(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4332);
	ctx.f31.f64 = double(temp.f32);
loc_83240BA0:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// lwzx r31,r11,r28
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// bne cr6,0x83240bb8
	if (!cr6.eq) goto loc_83240BB8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83240be4
	goto loc_83240BE4;
loc_83240BB8:
	// srawi r11,r29,3
	xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 3;
	// lwz r10,32(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 32);
	// addze r9,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r8,r29,3
	xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r29.s32 >> 3;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r6,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r6.s64 = temp.s64;
	// rlwinm r5,r6,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r4,r5,r29
	ctx.r4.s64 = ctx.r29.s64 - ctx.r5.s64;
	// lwzx r11,r7,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_83240BE4:
	// bl 0x83220448
	ctx.lr = 0x83240BE8;
	sub_83220448(ctx, base);
	// lbz r11,7(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7);
	// fmuls f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// stb r10,7(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7, ctx.r10.u8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// bne 0x83240ba0
	if (!cr0.eq) goto loc_83240BA0;
	// b 0x83241054
	goto loc_83241054;
loc_83240C10:
	// cmpwi cr6,r28,1493
	cr6.compare<int32_t>(ctx.r28.s32, 1493, xer);
	// beq cr6,0x83240c9c
	if (cr6.eq) goto loc_83240C9C;
	// cmpwi cr6,r28,1495
	cr6.compare<int32_t>(ctx.r28.s32, 1495, xer);
	// bne cr6,0x83240f48
	if (!cr6.eq) goto loc_83240F48;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpw cr6,r31,r22
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r22.s32, xer);
	// bge cr6,0x83241054
	if (!cr6.lt) goto loc_83241054;
	// rlwinm r28,r31,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
loc_83240C30:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// lwzx r31,r11,r28
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// bne cr6,0x83240c48
	if (!cr6.eq) goto loc_83240C48;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83240c74
	goto loc_83240C74;
loc_83240C48:
	// srawi r11,r29,3
	xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 3;
	// lwz r10,32(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 32);
	// addze r9,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r8,r29,3
	xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r29.s32 >> 3;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r6,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r6.s64 = temp.s64;
	// rlwinm r5,r6,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r4,r5,r29
	ctx.r4.s64 = ctx.r29.s64 - ctx.r5.s64;
	// lwzx r11,r7,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_83240C74:
	// bl 0x83220448
	ctx.lr = 0x83240C78;
	sub_83220448(ctx, base);
	// lbz r11,7(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7);
	// stfs f1,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// ori r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 | 32;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// stb r10,7(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7, ctx.r10.u8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// bne 0x83240c30
	if (!cr0.eq) goto loc_83240C30;
	// b 0x83241054
	goto loc_83241054;
loc_83240C9C:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpw cr6,r31,r22
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r22.s32, xer);
	// bge cr6,0x83241054
	if (!cr6.lt) goto loc_83241054;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// rlwinm r28,r31,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f31,4332(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4332);
	ctx.f31.f64 = double(temp.f32);
loc_83240CB4:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// lwzx r31,r11,r28
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// bne cr6,0x83240ccc
	if (!cr6.eq) goto loc_83240CCC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83240cf8
	goto loc_83240CF8;
loc_83240CCC:
	// srawi r11,r29,3
	xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 3;
	// lwz r10,32(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 32);
	// addze r9,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r8,r29,3
	xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r29.s32 >> 3;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r6,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r6.s64 = temp.s64;
	// rlwinm r5,r6,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r4,r5,r29
	ctx.r4.s64 = ctx.r29.s64 - ctx.r5.s64;
	// lwzx r11,r7,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_83240CF8:
	// bl 0x83220448
	ctx.lr = 0x83240CFC;
	sub_83220448(ctx, base);
	// lbz r11,7(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7);
	// fmuls f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// ori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 4;
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// stb r10,7(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7, ctx.r10.u8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// bne 0x83240cb4
	if (!cr0.eq) goto loc_83240CB4;
	// b 0x83241054
	goto loc_83241054;
loc_83240D24:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpw cr6,r31,r22
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r22.s32, xer);
	// bge cr6,0x83241054
	if (!cr6.lt) goto loc_83241054;
	// rlwinm r28,r31,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
loc_83240D34:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// lwzx r31,r11,r28
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// bne cr6,0x83240d4c
	if (!cr6.eq) goto loc_83240D4C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83240d78
	goto loc_83240D78;
loc_83240D4C:
	// srawi r11,r29,3
	xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 3;
	// lwz r10,32(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 32);
	// addze r9,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r8,r29,3
	xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r29.s32 >> 3;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r6,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r6.s64 = temp.s64;
	// rlwinm r5,r6,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r4,r5,r29
	ctx.r4.s64 = ctx.r29.s64 - ctx.r5.s64;
	// lwzx r11,r7,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_83240D78:
	// bl 0x83220448
	ctx.lr = 0x83240D7C;
	sub_83220448(ctx, base);
	// lbz r11,7(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7);
	// stfs f1,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// ori r10,r11,64
	ctx.r10.u64 = ctx.r11.u64 | 64;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// stb r10,7(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7, ctx.r10.u8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// bne 0x83240d34
	if (!cr0.eq) goto loc_83240D34;
	// b 0x83241054
	goto loc_83241054;
loc_83240DA0:
	// cmpwi cr6,r28,1843
	cr6.compare<int32_t>(ctx.r28.s32, 1843, xer);
	// bgt cr6,0x83240f38
	if (cr6.gt) goto loc_83240F38;
	// beq cr6,0x83240ebc
	if (cr6.eq) goto loc_83240EBC;
	// addi r11,r28,-1792
	ctx.r11.s64 = ctx.r28.s64 + -1792;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bgt cr6,0x83240f48
	if (cr6.gt) goto loc_83240F48;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83240e14
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83240E14;
	// bdzf 4*cr6+eq,0x83240e4c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83240E4C;
	// bdzf 4*cr6+eq,0x83240e84
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83240E84;
	// bdzf 4*cr6+eq,0x83240df8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83240DF8;
	// bdzf 4*cr6+eq,0x83240e30
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83240E30;
	// bdzf 4*cr6+eq,0x83240e68
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83240E68;
	// bne cr6,0x83240ea0
	if (!cr6.eq) goto loc_83240EA0;
	// li r7,2
	ctx.r7.s64 = 2;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8323f208
	ctx.lr = 0x83240DF4;
	sub_8323F208(ctx, base);
	// b 0x83241054
	goto loc_83241054;
loc_83240DF8:
	// li r7,2
	ctx.r7.s64 = 2;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8323f308
	ctx.lr = 0x83240E10;
	sub_8323F308(ctx, base);
	// b 0x83241054
	goto loc_83241054;
loc_83240E14:
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8323f208
	ctx.lr = 0x83240E2C;
	sub_8323F208(ctx, base);
	// b 0x83241054
	goto loc_83241054;
loc_83240E30:
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8323f308
	ctx.lr = 0x83240E48;
	sub_8323F308(ctx, base);
	// b 0x83241054
	goto loc_83241054;
loc_83240E4C:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8323f208
	ctx.lr = 0x83240E64;
	sub_8323F208(ctx, base);
	// b 0x83241054
	goto loc_83241054;
loc_83240E68:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8323f308
	ctx.lr = 0x83240E80;
	sub_8323F308(ctx, base);
	// b 0x83241054
	goto loc_83241054;
loc_83240E84:
	// li r7,3
	ctx.r7.s64 = 3;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8323f208
	ctx.lr = 0x83240E9C;
	sub_8323F208(ctx, base);
	// b 0x83241054
	goto loc_83241054;
loc_83240EA0:
	// li r7,3
	ctx.r7.s64 = 3;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8323f308
	ctx.lr = 0x83240EB8;
	sub_8323F308(ctx, base);
	// b 0x83241054
	goto loc_83241054;
loc_83240EBC:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpw cr6,r31,r22
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r22.s32, xer);
	// bge cr6,0x83241054
	if (!cr6.lt) goto loc_83241054;
	// rlwinm r28,r31,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
loc_83240ECC:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// lwzx r31,r11,r28
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// bne cr6,0x83240ee4
	if (!cr6.eq) goto loc_83240EE4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83240f10
	goto loc_83240F10;
loc_83240EE4:
	// srawi r11,r29,3
	xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 3;
	// lwz r10,32(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 32);
	// addze r9,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r8,r29,3
	xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r29.s32 >> 3;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r6,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r6.s64 = temp.s64;
	// rlwinm r5,r6,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r4,r5,r29
	ctx.r4.s64 = ctx.r29.s64 - ctx.r5.s64;
	// lwzx r11,r7,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_83240F10:
	// bl 0x83222578
	ctx.lr = 0x83240F14;
	sub_83222578(ctx, base);
	// lbz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// stb r10,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r10.u8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// bne 0x83240ecc
	if (!cr0.eq) goto loc_83240ECC;
	// b 0x83241054
	goto loc_83241054;
loc_83240F38:
	// cmpwi cr6,r28,1844
	cr6.compare<int32_t>(ctx.r28.s32, 1844, xer);
	// beq cr6,0x83240fdc
	if (cr6.eq) goto loc_83240FDC;
	// cmpwi cr6,r28,1845
	cr6.compare<int32_t>(ctx.r28.s32, 1845, xer);
	// beq cr6,0x83240f60
	if (cr6.eq) goto loc_83240F60;
loc_83240F48:
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// lhz r4,8(r25)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r25.u32 + 8);
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// li r3,154
	ctx.r3.s64 = 154;
	// bl 0x8320d4d8
	ctx.lr = 0x83240F5C;
	sub_8320D4D8(ctx, base);
	// b 0x83241054
	goto loc_83241054;
loc_83240F60:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpw cr6,r31,r22
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r22.s32, xer);
	// bge cr6,0x83241054
	if (!cr6.lt) goto loc_83241054;
	// rlwinm r28,r31,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
loc_83240F70:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// lwzx r31,r11,r28
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// bne cr6,0x83240f88
	if (!cr6.eq) goto loc_83240F88;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83240fb4
	goto loc_83240FB4;
loc_83240F88:
	// srawi r11,r29,3
	xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 3;
	// lwz r10,32(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 32);
	// addze r9,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r8,r29,3
	xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r29.s32 >> 3;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r6,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r6.s64 = temp.s64;
	// rlwinm r5,r6,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r4,r5,r29
	ctx.r4.s64 = ctx.r29.s64 - ctx.r5.s64;
	// lwzx r11,r7,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_83240FB4:
	// bl 0x83220448
	ctx.lr = 0x83240FB8;
	sub_83220448(ctx, base);
	// lbz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// stfs f1,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// ori r10,r11,8
	ctx.r10.u64 = ctx.r11.u64 | 8;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// stb r10,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r10.u8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// bne 0x83240f70
	if (!cr0.eq) goto loc_83240F70;
	// b 0x83241054
	goto loc_83241054;
loc_83240FDC:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpw cr6,r31,r22
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r22.s32, xer);
	// bge cr6,0x83241054
	if (!cr6.lt) goto loc_83241054;
	// rlwinm r28,r31,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
loc_83240FEC:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// lwzx r31,r11,r28
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// bne cr6,0x83241004
	if (!cr6.eq) goto loc_83241004;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83241030
	goto loc_83241030;
loc_83241004:
	// srawi r11,r29,3
	xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 3;
	// lwz r10,32(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 32);
	// addze r9,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r8,r29,3
	xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r29.s32 >> 3;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r6,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r6.s64 = temp.s64;
	// rlwinm r5,r6,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r4,r5,r29
	ctx.r4.s64 = ctx.r29.s64 - ctx.r5.s64;
	// lwzx r11,r7,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_83241030:
	// bl 0x83220448
	ctx.lr = 0x83241034;
	sub_83220448(ctx, base);
	// lbz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// stfs f1,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// ori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 4;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// stb r10,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r10.u8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// bne 0x83240fec
	if (!cr0.eq) goto loc_83240FEC;
loc_83241054:
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(ctx.r19.u32, 0, xer);
	// beq cr6,0x83241064
	if (cr6.eq) goto loc_83241064;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x832356e0
	ctx.lr = 0x83241064;
	sub_832356E0(ctx, base);
loc_83241064:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83241074"))) PPC_WEAK_FUNC(sub_83241074);
PPC_FUNC_IMPL(__imp__sub_83241074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83241078"))) PPC_WEAK_FUNC(sub_83241078);
PPC_FUNC_IMPL(__imp__sub_83241078) {
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
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// blt cr6,0x832410a8
	if (cr6.lt) goto loc_832410A8;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// ble cr6,0x832410b8
	if (!cr6.gt) goto loc_832410B8;
loc_832410A8:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,12704
	ctx.r3.s64 = ctx.r11.s64 + 12704;
	// bl 0x8320d088
	ctx.lr = 0x832410B8;
	sub_8320D088(ctx, base);
loc_832410B8:
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// blt cr6,0x83241138
	if (cr6.lt) goto loc_83241138;
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
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x83222578
	ctx.lr = 0x832410E4;
	sub_83222578(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83241110
	if (cr6.eq) goto loc_83241110;
	// lhz r11,14(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r3,r10
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, xer);
	// bge cr6,0x83241110
	if (!cr6.lt) goto loc_83241110;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x8324111c
	if (!cr6.eq) goto loc_8324111C;
loc_83241110:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x83213150
	ctx.lr = 0x83241118;
	sub_83213150(ctx, base);
	// b 0x83241138
	goto loc_83241138;
loc_8324111C:
	// li r5,155
	ctx.r5.s64 = 155;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83266dd0
	ctx.lr = 0x8324112C;
	sub_83266DD0(ctx, base);
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
loc_83241138:
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

__attribute__((alias("__imp__sub_83241154"))) PPC_WEAK_FUNC(sub_83241154);
PPC_FUNC_IMPL(__imp__sub_83241154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83241158"))) PPC_WEAK_FUNC(sub_83241158);
PPC_FUNC_IMPL(__imp__sub_83241158) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83241160;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,12(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// ori r10,r11,8400
	ctx.r10.u64 = ctx.r11.u64 | 8400;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
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
	// beq cr6,0x83241198
	if (cr6.eq) goto loc_83241198;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83222030
	ctx.lr = 0x83241198;
	sub_83222030(ctx, base);
loc_83241198:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,12
	ctx.r10.s64 = 12;
	// sth r11,2(r30)
	PPC_STORE_U16(ctx.r30.u32 + 2, ctx.r11.u16);
	// sth r10,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r10.u16);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// beq cr6,0x832411c8
	if (cr6.eq) goto loc_832411C8;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,12704
	ctx.r3.s64 = ctx.r11.s64 + 12704;
	// bl 0x8320d088
	ctx.lr = 0x832411C8;
	sub_8320D088(ctx, base);
loc_832411C8:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// blt cr6,0x83241224
	if (cr6.lt) goto loc_83241224;
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
	ctx.lr = 0x832411F8;
	sub_83222578(ctx, base);
	// lhz r6,14(r29)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r29.u32 + 14);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// cmpw cr6,r3,r5
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r5.s32, xer);
	// bge cr6,0x83241230
	if (!cr6.lt) goto loc_83241230;
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83241224
	if (cr6.eq) goto loc_83241224;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8323e588
	ctx.lr = 0x83241224;
	sub_8323E588(ctx, base);
loc_83241224:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83241230:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lhz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,32380
	ctx.r5.s64 = ctx.r11.s64 + 32380;
	// li r3,154
	ctx.r3.s64 = 154;
	// bl 0x8320d548
	ctx.lr = 0x83241248;
	sub_8320D548(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83241254"))) PPC_WEAK_FUNC(sub_83241254);
PPC_FUNC_IMPL(__imp__sub_83241254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83241258"))) PPC_WEAK_FUNC(sub_83241258);
PPC_FUNC_IMPL(__imp__sub_83241258) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83241260;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x83241284
	if (cr6.eq) goto loc_83241284;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,12704
	ctx.r3.s64 = ctx.r11.s64 + 12704;
	// bl 0x8320d088
	ctx.lr = 0x83241284;
	sub_8320D088(ctx, base);
loc_83241284:
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// blt cr6,0x8324138c
	if (cr6.lt) goto loc_8324138C;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
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
	ctx.lr = 0x832412BC;
	sub_83222578(ctx, base);
	// lhz r6,14(r29)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r29.u32 + 14);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// cmpw cr6,r3,r5
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r5.s32, xer);
	// bge cr6,0x832412dc
	if (!cr6.lt) goto loc_832412DC;
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r26,r10,r11
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x832412f4
	goto loc_832412F4;
loc_832412DC:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lhz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,32380
	ctx.r5.s64 = ctx.r11.s64 + 32380;
	// li r3,154
	ctx.r3.s64 = 154;
	// bl 0x8320d548
	ctx.lr = 0x832412F4;
	sub_8320D548(ctx, base);
loc_832412F4:
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r27,r11,12724
	ctx.r27.s64 = ctx.r11.s64 + 12724;
	// lhz r29,2(r31)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// cmplwi cr6,r29,256
	cr6.compare<uint32_t>(ctx.r29.u32, 256, xer);
	// bge cr6,0x83241324
	if (!cr6.lt) goto loc_83241324;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lhz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r3,154
	ctx.r3.s64 = 154;
	// bl 0x8320d5b8
	ctx.lr = 0x83241324;
	sub_8320D5B8(ctx, base);
loc_83241324:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x8324138c
	if (cr6.eq) goto loc_8324138C;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x8324137c
	if (cr6.eq) goto loc_8324137C;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r29,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r29.u16);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// stb r25,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r25.u8);
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x8323e638
	ctx.lr = 0x83241360;
	sub_8323E638(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8324138c
	if (cr6.eq) goto loc_8324138C;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lhz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r3,154
	ctx.r3.s64 = 154;
	// bl 0x8320d548
	ctx.lr = 0x8324137C;
	sub_8320D548(ctx, base);
loc_8324137C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lfs f1,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x832248d8
	ctx.lr = 0x8324138C;
	sub_832248D8(ctx, base);
loc_8324138C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83241398"))) PPC_WEAK_FUNC(sub_83241398);
PPC_FUNC_IMPL(__imp__sub_83241398) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832413A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,2360
	cr6.compare<uint32_t>(ctx.r11.u32, 2360, xer);
	// bgt cr6,0x8324150c
	if (cr6.gt) goto loc_8324150C;
	// beq cr6,0x832414f4
	if (cr6.eq) goto loc_832414F4;
	// cmplwi cr6,r11,2358
	cr6.compare<uint32_t>(ctx.r11.u32, 2358, xer);
	// bgt cr6,0x832414d4
	if (cr6.gt) goto loc_832414D4;
	// beq cr6,0x8324141c
	if (cr6.eq) goto loc_8324141C;
	// cmplwi cr6,r11,1152
	cr6.compare<uint32_t>(ctx.r11.u32, 1152, xer);
	// beq cr6,0x83241400
	if (cr6.eq) goto loc_83241400;
	// cmplwi cr6,r11,1254
	cr6.compare<uint32_t>(ctx.r11.u32, 1254, xer);
	// bne cr6,0x83241524
	if (!cr6.eq) goto loc_83241524;
	// lwz r3,12(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// li r5,154
	ctx.r5.s64 = 154;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x83266dd0
	ctx.lr = 0x832413E8;
	sub_83266DD0(ctx, base);
	// lhz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 12);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,12(r28)
	PPC_STORE_U16(ctx.r28.u32 + 12, ctx.r11.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83241400:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r4,r11,-30024
	ctx.r4.s64 = ctx.r11.s64 + -30024;
	// bl 0x83223a60
	ctx.lr = 0x83241410;
	sub_83223A60(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8324141C:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// blt cr6,0x83241438
	if (cr6.lt) goto loc_83241438;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,12704
	ctx.r3.s64 = ctx.r11.s64 + 12704;
	// bl 0x8320d088
	ctx.lr = 0x83241438;
	sub_8320D088(ctx, base);
loc_83241438:
	// lwz r29,28(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// cmpwi cr6,r29,3
	cr6.compare<int32_t>(ctx.r29.s32, 3, xer);
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// bgt cr6,0x83241458
	if (cr6.gt) goto loc_83241458;
	// li r29,3
	ctx.r29.s64 = 3;
loc_83241458:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble cr6,0x8324149c
	if (!cr6.gt) goto loc_8324149C;
loc_83241464:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
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
	ctx.lr = 0x83241488;
	sub_83220140(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stbx r3,r31,r6
	PPC_STORE_U8(ctx.r31.u32 + ctx.r6.u32, ctx.r3.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r29
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, xer);
	// blt cr6,0x83241464
	if (cr6.lt) goto loc_83241464;
loc_8324149C:
	// lbz r11,82(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lwz r8,32(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// or r4,r9,r7
	ctx.r4.u64 = ctx.r9.u64 | ctx.r7.u64;
	// rlwinm r5,r8,0,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF8;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// or r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 | ctx.r5.u64;
	// or r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 | ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,32(r28)
	PPC_STORE_U32(ctx.r28.u32 + 32, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832414D4:
	// cmplwi cr6,r11,2359
	cr6.compare<uint32_t>(ctx.r11.u32, 2359, xer);
	// bne cr6,0x83241524
	if (!cr6.eq) goto loc_83241524;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8323f3e8
	ctx.lr = 0x832414E8;
	sub_8323F3E8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832414F4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83241078
	ctx.lr = 0x83241500;
	sub_83241078(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8324150C:
	// cmplwi cr6,r11,2361
	cr6.compare<uint32_t>(ctx.r11.u32, 2361, xer);
	// beq cr6,0x83241560
	if (cr6.eq) goto loc_83241560;
	// cmplwi cr6,r11,2362
	cr6.compare<uint32_t>(ctx.r11.u32, 2362, xer);
	// beq cr6,0x83241548
	if (cr6.eq) goto loc_83241548;
	// cmplwi cr6,r11,2364
	cr6.compare<uint32_t>(ctx.r11.u32, 2364, xer);
	// beq cr6,0x83241530
	if (cr6.eq) goto loc_83241530;
loc_83241524:
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83241530:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83241258
	ctx.lr = 0x8324153C;
	sub_83241258(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83241548:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83241158
	ctx.lr = 0x83241554;
	sub_83241158(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83241560:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x8324157c
	if (cr6.eq) goto loc_8324157C;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,12704
	ctx.r3.s64 = ctx.r11.s64 + 12704;
	// bl 0x8320d088
	ctx.lr = 0x8324157C;
	sub_8320D088(ctx, base);
loc_8324157C:
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// blt cr6,0x832415d8
	if (cr6.lt) goto loc_832415D8;
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
	// bl 0x83222578
	ctx.lr = 0x832415AC;
	sub_83222578(ctx, base);
	// lhz r6,14(r28)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r28.u32 + 14);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// cmpw cr6,r3,r5
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r5.s32, xer);
	// bge cr6,0x832415e4
	if (!cr6.lt) goto loc_832415E4;
	// lwz r11,36(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832415d8
	if (cr6.eq) goto loc_832415D8;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x8323e2a8
	ctx.lr = 0x832415D8;
	sub_8323E2A8(ctx, base);
loc_832415D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832415E4:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lhz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,32380
	ctx.r5.s64 = ctx.r11.s64 + 32380;
	// li r3,154
	ctx.r3.s64 = 154;
	// bl 0x8320d548
	ctx.lr = 0x832415FC;
	sub_8320D548(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83241608"))) PPC_WEAK_FUNC(sub_83241608);
PPC_FUNC_IMPL(__imp__sub_83241608) {
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
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83241640
	if (cr6.eq) goto loc_83241640;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// li r3,-6
	ctx.r3.s64 = -6;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// b 0x832416b4
	goto loc_832416B4;
loc_83241640:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83241658
	if (cr6.eq) goto loc_83241658;
	// bl 0x83209d68
	ctx.lr = 0x83241654;
	sub_83209D68(ctx, base);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
loc_83241658:
	// vspltisw128 v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x0)));
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,32
	ctx.r8.s64 = 32;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// li r7,2689
	ctx.r7.s64 = 2689;
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// stvx128 v63,r0,r31
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stb r10,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r10.u8);
	// stvx128 v63,r31,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// sth r7,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r7.u16);
	// stvx128 v63,r31,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// sth r11,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r11.u16);
	// sth r11,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r11.u16);
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
	// sth r11,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r11.u16);
	// sth r10,30(r31)
	PPC_STORE_U16(ctx.r31.u32 + 30, ctx.r10.u16);
loc_832416B4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832416CC"))) PPC_WEAK_FUNC(sub_832416CC);
PPC_FUNC_IMPL(__imp__sub_832416CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832416D0"))) PPC_WEAK_FUNC(sub_832416D0);
PPC_FUNC_IMPL(__imp__sub_832416D0) {
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
	// li r3,72
	ctx.r3.s64 = 72;
	// bl 0x83209aa8
	ctx.lr = 0x832416E4;
	sub_83209AA8(ctx, base);
	// vspltisw128 v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x0)));
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// li r6,2689
	ctx.r6.s64 = 2689;
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stvx128 v63,r3,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stvx128 v63,r3,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stb r9,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r9.u8);
	// sth r6,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r6.u16);
	// sth r10,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r10.u16);
	// sth r10,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r10.u16);
	// sth r10,12(r3)
	PPC_STORE_U16(ctx.r3.u32 + 12, ctx.r10.u16);
	// sth r10,14(r3)
	PPC_STORE_U16(ctx.r3.u32 + 14, ctx.r10.u16);
	// sth r9,30(r3)
	PPC_STORE_U16(ctx.r3.u32 + 30, ctx.r9.u16);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83241750"))) PPC_WEAK_FUNC(sub_83241750);
PPC_FUNC_IMPL(__imp__sub_83241750) {
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
	// bl 0x832416d0
	ctx.lr = 0x8324176C;
	sub_832416D0(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x8324178c
	if (!cr6.lt) goto loc_8324178C;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// ble cr6,0x8324178c
	if (!cr6.gt) goto loc_8324178C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320e738
	ctx.lr = 0x8324178C;
	sub_8320E738(ctx, base);
loc_8324178C:
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
	// beq cr6,0x832417b8
	if (cr6.eq) goto loc_832417B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x832417B8;
	sub_83222030(ctx, base);
loc_832417B8:
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// li r10,157
	ctx.r10.s64 = 157;
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// sth r10,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r10.u16);
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// sth r8,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r8.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832417F0"))) PPC_WEAK_FUNC(sub_832417F0);
PPC_FUNC_IMPL(__imp__sub_832417F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832417F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r4,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r4.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x832418b4
	if (cr6.eq) goto loc_832418B4;
	// lwz r28,36(r4)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// stw r31,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r31.u32);
	// ble cr6,0x832418b4
	if (!cr6.gt) goto loc_832418B4;
	// lwz r11,32(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// li r4,154
	ctx.r4.s64 = 154;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x83221378
	ctx.lr = 0x83241834;
	sub_83221378(ctx, base);
	// lhz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 28);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// sth r9,14(r30)
	PPC_STORE_U16(ctx.r30.u32 + 14, ctx.r9.u16);
	// sth r10,12(r30)
	PPC_STORE_U16(ctx.r30.u32 + 12, ctx.r10.u16);
	// ble cr6,0x832418b4
	if (!cr6.gt) goto loc_832418B4;
	// rlwinm r11,r31,31,1,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x7FFFFFFC;
loc_83241854:
	// lwz r9,32(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// rlwinm r10,r31,3,26,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0x38;
	// li r4,154
	ctx.r4.s64 = 154;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x83221378
	ctx.lr = 0x8324186C;
	sub_83221378(ctx, base);
	// lhz r11,14(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// lhz r8,30(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 30);
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// cmpw cr6,r6,r7
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, xer);
	// bge cr6,0x83241888
	if (!cr6.lt) goto loc_83241888;
	// sth r11,30(r3)
	PPC_STORE_U16(ctx.r3.u32 + 30, ctx.r11.u16);
loc_83241888:
	// lhz r11,30(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 30);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lhz r10,14(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 14);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, xer);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r31,31,1,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x7FFFFFFC;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sth r8,14(r30)
	PPC_STORE_U16(ctx.r30.u32 + 14, ctx.r8.u16);
	// blt cr6,0x83241854
	if (cr6.lt) goto loc_83241854;
loc_832418B4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832418BC"))) PPC_WEAK_FUNC(sub_832418BC);
PPC_FUNC_IMPL(__imp__sub_832418BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832418C0"))) PPC_WEAK_FUNC(sub_832418C0);
PPC_FUNC_IMPL(__imp__sub_832418C0) {
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
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x831ce778
	ctx.lr = 0x832418D8;
	__savefpr_28(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83241948
	if (cr6.eq) goto loc_83241948;
	// lwz r11,32(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83241910
	if (cr6.eq) goto loc_83241910;
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,20(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,24(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
loc_83241910:
	// lwz r11,32(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83241938
	if (cr6.eq) goto loc_83241938;
	// lfs f0,16(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 32, temp.u32);
	// lfs f13,20(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,36(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 36, temp.u32);
	// lfs f12,24(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,40(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 40, temp.u32);
loc_83241938:
	// lhz r11,14(r5)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 14);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r4,r10
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, xer);
	// blt cr6,0x83241950
	if (cr6.lt) goto loc_83241950;
loc_83241948:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x8324195c
	goto loc_8324195C;
loc_83241950:
	// lwz r11,36(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_8324195C:
	// lbz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83241988
	if (cr6.eq) goto loc_83241988;
	// addi r4,r31,64
	ctx.r4.s64 = ctx.r31.s64 + 64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83241988
	if (cr6.eq) goto loc_83241988;
	// lwz r3,60(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// bl 0x832137f0
	ctx.lr = 0x83241980;
	sub_832137F0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83241be0
	goto loc_83241BE0;
loc_83241988:
	// lwz r11,32(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83241bdc
	if (cr6.eq) goto loc_83241BDC;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83210190
	ctx.lr = 0x832419A0;
	sub_83210190(ctx, base);
	// lbz r11,7(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x832419fc
	if (cr6.gt) goto loc_832419FC;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83241a14
	if (cr6.eq) goto loc_83241A14;
	// bdz 0x832419cc
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_832419CC;
	// bdz 0x832419dc
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_832419DC;
	// bdz 0x832419fc
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_832419FC;
	// b 0x832419ec
	goto loc_832419EC;
loc_832419CC:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f1,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x831fdbe0
	ctx.lr = 0x832419D8;
	sub_831FDBE0(ctx, base);
	// b 0x83241a14
	goto loc_83241A14;
loc_832419DC:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f1,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x831fdc60
	ctx.lr = 0x832419E8;
	sub_831FDC60(ctx, base);
	// b 0x83241a14
	goto loc_83241A14;
loc_832419EC:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f1,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x831fdce0
	ctx.lr = 0x832419F8;
	sub_831FDCE0(ctx, base);
	// b 0x83241a14
	goto loc_83241A14;
loc_832419FC:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lfs f3,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f3.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f2,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x831fdd60
	ctx.lr = 0x83241A14;
	sub_831FDD60(ctx, base);
loc_83241A14:
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lfs f13,40(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f12,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fadds f3,f0,f13
	ctx.f3.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f11,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fadds f2,f12,f11
	ctx.f2.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// lfs f9,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// fadds f1,f10,f9
	ctx.f1.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// bl 0x831fe038
	ctx.lr = 0x83241A44;
	sub_831FE038(ctx, base);
	// lfs f8,24(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lfs f7,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f6,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// fneg f3,f8
	ctx.f3.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// fneg f2,f7
	ctx.f2.u64 = ctx.f7.u64 ^ 0x8000000000000000;
	// fneg f1,f6
	ctx.f1.u64 = ctx.f6.u64 ^ 0x8000000000000000;
	// bl 0x831fdfd0
	ctx.lr = 0x83241A68;
	sub_831FDFD0(ctx, base);
	// lbz r11,7(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7);
	// rlwinm r10,r11,0,25,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x78;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83241bd0
	if (cr6.eq) goto loc_83241BD0;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lfs f29,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f29.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f28,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f28.f64 = double(temp.f32);
	// addi r9,r11,5696
	ctx.r9.s64 = ctx.r11.s64 + 5696;
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f0,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,132(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f29
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f29.f64));
	// fsubs f13,f13,f28
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f28.f64));
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// beq cr6,0x83241aac
	if (cr6.eq) goto loc_83241AAC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83241AAC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83241ad8
	if (cr6.eq) goto loc_83241AD8;
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x83241ac8
	if (cr6.eq) goto loc_83241AC8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83241AC8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83241adc
	if (!cr6.eq) goto loc_83241ADC;
loc_83241AD8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_83241ADC:
	// lfs f30,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f30.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f31,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// beq cr6,0x83241af4
	if (cr6.eq) goto loc_83241AF4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83241AF4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83241b20
	if (cr6.eq) goto loc_83241B20;
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x83241b10
	if (cr6.eq) goto loc_83241B10;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83241B10:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r31,1
	ctx.r31.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83241b24
	if (!cr6.eq) goto loc_83241B24;
loc_83241B20:
	// li r31,0
	ctx.r31.s64 = 0;
loc_83241B24:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83241b3c
	if (cr6.eq) goto loc_83241B3C;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83241bd0
	if (!cr6.eq) goto loc_83241BD0;
loc_83241B3C:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f11,20(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f13
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f8,f10,f12
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f13,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f8,80(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x831fc198
	ctx.lr = 0x83241B84;
	sub_831FC198(ctx, base);
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83241bac
	if (!cr6.eq) goto loc_83241BAC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f0,4332(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4332);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f2,f31,f0
	ctx.f2.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// fmuls f1,f30,f0
	ctx.f1.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// bl 0x831fc6f8
	ctx.lr = 0x83241BAC;
	sub_831FC6F8(ctx, base);
loc_83241BAC:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// fmr f2,f28
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f28.f64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x831fc428
	ctx.lr = 0x83241BC0;
	sub_831FC428(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x831fd858
	ctx.lr = 0x83241BD0;
	sub_831FD858(ctx, base);
loc_83241BD0:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r3,60(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// bl 0x832137f0
	ctx.lr = 0x83241BDC;
	sub_832137F0(ctx, base);
loc_83241BDC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83241BE0:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x831ce7c4
	ctx.lr = 0x83241BEC;
	__restfpr_28(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83241C00"))) PPC_WEAK_FUNC(sub_83241C00);
PPC_FUNC_IMPL(__imp__sub_83241C00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83241C08;
	__savegprlr_28(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r4,r10
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, xer);
	// beq cr6,0x83241dd8
	if (cr6.eq) goto loc_83241DD8;
	// lwz r5,52(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x83241c80
	if (!cr6.eq) goto loc_83241C80;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83241cc8
	if (cr6.eq) goto loc_83241CC8;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// li r4,154
	ctx.r4.s64 = 154;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x83221378
	ctx.lr = 0x83241C4C;
	sub_83221378(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// sth r31,8(r28)
	PPC_STORE_U16(ctx.r28.u32 + 8, ctx.r31.u16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83241cc8
	if (cr6.eq) goto loc_83241CC8;
	// lhz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 28);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// subf r30,r10,r31
	ctx.r30.s64 = ctx.r31.s64 - ctx.r10.s64;
loc_83241C68:
	// lhz r11,14(r5)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 14);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r30,r10
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, xer);
	// blt cr6,0x83241d24
	if (cr6.lt) goto loc_83241D24;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x83241d30
	goto loc_83241D30;
loc_83241C80:
	// lhz r11,14(r5)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 14);
	// lhz r10,30(r5)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + 30);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpw cr6,r8,r9
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, xer);
	// bge cr6,0x83241c9c
	if (!cr6.lt) goto loc_83241C9C;
	// sth r11,30(r5)
	PPC_STORE_U16(ctx.r5.u32 + 30, ctx.r11.u16);
loc_83241C9C:
	// lhz r11,30(r5)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 30);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// ble cr6,0x83241cb4
	if (!cr6.gt) goto loc_83241CB4;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_83241CB4:
	// rlwinm r11,r31,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 & ctx.r31.u64;
	// sth r30,8(r28)
	PPC_STORE_U16(ctx.r28.u32 + 8, ctx.r30.u16);
	// b 0x83241c68
	goto loc_83241C68;
loc_83241CC8:
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// addi r4,r10,12816
	ctx.r4.s64 = ctx.r10.s64 + 12816;
	// lis r6,-32221
	ctx.r6.s64 = -2111635456;
	// addi r7,r11,12800
	ctx.r7.s64 = ctx.r11.s64 + 12800;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r5,-32221
	ctx.r5.s64 = -2111635456;
	// addi r10,r8,32432
	ctx.r10.s64 = ctx.r8.s64 + 32432;
	// addi r8,r6,12792
	ctx.r8.s64 = ctx.r6.s64 + 12792;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// addi r5,r5,12740
	ctx.r5.s64 = ctx.r5.s64 + 12740;
	// li r6,1009
	ctx.r6.s64 = 1009;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83297a40
	ctx.lr = 0x83241D08;
	sub_83297A40(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83255a88
	ctx.lr = 0x83241D10;
	sub_83255A88(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83201af8
	ctx.lr = 0x83241D18;
	sub_83201AF8(ctx, base);
	// li r3,-1009
	ctx.r3.s64 = -1009;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83241D24:
	// lwz r11,36(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_83241D30:
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lhz r10,10(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 10);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x83241dd8
	if (cr6.eq) goto loc_83241DD8;
	// lbz r11,9(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// lwz r29,60(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83241d5c
	if (cr6.eq) goto loc_83241D5C;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x83241dcc
	goto loc_83241DCC;
loc_83241D5C:
	// lbz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83241d74
	if (cr6.eq) goto loc_83241D74;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832418c0
	ctx.lr = 0x83241D74;
	sub_832418C0(ctx, base);
loc_83241D74:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831fbe28
	ctx.lr = 0x83241D7C;
	sub_831FBE28(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8323e490
	ctx.lr = 0x83241D88;
	sub_8323E490(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83241db4
	if (!cr6.eq) goto loc_83241DB4;
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r29,176
	ctx.r3.s64 = ctx.r29.s64 + 176;
	// oris r10,r11,2048
	ctx.r10.u64 = ctx.r11.u64 | 134217728;
	// stw r10,36(r29)
	PPC_STORE_U32(ctx.r29.u32 + 36, ctx.r10.u32);
	// bl 0x831fbe48
	ctx.lr = 0x83241DA8;
	sub_831FBE48(ctx, base);
	// lwz r9,32(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// oris r8,r9,4
	ctx.r8.u64 = ctx.r9.u64 | 262144;
	// stw r8,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r8.u32);
loc_83241DB4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lhz r4,2(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// bl 0x832170f8
	ctx.lr = 0x83241DC0;
	sub_832170F8(ctx, base);
	// lbz r10,9(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// not r9,r10
	ctx.r9.u64 = ~ctx.r10.u64;
	// rlwinm r4,r9,30,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x1;
loc_83241DCC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83217170
	ctx.lr = 0x83241DD4;
	sub_83217170(ctx, base);
	// sth r30,10(r28)
	PPC_STORE_U16(ctx.r28.u32 + 10, ctx.r30.u16);
loc_83241DD8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83241DE4"))) PPC_WEAK_FUNC(sub_83241DE4);
PPC_FUNC_IMPL(__imp__sub_83241DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83241DE8"))) PPC_WEAK_FUNC(sub_83241DE8);
PPC_FUNC_IMPL(__imp__sub_83241DE8) {
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
	// cmplwi cr6,r11,1847
	cr6.compare<uint32_t>(ctx.r11.u32, 1847, xer);
	// beq cr6,0x83241e14
	if (cr6.eq) goto loc_83241E14;
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
loc_83241E14:
	// lhz r11,30(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 30);
	// lwz r3,12(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// bl 0x8322e5b0
	ctx.lr = 0x83241E24;
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
}

__attribute__((alias("__imp__sub_83241E38"))) PPC_WEAK_FUNC(sub_83241E38);
PPC_FUNC_IMPL(__imp__sub_83241E38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83241E40;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,1948
	cr6.compare<uint32_t>(ctx.r11.u32, 1948, xer);
	// bgt cr6,0x832421ec
	if (cr6.gt) goto loc_832421EC;
	// beq cr6,0x8324215c
	if (cr6.eq) goto loc_8324215C;
	// addi r11,r11,-1898
	ctx.r11.s64 = ctx.r11.s64 + -1898;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bgt cr6,0x8324220c
	if (cr6.gt) goto loc_8324220C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83241ee0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83241EE0;
	// bdzf 4*cr6+eq,0x83241f90
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83241F90;
	// bdzf 4*cr6+eq,0x83242004
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83242004;
	// bdzf 4*cr6+eq,0x832421fc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_832421FC;
	// bdzf 4*cr6+eq,0x83242034
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83242034;
	// bdzf 4*cr6+eq,0x83242070
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83242070;
	// bne cr6,0x832420b4
	if (!cr6.eq) goto loc_832420B4;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,9
	cr6.compare<uint32_t>(ctx.r9.u32, 9, xer);
	// bne cr6,0x83241ea8
	if (!cr6.eq) goto loc_83241EA8;
	// lhz r11,2(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
loc_83241EA8:
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r10,2689
	cr6.compare<uint32_t>(ctx.r10.u32, 2689, xer);
	// beq cr6,0x83241ecc
	if (cr6.eq) goto loc_83241ECC;
	// cmplwi cr6,r10,2711
	cr6.compare<uint32_t>(ctx.r10.u32, 2711, xer);
	// beq cr6,0x83241ecc
	if (cr6.eq) goto loc_83241ECC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,157
	ctx.r3.s64 = 157;
	// bl 0x8320d900
	ctx.lr = 0x83241EC8;
	sub_8320D900(ctx, base);
	// li r11,2689
	ctx.r11.s64 = 2689;
loc_83241ECC:
	// sth r11,6(r27)
	PPC_STORE_U16(ctx.r27.u32 + 6, ctx.r11.u16);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83241EE0:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r10,12288
	ctx.r10.s64 = 12288;
	// li r30,0
	ctx.r30.s64 = 0;
	// lhz r9,2(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// lhz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// addi r5,r11,-163
	ctx.r5.s64 = ctx.r11.s64 + -163;
	// srw r4,r10,r6
	ctx.r4.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r6.u8 & 0x3F));
	// srawi r11,r5,31
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 31;
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// cntlzw r8,r7
	ctx.r8.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r6,r8,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// and r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 & ctx.r10.u64;
	// and r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 & ctx.r6.u64;
	// clrlwi r4,r5,31
	ctx.r4.u64 = ctx.r5.u32 & 0x1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83241f54
	if (!cr6.eq) goto loc_83241F54;
	// li r4,154
	ctx.r4.s64 = 154;
	// bl 0x83221378
	ctx.lr = 0x83241F38;
	sub_83221378(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83241f54
	if (!cr6.eq) goto loc_83241F54;
	// li r5,154
	ctx.r5.s64 = 154;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,157
	ctx.r3.s64 = 157;
	// bl 0x8320d6c0
	ctx.lr = 0x83241F54;
	sub_8320D6C0(ctx, base);
loc_83241F54:
	// stw r30,52(r27)
	PPC_STORE_U32(ctx.r27.u32 + 52, ctx.r30.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x832421fc
	if (cr6.eq) goto loc_832421FC;
	// lwz r11,56(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83241f78
	if (cr6.eq) goto loc_83241F78;
	// li r11,-1
	ctx.r11.s64 = -1;
	// sth r11,12(r27)
	PPC_STORE_U16(ctx.r27.u32 + 12, ctx.r11.u16);
	// sth r11,14(r27)
	PPC_STORE_U16(ctx.r27.u32 + 14, ctx.r11.u16);
loc_83241F78:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,56(r27)
	PPC_STORE_U32(ctx.r27.u32 + 56, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83241F90:
	// li r4,38
	ctx.r4.s64 = 38;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83221378
	ctx.lr = 0x83241F9C;
	sub_83221378(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83241fc4
	if (!cr6.eq) goto loc_83241FC4;
	// li r5,38
	ctx.r5.s64 = 38;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,157
	ctx.r3.s64 = 157;
	// bl 0x8320d6c0
	ctx.lr = 0x83241FB4;
	sub_8320D6C0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83241FC4:
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r31,20(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// bl 0x83267228
	ctx.lr = 0x83241FD4;
	sub_83267228(ctx, base);
	// lfs f13,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,16(r27)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r27.u32 + 16, temp.u32);
	// lfs f11,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f10,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// stfs f9,20(r27)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r27.u32 + 20, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83242004:
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lfs f31,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x83220448
	ctx.lr = 0x8324201C;
	sub_83220448(ctx, base);
	// fmuls f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// stfs f0,24(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 24, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83242034:
	// li r4,125
	ctx.r4.s64 = 125;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83221378
	ctx.lr = 0x83242040;
	sub_83221378(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8324205c
	if (!cr6.eq) goto loc_8324205C;
	// li r5,125
	ctx.r5.s64 = 125;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,157
	ctx.r3.s64 = 157;
	// bl 0x8320d6c0
	ctx.lr = 0x8324205C;
	sub_8320D6C0(ctx, base);
loc_8324205C:
	// stw r30,64(r27)
	PPC_STORE_U32(ctx.r27.u32 + 64, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83242070:
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83222be8
	ctx.lr = 0x83242084;
	sub_83222BE8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,48(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832420a0
	if (cr6.eq) goto loc_832420A0;
	// bl 0x83209d68
	ctx.lr = 0x83242098;
	sub_83209D68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,48(r27)
	PPC_STORE_U32(ctx.r27.u32 + 48, ctx.r11.u32);
loc_832420A0:
	// stw r31,48(r27)
	PPC_STORE_U32(ctx.r27.u32 + 48, ctx.r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832420B4:
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83221378
	ctx.lr = 0x832420C0;
	sub_83221378(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832420ec
	if (!cr6.eq) goto loc_832420EC;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,157
	ctx.r3.s64 = 157;
	// bl 0x8320d6c0
	ctx.lr = 0x832420DC;
	sub_8320D6C0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832420EC:
	// lwz r29,36(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// cmpwi cr6,r29,3
	cr6.compare<int32_t>(ctx.r29.s32, 3, xer);
	// beq cr6,0x8324210c
	if (cr6.eq) goto loc_8324210C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,157
	ctx.r3.s64 = 157;
	// bl 0x8320d7f8
	ctx.lr = 0x83242104;
	sub_8320D7F8(ctx, base);
	// cmpwi cr6,r29,3
	cr6.compare<int32_t>(ctx.r29.s32, 3, xer);
	// blt cr6,0x83242110
	if (cr6.lt) goto loc_83242110;
loc_8324210C:
	// li r29,3
	ctx.r29.s64 = 3;
loc_83242110:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble cr6,0x832421fc
	if (!cr6.gt) goto loc_832421FC;
	// addi r30,r27,28
	ctx.r30.s64 = ctx.r27.s64 + 28;
	// rlwinm r11,r31,31,1,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x7FFFFFFC;
loc_83242124:
	// lwz r9,32(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// rlwinm r10,r31,3,26,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0x38;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x83220448
	ctx.lr = 0x83242138;
	sub_83220448(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stfsu f1,4(r30)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r30.u32;
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r30.u32 = ea;
	// cmpw cr6,r31,r29
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, xer);
	// rlwinm r11,r31,31,1,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x7FFFFFFC;
	// blt cr6,0x83242124
	if (cr6.lt) goto loc_83242124;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8324215C:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r10,12288
	ctx.r10.s64 = 12288;
	// li r30,0
	ctx.r30.s64 = 0;
	// lhz r9,2(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// lhz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// addi r5,r11,-163
	ctx.r5.s64 = ctx.r11.s64 + -163;
	// srw r4,r10,r6
	ctx.r4.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r6.u8 & 0x3F));
	// srawi r11,r5,31
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 31;
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// cntlzw r8,r7
	ctx.r8.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r6,r8,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// and r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 & ctx.r10.u64;
	// and r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 & ctx.r6.u64;
	// clrlwi r4,r5,31
	ctx.r4.u64 = ctx.r5.u32 & 0x1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x832421d0
	if (!cr6.eq) goto loc_832421D0;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x83221378
	ctx.lr = 0x832421B4;
	sub_83221378(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832421d0
	if (!cr6.eq) goto loc_832421D0;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,157
	ctx.r3.s64 = 157;
	// bl 0x8320d6c0
	ctx.lr = 0x832421D0;
	sub_8320D6C0(ctx, base);
loc_832421D0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832417f0
	ctx.lr = 0x832421DC;
	sub_832417F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832421EC:
	// cmplwi cr6,r11,1951
	cr6.compare<uint32_t>(ctx.r11.u32, 1951, xer);
	// blt cr6,0x8324220c
	if (cr6.lt) goto loc_8324220C;
	// cmplwi cr6,r11,1952
	cr6.compare<uint32_t>(ctx.r11.u32, 1952, xer);
	// bgt cr6,0x8324220c
	if (cr6.gt) goto loc_8324220C;
loc_832421FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8324220C:
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8324221C"))) PPC_WEAK_FUNC(sub_8324221C);
PPC_FUNC_IMPL(__imp__sub_8324221C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83242220"))) PPC_WEAK_FUNC(sub_83242220);
PPC_FUNC_IMPL(__imp__sub_83242220) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83242228;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,3(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83242418
	if (!cr6.eq) goto loc_83242418;
	// lwz r28,60(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// li r26,1
	ctx.r26.s64 = 1;
	// lwz r30,64(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r29,48(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x832423d0
	if (!cr6.eq) goto loc_832423D0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x832423d0
	if (cr6.eq) goto loc_832423D0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x832423d0
	if (cr6.eq) goto loc_832423D0;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832423d0
	if (cr6.eq) goto loc_832423D0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8320b098
	ctx.lr = 0x83242288;
	sub_8320B098(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83242308
	if (cr6.eq) goto loc_83242308;
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stw r3,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x832422d0
	if (cr6.eq) goto loc_832422D0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832422d0
	if (cr6.eq) goto loc_832422D0;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832422d0
	if (cr6.eq) goto loc_832422D0;
	// lbz r11,5(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832423d0
	if (!cr6.eq) goto loc_832423D0;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_832422D0:
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832422f4
	if (cr6.eq) goto loc_832422F4;
	// lwz r11,36(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// rlwinm r10,r11,4,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x832422f4
	if (!cr6.eq) goto loc_832422F4;
	// addi r3,r28,96
	ctx.r3.s64 = ctx.r28.s64 + 96;
	// bl 0x831fc118
	ctx.lr = 0x832422F4;
	sub_831FC118(ctx, base);
loc_832422F4:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832423d0
	if (cr6.eq) goto loc_832423D0;
	// stb r26,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r26.u8);
	// b 0x832423d0
	goto loc_832423D0;
loc_83242308:
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// sth r27,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r27.u16);
	// stb r27,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r27.u8);
	// bl 0x8322ab20
	ctx.lr = 0x83242324;
	sub_8322AB20(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83242374
	if (cr6.eq) goto loc_83242374;
	// lhz r11,18(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 18);
	// li r10,12288
	ctx.r10.s64 = 12288;
	// lhz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 16);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// addi r6,r11,-163
	ctx.r6.s64 = ctx.r11.s64 + -163;
	// srw r5,r10,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r7.u8 & 0x3F));
	// srawi r4,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 31;
	// clrlwi r3,r5,24
	ctx.r3.u64 = ctx.r5.u32 & 0xFF;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cntlzw r10,r8
	ctx.r10.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// and r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 & ctx.r3.u64;
	// rlwinm r8,r10,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// and r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 & ctx.r8.u64;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x832423d0
	if (!cr6.eq) goto loc_832423D0;
loc_83242374:
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// sth r27,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r27.u16);
	// stb r27,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r27.u8);
	// bl 0x83217740
	ctx.lr = 0x83242390;
	sub_83217740(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x832423b8
	if (!cr6.eq) goto loc_832423B8;
	// lhz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// bl 0x832277f8
	ctx.lr = 0x832423A4;
	sub_832277F8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832423b8
	if (!cr6.eq) goto loc_832423B8;
	// bl 0x83227908
	ctx.lr = 0x832423B4;
	sub_83227908(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_832423B8:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,12836
	ctx.r4.s64 = ctx.r11.s64 + 12836;
	// addi r3,r10,12824
	ctx.r3.s64 = ctx.r10.s64 + 12824;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x832085e8
	ctx.lr = 0x832423D0;
	sub_832085E8(ctx, base);
loc_832423D0:
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83242400
	if (cr6.eq) goto loc_83242400;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83242400
	if (cr6.eq) goto loc_83242400;
	// lwz r11,412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 412);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83242400
	if (cr6.eq) goto loc_83242400;
	// stb r26,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r26.u8);
loc_83242400:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x83242414
	if (!cr6.eq) goto loc_83242414;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_83242414:
	// stb r26,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r26.u8);
loc_83242418:
	// cmpwi cr6,r24,-1
	cr6.compare<int32_t>(ctx.r24.s32, -1, xer);
	// sth r27,28(r31)
	PPC_STORE_U16(ctx.r31.u32 + 28, ctx.r27.u16);
	// ble cr6,0x83242434
	if (!cr6.gt) goto loc_83242434;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83241c00
	ctx.lr = 0x83242430;
	sub_83241C00(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_83242434:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83242440"))) PPC_WEAK_FUNC(sub_83242440);
PPC_FUNC_IMPL(__imp__sub_83242440) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83242448;
	__savegprlr_29(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83242488
	if (cr6.eq) goto loc_83242488;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83242488
	if (cr6.eq) goto loc_83242488;
	// lwz r11,412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 412);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83242488
	if (cr6.eq) goto loc_83242488;
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
loc_83242488:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stb r30,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r30.u8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// sth r30,28(r31)
	PPC_STORE_U16(ctx.r31.u32 + 28, ctx.r30.u16);
	// bne cr6,0x83242504
	if (!cr6.eq) goto loc_83242504;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x832424b4
	if (cr6.eq) goto loc_832424B4;
	// lhz r11,14(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// b 0x8324252c
	goto loc_8324252C;
loc_832424B4:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r6,-32221
	ctx.r6.s64 = -2111635456;
	// addi r7,r11,12800
	ctx.r7.s64 = ctx.r11.s64 + 12800;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// addi r5,r6,12872
	ctx.r5.s64 = ctx.r6.s64 + 12872;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// addi r10,r10,30156
	ctx.r10.s64 = ctx.r10.s64 + 30156;
	// addi r8,r8,12792
	ctx.r8.s64 = ctx.r8.s64 + 12792;
	// li r6,1009
	ctx.r6.s64 = 1009;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83297a40
	ctx.lr = 0x832424E8;
	sub_83297A40(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83255a88
	ctx.lr = 0x832424F0;
	sub_83255A88(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83201af8
	ctx.lr = 0x832424F8;
	sub_83201AF8(ctx, base);
	// li r3,-1009
	ctx.r3.s64 = -1009;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83242504:
	// lhz r10,14(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 14);
	// lhz r9,30(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 30);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// cmpw cr6,r7,r8
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, xer);
	// bge cr6,0x83242520
	if (!cr6.lt) goto loc_83242520;
	// sth r10,30(r11)
	PPC_STORE_U16(ctx.r11.u32 + 30, ctx.r10.u16);
loc_83242520:
	// lhz r11,30(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 30);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
loc_8324252C:
	// lhz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpw cr6,r9,r4
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, xer);
	// beq cr6,0x83242544
	if (cr6.eq) goto loc_83242544;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83241c00
	ctx.lr = 0x83242544;
	sub_83241C00(ctx, base);
loc_83242544:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83242584
	if (cr6.eq) goto loc_83242584;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83242578
	if (cr6.eq) goto loc_83242578;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83242578
	if (cr6.eq) goto loc_83242578;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83242578
	if (cr6.eq) goto loc_83242578;
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
loc_83242578:
	// li r11,-1
	ctx.r11.s64 = -1;
	// sth r11,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r11.u16);
	// sth r11,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r11.u16);
loc_83242584:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83242590"))) PPC_WEAK_FUNC(sub_83242590);
PPC_FUNC_IMPL(__imp__sub_83242590) {
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
	// lhz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// bge cr6,0x832425cc
	if (!cr6.lt) goto loc_832425CC;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r4.u32);
	// b 0x83242644
	goto loc_83242644;
loc_832425CC:
	// bne cr6,0x83242620
	if (!cr6.eq) goto loc_83242620;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x83209aa8
	ctx.lr = 0x832425D8;
	sub_83209AA8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// lwz r6,28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r6,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// lhz r5,2(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// stwx r30,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r30.u32);
	// b 0x83242644
	goto loc_83242644;
loc_83242620:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x83209df8
	ctx.lr = 0x83242630;
	sub_83209DF8(ctx, base);
	// lhz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r8,r3
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r30.u32);
loc_83242644:
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// sth r10,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r10.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8324266C"))) PPC_WEAK_FUNC(sub_8324266C);
PPC_FUNC_IMPL(__imp__sub_8324266C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83242670"))) PPC_WEAK_FUNC(sub_83242670);
PPC_FUNC_IMPL(__imp__sub_83242670) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83242678;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8324271c
	if (cr6.eq) goto loc_8324271C;
	// lhz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83242708
	if (!cr6.gt) goto loc_83242708;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// li r26,-1
	ctx.r26.s64 = -1;
loc_832426AC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r31,r29,r11
	ctx.r31.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,6
	cr6.compare<int32_t>(ctx.r10.s32, 6, xer);
	// ble cr6,0x832426d8
	if (!cr6.gt) goto loc_832426D8;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832426d8
	if (cr6.eq) goto loc_832426D8;
	// bl 0x83209d68
	ctx.lr = 0x832426D4;
	sub_83209D68(ctx, base);
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
loc_832426D8:
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83294018
	ctx.lr = 0x832426E8;
	sub_83294018(ctx, base);
	// sth r26,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r26.u16);
	// sth r27,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r27.u16);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lhz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// addi r29,r29,32
	ctx.r29.s64 = ctx.r29.s64 + 32;
	// cmpw cr6,r28,r10
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, xer);
	// blt cr6,0x832426ac
	if (cr6.lt) goto loc_832426AC;
loc_83242708:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8324271c
	if (cr6.eq) goto loc_8324271C;
	// bl 0x83209d68
	ctx.lr = 0x83242718;
	sub_83209D68(ctx, base);
	// stw r27,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r27.u32);
loc_8324271C:
	// stb r27,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r27.u8);
	// stb r27,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r27.u8);
	// sth r27,2(r30)
	PPC_STORE_U16(ctx.r30.u32 + 2, ctx.r27.u16);
	// stw r27,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r27.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83242734"))) PPC_WEAK_FUNC(sub_83242734);
PPC_FUNC_IMPL(__imp__sub_83242734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83242738"))) PPC_WEAK_FUNC(sub_83242738);
PPC_FUNC_IMPL(__imp__sub_83242738) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8324279c
	if (cr6.eq) goto loc_8324279C;
	// lwz r11,412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 412);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8324279c
	if (cr6.eq) goto loc_8324279C;
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// li r8,0
	ctx.r8.s64 = 0;
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// ble cr6,0x8324279c
	if (!cr6.gt) goto loc_8324279C;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
loc_83242774:
	// add r9,r11,r7
	ctx.r9.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8324278c
	if (cr6.eq) goto loc_8324278C;
	// cmplw cr6,r10,r3
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, xer);
	// beq cr6,0x832427a4
	if (cr6.eq) goto loc_832427A4;
loc_8324278C:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// cmpw cr6,r8,r6
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, xer);
	// blt cr6,0x83242774
	if (cr6.lt) goto loc_83242774;
loc_8324279C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_832427A4:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832427AC"))) PPC_WEAK_FUNC(sub_832427AC);
PPC_FUNC_IMPL(__imp__sub_832427AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832427B0"))) PPC_WEAK_FUNC(sub_832427B0);
PPC_FUNC_IMPL(__imp__sub_832427B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832427B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r30,r11,24688
	ctx.r30.s64 = ctx.r11.s64 + 24688;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832427e4
	if (cr6.eq) goto loc_832427E4;
	// lwz r31,412(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 412);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83242810
	if (!cr6.eq) goto loc_83242810;
loc_832427E4:
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x83209aa8
	ctx.lr = 0x832427EC;
	sub_83209AA8(ctx, base);
	// stb r28,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r28.u8);
	// stb r28,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r28.u8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// sth r28,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r28.u16);
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r28.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83242810
	if (cr6.eq) goto loc_83242810;
	// stw r3,412(r11)
	PPC_STORE_U32(ctx.r11.u32 + 412, ctx.r3.u32);
loc_83242810:
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x83242860
	if (!cr6.gt) goto loc_83242860;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_83242830:
	// add r29,r11,r9
	ctx.r29.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r6,4(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8324285c
	if (cr6.eq) goto loc_8324285C;
	// lhz r6,2(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// cmpw cr6,r10,r5
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, xer);
	// blt cr6,0x83242830
	if (cr6.lt) goto loc_83242830;
	// b 0x83242860
	goto loc_83242860;
loc_8324285C:
	// li r7,1
	ctx.r7.s64 = 1;
loc_83242860:
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83242898
	if (!cr6.eq) goto loc_83242898;
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r4,r11,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// bl 0x83209df8
	ctx.lr = 0x8324287C;
	sub_83209DF8(ctx, base);
	// lhz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// sth r9,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r9.u16);
	// add r29,r11,r3
	ctx.r29.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_83242898:
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83294018
	ctx.lr = 0x832428A8;
	sub_83294018(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// sth r28,2(r29)
	PPC_STORE_U16(ctx.r29.u32 + 2, ctx.r28.u16);
	// sth r11,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r11.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832428C0"))) PPC_WEAK_FUNC(sub_832428C0);
PPC_FUNC_IMPL(__imp__sub_832428C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x832428C8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83242964
	if (!cr6.gt) goto loc_83242964;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// li r26,-1
	ctx.r26.s64 = -1;
loc_832428F4:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8324294c
	if (cr6.eq) goto loc_8324294C;
	// cmplw cr6,r11,r25
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, xer);
	// bne cr6,0x8324294c
	if (!cr6.eq) goto loc_8324294C;
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,6
	cr6.compare<int32_t>(ctx.r10.s32, 6, xer);
	// ble cr6,0x83242934
	if (!cr6.gt) goto loc_83242934;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83242934
	if (cr6.eq) goto loc_83242934;
	// bl 0x83209d68
	ctx.lr = 0x83242930;
	sub_83209D68(ctx, base);
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
loc_83242934:
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83294018
	ctx.lr = 0x83242944;
	sub_83294018(ctx, base);
	// sth r26,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r26.u16);
	// sth r27,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r27.u16);
loc_8324294C:
	// lhz r11,2(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 2);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r28,r10
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, xer);
	// blt cr6,0x832428f4
	if (cr6.lt) goto loc_832428F4;
loc_83242964:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8324296C"))) PPC_WEAK_FUNC(sub_8324296C);
PPC_FUNC_IMPL(__imp__sub_8324296C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83242970"))) PPC_WEAK_FUNC(sub_83242970);
PPC_FUNC_IMPL(__imp__sub_83242970) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83242978;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// blt cr6,0x83242998
	if (cr6.lt) goto loc_83242998;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// ble cr6,0x832429a8
	if (!cr6.gt) goto loc_832429A8;
loc_83242998:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,12800
	ctx.r3.s64 = ctx.r11.s64 + 12800;
	// bl 0x8320d088
	ctx.lr = 0x832429A8;
	sub_8320D088(ctx, base);
loc_832429A8:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// blt cr6,0x83242aec
	if (cr6.lt) goto loc_83242AEC;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,122
	ctx.r4.s64 = 122;
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
	// bl 0x83221378
	ctx.lr = 0x832429DC;
	sub_83221378(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83242a10
	if (!cr6.eq) goto loc_83242A10;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lhz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r5,r11,12932
	ctx.r5.s64 = ctx.r11.s64 + 12932;
	// li r6,122
	ctx.r6.s64 = 122;
	// li r3,290
	ctx.r3.s64 = 290;
	// bl 0x8320d428
	ctx.lr = 0x83242A04;
	sub_8320D428(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83242A10:
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// li r4,156
	ctx.r4.s64 = 156;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83221378
	ctx.lr = 0x83242A20;
	sub_83221378(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83242a54
	if (!cr6.eq) goto loc_83242A54;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lhz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r5,r11,12924
	ctx.r5.s64 = ctx.r11.s64 + 12924;
	// li r6,156
	ctx.r6.s64 = 156;
	// li r3,290
	ctx.r3.s64 = 290;
	// bl 0x8320d428
	ctx.lr = 0x83242A48;
	sub_8320D428(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83242A54:
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83222578
	ctx.lr = 0x83242A60;
	sub_83222578(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// blt cr6,0x83242a7c
	if (cr6.lt) goto loc_83242A7C;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83222578
	ctx.lr = 0x83242A7C;
	sub_83222578(ctx, base);
loc_83242A7C:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// blt cr6,0x83242a94
	if (cr6.lt) goto loc_83242A94;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x83220140
	ctx.lr = 0x83242A90;
	sub_83220140(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_83242A94:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83242738
	ctx.lr = 0x83242A9C;
	sub_83242738(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83242ab4
	if (!cr6.eq) goto loc_83242AB4;
	// bl 0x832427b0
	ctx.lr = 0x83242AAC;
	sub_832427B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
loc_83242AB4:
	// cmpwi cr6,r28,-1
	cr6.compare<int32_t>(ctx.r28.s32, -1, xer);
	// bne cr6,0x83242ac8
	if (!cr6.eq) goto loc_83242AC8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832166e0
	ctx.lr = 0x83242AC4;
	sub_832166E0(ctx, base);
	// addi r28,r3,-1
	ctx.r28.s64 = ctx.r3.s64 + -1;
loc_83242AC8:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83242ae0
	if (cr6.eq) goto loc_83242AE0;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r28,12(r27)
	PPC_STORE_U16(ctx.r27.u32 + 12, ctx.r28.u16);
	// stb r11,2(r27)
	PPC_STORE_U8(ctx.r27.u32 + 2, ctx.r11.u8);
loc_83242AE0:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83242590
	ctx.lr = 0x83242AEC;
	sub_83242590(ctx, base);
loc_83242AEC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83242AF8"))) PPC_WEAK_FUNC(sub_83242AF8);
PPC_FUNC_IMPL(__imp__sub_83242AF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83242B00;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x83213e88
	ctx.lr = 0x83242B28;
	sub_83213E88(ctx, base);
	// lhz r9,82(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// lhz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// li r10,12288
	ctx.r10.s64 = 12288;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// addi r5,r11,-163
	ctx.r5.s64 = ctx.r11.s64 + -163;
	// srw r4,r10,r6
	ctx.r4.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r6.u8 & 0x3F));
	// srawi r3,r5,31
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 31;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r9,r7
	ctx.r9.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// and r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 & ctx.r11.u64;
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// and r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 & ctx.r7.u64;
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83242bc8
	if (cr6.eq) goto loc_83242BC8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83242bbc
	if (cr6.eq) goto loc_83242BBC;
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83242bbc
	if (!cr6.eq) goto loc_83242BBC;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83242bbc
	if (cr6.eq) goto loc_83242BBC;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83242bbc
	if (cr6.eq) goto loc_83242BBC;
	// lwz r11,412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 412);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83242bbc
	if (cr6.eq) goto loc_83242BBC;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
loc_83242BBC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83242BC8:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83242d84
	if (cr6.eq) goto loc_83242D84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832166e0
	ctx.lr = 0x83242BD8;
	sub_832166E0(ctx, base);
	// lhz r11,14(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// lhz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// addi r8,r3,-1
	ctx.r8.s64 = ctx.r3.s64 + -1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x83242c44
	if (!cr6.lt) goto loc_83242C44;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83242c08
	if (!cr6.eq) goto loc_83242C08;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x83242c44
	goto loc_83242C44;
loc_83242C08:
	// lhz r9,14(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 14);
	// lhz r7,30(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 30);
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// cmpw cr6,r5,r6
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, xer);
	// bge cr6,0x83242c24
	if (!cr6.lt) goto loc_83242C24;
	// sth r9,30(r11)
	PPC_STORE_U16(ctx.r11.u32 + 30, ctx.r9.u16);
loc_83242C24:
	// lhz r11,30(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 30);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bgt cr6,0x83242c3c
	if (cr6.gt) goto loc_83242C3C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x83242c44
	goto loc_83242C44;
loc_83242C3C:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_83242C44:
	// lbz r9,3(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// cmpw cr6,r8,r10
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, xer);
	// blt cr6,0x83242d14
	if (cr6.lt) goto loc_83242D14;
	// cmpw cr6,r8,r11
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, xer);
	// bgt cr6,0x83242d14
	if (cr6.gt) goto loc_83242D14;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// subf r4,r10,r8
	ctx.r4.s64 = ctx.r8.s64 - ctx.r10.s64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83242c8c
	if (!cr6.eq) goto loc_83242C8C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83242220
	ctx.lr = 0x83242C74;
	sub_83242220(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83222030
	ctx.lr = 0x83242C80;
	sub_83222030(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83242C8C:
	// clrlwi r10,r27,24
	ctx.r10.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83242d84
	if (!cr6.eq) goto loc_83242D84;
	// cmpw cr6,r8,r11
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, xer);
	// bne cr6,0x83242cf8
	if (!cr6.eq) goto loc_83242CF8;
	// lhz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 28);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lhz r9,30(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 30);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// sth r10,28(r31)
	PPC_STORE_U16(ctx.r31.u32 + 28, ctx.r10.u16);
	// beq cr6,0x83242ce0
	if (cr6.eq) goto loc_83242CE0;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// blt cr6,0x83242ce0
	if (cr6.lt) goto loc_83242CE0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83242440
	ctx.lr = 0x83242CE0;
	sub_83242440(ctx, base);
loc_83242CE0:
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83222030
	ctx.lr = 0x83242CEC;
	sub_83222030(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83242CF8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83241c00
	ctx.lr = 0x83242D00;
	sub_83241C00(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83222030
	ctx.lr = 0x83242D08;
	sub_83222030(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83242D14:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// beq cr6,0x83242d54
	if (cr6.eq) goto loc_83242D54;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83242d84
	if (!cr6.eq) goto loc_83242D84;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83242440
	ctx.lr = 0x83242D3C;
	sub_83242440(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83222030
	ctx.lr = 0x83242D48;
	sub_83222030(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83242D54:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83242d84
	if (cr6.eq) goto loc_83242D84;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83242d84
	if (cr6.eq) goto loc_83242D84;
	// lwz r11,412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 412);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83242d84
	if (cr6.eq) goto loc_83242D84;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
loc_83242D84:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83222030
	ctx.lr = 0x83242D8C;
	sub_83222030(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83242D98"))) PPC_WEAK_FUNC(sub_83242D98);
PPC_FUNC_IMPL(__imp__sub_83242D98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83242DA0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// blt cr6,0x83242dc0
	if (cr6.lt) goto loc_83242DC0;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// ble cr6,0x83242dd0
	if (!cr6.gt) goto loc_83242DD0;
loc_83242DC0:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,12800
	ctx.r3.s64 = ctx.r11.s64 + 12800;
	// bl 0x8320d088
	ctx.lr = 0x83242DD0;
	sub_8320D088(ctx, base);
loc_83242DD0:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// blt cr6,0x83242e2c
	if (cr6.lt) goto loc_83242E2C;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,122
	ctx.r4.s64 = 122;
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
	// bl 0x83221378
	ctx.lr = 0x83242E04;
	sub_83221378(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83242e38
	if (!cr6.eq) goto loc_83242E38;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lhz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r5,r11,12932
	ctx.r5.s64 = ctx.r11.s64 + 12932;
	// li r6,122
	ctx.r6.s64 = 122;
	// li r3,290
	ctx.r3.s64 = 290;
	// bl 0x8320d428
	ctx.lr = 0x83242E2C;
	sub_8320D428(ctx, base);
loc_83242E2C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83242E38:
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// li r4,156
	ctx.r4.s64 = 156;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83221378
	ctx.lr = 0x83242E48;
	sub_83221378(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83242e7c
	if (!cr6.eq) goto loc_83242E7C;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lhz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r5,r11,12924
	ctx.r5.s64 = ctx.r11.s64 + 12924;
	// li r6,156
	ctx.r6.s64 = 156;
	// li r3,290
	ctx.r3.s64 = 290;
	// bl 0x8320d428
	ctx.lr = 0x83242E70;
	sub_8320D428(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83242E7C:
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83220140
	ctx.lr = 0x83242E88;
	sub_83220140(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// blt cr6,0x83242ea4
	if (cr6.lt) goto loc_83242EA4;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x83220140
	ctx.lr = 0x83242EA0;
	sub_83220140(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_83242EA4:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83242af8
	ctx.lr = 0x83242EB8;
	sub_83242AF8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83242EC0"))) PPC_WEAK_FUNC(sub_83242EC0);
PPC_FUNC_IMPL(__imp__sub_83242EC0) {
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
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,2366
	cr6.compare<uint32_t>(ctx.r11.u32, 2366, xer);
	// beq cr6,0x83242f0c
	if (cr6.eq) goto loc_83242F0C;
	// cmplwi cr6,r11,2367
	cr6.compare<uint32_t>(ctx.r11.u32, 2367, xer);
	// beq cr6,0x83242f00
	if (cr6.eq) goto loc_83242F00;
	// li r3,-4
	ctx.r3.s64 = -4;
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
loc_83242F00:
	// bl 0x83242d98
	ctx.lr = 0x83242F04;
	sub_83242D98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x83242f10
	goto loc_83242F10;
loc_83242F0C:
	// bl 0x83242970
	ctx.lr = 0x83242F10;
	sub_83242970(ctx, base);
loc_83242F10:
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

__attribute__((alias("__imp__sub_83242F28"))) PPC_WEAK_FUNC(sub_83242F28);
PPC_FUNC_IMPL(__imp__sub_83242F28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x83242F30;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83243064
	if (cr6.eq) goto loc_83243064;
	// lhz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// li r23,0
	ctx.r23.s64 = 0;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83243064
	if (!cr6.gt) goto loc_83243064;
	// li r25,0
	ctx.r25.s64 = 0;
loc_83242F5C:
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// add r30,r11,r25
	ctx.r30.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lwz r27,4(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x8324304c
	if (cr6.eq) goto loc_8324304C;
	// lhz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x8324304c
	if (!cr6.gt) goto loc_8324304C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832166e0
	ctx.lr = 0x83242F88;
	sub_832166E0(ctx, base);
	// lhz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83243048
	if (!cr6.gt) goto loc_83243048;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r30,8
	ctx.r29.s64 = ctx.r30.s64 + 8;
loc_83242FA8:
	// lhz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,6
	cr6.compare<int32_t>(ctx.r10.s32, 6, xer);
	// bgt cr6,0x83242fc0
	if (cr6.gt) goto loc_83242FC0;
	// lwzx r4,r31,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// b 0x83242fc8
	goto loc_83242FC8;
loc_83242FC0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwzx r4,r11,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
loc_83242FC8:
	// lbz r11,2(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83242fe4
	if (cr6.eq) goto loc_83242FE4;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r26,r10
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r10.s32, xer);
	// beq cr6,0x83243030
	if (cr6.eq) goto loc_83243030;
loc_83242FE4:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83242af8
	ctx.lr = 0x83242FF4;
	sub_83242AF8(ctx, base);
	// cmpwi cr6,r3,-17
	cr6.compare<int32_t>(ctx.r3.s32, -17, xer);
	// bne cr6,0x83243004
	if (!cr6.eq) goto loc_83243004;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8324301c
	goto loc_8324301C;
loc_83243004:
	// cmpwi cr6,r3,-1000
	cr6.compare<int32_t>(ctx.r3.s32, -1000, xer);
	// bgt cr6,0x83243018
	if (cr6.gt) goto loc_83243018;
	// cmpwi cr6,r3,-3000
	cr6.compare<int32_t>(ctx.r3.s32, -3000, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8324301c
	if (cr6.gt) goto loc_8324301C;
loc_83243018:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8324301C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83243030
	if (cr6.eq) goto loc_83243030;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83285fd8
	ctx.lr = 0x83243030;
	sub_83285FD8(ctx, base);
loc_83243030:
	// lhz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r28,r10
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, xer);
	// blt cr6,0x83242fa8
	if (cr6.lt) goto loc_83242FA8;
loc_83243048:
	// sth r26,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r26.u16);
loc_8324304C:
	// lhz r11,2(r24)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r24.u32 + 2);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r25,r25,32
	ctx.r25.s64 = ctx.r25.s64 + 32;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r23,r10
	cr6.compare<int32_t>(ctx.r23.s32, ctx.r10.s32, xer);
	// blt cr6,0x83242f5c
	if (cr6.lt) goto loc_83242F5C;
loc_83243064:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8324306C"))) PPC_WEAK_FUNC(sub_8324306C);
PPC_FUNC_IMPL(__imp__sub_8324306C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83243070"))) PPC_WEAK_FUNC(sub_83243070);
PPC_FUNC_IMPL(__imp__sub_83243070) {
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
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r9,r10,8400
	ctx.r9.u64 = ctx.r10.u64 | 8400;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// sraw r7,r9,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r7.s64 = ctx.r9.s32 >> temp.u32;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x832430b0
	if (cr6.eq) goto loc_832430B0;
	// bl 0x83222030
	ctx.lr = 0x832430B0;
	sub_83222030(ctx, base);
loc_832430B0:
	// li r11,8
	ctx.r11.s64 = 8;
	// extsb r10,r30
	ctx.r10.s64 = ctx.r30.s8;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832430D8"))) PPC_WEAK_FUNC(sub_832430D8);
PPC_FUNC_IMPL(__imp__sub_832430D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832430E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,12(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lhz r29,8(r3)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
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
	// beq cr6,0x83243118
	if (cr6.eq) goto loc_83243118;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x83243118;
	sub_83222030(ctx, base);
loc_83243118:
	// li r11,15
	ctx.r11.s64 = 15;
	// sth r30,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r30.u16);
	// sth r29,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r29.u16);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83243130"))) PPC_WEAK_FUNC(sub_83243130);
PPC_FUNC_IMPL(__imp__sub_83243130) {
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
	// cmplwi cr6,r11,1815
	cr6.compare<uint32_t>(ctx.r11.u32, 1815, xer);
	// bgt cr6,0x832431cc
	if (cr6.gt) goto loc_832431CC;
	// beq cr6,0x832431a4
	if (cr6.eq) goto loc_832431A4;
	// cmplwi cr6,r11,516
	cr6.compare<uint32_t>(ctx.r11.u32, 516, xer);
	// beq cr6,0x83243188
	if (cr6.eq) goto loc_83243188;
	// cmplwi cr6,r11,1814
	cr6.compare<uint32_t>(ctx.r11.u32, 1814, xer);
	// bne cr6,0x832431dc
	if (!cr6.eq) goto loc_832431DC;
	// li r11,-2050
	ctx.r11.s64 = -2050;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rldicr r10,r11,52,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 52) & 0xFFFFFFFFFFFFFFFF;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f1,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x832239d8
	ctx.lr = 0x83243174;
	sub_832239D8(ctx, base);
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
loc_83243188:
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x83223850
	ctx.lr = 0x83243190;
	sub_83223850(ctx, base);
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
loc_832431A4:
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f1,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x832239d8
	ctx.lr = 0x832431B8;
	sub_832239D8(ctx, base);
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
loc_832431CC:
	// cmplwi cr6,r11,1816
	cr6.compare<uint32_t>(ctx.r11.u32, 1816, xer);
	// beq cr6,0x832431f8
	if (cr6.eq) goto loc_832431F8;
	// cmplwi cr6,r11,1817
	cr6.compare<uint32_t>(ctx.r11.u32, 1817, xer);
	// beq cr6,0x832431f0
	if (cr6.eq) goto loc_832431F0;
loc_832431DC:
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
loc_832431F0:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x832431fc
	goto loc_832431FC;
loc_832431F8:
	// li r4,-1
	ctx.r4.s64 = -1;
loc_832431FC:
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x83243070
	ctx.lr = 0x83243204;
	sub_83243070(ctx, base);
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

__attribute__((alias("__imp__sub_83243218"))) PPC_WEAK_FUNC(sub_83243218);
PPC_FUNC_IMPL(__imp__sub_83243218) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// bl 0x83243130
	ctx.lr = 0x83243228;
	sub_83243130(ctx, base);
	// subfic r11,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// li r9,-4
	ctx.r9.s64 = -4;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 & ctx.r9.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83243248"))) PPC_WEAK_FUNC(sub_83243248);
PPC_FUNC_IMPL(__imp__sub_83243248) {
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
	// cmplwi cr6,r11,1814
	cr6.compare<uint32_t>(ctx.r11.u32, 1814, xer);
	// beq cr6,0x83243284
	if (cr6.eq) goto loc_83243284;
	// cmplwi cr6,r11,1815
	cr6.compare<uint32_t>(ctx.r11.u32, 1815, xer);
	// beq cr6,0x8324327c
	if (cr6.eq) goto loc_8324327C;
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
loc_8324327C:
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// b 0x8324328c
	goto loc_8324328C;
loc_83243284:
	// lis r4,32767
	ctx.r4.s64 = 2147418112;
	// ori r4,r4,65535
	ctx.r4.u64 = ctx.r4.u64 | 65535;
loc_8324328C:
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x8322e5b0
	ctx.lr = 0x83243294;
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
}

__attribute__((alias("__imp__sub_832432A8"))) PPC_WEAK_FUNC(sub_832432A8);
PPC_FUNC_IMPL(__imp__sub_832432A8) {
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
	// cmplwi cr6,r11,1814
	cr6.compare<uint32_t>(ctx.r11.u32, 1814, xer);
	// beq cr6,0x832432fc
	if (cr6.eq) goto loc_832432FC;
	// cmplwi cr6,r11,1815
	cr6.compare<uint32_t>(ctx.r11.u32, 1815, xer);
	// beq cr6,0x832432dc
	if (cr6.eq) goto loc_832432DC;
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
loc_832432DC:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x8322e5b0
	ctx.lr = 0x832432E8;
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
loc_832432FC:
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// clrldi r4,r4,32
	ctx.r4.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// bl 0x832238c0
	ctx.lr = 0x8324330C;
	sub_832238C0(ctx, base);
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

__attribute__((alias("__imp__sub_83243320"))) PPC_WEAK_FUNC(sub_83243320);
PPC_FUNC_IMPL(__imp__sub_83243320) {
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
	// cmplwi cr6,r30,1152
	cr6.compare<uint32_t>(ctx.r30.u32, 1152, xer);
	// beq cr6,0x8324335c
	if (cr6.eq) goto loc_8324335C;
	// cmplwi cr6,r30,2435
	cr6.compare<uint32_t>(ctx.r30.u32, 2435, xer);
	// ble cr6,0x83243354
	if (!cr6.gt) goto loc_83243354;
	// cmplwi cr6,r30,2438
	cr6.compare<uint32_t>(ctx.r30.u32, 2438, xer);
	// ble cr6,0x8324335c
	if (!cr6.gt) goto loc_8324335C;
loc_83243354:
	// li r3,-4
	ctx.r3.s64 = -4;
	// b 0x832433a0
	goto loc_832433A0;
loc_8324335C:
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
	// beq cr6,0x83243388
	if (cr6.eq) goto loc_83243388;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x83243388;
	sub_83222030(ctx, base);
loc_83243388:
	// li r11,15
	ctx.r11.s64 = 15;
	// sth r30,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r30.u16);
	// li r10,42
	ctx.r10.s64 = 42;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r10,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r10.u16);
loc_832433A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832433B8"))) PPC_WEAK_FUNC(sub_832433B8);
PPC_FUNC_IMPL(__imp__sub_832433B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x83243320
	sub_83243320(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832433BC"))) PPC_WEAK_FUNC(sub_832433BC);
PPC_FUNC_IMPL(__imp__sub_832433BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832433C0"))) PPC_WEAK_FUNC(sub_832433C0);
PPC_FUNC_IMPL(__imp__sub_832433C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832433C8;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,13004
	ctx.r5.s64 = ctx.r11.s64 + 13004;
	// beq cr6,0x8324345c
	if (cr6.eq) goto loc_8324345C;
	// addi r6,r30,1
	ctx.r6.s64 = ctx.r30.s64 + 1;
	// bl 0x83297a40
	ctx.lr = 0x83243400;
	sub_83297A40(ctx, base);
	// stfd f31,40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f31.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,64
	ctx.r4.s64 = 64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83297a40
	ctx.lr = 0x8324341C;
	sub_83297A40(ctx, base);
	// li r4,101
	ctx.r4.s64 = 101;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83296d08
	ctx.lr = 0x83243428;
	sub_83296D08(ctx, base);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// subf r5,r3,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r3.s64;
	// bne cr6,0x8324344c
	if (!cr6.eq) goto loc_8324344C;
	// addi r3,r3,-2
	ctx.r3.s64 = ctx.r3.s64 + -2;
	// bl 0x83296be0
	ctx.lr = 0x83243448;
	sub_83296BE0(ctx, base);
	// b 0x83243490
	goto loc_83243490;
loc_8324344C:
	// addi r3,r31,-1
	ctx.r3.s64 = ctx.r31.s64 + -1;
	// bl 0x83296be0
	ctx.lr = 0x83243454;
	sub_83296BE0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x83243490
	goto loc_83243490;
loc_8324345C:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x83297a40
	ctx.lr = 0x83243464;
	sub_83297A40(ctx, base);
	// stfd f31,40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f31.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,64
	ctx.r4.s64 = 64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83297a40
	ctx.lr = 0x83243480;
	sub_83297A40(ctx, base);
	// li r4,101
	ctx.r4.s64 = 101;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83296d08
	ctx.lr = 0x8324348C;
	sub_83296D08(ctx, base);
	// addi r31,r3,2
	ctx.r31.s64 = ctx.r3.s64 + 2;
loc_83243490:
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x832434c8
	if (cr6.eq) goto loc_832434C8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_832434A8:
	// cmpwi cr6,r10,48
	cr6.compare<int32_t>(ctx.r10.s32, 48, xer);
	// bne cr6,0x832434d4
	if (!cr6.eq) goto loc_832434D4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x832434a8
	if (!cr6.eq) goto loc_832434A8;
loc_832434C8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,-2(r31)
	PPC_STORE_U8(ctx.r31.u32 + -2, ctx.r11.u8);
	// b 0x832434ec
	goto loc_832434EC;
loc_832434D4:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x832434ec
	if (cr6.eq) goto loc_832434EC;
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r5,r31,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r31.s64;
	// bl 0x83296be0
	ctx.lr = 0x832434EC;
	sub_83296BE0(ctx, base);
loc_832434EC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83255a88
	ctx.lr = 0x832434F4;
	sub_83255A88(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x83223af0
	ctx.lr = 0x83243500;
	sub_83223AF0(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8324350C"))) PPC_WEAK_FUNC(sub_8324350C);
PPC_FUNC_IMPL(__imp__sub_8324350C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83243510"))) PPC_WEAK_FUNC(sub_83243510);
PPC_FUNC_IMPL(__imp__sub_83243510) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r5,r11,13028
	ctx.r5.s64 = ctx.r11.s64 + 13028;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83297a40
	ctx.lr = 0x83243544;
	sub_83297A40(ctx, base);
	// stfd f31,40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f31.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,64
	ctx.r4.s64 = 64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83297a40
	ctx.lr = 0x83243560;
	sub_83297A40(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83255a88
	ctx.lr = 0x83243568;
	sub_83255A88(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83223af0
	ctx.lr = 0x83243574;
	sub_83223AF0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
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

__attribute__((alias("__imp__sub_8324358C"))) PPC_WEAK_FUNC(sub_8324358C);
PPC_FUNC_IMPL(__imp__sub_8324358C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83243590"))) PPC_WEAK_FUNC(sub_83243590);
PPC_FUNC_IMPL(__imp__sub_83243590) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83243598;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x832435c8
	if (cr6.eq) goto loc_832435C8;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x832435c8
	if (cr6.eq) goto loc_832435C8;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,12996
	ctx.r3.s64 = ctx.r11.s64 + 12996;
	// bl 0x8320d088
	ctx.lr = 0x832435C8;
	sub_8320D088(ctx, base);
loc_832435C8:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// blt cr6,0x83243610
	if (cr6.lt) goto loc_83243610;
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
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222578
	ctx.lr = 0x832435FC;
	sub_83222578(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// blt cr6,0x83243610
	if (cr6.lt) goto loc_83243610;
	// cmpwi cr6,r3,36
	cr6.compare<int32_t>(ctx.r3.s32, 36, xer);
	// ble cr6,0x8324362c
	if (!cr6.gt) goto loc_8324362C;
loc_83243610:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lhz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,13040
	ctx.r5.s64 = ctx.r11.s64 + 13040;
	// li r3,42
	ctx.r3.s64 = 42;
	// bl 0x8320d548
	ctx.lr = 0x83243628;
	sub_8320D548(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
loc_8324362C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832206f0
	ctx.lr = 0x83243634;
	sub_832206F0(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// frsp f1,f1
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x83243654
	if (!cr6.gt) goto loc_83243654;
	// bl 0x831d1ce8
	ctx.lr = 0x83243650;
	sub_831D1CE8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
loc_83243654:
	// extsw r11,r29
	ctx.r11.s64 = ctx.r29.s32;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,13036(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 13036);
	ctx.f13.f64 = double(temp.f32);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fcmpu cr6,f11,f1
	cr6.compare(ctx.f11.f64, ctx.f1.f64);
	// bge cr6,0x83243684
	if (!cr6.lt) goto loc_83243684;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83243684:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832436c4
	if (cr6.eq) goto loc_832436C4;
	// bl 0x831d1ca8
	ctx.lr = 0x83243694;
	sub_831D1CA8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r11,r11,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r11.s64;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x83243510
	ctx.lr = 0x832436B8;
	sub_83243510(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832436C4:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r29,-1
	ctx.r4.s64 = ctx.r29.s64 + -1;
	// bl 0x832433c0
	ctx.lr = 0x832436D8;
	sub_832433C0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832436E4"))) PPC_WEAK_FUNC(sub_832436E4);
PPC_FUNC_IMPL(__imp__sub_832436E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832436E8"))) PPC_WEAK_FUNC(sub_832436E8);
PPC_FUNC_IMPL(__imp__sub_832436E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832436F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8324371c
	if (cr6.eq) goto loc_8324371C;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x8324371c
	if (cr6.eq) goto loc_8324371C;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,12996
	ctx.r3.s64 = ctx.r11.s64 + 12996;
	// bl 0x8320d088
	ctx.lr = 0x8324371C;
	sub_8320D088(ctx, base);
loc_8324371C:
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// blt cr6,0x83243784
	if (cr6.lt) goto loc_83243784;
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
	// bl 0x83222578
	ctx.lr = 0x8324374C;
	sub_83222578(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// blt cr6,0x83243760
	if (cr6.lt) goto loc_83243760;
	// cmpwi cr6,r3,36
	cr6.compare<int32_t>(ctx.r3.s32, 36, xer);
	// ble cr6,0x8324377c
	if (!cr6.gt) goto loc_8324377C;
loc_83243760:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lhz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,13052
	ctx.r5.s64 = ctx.r11.s64 + 13052;
	// li r3,42
	ctx.r3.s64 = 42;
	// bl 0x8320d548
	ctx.lr = 0x83243778;
	sub_8320D548(ctx, base);
	// b 0x83243784
	goto loc_83243784;
loc_8324377C:
	// cmpwi cr6,r6,10
	cr6.compare<int32_t>(ctx.r6.s32, 10, xer);
	// bne cr6,0x832437ac
	if (!cr6.eq) goto loc_832437AC;
loc_83243784:
	// li r6,10
	ctx.r6.s64 = 10;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83222be8
	ctx.lr = 0x83243798;
	sub_83222BE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x83223bd0
	ctx.lr = 0x832437A4;
	sub_83223BD0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_832437AC:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83220fb0
	ctx.lr = 0x832437BC;
	sub_83220FB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x83223bd0
	ctx.lr = 0x832437C8;
	sub_83223BD0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832437D0"))) PPC_WEAK_FUNC(sub_832437D0);
PPC_FUNC_IMPL(__imp__sub_832437D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832437D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,2437
	cr6.compare<uint32_t>(ctx.r11.u32, 2437, xer);
	// bgt cr6,0x8324396c
	if (cr6.gt) goto loc_8324396C;
	// beq cr6,0x832438c4
	if (cr6.eq) goto loc_832438C4;
	// cmplwi cr6,r11,1152
	cr6.compare<uint32_t>(ctx.r11.u32, 1152, xer);
	// beq cr6,0x832438ac
	if (cr6.eq) goto loc_832438AC;
	// cmplwi cr6,r11,2436
	cr6.compare<uint32_t>(ctx.r11.u32, 2436, xer);
	// bne cr6,0x83243974
	if (!cr6.eq) goto loc_83243974;
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83243828
	if (cr6.eq) goto loc_83243828;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83243828
	if (cr6.eq) goto loc_83243828;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,12996
	ctx.r3.s64 = ctx.r11.s64 + 12996;
	// bl 0x8320d088
	ctx.lr = 0x83243828;
	sub_8320D088(ctx, base);
loc_83243828:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// blt cr6,0x83243888
	if (cr6.lt) goto loc_83243888;
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
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83222578
	ctx.lr = 0x83243858;
	sub_83222578(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8324386c
	if (cr6.lt) goto loc_8324386C;
	// cmpwi cr6,r3,20
	cr6.compare<int32_t>(ctx.r3.s32, 20, xer);
	// ble cr6,0x83243888
	if (!cr6.gt) goto loc_83243888;
loc_8324386C:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lhz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,13012
	ctx.r5.s64 = ctx.r11.s64 + 13012;
	// li r3,42
	ctx.r3.s64 = 42;
	// bl 0x8320d548
	ctx.lr = 0x83243884;
	sub_8320D548(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_83243888:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832206f0
	ctx.lr = 0x83243890;
	sub_832206F0(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x832433c0
	ctx.lr = 0x832438A0;
	sub_832433C0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832438AC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832436e8
	ctx.lr = 0x832438B8;
	sub_832436E8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832438C4:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x832438ec
	if (cr6.eq) goto loc_832438EC;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x832438ec
	if (cr6.eq) goto loc_832438EC;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,12996
	ctx.r3.s64 = ctx.r11.s64 + 12996;
	// bl 0x8320d088
	ctx.lr = 0x832438EC;
	sub_8320D088(ctx, base);
loc_832438EC:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// blt cr6,0x8324394c
	if (cr6.lt) goto loc_8324394C;
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
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83222578
	ctx.lr = 0x8324391C;
	sub_83222578(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83243930
	if (cr6.lt) goto loc_83243930;
	// cmpwi cr6,r3,20
	cr6.compare<int32_t>(ctx.r3.s32, 20, xer);
	// ble cr6,0x8324394c
	if (!cr6.gt) goto loc_8324394C;
loc_83243930:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lhz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,13012
	ctx.r5.s64 = ctx.r11.s64 + 13012;
	// li r3,42
	ctx.r3.s64 = 42;
	// bl 0x8320d548
	ctx.lr = 0x83243948;
	sub_8320D548(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_8324394C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832206f0
	ctx.lr = 0x83243954;
	sub_832206F0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83243510
	ctx.lr = 0x83243960;
	sub_83243510(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8324396C:
	// cmplwi cr6,r11,2438
	cr6.compare<uint32_t>(ctx.r11.u32, 2438, xer);
	// beq cr6,0x83243980
	if (cr6.eq) goto loc_83243980;
loc_83243974:
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83243980:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83243590
	ctx.lr = 0x8324398C;
	sub_83243590(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83243998"))) PPC_WEAK_FUNC(sub_83243998);
PPC_FUNC_IMPL(__imp__sub_83243998) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lhz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832439bc
	if (cr6.eq) goto loc_832439BC;
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// li r3,-6
	ctx.r3.s64 = -6;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// sth r10,8(r11)
	PPC_STORE_U16(ctx.r11.u32 + 8, ctx.r10.u16);
	// blr 
	return;
loc_832439BC:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// sth r10,8(r11)
	PPC_STORE_U16(ctx.r11.u32 + 8, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832439D0"))) PPC_WEAK_FUNC(sub_832439D0);
PPC_FUNC_IMPL(__imp__sub_832439D0) {
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
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x83209aa8
	ctx.lr = 0x832439E4;
	sub_83209AA8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// sth r11,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r11.u16);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83243A00"))) PPC_WEAK_FUNC(sub_83243A00);
PPC_FUNC_IMPL(__imp__sub_83243A00) {
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
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lis r11,6815
	ctx.r11.s64 = 446627840;
	// lis r8,1572
	ctx.r8.s64 = 103022592;
	// ori r7,r11,48759
	ctx.r7.u64 = ctx.r11.u64 | 48759;
	// ori r6,r8,56623
	ctx.r6.u64 = ctx.r8.u64 | 56623;
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// rldimi r7,r6,32,0
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r7.u64 & 0xFFFFFFFF);
	// mulhdu r11,r9,r7
	ctx.r11.u64 = ((unsigned __int128)ctx.r9.u64 * (unsigned __int128)ctx.r7.u64) >> 64;
	// subf r5,r11,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r11.s64;
	// rldicl r10,r5,63,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u64, 63) & 0x7FFFFFFFFFFFFFFF;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rldicl r11,r4,55,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u64, 55) & 0x7FFFFFFFFFFFFF;
	// mulli r10,r11,1000
	ctx.r10.s64 = ctx.r11.s64 * 1000;
	// subf r30,r10,r9
	ctx.r30.s64 = ctx.r9.s64 - ctx.r10.s64;
	// beq cr6,0x83243a74
	if (cr6.eq) goto loc_83243A74;
	// bl 0x83298ea0
	ctx.lr = 0x83243A60;
	sub_83298EA0(ctx, base);
	// clrldi r8,r3,32
	ctx.r8.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// mulli r10,r8,1000
	ctx.r10.s64 = ctx.r8.s64 * 1000;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x83243a88
	goto loc_83243A88;
loc_83243A74:
	// bl 0x83298de8
	ctx.lr = 0x83243A78;
	sub_83298DE8(ctx, base);
	// clrldi r8,r3,32
	ctx.r8.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// extsw r10,r30
	ctx.r10.s64 = ctx.r30.s32;
	// mulli r11,r8,1000
	ctx.r11.s64 = ctx.r8.s64 * 1000;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_83243A88:
	// std r7,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83243AA4"))) PPC_WEAK_FUNC(sub_83243AA4);
PPC_FUNC_IMPL(__imp__sub_83243AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83243AA8"))) PPC_WEAK_FUNC(sub_83243AA8);
PPC_FUNC_IMPL(__imp__sub_83243AA8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// li r10,1000
	ctx.r10.s64 = 1000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// divdu r9,r11,r10
	ctx.r9.u64 = PPCDivide(ctx.r11.u64, ctx.r10.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rotlwi r4,r9,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// beq cr6,0x83243ae8
	if (cr6.eq) goto loc_83243AE8;
	// bl 0x83298e68
	ctx.lr = 0x83243AE4;
	sub_83298E68(ctx, base);
	// b 0x83243aec
	goto loc_83243AEC;
loc_83243AE8:
	// bl 0x83298cb0
	ctx.lr = 0x83243AEC;
	sub_83298CB0(ctx, base);
loc_83243AEC:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lhz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// ori r8,r10,8400
	ctx.r8.u64 = ctx.r10.u64 | 8400;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// sraw r6,r8,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r6.s64 = ctx.r8.s32 >> temp.u32;
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// addi r30,r9,1900
	ctx.r30.s64 = ctx.r9.s64 + 1900;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83243b20
	if (cr6.eq) goto loc_83243B20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x83243B20;
	sub_83222030(ctx, base);
loc_83243B20:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
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

__attribute__((alias("__imp__sub_83243B44"))) PPC_WEAK_FUNC(sub_83243B44);
PPC_FUNC_IMPL(__imp__sub_83243B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83243B48"))) PPC_WEAK_FUNC(sub_83243B48);
PPC_FUNC_IMPL(__imp__sub_83243B48) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// li r10,1000
	ctx.r10.s64 = 1000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// divdu r9,r11,r10
	ctx.r9.u64 = PPCDivide(ctx.r11.u64, ctx.r10.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rotlwi r4,r9,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// beq cr6,0x83243b88
	if (cr6.eq) goto loc_83243B88;
	// bl 0x83298e68
	ctx.lr = 0x83243B84;
	sub_83298E68(ctx, base);
	// b 0x83243b8c
	goto loc_83243B8C;
loc_83243B88:
	// bl 0x83298cb0
	ctx.lr = 0x83243B8C;
	sub_83298CB0(ctx, base);
loc_83243B8C:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lbz r30,92(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 92);
	// ori r8,r10,8400
	ctx.r8.u64 = ctx.r10.u64 | 8400;
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// sraw r6,r8,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r6.s64 = ctx.r8.s32 >> temp.u32;
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83243bb8
	if (cr6.eq) goto loc_83243BB8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x83243BB8;
	sub_83222030(ctx, base);
loc_83243BB8:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
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

__attribute__((alias("__imp__sub_83243BDC"))) PPC_WEAK_FUNC(sub_83243BDC);
PPC_FUNC_IMPL(__imp__sub_83243BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83243BE0"))) PPC_WEAK_FUNC(sub_83243BE0);
PPC_FUNC_IMPL(__imp__sub_83243BE0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// li r10,1000
	ctx.r10.s64 = 1000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// divdu r9,r11,r10
	ctx.r9.u64 = PPCDivide(ctx.r11.u64, ctx.r10.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rotlwi r4,r9,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// beq cr6,0x83243c20
	if (cr6.eq) goto loc_83243C20;
	// bl 0x83298e68
	ctx.lr = 0x83243C1C;
	sub_83298E68(ctx, base);
	// b 0x83243c24
	goto loc_83243C24;
loc_83243C20:
	// bl 0x83298cb0
	ctx.lr = 0x83243C24;
	sub_83298CB0(ctx, base);
loc_83243C24:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lbz r30,91(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 91);
	// ori r8,r10,8400
	ctx.r8.u64 = ctx.r10.u64 | 8400;
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// sraw r6,r8,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r6.s64 = ctx.r8.s32 >> temp.u32;
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83243c50
	if (cr6.eq) goto loc_83243C50;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x83243C50;
	sub_83222030(ctx, base);
loc_83243C50:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
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

__attribute__((alias("__imp__sub_83243C74"))) PPC_WEAK_FUNC(sub_83243C74);
PPC_FUNC_IMPL(__imp__sub_83243C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83243C78"))) PPC_WEAK_FUNC(sub_83243C78);
PPC_FUNC_IMPL(__imp__sub_83243C78) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// li r10,1000
	ctx.r10.s64 = 1000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// divdu r9,r11,r10
	ctx.r9.u64 = PPCDivide(ctx.r11.u64, ctx.r10.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rotlwi r4,r9,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// beq cr6,0x83243cb8
	if (cr6.eq) goto loc_83243CB8;
	// bl 0x83298e68
	ctx.lr = 0x83243CB4;
	sub_83298E68(ctx, base);
	// b 0x83243cbc
	goto loc_83243CBC;
loc_83243CB8:
	// bl 0x83298cb0
	ctx.lr = 0x83243CBC;
	sub_83298CB0(ctx, base);
loc_83243CBC:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lbz r30,93(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 93);
	// ori r8,r10,8400
	ctx.r8.u64 = ctx.r10.u64 | 8400;
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// sraw r6,r8,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r6.s64 = ctx.r8.s32 >> temp.u32;
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83243ce8
	if (cr6.eq) goto loc_83243CE8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x83243CE8;
	sub_83222030(ctx, base);
loc_83243CE8:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
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

__attribute__((alias("__imp__sub_83243D0C"))) PPC_WEAK_FUNC(sub_83243D0C);
PPC_FUNC_IMPL(__imp__sub_83243D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83243D10"))) PPC_WEAK_FUNC(sub_83243D10);
PPC_FUNC_IMPL(__imp__sub_83243D10) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// li r10,1000
	ctx.r10.s64 = 1000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// divdu r9,r11,r10
	ctx.r9.u64 = PPCDivide(ctx.r11.u64, ctx.r10.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rotlwi r4,r9,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// beq cr6,0x83243d50
	if (cr6.eq) goto loc_83243D50;
	// bl 0x83298e68
	ctx.lr = 0x83243D4C;
	sub_83298E68(ctx, base);
	// b 0x83243d54
	goto loc_83243D54;
loc_83243D50:
	// bl 0x83298cb0
	ctx.lr = 0x83243D54;
	sub_83298CB0(ctx, base);
loc_83243D54:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lbz r30,90(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 90);
	// ori r8,r10,8400
	ctx.r8.u64 = ctx.r10.u64 | 8400;
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// sraw r6,r8,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r6.s64 = ctx.r8.s32 >> temp.u32;
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83243d80
	if (cr6.eq) goto loc_83243D80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x83243D80;
	sub_83222030(ctx, base);
loc_83243D80:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
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

__attribute__((alias("__imp__sub_83243DA4"))) PPC_WEAK_FUNC(sub_83243DA4);
PPC_FUNC_IMPL(__imp__sub_83243DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83243DA8"))) PPC_WEAK_FUNC(sub_83243DA8);
PPC_FUNC_IMPL(__imp__sub_83243DA8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// li r10,1000
	ctx.r10.s64 = 1000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// divdu r9,r11,r10
	ctx.r9.u64 = PPCDivide(ctx.r11.u64, ctx.r10.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rotlwi r4,r9,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// beq cr6,0x83243de8
	if (cr6.eq) goto loc_83243DE8;
	// bl 0x83298e68
	ctx.lr = 0x83243DE4;
	sub_83298E68(ctx, base);
	// b 0x83243dec
	goto loc_83243DEC;
loc_83243DE8:
	// bl 0x83298cb0
	ctx.lr = 0x83243DEC;
	sub_83298CB0(ctx, base);
loc_83243DEC:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lbz r30,89(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 89);
	// ori r8,r10,8400
	ctx.r8.u64 = ctx.r10.u64 | 8400;
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// sraw r6,r8,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r6.s64 = ctx.r8.s32 >> temp.u32;
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83243e18
	if (cr6.eq) goto loc_83243E18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x83243E18;
	sub_83222030(ctx, base);
loc_83243E18:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
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

__attribute__((alias("__imp__sub_83243E3C"))) PPC_WEAK_FUNC(sub_83243E3C);
PPC_FUNC_IMPL(__imp__sub_83243E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83243E40"))) PPC_WEAK_FUNC(sub_83243E40);
PPC_FUNC_IMPL(__imp__sub_83243E40) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// li r10,1000
	ctx.r10.s64 = 1000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// divdu r9,r11,r10
	ctx.r9.u64 = PPCDivide(ctx.r11.u64, ctx.r10.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rotlwi r4,r9,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// beq cr6,0x83243e80
	if (cr6.eq) goto loc_83243E80;
	// bl 0x83298e68
	ctx.lr = 0x83243E7C;
	sub_83298E68(ctx, base);
	// b 0x83243e84
	goto loc_83243E84;
loc_83243E80:
	// bl 0x83298cb0
	ctx.lr = 0x83243E84;
	sub_83298CB0(ctx, base);
loc_83243E84:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lbz r30,88(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// ori r8,r10,8400
	ctx.r8.u64 = ctx.r10.u64 | 8400;
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// sraw r6,r8,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r6.s64 = ctx.r8.s32 >> temp.u32;
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83243eb0
	if (cr6.eq) goto loc_83243EB0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x83243EB0;
	sub_83222030(ctx, base);
loc_83243EB0:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
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

__attribute__((alias("__imp__sub_83243ED4"))) PPC_WEAK_FUNC(sub_83243ED4);
PPC_FUNC_IMPL(__imp__sub_83243ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83243ED8"))) PPC_WEAK_FUNC(sub_83243ED8);
PPC_FUNC_IMPL(__imp__sub_83243ED8) {
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
	// lis r11,6815
	ctx.r11.s64 = 446627840;
	// ld r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// lis r8,1572
	ctx.r8.s64 = 103022592;
	// lhz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// ori r6,r11,48759
	ctx.r6.u64 = ctx.r11.u64 | 48759;
	// ori r5,r8,56623
	ctx.r5.u64 = ctx.r8.u64 | 56623;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// rldimi r6,r5,32,0
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r6.u64 & 0xFFFFFFFF);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// mulhdu r11,r9,r6
	ctx.r11.u64 = ((unsigned __int128)ctx.r9.u64 * (unsigned __int128)ctx.r6.u64) >> 64;
	// ori r3,r4,8400
	ctx.r3.u64 = ctx.r4.u64 | 8400;
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// sraw r7,r3,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r3.s32 < 0) & (((ctx.r3.s32 >> temp.u32) << temp.u32) != ctx.r3.s32);
	ctx.r7.s64 = ctx.r3.s32 >> temp.u32;
	// rldicl r10,r8,63,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0x7FFFFFFFFFFFFFFF;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// rldicl r4,r5,55,9
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u64, 55) & 0x7FFFFFFFFFFFFF;
	// mulli r3,r4,1000
	ctx.r3.s64 = ctx.r4.s64 * 1000;
	// subf r11,r3,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r3.s64;
	// rotlwi r30,r11,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// beq cr6,0x83243f50
	if (cr6.eq) goto loc_83243F50;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x83243F50;
	sub_83222030(ctx, base);
loc_83243F50:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83243F74"))) PPC_WEAK_FUNC(sub_83243F74);
PPC_FUNC_IMPL(__imp__sub_83243F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83243F78"))) PPC_WEAK_FUNC(sub_83243F78);
PPC_FUNC_IMPL(__imp__sub_83243F78) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83297c60
	ctx.lr = 0x83243F98;
	sub_83297C60(ctx, base);
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// ori r8,r10,8400
	ctx.r8.u64 = ctx.r10.u64 | 8400;
	// li r7,-60
	ctx.r7.s64 = -60;
	// sraw r6,r8,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r6.s64 = ctx.r8.s32 >> temp.u32;
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// divw r30,r3,r7
	ctx.r30.s32 = PPCDivide(ctx.r3.s32, ctx.r7.s32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83243fc8
	if (cr6.eq) goto loc_83243FC8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x83243FC8;
	sub_83222030(ctx, base);
loc_83243FC8:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83243FEC"))) PPC_WEAK_FUNC(sub_83243FEC);
PPC_FUNC_IMPL(__imp__sub_83243FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83243FF0"))) PPC_WEAK_FUNC(sub_83243FF0);
PPC_FUNC_IMPL(__imp__sub_83243FF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83243FF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x83222578
	ctx.lr = 0x8324400C;
	sub_83222578(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// li r10,1000
	ctx.r10.s64 = 1000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// divdu r9,r11,r10
	ctx.r9.u64 = PPCDivide(ctx.r11.u64, ctx.r10.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rotlwi r4,r9,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// beq cr6,0x83244038
	if (cr6.eq) goto loc_83244038;
	// bl 0x83298e68
	ctx.lr = 0x83244034;
	sub_83298E68(ctx, base);
	// b 0x8324403c
	goto loc_8324403C;
loc_83244038:
	// bl 0x83298cb0
	ctx.lr = 0x8324403C;
	sub_83298CB0(ctx, base);
loc_8324403C:
	// stb r29,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r29.u8);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83243a00
	ctx.lr = 0x83244050;
	sub_83243A00(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83244058"))) PPC_WEAK_FUNC(sub_83244058);
PPC_FUNC_IMPL(__imp__sub_83244058) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83244060;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83244088
	if (cr6.eq) goto loc_83244088;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,13060
	ctx.r3.s64 = ctx.r11.s64 + 13060;
	// bl 0x8320d088
	ctx.lr = 0x83244088;
	sub_8320D088(ctx, base);
loc_83244088:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// blt cr6,0x832440c8
	if (cr6.lt) goto loc_832440C8;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
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
	// bl 0x83243ff0
	ctx.lr = 0x832440BC;
	sub_83243FF0(ctx, base);
	// ld r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x832238c0
	ctx.lr = 0x832440C8;
	sub_832238C0(ctx, base);
loc_832440C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832440D0"))) PPC_WEAK_FUNC(sub_832440D0);
PPC_FUNC_IMPL(__imp__sub_832440D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832440D8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// bl 0x83222578
	ctx.lr = 0x832440F4;
	sub_83222578(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// li r10,1000
	ctx.r10.s64 = 1000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ld r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// divdu r9,r11,r10
	ctx.r9.u64 = PPCDivide(ctx.r11.u64, ctx.r10.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rotlwi r4,r9,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// beq cr6,0x83244120
	if (cr6.eq) goto loc_83244120;
	// bl 0x83298e68
	ctx.lr = 0x8324411C;
	sub_83298E68(ctx, base);
	// b 0x83244124
	goto loc_83244124;
loc_83244120:
	// bl 0x83298cb0
	ctx.lr = 0x83244124;
	sub_83298CB0(ctx, base);
loc_83244124:
	// addis r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 65536;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// addi r11,r11,-1900
	ctx.r11.s64 = ctx.r11.s64 + -1900;
	// sth r11,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r11.u16);
	// beq cr6,0x83244158
	if (cr6.eq) goto loc_83244158;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222578
	ctx.lr = 0x83244140;
	sub_83222578(ctx, base);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// stb r3,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r3.u8);
	// beq cr6,0x83244158
	if (cr6.eq) goto loc_83244158;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83222578
	ctx.lr = 0x83244154;
	sub_83222578(ctx, base);
	// stb r3,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r3.u8);
loc_83244158:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83243a00
	ctx.lr = 0x83244168;
	sub_83243A00(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83244170"))) PPC_WEAK_FUNC(sub_83244170);
PPC_FUNC_IMPL(__imp__sub_83244170) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83244178;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x832441b0
	if (cr6.eq) goto loc_832441B0;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x832441b0
	if (cr6.eq) goto loc_832441B0;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x832441b0
	if (cr6.eq) goto loc_832441B0;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,13060
	ctx.r3.s64 = ctx.r11.s64 + 13060;
	// bl 0x8320d088
	ctx.lr = 0x832441B0;
	sub_8320D088(ctx, base);
loc_832441B0:
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// blt cr6,0x83244214
	if (cr6.lt) goto loc_83244214;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// li r6,0
	ctx.r6.s64 = 0;
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// subf r4,r10,r7
	ctx.r4.s64 = ctx.r7.s64 - ctx.r10.s64;
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blt cr6,0x832441fc
	if (cr6.lt) goto loc_832441FC;
	// addi r5,r4,8
	ctx.r5.s64 = ctx.r4.s64 + 8;
	// cmpwi cr6,r9,3
	cr6.compare<int32_t>(ctx.r9.s32, 3, xer);
	// blt cr6,0x832441fc
	if (cr6.lt) goto loc_832441FC;
	// addi r6,r5,8
	ctx.r6.s64 = ctx.r5.s64 + 8;
loc_832441FC:
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832440d0
	ctx.lr = 0x83244208;
	sub_832440D0(ctx, base);
	// ld r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x832238c0
	ctx.lr = 0x83244214;
	sub_832238C0(ctx, base);
loc_83244214:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8324421C"))) PPC_WEAK_FUNC(sub_8324421C);
PPC_FUNC_IMPL(__imp__sub_8324421C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83244220"))) PPC_WEAK_FUNC(sub_83244220);
PPC_FUNC_IMPL(__imp__sub_83244220) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83244228;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x83222578
	ctx.lr = 0x8324423C;
	sub_83222578(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// li r10,1000
	ctx.r10.s64 = 1000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// divdu r9,r11,r10
	ctx.r9.u64 = PPCDivide(ctx.r11.u64, ctx.r10.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rotlwi r4,r9,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// beq cr6,0x83244268
	if (cr6.eq) goto loc_83244268;
	// bl 0x83298e68
	ctx.lr = 0x83244264;
	sub_83298E68(ctx, base);
	// b 0x8324426c
	goto loc_8324426C;
loc_83244268:
	// bl 0x83298cb0
	ctx.lr = 0x8324426C;
	sub_83298CB0(ctx, base);
loc_8324426C:
	// stb r29,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r29.u8);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83243a00
	ctx.lr = 0x83244280;
	sub_83243A00(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83244288"))) PPC_WEAK_FUNC(sub_83244288);
PPC_FUNC_IMPL(__imp__sub_83244288) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83244290;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x83222578
	ctx.lr = 0x832442A4;
	sub_83222578(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// li r10,1000
	ctx.r10.s64 = 1000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// divdu r9,r11,r10
	ctx.r9.u64 = PPCDivide(ctx.r11.u64, ctx.r10.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rotlwi r4,r9,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// beq cr6,0x832442d0
	if (cr6.eq) goto loc_832442D0;
	// bl 0x83298e68
	ctx.lr = 0x832442CC;
	sub_83298E68(ctx, base);
	// b 0x832442d4
	goto loc_832442D4;
loc_832442D0:
	// bl 0x83298cb0
	ctx.lr = 0x832442D4;
	sub_83298CB0(ctx, base);
loc_832442D4:
	// stb r29,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r29.u8);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83243a00
	ctx.lr = 0x832442E8;
	sub_83243A00(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832442F0"))) PPC_WEAK_FUNC(sub_832442F0);
PPC_FUNC_IMPL(__imp__sub_832442F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832442F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x83222578
	ctx.lr = 0x8324430C;
	sub_83222578(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// li r10,1000
	ctx.r10.s64 = 1000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// divdu r9,r11,r10
	ctx.r9.u64 = PPCDivide(ctx.r11.u64, ctx.r10.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rotlwi r4,r9,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// beq cr6,0x83244338
	if (cr6.eq) goto loc_83244338;
	// bl 0x83298e68
	ctx.lr = 0x83244334;
	sub_83298E68(ctx, base);
	// b 0x8324433c
	goto loc_8324433C;
loc_83244338:
	// bl 0x83298cb0
	ctx.lr = 0x8324433C;
	sub_83298CB0(ctx, base);
loc_8324433C:
	// stb r29,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r29.u8);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83243a00
	ctx.lr = 0x83244350;
	sub_83243A00(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83244358"))) PPC_WEAK_FUNC(sub_83244358);
PPC_FUNC_IMPL(__imp__sub_83244358) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// bl 0x83222578
	ctx.lr = 0x83244374;
	sub_83222578(ctx, base);
	// lis r11,4194
	ctx.r11.s64 = 274857984;
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// li r8,1000
	ctx.r8.s64 = 1000;
	// ori r9,r11,19923
	ctx.r9.u64 = ctx.r11.u64 | 19923;
	// divdu r6,r10,r8
	ctx.r6.u64 = PPCDivide(ctx.r10.u64, ctx.r8.u64);
	// mulhw r7,r3,r9
	ctx.r7.s64 = (int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32)) >> 32;
	// srawi r11,r7,6
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 6;
	// mulli r9,r6,1000
	ctx.r9.s64 = ctx.r6.s64 * 1000;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r4,r5,1000
	ctx.r4.s64 = ctx.r5.s64 * 1000;
	// subf r3,r4,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r4.s64;
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
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

__attribute__((alias("__imp__sub_832443C4"))) PPC_WEAK_FUNC(sub_832443C4);
PPC_FUNC_IMPL(__imp__sub_832443C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832443C8"))) PPC_WEAK_FUNC(sub_832443C8);
PPC_FUNC_IMPL(__imp__sub_832443C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832443D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// blt cr6,0x832443f4
	if (cr6.lt) goto loc_832443F4;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// ble cr6,0x83244404
	if (!cr6.gt) goto loc_83244404;
loc_832443F4:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,13060
	ctx.r3.s64 = ctx.r11.s64 + 13060;
	// bl 0x8320d088
	ctx.lr = 0x83244404;
	sub_8320D088(ctx, base);
loc_83244404:
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// blt cr6,0x832444a0
	if (cr6.lt) goto loc_832444A0;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
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
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83244220
	ctx.lr = 0x8324443C;
	sub_83244220(ctx, base);
	// lwz r6,28(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r6,2
	cr6.compare<int32_t>(ctx.r6.s32, 2, xer);
	// blt cr6,0x8324445c
	if (cr6.lt) goto loc_8324445C;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83244288
	ctx.lr = 0x8324445C;
	sub_83244288(ctx, base);
loc_8324445C:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// blt cr6,0x8324447c
	if (cr6.lt) goto loc_8324447C;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832442f0
	ctx.lr = 0x8324447C;
	sub_832442F0(ctx, base);
loc_8324447C:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// blt cr6,0x83244494
	if (cr6.lt) goto loc_83244494;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83244358
	ctx.lr = 0x83244494;
	sub_83244358(ctx, base);
loc_83244494:
	// ld r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x832238c0
	ctx.lr = 0x832444A0;
	sub_832238C0(ctx, base);
loc_832444A0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832444A8"))) PPC_WEAK_FUNC(sub_832444A8);
PPC_FUNC_IMPL(__imp__sub_832444A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832444B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x832444d8
	if (cr6.eq) goto loc_832444D8;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,13060
	ctx.r3.s64 = ctx.r11.s64 + 13060;
	// bl 0x8320d088
	ctx.lr = 0x832444D8;
	sub_8320D088(ctx, base);
loc_832444D8:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// blt cr6,0x83244518
	if (cr6.lt) goto loc_83244518;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
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
	// bl 0x83244288
	ctx.lr = 0x8324450C;
	sub_83244288(ctx, base);
	// ld r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x832238c0
	ctx.lr = 0x83244518;
	sub_832238C0(ctx, base);
loc_83244518:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83244520"))) PPC_WEAK_FUNC(sub_83244520);
PPC_FUNC_IMPL(__imp__sub_83244520) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83244528;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x83222578
	ctx.lr = 0x8324453C;
	sub_83222578(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// li r10,1000
	ctx.r10.s64 = 1000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// divdu r9,r11,r10
	ctx.r9.u64 = PPCDivide(ctx.r11.u64, ctx.r10.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rotlwi r4,r9,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// beq cr6,0x83244568
	if (cr6.eq) goto loc_83244568;
	// bl 0x83298e68
	ctx.lr = 0x83244564;
	sub_83298E68(ctx, base);
	// b 0x8324456c
	goto loc_8324456C;
loc_83244568:
	// bl 0x83298cb0
	ctx.lr = 0x8324456C;
	sub_83298CB0(ctx, base);
loc_8324456C:
	// stb r29,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r29.u8);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83243a00
	ctx.lr = 0x83244580;
	sub_83243A00(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83244588"))) PPC_WEAK_FUNC(sub_83244588);
PPC_FUNC_IMPL(__imp__sub_83244588) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83244590;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x832445b8
	if (cr6.eq) goto loc_832445B8;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,13060
	ctx.r3.s64 = ctx.r11.s64 + 13060;
	// bl 0x8320d088
	ctx.lr = 0x832445B8;
	sub_8320D088(ctx, base);
loc_832445B8:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// blt cr6,0x832445f8
	if (cr6.lt) goto loc_832445F8;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
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
	// bl 0x83244520
	ctx.lr = 0x832445EC;
	sub_83244520(ctx, base);
	// ld r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x832238c0
	ctx.lr = 0x832445F8;
	sub_832238C0(ctx, base);
loc_832445F8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83244600"))) PPC_WEAK_FUNC(sub_83244600);
PPC_FUNC_IMPL(__imp__sub_83244600) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83244608;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83244630
	if (cr6.eq) goto loc_83244630;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,13060
	ctx.r3.s64 = ctx.r11.s64 + 13060;
	// bl 0x8320d088
	ctx.lr = 0x83244630;
	sub_8320D088(ctx, base);
loc_83244630:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// blt cr6,0x83244670
	if (cr6.lt) goto loc_83244670;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
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
	// bl 0x832442f0
	ctx.lr = 0x83244664;
	sub_832442F0(ctx, base);
	// ld r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x832238c0
	ctx.lr = 0x83244670;
	sub_832238C0(ctx, base);
loc_83244670:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83244678"))) PPC_WEAK_FUNC(sub_83244678);
PPC_FUNC_IMPL(__imp__sub_83244678) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83244680;
	__savegprlr_25(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// li r10,1000
	ctx.r10.s64 = 1000;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// divdu r9,r11,r10
	ctx.r9.u64 = PPCDivide(ctx.r11.u64, ctx.r10.u64);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rotlwi r4,r9,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r31,1
	ctx.r31.s64 = 1;
	// bl 0x83298e68
	ctx.lr = 0x832446A8;
	sub_83298E68(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x832446bc
	if (!cr6.lt) goto loc_832446BC;
	// li r31,-1
	ctx.r31.s64 = -1;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
loc_832446BC:
	// li r7,60
	ctx.r7.s64 = 60;
	// lis r10,-30584
	ctx.r10.s64 = -2004353024;
	// divw r11,r11,r7
	ctx.r11.s32 = PPCDivide(ctx.r11.s32, ctx.r7.s32);
	// ori r9,r10,34953
	ctx.r9.u64 = ctx.r10.u64 | 34953;
	// li r10,16
	ctx.r10.s64 = 16;
	// mulhw r9,r11,r9
	ctx.r9.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32)) >> 32;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// srawi r10,r6,5
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 5;
	// divw r7,r11,r7
	ctx.r7.s32 = PPCDivide(ctx.r11.s32, ctx.r7.s32);
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r8,-4
	ctx.r10.s64 = ctx.r8.s64 + -4;
	// mulli r4,r5,60
	ctx.r4.s64 = ctx.r5.s64 * 60;
	// subf r9,r4,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r4.s64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83244700:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83244700
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83244700;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// li r8,43
	ctx.r8.s64 = 43;
	// bgt cr6,0x83244718
	if (cr6.gt) goto loc_83244718;
	// li r8,45
	ctx.r8.s64 = 45;
loc_83244718:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lbz r6,140(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 140);
	// lbz r4,141(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 141);
	// lis r5,-32221
	ctx.r5.s64 = -2111635456;
	// addi r11,r11,8216
	ctx.r11.s64 = ctx.r11.s64 + 8216;
	// lbz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 136);
	// rotlwi r6,r6,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 2);
	// lhz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// addi r31,r11,-48
	ctx.r31.s64 = ctx.r11.s64 + -48;
	// lbz r28,137(r1)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r1.u32 + 137);
	// rotlwi r4,r4,2
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r4.u32, 2);
	// lbz r27,138(r1)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r1.u32 + 138);
	// addi r10,r10,1900
	ctx.r10.s64 = ctx.r10.s64 + 1900;
	// lbz r26,139(r1)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r1.u32 + 139);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// extsb r25,r8
	ctx.r25.s64 = ctx.r8.s8;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// lwzx r7,r6,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// addi r5,r5,13068
	ctx.r5.s64 = ctx.r5.s64 + 13068;
	// lwzx r6,r4,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83297a40
	ctx.lr = 0x83244790;
	sub_83297A40(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x832447a8
	if (!cr6.eq) goto loc_832447A8;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83209c20
	ctx.lr = 0x832447A0;
	sub_83209C20(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_832447A8:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83255c58
	ctx.lr = 0x832447BC;
	sub_83255C58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832447C8"))) PPC_WEAK_FUNC(sub_832447C8);
PPC_FUNC_IMPL(__imp__sub_832447C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x832447D0;
	__savegprlr_26(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// li r10,1000
	ctx.r10.s64 = 1000;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// divdu r9,r11,r10
	ctx.r9.u64 = PPCDivide(ctx.r11.u64, ctx.r10.u64);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// rotlwi r4,r9,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x83298e68
	ctx.lr = 0x832447F4;
	sub_83298E68(ctx, base);
	// lbz r6,122(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 122);
	// li r9,12
	ctx.r9.s64 = 12;
	// li r8,-1
	ctx.r8.s64 = -1;
	// subfc r11,r9,r6
	xer.ca = ctx.r6.u32 >= ctx.r9.u32;
	ctx.r11.s64 = ctx.r6.s64 - ctx.r9.s64;
	// subfze r11,r8
	temp.u8 = ~ctx.r8.u32 + xer.ca < xer.ca;
	ctx.r11.u64 = ~ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// subfic r5,r7,0
	xer.ca = ctx.r7.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r7.s64;
	// subfe r3,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r3,r9
	ctx.r11.u64 = ctx.r3.u64 & ctx.r9.u64;
	// subf. r10,r11,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r11.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x83244824
	if (!cr0.eq) goto loc_83244824;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_83244824:
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r11,r1,124
	ctx.r11.s64 = ctx.r1.s64 + 124;
	// li r8,0
	ctx.r8.s64 = 0;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83244834:
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83244834
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83244834;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83244850
	if (cr6.eq) goto loc_83244850;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r8,r11,6464
	ctx.r8.s64 = ctx.r11.s64 + 6464;
	// b 0x83244858
	goto loc_83244858;
loc_83244850:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r8,r11,6468
	ctx.r8.s64 = ctx.r11.s64 + 6468;
loc_83244858:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lbz r9,124(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 124);
	// lbz r7,125(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 125);
	// lis r6,-32221
	ctx.r6.s64 = -2111635456;
	// addi r11,r11,8216
	ctx.r11.s64 = ctx.r11.s64 + 8216;
	// lbz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 120);
	// rotlwi r3,r9,2
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// lhz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r28,r11,-48
	ctx.r28.s64 = ctx.r11.s64 + -48;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// lbz r29,121(r1)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r1.u32 + 121);
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// rotlwi r27,r7,2
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// lbz r26,123(r1)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r1.u32 + 123);
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwzx r7,r3,r28
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r28.u32);
	// addi r5,r6,13112
	ctx.r5.s64 = ctx.r6.s64 + 13112;
	// addi r9,r9,1900
	ctx.r9.s64 = ctx.r9.s64 + 1900;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// lwzx r6,r27,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83297a40
	ctx.lr = 0x832448C0;
	sub_83297A40(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x832448d8
	if (!cr6.eq) goto loc_832448D8;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83209c20
	ctx.lr = 0x832448D0;
	sub_83209C20(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_832448D8:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83255c58
	ctx.lr = 0x832448EC;
	sub_83255C58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832448F8"))) PPC_WEAK_FUNC(sub_832448F8);
PPC_FUNC_IMPL(__imp__sub_832448F8) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// li r10,1000
	ctx.r10.s64 = 1000;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// divdu r9,r11,r10
	ctx.r9.u64 = PPCDivide(ctx.r11.u64, ctx.r10.u64);
	// li r31,1
	ctx.r31.s64 = 1;
	// rotlwi r4,r9,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// bl 0x83298e68
	ctx.lr = 0x83244924;
	sub_83298E68(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x83244938
	if (!cr6.lt) goto loc_83244938;
	// li r31,-1
	ctx.r31.s64 = -1;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
loc_83244938:
	// li r7,60
	ctx.r7.s64 = 60;
	// lis r10,-30584
	ctx.r10.s64 = -2004353024;
	// divw r11,r11,r7
	ctx.r11.s32 = PPCDivide(ctx.r11.s32, ctx.r7.s32);
	// ori r9,r10,34953
	ctx.r9.u64 = ctx.r10.u64 | 34953;
	// li r10,16
	ctx.r10.s64 = 16;
	// mulhw r9,r11,r9
	ctx.r9.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32)) >> 32;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// srawi r9,r8,5
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 5;
	// divw r10,r11,r7
	ctx.r10.s32 = PPCDivide(ctx.r11.s32, ctx.r7.s32);
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r9,r6,-4
	ctx.r9.s64 = ctx.r6.s64 + -4;
	// mulli r6,r7,60
	ctx.r6.s64 = ctx.r7.s64 * 60;
	// subf r8,r6,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r6.s64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8324497C:
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x8324497c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8324497C;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// li r11,43
	ctx.r11.s64 = 43;
	// bgt cr6,0x83244994
	if (cr6.gt) goto loc_83244994;
	// li r11,45
	ctx.r11.s64 = 45;
loc_83244994:
	// lbz r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 104);
	// lis r6,-32221
	ctx.r6.s64 = -2111635456;
	// lbz r4,105(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 105);
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// lbz r3,106(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 106);
	// addi r5,r6,13156
	ctx.r5.s64 = ctx.r6.s64 + 13156;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83297a40
	ctx.lr = 0x832449C8;
	sub_83297A40(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83209c20
	ctx.lr = 0x832449D0;
	sub_83209C20(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832449E4"))) PPC_WEAK_FUNC(sub_832449E4);
PPC_FUNC_IMPL(__imp__sub_832449E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832449E8"))) PPC_WEAK_FUNC(sub_832449E8);
PPC_FUNC_IMPL(__imp__sub_832449E8) {
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
	// lhz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,1867
	cr6.compare<uint32_t>(ctx.r11.u32, 1867, xer);
	// bgt cr6,0x83244ba4
	if (cr6.gt) goto loc_83244BA4;
	// beq cr6,0x83244b84
	if (cr6.eq) goto loc_83244B84;
	// cmplwi cr6,r11,1862
	cr6.compare<uint32_t>(ctx.r11.u32, 1862, xer);
	// bgt cr6,0x83244ae4
	if (cr6.gt) goto loc_83244AE4;
	// beq cr6,0x83244ac4
	if (cr6.eq) goto loc_83244AC4;
	// cmplwi cr6,r11,1859
	cr6.compare<uint32_t>(ctx.r11.u32, 1859, xer);
	// bgt cr6,0x83244a74
	if (cr6.gt) goto loc_83244A74;
	// beq cr6,0x83244a54
	if (cr6.eq) goto loc_83244A54;
	// cmplwi cr6,r11,1248
	cr6.compare<uint32_t>(ctx.r11.u32, 1248, xer);
	// bgt cr6,0x83244a40
	if (cr6.gt) goto loc_83244A40;
	// cmplwi cr6,r11,1246
	cr6.compare<uint32_t>(ctx.r11.u32, 1246, xer);
	// bge cr6,0x83244ce0
	if (!cr6.lt) goto loc_83244CE0;
	// cmplwi cr6,r11,1193
	cr6.compare<uint32_t>(ctx.r11.u32, 1193, xer);
	// blt cr6,0x83244a40
	if (cr6.lt) goto loc_83244A40;
	// cmplwi cr6,r11,1207
	cr6.compare<uint32_t>(ctx.r11.u32, 1207, xer);
	// ble cr6,0x83244ce0
	if (!cr6.gt) goto loc_83244CE0;
loc_83244A40:
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
loc_83244A54:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,12(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// bl 0x83243aa8
	ctx.lr = 0x83244A60;
	sub_83243AA8(ctx, base);
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
loc_83244A74:
	// cmplwi cr6,r11,1860
	cr6.compare<uint32_t>(ctx.r11.u32, 1860, xer);
	// beq cr6,0x83244aa4
	if (cr6.eq) goto loc_83244AA4;
	// cmplwi cr6,r11,1861
	cr6.compare<uint32_t>(ctx.r11.u32, 1861, xer);
	// bne cr6,0x83244a40
	if (!cr6.eq) goto loc_83244A40;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,12(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// bl 0x83243b48
	ctx.lr = 0x83244A90;
	sub_83243B48(ctx, base);
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
loc_83244AA4:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,12(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// bl 0x83243aa8
	ctx.lr = 0x83244AB0;
	sub_83243AA8(ctx, base);
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
loc_83244AC4:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,12(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// bl 0x83243b48
	ctx.lr = 0x83244AD0;
	sub_83243B48(ctx, base);
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
loc_83244AE4:
	// addi r11,r11,-1863
	ctx.r11.s64 = ctx.r11.s64 + -1863;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x83244a40
	if (cr6.gt) goto loc_83244A40;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83244b24
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83244B24;
	// bdzf 4*cr6+eq,0x83244b44
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83244B44;
	// bne cr6,0x83244b64
	if (!cr6.eq) goto loc_83244B64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,12(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// bl 0x83243be0
	ctx.lr = 0x83244B10;
	sub_83243BE0(ctx, base);
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
loc_83244B24:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,12(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// bl 0x83243be0
	ctx.lr = 0x83244B30;
	sub_83243BE0(ctx, base);
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
loc_83244B44:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,12(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// bl 0x83243c78
	ctx.lr = 0x83244B50;
	sub_83243C78(ctx, base);
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
loc_83244B64:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,12(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// bl 0x83243c78
	ctx.lr = 0x83244B70;
	sub_83243C78(ctx, base);
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
loc_83244B84:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,12(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// bl 0x83243d10
	ctx.lr = 0x83244B90;
	sub_83243D10(ctx, base);
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
loc_83244BA4:
	// cmplwi cr6,r11,2318
	cr6.compare<uint32_t>(ctx.r11.u32, 2318, xer);
	// bgt cr6,0x83244a40
	if (cr6.gt) goto loc_83244A40;
	// cmplwi cr6,r11,2304
	cr6.compare<uint32_t>(ctx.r11.u32, 2304, xer);
	// bge cr6,0x83244ce0
	if (!cr6.lt) goto loc_83244CE0;
	// addi r11,r11,-1868
	ctx.r11.s64 = ctx.r11.s64 + -1868;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bgt cr6,0x83244a40
	if (cr6.gt) goto loc_83244A40;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83244c08
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83244C08;
	// bdzf 4*cr6+eq,0x83244c28
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83244C28;
	// bdzf 4*cr6+eq,0x83244c48
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83244C48;
	// bdzf 4*cr6+eq,0x83244c68
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83244C68;
	// bdzf 4*cr6+eq,0x83244c88
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83244C88;
	// bdzf 4*cr6+eq,0x83244c88
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83244C88;
	// bdzf 4*cr6+eq,0x83244ca4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83244CA4;
	// bne cr6,0x83244cc0
	if (!cr6.eq) goto loc_83244CC0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,12(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// bl 0x83243d10
	ctx.lr = 0x83244BF4;
	sub_83243D10(ctx, base);
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
loc_83244C08:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,12(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// bl 0x83243da8
	ctx.lr = 0x83244C14;
	sub_83243DA8(ctx, base);
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
loc_83244C28:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,12(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// bl 0x83243da8
	ctx.lr = 0x83244C34;
	sub_83243DA8(ctx, base);
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
loc_83244C48:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,12(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// bl 0x83243e40
	ctx.lr = 0x83244C54;
	sub_83243E40(ctx, base);
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
loc_83244C68:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,12(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// bl 0x83243e40
	ctx.lr = 0x83244C74;
	sub_83243E40(ctx, base);
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
loc_83244C88:
	// lwz r4,12(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// bl 0x83243ed8
	ctx.lr = 0x83244C90;
	sub_83243ED8(ctx, base);
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
loc_83244CA4:
	// lwz r3,12(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// bl 0x83243f78
	ctx.lr = 0x83244CAC;
	sub_83243F78(ctx, base);
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
loc_83244CC0:
	// ld r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r3,12(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// bl 0x832238c0
	ctx.lr = 0x83244CCC;
	sub_832238C0(ctx, base);
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
loc_83244CE0:
	// li r4,136
	ctx.r4.s64 = 136;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x832430d8
	ctx.lr = 0x83244CEC;
	sub_832430D8(ctx, base);
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

__attribute__((alias("__imp__sub_83244D00"))) PPC_WEAK_FUNC(sub_83244D00);
PPC_FUNC_IMPL(__imp__sub_83244D00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83244D08;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// blt cr6,0x83244d24
	if (cr6.lt) goto loc_83244D24;
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// ble cr6,0x83244d34
	if (!cr6.gt) goto loc_83244D34;
loc_83244D24:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,13240
	ctx.r3.s64 = ctx.r11.s64 + 13240;
	// bl 0x8320d088
	ctx.lr = 0x83244D34;
	sub_8320D088(ctx, base);
loc_83244D34:
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// blt cr6,0x83244e80
	if (cr6.lt) goto loc_83244E80;
	// cmpwi cr6,r10,7
	cr6.compare<int32_t>(ctx.r10.s32, 7, xer);
	// bgt cr6,0x83244e80
	if (cr6.gt) goto loc_83244E80;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r29,0
	ctx.r29.s64 = 0;
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
	// bl 0x83294018
	ctx.lr = 0x83244D78;
	sub_83294018(ctx, base);
	// lwz r5,28(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// li r6,1
	ctx.r6.s64 = 1;
	// stb r6,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r6.u8);
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// blt cr6,0x83244db8
	if (cr6.lt) goto loc_83244DB8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222578
	ctx.lr = 0x83244D94;
	sub_83222578(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,100
	cr6.compare<uint32_t>(ctx.r11.u32, 100, xer);
	// bge cr6,0x83244da8
	if (!cr6.lt) goto loc_83244DA8;
	// addi r11,r11,1900
	ctx.r11.s64 = ctx.r11.s64 + 1900;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
loc_83244DA8:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// addi r10,r10,-1900
	ctx.r10.s64 = ctx.r10.s64 + -1900;
	// sth r10,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r10.u16);
loc_83244DB8:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// blt cr6,0x83244dd4
	if (cr6.lt) goto loc_83244DD4;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222578
	ctx.lr = 0x83244DD0;
	sub_83222578(ctx, base);
	// stb r3,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r3.u8);
loc_83244DD4:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// blt cr6,0x83244df0
	if (cr6.lt) goto loc_83244DF0;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222578
	ctx.lr = 0x83244DEC;
	sub_83222578(ctx, base);
	// stb r3,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r3.u8);
loc_83244DF0:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// blt cr6,0x83244e0c
	if (cr6.lt) goto loc_83244E0C;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222578
	ctx.lr = 0x83244E08;
	sub_83222578(ctx, base);
	// stb r3,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r3.u8);
loc_83244E0C:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// blt cr6,0x83244e28
	if (cr6.lt) goto loc_83244E28;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222578
	ctx.lr = 0x83244E24;
	sub_83222578(ctx, base);
	// stb r3,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r3.u8);
loc_83244E28:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// blt cr6,0x83244e44
	if (cr6.lt) goto loc_83244E44;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222578
	ctx.lr = 0x83244E40;
	sub_83222578(ctx, base);
	// stb r3,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r3.u8);
loc_83244E44:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// blt cr6,0x83244e5c
	if (cr6.lt) goto loc_83244E5C;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x83222578
	ctx.lr = 0x83244E58;
	sub_83222578(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_83244E5C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83298de8
	ctx.lr = 0x83244E64;
	sub_83298DE8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// extsw r10,r29
	ctx.r10.s64 = ctx.r29.s32;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// mulli r11,r9,1000
	ctx.r11.s64 = ctx.r9.s64 * 1000;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x832238c0
	ctx.lr = 0x83244E80;
	sub_832238C0(ctx, base);
loc_83244E80:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83244E8C"))) PPC_WEAK_FUNC(sub_83244E8C);
PPC_FUNC_IMPL(__imp__sub_83244E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83244E90"))) PPC_WEAK_FUNC(sub_83244E90);
PPC_FUNC_IMPL(__imp__sub_83244E90) {
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
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x83244ec0
	if (!cr6.eq) goto loc_83244EC0;
loc_83244EB8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83244f14
	goto loc_83244F14;
loc_83244EC0:
	// lis r30,-31772
	ctx.r30.s64 = -2082209792;
	// lwz r3,8164(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8164);
	// bl 0x83296d08
	ctx.lr = 0x83244ECC;
	sub_83296D08(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83244eb8
	if (cr6.eq) goto loc_83244EB8;
	// lbzu r11,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// lwz r3,8164(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8164);
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// bl 0x83296d08
	ctx.lr = 0x83244EE4;
	sub_83296D08(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83244f10
	if (cr6.eq) goto loc_83244F10;
loc_83244EEC:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83244f10
	if (cr6.eq) goto loc_83244F10;
	// lbzu r11,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// lwz r3,8164(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8164);
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// bl 0x83296d08
	ctx.lr = 0x83244F08;
	sub_83296D08(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83244eec
	if (!cr6.eq) goto loc_83244EEC;
loc_83244F10:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83244F14:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83244F2C"))) PPC_WEAK_FUNC(sub_83244F2C);
PPC_FUNC_IMPL(__imp__sub_83244F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83244F30"))) PPC_WEAK_FUNC(sub_83244F30);
PPC_FUNC_IMPL(__imp__sub_83244F30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(ctx.r11.s32, 48, xer);
	// blt cr6,0x83244f4c
	if (cr6.lt) goto loc_83244F4C;
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(ctx.r11.s32, 57, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x83244f50
	if (!cr6.gt) goto loc_83244F50;
loc_83244F4C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83244F50:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83244f64
	if (!cr6.eq) goto loc_83244F64;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83244F64:
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
loc_83244F68:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpwi cr6,r9,48
	cr6.compare<int32_t>(ctx.r9.s32, 48, xer);
	// blt cr6,0x83244f8c
	if (cr6.lt) goto loc_83244F8C;
	// cmpwi cr6,r9,57
	cr6.compare<int32_t>(ctx.r9.s32, 57, xer);
	// li r9,1
	ctx.r9.s64 = 1;
	// ble cr6,0x83244f90
	if (!cr6.gt) goto loc_83244F90;
loc_83244F8C:
	// li r9,0
	ctx.r9.s64 = 0;
loc_83244F90:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83244fb4
	if (cr6.eq) goto loc_83244FB4;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x83244f68
	goto loc_83244F68;
loc_83244FB4:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83244FBC"))) PPC_WEAK_FUNC(sub_83244FBC);
PPC_FUNC_IMPL(__imp__sub_83244FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83244FC0"))) PPC_WEAK_FUNC(sub_83244FC0);
PPC_FUNC_IMPL(__imp__sub_83244FC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,48
	cr6.compare<int32_t>(ctx.r10.s32, 48, xer);
	// blt cr6,0x83244fdc
	if (cr6.lt) goto loc_83244FDC;
	// cmpwi cr6,r10,57
	cr6.compare<int32_t>(ctx.r10.s32, 57, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x83244fe0
	if (!cr6.gt) goto loc_83244FE0;
loc_83244FDC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_83244FE0:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83244ff4
	if (!cr6.eq) goto loc_83244FF4;
loc_83244FEC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83244FF4:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
loc_83245000:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r7,r11,-48
	ctx.r7.s64 = ctx.r11.s64 + -48;
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(ctx.r11.s32, 48, xer);
	// blt cr6,0x83245024
	if (cr6.lt) goto loc_83245024;
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(ctx.r11.s32, 57, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x83245028
	if (!cr6.gt) goto loc_83245028;
loc_83245024:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83245028:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8324504c
	if (cr6.eq) goto loc_8324504C;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x83245000
	goto loc_83245000;
loc_8324504C:
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,58
	cr6.compare<int32_t>(ctx.r11.s32, 58, xer);
	// bne cr6,0x83244fec
	if (!cr6.eq) goto loc_83244FEC;
	// lbzu r10,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(ctx.r11.s32, 48, xer);
	// blt cr6,0x83245074
	if (cr6.lt) goto loc_83245074;
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(ctx.r11.s32, 57, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x83245078
	if (!cr6.gt) goto loc_83245078;
loc_83245074:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83245078:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8324515c
	if (cr6.eq) goto loc_8324515C;
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
loc_83245088:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r8,r11,-48
	ctx.r8.s64 = ctx.r11.s64 + -48;
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(ctx.r11.s32, 48, xer);
	// blt cr6,0x832450ac
	if (cr6.lt) goto loc_832450AC;
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(ctx.r11.s32, 57, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x832450b0
	if (!cr6.gt) goto loc_832450B0;
loc_832450AC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_832450B0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832450d4
	if (cr6.eq) goto loc_832450D4;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x83245088
	goto loc_83245088;
loc_832450D4:
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,58
	cr6.compare<int32_t>(ctx.r11.s32, 58, xer);
	// bne cr6,0x8324515c
	if (!cr6.eq) goto loc_8324515C;
	// lbzu r10,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(ctx.r11.s32, 48, xer);
	// blt cr6,0x832450fc
	if (cr6.lt) goto loc_832450FC;
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(ctx.r11.s32, 57, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x83245100
	if (!cr6.gt) goto loc_83245100;
loc_832450FC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83245100:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8324515c
	if (cr6.eq) goto loc_8324515C;
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
loc_83245110:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r9,r11,-48
	ctx.r9.s64 = ctx.r11.s64 + -48;
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(ctx.r11.s32, 48, xer);
	// blt cr6,0x83245134
	if (cr6.lt) goto loc_83245134;
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(ctx.r11.s32, 57, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x83245138
	if (!cr6.gt) goto loc_83245138;
loc_83245134:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83245138:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8324515c
	if (cr6.eq) goto loc_8324515C;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x83245110
	goto loc_83245110;
loc_8324515C:
	// cmpwi cr6,r7,70
	cr6.compare<int32_t>(ctx.r7.s32, 70, xer);
	// bge cr6,0x83244fec
	if (!cr6.lt) goto loc_83244FEC;
	// cmpwi cr6,r8,70
	cr6.compare<int32_t>(ctx.r8.s32, 70, xer);
	// bge cr6,0x83244fec
	if (!cr6.lt) goto loc_83244FEC;
	// cmpwi cr6,r9,70
	cr6.compare<int32_t>(ctx.r9.s32, 70, xer);
	// bge cr6,0x83244fec
	if (!cr6.lt) goto loc_83244FEC;
	// stw r7,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// stw r8,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83245184"))) PPC_WEAK_FUNC(sub_83245184);
PPC_FUNC_IMPL(__imp__sub_83245184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83245188"))) PPC_WEAK_FUNC(sub_83245188);
PPC_FUNC_IMPL(__imp__sub_83245188) {
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
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r11,6468
	ctx.r4.s64 = ctx.r11.s64 + 6468;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83296de8
	ctx.lr = 0x832451B4;
	sub_83296DE8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x832451cc
	if (!cr6.eq) goto loc_832451CC;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r31,2
	ctx.r3.s64 = ctx.r31.s64 + 2;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x832451fc
	goto loc_832451FC;
loc_832451CC:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r11,6464
	ctx.r4.s64 = ctx.r11.s64 + 6464;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83296de8
	ctx.lr = 0x832451E0;
	sub_83296DE8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x832451f8
	if (!cr6.eq) goto loc_832451F8;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r31,2
	ctx.r3.s64 = ctx.r31.s64 + 2;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x832451fc
	goto loc_832451FC;
loc_832451F8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832451FC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83245214"))) PPC_WEAK_FUNC(sub_83245214);
PPC_FUNC_IMPL(__imp__sub_83245214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83245218"))) PPC_WEAK_FUNC(sub_83245218);
PPC_FUNC_IMPL(__imp__sub_83245218) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r11,13252
	ctx.r4.s64 = ctx.r11.s64 + 13252;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83296de8
	ctx.lr = 0x83245244;
	sub_83296DE8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8324525c
	if (!cr6.eq) goto loc_8324525C;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r31,3
	ctx.r3.s64 = ctx.r31.s64 + 3;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x83245260
	goto loc_83245260;
loc_8324525C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83245260:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83245278"))) PPC_WEAK_FUNC(sub_83245278);
PPC_FUNC_IMPL(__imp__sub_83245278) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83245280;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r11,13256
	ctx.r4.s64 = ctx.r11.s64 + 13256;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83296de8
	ctx.lr = 0x832452A0;
	sub_83296DE8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83245398
	if (!cr6.eq) goto loc_83245398;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lbzu r10,3(r31)
	ea = 3 + ctx.r31.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,43
	cr6.compare<int32_t>(ctx.r11.s32, 43, xer);
	// beq cr6,0x832452d0
	if (cr6.eq) goto loc_832452D0;
	// cmpwi cr6,r11,45
	cr6.compare<int32_t>(ctx.r11.s32, 45, xer);
	// bne cr6,0x83245398
	if (!cr6.eq) goto loc_83245398;
	// li r8,1
	ctx.r8.s64 = 1;
loc_832452D0:
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(ctx.r11.s32, 48, xer);
	// blt cr6,0x832452f0
	if (cr6.lt) goto loc_832452F0;
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(ctx.r11.s32, 57, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x832452f4
	if (!cr6.gt) goto loc_832452F4;
loc_832452F0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_832452F4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83245398
	if (cr6.eq) goto loc_83245398;
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
loc_83245308:
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpwi cr6,r9,48
	cr6.compare<int32_t>(ctx.r9.s32, 48, xer);
	// blt cr6,0x83245328
	if (cr6.lt) goto loc_83245328;
	// cmpwi cr6,r9,57
	cr6.compare<int32_t>(ctx.r9.s32, 57, xer);
	// li r9,1
	ctx.r9.s64 = 1;
	// ble cr6,0x8324532c
	if (!cr6.gt) goto loc_8324532C;
loc_83245328:
	// li r9,0
	ctx.r9.s64 = 0;
loc_8324532C:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83245354
	if (cr6.eq) goto loc_83245354;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x83245308
	goto loc_83245308;
loc_83245354:
	// li r10,100
	ctx.r10.s64 = 100;
	// divw r10,r11,r10
	ctx.r10.s32 = PPCDivide(ctx.r11.s32, ctx.r10.s32);
	// mulli r9,r10,100
	ctx.r9.s64 = ctx.r10.s64 * 100;
	// subf. r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x83245370
	if (cr0.eq) goto loc_83245370;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83245370:
	// mulli r10,r10,60
	ctx.r10.s64 = ctx.r10.s64 * 60;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// mulli r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 * 60;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8324538c
	if (cr6.eq) goto loc_8324538C;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
loc_8324538C:
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83245398:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832453A4"))) PPC_WEAK_FUNC(sub_832453A4);
PPC_FUNC_IMPL(__imp__sub_832453A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832453A8"))) PPC_WEAK_FUNC(sub_832453A8);
PPC_FUNC_IMPL(__imp__sub_832453A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x832453B0;
	__savegprlr_20(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x832453d4
	if (cr6.eq) goto loc_832453D4;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,13240
	ctx.r3.s64 = ctx.r11.s64 + 13240;
	// bl 0x8320d088
	ctx.lr = 0x832453D4;
	sub_8320D088(ctx, base);
loc_832453D4:
	// lwz r10,28(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 28);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// blt cr6,0x832458e8
	if (cr6.lt) goto loc_832458E8;
	// lwz r11,16(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 16);
	// li r20,0
	ctx.r20.s64 = 0;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r20,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r20.u32);
	// stw r20,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r20.u32);
	// mr r23,r20
	ctx.r23.u64 = ctx.r20.u64;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// mr r25,r20
	ctx.r25.u64 = ctx.r20.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r26,r20
	ctx.r26.u64 = ctx.r20.u64;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// stw r20,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r20.u32);
	// stw r20,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r20.u32);
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// stw r20,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r20.u32);
	// stw r20,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r20.u32);
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r20,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r20.u32);
	// add r24,r10,r11
	ctx.r24.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83222be8
	ctx.lr = 0x83245440;
	sub_83222BE8(ctx, base);
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// addi r30,r11,8168
	ctx.r30.s64 = ctx.r11.s64 + 8168;
	// addi r31,r30,48
	ctx.r31.s64 = ctx.r30.s64 + 48;
loc_83245450:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83296ba8
	ctx.lr = 0x83245458;
	sub_83296BA8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x83296de8
	ctx.lr = 0x8324546C;
	sub_83296DE8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8324548c
	if (cr6.eq) goto loc_8324548C;
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// blt cr6,0x83245450
	if (cr6.lt) goto loc_83245450;
	// b 0x83245760
	goto loc_83245760;
loc_8324548C:
	// add r3,r29,r22
	ctx.r3.u64 = ctx.r29.u64 + ctx.r22.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83245760
	if (cr6.eq) goto loc_83245760;
	// bl 0x83244e90
	ctx.lr = 0x8324549C;
	sub_83244E90(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83245760
	if (cr6.eq) goto loc_83245760;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
loc_832454B0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83296ba8
	ctx.lr = 0x832454B8;
	sub_83296BA8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x83296de8
	ctx.lr = 0x832454CC;
	sub_83296DE8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x832454ec
	if (cr6.eq) goto loc_832454EC;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// blt cr6,0x832454b0
	if (cr6.lt) goto loc_832454B0;
	// b 0x83245760
	goto loc_83245760;
loc_832454EC:
	// add r31,r29,r27
	ctx.r31.u64 = ctx.r29.u64 + ctx.r27.u64;
	// mr r23,r28
	ctx.r23.u64 = ctx.r28.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83245760
	if (cr6.eq) goto loc_83245760;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83244e90
	ctx.lr = 0x83245504;
	sub_83244E90(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83245510
	if (cr6.eq) goto loc_83245510;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_83245510:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83245760
	if (cr6.eq) goto loc_83245760;
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(ctx.r11.s32, 48, xer);
	// blt cr6,0x83245534
	if (cr6.lt) goto loc_83245534;
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(ctx.r11.s32, 57, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x83245538
	if (!cr6.gt) goto loc_83245538;
loc_83245534:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_83245538:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83245760
	if (cr6.eq) goto loc_83245760;
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// addi r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 1;
loc_8324554C:
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// extsb r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	// cmpwi cr6,r10,48
	cr6.compare<int32_t>(ctx.r10.s32, 48, xer);
	// blt cr6,0x8324556c
	if (cr6.lt) goto loc_8324556C;
	// cmpwi cr6,r10,57
	cr6.compare<int32_t>(ctx.r10.s32, 57, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x83245570
	if (!cr6.gt) goto loc_83245570;
loc_8324556C:
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_83245570:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83245598
	if (cr6.eq) goto loc_83245598;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x8324554c
	goto loc_8324554C;
loc_83245598:
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// bl 0x83244e90
	ctx.lr = 0x832455A0;
	sub_83244E90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83245760
	if (cr6.eq) goto loc_83245760;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// bl 0x83244fc0
	ctx.lr = 0x832455BC;
	sub_83244FC0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8324561c
	if (cr6.eq) goto loc_8324561C;
	// bl 0x83244e90
	ctx.lr = 0x832455C8;
	sub_83244E90(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83245760
	if (cr6.eq) goto loc_83245760;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x83244f30
	ctx.lr = 0x832455DC;
	sub_83244F30(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832455ec
	if (cr6.eq) goto loc_832455EC;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x83245670
	goto loc_83245670;
loc_832455EC:
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x83245278
	ctx.lr = 0x832455FC;
	sub_83245278(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83245760
	if (cr6.eq) goto loc_83245760;
	// bl 0x83244e90
	ctx.lr = 0x83245608;
	sub_83244E90(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83245760
	if (cr6.eq) goto loc_83245760;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x83244f30
	ctx.lr = 0x83245618;
	sub_83244F30(ctx, base);
	// b 0x83245730
	goto loc_83245730;
loc_8324561C:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83244f30
	ctx.lr = 0x83245628;
	sub_83244F30(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83245760
	if (cr6.eq) goto loc_83245760;
	// bl 0x83244e90
	ctx.lr = 0x83245638;
	sub_83244E90(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83245644
	if (cr6.eq) goto loc_83245644;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_83245644:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8324575c
	if (cr6.eq) goto loc_8324575C;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83244fc0
	ctx.lr = 0x83245664;
	sub_83244FC0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83245760
	if (cr6.eq) goto loc_83245760;
loc_83245670:
	// bl 0x83244e90
	ctx.lr = 0x83245674;
	sub_83244E90(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83245680
	if (cr6.eq) goto loc_83245680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_83245680:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8324575c
	if (cr6.eq) goto loc_8324575C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83245188
	ctx.lr = 0x83245698;
	sub_83245188(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832456e8
	if (cr6.eq) goto loc_832456E8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83244e90
	ctx.lr = 0x832456A8;
	sub_83244E90(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832456b4
	if (cr6.eq) goto loc_832456B4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_832456B4:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8324575c
	if (cr6.eq) goto loc_8324575C;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83245760
	if (cr6.eq) goto loc_83245760;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83245218
	ctx.lr = 0x832456D4;
	sub_83245218(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83245760
	if (!cr6.eq) goto loc_83245760;
	// b 0x8324573c
	goto loc_8324573C;
loc_832456E8:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83245218
	ctx.lr = 0x832456F4;
	sub_83245218(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83245760
	if (cr6.eq) goto loc_83245760;
	// bl 0x83244e90
	ctx.lr = 0x83245704;
	sub_83244E90(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83245710
	if (cr6.eq) goto loc_83245710;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_83245710:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8324575c
	if (cr6.eq) goto loc_8324575C;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83245760
	if (cr6.eq) goto loc_83245760;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83245188
	ctx.lr = 0x83245730;
	sub_83245188(ctx, base);
loc_83245730:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83245760
	if (cr6.eq) goto loc_83245760;
loc_8324573C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83244e90
	ctx.lr = 0x83245744;
	sub_83244E90(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83245750
	if (cr6.eq) goto loc_83245750;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_83245750:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83245760
	if (!cr6.eq) goto loc_83245760;
loc_8324575C:
	// li r26,1
	ctx.r26.s64 = 1;
loc_83245760:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83245788
	if (cr6.eq) goto loc_83245788;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r11,1900
	ctx.r11.s64 = 1900;
	// xoris r9,r11,32768
	ctx.r9.u64 = ctx.r11.u64 ^ 2147483648;
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addc r7,r8,r9
	temp.u8 = ctx.r8.u32 + ctx.r9.u32 < ctx.r8.u32;
	ctx.r7.u64 = ctx.r8.u64 + ctx.r9.u64;
	xer.ca = temp.u8;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r26,r5,r26
	ctx.r26.u64 = ctx.r5.u64 & ctx.r26.u64;
loc_83245788:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832457d4
	if (cr6.eq) goto loc_832457D4;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x832457d4
	if (cr6.eq) goto loc_832457D4;
	// lwz r31,92(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r31,12
	cr6.compare<int32_t>(ctx.r31.s32, 12, xer);
	// ble cr6,0x832457b4
	if (!cr6.gt) goto loc_832457B4;
	// mr r26,r20
	ctx.r26.u64 = ctx.r20.u64;
	// b 0x832457d8
	goto loc_832457D8;
loc_832457B4:
	// addi r11,r31,-12
	ctx.r11.s64 = ctx.r31.s64 + -12;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// subfic r11,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r31,r9,r31
	ctx.r31.u64 = ctx.r9.u64 & ctx.r31.u64;
	// bne cr6,0x832457d8
	if (!cr6.eq) goto loc_832457D8;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// b 0x832457d8
	goto loc_832457D8;
loc_832457D4:
	// lwz r31,92(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_832457D8:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832458a0
	if (cr6.eq) goto loc_832458A0;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83294018
	ctx.lr = 0x832457F4;
	sub_83294018(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addis r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 65536;
	// lwz r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r7,r7,-1900
	ctx.r7.s64 = ctx.r7.s64 + -1900;
	// stb r23,124(r1)
	PPC_STORE_U8(ctx.r1.u32 + 124, ctx.r23.u8);
	// stb r25,123(r1)
	PPC_STORE_U8(ctx.r1.u32 + 123, ctx.r25.u8);
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// sth r7,116(r1)
	PPC_STORE_U16(ctx.r1.u32 + 116, ctx.r7.u16);
	// stb r31,122(r1)
	PPC_STORE_U8(ctx.r1.u32 + 122, ctx.r31.u8);
	// stb r10,121(r1)
	PPC_STORE_U8(ctx.r1.u32 + 121, ctx.r10.u8);
	// stb r8,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r8.u8);
	// beq cr6,0x83245864
	if (cr6.eq) goto loc_83245864;
	// bl 0x83298ea0
	ctx.lr = 0x83245834;
	sub_83298EA0(ctx, base);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// clrldi r10,r3,32
	ctx.r10.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// li r3,0
	ctx.r3.s64 = 0;
	// subf r31,r9,r10
	ctx.r31.s64 = ctx.r10.s64 - ctx.r9.s64;
	// bl 0x83297c60
	ctx.lr = 0x8324584C;
	sub_83297C60(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lwz r3,12(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mulli r4,r11,1000
	ctx.r4.s64 = ctx.r11.s64 * 1000;
	// bl 0x832238c0
	ctx.lr = 0x83245860;
	sub_832238C0(ctx, base);
	// b 0x832458c0
	goto loc_832458C0;
loc_83245864:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83245888
	if (cr6.eq) goto loc_83245888;
	// bl 0x83298de8
	ctx.lr = 0x83245874;
	sub_83298DE8(ctx, base);
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lwz r3,12(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 12);
	// mulli r4,r11,1000
	ctx.r4.s64 = ctx.r11.s64 * 1000;
	// bl 0x832238c0
	ctx.lr = 0x83245884;
	sub_832238C0(ctx, base);
	// b 0x832458c0
	goto loc_832458C0;
loc_83245888:
	// bl 0x83298ea0
	ctx.lr = 0x8324588C;
	sub_83298EA0(ctx, base);
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lwz r3,12(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 12);
	// mulli r4,r11,1000
	ctx.r4.s64 = ctx.r11.s64 * 1000;
	// bl 0x832238c0
	ctx.lr = 0x8324589C;
	sub_832238C0(ctx, base);
	// b 0x832458c0
	goto loc_832458C0;
loc_832458A0:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lhz r4,8(r21)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r21.u32 + 8);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,13260
	ctx.r5.s64 = ctx.r11.s64 + 13260;
	// li r3,270
	ctx.r3.s64 = 270;
	// bl 0x8320d548
	ctx.lr = 0x832458B8;
	sub_8320D548(ctx, base);
	// lwz r3,12(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 12);
	// bl 0x83223850
	ctx.lr = 0x832458C0;
	sub_83223850(ctx, base);
loc_832458C0:
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// cmplw cr6,r22,r11
	cr6.compare<uint32_t>(ctx.r22.u32, ctx.r11.u32, xer);
	// beq cr6,0x832458f0
	if (cr6.eq) goto loc_832458F0;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// beq cr6,0x832458f0
	if (cr6.eq) goto loc_832458F0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83209d68
	ctx.lr = 0x832458DC;
	sub_83209D68(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_832458E8:
	// lwz r3,12(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 12);
	// bl 0x83223850
	ctx.lr = 0x832458F0;
	sub_83223850(ctx, base);
loc_832458F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832458FC"))) PPC_WEAK_FUNC(sub_832458FC);
PPC_FUNC_IMPL(__imp__sub_832458FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83245900"))) PPC_WEAK_FUNC(sub_83245900);
PPC_FUNC_IMPL(__imp__sub_83245900) {
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
	// cmplwi cr6,r11,1208
	cr6.compare<uint32_t>(ctx.r11.u32, 1208, xer);
	// beq cr6,0x8324594c
	if (cr6.eq) goto loc_8324594C;
	// cmplwi cr6,r11,2400
	cr6.compare<uint32_t>(ctx.r11.u32, 2400, xer);
	// beq cr6,0x83245934
	if (cr6.eq) goto loc_83245934;
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
loc_83245934:
	// bl 0x832453a8
	ctx.lr = 0x83245938;
	sub_832453A8(ctx, base);
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
loc_8324594C:
	// bl 0x83244d00
	ctx.lr = 0x83245950;
	sub_83244D00(ctx, base);
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

__attribute__((alias("__imp__sub_83245964"))) PPC_WEAK_FUNC(sub_83245964);
PPC_FUNC_IMPL(__imp__sub_83245964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83245968"))) PPC_WEAK_FUNC(sub_83245968);
PPC_FUNC_IMPL(__imp__sub_83245968) {
	PPC_FUNC_PROLOGUE();
	// clrldi r11,r4,32
	ctx.r11.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// mulli r10,r11,1000
	ctx.r10.s64 = ctx.r11.s64 * 1000;
	// std r10,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r10.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83245978"))) PPC_WEAK_FUNC(sub_83245978);
PPC_FUNC_IMPL(__imp__sub_83245978) {
	PPC_FUNC_PROLOGUE();
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// li r10,1000
	ctx.r10.s64 = 1000;
	// divdu r9,r11,r10
	ctx.r9.u64 = PPCDivide(ctx.r11.u64, ctx.r10.u64);
	// rotlwi r3,r9,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8324598C"))) PPC_WEAK_FUNC(sub_8324598C);
PPC_FUNC_IMPL(__imp__sub_8324598C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83245990"))) PPC_WEAK_FUNC(sub_83245990);
PPC_FUNC_IMPL(__imp__sub_83245990) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// b 0x832238c0
	sub_832238C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832459A0"))) PPC_WEAK_FUNC(sub_832459A0);
PPC_FUNC_IMPL(__imp__sub_832459A0) {
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
	// cmplwi cr6,r30,1182
	cr6.compare<uint32_t>(ctx.r30.u32, 1182, xer);
	// beq cr6,0x832459c8
	if (cr6.eq) goto loc_832459C8;
	// li r3,-4
	ctx.r3.s64 = -4;
	// b 0x83245a0c
	goto loc_83245A0C;
loc_832459C8:
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
	// beq cr6,0x832459f4
	if (cr6.eq) goto loc_832459F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x832459F4;
	sub_83222030(ctx, base);
loc_832459F4:
	// li r11,15
	ctx.r11.s64 = 15;
	// sth r30,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r30.u16);
	// li r10,174
	ctx.r10.s64 = 174;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r10,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r10.u16);
loc_83245A0C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83245A24"))) PPC_WEAK_FUNC(sub_83245A24);
PPC_FUNC_IMPL(__imp__sub_83245A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83245A28"))) PPC_WEAK_FUNC(sub_83245A28);
PPC_FUNC_IMPL(__imp__sub_83245A28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83245A30;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r31,r11,0,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83209aa8
	ctx.lr = 0x83245A54;
	sub_83209AA8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x83294018
	ctx.lr = 0x83245A64;
	sub_83294018(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x83223bd0
	ctx.lr = 0x83245A70;
	sub_83223BD0(ctx, base);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83245b00
	if (!cr6.gt) goto loc_83245B00;
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// li r27,0
	ctx.r27.s64 = 0;
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
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ble cr6,0x83245ae8
	if (!cr6.gt) goto loc_83245AE8;
loc_83245AA8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83222578
	ctx.lr = 0x83245AB0;
	sub_83222578(ctx, base);
	// bl 0x83291540
	ctx.lr = 0x83245AB4;
	sub_83291540(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x83291bd8
	ctx.lr = 0x83245AC0;
	sub_83291BD8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83296ba8
	ctx.lr = 0x83245AC8;
	sub_83296BA8(ctx, base);
	// subf. r31,r3,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r3.s64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// ble 0x83245b00
	if (!cr0.gt) goto loc_83245B00;
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, xer);
	// blt cr6,0x83245aa8
	if (cr6.lt) goto loc_83245AA8;
loc_83245AE8:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// ble cr6,0x83245b00
	if (!cr6.gt) goto loc_83245B00;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// bl 0x83255a88
	ctx.lr = 0x83245B00;
	sub_83255A88(ctx, base);
loc_83245B00:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83245B08"))) PPC_WEAK_FUNC(sub_83245B08);
PPC_FUNC_IMPL(__imp__sub_83245B08) {
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
	// cmplwi cr6,r11,1182
	cr6.compare<uint32_t>(ctx.r11.u32, 1182, xer);
	// beq cr6,0x83245b34
	if (cr6.eq) goto loc_83245B34;
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
loc_83245B34:
	// bl 0x83245a28
	ctx.lr = 0x83245B38;
	sub_83245A28(ctx, base);
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

__attribute__((alias("__imp__sub_83245B4C"))) PPC_WEAK_FUNC(sub_83245B4C);
PPC_FUNC_IMPL(__imp__sub_83245B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83245B50"))) PPC_WEAK_FUNC(sub_83245B50);
PPC_FUNC_IMPL(__imp__sub_83245B50) {
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
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// li r10,12288
	ctx.r10.s64 = 12288;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// srw r8,r10,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83245b90
	if (cr6.eq) goto loc_83245B90;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8322e2b8
	ctx.lr = 0x83245B8C;
	sub_8322E2B8(ctx, base);
	// b 0x83245bf0
	goto loc_83245BF0;
loc_83245B90:
	// bl 0x83220dc8
	ctx.lr = 0x83245B94;
	sub_83220DC8(ctx, base);
	// lhz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,476
	cr6.compare<uint32_t>(ctx.r11.u32, 476, xer);
	// bne cr6,0x83245be8
	if (!cr6.eq) goto loc_83245BE8;
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83291758
	ctx.lr = 0x83245BA8;
	sub_83291758(ctx, base);
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// ori r8,r10,8400
	ctx.r8.u64 = ctx.r10.u64 | 8400;
	// sraw r7,r8,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r7.s64 = ctx.r8.s32 >> temp.u32;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83245bd4
	if (cr6.eq) goto loc_83245BD4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x83245BD4;
	sub_83222030(ctx, base);
loc_83245BD4:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// b 0x83245bf0
	goto loc_83245BF0;
loc_83245BE8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83286968
	ctx.lr = 0x83245BF0;
	sub_83286968(ctx, base);
loc_83245BF0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83245C08"))) PPC_WEAK_FUNC(sub_83245C08);
PPC_FUNC_IMPL(__imp__sub_83245C08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83245C10;
	__savegprlr_26(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x83245c48
	if (!cr6.eq) goto loc_83245C48;
	// cmpw cr6,r5,r6
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, xer);
	// blt cr6,0x83245c48
	if (cr6.lt) goto loc_83245C48;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x83223af0
	ctx.lr = 0x83245C40;
	sub_83223AF0(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83245C48:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83255980
	ctx.lr = 0x83245C50;
	sub_83255980(ctx, base);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// rlwinm r30,r11,0,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r30,64
	cr6.compare<int32_t>(ctx.r30.s32, 64, xer);
	// ble cr6,0x83245c74
	if (!cr6.gt) goto loc_83245C74;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83209aa8
	ctx.lr = 0x83245C68;
	sub_83209AA8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// b 0x83245c7c
	goto loc_83245C7C;
loc_83245C74:
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// li r8,64
	ctx.r8.s64 = 64;
loc_83245C7C:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83291878
	ctx.lr = 0x83245C94;
	sub_83291878(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83255a88
	ctx.lr = 0x83245C9C;
	sub_83255A88(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83223af0
	ctx.lr = 0x83245CA8;
	sub_83223AF0(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x83245cc4
	if (cr6.eq) goto loc_83245CC4;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83245cc4
	if (cr6.eq) goto loc_83245CC4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83209d68
	ctx.lr = 0x83245CC4;
	sub_83209D68(ctx, base);
loc_83245CC4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83245CCC"))) PPC_WEAK_FUNC(sub_83245CCC);
PPC_FUNC_IMPL(__imp__sub_83245CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83245CD0"))) PPC_WEAK_FUNC(sub_83245CD0);
PPC_FUNC_IMPL(__imp__sub_83245CD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83245CD8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83245d0c
	if (cr6.eq) goto loc_83245D0C;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83245d0c
	if (cr6.eq) goto loc_83245D0C;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x83245d0c
	if (cr6.eq) goto loc_83245D0C;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,-29336
	ctx.r3.s64 = ctx.r11.s64 + -29336;
	// bl 0x8320d088
	ctx.lr = 0x83245D0C;
	sub_8320D088(ctx, base);
loc_83245D0C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83291758
	ctx.lr = 0x83245D14;
	sub_83291758(ctx, base);
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// blt cr6,0x83245d9c
	if (cr6.lt) goto loc_83245D9C;
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
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
	ctx.lr = 0x83245D50;
	sub_83222578(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x83245d6c
	if (!cr6.lt) goto loc_83245D6C;
	// add r11,r27,r3
	ctx.r11.u64 = ctx.r27.u64 + ctx.r3.u64;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 & ctx.r11.u64;
loc_83245D6C:
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// blt cr6,0x83245d9c
	if (cr6.lt) goto loc_83245D9C;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x83222578
	ctx.lr = 0x83245D80;
	sub_83222578(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x83245d98
	if (!cr6.lt) goto loc_83245D98;
	// add. r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// add r3,r29,r3
	ctx.r3.u64 = ctx.r29.u64 + ctx.r3.u64;
	// blt 0x83245d98
	if (cr0.lt) goto loc_83245D98;
	// li r3,0
	ctx.r3.s64 = 0;
loc_83245D98:
	// add r27,r3,r31
	ctx.r27.u64 = ctx.r3.u64 + ctx.r31.u64;
loc_83245D9C:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r7,12(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83245c08
	ctx.lr = 0x83245DB4;
	sub_83245C08(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83245DBC"))) PPC_WEAK_FUNC(sub_83245DBC);
PPC_FUNC_IMPL(__imp__sub_83245DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83245DC0"))) PPC_WEAK_FUNC(sub_83245DC0);
PPC_FUNC_IMPL(__imp__sub_83245DC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83245DC8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83245dfc
	if (cr6.eq) goto loc_83245DFC;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83245dfc
	if (cr6.eq) goto loc_83245DFC;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x83245dfc
	if (cr6.eq) goto loc_83245DFC;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,-29336
	ctx.r3.s64 = ctx.r11.s64 + -29336;
	// bl 0x8320d088
	ctx.lr = 0x83245DFC;
	sub_8320D088(ctx, base);
loc_83245DFC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83291758
	ctx.lr = 0x83245E04;
	sub_83291758(ctx, base);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// blt cr6,0x83245e80
	if (cr6.lt) goto loc_83245E80;
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
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83222578
	ctx.lr = 0x83245E40;
	sub_83222578(ctx, base);
	// rlwinm r11,r3,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// lwz r6,28(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r6,2
	cr6.compare<int32_t>(ctx.r6.s32, 2, xer);
	// and r31,r5,r3
	ctx.r31.u64 = ctx.r5.u64 & ctx.r3.u64;
	// blt cr6,0x83245e6c
	if (cr6.lt) goto loc_83245E6C;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x83222578
	ctx.lr = 0x83245E60;
	sub_83222578(ctx, base);
	// rlwinm r11,r3,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r28,r11,r3
	ctx.r28.u64 = ctx.r11.u64 & ctx.r3.u64;
loc_83245E6C:
	// cmpw cr6,r28,r31
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r31.s32, xer);
	// bge cr6,0x83245e80
	if (!cr6.lt) goto loc_83245E80;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_83245E80:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r7,12(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83245c08
	ctx.lr = 0x83245E98;
	sub_83245C08(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83245EA0"))) PPC_WEAK_FUNC(sub_83245EA0);
PPC_FUNC_IMPL(__imp__sub_83245EA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83245EA8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83245edc
	if (cr6.eq) goto loc_83245EDC;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83245edc
	if (cr6.eq) goto loc_83245EDC;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x83245edc
	if (cr6.eq) goto loc_83245EDC;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,-29336
	ctx.r3.s64 = ctx.r11.s64 + -29336;
	// bl 0x8320d088
	ctx.lr = 0x83245EDC;
	sub_8320D088(ctx, base);
loc_83245EDC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83291758
	ctx.lr = 0x83245EE4;
	sub_83291758(ctx, base);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// blt cr6,0x83245f6c
	if (cr6.lt) goto loc_83245F6C;
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
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
	// add r27,r11,r10
	ctx.r27.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83222578
	ctx.lr = 0x83245F20;
	sub_83222578(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x83245f3c
	if (!cr6.lt) goto loc_83245F3C;
	// add r11,r28,r3
	ctx.r11.u64 = ctx.r28.u64 + ctx.r3.u64;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 & ctx.r11.u64;
loc_83245F3C:
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// blt cr6,0x83245f6c
	if (cr6.lt) goto loc_83245F6C;
	// addi r3,r27,8
	ctx.r3.s64 = ctx.r27.s64 + 8;
	// bl 0x83222578
	ctx.lr = 0x83245F50;
	sub_83222578(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x83245f6c
	if (!cr6.lt) goto loc_83245F6C;
	// add r11,r30,r3
	ctx.r11.u64 = ctx.r30.u64 + ctx.r3.u64;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 & ctx.r11.u64;
loc_83245F6C:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r7,12(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83245c08
	ctx.lr = 0x83245F84;
	sub_83245C08(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83245F8C"))) PPC_WEAK_FUNC(sub_83245F8C);
PPC_FUNC_IMPL(__imp__sub_83245F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83245F90"))) PPC_WEAK_FUNC(sub_83245F90);
PPC_FUNC_IMPL(__imp__sub_83245F90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83245F98;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83245fd0
	if (cr6.eq) goto loc_83245FD0;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83245fd0
	if (cr6.eq) goto loc_83245FD0;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,-29336
	ctx.r3.s64 = ctx.r11.s64 + -29336;
	// bl 0x8320d088
	ctx.lr = 0x83245FD0;
	sub_8320D088(ctx, base);
loc_83245FD0:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// blt cr6,0x83246008
	if (cr6.lt) goto loc_83246008;
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
	ctx.lr = 0x83246004;
	sub_83222578(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_83246008:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// blt cr6,0x83246030
	if (cr6.lt) goto loc_83246030;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r29,1
	ctx.r5.s64 = ctx.r29.s64 + 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83291878
	ctx.lr = 0x83246030;
	sub_83291878(ctx, base);
loc_83246030:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83255a88
	ctx.lr = 0x83246038;
	sub_83255A88(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83223af0
	ctx.lr = 0x83246044;
	sub_83223AF0(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83246068
	if (!cr6.eq) goto loc_83246068;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lhz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,32380
	ctx.r5.s64 = ctx.r11.s64 + 32380;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x8320d548
	ctx.lr = 0x83246068;
	sub_8320D548(ctx, base);
loc_83246068:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83246070"))) PPC_WEAK_FUNC(sub_83246070);
PPC_FUNC_IMPL(__imp__sub_83246070) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83246078;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x832460a8
	if (cr6.eq) goto loc_832460A8;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x832460a8
	if (cr6.eq) goto loc_832460A8;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,-29336
	ctx.r3.s64 = ctx.r11.s64 + -29336;
	// bl 0x8320d088
	ctx.lr = 0x832460A8;
	sub_8320D088(ctx, base);
loc_832460A8:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// blt cr6,0x832460e8
	if (cr6.lt) goto loc_832460E8;
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
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83222578
	ctx.lr = 0x832460DC;
	sub_83222578(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8324611c
	if (cr6.lt) goto loc_8324611C;
loc_832460E8:
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r30,1
	ctx.r5.s64 = ctx.r30.s64 + 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83291878
	ctx.lr = 0x83246104;
	sub_83291878(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83291b88
	ctx.lr = 0x8324610C;
	sub_83291B88(ctx, base);
	// bl 0x83291588
	ctx.lr = 0x83246110;
	sub_83291588(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83246144
	if (!cr6.eq) goto loc_83246144;
loc_8324611C:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lhz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,32380
	ctx.r5.s64 = ctx.r11.s64 + 32380;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x8320d548
	ctx.lr = 0x83246134;
	sub_8320D548(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83223850
	ctx.lr = 0x8324613C;
	sub_83223850(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83246144:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8322e5b0
	ctx.lr = 0x8324614C;
	sub_8322E5B0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83246154"))) PPC_WEAK_FUNC(sub_83246154);
PPC_FUNC_IMPL(__imp__sub_83246154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83246158"))) PPC_WEAK_FUNC(sub_83246158);
PPC_FUNC_IMPL(__imp__sub_83246158) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83246160;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83246188
	if (cr6.eq) goto loc_83246188;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,-29336
	ctx.r3.s64 = ctx.r11.s64 + -29336;
	// bl 0x8320d088
	ctx.lr = 0x83246188;
	sub_8320D088(ctx, base);
loc_83246188:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83255980
	ctx.lr = 0x83246190;
	sub_83255980(ctx, base);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// rlwinm r30,r11,0,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r30,64
	cr6.compare<int32_t>(ctx.r30.s32, 64, xer);
	// ble cr6,0x832461b4
	if (!cr6.gt) goto loc_832461B4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83209aa8
	ctx.lr = 0x832461A8;
	sub_83209AA8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// b 0x832461bc
	goto loc_832461BC;
loc_832461B4:
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// li r5,64
	ctx.r5.s64 = 64;
loc_832461BC:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83291c18
	ctx.lr = 0x832461CC;
	sub_83291C18(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x83223af0
	ctx.lr = 0x832461D8;
	sub_83223AF0(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x832461f4
	if (cr6.eq) goto loc_832461F4;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x832461f4
	if (cr6.eq) goto loc_832461F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83209d68
	ctx.lr = 0x832461F4;
	sub_83209D68(ctx, base);
loc_832461F4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832461FC"))) PPC_WEAK_FUNC(sub_832461FC);
PPC_FUNC_IMPL(__imp__sub_832461FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83246200"))) PPC_WEAK_FUNC(sub_83246200);
PPC_FUNC_IMPL(__imp__sub_83246200) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83246208;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// li r10,-1
	ctx.r10.s64 = -1;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83246238
	if (cr6.eq) goto loc_83246238;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83246248
	if (cr6.eq) goto loc_83246248;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x83246248
	if (cr6.eq) goto loc_83246248;
loc_83246238:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,-29336
	ctx.r3.s64 = ctx.r11.s64 + -29336;
	// bl 0x8320d088
	ctx.lr = 0x83246248;
	sub_8320D088(ctx, base);
loc_83246248:
	// lwz r10,28(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// blt cr6,0x83246318
	if (cr6.lt) goto loc_83246318;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
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
	// bl 0x83222be8
	ctx.lr = 0x83246284;
	sub_83222BE8(ctx, base);
	// lwz r6,28(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r6,2
	cr6.compare<int32_t>(ctx.r6.s32, 2, xer);
	// blt cr6,0x832462bc
	if (cr6.lt) goto loc_832462BC;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x83222578
	ctx.lr = 0x832462A0;
	sub_83222578(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x832462b8
	if (!cr6.lt) goto loc_832462B8;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// b 0x832462d4
	goto loc_832462D4;
loc_832462B8:
	// bne cr6,0x832462c4
	if (!cr6.eq) goto loc_832462C4;
loc_832462BC:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// b 0x832462d4
	goto loc_832462D4;
loc_832462C4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832917e8
	ctx.lr = 0x832462D0;
	sub_832917E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_832462D4:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x832462fc
	if (cr6.eq) goto loc_832462FC;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83291a08
	ctx.lr = 0x832462E8;
	sub_83291A08(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x832462fc
	if (cr6.lt) goto loc_832462FC;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_832462FC:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// beq cr6,0x83246318
	if (cr6.eq) goto loc_83246318;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x83246318
	if (cr6.eq) goto loc_83246318;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83209d68
	ctx.lr = 0x83246318;
	sub_83209D68(ctx, base);
loc_83246318:
	// lwz r31,12(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
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
	// beq cr6,0x83246348
	if (cr6.eq) goto loc_83246348;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x83246348;
	sub_83222030(ctx, base);
loc_83246348:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8324635C"))) PPC_WEAK_FUNC(sub_8324635C);
PPC_FUNC_IMPL(__imp__sub_8324635C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83246360"))) PPC_WEAK_FUNC(sub_83246360);
PPC_FUNC_IMPL(__imp__sub_83246360) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83246368;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// li r10,-1
	ctx.r10.s64 = -1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83246398
	if (cr6.eq) goto loc_83246398;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x832463a8
	if (cr6.eq) goto loc_832463A8;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x832463a8
	if (cr6.eq) goto loc_832463A8;
loc_83246398:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-29336
	ctx.r3.s64 = ctx.r11.s64 + -29336;
	// bl 0x8320d088
	ctx.lr = 0x832463A8;
	sub_8320D088(ctx, base);
loc_832463A8:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// blt cr6,0x8324643c
	if (cr6.lt) goto loc_8324643C;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
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
	// bl 0x83222be8
	ctx.lr = 0x832463E4;
	sub_83222BE8(ctx, base);
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lis r6,32767
	ctx.r6.s64 = 2147418112;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// ori r6,r6,65535
	ctx.r6.u64 = ctx.r6.u64 | 65535;
	// cmpwi cr6,r5,2
	cr6.compare<int32_t>(ctx.r5.s32, 2, xer);
	// blt cr6,0x83246410
	if (cr6.lt) goto loc_83246410;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x83222578
	ctx.lr = 0x83246404;
	sub_83222578(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83246420
	if (cr6.lt) goto loc_83246420;
loc_83246410:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83291ac8
	ctx.lr = 0x83246420;
	sub_83291AC8(ctx, base);
loc_83246420:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// beq cr6,0x8324643c
	if (cr6.eq) goto loc_8324643C;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x8324643c
	if (cr6.eq) goto loc_8324643C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83209d68
	ctx.lr = 0x8324643C;
	sub_83209D68(ctx, base);
loc_8324643C:
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
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
	// beq cr6,0x8324646c
	if (cr6.eq) goto loc_8324646C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x8324646C;
	sub_83222030(ctx, base);
loc_8324646C:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83246480"))) PPC_WEAK_FUNC(sub_83246480);
PPC_FUNC_IMPL(__imp__sub_83246480) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83246488;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x83255980
	ctx.lr = 0x832464A0;
	sub_83255980(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83255980
	ctx.lr = 0x832464AC;
	sub_83255980(ctx, base);
	// add r11,r27,r3
	ctx.r11.u64 = ctx.r27.u64 + ctx.r3.u64;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r30,r11,0,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// bne cr6,0x832464ec
	if (!cr6.eq) goto loc_832464EC;
	// cmpw cr6,r30,r29
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, xer);
	// ble cr6,0x832464fc
	if (!cr6.gt) goto loc_832464FC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83209aa8
	ctx.lr = 0x832464D0;
	sub_83209AA8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x83255c58
	ctx.lr = 0x832464E4;
	sub_83255C58(ctx, base);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// b 0x832464fc
	goto loc_832464FC;
loc_832464EC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83209df8
	ctx.lr = 0x832464F8;
	sub_83209DF8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_832464FC:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83255a18
	ctx.lr = 0x8324650C;
	sub_83255A18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83246518"))) PPC_WEAK_FUNC(sub_83246518);
PPC_FUNC_IMPL(__imp__sub_83246518) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83246520;
	__savegprlr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83246548
	if (!cr6.eq) goto loc_83246548;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83223af0
	ctx.lr = 0x83246540;
	sub_83223AF0(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83246548:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x83246480
	ctx.lr = 0x8324657C;
	sub_83246480(ctx, base);
	// lwz r6,28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// ble cr6,0x832465ec
	if (!cr6.gt) goto loc_832465EC;
loc_8324658C:
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83222be8
	ctx.lr = 0x832465A0;
	sub_83222BE8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83246480
	ctx.lr = 0x832465B8;
	sub_83246480(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// beq cr6,0x832465d8
	if (cr6.eq) goto loc_832465D8;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x832465d8
	if (cr6.eq) goto loc_832465D8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83209d68
	ctx.lr = 0x832465D8;
	sub_83209D68(ctx, base);
loc_832465D8:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, xer);
	// blt cr6,0x8324658c
	if (cr6.lt) goto loc_8324658C;
loc_832465EC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83255a88
	ctx.lr = 0x832465F4;
	sub_83255A88(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83223af0
	ctx.lr = 0x83246600;
	sub_83223AF0(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// beq cr6,0x8324661c
	if (cr6.eq) goto loc_8324661C;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x8324661c
	if (cr6.eq) goto loc_8324661C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83209d68
	ctx.lr = 0x8324661C;
	sub_83209D68(ctx, base);
loc_8324661C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83246624"))) PPC_WEAK_FUNC(sub_83246624);
PPC_FUNC_IMPL(__imp__sub_83246624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83246628"))) PPC_WEAK_FUNC(sub_83246628);
PPC_FUNC_IMPL(__imp__sub_83246628) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x83246630;
	__savegprlr_23(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x8324665c
	if (cr6.lt) goto loc_8324665C;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// ble cr6,0x8324666c
	if (!cr6.gt) goto loc_8324666C;
loc_8324665C:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,-29336
	ctx.r3.s64 = ctx.r11.s64 + -29336;
	// bl 0x8320d088
	ctx.lr = 0x8324666C;
	sub_8320D088(ctx, base);
loc_8324666C:
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// blt cr6,0x832466c4
	if (cr6.lt) goto loc_832466C4;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r4,151
	ctx.r4.s64 = 151;
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
	// bl 0x83221378
	ctx.lr = 0x832466A0;
	sub_83221378(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832466c4
	if (!cr6.eq) goto loc_832466C4;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222be8
	ctx.lr = 0x832466C0;
	sub_83222BE8(ctx, base);
	// addi r29,r1,96
	ctx.r29.s64 = ctx.r1.s64 + 96;
loc_832466C4:
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x83246750
	if (cr6.eq) goto loc_83246750;
	// stw r23,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r23.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r23,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r23.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8328ac38
	ctx.lr = 0x832466EC;
	sub_8328AC38(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83246740
	if (!cr6.eq) goto loc_83246740;
loc_832466F4:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// beq cr6,0x83246738
	if (cr6.eq) goto loc_83246738;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x831f8200
	ctx.lr = 0x83246710;
	sub_831F8200(ctx, base);
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83246738
	if (cr6.eq) goto loc_83246738;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8328ac38
	ctx.lr = 0x83246730;
	sub_8328AC38(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x832466f4
	if (cr6.eq) goto loc_832466F4;
loc_83246738:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// bgt cr6,0x83246770
	if (cr6.gt) goto loc_83246770;
loc_83246740:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x83213150
	ctx.lr = 0x83246748;
	sub_83213150(ctx, base);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_83246750:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83246740
	if (cr6.eq) goto loc_83246740;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83296f08
	ctx.lr = 0x83246764;
	sub_83296F08(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83246740
	if (cr6.eq) goto loc_83246740;
	// li r27,1
	ctx.r27.s64 = 1;
loc_83246770:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83273b48
	ctx.lr = 0x83246778;
	sub_83273B48(ctx, base);
	// lwz r31,12(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
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
	// beq cr6,0x832467a8
	if (cr6.eq) goto loc_832467A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x832467A8;
	sub_83222030(ctx, base);
loc_832467A8:
	// cntlzw r11,r26
	ctx.r11.u64 = ctx.r26.u32 == 0 ? 32 : __builtin_clz(ctx.r26.u32);
	// stw r26,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r26.u32);
	// li r10,32
	ctx.r10.s64 = 32;
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// sth r10,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r10.u16);
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// sth r8,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r8.u16);
	// beq cr6,0x832468d0
	if (cr6.eq) goto loc_832468D0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83209c20
	ctx.lr = 0x832467D8;
	sub_83209C20(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x83255980
	ctx.lr = 0x832467E0;
	sub_83255980(ctx, base);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// rlwinm r28,r11,0,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// ble cr6,0x832468b8
	if (!cr6.gt) goto loc_832468B8;
loc_832467FC:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// bne cr6,0x8324680c
	if (!cr6.eq) goto loc_8324680C;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// b 0x83246838
	goto loc_83246838;
loc_8324680C:
	// srawi r11,r31,3
	xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r31.s32 >> 3;
	// lwz r10,32(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32);
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
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_83246838:
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8328ac38
	ctx.lr = 0x8324684C;
	sub_8328AC38(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x832468b8
	if (!cr6.eq) goto loc_832468B8;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x832468ac
	if (cr6.eq) goto loc_832468AC;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// add r4,r11,r25
	ctx.r4.u64 = ctx.r11.u64 + ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83254ec0
	ctx.lr = 0x83246878;
	sub_83254EC0(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stbx r23,r9,r30
	PPC_STORE_U8(ctx.r9.u32 + ctx.r30.u32, ctx.r23.u8);
	// bl 0x83255a88
	ctx.lr = 0x83246890;
	sub_83255A88(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83223af0
	ctx.lr = 0x8324689C;
	sub_83223AF0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r27
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r27.s32, xer);
	// blt cr6,0x832467fc
	if (cr6.lt) goto loc_832467FC;
	// b 0x832468b8
	goto loc_832468B8;
loc_832468AC:
	// li r4,595
	ctx.r4.s64 = 595;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83223c38
	ctx.lr = 0x832468B8;
	sub_83223C38(ctx, base);
loc_832468B8:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83246904
	if (cr6.eq) goto loc_83246904;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83209d68
	ctx.lr = 0x832468C8;
	sub_83209D68(ctx, base);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_832468D0:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83246904
	if (cr6.eq) goto loc_83246904;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// bne cr6,0x832468f4
	if (!cr6.eq) goto loc_832468F4;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83223af0
	ctx.lr = 0x832468EC;
	sub_83223AF0(ctx, base);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_832468F4:
	// lwz r11,32(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x83223af0
	ctx.lr = 0x83246904;
	sub_83223AF0(ctx, base);
loc_83246904:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8324690C"))) PPC_WEAK_FUNC(sub_8324690C);
PPC_FUNC_IMPL(__imp__sub_8324690C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83246910"))) PPC_WEAK_FUNC(sub_83246910);
PPC_FUNC_IMPL(__imp__sub_83246910) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83246918;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r28,-1
	ctx.r28.s64 = -1;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83246940
	if (cr6.eq) goto loc_83246940;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,-29336
	ctx.r3.s64 = ctx.r11.s64 + -29336;
	// bl 0x8320d088
	ctx.lr = 0x83246940;
	sub_8320D088(ctx, base);
loc_83246940:
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// blt cr6,0x83246a20
	if (cr6.lt) goto loc_83246A20;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r9,12288
	ctx.r9.s64 = 12288;
	// li r8,640
	ctx.r8.s64 = 640;
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// subf r5,r10,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r10.s64;
	// rlwinm r10,r5,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// lhz r3,2(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// srw r6,r9,r4
	ctx.r6.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r4.u8 & 0x3F));
	// extsh r7,r3
	ctx.r7.s64 = ctx.r3.s16;
	// srw r5,r8,r10
	ctx.r5.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
	// xori r11,r7,40
	ctx.r11.u64 = ctx.r7.u64 ^ 40;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// srawi r3,r4,31
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 31;
	// and r11,r3,r6
	ctx.r11.u64 = ctx.r3.u64 & ctx.r6.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// or r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 | ctx.r5.u64;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832469cc
	if (cr6.eq) goto loc_832469CC;
	// bl 0x83220dc8
	ctx.lr = 0x832469B0;
	sub_83220DC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83296f08
	ctx.lr = 0x832469BC;
	sub_83296F08(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83246a20
	if (cr6.eq) goto loc_83246A20;
	// subf r28,r29,r3
	ctx.r28.s64 = ctx.r3.s64 - ctx.r29.s64;
	// b 0x83246a20
	goto loc_83246A20;
loc_832469CC:
	// li r4,151
	ctx.r4.s64 = 151;
	// bl 0x83221378
	ctx.lr = 0x832469D4;
	sub_83221378(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83246a08
	if (cr6.eq) goto loc_83246A08;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8328ac38
	ctx.lr = 0x832469F8;
	sub_8328AC38(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83246a20
	if (!cr6.eq) goto loc_83246A20;
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x83246a20
	goto loc_83246A20;
loc_83246A08:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lhz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,13268
	ctx.r5.s64 = ctx.r11.s64 + 13268;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x8320d548
	ctx.lr = 0x83246A20;
	sub_8320D548(ctx, base);
loc_83246A20:
	// lwz r31,12(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
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
	// beq cr6,0x83246a4c
	if (cr6.eq) goto loc_83246A4C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x83246A4C;
	sub_83222030(ctx, base);
loc_83246A4C:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83246A60"))) PPC_WEAK_FUNC(sub_83246A60);
PPC_FUNC_IMPL(__imp__sub_83246A60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x83246A68;
	__savegprlr_20(ctx, base);
	// stwu r1,-736(r1)
	ea = -736 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// li r22,-1
	ctx.r22.s64 = -1;
	// mr r24,r25
	ctx.r24.u64 = ctx.r25.u64;
	// mr r20,r25
	ctx.r20.u64 = ctx.r25.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83246aa4
	if (cr6.eq) goto loc_83246AA4;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x83246aa4
	if (cr6.eq) goto loc_83246AA4;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,-29336
	ctx.r3.s64 = ctx.r11.s64 + -29336;
	// bl 0x8320d088
	ctx.lr = 0x83246AA4;
	sub_8320D088(ctx, base);
loc_83246AA4:
	// lwz r11,28(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 28);
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// stw r25,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r25.u32);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// blt cr6,0x83246b64
	if (cr6.lt) goto loc_83246B64;
	// lwz r10,16(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 16);
	// li r4,151
	ctx.r4.s64 = 151;
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
	// bl 0x83221378
	ctx.lr = 0x83246AE0;
	sub_83221378(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83246b2c
	if (cr6.eq) goto loc_83246B2C;
	// bl 0x825832f0
	ctx.lr = 0x83246AF0;
	sub_825832F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83255980
	ctx.lr = 0x83246AF8;
	sub_83255980(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,40
	cr6.compare<uint32_t>(ctx.r11.u32, 40, xer);
	// bne cr6,0x83246b44
	if (!cr6.eq) goto loc_83246B44;
	// li r4,41
	ctx.r4.s64 = 41;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83296d08
	ctx.lr = 0x83246B14;
	sub_83296D08(ctx, base);
	// add r11,r29,r31
	ctx.r11.u64 = ctx.r29.u64 + ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// bne cr6,0x83246b44
	if (!cr6.eq) goto loc_83246B44;
	// li r20,1
	ctx.r20.s64 = 1;
	// b 0x83246b44
	goto loc_83246B44;
loc_83246B2C:
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83222be8
	ctx.lr = 0x83246B40;
	sub_83222BE8(ctx, base);
	// addi r28,r1,368
	ctx.r28.s64 = ctx.r1.s64 + 368;
loc_83246B44:
	// lwz r11,28(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 28);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// blt cr6,0x83246b64
	if (cr6.lt) goto loc_83246B64;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x83222578
	ctx.lr = 0x83246B58;
	sub_83222578(ctx, base);
	// rlwinm r11,r3,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r22,r11,r3
	ctx.r22.u64 = ctx.r11.u64 & ctx.r3.u64;
loc_83246B64:
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x83255980
	ctx.lr = 0x83246B6C;
	sub_83255980(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// li r31,1
	ctx.r31.s64 = 1;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x83246bc0
	if (cr6.eq) goto loc_83246BC0;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// beq cr6,0x83246c34
	if (cr6.eq) goto loc_83246C34;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x83296f08
	ctx.lr = 0x83246B90;
	sub_83296F08(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83246c3c
	if (cr6.eq) goto loc_83246C3C;
loc_83246B98:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83246c3c
	if (cr6.eq) goto loc_83246C3C;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// add r3,r23,r3
	ctx.r3.u64 = ctx.r23.u64 + ctx.r3.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x83296f08
	ctx.lr = 0x83246BB4;
	sub_83296F08(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83246b98
	if (!cr6.eq) goto loc_83246B98;
	// b 0x83246c3c
	goto loc_83246C3C;
loc_83246BC0:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x83246c3c
	if (cr6.eq) goto loc_83246C3C;
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8328ac38
	ctx.lr = 0x83246BE4;
	sub_8328AC38(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83246c3c
	if (!cr6.eq) goto loc_83246C3C;
loc_83246BEC:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// beq cr6,0x83246c30
	if (cr6.eq) goto loc_83246C30;
	// clrlwi r11,r20,24
	ctx.r11.u64 = ctx.r20.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83246c0c
	if (cr6.eq) goto loc_83246C0C;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_83246C0C:
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x8328ac38
	ctx.lr = 0x83246C24;
	sub_8328AC38(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83246bec
	if (cr6.eq) goto loc_83246BEC;
	// b 0x83246c3c
	goto loc_83246C3C;
loc_83246C30:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_83246C34:
	// bl 0x83291758
	ctx.lr = 0x83246C38;
	sub_83291758(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_83246C3C:
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(ctx.r22.s32, 0, xer);
	// blt cr6,0x83246c50
	if (cr6.lt) goto loc_83246C50;
	// cmpw cr6,r31,r22
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r22.s32, xer);
	// ble cr6,0x83246c50
	if (!cr6.gt) goto loc_83246C50;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
loc_83246C50:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83273b48
	ctx.lr = 0x83246C58;
	sub_83273B48(ctx, base);
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x83246de8
	if (cr6.eq) goto loc_83246DE8;
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(ctx.r23.s32, 0, xer);
	// bne cr6,0x83246dd4
	if (!cr6.eq) goto loc_83246DD4;
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83246cac
	if (cr6.eq) goto loc_83246CAC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832917c0
	ctx.lr = 0x83246C9C;
	sub_832917C0(ctx, base);
	// add r31,r3,r27
	ctx.r31.u64 = ctx.r3.u64 + ctx.r27.u64;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83246cb0
	if (!cr6.eq) goto loc_83246CB0;
loc_83246CAC:
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_83246CB0:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x83246f00
	if (cr6.eq) goto loc_83246F00;
loc_83246CB8:
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(ctx.r22.s32, 0, xer);
	// blt cr6,0x83246cc8
	if (cr6.lt) goto loc_83246CC8;
	// cmpw cr6,r29,r22
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r22.s32, xer);
	// bge cr6,0x83246f00
	if (!cr6.lt) goto loc_83246F00;
loc_83246CC8:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83254ec0
	ctx.lr = 0x83246CDC;
	sub_83254EC0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83246cf8
	if (cr6.eq) goto loc_83246CF8;
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// cmplwi cr6,r11,256
	cr6.compare<uint32_t>(ctx.r11.u32, 256, xer);
	// bge cr6,0x83246cf8
	if (!cr6.lt) goto loc_83246CF8;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stbx r25,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r25.u8);
loc_83246CF8:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83255a88
	ctx.lr = 0x83246D00;
	sub_83255A88(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83223af0
	ctx.lr = 0x83246D0C;
	sub_83223AF0(ctx, base);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83270fa0
	ctx.lr = 0x83246D1C;
	sub_83270FA0(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83246f00
	if (cr6.eq) goto loc_83246F00;
	// clrlwi r11,r20,24
	ctx.r11.u64 = ctx.r20.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83246da4
	if (cr6.eq) goto loc_83246DA4;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x83246da4
	if (cr6.eq) goto loc_83246DA4;
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(ctx.r22.s32, 0, xer);
	// blt cr6,0x83246d54
	if (cr6.lt) goto loc_83246D54;
	// cmpw cr6,r29,r22
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r22.s32, xer);
	// bge cr6,0x83246da4
	if (!cr6.lt) goto loc_83246DA4;
loc_83246D54:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,256
	ctx.r5.s64 = 256;
	// add r4,r11,r27
	ctx.r4.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83254ec0
	ctx.lr = 0x83246D68;
	sub_83254EC0(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stbx r25,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r25.u8);
	// bl 0x83255a88
	ctx.lr = 0x83246D84;
	sub_83255A88(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83223af0
	ctx.lr = 0x83246D90;
	sub_83223AF0(ctx, base);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83270fa0
	ctx.lr = 0x83246DA0;
	sub_83270FA0(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_83246DA4:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x83246ea8
	if (cr6.eq) goto loc_83246EA8;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// bne cr6,0x83246e50
	if (!cr6.eq) goto loc_83246E50;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83246e34
	if (!cr6.eq) goto loc_83246E34;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// b 0x83246ef8
	goto loc_83246EF8;
loc_83246DD4:
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83296f08
	ctx.lr = 0x83246DE0;
	sub_83296F08(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x83246cb0
	goto loc_83246CB0;
loc_83246DE8:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x83246cb0
	if (cr6.eq) goto loc_83246CB0;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8328ac38
	ctx.lr = 0x83246E04;
	sub_8328AC38(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83246cac
	if (!cr6.eq) goto loc_83246CAC;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x83246e2c
	if (!cr6.eq) goto loc_83246E2C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832917c0
	ctx.lr = 0x83246E24;
	sub_832917C0(ctx, base);
	// add r31,r3,r27
	ctx.r31.u64 = ctx.r3.u64 + ctx.r27.u64;
	// b 0x83246cb0
	goto loc_83246CB0;
loc_83246E2C:
	// add r31,r11,r27
	ctx.r31.u64 = ctx.r11.u64 + ctx.r27.u64;
	// b 0x83246cb0
	goto loc_83246CB0;
loc_83246E34:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832917c0
	ctx.lr = 0x83246E3C;
	sub_832917C0(ctx, base);
	// lbzux r11,r31,r3
	ea = ctx.r31.u32 + ctx.r3.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83246ef8
	if (!cr6.eq) goto loc_83246EF8;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// b 0x83246ef8
	goto loc_83246EF8;
loc_83246E50:
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// add r30,r11,r27
	ctx.r30.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x8328ac38
	ctx.lr = 0x83246E68;
	sub_8328AC38(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83246ee0
	if (!cr6.eq) goto loc_83246EE0;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x83246e90
	if (!cr6.eq) goto loc_83246E90;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832917c0
	ctx.lr = 0x83246E88;
	sub_832917C0(ctx, base);
	// add r31,r3,r30
	ctx.r31.u64 = ctx.r3.u64 + ctx.r30.u64;
	// b 0x83246e94
	goto loc_83246E94;
loc_83246E90:
	// add r31,r11,r27
	ctx.r31.u64 = ctx.r11.u64 + ctx.r27.u64;
loc_83246E94:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83246ef8
	if (!cr6.eq) goto loc_83246EF8;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// b 0x83246ef8
	goto loc_83246EF8;
loc_83246EA8:
	// add r30,r31,r23
	ctx.r30.u64 = ctx.r31.u64 + ctx.r23.u64;
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(ctx.r23.s32, 0, xer);
	// bne cr6,0x83246ee8
	if (!cr6.eq) goto loc_83246EE8;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83246ec8
	if (!cr6.eq) goto loc_83246EC8;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// b 0x83246ef8
	goto loc_83246EF8;
loc_83246EC8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832917c0
	ctx.lr = 0x83246ED0;
	sub_832917C0(ctx, base);
	// add r31,r3,r30
	ctx.r31.u64 = ctx.r3.u64 + ctx.r30.u64;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83246ef8
	if (!cr6.eq) goto loc_83246EF8;
loc_83246EE0:
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// b 0x83246ef8
	goto loc_83246EF8;
loc_83246EE8:
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83296f08
	ctx.lr = 0x83246EF4;
	sub_83296F08(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_83246EF8:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83246cb8
	if (!cr6.eq) goto loc_83246CB8;
loc_83246F00:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83222030
	ctx.lr = 0x83246F08;
	sub_83222030(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,8400
	ctx.r10.u64 = ctx.r11.u64 | 8400;
	// lwz r31,12(r21)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r21.u32 + 12);
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
	// beq cr6,0x83246f34
	if (cr6.eq) goto loc_83246F34;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x83246F34;
	sub_83222030(ctx, base);
loc_83246F34:
	// cntlzw r11,r26
	ctx.r11.u64 = ctx.r26.u32 == 0 ? 32 : __builtin_clz(ctx.r26.u32);
	// stw r26,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r26.u32);
	// li r10,32
	ctx.r10.s64 = 32;
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// sth r10,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r10.u16);
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// sth r8,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r8.u16);
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83246F5C"))) PPC_WEAK_FUNC(sub_83246F5C);
PPC_FUNC_IMPL(__imp__sub_83246F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83246F60"))) PPC_WEAK_FUNC(sub_83246F60);
PPC_FUNC_IMPL(__imp__sub_83246F60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83246F68;
	__savegprlr_27(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x83246f8c
	if (cr6.lt) goto loc_83246F8C;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// ble cr6,0x83246f9c
	if (!cr6.gt) goto loc_83246F9C;
loc_83246F8C:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r11,-29336
	ctx.r3.s64 = ctx.r11.s64 + -29336;
	// bl 0x8320d088
	ctx.lr = 0x83246F9C;
	sub_8320D088(ctx, base);
loc_83246F9C:
	// lwz r10,28(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bgt cr6,0x83246fbc
	if (cr6.gt) goto loc_83246FBC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,12(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// bl 0x83223af0
	ctx.lr = 0x83246FB4;
	sub_83223AF0(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83246FBC:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// li r4,151
	ctx.r4.s64 = 151;
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
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83221378
	ctx.lr = 0x83246FE4;
	sub_83221378(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83247004
	if (!cr6.eq) goto loc_83247004;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83222be8
	ctx.lr = 0x83247004;
	sub_83222BE8(ctx, base);
loc_83247004:
	// lwz r11,28(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// li r5,64
	ctx.r5.s64 = 64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// blt cr6,0x83247028
	if (cr6.lt) goto loc_83247028;
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x83222be8
	ctx.lr = 0x83247024;
	sub_83222BE8(ctx, base);
	// b 0x8324703c
	goto loc_8324703C;
loc_83247028:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-29304
	ctx.r4.s64 = ctx.r11.s64 + -29304;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83254ec0
	ctx.lr = 0x8324703C;
	sub_83254EC0(ctx, base);
loc_8324703C:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x8324705c
	if (cr6.eq) goto loc_8324705C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8328ad68
	ctx.lr = 0x83247054;
	sub_8328AD68(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x832470dc
	goto loc_832470DC;
loc_8324705C:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83296f08
	ctx.lr = 0x83247068;
	sub_83296F08(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832470e0
	if (cr6.eq) goto loc_832470E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83255980
	ctx.lr = 0x8324707C;
	sub_83255980(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83255980
	ctx.lr = 0x83247088;
	sub_83255980(ctx, base);
	// add r11,r30,r3
	ctx.r11.u64 = ctx.r30.u64 + ctx.r3.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r28,r11,0,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83209aa8
	ctx.lr = 0x8324709C;
	sub_83209AA8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x83255c58
	ctx.lr = 0x832470B0;
	sub_83255C58(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// subf r4,r31,r29
	ctx.r4.s64 = ctx.r29.s64 - ctx.r31.s64;
	// bl 0x83255240
	ctx.lr = 0x832470C4;
	sub_83255240(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83255980
	ctx.lr = 0x832470CC;
	sub_83255980(ctx, base);
	// add r4,r3,r29
	ctx.r4.u64 = ctx.r3.u64 + ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x83255a50
	ctx.lr = 0x832470DC;
	sub_83255A50(ctx, base);
loc_832470DC:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_832470E0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,12(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// bl 0x83223af0
	ctx.lr = 0x832470EC;
	sub_83223AF0(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x832470fc
	if (cr6.eq) goto loc_832470FC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83209d68
	ctx.lr = 0x832470FC;
	sub_83209D68(ctx, base);
loc_832470FC:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83247104"))) PPC_WEAK_FUNC(sub_83247104);
PPC_FUNC_IMPL(__imp__sub_83247104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83247108"))) PPC_WEAK_FUNC(sub_83247108);
PPC_FUNC_IMPL(__imp__sub_83247108) {
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
	// lhz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,1237
	cr6.compare<uint32_t>(ctx.r11.u32, 1237, xer);
	// bgt cr6,0x83247280
	if (cr6.gt) goto loc_83247280;
	// beq cr6,0x83247268
	if (cr6.eq) goto loc_83247268;
	// addi r11,r11,-1183
	ctx.r11.s64 = ctx.r11.s64 + -1183;
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// bgt cr6,0x83247298
	if (cr6.gt) goto loc_83247298;
	// lis r12,-31964
	ctx.r12.s64 = -2094792704;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,29000
	ctx.r12.s64 = ctx.r12.s64 + 29000;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_83247170;
	case 1:
		goto loc_83247188;
	case 2:
		goto loc_832471A0;
	case 3:
		goto loc_832471BC;
	case 4:
		goto loc_832471D8;
	case 5:
		goto loc_832471F0;
	case 6:
		goto loc_83247208;
	case 7:
		goto loc_83247220;
	case 8:
		goto loc_83247238;
	case 9:
		goto loc_83247250;
	default:
		return;
	}
	// lwz r25,29040(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + 29040);
	// lwz r25,29064(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + 29064);
	// lwz r25,29088(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + 29088);
	// lwz r25,29116(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + 29116);
	// lwz r25,29144(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + 29144);
	// lwz r25,29168(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + 29168);
	// lwz r25,29192(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + 29192);
	// lwz r25,29216(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + 29216);
	// lwz r25,29240(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + 29240);
	// lwz r25,29264(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + 29264);
loc_83247170:
	// bl 0x83245cd0
	ctx.lr = 0x83247174;
	sub_83245CD0(ctx, base);
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
loc_83247188:
	// bl 0x83245dc0
	ctx.lr = 0x8324718C;
	sub_83245DC0(ctx, base);
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
loc_832471A0:
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x83246158
	ctx.lr = 0x832471A8;
	sub_83246158(ctx, base);
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
loc_832471BC:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x83246158
	ctx.lr = 0x832471C4;
	sub_83246158(ctx, base);
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
loc_832471D8:
	// bl 0x83246200
	ctx.lr = 0x832471DC;
	sub_83246200(ctx, base);
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
loc_832471F0:
	// bl 0x83246360
	ctx.lr = 0x832471F4;
	sub_83246360(ctx, base);
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
loc_83247208:
	// bl 0x83245f90
	ctx.lr = 0x8324720C;
	sub_83245F90(ctx, base);
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
loc_83247220:
	// bl 0x83246070
	ctx.lr = 0x83247224;
	sub_83246070(ctx, base);
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
loc_83247238:
	// bl 0x83246a60
	ctx.lr = 0x8324723C;
	sub_83246A60(ctx, base);
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
loc_83247250:
	// bl 0x83246518
	ctx.lr = 0x83247254;
	sub_83246518(ctx, base);
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
loc_83247268:
	// bl 0x83245ea0
	ctx.lr = 0x8324726C;
	sub_83245EA0(ctx, base);
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
loc_83247280:
	// cmplwi cr6,r11,2322
	cr6.compare<uint32_t>(ctx.r11.u32, 2322, xer);
	// beq cr6,0x832472dc
	if (cr6.eq) goto loc_832472DC;
	// cmplwi cr6,r11,2323
	cr6.compare<uint32_t>(ctx.r11.u32, 2323, xer);
	// beq cr6,0x832472c4
	if (cr6.eq) goto loc_832472C4;
	// cmplwi cr6,r11,2324
	cr6.compare<uint32_t>(ctx.r11.u32, 2324, xer);
	// beq cr6,0x832472ac
	if (cr6.eq) goto loc_832472AC;
loc_83247298:
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
loc_832472AC:
	// bl 0x83246910
	ctx.lr = 0x832472B0;
	sub_83246910(ctx, base);
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
loc_832472C4:
	// bl 0x83246f60
	ctx.lr = 0x832472C8;
	sub_83246F60(ctx, base);
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
loc_832472DC:
	// bl 0x83246628
	ctx.lr = 0x832472E0;
	sub_83246628(ctx, base);
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

__attribute__((alias("__imp__sub_832472F4"))) PPC_WEAK_FUNC(sub_832472F4);
PPC_FUNC_IMPL(__imp__sub_832472F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832472F8"))) PPC_WEAK_FUNC(sub_832472F8);
PPC_FUNC_IMPL(__imp__sub_832472F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x83247108
	sub_83247108(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832472FC"))) PPC_WEAK_FUNC(sub_832472FC);
PPC_FUNC_IMPL(__imp__sub_832472FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83247300"))) PPC_WEAK_FUNC(sub_83247300);
PPC_FUNC_IMPL(__imp__sub_83247300) {
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
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83247334
	if (cr6.eq) goto loc_83247334;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,13276
	ctx.r3.s64 = ctx.r11.s64 + 13276;
	// bl 0x8320d088
	ctx.lr = 0x83247334;
	sub_8320D088(ctx, base);
loc_83247334:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// blt cr6,0x832473fc
	if (cr6.lt) goto loc_832473FC;
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
	// bl 0x832217a8
	ctx.lr = 0x83247364;
	sub_832217A8(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x832473e4
	if (cr6.eq) goto loc_832473E4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83220448
	ctx.lr = 0x83247378;
	sub_83220448(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lhz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,1160
	cr6.compare<uint32_t>(ctx.r11.u32, 1160, xer);
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x832473cc
	if (cr6.eq) goto loc_832473CC;
	// cmplwi cr6,r11,1161
	cr6.compare<uint32_t>(ctx.r11.u32, 1161, xer);
	// beq cr6,0x832473b4
	if (cr6.eq) goto loc_832473B4;
	// cmplwi cr6,r11,1176
	cr6.compare<uint32_t>(ctx.r11.u32, 1176, xer);
	// bne cr6,0x832473d4
	if (!cr6.eq) goto loc_832473D4;
	// bl 0x831d2588
	ctx.lr = 0x832473A0;
	sub_831D2588(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// bl 0x832248d8
	ctx.lr = 0x832473B0;
	sub_832248D8(ctx, base);
	// b 0x83247404
	goto loc_83247404;
loc_832473B4:
	// bl 0x831d1930
	ctx.lr = 0x832473B8;
	sub_831D1930(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// bl 0x832248d8
	ctx.lr = 0x832473C8;
	sub_832248D8(ctx, base);
	// b 0x83247404
	goto loc_83247404;
loc_832473CC:
	// bl 0x831d1a10
	ctx.lr = 0x832473D0;
	sub_831D1A10(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
loc_832473D4:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// bl 0x832248d8
	ctx.lr = 0x832473E0;
	sub_832248D8(ctx, base);
	// b 0x83247404
	goto loc_83247404;
loc_832473E4:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lhz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,13284
	ctx.r5.s64 = ctx.r11.s64 + 13284;
	// li r3,345
	ctx.r3.s64 = 345;
	// bl 0x8320d548
	ctx.lr = 0x832473FC;
	sub_8320D548(ctx, base);
loc_832473FC:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83223850
	ctx.lr = 0x83247404;
	sub_83223850(ctx, base);
loc_83247404:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8324741C"))) PPC_WEAK_FUNC(sub_8324741C);
PPC_FUNC_IMPL(__imp__sub_8324741C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83247420"))) PPC_WEAK_FUNC(sub_83247420);
PPC_FUNC_IMPL(__imp__sub_83247420) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x83221690
	ctx.lr = 0x83247444;
	sub_83221690(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83247460
	if (cr6.eq) goto loc_83247460;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x83226378
	ctx.lr = 0x8324745C;
	sub_83226378(ctx, base);
	// b 0x832475a4
	goto loc_832475A4;
loc_83247460:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832217a8
	ctx.lr = 0x83247468;
	sub_832217A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8324754c
	if (cr6.eq) goto loc_8324754C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832206f0
	ctx.lr = 0x8324747C;
	sub_832206F0(ctx, base);
	// lhz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,1166
	cr6.compare<uint32_t>(ctx.r11.u32, 1166, xer);
	// beq cr6,0x832474c4
	if (cr6.eq) goto loc_832474C4;
	// cmplwi cr6,r11,1167
	cr6.compare<uint32_t>(ctx.r11.u32, 1167, xer);
	// beq cr6,0x8324752c
	if (cr6.eq) goto loc_8324752C;
	// cmplwi cr6,r11,1168
	cr6.compare<uint32_t>(ctx.r11.u32, 1168, xer);
	// bne cr6,0x832474c8
	if (!cr6.eq) goto loc_832474C8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f0,9000(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 9000);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x832474b0
	if (cr6.lt) goto loc_832474B0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_832474B0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f0,15760(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 15760);
	// fadd f1,f1,f0
	ctx.f1.f64 = ctx.f1.f64 + ctx.f0.f64;
loc_832474C4:
	// bl 0x831d1ca8
	ctx.lr = 0x832474C8;
	sub_831D1CA8(ctx, base);
loc_832474C8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f0,-2096(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -2096);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x832474e0
	if (cr6.lt) goto loc_832474E0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_832474E0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83247534
	if (!cr6.eq) goto loc_83247534;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f0,-2104(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -2104);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x83247504
	if (cr6.gt) goto loc_83247504;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83247504:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83247534
	if (!cr6.eq) goto loc_83247534;
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// extsw r4,r11
	ctx.r4.s64 = ctx.r11.s32;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x8322e5b0
	ctx.lr = 0x83247528;
	sub_8322E5B0(ctx, base);
	// b 0x832475a4
	goto loc_832475A4;
loc_8324752C:
	// bl 0x831d18f0
	ctx.lr = 0x83247530;
	sub_831D18F0(ctx, base);
	// b 0x832474c8
	goto loc_832474C8;
loc_83247534:
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x832238c0
	ctx.lr = 0x83247548;
	sub_832238C0(ctx, base);
	// b 0x832475a4
	goto loc_832475A4;
loc_8324754C:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83247594
	if (cr6.eq) goto loc_83247594;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// bne cr6,0x83247570
	if (!cr6.eq) goto loc_83247570;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83247594
	if (!cr6.eq) goto loc_83247594;
loc_83247570:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lhz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,13284
	ctx.r5.s64 = ctx.r11.s64 + 13284;
	// li r3,345
	ctx.r3.s64 = 345;
	// bl 0x8320d548
	ctx.lr = 0x83247588;
	sub_8320D548(ctx, base);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x83223850
	ctx.lr = 0x83247590;
	sub_83223850(ctx, base);
	// b 0x832475a4
	goto loc_832475A4;
loc_83247594:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x832240b8
	ctx.lr = 0x832475A4;
	sub_832240B8(ctx, base);
loc_832475A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832475BC"))) PPC_WEAK_FUNC(sub_832475BC);
PPC_FUNC_IMPL(__imp__sub_832475BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832475C0"))) PPC_WEAK_FUNC(sub_832475C0);
PPC_FUNC_IMPL(__imp__sub_832475C0) {
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
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x832475f0
	if (cr6.eq) goto loc_832475F0;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,13276
	ctx.r3.s64 = ctx.r11.s64 + 13276;
	// bl 0x8320d088
	ctx.lr = 0x832475F0;
	sub_8320D088(ctx, base);
loc_832475F0:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// blt cr6,0x83247634
	if (cr6.lt) goto loc_83247634;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x83247420
	ctx.lr = 0x83247620;
	sub_83247420(ctx, base);
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
loc_83247634:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83223850
	ctx.lr = 0x8324763C;
	sub_83223850(ctx, base);
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

__attribute__((alias("__imp__sub_83247650"))) PPC_WEAK_FUNC(sub_83247650);
PPC_FUNC_IMPL(__imp__sub_83247650) {
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
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83247684
	if (cr6.eq) goto loc_83247684;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,13276
	ctx.r3.s64 = ctx.r11.s64 + 13276;
	// bl 0x8320d088
	ctx.lr = 0x83247684;
	sub_8320D088(ctx, base);
loc_83247684:
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// blt cr6,0x83247754
	if (cr6.lt) goto loc_83247754;
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
	ctx.lr = 0x832476B4;
	sub_832217A8(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83247708
	if (cr6.eq) goto loc_83247708;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83220448
	ctx.lr = 0x832476C8;
	sub_83220448(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x832476e0
	if (cr6.lt) goto loc_832476E0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_832476E0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832476fc
	if (cr6.eq) goto loc_832476FC;
	// bl 0x83225150
	ctx.lr = 0x832476F8;
	sub_83225150(ctx, base);
	// b 0x8324775c
	goto loc_8324775C;
loc_832476FC:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x832240b8
	ctx.lr = 0x83247704;
	sub_832240B8(ctx, base);
	// b 0x8324775c
	goto loc_8324775C;
loc_83247708:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// bne cr6,0x83247734
	if (!cr6.eq) goto loc_83247734;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83247734
	if (cr6.eq) goto loc_83247734;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x83243070
	ctx.lr = 0x83247730;
	sub_83243070(ctx, base);
	// b 0x8324775c
	goto loc_8324775C;
loc_83247734:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83247754
	if (cr6.eq) goto loc_83247754;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lhz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,13284
	ctx.r5.s64 = ctx.r11.s64 + 13284;
	// li r3,345
	ctx.r3.s64 = 345;
	// bl 0x8320d548
	ctx.lr = 0x83247754;
	sub_8320D548(ctx, base);
loc_83247754:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x83223850
	ctx.lr = 0x8324775C;
	sub_83223850(ctx, base);
loc_8324775C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83247774"))) PPC_WEAK_FUNC(sub_83247774);
PPC_FUNC_IMPL(__imp__sub_83247774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83247778"))) PPC_WEAK_FUNC(sub_83247778);
PPC_FUNC_IMPL(__imp__sub_83247778) {
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
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x832477ac
	if (cr6.eq) goto loc_832477AC;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,13276
	ctx.r3.s64 = ctx.r11.s64 + 13276;
	// bl 0x8320d088
	ctx.lr = 0x832477AC;
	sub_8320D088(ctx, base);
loc_832477AC:
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// blt cr6,0x8324789c
	if (cr6.lt) goto loc_8324789C;
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
	ctx.lr = 0x832477DC;
	sub_832217A8(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83247884
	if (cr6.eq) goto loc_83247884;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83220448
	ctx.lr = 0x832477F0;
	sub_83220448(ctx, base);
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,5696
	ctx.r11.s64 = ctx.r11.s64 + 5696;
	// lfs f0,136(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x8324780c
	if (!cr6.lt) goto loc_8324780C;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8324780C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83247884
	if (cr6.eq) goto loc_83247884;
	// lfs f0,132(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x8324782c
	if (!cr6.gt) goto loc_8324782C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8324782C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83247884
	if (cr6.eq) goto loc_83247884;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lhz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,1173
	cr6.compare<uint32_t>(ctx.r11.u32, 1173, xer);
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x8324786c
	if (cr6.eq) goto loc_8324786C;
	// cmplwi cr6,r11,1174
	cr6.compare<uint32_t>(ctx.r11.u32, 1174, xer);
	// bne cr6,0x83247874
	if (!cr6.eq) goto loc_83247874;
	// bl 0x831d1608
	ctx.lr = 0x83247858;
	sub_831D1608(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// bl 0x832248d8
	ctx.lr = 0x83247868;
	sub_832248D8(ctx, base);
	// b 0x832478a4
	goto loc_832478A4;
loc_8324786C:
	// bl 0x831d16d0
	ctx.lr = 0x83247870;
	sub_831D16D0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
loc_83247874:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// bl 0x832248d8
	ctx.lr = 0x83247880;
	sub_832248D8(ctx, base);
	// b 0x832478a4
	goto loc_832478A4;
loc_83247884:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lhz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,13284
	ctx.r5.s64 = ctx.r11.s64 + 13284;
	// li r3,345
	ctx.r3.s64 = 345;
	// bl 0x8320d548
	ctx.lr = 0x8324789C;
	sub_8320D548(ctx, base);
loc_8324789C:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x83223850
	ctx.lr = 0x832478A4;
	sub_83223850(ctx, base);
loc_832478A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832478BC"))) PPC_WEAK_FUNC(sub_832478BC);
PPC_FUNC_IMPL(__imp__sub_832478BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832478C0"))) PPC_WEAK_FUNC(sub_832478C0);
PPC_FUNC_IMPL(__imp__sub_832478C0) {
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
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x832478f4
	if (cr6.eq) goto loc_832478F4;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,13276
	ctx.r3.s64 = ctx.r11.s64 + 13276;
	// bl 0x8320d088
	ctx.lr = 0x832478F4;
	sub_8320D088(ctx, base);
loc_832478F4:
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// blt cr6,0x832479c8
	if (cr6.lt) goto loc_832479C8;
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
	// lhzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r6,8
	cr6.compare<uint32_t>(ctx.r6.u32, 8, xer);
	// bne cr6,0x83247958
	if (!cr6.eq) goto loc_83247958;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83247958
	if (cr6.eq) goto loc_83247958;
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// addi r9,r10,5696
	ctx.r9.s64 = ctx.r10.s64 + 5696;
	// lfs f1,116(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 116);
	ctx.f1.f64 = double(temp.f32);
	// bge cr6,0x8324794c
	if (!cr6.lt) goto loc_8324794C;
	// fneg f1,f1
	ctx.f1.u64 = ctx.f1.u64 ^ 0x8000000000000000;
loc_8324794C:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x832248d8
	ctx.lr = 0x83247954;
	sub_832248D8(ctx, base);
	// b 0x832479d0
	goto loc_832479D0;
loc_83247958:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832217a8
	ctx.lr = 0x83247960;
	sub_832217A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832479b0
	if (cr6.eq) goto loc_832479B0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83220448
	ctx.lr = 0x83247974;
	sub_83220448(ctx, base);
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,5696
	ctx.r9.s64 = ctx.r11.s64 + 5696;
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// lfs f2,132(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 132);
	ctx.f2.f64 = double(temp.f32);
	// fcmpu cr6,f2,f0
	cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// bne cr6,0x83247998
	if (!cr6.eq) goto loc_83247998;
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// beq cr6,0x832479a0
	if (cr6.eq) goto loc_832479A0;
loc_83247998:
	// bl 0x831d17c0
	ctx.lr = 0x8324799C;
	sub_831D17C0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
loc_832479A0:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// bl 0x832248d8
	ctx.lr = 0x832479AC;
	sub_832248D8(ctx, base);
	// b 0x832479d0
	goto loc_832479D0;
loc_832479B0:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lhz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,13284
	ctx.r5.s64 = ctx.r11.s64 + 13284;
	// li r3,345
	ctx.r3.s64 = 345;
	// bl 0x8320d548
	ctx.lr = 0x832479C8;
	sub_8320D548(ctx, base);
loc_832479C8:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x83223850
	ctx.lr = 0x832479D0;
	sub_83223850(ctx, base);
loc_832479D0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832479E8"))) PPC_WEAK_FUNC(sub_832479E8);
PPC_FUNC_IMPL(__imp__sub_832479E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832479F0;
	__savegprlr_27(ctx, base);
	// stfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f29.u64);
	// stfd f30,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x83247a20
	if (cr6.eq) goto loc_83247A20;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,13276
	ctx.r3.s64 = ctx.r11.s64 + 13276;
	// bl 0x8320d088
	ctx.lr = 0x83247A20;
	sub_8320D088(ctx, base);
loc_83247A20:
	// lwz r10,28(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// blt cr6,0x83247b88
	if (cr6.lt) goto loc_83247B88;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r28,0
	ctx.r28.s64 = 0;
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lfs f31,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
	// subf r6,r10,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r10.s64;
	// rlwinm r10,r6,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// lhzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r5,8
	cr6.compare<uint32_t>(ctx.r5.u32, 8, xer);
	// beq cr6,0x83247a74
	if (cr6.eq) goto loc_83247A74;
	// li r27,0
	ctx.r27.s64 = 0;
	// b 0x83247a80
	goto loc_83247A80;
loc_83247A74:
	// lwz r27,4(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// bne cr6,0x83247ac0
	if (!cr6.eq) goto loc_83247AC0;
loc_83247A80:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832217a8
	ctx.lr = 0x83247A88;
	sub_832217A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83247aa4
	if (cr6.eq) goto loc_83247AA4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83220448
	ctx.lr = 0x83247A9C;
	sub_83220448(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// b 0x83247ac0
	goto loc_83247AC0;
loc_83247AA4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lhz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r29.u32 + 8);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,10600
	ctx.r5.s64 = ctx.r11.s64 + 10600;
	// li r3,345
	ctx.r3.s64 = 345;
	// bl 0x8320d548
	ctx.lr = 0x83247ABC;
	sub_8320D548(ctx, base);
	// li r28,1
	ctx.r28.s64 = 1;
loc_83247AC0:
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// beq cr6,0x83247ad4
	if (cr6.eq) goto loc_83247AD4;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x83247ae0
	goto loc_83247AE0;
loc_83247AD4:
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne cr6,0x83247b00
	if (!cr6.eq) goto loc_83247B00;
loc_83247AE0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832217a8
	ctx.lr = 0x83247AE8;
	sub_832217A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83247b70
	if (cr6.eq) goto loc_83247B70;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83220448
	ctx.lr = 0x83247AFC;
	sub_83220448(ctx, base);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
loc_83247B00:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bne cr6,0x83247b88
	if (!cr6.eq) goto loc_83247B88;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// bne cr6,0x83247b18
	if (!cr6.eq) goto loc_83247B18;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq cr6,0x83247b40
	if (cr6.eq) goto loc_83247B40;
loc_83247B18:
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// extsw r10,r27
	ctx.r10.s64 = ctx.r27.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f29,f11
	ctx.f29.f64 = double(float(ctx.f11.f64));
	// frsp f30,f12
	ctx.f30.f64 = double(float(ctx.f12.f64));
loc_83247B40:
	// fcmpu cr6,f29,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f29.f64, ctx.f31.f64);
	// bne cr6,0x83247ba4
	if (!cr6.eq) goto loc_83247BA4;
	// fcmpu cr6,f30,f31
	cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// bne cr6,0x83247ba4
	if (!cr6.eq) goto loc_83247BA4;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x832248d8
	ctx.lr = 0x83247B5C;
	sub_832248D8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f30,-64(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83247B70:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lhz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r29.u32 + 8);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,10604
	ctx.r5.s64 = ctx.r11.s64 + 10604;
	// li r3,345
	ctx.r3.s64 = 345;
	// bl 0x8320d548
	ctx.lr = 0x83247B88;
	sub_8320D548(ctx, base);
loc_83247B88:
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x83223850
	ctx.lr = 0x83247B90;
	sub_83223850(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f30,-64(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83247BA4:
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x831d17c0
	ctx.lr = 0x83247BB0;
	sub_831D17C0(ctx, base);
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// bl 0x832248d8
	ctx.lr = 0x83247BBC;
	sub_832248D8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f30,-64(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83247BD0"))) PPC_WEAK_FUNC(sub_83247BD0);
PPC_FUNC_IMPL(__imp__sub_83247BD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x83247BD8;
	__savegprlr_23(ctx, base);
	// stfd f29,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f29.u64);
	// stfd f30,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f30.u64);
	// stfd f31,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x83247c08
	if (cr6.eq) goto loc_83247C08;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,13276
	ctx.r3.s64 = ctx.r11.s64 + 13276;
	// bl 0x8320d088
	ctx.lr = 0x83247C08;
	sub_8320D088(ctx, base);
loc_83247C08:
	// lwz r9,28(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28);
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// blt cr6,0x83247d70
	if (cr6.lt) goto loc_83247D70;
	// lwz r11,16(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r25,r10,13288
	ctx.r25.s64 = ctx.r10.s64 + 13288;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f31,9008(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
	// subf r5,r9,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r9.s64;
	// rlwinm r10,r5,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r26,r31,8
	ctx.r26.s64 = ctx.r31.s64 + 8;
	// lhzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r4,8
	cr6.compare<uint32_t>(ctx.r4.u32, 8, xer);
	// beq cr6,0x83247c6c
	if (cr6.eq) goto loc_83247C6C;
	// li r24,0
	ctx.r24.s64 = 0;
	// b 0x83247c78
	goto loc_83247C78;
loc_83247C6C:
	// lwz r24,4(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(ctx.r24.s32, 0, xer);
	// bne cr6,0x83247cc8
	if (!cr6.eq) goto loc_83247CC8;
loc_83247C78:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832217a8
	ctx.lr = 0x83247C80;
	sub_832217A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83247cb0
	if (cr6.eq) goto loc_83247CB0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83220448
	ctx.lr = 0x83247C94;
	sub_83220448(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// fcmpu cr6,f1,f31
	cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bne cr6,0x83247ca8
	if (!cr6.eq) goto loc_83247CA8;
	// li r27,1
	ctx.r27.s64 = 1;
	// b 0x83247cc8
	goto loc_83247CC8;
loc_83247CA8:
	// li r27,0
	ctx.r27.s64 = 0;
	// b 0x83247cc8
	goto loc_83247CC8;
loc_83247CB0:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lhz r4,8(r23)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r23.u32 + 8);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r3,345
	ctx.r3.s64 = 345;
	// bl 0x8320d548
	ctx.lr = 0x83247CC4;
	sub_8320D548(ctx, base);
	// li r28,1
	ctx.r28.s64 = 1;
loc_83247CC8:
	// lhz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// beq cr6,0x83247cdc
	if (cr6.eq) goto loc_83247CDC;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x83247ce8
	goto loc_83247CE8;
loc_83247CDC:
	// lwz r30,4(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne cr6,0x83247d14
	if (!cr6.eq) goto loc_83247D14;
loc_83247CE8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x832217a8
	ctx.lr = 0x83247CF0;
	sub_832217A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83247d58
	if (cr6.eq) goto loc_83247D58;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83220448
	ctx.lr = 0x83247D04;
	sub_83220448(ctx, base);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// fcmpu cr6,f1,f31
	cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bne cr6,0x83247d50
	if (!cr6.eq) goto loc_83247D50;
	// li r29,1
	ctx.r29.s64 = 1;
loc_83247D14:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bne cr6,0x83247d70
	if (!cr6.eq) goto loc_83247D70;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83247d8c
	if (cr6.eq) goto loc_83247D8C;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lwz r3,12(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// addi r10,r11,5696
	ctx.r10.s64 = ctx.r11.s64 + 5696;
	// lfs f1,132(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x832248d8
	ctx.lr = 0x83247D3C;
	sub_832248D8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f29,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f30,-96(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_83247D50:
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x83247d14
	goto loc_83247D14;
loc_83247D58:
	// lhz r4,8(r23)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r23.u32 + 8);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
loc_83247D64:
	// addi r5,r11,7860
	ctx.r5.s64 = ctx.r11.s64 + 7860;
	// li r3,345
	ctx.r3.s64 = 345;
	// bl 0x8320d548
	ctx.lr = 0x83247D70;
	sub_8320D548(ctx, base);
loc_83247D70:
	// lwz r3,12(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// bl 0x83223850
	ctx.lr = 0x83247D78;
	sub_83223850(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f29,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f30,-96(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_83247D8C:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83247dc8
	if (cr6.eq) goto loc_83247DC8;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne cr6,0x83247da4
	if (!cr6.eq) goto loc_83247DA4;
	// fcmpu cr6,f29,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f29.f64, ctx.f31.f64);
loc_83247DA4:
	// lwz r3,12(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// blt cr6,0x83247f6c
	if (cr6.lt) goto loc_83247F6C;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x832248d8
	ctx.lr = 0x83247DB4;
	sub_832248D8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f29,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f30,-96(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_83247DC8:
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(ctx.r24.s32, 0, xer);
	// beq cr6,0x83247e70
	if (cr6.eq) goto loc_83247E70;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne cr6,0x83247ddc
	if (!cr6.eq) goto loc_83247DDC;
	// fcmpu cr6,f29,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f29.f64, ctx.f31.f64);
loc_83247DDC:
	// blt cr6,0x83247e50
	if (cr6.lt) goto loc_83247E50;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(ctx.r24.s32, 0, xer);
	// bge cr6,0x83247e30
	if (!cr6.lt) goto loc_83247E30;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x831d1ca8
	ctx.lr = 0x83247DF0;
	sub_831D1CA8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// li r11,1
	ctx.r11.s64 = 1;
	// fsubs f13,f29,f0
	ctx.f13.f64 = double(float(ctx.f29.f64 - ctx.f0.f64));
	// fcmpu cr6,f13,f31
	cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// beq cr6,0x83247e08
	if (cr6.eq) goto loc_83247E08;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83247E08:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83247e30
	if (cr6.eq) goto loc_83247E30;
	// fctiwz f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f29.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f29.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x83247e30
	if (!cr6.eq) goto loc_83247E30;
	// li r24,1
	ctx.r24.s64 = 1;
loc_83247E30:
	// extsb r4,r24
	ctx.r4.s64 = ctx.r24.s8;
	// lwz r3,12(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// bl 0x83243070
	ctx.lr = 0x83247E3C;
	sub_83243070(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f29,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f30,-96(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_83247E50:
	// lwz r3,12(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
loc_83247E54:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x832248d8
	ctx.lr = 0x83247E5C;
	sub_832248D8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f29,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f30,-96(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_83247E70:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x83247f00
	if (!cr6.gt) goto loc_83247F00;
	// fcmpu cr6,f30,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// bge cr6,0x83247e88
	if (!cr6.lt) goto loc_83247E88;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83247E88:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83247e98
	if (!cr6.eq) goto loc_83247E98;
	// fneg f30,f30
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = ctx.f30.u64 ^ 0x8000000000000000;
loc_83247E98:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r10,r11,5696
	ctx.r10.s64 = ctx.r11.s64 + 5696;
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f0,132(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x83247eb8
	if (cr6.eq) goto loc_83247EB8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83247EB8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83247d70
	if (!cr6.eq) goto loc_83247D70;
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x83247ed4
	if (cr6.lt) goto loc_83247ED4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83247ED4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lwz r3,12(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83247f6c
	if (cr6.eq) goto loc_83247F6C;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x832248d8
	ctx.lr = 0x83247EEC;
	sub_832248D8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f29,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f30,-96(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_83247F00:
	// bge cr6,0x83247f88
	if (!cr6.lt) goto loc_83247F88;
	// fcmpu cr6,f30,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// bge cr6,0x83247f10
	if (!cr6.lt) goto loc_83247F10;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83247F10:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83247f20
	if (!cr6.eq) goto loc_83247F20;
	// fneg f30,f30
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = ctx.f30.u64 ^ 0x8000000000000000;
loc_83247F20:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r10,r11,5696
	ctx.r10.s64 = ctx.r11.s64 + 5696;
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f0,132(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x83247f40
	if (cr6.eq) goto loc_83247F40;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83247F40:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83247d70
	if (!cr6.eq) goto loc_83247D70;
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x83247f5c
	if (cr6.lt) goto loc_83247F5C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83247F5C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lwz r3,12(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83247e54
	if (cr6.eq) goto loc_83247E54;
loc_83247F6C:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83243070
	ctx.lr = 0x83247F74;
	sub_83243070(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f29,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f30,-96(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_83247F88:
	// fcmpu cr6,f30,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// blt cr6,0x83247f94
	if (cr6.lt) goto loc_83247F94;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83247F94:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83247ff0
	if (cr6.eq) goto loc_83247FF0;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x831d1ca8
	ctx.lr = 0x83247FA8;
	sub_831D1CA8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// li r11,1
	ctx.r11.s64 = 1;
	// fsubs f13,f29,f0
	ctx.f13.f64 = double(float(ctx.f29.f64 - ctx.f0.f64));
	// fcmpu cr6,f13,f31
	cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// beq cr6,0x83247fc0
	if (cr6.eq) goto loc_83247FC0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83247FC0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83247ff0
	if (!cr6.eq) goto loc_83247FF0;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lhz r4,8(r23)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r23.u32 + 8);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r3,345
	ctx.r3.s64 = 345;
	// bl 0x8320d548
	ctx.lr = 0x83247FE0;
	sub_8320D548(ctx, base);
	// lhz r4,8(r23)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r23.u32 + 8);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// b 0x83247d64
	goto loc_83247D64;
loc_83247FF0:
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x831d20a0
	ctx.lr = 0x83247FFC;
	sub_831D20A0(ctx, base);
	// lwz r3,12(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// bl 0x832248d8
	ctx.lr = 0x83248008;
	sub_832248D8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f29,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f30,-96(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8324801C"))) PPC_WEAK_FUNC(sub_8324801C);
PPC_FUNC_IMPL(__imp__sub_8324801C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83248020"))) PPC_WEAK_FUNC(sub_83248020);
PPC_FUNC_IMPL(__imp__sub_83248020) {
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
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83248054
	if (cr6.eq) goto loc_83248054;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,13276
	ctx.r3.s64 = ctx.r11.s64 + 13276;
	// bl 0x8320d088
	ctx.lr = 0x83248054;
	sub_8320D088(ctx, base);
loc_83248054:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// blt cr6,0x8324811c
	if (cr6.lt) goto loc_8324811C;
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
	// lhzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r6,8
	cr6.compare<uint32_t>(ctx.r6.u32, 8, xer);
	// bne cr6,0x832480a8
	if (!cr6.eq) goto loc_832480A8;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x832480a8
	if (cr6.eq) goto loc_832480A8;
	// ble cr6,0x83248104
	if (!cr6.gt) goto loc_83248104;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83243070
	ctx.lr = 0x832480A4;
	sub_83243070(ctx, base);
	// b 0x83248124
	goto loc_83248124;
loc_832480A8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832217a8
	ctx.lr = 0x832480B0;
	sub_832217A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83248104
	if (cr6.eq) goto loc_83248104;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83220448
	ctx.lr = 0x832480C4;
	sub_83220448(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x832480dc
	if (!cr6.lt) goto loc_832480DC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_832480DC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83248104
	if (cr6.eq) goto loc_83248104;
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x832480f4
	if (!cr6.gt) goto loc_832480F4;
	// fsqrts f0,f1
	ctx.f0.f64 = double(float(sqrt(ctx.f1.f64)));
loc_832480F4:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// bl 0x832248d8
	ctx.lr = 0x83248100;
	sub_832248D8(ctx, base);
	// b 0x83248124
	goto loc_83248124;
loc_83248104:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lhz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,13284
	ctx.r5.s64 = ctx.r11.s64 + 13284;
	// li r3,345
	ctx.r3.s64 = 345;
	// bl 0x8320d548
	ctx.lr = 0x8324811C;
	sub_8320D548(ctx, base);
loc_8324811C:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83223850
	ctx.lr = 0x83248124;
	sub_83223850(ctx, base);
loc_83248124:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8324813C"))) PPC_WEAK_FUNC(sub_8324813C);
PPC_FUNC_IMPL(__imp__sub_8324813C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83248140"))) PPC_WEAK_FUNC(sub_83248140);
PPC_FUNC_IMPL(__imp__sub_83248140) {
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
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83248174
	if (cr6.eq) goto loc_83248174;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,13276
	ctx.r3.s64 = ctx.r11.s64 + 13276;
	// bl 0x8320d088
	ctx.lr = 0x83248174;
	sub_8320D088(ctx, base);
loc_83248174:
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// blt cr6,0x8324826c
	if (cr6.lt) goto loc_8324826C;
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
	// lhzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r6,8
	cr6.compare<uint32_t>(ctx.r6.u32, 8, xer);
	// bne cr6,0x832481c8
	if (!cr6.eq) goto loc_832481C8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x832481c8
	if (cr6.eq) goto loc_832481C8;
	// ble cr6,0x83248254
	if (!cr6.gt) goto loc_83248254;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x83243070
	ctx.lr = 0x832481C4;
	sub_83243070(ctx, base);
	// b 0x83248274
	goto loc_83248274;
loc_832481C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832217a8
	ctx.lr = 0x832481D0;
	sub_832217A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83248254
	if (cr6.eq) goto loc_83248254;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83220448
	ctx.lr = 0x832481E4;
	sub_83220448(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// beq cr6,0x832481fc
	if (cr6.eq) goto loc_832481FC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_832481FC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83248218
	if (cr6.eq) goto loc_83248218;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x83243070
	ctx.lr = 0x83248214;
	sub_83243070(ctx, base);
	// b 0x83248274
	goto loc_83248274;
loc_83248218:
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// bge cr6,0x83248228
	if (!cr6.lt) goto loc_83248228;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83248228:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83248254
	if (cr6.eq) goto loc_83248254;
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x83248244
	if (!cr6.gt) goto loc_83248244;
	// bl 0x831d1ce8
	ctx.lr = 0x83248240;
	sub_831D1CE8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
loc_83248244:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// bl 0x832248d8
	ctx.lr = 0x83248250;
	sub_832248D8(ctx, base);
	// b 0x83248274
	goto loc_83248274;
loc_83248254:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lhz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,13284
	ctx.r5.s64 = ctx.r11.s64 + 13284;
	// li r3,345
	ctx.r3.s64 = 345;
	// bl 0x8320d548
	ctx.lr = 0x8324826C;
	sub_8320D548(ctx, base);
loc_8324826C:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x83223850
	ctx.lr = 0x83248274;
	sub_83223850(ctx, base);
loc_83248274:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8324828C"))) PPC_WEAK_FUNC(sub_8324828C);
PPC_FUNC_IMPL(__imp__sub_8324828C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83248290"))) PPC_WEAK_FUNC(sub_83248290);
PPC_FUNC_IMPL(__imp__sub_83248290) {
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
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x832482c4
	if (cr6.eq) goto loc_832482C4;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,13276
	ctx.r3.s64 = ctx.r11.s64 + 13276;
	// bl 0x8320d088
	ctx.lr = 0x832482C4;
	sub_8320D088(ctx, base);
loc_832482C4:
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// blt cr6,0x83248370
	if (cr6.lt) goto loc_83248370;
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
	// lhzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r6,8
	cr6.compare<uint32_t>(ctx.r6.u32, 8, xer);
	// bne cr6,0x83248328
	if (!cr6.eq) goto loc_83248328;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83248328
	if (cr6.eq) goto loc_83248328;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// ble cr6,0x83248318
	if (!cr6.gt) goto loc_83248318;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83243070
	ctx.lr = 0x83248314;
	sub_83243070(ctx, base);
	// b 0x83248378
	goto loc_83248378;
loc_83248318:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x832248d8
	ctx.lr = 0x83248324;
	sub_832248D8(ctx, base);
	// b 0x83248378
	goto loc_83248378;
loc_83248328:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832217a8
	ctx.lr = 0x83248330;
	sub_832217A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83248358
	if (cr6.eq) goto loc_83248358;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83220448
	ctx.lr = 0x83248344;
	sub_83220448(ctx, base);
	// bl 0x831d1af0
	ctx.lr = 0x83248348;
	sub_831D1AF0(ctx, base);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// bl 0x832248d8
	ctx.lr = 0x83248354;
	sub_832248D8(ctx, base);
	// b 0x83248378
	goto loc_83248378;
loc_83248358:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lhz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,13284
	ctx.r5.s64 = ctx.r11.s64 + 13284;
	// li r3,345
	ctx.r3.s64 = 345;
	// bl 0x8320d548
	ctx.lr = 0x83248370;
	sub_8320D548(ctx, base);
loc_83248370:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x83223850
	ctx.lr = 0x83248378;
	sub_83223850(ctx, base);
loc_83248378:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83248390"))) PPC_WEAK_FUNC(sub_83248390);
PPC_FUNC_IMPL(__imp__sub_83248390) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x83248398;
	__savegprlr_23(ctx, base);
	// stfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f30.u64);
	// stfd f31,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x832483c4
	if (!cr6.lt) goto loc_832483C4;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,13276
	ctx.r3.s64 = ctx.r11.s64 + 13276;
	// bl 0x8320d088
	ctx.lr = 0x832483C4;
	sub_8320D088(ctx, base);
loc_832483C4:
	// lwz r11,28(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bgt cr6,0x832483ec
	if (cr6.gt) goto loc_832483EC;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,12(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// bl 0x83243070
	ctx.lr = 0x832483DC;
	sub_83243070(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_832483EC:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r25,28(r27)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lfs f30,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f30.f64 = double(temp.f32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// subf r7,r25,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r25.s64;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ble cr6,0x83248530
	if (!cr6.gt) goto loc_83248530;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r23,8
	ctx.r23.s64 = 8;
	// ori r24,r11,8400
	ctx.r24.u64 = ctx.r11.u64 | 8400;
loc_83248430:
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bne cr6,0x8324849c
	if (!cr6.eq) goto loc_8324849C;
	// lwz r29,4(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq cr6,0x8324849c
	if (cr6.eq) goto loc_8324849C;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// beq cr6,0x83248460
	if (cr6.eq) goto loc_83248460;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble cr6,0x832484f0
	if (!cr6.gt) goto loc_832484F0;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bgt cr6,0x832484f0
	if (cr6.gt) goto loc_832484F0;
loc_83248460:
	// lwz r31,12(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// sraw r9,r24,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r24.s32 < 0) & (((ctx.r24.s32 >> temp.u32) << temp.u32) != ctx.r24.s32);
	ctx.r9.s64 = ctx.r24.s32 >> temp.u32;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83248484
	if (cr6.eq) goto loc_83248484;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x83248484;
	sub_83222030(ctx, base);
loc_83248484:
	// extsb r11,r29
	ctx.r11.s64 = ctx.r29.s8;
	// sth r23,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r23.u16);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x832484f0
	goto loc_832484F0;
loc_8324849C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832217a8
	ctx.lr = 0x832484A4;
	sub_832217A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83248510
	if (cr6.eq) goto loc_83248510;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83220448
	ctx.lr = 0x832484B8;
	sub_83220448(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// beq cr6,0x832484d8
	if (cr6.eq) goto loc_832484D8;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// blt cr6,0x832484d8
	if (cr6.lt) goto loc_832484D8;
	// bne cr6,0x832484f0
	if (!cr6.eq) goto loc_832484F0;
	// fcmpu cr6,f1,f30
	cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// ble cr6,0x832484f0
	if (!cr6.gt) goto loc_832484F0;
loc_832484D8:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,12(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x832240b8
	ctx.lr = 0x832484E8;
	sub_832240B8(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// fmr f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f31.f64;
loc_832484F0:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmpw cr6,r26,r25
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r25.s32, xer);
	// blt cr6,0x83248430
	if (cr6.lt) goto loc_83248430;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_83248510:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lhz r4,8(r27)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r27.u32 + 8);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,13284
	ctx.r5.s64 = ctx.r11.s64 + 13284;
	// li r3,345
	ctx.r3.s64 = 345;
	// bl 0x8320d548
	ctx.lr = 0x83248528;
	sub_8320D548(ctx, base);
	// lwz r3,12(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// bl 0x83223850
	ctx.lr = 0x83248530;
	sub_83223850(ctx, base);
loc_83248530:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83248540"))) PPC_WEAK_FUNC(sub_83248540);
PPC_FUNC_IMPL(__imp__sub_83248540) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x83248548;
	__savegprlr_23(ctx, base);
	// stfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f30.u64);
	// stfd f31,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x83248574
	if (!cr6.lt) goto loc_83248574;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,13276
	ctx.r3.s64 = ctx.r11.s64 + 13276;
	// bl 0x8320d088
	ctx.lr = 0x83248574;
	sub_8320D088(ctx, base);
loc_83248574:
	// lwz r11,28(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bgt cr6,0x8324859c
	if (cr6.gt) goto loc_8324859C;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,12(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// bl 0x83243070
	ctx.lr = 0x8324858C;
	sub_83243070(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_8324859C:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r25,28(r27)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lfs f30,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f30.f64 = double(temp.f32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// subf r7,r25,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r25.s64;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ble cr6,0x832486e0
	if (!cr6.gt) goto loc_832486E0;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r23,8
	ctx.r23.s64 = 8;
	// ori r24,r11,8400
	ctx.r24.u64 = ctx.r11.u64 | 8400;
loc_832485E0:
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bne cr6,0x8324864c
	if (!cr6.eq) goto loc_8324864C;
	// lwz r29,4(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq cr6,0x8324864c
	if (cr6.eq) goto loc_8324864C;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// beq cr6,0x83248610
	if (cr6.eq) goto loc_83248610;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bge cr6,0x832486a0
	if (!cr6.lt) goto loc_832486A0;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// blt cr6,0x832486a0
	if (cr6.lt) goto loc_832486A0;
loc_83248610:
	// lwz r31,12(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// sraw r9,r24,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r24.s32 < 0) & (((ctx.r24.s32 >> temp.u32) << temp.u32) != ctx.r24.s32);
	ctx.r9.s64 = ctx.r24.s32 >> temp.u32;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83248634
	if (cr6.eq) goto loc_83248634;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x83248634;
	sub_83222030(ctx, base);
loc_83248634:
	// extsb r11,r29
	ctx.r11.s64 = ctx.r29.s8;
	// sth r23,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r23.u16);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x832486a0
	goto loc_832486A0;
loc_8324864C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832217a8
	ctx.lr = 0x83248654;
	sub_832217A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832486c0
	if (cr6.eq) goto loc_832486C0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83220448
	ctx.lr = 0x83248668;
	sub_83220448(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// beq cr6,0x83248688
	if (cr6.eq) goto loc_83248688;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bgt cr6,0x83248688
	if (cr6.gt) goto loc_83248688;
	// bne cr6,0x832486a0
	if (!cr6.eq) goto loc_832486A0;
	// fcmpu cr6,f1,f30
	cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// bge cr6,0x832486a0
	if (!cr6.lt) goto loc_832486A0;
loc_83248688:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,12(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x832240b8
	ctx.lr = 0x83248698;
	sub_832240B8(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// fmr f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f31.f64;
loc_832486A0:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmpw cr6,r26,r25
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r25.s32, xer);
	// blt cr6,0x832485e0
	if (cr6.lt) goto loc_832485E0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_832486C0:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lhz r4,8(r27)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r27.u32 + 8);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,13284
	ctx.r5.s64 = ctx.r11.s64 + 13284;
	// li r3,345
	ctx.r3.s64 = 345;
	// bl 0x8320d548
	ctx.lr = 0x832486D8;
	sub_8320D548(ctx, base);
	// lwz r3,12(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// bl 0x83223850
	ctx.lr = 0x832486E0;
	sub_83223850(ctx, base);
loc_832486E0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832486F0"))) PPC_WEAK_FUNC(sub_832486F0);
PPC_FUNC_IMPL(__imp__sub_832486F0) {
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
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-1160
	ctx.r11.s64 = ctx.r11.s64 + -1160;
	// cmplwi cr6,r11,17
	cr6.compare<uint32_t>(ctx.r11.u32, 17, xer);
	// bgt cr6,0x83248934
	if (cr6.gt) goto loc_83248934;
	// lis r12,-31963
	ctx.r12.s64 = -2094727168;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-30932
	ctx.r12.s64 = ctx.r12.s64 + -30932;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_83248774;
	case 1:
		goto loc_83248774;
	case 2:
		goto loc_83248794;
	case 3:
		goto loc_832487F4;
	case 4:
		goto loc_83248814;
	case 5:
		goto loc_83248834;
	case 6:
		goto loc_83248854;
	case 7:
		goto loc_83248854;
	case 8:
		goto loc_83248854;
	case 9:
		goto loc_83248874;
	case 10:
		goto loc_83248894;
	case 11:
		goto loc_832488B4;
	case 12:
		goto loc_832488D4;
	case 13:
		goto loc_832487B4;
	case 14:
		goto loc_832487B4;
	case 15:
		goto loc_832487D4;
	case 16:
		goto loc_83248774;
	case 17:
		goto loc_83248914;
	default:
		return;
	}
	// lwz r25,-30860(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -30860);
	// lwz r25,-30860(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -30860);
	// lwz r25,-30828(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -30828);
	// lwz r25,-30732(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -30732);
	// lwz r25,-30700(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -30700);
	// lwz r25,-30668(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -30668);
	// lwz r25,-30636(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -30636);
	// lwz r25,-30636(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -30636);
	// lwz r25,-30636(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -30636);
	// lwz r25,-30604(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -30604);
	// lwz r25,-30572(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -30572);
	// lwz r25,-30540(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -30540);
	// lwz r25,-30508(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -30508);
	// lwz r25,-30796(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -30796);
	// lwz r25,-30796(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -30796);
	// lwz r25,-30764(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -30764);
	// lwz r25,-30860(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -30860);
	// lwz r25,-30444(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -30444);
loc_83248774:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83247300
	ctx.lr = 0x8324877C;
	sub_83247300(ctx, base);
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
loc_83248794:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83248020
	ctx.lr = 0x8324879C;
	sub_83248020(ctx, base);
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
loc_832487B4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83247778
	ctx.lr = 0x832487BC;
	sub_83247778(ctx, base);
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
loc_832487D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832478c0
	ctx.lr = 0x832487DC;
	sub_832478C0(ctx, base);
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
loc_832487F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832479e8
	ctx.lr = 0x832487FC;
	sub_832479E8(ctx, base);
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
loc_83248814:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83248140
	ctx.lr = 0x8324881C;
	sub_83248140(ctx, base);
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
loc_83248834:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83247650
	ctx.lr = 0x8324883C;
	sub_83247650(ctx, base);
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
loc_83248854:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832475c0
	ctx.lr = 0x8324885C;
	sub_832475C0(ctx, base);
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
loc_83248874:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83247bd0
	ctx.lr = 0x8324887C;
	sub_83247BD0(ctx, base);
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
loc_83248894:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83248390
	ctx.lr = 0x8324889C;
	sub_83248390(ctx, base);
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
loc_832488B4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83248540
	ctx.lr = 0x832488BC;
	sub_83248540(ctx, base);
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
loc_832488D4:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x832488f0
	if (cr6.eq) goto loc_832488F0;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,13276
	ctx.r3.s64 = ctx.r11.s64 + 13276;
	// bl 0x8320d088
	ctx.lr = 0x832488F0;
	sub_8320D088(ctx, base);
loc_832488F0:
	// bl 0x83201608
	ctx.lr = 0x832488F4;
	sub_83201608(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x832248d8
	ctx.lr = 0x832488FC;
	sub_832248D8(ctx, base);
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
loc_83248914:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83248290
	ctx.lr = 0x8324891C;
	sub_83248290(ctx, base);
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
loc_83248934:
	// li r3,-4
	ctx.r3.s64 = -4;
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

__attribute__((alias("__imp__sub_8324894C"))) PPC_WEAK_FUNC(sub_8324894C);
PPC_FUNC_IMPL(__imp__sub_8324894C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83248950"))) PPC_WEAK_FUNC(sub_83248950);
PPC_FUNC_IMPL(__imp__sub_83248950) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,1834
	cr6.compare<uint32_t>(ctx.r11.u32, 1834, xer);
	// bgt cr6,0x83248a44
	if (cr6.gt) goto loc_83248A44;
	// beq cr6,0x83248a20
	if (cr6.eq) goto loc_83248A20;
	// cmplwi cr6,r11,1832
	cr6.compare<uint32_t>(ctx.r11.u32, 1832, xer);
	// bgt cr6,0x832489f4
	if (cr6.gt) goto loc_832489F4;
	// beq cr6,0x832489d0
	if (cr6.eq) goto loc_832489D0;
	// cmplwi cr6,r11,1160
	cr6.compare<uint32_t>(ctx.r11.u32, 1160, xer);
	// blt cr6,0x83248af4
	if (cr6.lt) goto loc_83248AF4;
	// cmplwi cr6,r11,1177
	cr6.compare<uint32_t>(ctx.r11.u32, 1177, xer);
	// ble cr6,0x832489b4
	if (!cr6.gt) goto loc_832489B4;
	// cmplwi cr6,r11,1831
	cr6.compare<uint32_t>(ctx.r11.u32, 1831, xer);
	// bne cr6,0x83248af4
	if (!cr6.eq) goto loc_83248AF4;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lfs f1,12972(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12972);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x832248d8
	ctx.lr = 0x832489A0;
	sub_832248D8(ctx, base);
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
loc_832489B4:
	// li r4,345
	ctx.r4.s64 = 345;
	// bl 0x832430d8
	ctx.lr = 0x832489BC;
	sub_832430D8(ctx, base);
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
loc_832489D0:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lfs f1,12976(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12976);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x832248d8
	ctx.lr = 0x832489E0;
	sub_832248D8(ctx, base);
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
loc_832489F4:
	// cmplwi cr6,r11,1833
	cr6.compare<uint32_t>(ctx.r11.u32, 1833, xer);
	// bne cr6,0x83248af4
	if (!cr6.eq) goto loc_83248AF4;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lfs f1,12980(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12980);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x832248d8
	ctx.lr = 0x83248A0C;
	sub_832248D8(ctx, base);
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
loc_83248A20:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lfs f1,12984(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12984);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x832248d8
	ctx.lr = 0x83248A30;
	sub_832248D8(ctx, base);
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
loc_83248A44:
	// addi r11,r11,-1835
	ctx.r11.s64 = ctx.r11.s64 + -1835;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x83248af4
	if (cr6.gt) goto loc_83248AF4;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83248a88
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83248A88;
	// bdzf 4*cr6+eq,0x83248ad0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83248AD0;
	// bne cr6,0x83248aac
	if (!cr6.eq) goto loc_83248AAC;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lfs f1,12988(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12988);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x832248d8
	ctx.lr = 0x83248A74;
	sub_832248D8(ctx, base);
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
loc_83248A88:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lfs f1,11112(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11112);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x832248d8
	ctx.lr = 0x83248A98;
	sub_832248D8(ctx, base);
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
loc_83248AAC:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lfs f1,12992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12992);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x832248d8
	ctx.lr = 0x83248ABC;
	sub_832248D8(ctx, base);
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
loc_83248AD0:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lfs f1,10700(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10700);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x832248d8
	ctx.lr = 0x83248AE0;
	sub_832248D8(ctx, base);
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
loc_83248AF4:
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

__attribute__((alias("__imp__sub_83248B08"))) PPC_WEAK_FUNC(sub_83248B08);
PPC_FUNC_IMPL(__imp__sub_83248B08) {
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
	// cmplwi cr6,r11,1600
	cr6.compare<uint32_t>(ctx.r11.u32, 1600, xer);
	// bge cr6,0x83248b34
	if (!cr6.lt) goto loc_83248B34;
loc_83248B20:
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
loc_83248B34:
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-1600
	ctx.r11.s64 = ctx.r11.s64 + -1600;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(ctx.r11.u32, 15, xer);
	// bge cr6,0x83248b20
	if (!cr6.lt) goto loc_83248B20;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r10,13296
	ctx.r8.s64 = ctx.r10.s64 + 13296;
	// lhzx r4,r9,r8
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// bl 0x83223c38
	ctx.lr = 0x83248B60;
	sub_83223C38(ctx, base);
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

__attribute__((alias("__imp__sub_83248B74"))) PPC_WEAK_FUNC(sub_83248B74);
PPC_FUNC_IMPL(__imp__sub_83248B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83248B78"))) PPC_WEAK_FUNC(sub_83248B78);
PPC_FUNC_IMPL(__imp__sub_83248B78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83248B80;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83248ba4
	if (cr6.eq) goto loc_83248BA4;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83248ba4
	if (cr6.eq) goto loc_83248BA4;
	// bl 0x8320e738
	ctx.lr = 0x83248BA4;
	sub_8320E738(ctx, base);
loc_83248BA4:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// blt cr6,0x83248bd4
	if (cr6.lt) goto loc_83248BD4;
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
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x83220140
	ctx.lr = 0x83248BD0;
	sub_83220140(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_83248BD4:
	// bl 0x83235198
	ctx.lr = 0x83248BD8;
	sub_83235198(ctx, base);
	// li r11,187
	ctx.r11.s64 = 187;
	// li r28,53
	ctx.r28.s64 = 53;
	// sth r11,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r11.u16);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// sth r28,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r28.u16);
	// li r4,46
	ctx.r4.s64 = 46;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8322be58
	ctx.lr = 0x83248BF8;
	sub_8322BE58(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,8400
	ctx.r9.u64 = ctx.r10.u64 | 8400;
	// lwz r30,12(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lhz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
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
	// beq cr6,0x83248c24
	if (cr6.eq) goto loc_83248C24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83222030
	ctx.lr = 0x83248C24;
	sub_83222030(ctx, base);
loc_83248C24:
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// sth r28,2(r30)
	PPC_STORE_U16(ctx.r30.u32 + 2, ctx.r28.u16);
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83248C3C"))) PPC_WEAK_FUNC(sub_83248C3C);
PPC_FUNC_IMPL(__imp__sub_83248C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83248C40"))) PPC_WEAK_FUNC(sub_83248C40);
PPC_FUNC_IMPL(__imp__sub_83248C40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83248ce8
	if (cr6.eq) goto loc_83248CE8;
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// li r10,12288
	ctx.r10.s64 = 12288;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// srw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83248ce8
	if (cr6.eq) goto loc_83248CE8;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(ctx.r11.s32, 13, xer);
	// bne cr6,0x83248c74
	if (!cr6.eq) goto loc_83248C74;
	// li r9,12
	ctx.r9.s64 = 12;
loc_83248C74:
	// lhz r11,14(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// ble cr6,0x83248ce8
	if (!cr6.gt) goto loc_83248CE8;
loc_83248C8C:
	// lbz r11,5(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x83248ce0
	if (!cr6.eq) goto loc_83248CE0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83248ce0
	if (cr6.eq) goto loc_83248CE0;
	// lhz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(ctx.r11.s32, 13, xer);
	// bne cr6,0x83248cb8
	if (!cr6.eq) goto loc_83248CB8;
	// li r11,12
	ctx.r11.s64 = 12;
loc_83248CB8:
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// bne cr6,0x83248ce0
	if (!cr6.eq) goto loc_83248CE0;
	// lhz r11,2(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// lhz r8,2(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// bne cr6,0x83248ce0
	if (!cr6.eq) goto loc_83248CE0;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_83248CE0:
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// bdnz 0x83248c8c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83248C8C;
loc_83248CE8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83248CF0"))) PPC_WEAK_FUNC(sub_83248CF0);
PPC_FUNC_IMPL(__imp__sub_83248CF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83248CF8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,16(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83248e00
	if (cr6.eq) goto loc_83248E00;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// li r30,12288
	ctx.r30.s64 = 12288;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// srw r9,r30,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83248e00
	if (cr6.eq) goto loc_83248E00;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r28,2
	ctx.r28.s64 = 2;
	// bl 0x8322bd38
	ctx.lr = 0x83248D3C;
	sub_8322BD38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83248d4c
	if (cr6.eq) goto loc_83248D4C;
	// li r28,4
	ctx.r28.s64 = 4;
loc_83248D4C:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// srw r9,r30,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83248df4
	if (cr6.eq) goto loc_83248DF4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83248c40
	ctx.lr = 0x83248D70;
	sub_83248C40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83248db8
	if (!cr6.eq) goto loc_83248DB8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832895b0
	ctx.lr = 0x83248D84;
	sub_832895B0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r3,8
	ctx.r3.s64 = 8;
	// stb r11,5(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5, ctx.r11.u8);
	// bl 0x83209aa8
	ctx.lr = 0x83248D98;
	sub_83209AA8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x832240b8
	ctx.lr = 0x83248DB4;
	sub_832240B8(ctx, base);
	// stw r26,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r26.u32);
loc_83248DB8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,12(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// li r31,1
	ctx.r31.s64 = 1;
	// bl 0x8322bd38
	ctx.lr = 0x83248DC8;
	sub_8322BD38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83248dd8
	if (cr6.eq) goto loc_83248DD8;
	// li r31,4
	ctx.r31.s64 = 4;
loc_83248DD8:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,12(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// bl 0x832240b8
	ctx.lr = 0x83248DE8;
	sub_832240B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83248DF4:
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83248E00:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8322e3e0
	ctx.lr = 0x83248E0C;
	sub_8322E3E0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83248E14"))) PPC_WEAK_FUNC(sub_83248E14);
PPC_FUNC_IMPL(__imp__sub_83248E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83248E18"))) PPC_WEAK_FUNC(sub_83248E18);
PPC_FUNC_IMPL(__imp__sub_83248E18) {
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
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// lwz r4,16(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83248e98
	if (cr6.eq) goto loc_83248E98;
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// li r10,12288
	ctx.r10.s64 = 12288;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// srw r8,r10,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi r6,r8,31
	ctx.r6.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83248e98
	if (cr6.eq) goto loc_83248E98;
	// bl 0x83248c40
	ctx.lr = 0x83248E54;
	sub_83248C40(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83248e74
	if (!cr6.eq) goto loc_83248E74;
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
loc_83248E74:
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,12(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x832240b8
	ctx.lr = 0x83248E84;
	sub_832240B8(ctx, base);
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
loc_83248E98:
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// bl 0x8322e2b8
	ctx.lr = 0x83248EA0;
	sub_8322E2B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83248EB0"))) PPC_WEAK_FUNC(sub_83248EB0);
PPC_FUNC_IMPL(__imp__sub_83248EB0) {
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83248f30
	if (cr6.eq) goto loc_83248F30;
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// li r10,12288
	ctx.r10.s64 = 12288;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// srw r8,r10,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83248f30
	if (cr6.eq) goto loc_83248F30;
	// bl 0x83248c40
	ctx.lr = 0x83248EEC;
	sub_83248C40(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83248f0c
	if (!cr6.eq) goto loc_83248F0C;
	// li r3,-4
	ctx.r3.s64 = -4;
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
loc_83248F0C:
	// bl 0x8322a9e8
	ctx.lr = 0x83248F10;
	sub_8322A9E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832899e8
	ctx.lr = 0x83248F18;
	sub_832899E8(ctx, base);
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
loc_83248F30:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8322b710
	ctx.lr = 0x83248F3C;
	sub_8322B710(ctx, base);
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

__attribute__((alias("__imp__sub_83248F50"))) PPC_WEAK_FUNC(sub_83248F50);
PPC_FUNC_IMPL(__imp__sub_83248F50) {
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
	// cmplwi cr6,r11,1940
	cr6.compare<uint32_t>(ctx.r11.u32, 1940, xer);
	// beq cr6,0x83248f7c
	if (cr6.eq) goto loc_83248F7C;
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
loc_83248F7C:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x8320cf60
	ctx.lr = 0x83248F88;
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
}

__attribute__((alias("__imp__sub_83248F9C"))) PPC_WEAK_FUNC(sub_83248F9C);
PPC_FUNC_IMPL(__imp__sub_83248F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83248FA0"))) PPC_WEAK_FUNC(sub_83248FA0);
PPC_FUNC_IMPL(__imp__sub_83248FA0) {
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
	// cmplwi cr6,r11,1940
	cr6.compare<uint32_t>(ctx.r11.u32, 1940, xer);
	// beq cr6,0x83248fcc
	if (cr6.eq) goto loc_83248FCC;
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
loc_83248FCC:
	// li r3,312
	ctx.r3.s64 = 312;
	// bl 0x8320d810
	ctx.lr = 0x83248FD4;
	sub_8320D810(ctx, base);
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

__attribute__((alias("__imp__sub_83248FE8"))) PPC_WEAK_FUNC(sub_83248FE8);
PPC_FUNC_IMPL(__imp__sub_83248FE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83248FF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,9
	cr6.compare<uint32_t>(ctx.r10.u32, 9, xer);
	// bgt cr6,0x832490c4
	if (cr6.gt) goto loc_832490C4;
	// lis r12,-31963
	ctx.r12.s64 = -2094727168;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-28628
	ctx.r12.s64 = ctx.r12.s64 + -28628;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_83249054;
	case 1:
		goto loc_83249068;
	case 2:
		goto loc_832490C4;
	case 3:
		goto loc_8324907C;
	case 4:
		goto loc_832490C4;
	case 5:
		goto loc_83249094;
	case 6:
		goto loc_832490C4;
	case 7:
		goto loc_83249094;
	case 8:
		goto loc_83249068;
	case 9:
		goto loc_83249068;
	default:
		return;
	}
	// lwz r25,-28588(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -28588);
	// lwz r25,-28568(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -28568);
	// lwz r25,-28476(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -28476);
	// lwz r25,-28548(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -28548);
	// lwz r25,-28476(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -28476);
	// lwz r25,-28524(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -28524);
	// lwz r25,-28476(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -28476);
	// lwz r25,-28524(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -28524);
	// lwz r25,-28568(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -28568);
	// lwz r25,-28568(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -28568);
loc_83249054:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83220140
	ctx.lr = 0x8324905C;
	sub_83220140(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// li r5,52
	ctx.r5.s64 = 52;
	// b 0x832490b0
	goto loc_832490B0;
loc_83249068:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222578
	ctx.lr = 0x83249070;
	sub_83222578(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r5,6
	ctx.r5.s64 = 6;
	// b 0x832490b0
	goto loc_832490B0;
loc_8324907C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83220448
	ctx.lr = 0x83249084;
	sub_83220448(ctx, base);
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r5,14
	ctx.r5.s64 = 14;
	// b 0x832490b0
	goto loc_832490B0;
loc_83249094:
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222be8
	ctx.lr = 0x832490A8;
	sub_83222BE8(ctx, base);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r5,11
	ctx.r5.s64 = 11;
loc_832490B0:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83294c00
	ctx.lr = 0x832490C0;
	sub_83294C00(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
loc_832490C4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83249114
	if (!cr6.eq) goto loc_83249114;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,13328
	ctx.r5.s64 = ctx.r11.s64 + 13328;
	// li r4,1257
	ctx.r4.s64 = 1257;
	// li r3,312
	ctx.r3.s64 = 312;
	// bl 0x8320d5b8
	ctx.lr = 0x832490E8;
	sub_8320D5B8(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222be8
	ctx.lr = 0x832490FC;
	sub_83222BE8(ctx, base);
	// addi r7,r1,352
	ctx.r7.s64 = ctx.r1.s64 + 352;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,11
	ctx.r5.s64 = 11;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83294c00
	ctx.lr = 0x83249114;
	sub_83294C00(ctx, base);
loc_83249114:
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8324911C"))) PPC_WEAK_FUNC(sub_8324911C);
PPC_FUNC_IMPL(__imp__sub_8324911C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83249120"))) PPC_WEAK_FUNC(sub_83249120);
PPC_FUNC_IMPL(__imp__sub_83249120) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83249128;
	__savegprlr_29(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x83295c40
	ctx.lr = 0x8324913C;
	sub_83295C40(ctx, base);
	// clrlwi r29,r3,26
	ctx.r29.u64 = ctx.r3.u32 & 0x3F;
	// addi r11,r29,-2
	ctx.r11.s64 = ctx.r29.s64 + -2;
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(ctx.r11.u32, 13, xer);
	// bgt cr6,0x832493e0
	if (cr6.gt) goto loc_832493E0;
	// lis r12,-31963
	ctx.r12.s64 = -2094727168;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-28316
	ctx.r12.s64 = ctx.r12.s64 + -28316;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8324919C;
	case 1:
		goto loc_83249208;
	case 2:
		goto loc_8324922C;
	case 3:
		goto loc_83249254;
	case 4:
		goto loc_83249278;
	case 5:
		goto loc_8324929C;
	case 6:
		goto loc_832492C0;
	case 7:
		goto loc_832492F0;
	case 8:
		goto loc_832493E0;
	case 9:
		goto loc_83249388;
	case 10:
		goto loc_832493E0;
	case 11:
		goto loc_832493E0;
	case 12:
		goto loc_83249320;
	case 13:
		goto loc_83249354;
	default:
		return;
	}
	// lwz r25,-28260(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -28260);
	// lwz r25,-28152(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -28152);
	// lwz r25,-28116(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -28116);
	// lwz r25,-28076(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -28076);
	// lwz r25,-28040(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -28040);
	// lwz r25,-28004(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -28004);
	// lwz r25,-27968(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -27968);
	// lwz r25,-27920(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -27920);
	// lwz r25,-27680(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -27680);
	// lwz r25,-27768(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -27768);
	// lwz r25,-27680(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -27680);
	// lwz r25,-27680(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -27680);
	// lwz r25,-27872(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -27872);
	// lwz r25,-27820(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -27820);
loc_8324919C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// addi r5,r1,81
	ctx.r5.s64 = ctx.r1.s64 + 81;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83294f00
	ctx.lr = 0x832491B8;
	sub_83294F00(ctx, base);
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// extsb r4,r10
	ctx.r4.s64 = ctx.r10.s8;
loc_832491C0:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8322e5b0
	ctx.lr = 0x832491CC;
	sub_8322E5B0(ctx, base);
loc_832491CC:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bge cr6,0x83249200
	if (!cr6.lt) goto loc_83249200;
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r3,r8,13452
	ctx.r3.s64 = ctx.r8.s64 + 13452;
	// addi r6,r11,13444
	ctx.r6.s64 = ctx.r11.s64 + 13444;
	// addi r5,r10,13424
	ctx.r5.s64 = ctx.r10.s64 + 13424;
	// addi r4,r9,13376
	ctx.r4.s64 = ctx.r9.s64 + 13376;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// bl 0x832085e8
	ctx.lr = 0x83249200;
	sub_832085E8(ctx, base);
loc_83249200:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83249208:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83294f00
	ctx.lr = 0x83249224;
	sub_83294F00(ctx, base);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// b 0x832491c0
	goto loc_832491C0;
loc_8324922C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r6,2
	ctx.r6.s64 = 2;
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// addi r5,r1,82
	ctx.r5.s64 = ctx.r1.s64 + 82;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83294f00
	ctx.lr = 0x83249248;
	sub_83294F00(ctx, base);
	// lhz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// extsh r4,r10
	ctx.r4.s64 = ctx.r10.s16;
	// b 0x832491c0
	goto loc_832491C0;
loc_83249254:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r6,2
	ctx.r6.s64 = 2;
	// sth r11,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r11.u16);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83294f00
	ctx.lr = 0x83249270;
	sub_83294F00(ctx, base);
	// lhz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// b 0x832491c0
	goto loc_832491C0;
loc_83249278:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83294f00
	ctx.lr = 0x83249294;
	sub_83294F00(ctx, base);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x832491c0
	goto loc_832491C0;
loc_8324929C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83294f00
	ctx.lr = 0x832492B8;
	sub_83294F00(ctx, base);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// b 0x832491c0
	goto loc_832491C0;
loc_832492C0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83294f00
	ctx.lr = 0x832492DC;
	sub_83294F00(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x832238c0
	ctx.lr = 0x832492EC;
	sub_832238C0(ctx, base);
	// b 0x832491cc
	goto loc_832491CC;
loc_832492F0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// std r11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83294f00
	ctx.lr = 0x8324930C;
	sub_83294F00(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// bl 0x832238c0
	ctx.lr = 0x8324931C;
	sub_832238C0(ctx, base);
	// b 0x832491cc
	goto loc_832491CC;
loc_83249320:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x83294f00
	ctx.lr = 0x83249340;
	sub_83294F00(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x832248d8
	ctx.lr = 0x83249350;
	sub_832248D8(ctx, base);
	// b 0x832491cc
	goto loc_832491CC;
loc_83249354:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfd f0,9000(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 9000);
	// stfd f0,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f0.u64);
	// bl 0x83294f00
	ctx.lr = 0x83249374;
	sub_83294F00(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfd f1,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// bl 0x832239d8
	ctx.lr = 0x83249384;
	sub_832239D8(ctx, base);
	// b 0x832491cc
	goto loc_832491CC;
loc_83249388:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r6,256
	ctx.r6.s64 = 256;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83294f00
	ctx.lr = 0x832493A4;
	sub_83294F00(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83255a88
	ctx.lr = 0x832493B0;
	sub_83255A88(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x832277e8
	ctx.lr = 0x832493B8;
	sub_832277E8(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832493d8
	if (!cr6.eq) goto loc_832493D8;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x83223af0
	ctx.lr = 0x832493D4;
	sub_83223AF0(ctx, base);
	// b 0x832491cc
	goto loc_832491CC;
loc_832493D8:
	// bl 0x83223c38
	ctx.lr = 0x832493DC;
	sub_83223C38(ctx, base);
	// b 0x832491cc
	goto loc_832491CC;
loc_832493E0:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// addi r6,r11,13444
	ctx.r6.s64 = ctx.r11.s64 + 13444;
	// addi r5,r10,13424
	ctx.r5.s64 = ctx.r10.s64 + 13424;
	// addi r4,r9,13340
	ctx.r4.s64 = ctx.r9.s64 + 13340;
	// addi r3,r8,13452
	ctx.r3.s64 = ctx.r8.s64 + 13452;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// bl 0x832085e8
	ctx.lr = 0x83249408;
	sub_832085E8(ctx, base);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83249410"))) PPC_WEAK_FUNC(sub_83249410);
PPC_FUNC_IMPL(__imp__sub_83249410) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83249418;
	__savegprlr_25(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,12(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
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
	// beq cr6,0x8324944c
	if (cr6.eq) goto loc_8324944C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83222030
	ctx.lr = 0x8324944C;
	sub_83222030(ctx, base);
loc_8324944C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,12
	ctx.r10.s64 = 12;
	// sth r11,2(r30)
	PPC_STORE_U16(ctx.r30.u32 + 2, ctx.r11.u16);
	// sth r10,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r10.u16);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bge cr6,0x83249484
	if (!cr6.lt) goto loc_83249484;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,13424
	ctx.r3.s64 = ctx.r11.s64 + 13424;
	// bl 0x8320d088
	ctx.lr = 0x8324947C;
	sub_8320D088(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83249484:
	// mulli r11,r11,52
	ctx.r11.s64 = ctx.r11.s64 * 52;
	// addi r11,r11,946
	ctx.r11.s64 = ctx.r11.s64 + 946;
	// rlwinm r30,r11,0,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83209aa8
	ctx.lr = 0x83249498;
	sub_83209AA8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r3,23
	ctx.r3.s64 = 23;
	// bl 0x832948b0
	ctx.lr = 0x832494AC;
	sub_832948B0(ctx, base);
	// lbz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 36);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x832494c8
	if (!cr6.eq) goto loc_832494C8;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_832494C8:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
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
	// bl 0x83222be8
	ctx.lr = 0x832494F8;
	sub_83222BE8(ctx, base);
	// lis r6,-32221
	ctx.r6.s64 = -2111635456;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r6,r6,13444
	ctx.r6.s64 = ctx.r6.s64 + 13444;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83294c00
	ctx.lr = 0x83249510;
	sub_83294C00(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8324952c
	if (!cr6.eq) goto loc_8324952C;
	// li r3,312
	ctx.r3.s64 = 312;
	// lhz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// bl 0x8320d2e8
	ctx.lr = 0x83249528;
	sub_8320D2E8(ctx, base);
	// b 0x832495b4
	goto loc_832495B4;
loc_8324952C:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// ble cr6,0x8324957c
	if (!cr6.gt) goto loc_8324957C;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r27,r11,13468
	ctx.r27.s64 = ctx.r11.s64 + 13468;
loc_83249544:
	// lbz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83249558
	if (cr6.eq) goto loc_83249558;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// b 0x8324955c
	goto loc_8324955C;
loc_83249558:
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
loc_8324955C:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83248fe8
	ctx.lr = 0x8324956C;
	sub_83248FE8(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, xer);
	// blt cr6,0x83249544
	if (cr6.lt) goto loc_83249544;
loc_8324957C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83207070
	ctx.lr = 0x83249588;
	sub_83207070(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x832495b4
	if (!cr6.eq) goto loc_832495B4;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r5,r11,13464
	ctx.r5.s64 = ctx.r11.s64 + 13464;
	// bl 0x83295250
	ctx.lr = 0x832495A0;
	sub_83295250(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832495b4
	if (cr6.eq) goto loc_832495B4;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83249120
	ctx.lr = 0x832495B4;
	sub_83249120(ctx, base);
loc_832495B4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83294958
	ctx.lr = 0x832495BC;
	sub_83294958(ctx, base);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x832495cc
	if (cr6.eq) goto loc_832495CC;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83209d68
	ctx.lr = 0x832495CC;
	sub_83209D68(ctx, base);
loc_832495CC:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832495D4"))) PPC_WEAK_FUNC(sub_832495D4);
PPC_FUNC_IMPL(__imp__sub_832495D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832495D8"))) PPC_WEAK_FUNC(sub_832495D8);
PPC_FUNC_IMPL(__imp__sub_832495D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x832495E0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r29,r11,24688
	ctx.r29.s64 = ctx.r11.s64 + 24688;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83249618
	if (cr6.eq) goto loc_83249618;
	// lwz r30,404(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 404);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x8324963c
	if (!cr6.eq) goto loc_8324963C;
loc_83249618:
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x83209aa8
	ctx.lr = 0x83249620;
	sub_83209AA8(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8324963c
	if (cr6.eq) goto loc_8324963C;
	// stw r3,404(r11)
	PPC_STORE_U32(ctx.r11.u32 + 404, ctx.r3.u32);
loc_8324963C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x83209df8
	ctx.lr = 0x83249658;
	sub_83209DF8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// clrlwi r7,r27,24
	ctx.r7.u64 = ctx.r27.u32 & 0xFF;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r3
	ctx.r30.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r29,r30,16
	ctx.r29.s64 = ctx.r30.s64 + 16;
	// stwx r31,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r31.u32);
	// addi r28,r30,8
	ctx.r28.s64 = ctx.r30.s64 + 8;
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// stw r31,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r31.u32);
	// beq cr6,0x832496b8
	if (cr6.eq) goto loc_832496B8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r26,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r26.u32);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// b 0x832496c4
	goto loc_832496C4;
loc_832496B8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83209c20
	ctx.lr = 0x832496C0;
	sub_83209C20(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
loc_832496C4:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x832496dc
	if (cr6.eq) goto loc_832496DC;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832240b8
	ctx.lr = 0x832496DC;
	sub_832240B8(ctx, base);
loc_832496DC:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832240b8
	ctx.lr = 0x832496EC;
	sub_832240B8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832496F4"))) PPC_WEAK_FUNC(sub_832496F4);
PPC_FUNC_IMPL(__imp__sub_832496F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832496F8"))) PPC_WEAK_FUNC(sub_832496F8);
PPC_FUNC_IMPL(__imp__sub_832496F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83249700;
	__savegprlr_29(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x83249724
	if (cr6.eq) goto loc_83249724;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,13424
	ctx.r3.s64 = ctx.r11.s64 + 13424;
	// bl 0x8320d088
	ctx.lr = 0x83249724;
	sub_8320D088(ctx, base);
loc_83249724:
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// blt cr6,0x832497b8
	if (cr6.lt) goto loc_832497B8;
	// lbz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83249744
	if (!cr6.eq) goto loc_83249744;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
loc_83249744:
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
	// lhzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// addi r6,r11,-9
	ctx.r6.s64 = ctx.r11.s64 + -9;
	// cntlzw r5,r6
	ctx.r5.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r29,r5,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83249784
	if (cr6.eq) goto loc_83249784;
	// bl 0x83220e10
	ctx.lr = 0x83249780;
	sub_83220E10(ctx, base);
	// b 0x83249798
	goto loc_83249798;
loc_83249784:
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83222be8
	ctx.lr = 0x83249794;
	sub_83222BE8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
loc_83249798:
	// lbz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 36);
	// addi r5,r31,8
	ctx.r5.s64 = ctx.r31.s64 + 8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832497ac
	if (!cr6.eq) goto loc_832497AC;
	// addi r5,r31,-8
	ctx.r5.s64 = ctx.r31.s64 + -8;
loc_832497AC:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x832495d8
	ctx.lr = 0x832497B8;
	sub_832495D8(ctx, base);
loc_832497B8:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832497C0"))) PPC_WEAK_FUNC(sub_832497C0);
PPC_FUNC_IMPL(__imp__sub_832497C0) {
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
	// cmplwi cr6,r11,1257
	cr6.compare<uint32_t>(ctx.r11.u32, 1257, xer);
	// beq cr6,0x8324980c
	if (cr6.eq) goto loc_8324980C;
	// cmplwi cr6,r11,2357
	cr6.compare<uint32_t>(ctx.r11.u32, 2357, xer);
	// beq cr6,0x832497f4
	if (cr6.eq) goto loc_832497F4;
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
loc_832497F4:
	// bl 0x832496f8
	ctx.lr = 0x832497F8;
	sub_832496F8(ctx, base);
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
loc_8324980C:
	// bl 0x83249410
	ctx.lr = 0x83249810;
	sub_83249410(ctx, base);
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

__attribute__((alias("__imp__sub_83249824"))) PPC_WEAK_FUNC(sub_83249824);
PPC_FUNC_IMPL(__imp__sub_83249824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83249828"))) PPC_WEAK_FUNC(sub_83249828);
PPC_FUNC_IMPL(__imp__sub_83249828) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83249830;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832498ec
	if (cr6.eq) goto loc_832498EC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x832498d0
	if (!cr6.gt) goto loc_832498D0;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_83249858:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// add. r31,r11,r28
	ctx.r31.u64 = ctx.r11.u64 + ctx.r28.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq 0x832498bc
	if (cr0.eq) goto loc_832498BC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83249880
	if (cr6.eq) goto loc_83249880;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x83249890
	goto loc_83249890;
loc_83249880:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83249894
	if (cr6.eq) goto loc_83249894;
	// bl 0x83209d68
	ctx.lr = 0x83249890;
	sub_83209D68(ctx, base);
loc_83249890:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_83249894:
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x83222030
	ctx.lr = 0x8324989C;
	sub_83222030(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x83222030
	ctx.lr = 0x832498A4;
	sub_83222030(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
loc_832498BC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,24
	ctx.r28.s64 = ctx.r28.s64 + 24;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, xer);
	// blt cr6,0x83249858
	if (cr6.lt) goto loc_83249858;
loc_832498D0:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832498e4
	if (cr6.eq) goto loc_832498E4;
	// bl 0x83209d68
	ctx.lr = 0x832498E0;
	sub_83209D68(ctx, base);
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
loc_832498E4:
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
loc_832498EC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832498F4"))) PPC_WEAK_FUNC(sub_832498F4);
PPC_FUNC_IMPL(__imp__sub_832498F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832498F8"))) PPC_WEAK_FUNC(sub_832498F8);
PPC_FUNC_IMPL(__imp__sub_832498F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83249900;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83249984
	if (cr6.eq) goto loc_83249984;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,13468
	ctx.r5.s64 = ctx.r11.s64 + 13468;
	// bl 0x83295250
	ctx.lr = 0x83249920;
	sub_83295250(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83249984
	if (cr6.eq) goto loc_83249984;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x83295e38
	ctx.lr = 0x83249934;
	sub_83295E38(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83249984
	if (cr6.eq) goto loc_83249984;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8320db50
	ctx.lr = 0x8324994C;
	sub_8320DB50(ctx, base);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// ble cr6,0x83249984
	if (!cr6.gt) goto loc_83249984;
	// li r30,0
	ctx.r30.s64 = 0;
loc_83249958:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x83249120
	ctx.lr = 0x83249968;
	sub_83249120(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83295570
	ctx.lr = 0x83249974;
	sub_83295570(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// bne 0x83249958
	if (!cr0.eq) goto loc_83249958;
loc_83249984:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8324998C"))) PPC_WEAK_FUNC(sub_8324998C);
PPC_FUNC_IMPL(__imp__sub_8324998C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

