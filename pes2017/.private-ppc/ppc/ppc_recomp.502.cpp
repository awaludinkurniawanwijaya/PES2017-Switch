#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83A84CB8"))) PPC_WEAK_FUNC(sub_83A84CB8);
PPC_FUNC_IMPL(__imp__sub_83A84CB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A84CC0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,225(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 225);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r10,224(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 224);
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// bne cr6,0x83a84ce8
	if (!cr6.eq) goto loc_83A84CE8;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83a84e10
	if (cr6.eq) goto loc_83A84E10;
loc_83A84CE8:
	// lwz r3,248(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// lis r10,4
	ctx.r10.s64 = 262144;
	// li r29,0
	ctx.r29.s64 = 0;
	// ori r30,r10,11
	ctx.r30.u64 = ctx.r10.u64 | 11;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a84d30
	if (cr6.eq) goto loc_83A84D30;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x83a84d30
	if (!cr6.eq) goto loc_83A84D30;
	// bl 0x83aba660
	ctx.lr = 0x83A84D0C;
	sub_83ABA660(ctx, base);
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// beq cr6,0x83a84d24
	if (cr6.eq) goto loc_83A84D24;
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// bne cr6,0x83a84d30
	if (!cr6.eq) goto loc_83A84D30;
	// stw r30,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r30.u32);
	// b 0x83a84d30
	goto loc_83A84D30;
loc_83A84D24:
	// lwz r3,248(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// bl 0x83aba6a8
	ctx.lr = 0x83A84D2C;
	sub_83ABA6A8(ctx, base);
	// stb r29,224(r31)
	PPC_STORE_U8(ctx.r31.u32 + 224, ctx.r29.u8);
loc_83A84D30:
	// lbz r11,224(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 224);
	// lbz r10,225(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 225);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x83a84d54
	if (!cr6.eq) goto loc_83A84D54;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x83a84d54
	if (!cr6.eq) goto loc_83A84D54;
	// stb r29,225(r31)
	PPC_STORE_U8(ctx.r31.u32 + 225, ctx.r29.u8);
loc_83A84D54:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a84e10
	if (!cr6.eq) goto loc_83A84E10;
	// lbz r11,225(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 225);
	// stb r29,225(r31)
	PPC_STORE_U8(ctx.r31.u32 + 225, ctx.r29.u8);
	// stb r11,224(r31)
	PPC_STORE_U8(ctx.r31.u32 + 224, ctx.r11.u8);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// extsb. r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x83a84d78
	if (cr0.eq) goto loc_83A84D78;
	// stb r11,226(r31)
	PPC_STORE_U8(ctx.r31.u32 + 226, ctx.r11.u8);
loc_83A84D78:
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x83a84de4
	if (!cr6.eq) goto loc_83A84DE4;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x83a7a038
	ctx.lr = 0x83A84D8C;
	sub_83A7A038(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne 0x83a84da8
	if (!cr0.eq) goto loc_83A84DA8;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,8272
	ctx.r4.s64 = ctx.r11.s64 + 8272;
	// bl 0x831ea3f0
	ctx.lr = 0x83A84DA4;
	sub_831EA3F0(ctx, base);
	// b 0x83a84e10
	goto loc_83A84E10;
loc_83A84DA8:
	// stw r29,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,240(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x83a7a240
	ctx.lr = 0x83A84DC4;
	sub_83A7A240(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,244(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// bl 0x83a7a2a0
	ctx.lr = 0x83A84DD0;
	sub_83A7A2A0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x83a7a0d8
	ctx.lr = 0x83A84DE0;
	sub_83A7A0D8(ctx, base);
	// b 0x83a84e10
	goto loc_83A84E10;
loc_83A84DE4:
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bne cr6,0x83a84e10
	if (!cr6.eq) goto loc_83A84E10;
	// lwz r3,248(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a84e18
	if (!cr6.eq) goto loc_83A84E18;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,7300
	ctx.r4.s64 = ctx.r11.s64 + 7300;
	// bl 0x831ea3f0
	ctx.lr = 0x83A84E04;
	sub_831EA3F0(ctx, base);
	// stw r30,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r30.u32);
loc_83A84E08:
	// stw r29,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r29.u32);
	// stw r29,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r29.u32);
loc_83A84E10:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83A84E18:
	// bl 0x83aba660
	ctx.lr = 0x83A84E1C;
	sub_83ABA660(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83a84e08
	if (cr6.eq) goto loc_83A84E08;
	// lwz r4,256(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r3,248(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// bl 0x83aba690
	ctx.lr = 0x83A84E30;
	sub_83ABA690(ctx, base);
	// lwz r3,248(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// bl 0x83aba630
	ctx.lr = 0x83A84E38;
	sub_83ABA630(ctx, base);
	// b 0x83a84e08
	goto loc_83A84E08;
}

__attribute__((alias("__imp__sub_83A84E3C"))) PPC_WEAK_FUNC(sub_83A84E3C);
PPC_FUNC_IMPL(__imp__sub_83A84E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A84E40"))) PPC_WEAK_FUNC(sub_83A84E40);
PPC_FUNC_IMPL(__imp__sub_83A84E40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,424(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a84f24
	if (cr6.eq) goto loc_83A84F24;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x83a845c8
	ctx.lr = 0x83A84E6C;
	sub_83A845C8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a84f24
	if (cr0.eq) goto loc_83A84F24;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83a84f24
	if (!cr6.gt) goto loc_83A84F24;
	// lwz r11,308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// beq cr6,0x83a84eb8
	if (cr6.eq) goto loc_83A84EB8;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// mulld r9,r11,r9
	ctx.r9.s64 = ctx.r11.s64 * ctx.r9.s64;
	// rotldi r11,r9,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u64, 1);
	// divd r9,r9,r10
	ctx.r9.s64 = PPCDivide(ctx.r9.s64, ctx.r10.s64);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// tdllei r10,0
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// tdlgei r11,-1
loc_83A84EB8:
	// lwz r11,424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// lfs f0,420(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,420(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 420);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x83a84ee8
	if (cr6.eq) goto loc_83A84EE8;
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fmul f13,f13,f12
	ctx.f13.f64 = ctx.f13.f64 * ctx.f12.f64;
	// fdiv f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 / ctx.f0.f64;
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
loc_83A84EE8:
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// ld r8,408(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 408);
	// lwz r11,60(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// lwz r10,56(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(ctx.r11.s64, 0, xer);
	// ble cr6,0x83a84f24
	if (!cr6.gt) goto loc_83A84F24;
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,56(r10)
	PPC_STORE_U32(ctx.r10.u32 + 56, ctx.r11.u32);
loc_83A84F24:
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

__attribute__((alias("__imp__sub_83A84F38"))) PPC_WEAK_FUNC(sub_83A84F38);
PPC_FUNC_IMPL(__imp__sub_83A84F38) {
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
	// lwz r11,324(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r3,300
	ctx.r10.s64 = ctx.r3.s64 + 300;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83a84f64
	if (!cr6.gt) goto loc_83A84F64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
loc_83A84F64:
	// bne cr6,0x83a84f74
	if (!cr6.eq) goto loc_83A84F74;
	// lbz r9,227(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 227);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r9,227(r31)
	PPC_STORE_U8(ctx.r31.u32 + 227, ctx.r9.u8);
loc_83A84F74:
	// stw r11,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x83a84f8c
	if (!cr6.eq) goto loc_83A84F8C;
	// bl 0x83a83f88
	ctx.lr = 0x83A84F88;
	sub_83A83F88(ctx, base);
	// b 0x83a84fbc
	goto loc_83A84FBC;
loc_83A84F8C:
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// li r9,4
	ctx.r9.s64 = 4;
	// lwz r10,332(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// li r6,-1
	ctx.r6.s64 = -1;
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// li r5,0
	ctx.r5.s64 = 0;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83a84288
	ctx.lr = 0x83A84FB4;
	sub_83A84288(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r11,225(r31)
	PPC_STORE_U8(ctx.r31.u32 + 225, ctx.r11.u8);
loc_83A84FBC:
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

__attribute__((alias("__imp__sub_83A84FD0"))) PPC_WEAK_FUNC(sub_83A84FD0);
PPC_FUNC_IMPL(__imp__sub_83A84FD0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831ea7a0
	ctx.lr = 0x83A84FF0;
	sub_831EA7A0(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r10,3
	ctx.r10.s64 = 3;
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// lis r6,2
	ctx.r6.s64 = 131072;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// ori r6,r6,2
	ctx.r6.u64 = ctx.r6.u64 | 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a84050
	ctx.lr = 0x83A8502C;
	sub_83A84050(ctx, base);
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

__attribute__((alias("__imp__sub_83A85040"))) PPC_WEAK_FUNC(sub_83A85040);
PPC_FUNC_IMPL(__imp__sub_83A85040) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A85048;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,27016(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27016);
	// bl 0x83b66520
	ctx.lr = 0x83A85060;
	sub_83B66520(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83abb070
	ctx.lr = 0x83A85068;
	sub_83ABB070(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r3,248(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// stw r30,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r30.u32);
	// stw r30,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r30.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r30,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r30.u32);
	// stw r30,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r30.u32);
	// stw r30,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r30.u32);
	// stw r30,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r30.u32);
	// stw r30,488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 488, ctx.r30.u32);
	// stw r30,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r30.u32);
	// beq cr6,0x83a850a0
	if (cr6.eq) goto loc_83A850A0;
	// bl 0x83aba588
	ctx.lr = 0x83A8509C;
	sub_83ABA588(ctx, base);
	// stw r30,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r30.u32);
loc_83A850A0:
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a850b4
	if (cr6.eq) goto loc_83A850B4;
	// bl 0x83a9fe30
	ctx.lr = 0x83A850B0;
	sub_83A9FE30(ctx, base);
	// stw r30,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r30.u32);
loc_83A850B4:
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a850c8
	if (cr6.eq) goto loc_83A850C8;
	// bl 0x83ab9160
	ctx.lr = 0x83A850C4;
	sub_83AB9160(ctx, base);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
loc_83A850C8:
	// addi r29,r31,212
	ctx.r29.s64 = ctx.r31.s64 + 212;
	// li r28,2
	ctx.r28.s64 = 2;
loc_83A850D0:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a850e4
	if (cr6.eq) goto loc_83A850E4;
	// bl 0x83a7a230
	ctx.lr = 0x83A850E0;
	sub_83A7A230(ctx, base);
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
loc_83A850E4:
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x83a850d0
	if (!cr0.eq) goto loc_83A850D0;
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a85104
	if (cr6.eq) goto loc_83A85104;
	// bl 0x83102db0
	ctx.lr = 0x83A85100;
	sub_83102DB0(ctx, base);
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
loc_83A85104:
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a85118
	if (cr6.eq) goto loc_83A85118;
	// bl 0x83102db0
	ctx.lr = 0x83A85114;
	sub_83102DB0(ctx, base);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
loc_83A85118:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a8512c
	if (cr6.eq) goto loc_83A8512C;
	// bl 0x83a82d38
	ctx.lr = 0x83A8512C;
	sub_83A82D38(ctx, base);
loc_83A8512C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A85134"))) PPC_WEAK_FUNC(sub_83A85134);
PPC_FUNC_IMPL(__imp__sub_83A85134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A85138"))) PPC_WEAK_FUNC(sub_83A85138);
PPC_FUNC_IMPL(__imp__sub_83A85138) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,88(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x83a85168
	goto loc_83A85168;
loc_83A85158:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lbz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x83a7a0d8
	ctx.lr = 0x83A85168;
	sub_83A7A0D8(ctx, base);
loc_83A85168:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a7a038
	ctx.lr = 0x83A85174;
	sub_83A7A038(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83a85158
	if (!cr0.eq) goto loc_83A85158;
	// lwz r31,152(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// b 0x83a85194
	goto loc_83A85194;
loc_83A85184:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lbz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x83a7a0d8
	ctx.lr = 0x83A85194;
	sub_83A7A0D8(ctx, base);
loc_83A85194:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a7a038
	ctx.lr = 0x83A851A0;
	sub_83A7A038(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83a85184
	if (!cr0.eq) goto loc_83A85184;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A851C0"))) PPC_WEAK_FUNC(sub_83A851C0);
PPC_FUNC_IMPL(__imp__sub_83A851C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// stb r11,227(r3)
	PPC_STORE_U8(ctx.r3.u32 + 227, ctx.r11.u8);
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// stb r11,224(r3)
	PPC_STORE_U8(ctx.r3.u32 + 224, ctx.r11.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stb r11,225(r3)
	PPC_STORE_U8(ctx.r3.u32 + 225, ctx.r11.u8);
	// stb r11,383(r3)
	PPC_STORE_U8(ctx.r3.u32 + 383, ctx.r11.u8);
	// stw r11,268(r3)
	PPC_STORE_U32(ctx.r3.u32 + 268, ctx.r11.u32);
	// stw r11,272(r3)
	PPC_STORE_U32(ctx.r3.u32 + 272, ctx.r11.u32);
	// stw r11,276(r3)
	PPC_STORE_U32(ctx.r3.u32 + 276, ctx.r11.u32);
	// stw r11,280(r3)
	PPC_STORE_U32(ctx.r3.u32 + 280, ctx.r11.u32);
	// std r11,288(r3)
	PPC_STORE_U64(ctx.r3.u32 + 288, ctx.r11.u64);
	// stw r11,296(r3)
	PPC_STORE_U32(ctx.r3.u32 + 296, ctx.r11.u32);
	// bge cr6,0x83a85204
	if (!cr6.lt) goto loc_83A85204;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_83A85204:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r4,232(r3)
	PPC_STORE_U32(ctx.r3.u32 + 232, ctx.r4.u32);
	// stw r5,236(r3)
	PPC_STORE_U32(ctx.r3.u32 + 236, ctx.r5.u32);
	// stw r10,240(r3)
	PPC_STORE_U32(ctx.r3.u32 + 240, ctx.r10.u32);
	// stw r9,244(r3)
	PPC_STORE_U32(ctx.r3.u32 + 244, ctx.r9.u32);
	// stb r11,225(r3)
	PPC_STORE_U8(ctx.r3.u32 + 225, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A85220"))) PPC_WEAK_FUNC(sub_83A85220);
PPC_FUNC_IMPL(__imp__sub_83A85220) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x83a85274
	if (!cr6.eq) goto loc_83A85274;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83a852c8
	if (cr6.eq) goto loc_83A852C8;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x83a852c8
	if (!cr6.gt) goto loc_83A852C8;
	// lhz r8,376(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 376);
	// cmpwi cr6,r8,1
	cr6.compare<int32_t>(ctx.r8.s32, 1, xer);
	// beq cr6,0x83a852b8
	if (cr6.eq) goto loc_83A852B8;
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// beq cr6,0x83a852b8
	if (cr6.eq) goto loc_83A852B8;
	// cmpwi cr6,r8,4
	cr6.compare<int32_t>(ctx.r8.s32, 4, xer);
	// beq cr6,0x83a852b8
	if (cr6.eq) goto loc_83A852B8;
	// stb r11,227(r3)
	PPC_STORE_U8(ctx.r3.u32 + 227, ctx.r11.u8);
	// stb r11,224(r3)
	PPC_STORE_U8(ctx.r3.u32 + 224, ctx.r11.u8);
	// stb r11,225(r3)
	PPC_STORE_U8(ctx.r3.u32 + 225, ctx.r11.u8);
	// stb r11,383(r3)
	PPC_STORE_U8(ctx.r3.u32 + 383, ctx.r11.u8);
loc_83A85274:
	// stw r11,268(r3)
	PPC_STORE_U32(ctx.r3.u32 + 268, ctx.r11.u32);
	// cmpw cr6,r10,r5
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, xer);
	// stw r11,272(r3)
	PPC_STORE_U32(ctx.r3.u32 + 272, ctx.r11.u32);
	// stw r11,276(r3)
	PPC_STORE_U32(ctx.r3.u32 + 276, ctx.r11.u32);
	// stw r11,280(r3)
	PPC_STORE_U32(ctx.r3.u32 + 280, ctx.r11.u32);
	// std r11,288(r3)
	PPC_STORE_U64(ctx.r3.u32 + 288, ctx.r11.u64);
	// stw r11,296(r3)
	PPC_STORE_U32(ctx.r3.u32 + 296, ctx.r11.u32);
	// ble cr6,0x83a8529c
	if (!cr6.gt) goto loc_83A8529C;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_83A8529C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r4,232(r3)
	PPC_STORE_U32(ctx.r3.u32 + 232, ctx.r4.u32);
	// stw r5,236(r3)
	PPC_STORE_U32(ctx.r3.u32 + 236, ctx.r5.u32);
	// stw r10,240(r3)
	PPC_STORE_U32(ctx.r3.u32 + 240, ctx.r10.u32);
	// stw r9,244(r3)
	PPC_STORE_U32(ctx.r3.u32 + 244, ctx.r9.u32);
	// stb r11,225(r3)
	PPC_STORE_U8(ctx.r3.u32 + 225, ctx.r11.u8);
	// blr 
	return;
loc_83A852B8:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,8336
	ctx.r4.s64 = ctx.r11.s64 + 8336;
	// b 0x831ea3f0
	sub_831EA3F0(ctx, base);
	return;
loc_83A852C8:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,8324
	ctx.r4.s64 = ctx.r11.s64 + 8324;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831ea418
	sub_831EA418(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A852DC"))) PPC_WEAK_FUNC(sub_83A852DC);
PPC_FUNC_IMPL(__imp__sub_83A852DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A852E0"))) PPC_WEAK_FUNC(sub_83A852E0);
PPC_FUNC_IMPL(__imp__sub_83A852E0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,256(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a8530c
	if (!cr6.eq) goto loc_83A8530C;
loc_83A85304:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a85370
	goto loc_83A85370;
loc_83A8530C:
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// std r7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r6,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// bl 0x83ababa0
	ctx.lr = 0x83A8532C;
	sub_83ABABA0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq 0x83a85304
	if (cr0.eq) goto loc_83A85304;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83abaa90
	ctx.lr = 0x83A8533C;
	sub_83ABAA90(ctx, base);
	// stw r31,252(r30)
	PPC_STORE_U32(ctx.r30.u32 + 252, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f8200
	ctx.lr = 0x83A85348;
	sub_831F8200(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,252(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 252);
	// bl 0x825832e8
	ctx.lr = 0x83A85354;
	sub_825832E8(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a85220
	ctx.lr = 0x83A8536C;
	sub_83A85220(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_83A85370:
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

__attribute__((alias("__imp__sub_83A85388"))) PPC_WEAK_FUNC(sub_83A85388);
PPC_FUNC_IMPL(__imp__sub_83A85388) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a853bc
	if (!cr6.eq) goto loc_83A853BC;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,8508
	ctx.r4.s64 = ctx.r11.s64 + 8508;
loc_83A853B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A853B8;
	sub_831EA418(ctx, base);
	// b 0x83a85420
	goto loc_83A85420;
loc_83A853BC:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a761b8
	ctx.lr = 0x83A853C8;
	sub_83A761B8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a853e0
	if (!cr6.eq) goto loc_83A853E0;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-4
	ctx.r5.s64 = -4;
	// addi r4,r11,8496
	ctx.r4.s64 = ctx.r11.s64 + 8496;
	// b 0x83a853b0
	goto loc_83A853B0;
loc_83A853E0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a85400
	if (!cr6.eq) goto loc_83A85400;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,7720
	ctx.r4.s64 = ctx.r11.s64 + 7720;
	// bl 0x831ea3f0
	ctx.lr = 0x83A853FC;
	sub_831EA3F0(ctx, base);
	// b 0x83a85414
	goto loc_83A85414;
loc_83A85400:
	// lbz r11,225(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 225);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x83a85414
	if (!cr0.eq) goto loc_83A85414;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,383(r31)
	PPC_STORE_U8(ctx.r31.u32 + 383, ctx.r11.u8);
loc_83A85414:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a761b8
	ctx.lr = 0x83A85420;
	sub_83A761B8(ctx, base);
loc_83A85420:
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

__attribute__((alias("__imp__sub_83A85434"))) PPC_WEAK_FUNC(sub_83A85434);
PPC_FUNC_IMPL(__imp__sub_83A85434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A85438"))) PPC_WEAK_FUNC(sub_83A85438);
PPC_FUNC_IMPL(__imp__sub_83A85438) {
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
	// bl 0x83a85138
	ctx.lr = 0x83A85450;
	sub_83A85138(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r4,448(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// lwz r5,452(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 452);
	// stb r11,231(r31)
	PPC_STORE_U8(ctx.r31.u32 + 231, ctx.r11.u8);
	// stb r11,381(r31)
	PPC_STORE_U8(ctx.r31.u32 + 381, ctx.r11.u8);
	// stb r11,382(r31)
	PPC_STORE_U8(ctx.r31.u32 + 382, ctx.r11.u8);
	// stw r11,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r11.u32);
	// lwz r10,436(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 436);
	// lwz r9,440(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// lwz r8,444(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 444);
	// lwz r7,456(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 456);
	// lwz r6,460(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 460);
	// stw r4,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r4.u32);
	// stw r5,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r5.u32);
	// stw r10,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r10.u32);
	// stw r9,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r9.u32);
	// stw r8,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r8.u32);
	// stw r7,488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 488, ctx.r7.u32);
	// stw r6,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r6.u32);
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r11,432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	// stw r11,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r11.u32);
	// bl 0x83ab96e8
	ctx.lr = 0x83A854AC;
	sub_83AB96E8(ctx, base);
	// lwz r3,248(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a854bc
	if (cr6.eq) goto loc_83A854BC;
	// bl 0x83aba600
	ctx.lr = 0x83A854BC;
	sub_83ABA600(ctx, base);
loc_83A854BC:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lwz r10,376(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x83a854e8
	if (cr6.eq) goto loc_83A854E8;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r4,1
	ctx.r4.s64 = 1;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r11.u32);
	// bl 0x83a83dc0
	ctx.lr = 0x83A854E8;
	sub_83A83DC0(ctx, base);
loc_83A854E8:
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

__attribute__((alias("__imp__sub_83A854FC"))) PPC_WEAK_FUNC(sub_83A854FC);
PPC_FUNC_IMPL(__imp__sub_83A854FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A85500"))) PPC_WEAK_FUNC(sub_83A85500);
PPC_FUNC_IMPL(__imp__sub_83A85500) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,226(r3)
	PPC_STORE_U8(ctx.r3.u32 + 226, ctx.r11.u8);
	// stb r10,380(r3)
	PPC_STORE_U8(ctx.r3.u32 + 380, ctx.r10.u8);
	// b 0x83a85438
	sub_83A85438(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A85514"))) PPC_WEAK_FUNC(sub_83A85514);
PPC_FUNC_IMPL(__imp__sub_83A85514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A85518"))) PPC_WEAK_FUNC(sub_83A85518);
PPC_FUNC_IMPL(__imp__sub_83A85518) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a85554
	if (!cr6.eq) goto loc_83A85554;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,8532
	ctx.r4.s64 = ctx.r11.s64 + 8532;
loc_83A85548:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A85550;
	sub_831EA418(ctx, base);
	// b 0x83a85590
	goto loc_83A85590;
loc_83A85554:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a761b8
	ctx.lr = 0x83A85560;
	sub_83A761B8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a85578
	if (!cr6.eq) goto loc_83A85578;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-4
	ctx.r5.s64 = -4;
	// addi r4,r11,8520
	ctx.r4.s64 = ctx.r11.s64 + 8520;
	// b 0x83a85548
	goto loc_83A85548;
loc_83A85578:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a84390
	ctx.lr = 0x83A85584;
	sub_83A84390(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a761b8
	ctx.lr = 0x83A85590;
	sub_83A761B8(ctx, base);
loc_83A85590:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A855A8"))) PPC_WEAK_FUNC(sub_83A855A8);
PPC_FUNC_IMPL(__imp__sub_83A855A8) {
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83a855c0
	if (!cr6.eq) goto loc_83A855C0;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
loc_83A855C0:
	// li r11,-1
	ctx.r11.s64 = -1;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// std r11,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r11.u64);
	// bne cr6,0x83a855d4
	if (!cr6.eq) goto loc_83A855D4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
loc_83A855D4:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// bne cr6,0x83a855fc
	if (!cr6.eq) goto loc_83A855FC;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,8544
	ctx.r4.s64 = ctx.r11.s64 + 8544;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A855F4;
	sub_831EA418(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a85600
	goto loc_83A85600;
loc_83A855FC:
	// bl 0x83a845c8
	ctx.lr = 0x83A85600;
	sub_83A845C8(ctx, base);
loc_83A85600:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A85610"))) PPC_WEAK_FUNC(sub_83A85610);
PPC_FUNC_IMPL(__imp__sub_83A85610) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,92(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// bl 0x83ab9390
	ctx.lr = 0x83A85630;
	sub_83AB9390(ctx, base);
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// bl 0x83a9ff20
	ctx.lr = 0x83A85638;
	sub_83A9FF20(ctx, base);
	// lwz r3,248(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a85658
	if (cr6.eq) goto loc_83A85658;
	// bl 0x83aba648
	ctx.lr = 0x83A85648;
	sub_83ABA648(ctx, base);
	// lwz r3,248(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// bl 0x83aba660
	ctx.lr = 0x83A85650;
	sub_83ABA660(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a8567c
	if (!cr0.eq) goto loc_83A8567C;
loc_83A85658:
	// lbz r10,381(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 381);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,227(r31)
	PPC_STORE_U8(ctx.r31.u32 + 227, ctx.r11.u8);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stb r11,224(r31)
	PPC_STORE_U8(ctx.r31.u32 + 224, ctx.r11.u8);
	// stb r11,225(r31)
	PPC_STORE_U8(ctx.r31.u32 + 225, ctx.r11.u8);
	// stb r11,383(r31)
	PPC_STORE_U8(ctx.r31.u32 + 383, ctx.r11.u8);
	// beq 0x83a8567c
	if (cr0.eq) goto loc_83A8567C;
	// stw r11,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r11.u32);
loc_83A8567C:
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

__attribute__((alias("__imp__sub_83A85690"))) PPC_WEAK_FUNC(sub_83A85690);
PPC_FUNC_IMPL(__imp__sub_83A85690) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A85698;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,376(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 376);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi r11,0
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x83a85750
	if (cr0.eq) goto loc_83A85750;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x83a856c4
	if (!cr6.eq) goto loc_83A856C4;
	// lbz r11,381(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 381);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83a85750
	if (cr0.eq) goto loc_83A85750;
loc_83A856C4:
	// lwz r3,248(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a856d4
	if (cr6.eq) goto loc_83A856D4;
	// bl 0x83aba5b8
	ctx.lr = 0x83A856D4;
	sub_83ABA5B8(ctx, base);
loc_83A856D4:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq cr6,0x83a856f0
	if (cr6.eq) goto loc_83A856F0;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lwz r10,376(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	// ori r11,r11,6
	ctx.r11.u64 = ctx.r11.u64 | 6;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bgt cr6,0x83a85750
	if (cr6.gt) goto loc_83A85750;
loc_83A856F0:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lbz r11,51(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 51);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83a8570c
	if (cr0.eq) goto loc_83A8570C;
	// lis r11,4
	ctx.r11.s64 = 262144;
	// ori r11,r11,11
	ctx.r11.u64 = ctx.r11.u64 | 11;
	// stw r11,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r11.u32);
loc_83A8570C:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r30,r11,7036
	ctx.r30.s64 = ctx.r11.s64 + 7036;
	// b 0x83a8572c
	goto loc_83A8572C;
loc_83A85718:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r4,376(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 376);
	// bl 0x83a83dc0
	ctx.lr = 0x83A85724;
	sub_83A83DC0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a85750
	if (!cr0.eq) goto loc_83A85750;
loc_83A8572C:
	// lwz r29,376(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r29,2,14,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0x3FFFC;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A85744;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// bne cr6,0x83a85718
	if (!cr6.eq) goto loc_83A85718;
loc_83A85750:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A85758"))) PPC_WEAK_FUNC(sub_83A85758);
PPC_FUNC_IMPL(__imp__sub_83A85758) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A85760;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,248(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 248);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a85788
	if (cr6.eq) goto loc_83A85788;
	// bl 0x83aba648
	ctx.lr = 0x83A85778;
	sub_83ABA648(ctx, base);
	// lwz r3,248(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// bl 0x83aba660
	ctx.lr = 0x83A85780;
	sub_83ABA660(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a85810
	if (!cr0.eq) goto loc_83A85810;
loc_83A85788:
	// lbz r11,227(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 227);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x83a8579c
	if (cr0.eq) goto loc_83A8579C;
	// lwz r29,316(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// b 0x83a857a0
	goto loc_83A857A0;
loc_83A8579C:
	// lwz r29,332(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
loc_83A857A0:
	// lbz r11,224(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 224);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83a85818
	if (!cr6.eq) goto loc_83A85818;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x83a7a038
	ctx.lr = 0x83A857B8;
	sub_83A7A038(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne 0x83a857d4
	if (!cr0.eq) goto loc_83A857D4;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,8556
	ctx.r4.s64 = ctx.r11.s64 + 8556;
	// bl 0x831ea3f0
	ctx.lr = 0x83A857D0;
	sub_831EA3F0(ctx, base);
	// b 0x83a85810
	goto loc_83A85810;
loc_83A857D4:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r28,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r28.u32);
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, xer);
	// bgt cr6,0x83a857f8
	if (cr6.gt) goto loc_83A857F8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a7a2a0
	ctx.lr = 0x83A857F4;
	sub_83A7A2A0(ctx, base);
	// stw r28,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r28.u32);
loc_83A857F8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x83a7a090
	ctx.lr = 0x83A85804;
	sub_83A7A090(ctx, base);
loc_83A85804:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,3
	ctx.r11.u64 = ctx.r11.u64 | 3;
loc_83A8580C:
	// stw r11,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r11.u32);
loc_83A85810:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83A85818:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a85138
	ctx.lr = 0x83A85820;
	sub_83A85138(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// extsw r8,r29
	ctx.r8.s64 = ctx.r29.s32;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a84288
	ctx.lr = 0x83A85840;
	sub_83A84288(ctx, base);
	// lwz r3,248(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a85864
	if (!cr6.eq) goto loc_83A85864;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,7300
	ctx.r4.s64 = ctx.r11.s64 + 7300;
	// bl 0x831ea3f0
	ctx.lr = 0x83A85858;
	sub_831EA3F0(ctx, base);
	// lis r11,4
	ctx.r11.s64 = 262144;
	// ori r11,r11,11
	ctx.r11.u64 = ctx.r11.u64 | 11;
	// b 0x83a8580c
	goto loc_83A8580C;
loc_83A85864:
	// bl 0x83aba660
	ctx.lr = 0x83A85868;
	sub_83ABA660(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83a85804
	if (cr6.eq) goto loc_83A85804;
	// lwz r4,256(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r3,248(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// bl 0x83aba690
	ctx.lr = 0x83A8587C;
	sub_83ABA690(ctx, base);
	// lwz r3,248(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// bl 0x83aba630
	ctx.lr = 0x83A85884;
	sub_83ABA630(ctx, base);
	// b 0x83a85804
	goto loc_83A85804;
}

__attribute__((alias("__imp__sub_83A85888"))) PPC_WEAK_FUNC(sub_83A85888);
PPC_FUNC_IMPL(__imp__sub_83A85888) {
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
	// lbz r11,231(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 231);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x83a858c0
	if (!cr0.eq) goto loc_83A858C0;
	// lwz r3,220(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// bl 0x83a9ff60
	ctx.lr = 0x83A858B0;
	sub_83A9FF60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a858c0
	if (cr0.eq) goto loc_83A858C0;
loc_83A858B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a85928
	goto loc_83A85928;
loc_83A858C0:
	// lwz r3,248(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a858d8
	if (cr6.eq) goto loc_83A858D8;
	// bl 0x83aba660
	ctx.lr = 0x83A858D0;
	sub_83ABA660(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a858b8
	if (!cr0.eq) goto loc_83A858B8;
loc_83A858D8:
	// lbz r11,224(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 224);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x83a85904
	if (!cr6.eq) goto loc_83A85904;
	// lwz r3,248(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a85904
	if (cr6.eq) goto loc_83A85904;
	// lwz r11,252(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a85904
	if (!cr6.eq) goto loc_83A85904;
	// bl 0x83aba6c0
	ctx.lr = 0x83A85900;
	sub_83ABA6C0(ctx, base);
	// stw r3,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r3.u32);
loc_83A85904:
	// lwz r3,252(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a8591c
	if (cr6.eq) goto loc_83A8591C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r11.u32);
	// bl 0x83abaaa0
	ctx.lr = 0x83A8591C;
	sub_83ABAAA0(ctx, base);
loc_83A8591C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a85138
	ctx.lr = 0x83A85924;
	sub_83A85138(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_83A85928:
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

__attribute__((alias("__imp__sub_83A8593C"))) PPC_WEAK_FUNC(sub_83A8593C);
PPC_FUNC_IMPL(__imp__sub_83A8593C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A85940"))) PPC_WEAK_FUNC(sub_83A85940);
PPC_FUNC_IMPL(__imp__sub_83A85940) {
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
	// lbz r11,227(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 227);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x83a859d4
	if (cr0.eq) goto loc_83A859D4;
	// bl 0x83a83ed0
	ctx.lr = 0x83A85968;
	sub_83A83ED0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x83a859c4
	if (cr0.lt) goto loc_83A859C4;
	// lbz r10,227(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 227);
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x83a85998
	if (cr0.eq) goto loc_83A85998;
	// lwz r11,332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, xer);
	// bgt cr6,0x83a85990
	if (cr6.gt) goto loc_83A85990;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// b 0x83a8599c
	goto loc_83A8599C;
loc_83A85990:
	// rlwinm r10,r10,0,24,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFE;
	// stb r10,227(r31)
	PPC_STORE_U8(ctx.r31.u32 + 227, ctx.r10.u8);
loc_83A85998:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_83A8599C:
	// extsw r7,r3
	ctx.r7.s64 = ctx.r3.s32;
	// li r9,16
	ctx.r9.s64 = 16;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a84288
	ctx.lr = 0x83A859BC;
	sub_83A84288(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r11,225(r31)
	PPC_STORE_U8(ctx.r31.u32 + 225, ctx.r11.u8);
loc_83A859C4:
	// lbz r11,227(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 227);
	// andi. r11,r11,253
	ctx.r11.u64 = ctx.r11.u64 & 253;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stb r11,227(r31)
	PPC_STORE_U8(ctx.r31.u32 + 227, ctx.r11.u8);
	// b 0x83a85a4c
	goto loc_83A85A4C;
loc_83A859D4:
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x83a85a44
	if (cr0.eq) goto loc_83A85A44;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x83aba6c0
	ctx.lr = 0x83A859E4;
	sub_83ABA6C0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq 0x83a85a38
	if (cr0.eq) goto loc_83A85A38;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83aba8b8
	ctx.lr = 0x83A859F4;
	sub_83ABA8B8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a85a38
	if (cr0.eq) goto loc_83A85A38;
	// stw r30,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r30.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831f8200
	ctx.lr = 0x83A85A08;
	sub_831F8200(ctx, base);
	// stw r3,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r3.u32);
	// lwz r3,252(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// bl 0x825832e8
	ctx.lr = 0x83A85A14;
	sub_825832E8(ctx, base);
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// lwz r10,332(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r3,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r3.u32);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stb r9,225(r31)
	PPC_STORE_U8(ctx.r31.u32 + 225, ctx.r9.u8);
	// stw r10,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r10.u32);
	// stw r11,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r11.u32);
	// b 0x83a85a4c
	goto loc_83A85A4C;
loc_83A85A38:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a84f38
	ctx.lr = 0x83A85A40;
	sub_83A84F38(ctx, base);
	// b 0x83a85a4c
	goto loc_83A85A4C;
loc_83A85A44:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a83f88
	ctx.lr = 0x83A85A4C;
	sub_83A83F88(ctx, base);
loc_83A85A4C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A85A64"))) PPC_WEAK_FUNC(sub_83A85A64);
PPC_FUNC_IMPL(__imp__sub_83A85A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A85A68"))) PPC_WEAK_FUNC(sub_83A85A68);
PPC_FUNC_IMPL(__imp__sub_83A85A68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x83A85A70;
	__savegprlr_21(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// bl 0x83a84050
	ctx.lr = 0x83A85A90;
	sub_83A84050(ctx, base);
	// mr. r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r23.s32, 0, xer);
	// blt 0x83a85d24
	if (cr0.lt) goto loc_83A85D24;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x83a85d10
	if (cr6.eq) goto loc_83A85D10;
	// cmpw cr6,r31,r23
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r23.s32, xer);
	// blt cr6,0x83a85d10
	if (cr6.lt) goto loc_83A85D10;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x831ea7a0
	ctx.lr = 0x83A85AB4;
	sub_831EA7A0(ctx, base);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r11,r24,7
	ctx.r11.s64 = ctx.r24.s64 + 7;
	// li r9,-1
	ctx.r9.s64 = -1;
	// rlwinm r31,r11,0,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f0,-26260(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// addi r25,r31,496
	ctx.r25.s64 = ctx.r31.s64 + 496;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stfs f0,384(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 384, temp.u32);
	// stfs f0,388(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 388, temp.u32);
	// stb r11,228(r31)
	PPC_STORE_U8(ctx.r31.u32 + 228, ctx.r11.u8);
	// stw r9,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r9.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x83a7a000
	ctx.lr = 0x83A85AF0;
	sub_83A7A000(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x83a7a000
	ctx.lr = 0x83A85AFC;
	sub_83A7A000(ctx, base);
	// stw r3,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r3.u32);
	// addi r30,r31,208
	ctx.r30.s64 = ctx.r31.s64 + 208;
	// addi r28,r31,156
	ctx.r28.s64 = ctx.r31.s64 + 156;
	// li r29,2
	ctx.r29.s64 = 2;
loc_83A85B0C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a7a170
	ctx.lr = 0x83A85B14;
	sub_83A7A170(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stb r11,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, ctx.r11.u8);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwzu r5,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r5.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x83a7a0d8
	ctx.lr = 0x83A85B3C;
	sub_83A7A0D8(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r28,r28,28
	ctx.r28.s64 = ctx.r28.s64 + 28;
	// bne 0x83a85b0c
	if (!cr0.eq) goto loc_83A85B0C;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r30,r11,8,26,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0x3F;
	// clrlwi r29,r11,12
	ctx.r29.u64 = ctx.r11.u32 & 0xFFFFF;
	// bl 0x831ea7a0
	ctx.lr = 0x83A85B60;
	sub_831EA7A0(ctx, base);
	// lis r28,-31739
	ctx.r28.s64 = -2080047104;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r26,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// lwa r11,27008(r28)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r28.u32 + 27008));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x83ab9760
	ctx.lr = 0x83A85B94;
	sub_83AB9760(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83ab9810
	ctx.lr = 0x83A85BA8;
	sub_83AB9810(ctx, base);
	// stw r3,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83a85d24
	if (cr0.eq) goto loc_83A85D24;
	// lwz r4,152(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// bl 0x83ab93e8
	ctx.lr = 0x83A85BBC;
	sub_83AB93E8(ctx, base);
	// lwa r11,27008(r28)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r28.u32 + 27008));
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stw r29,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r29.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// rlwinm r11,r11,12,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xF;
	// stw r22,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r22.u32);
	// stw r31,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r31.u32);
	// rlwinm r10,r11,29,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// clrlwi r29,r11,29
	ctx.r29.u64 = ctx.r11.u32 & 0x7;
	// stw r10,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a9fdb0
	ctx.lr = 0x83A85C04;
	sub_83A9FDB0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x83a85c28
	if (!cr0.lt) goto loc_83A85C28;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,8792
	ctx.r4.s64 = ctx.r11.s64 + 8792;
loc_83A85C14:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea3f0
	ctx.lr = 0x83A85C1C;
	sub_831EA3F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a85040
	ctx.lr = 0x83A85C24;
	sub_83A85040(ctx, base);
	// b 0x83a85d24
	goto loc_83A85D24;
loc_83A85C28:
	// add r11,r26,r25
	ctx.r11.u64 = ctx.r26.u64 + ctx.r25.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// rlwinm r28,r11,0,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x83aa0a28
	ctx.lr = 0x83A85C48;
	sub_83AA0A28(ctx, base);
	// stw r3,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83a85c60
	if (!cr0.eq) goto loc_83A85C60;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,8756
	ctx.r4.s64 = ctx.r11.s64 + 8756;
	// b 0x83a85c14
	goto loc_83A85C14;
loc_83A85C60:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x83a85ce4
	if (cr0.eq) goto loc_83A85CE4;
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x831ea7a0
	ctx.lr = 0x83A85C78;
	sub_831EA7A0(ctx, base);
	// add r11,r30,r28
	ctx.r11.u64 = ctx.r30.u64 + ctx.r28.u64;
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// stw r21,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r21.u32);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rlwinm r4,r11,0,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// subf r11,r4,r23
	ctx.r11.s64 = ctx.r23.s64 - ctx.r4.s64;
	// lfs f0,7568(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7568);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// add r5,r11,r24
	ctx.r5.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// bl 0x83aba570
	ctx.lr = 0x83A85CB0;
	sub_83ABA570(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r3.u32);
	// bne 0x83a85cc8
	if (!cr0.eq) goto loc_83A85CC8;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,8716
	ctx.r4.s64 = ctx.r11.s64 + 8716;
	// b 0x83a85c14
	goto loc_83A85C14;
loc_83A85CC8:
	// lis r11,-31832
	ctx.r11.s64 = -2086141952;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,22848
	ctx.r4.s64 = ctx.r11.s64 + 22848;
	// bl 0x83aba5e8
	ctx.lr = 0x83A85CD8;
	sub_83ABA5E8(ctx, base);
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r3,248(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// bl 0x83aba5a0
	ctx.lr = 0x83A85CE4;
	sub_83ABA5A0(ctx, base);
loc_83A85CE4:
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,27016(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27016);
	// bl 0x83b664c0
	ctx.lr = 0x83A85CF4;
	sub_83B664C0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a85d08
	if (!cr0.eq) goto loc_83A85D08;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,8624
	ctx.r4.s64 = ctx.r11.s64 + 8624;
	// b 0x83a85c14
	goto loc_83A85C14;
loc_83A85D08:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x83a85d28
	goto loc_83A85D28;
loc_83A85D10:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,8608
	ctx.r4.s64 = ctx.r11.s64 + 8608;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A85D24;
	sub_831EA418(ctx, base);
loc_83A85D24:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83A85D28:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A85D30"))) PPC_WEAK_FUNC(sub_83A85D30);
PPC_FUNC_IMPL(__imp__sub_83A85D30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83A85D38;
	__savegprlr_24(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,220(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x83aa0218
	ctx.lr = 0x83A85D58;
	sub_83AA0218(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a85518
	ctx.lr = 0x83A85D64;
	sub_83A85518(ctx, base);
	// bl 0x83a81a70
	ctx.lr = 0x83A85D68;
	sub_83A81A70(ctx, base);
	// bl 0x83a83250
	ctx.lr = 0x83A85D6C;
	sub_83A83250(ctx, base);
	// lwz r11,376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a85e3c
	if (cr6.eq) goto loc_83A85E3C;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r28,r11,8848
	ctx.r28.s64 = ctx.r11.s64 + 8848;
loc_83A85D80:
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x83a75e98
	ctx.lr = 0x83A85D88;
	sub_83A75E98(ctx, base);
	// li r11,3000
	ctx.r11.s64 = 3000;
	// divw r11,r30,r11
	ctx.r11.s32 = PPCDivide(ctx.r30.s32, ctx.r11.s32);
	// mulli r11,r11,3000
	ctx.r11.s64 = ctx.r11.s64 * 3000;
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// cmpwi cr6,r11,2999
	cr6.compare<int32_t>(ctx.r11.s32, 2999, xer);
	// bne cr6,0x83a85e08
	if (!cr6.eq) goto loc_83A85E08;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r27,376(r31)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r31.u32 + 376);
	// bl 0x83a84700
	ctx.lr = 0x83A85DAC;
	sub_83A84700(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a846b0
	ctx.lr = 0x83A85DB8;
	sub_83A846B0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r24,381(r31)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r31.u32 + 381);
	// bl 0x83a844a0
	ctx.lr = 0x83A85DC8;
	sub_83A844A0(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r8,376(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// extsb r10,r24
	ctx.r10.s64 = ctx.r24.s8;
	// bl 0x831ea730
	ctx.lr = 0x83A85DF4;
	sub_831EA730(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea3f0
	ctx.lr = 0x83A85E00;
	sub_831EA3F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a84448
	ctx.lr = 0x83A85E08;
	sub_83A84448(ctx, base);
loc_83A85E08:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// li r4,14
	ctx.r4.s64 = 14;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bl 0x83aa0218
	ctx.lr = 0x83A85E1C;
	sub_83AA0218(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a85518
	ctx.lr = 0x83A85E28;
	sub_83A85518(ctx, base);
	// bl 0x83a81a70
	ctx.lr = 0x83A85E2C;
	sub_83A81A70(ctx, base);
	// bl 0x83a83250
	ctx.lr = 0x83A85E30;
	sub_83A83250(ctx, base);
	// lwz r11,376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a85d80
	if (!cr6.eq) goto loc_83A85D80;
loc_83A85E3C:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A85E44"))) PPC_WEAK_FUNC(sub_83A85E44);
PPC_FUNC_IMPL(__imp__sub_83A85E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A85E48"))) PPC_WEAK_FUNC(sub_83A85E48);
PPC_FUNC_IMPL(__imp__sub_83A85E48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A85E50;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a85e80
	if (!cr6.eq) goto loc_83A85E80;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,9032
	ctx.r4.s64 = ctx.r11.s64 + 9032;
loc_83A85E74:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A85E7C;
	sub_831EA418(ctx, base);
	// b 0x83a85ec8
	goto loc_83A85EC8;
loc_83A85E80:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a761b8
	ctx.lr = 0x83A85E8C;
	sub_83A761B8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a85ea4
	if (!cr6.eq) goto loc_83A85EA4;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-4
	ctx.r5.s64 = -4;
	// addi r4,r11,9020
	ctx.r4.s64 = ctx.r11.s64 + 9020;
	// b 0x83a85e74
	goto loc_83A85E74;
loc_83A85EA4:
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a85220
	ctx.lr = 0x83A85EBC;
	sub_83A85220(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a761b8
	ctx.lr = 0x83A85EC8;
	sub_83A761B8(ctx, base);
loc_83A85EC8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A85ED0"))) PPC_WEAK_FUNC(sub_83A85ED0);
PPC_FUNC_IMPL(__imp__sub_83A85ED0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83A85ED8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x83a7bda0
	ctx.lr = 0x83A85EF8;
	sub_83A7BDA0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A85F10;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a85fcc
	if (!cr0.eq) goto loc_83A85FCC;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83abb660
	ctx.lr = 0x83A85F2C;
	sub_83ABB660(ctx, base);
	// lbz r11,227(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 227);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x83a85f48
	if (cr0.eq) goto loc_83A85F48;
	// lwz r11,332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a85f48
	if (cr6.eq) goto loc_83A85F48;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_83A85F48:
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,-1
	ctx.r6.s64 = -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r30,8(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r10,r28,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r28.s64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// clrldi r29,r10,32
	ctx.r29.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// clrldi r28,r11,32
	ctx.r28.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a852e0
	ctx.lr = 0x83A85F88;
	sub_83A852E0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a85fb8
	if (!cr0.eq) goto loc_83A85FB8;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a84288
	ctx.lr = 0x83A85FB0;
	sub_83A84288(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r11,225(r31)
	PPC_STORE_U8(ctx.r31.u32 + 225, ctx.r11.u8);
loc_83A85FB8:
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// std r11,288(r31)
	PPC_STORE_U64(ctx.r31.u32 + 288, ctx.r11.u64);
	// stw r10,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r10.u32);
	// b 0x83a8601c
	goto loc_83A8601C;
loc_83A85FCC:
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a852e0
	ctx.lr = 0x83A85FEC;
	sub_83A852E0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a8601c
	if (!cr0.eq) goto loc_83A8601C;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a84288
	ctx.lr = 0x83A86014;
	sub_83A84288(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r11,225(r31)
	PPC_STORE_U8(ctx.r31.u32 + 225, ctx.r11.u8);
loc_83A8601C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A86028"))) PPC_WEAK_FUNC(sub_83A86028);
PPC_FUNC_IMPL(__imp__sub_83A86028) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a8605c
	if (!cr6.eq) goto loc_83A8605C;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,9056
	ctx.r4.s64 = ctx.r11.s64 + 9056;
loc_83A86050:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A86058;
	sub_831EA418(ctx, base);
	// b 0x83a86114
	goto loc_83A86114;
loc_83A8605C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a761b8
	ctx.lr = 0x83A86068;
	sub_83A761B8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a86080
	if (!cr6.eq) goto loc_83A86080;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-4
	ctx.r5.s64 = -4;
	// addi r4,r11,9044
	ctx.r4.s64 = ctx.r11.s64 + 9044;
	// b 0x83a86050
	goto loc_83A86050;
loc_83A86080:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a860bc
	if (!cr6.eq) goto loc_83A860BC;
	// lhz r11,376(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 376);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83a860a8
	if (cr6.eq) goto loc_83A860A8;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x83a860a8
	if (cr6.eq) goto loc_83A860A8;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x83a860bc
	if (!cr6.eq) goto loc_83A860BC;
loc_83A860A8:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,8416
	ctx.r4.s64 = ctx.r11.s64 + 8416;
	// bl 0x831ea3f0
	ctx.lr = 0x83A860B8;
	sub_831EA3F0(ctx, base);
	// b 0x83a86108
	goto loc_83A86108;
loc_83A860BC:
	// lbz r11,225(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 225);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x83a86108
	if (!cr0.eq) goto loc_83A86108;
	// lbz r11,226(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 226);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,236(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// stw r10,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r10.u32);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// stb r11,225(r31)
	PPC_STORE_U8(ctx.r31.u32 + 225, ctx.r11.u8);
	// stw r9,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r9.u32);
	// bne cr6,0x83a86108
	if (!cr6.eq) goto loc_83A86108;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a84288
	ctx.lr = 0x83A86108;
	sub_83A84288(ctx, base);
loc_83A86108:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a761b8
	ctx.lr = 0x83A86114;
	sub_83A761B8(ctx, base);
loc_83A86114:
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

__attribute__((alias("__imp__sub_83A86128"))) PPC_WEAK_FUNC(sub_83A86128);
PPC_FUNC_IMPL(__imp__sub_83A86128) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x83a86028
	sub_83A86028(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A86130"))) PPC_WEAK_FUNC(sub_83A86130);
PPC_FUNC_IMPL(__imp__sub_83A86130) {
	PPC_FUNC_PROLOGUE();
	// b 0x83a85758
	sub_83A85758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A86134"))) PPC_WEAK_FUNC(sub_83A86134);
PPC_FUNC_IMPL(__imp__sub_83A86134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A86138"))) PPC_WEAK_FUNC(sub_83A86138);
PPC_FUNC_IMPL(__imp__sub_83A86138) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,92(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// bl 0x83ab9390
	ctx.lr = 0x83A8615C;
	sub_83AB9390(ctx, base);
	// lbz r11,381(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 381);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83a86170
	if (cr0.eq) goto loc_83A86170;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83a86228
	goto loc_83A86228;
loc_83A86170:
	// lbz r11,383(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 383);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83a861cc
	if (cr0.eq) goto loc_83A861CC;
	// lwz r11,464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r30,383(r31)
	PPC_STORE_U8(ctx.r31.u32 + 383, ctx.r30.u8);
	// beq cr6,0x83a8622c
	if (cr6.eq) goto loc_83A8622C;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r3,468(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bctrl 
	ctx.lr = 0x83A861A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,225(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 225);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83a8622c
	if (cr0.eq) goto loc_83A8622C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a85438
	ctx.lr = 0x83A861C0;
	sub_83A85438(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r11,r11,10
	ctx.r11.u64 = ctx.r11.u64 | 10;
	// b 0x83a86228
	goto loc_83A86228;
loc_83A861CC:
	// lbz r11,224(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 224);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x83a861f8
	if (!cr6.eq) goto loc_83A861F8;
	// lwz r3,248(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a861f8
	if (cr6.eq) goto loc_83A861F8;
	// lwz r11,252(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a861f8
	if (!cr6.eq) goto loc_83A861F8;
	// bl 0x83aba6c0
	ctx.lr = 0x83A861F4;
	sub_83ABA6C0(ctx, base);
	// stw r3,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r3.u32);
loc_83A861F8:
	// lwz r3,252(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a86210
	if (cr6.eq) goto loc_83A86210;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r11.u32);
	// bl 0x83abaaa0
	ctx.lr = 0x83A86210;
	sub_83ABAAA0(ctx, base);
loc_83A86210:
	// lwz r3,248(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a86220
	if (cr6.eq) goto loc_83A86220;
	// bl 0x83aba648
	ctx.lr = 0x83A86220;
	sub_83ABA648(ctx, base);
loc_83A86220:
	// lis r11,3
	ctx.r11.s64 = 196608;
	// ori r11,r11,9
	ctx.r11.u64 = ctx.r11.u64 | 9;
loc_83A86228:
	// stw r11,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r11.u32);
loc_83A8622C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A86244"))) PPC_WEAK_FUNC(sub_83A86244);
PPC_FUNC_IMPL(__imp__sub_83A86244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A86248"))) PPC_WEAK_FUNC(sub_83A86248);
PPC_FUNC_IMPL(__imp__sub_83A86248) {
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
	// lbz r11,381(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 381);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// extsb. r30,r11
	ctx.r30.s64 = ctx.r11.s8;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq 0x83a862d4
	if (cr0.eq) goto loc_83A862D4;
	// lwz r3,220(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// bl 0x83a9ff20
	ctx.lr = 0x83A86274;
	sub_83A9FF20(ctx, base);
	// lbz r11,231(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 231);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x83a86290
	if (!cr0.eq) goto loc_83A86290;
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// bl 0x83a9ff60
	ctx.lr = 0x83A86288;
	sub_83A9FF60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a862ac
	if (!cr0.eq) goto loc_83A862AC;
loc_83A86290:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// bl 0x83ab9390
	ctx.lr = 0x83A8629C;
	sub_83AB9390(ctx, base);
	// lwz r3,248(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a862ac
	if (cr6.eq) goto loc_83A862AC;
	// bl 0x83aba648
	ctx.lr = 0x83A862AC;
	sub_83ABA648(ctx, base);
loc_83A862AC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a85888
	ctx.lr = 0x83A862B4;
	sub_83A85888(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a862d4
	if (cr0.eq) goto loc_83A862D4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r11.u32);
	// stb r11,227(r31)
	PPC_STORE_U8(ctx.r31.u32 + 227, ctx.r11.u8);
	// stb r11,224(r31)
	PPC_STORE_U8(ctx.r31.u32 + 224, ctx.r11.u8);
	// stb r11,225(r31)
	PPC_STORE_U8(ctx.r31.u32 + 225, ctx.r11.u8);
	// stb r11,383(r31)
	PPC_STORE_U8(ctx.r31.u32 + 383, ctx.r11.u8);
loc_83A862D4:
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

__attribute__((alias("__imp__sub_83A862F0"))) PPC_WEAK_FUNC(sub_83A862F0);
PPC_FUNC_IMPL(__imp__sub_83A862F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83A862F8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a86338
	if (!cr6.eq) goto loc_83A86338;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,9080
	ctx.r4.s64 = ctx.r11.s64 + 9080;
loc_83A86328:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A86330;
	sub_831EA418(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a86384
	goto loc_83A86384;
loc_83A86338:
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r11,27004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27004);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a86358
	if (!cr6.eq) goto loc_83A86358;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-6
	ctx.r5.s64 = -6;
	// addi r4,r11,9068
	ctx.r4.s64 = ctx.r11.s64 + 9068;
	// b 0x83a86328
	goto loc_83A86328;
loc_83A86358:
	// bl 0x83a83240
	ctx.lr = 0x83A8635C;
	sub_83A83240(ctx, base);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a85a68
	ctx.lr = 0x83A86378;
	sub_83A85A68(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83a83248
	ctx.lr = 0x83A86380;
	sub_83A83248(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83A86384:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A8638C"))) PPC_WEAK_FUNC(sub_83A8638C);
PPC_FUNC_IMPL(__imp__sub_83A8638C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A86390"))) PPC_WEAK_FUNC(sub_83A86390);
PPC_FUNC_IMPL(__imp__sub_83A86390) {
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,27004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27004);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a863cc
	if (!cr6.eq) goto loc_83A863CC;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-6
	ctx.r5.s64 = -6;
	// addi r4,r11,9104
	ctx.r4.s64 = ctx.r11.s64 + 9104;
loc_83A863C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A863C8;
	sub_831EA418(ctx, base);
	// b 0x83a8641c
	goto loc_83A8641C;
loc_83A863CC:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83a863e4
	if (!cr6.eq) goto loc_83A863E4;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,9092
	ctx.r4.s64 = ctx.r11.s64 + 9092;
	// b 0x83a863c0
	goto loc_83A863C0;
loc_83A863E4:
	// lhz r11,376(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 376);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83a86400
	if (cr6.eq) goto loc_83A86400;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x83a86400
	if (cr6.eq) goto loc_83A86400;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x83a8640c
	if (!cr6.eq) goto loc_83A8640C;
loc_83A86400:
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a85d30
	ctx.lr = 0x83A8640C;
	sub_83A85D30(ctx, base);
loc_83A8640C:
	// bl 0x83a83240
	ctx.lr = 0x83A86410;
	sub_83A83240(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a85040
	ctx.lr = 0x83A86418;
	sub_83A85040(ctx, base);
	// bl 0x83a83248
	ctx.lr = 0x83A8641C;
	sub_83A83248(ctx, base);
loc_83A8641C:
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

__attribute__((alias("__imp__sub_83A86430"))) PPC_WEAK_FUNC(sub_83A86430);
PPC_FUNC_IMPL(__imp__sub_83A86430) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x83a86390
	sub_83A86390(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A86438"))) PPC_WEAK_FUNC(sub_83A86438);
PPC_FUNC_IMPL(__imp__sub_83A86438) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A86440;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r11,227(r3)
	PPC_STORE_U8(ctx.r3.u32 + 227, ctx.r11.u8);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stb r11,224(r3)
	PPC_STORE_U8(ctx.r3.u32 + 224, ctx.r11.u8);
	// li r7,0
	ctx.r7.s64 = 0;
	// stb r11,225(r3)
	PPC_STORE_U8(ctx.r3.u32 + 225, ctx.r11.u8);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stb r11,383(r3)
	PPC_STORE_U8(ctx.r3.u32 + 383, ctx.r11.u8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,268(r3)
	PPC_STORE_U32(ctx.r3.u32 + 268, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,272(r3)
	PPC_STORE_U32(ctx.r3.u32 + 272, ctx.r11.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r11,276(r3)
	PPC_STORE_U32(ctx.r3.u32 + 276, ctx.r11.u32);
	// stw r11,280(r3)
	PPC_STORE_U32(ctx.r3.u32 + 280, ctx.r11.u32);
	// std r11,288(r3)
	PPC_STORE_U64(ctx.r3.u32 + 288, ctx.r11.u64);
	// stw r11,296(r3)
	PPC_STORE_U32(ctx.r3.u32 + 296, ctx.r11.u32);
	// bl 0x83a852e0
	ctx.lr = 0x83A86490;
	sub_83A852E0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a864c0
	if (!cr0.eq) goto loc_83A864C0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a84288
	ctx.lr = 0x83A864B8;
	sub_83A84288(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r11,225(r31)
	PPC_STORE_U8(ctx.r31.u32 + 225, ctx.r11.u8);
loc_83A864C0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A864C8"))) PPC_WEAK_FUNC(sub_83A864C8);
PPC_FUNC_IMPL(__imp__sub_83A864C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A864D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stb r11,227(r3)
	PPC_STORE_U8(ctx.r3.u32 + 227, ctx.r11.u8);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// stb r11,224(r3)
	PPC_STORE_U8(ctx.r3.u32 + 224, ctx.r11.u8);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r11,225(r3)
	PPC_STORE_U8(ctx.r3.u32 + 225, ctx.r11.u8);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stb r11,383(r3)
	PPC_STORE_U8(ctx.r3.u32 + 383, ctx.r11.u8);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,268(r3)
	PPC_STORE_U32(ctx.r3.u32 + 268, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,272(r3)
	PPC_STORE_U32(ctx.r3.u32 + 272, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,276(r3)
	PPC_STORE_U32(ctx.r3.u32 + 276, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,280(r3)
	PPC_STORE_U32(ctx.r3.u32 + 280, ctx.r11.u32);
	// std r11,288(r3)
	PPC_STORE_U64(ctx.r3.u32 + 288, ctx.r11.u64);
	// stw r11,296(r3)
	PPC_STORE_U32(ctx.r3.u32 + 296, ctx.r11.u32);
	// bl 0x83a852e0
	ctx.lr = 0x83A86524;
	sub_83A852E0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a86554
	if (!cr0.eq) goto loc_83A86554;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a84288
	ctx.lr = 0x83A8654C;
	sub_83A84288(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r11,225(r31)
	PPC_STORE_U8(ctx.r31.u32 + 225, ctx.r11.u8);
loc_83A86554:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A8655C"))) PPC_WEAK_FUNC(sub_83A8655C);
PPC_FUNC_IMPL(__imp__sub_83A8655C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A86560"))) PPC_WEAK_FUNC(sub_83A86560);
PPC_FUNC_IMPL(__imp__sub_83A86560) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A86568;
	__savegprlr_29(ctx, base);
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
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x83abbe40
	ctx.lr = 0x83A86580;
	sub_83ABBE40(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x83a865a4
	if (cr6.lt) goto loc_83A865A4;
	// bne cr6,0x83a865c0
	if (!cr6.eq) goto loc_83A865C0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a841e0
	ctx.lr = 0x83A865A0;
	sub_83A841E0(ctx, base);
	// b 0x83a865b8
	goto loc_83A865B8;
loc_83A865A4:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a85ed0
	ctx.lr = 0x83A865B8;
	sub_83A85ED0(ctx, base);
loc_83A865B8:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83a865d4
	if (!cr6.eq) goto loc_83A865D4;
loc_83A865C0:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,9116
	ctx.r4.s64 = ctx.r11.s64 + 9116;
	// bl 0x831ea3f0
	ctx.lr = 0x83A865D0;
	sub_831EA3F0(ctx, base);
	// b 0x83a865d8
	goto loc_83A865D8;
loc_83A865D4:
	// stw r31,268(r30)
	PPC_STORE_U32(ctx.r30.u32 + 268, ctx.r31.u32);
loc_83A865D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A865E0"))) PPC_WEAK_FUNC(sub_83A865E0);
PPC_FUNC_IMPL(__imp__sub_83A865E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x83a86138
	sub_83A86138(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A865E4"))) PPC_WEAK_FUNC(sub_83A865E4);
PPC_FUNC_IMPL(__imp__sub_83A865E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A865E8"))) PPC_WEAK_FUNC(sub_83A865E8);
PPC_FUNC_IMPL(__imp__sub_83A865E8) {
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
	// lis r31,-31739
	ctx.r31.s64 = -2080047104;
	// lwz r11,27016(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27016);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a8662c
	if (cr6.eq) goto loc_83A8662C;
	// bl 0x83a83240
	ctx.lr = 0x83A8660C;
	sub_83A83240(ctx, base);
	// lis r11,-31832
	ctx.r11.s64 = -2086141952;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,27016(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27016);
	// addi r5,r11,25648
	ctx.r5.s64 = ctx.r11.s64 + 25648;
	// bl 0x83b66458
	ctx.lr = 0x83A86620;
	sub_83B66458(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,27016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27016, ctx.r11.u32);
	// bl 0x83a83248
	ctx.lr = 0x83A8662C;
	sub_83A83248(ctx, base);
loc_83A8662C:
	// lis r31,-31739
	ctx.r31.s64 = -2080047104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r31,27004
	ctx.r10.s64 = ctx.r31.s64 + 27004;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// bl 0x83aba048
	ctx.lr = 0x83A86640;
	sub_83ABA048(ctx, base);
	// bl 0x83aa0688
	ctx.lr = 0x83A86644;
	sub_83AA0688(ctx, base);
	// bl 0x83ab96f8
	ctx.lr = 0x83A86648;
	sub_83AB96F8(ctx, base);
	// bl 0x83aba708
	ctx.lr = 0x83A8664C;
	sub_83ABA708(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x83A86650;
	sub_83102DB0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,27004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27004, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83A8666C"))) PPC_WEAK_FUNC(sub_83A8666C);
PPC_FUNC_IMPL(__imp__sub_83A8666C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A86670"))) PPC_WEAK_FUNC(sub_83A86670);
PPC_FUNC_IMPL(__imp__sub_83A86670) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x83A86678;
	__savegprlr_20(ctx, base);
	// stfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f30.u64);
	// stfd f31,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,272(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r22,404(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 404);
	// li r20,0
	ctx.r20.s64 = 0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83a866f4
	if (cr6.eq) goto loc_83A866F4;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// bne cr6,0x83a866b0
	if (!cr6.eq) goto loc_83A866B0;
	// lwz r11,424(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a866f4
	if (cr6.eq) goto loc_83A866F4;
loc_83A866B0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83abbe40
	ctx.lr = 0x83A866B8;
	sub_83ABBE40(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x83a866dc
	if (cr6.lt) goto loc_83A866DC;
	// bne cr6,0x83a866f0
	if (!cr6.eq) goto loc_83A866F0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,276(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a841e0
	ctx.lr = 0x83A866D8;
	sub_83A841E0(ctx, base);
	// b 0x83a866f0
	goto loc_83A866F0;
loc_83A866DC:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,276(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a85ed0
	ctx.lr = 0x83A866F0;
	sub_83A85ED0(ctx, base);
loc_83A866F0:
	// stw r20,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r20.u32);
loc_83A866F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a84cb8
	ctx.lr = 0x83A866FC;
	sub_83A84CB8(ctx, base);
	// lwz r3,248(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// lis r11,4
	ctx.r11.s64 = 262144;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// ori r27,r11,11
	ctx.r27.u64 = ctx.r11.u64 | 11;
	// beq cr6,0x83a86720
	if (cr6.eq) goto loc_83A86720;
	// bl 0x83aba660
	ctx.lr = 0x83A86714;
	sub_83ABA660(ctx, base);
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// bne cr6,0x83a86720
	if (!cr6.eq) goto loc_83A86720;
	// stw r27,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r27.u32);
loc_83A86720:
	// lwz r11,376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, xer);
	// bne cr6,0x83a86740
	if (!cr6.eq) goto loc_83A86740;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,9504
	ctx.r4.s64 = ctx.r11.s64 + 9504;
	// bl 0x831ea3f0
	ctx.lr = 0x83A8673C;
	sub_831EA3F0(ctx, base);
	// b 0x83a86bc0
	goto loc_83A86BC0;
loc_83A86740:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a86248
	ctx.lr = 0x83A86748;
	sub_83A86248(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a84b60
	ctx.lr = 0x83A86750;
	sub_83A84B60(ctx, base);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r26.s32, 0, xer);
	// blt 0x83a86bc0
	if (cr0.lt) goto loc_83A86BC0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r25,r31,8
	ctx.r25.s64 = ctx.r31.s64 + 8;
	// lwz r23,304(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// addi r30,r31,300
	ctx.r30.s64 = ctx.r31.s64 + 300;
	// rlwinm r10,r11,8,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0x3F;
	// lwz r28,416(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// lwz r24,308(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// lwz r29,324(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// cmpw cr6,r23,r10
	cr6.compare<int32_t>(ctx.r23.s32, ctx.r10.s32, xer);
	// ble cr6,0x83a86798
	if (!cr6.gt) goto loc_83A86798;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,9424
	ctx.r4.s64 = ctx.r11.s64 + 9424;
	// bl 0x831ea3f0
	ctx.lr = 0x83A86790;
	sub_831EA3F0(ctx, base);
loc_83A86790:
	// stw r27,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r27.u32);
	// b 0x83a86bc0
	goto loc_83A86BC0;
loc_83A86798:
	// clrlwi r21,r11,12
	ctx.r21.u64 = ctx.r11.u32 & 0xFFFFF;
	// cmpw cr6,r24,r21
	cr6.compare<int32_t>(ctx.r24.s32, ctx.r21.s32, xer);
	// ble cr6,0x83a867bc
	if (!cr6.gt) goto loc_83A867BC;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r4,r11,9296
	ctx.r4.s64 = ctx.r11.s64 + 9296;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea400
	ctx.lr = 0x83A867B8;
	sub_831EA400(ctx, base);
	// b 0x83a86790
	goto loc_83A86790;
loc_83A867BC:
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// bl 0x83a9ff20
	ctx.lr = 0x83A867C4;
	sub_83A9FF20(ctx, base);
	// addi r11,r26,6
	ctx.r11.s64 = ctx.r26.s64 + 6;
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x83ab9460
	ctx.lr = 0x83A867DC;
	sub_83AB9460(ctx, base);
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// bl 0x83ab9180
	ctx.lr = 0x83A867E4;
	sub_83AB9180(ctx, base);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq cr6,0x83a86818
	if (cr6.eq) goto loc_83A86818;
	// cmpwi cr6,r28,-1
	cr6.compare<int32_t>(ctx.r28.s32, -1, xer);
	// beq cr6,0x83a86818
	if (cr6.eq) goto loc_83A86818;
	// cmpwi cr6,r28,-2
	cr6.compare<int32_t>(ctx.r28.s32, -2, xer);
	// bne cr6,0x83a86810
	if (!cr6.eq) goto loc_83A86810;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x83b66798
	ctx.lr = 0x83A86808;
	sub_83B66798(ctx, base);
	// stw r20,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r20.u32);
	// b 0x83a8682c
	goto loc_83A8682C;
loc_83A86810:
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
loc_83A86818:
	// cmpwi cr6,r28,-3
	cr6.compare<int32_t>(ctx.r28.s32, -3, xer);
	// bne cr6,0x83a8682c
	if (!cr6.eq) goto loc_83A8682C;
	// lis r11,-31832
	ctx.r11.s64 = -2086141952;
	// addi r11,r11,24872
	ctx.r11.s64 = ctx.r11.s64 + 24872;
	// stw r11,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r11.u32);
loc_83A8682C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,392(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x83a8684c
	if (cr6.gt) goto loc_83A8684C;
	// lfs f0,396(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x83a86850
	if (!cr6.gt) goto loc_83A86850;
loc_83A8684C:
	// stfs f0,384(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 384, temp.u32);
loc_83A86850:
	// stfs f31,392(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 392, temp.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f31,396(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 396, temp.u32);
	// lwa r10,8(r30)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r30.u32 + 8));
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfs f13,384(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	ctx.f13.f64 = double(temp.f32);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfs f30,-24912(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f30.f64 = double(temp.f32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmadds f0,f0,f13,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f30.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r5,r21
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r21.s32, xer);
	// ble cr6,0x83a868d0
	if (!cr6.gt) goto loc_83A868D0;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,9152
	ctx.r4.s64 = ctx.r11.s64 + 9152;
	// bl 0x831ea400
	ctx.lr = 0x83A868A0;
	sub_831EA400(ctx, base);
	// extsw r11,r21
	ctx.r11.s64 = ctx.r21.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwa r11,8(r30)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r30.u32 + 8));
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,384(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 384, temp.u32);
loc_83A868D0:
	// lfs f0,384(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,388(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x83a868e4
	if (cr6.gt) goto loc_83A868E4;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_83A868E4:
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r4,27008(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27008);
	// bl 0x83ab9240
	ctx.lr = 0x83A86900;
	sub_83AB9240(ctx, base);
	// lwz r3,424(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a8698c
	if (cr6.eq) goto loc_83A8698C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x83a845c8
	ctx.lr = 0x83A86918;
	sub_83A845C8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a86928
	if (!cr0.eq) goto loc_83A86928;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// b 0x83a8694c
	goto loc_83A8694C;
loc_83A86928:
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lwa r10,80(r1)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 80));
	// mulli r9,r11,1000
	ctx.r9.s64 = ctx.r11.s64 * 1000;
	// rotldi r11,r9,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u64, 1);
	// tdllei r10,0
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// divd r11,r9,r10
	ctx.r11.s64 = PPCDivide(ctx.r9.s64, ctx.r10.s64);
	// andc r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r8.u64;
	// tdlgei r10,-1
loc_83A8694C:
	// lwz r10,424(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// lfs f0,420(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	ctx.f0.f64 = double(temp.f32);
	// rotlwi r22,r11,0
	ctx.r22.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lfs f13,420(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 420);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x83a8698c
	if (cr6.eq) goto loc_83A8698C;
	// clrldi r11,r22,32
	ctx.r11.u64 = ctx.r22.u64 & 0xFFFFFFFF;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fmul f13,f13,f12
	ctx.f13.f64 = ctx.f13.f64 * ctx.f12.f64;
	// fdiv f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 / ctx.f0.f64;
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// rotlwi r22,r11,0
	ctx.r22.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_83A8698C:
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// beq cr6,0x83a869f4
	if (cr6.eq) goto loc_83A869F4;
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83a869f4
	if (!cr6.gt) goto loc_83A869F4;
	// clrldi r9,r22,32
	ctx.r9.u64 = ctx.r22.u64 & 0xFFFFFFFF;
	// lwa r10,64(r30)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r30.u32 + 64));
	// extsw r11,r24
	ctx.r11.s64 = ctx.r24.s32;
	// li r8,1000
	ctx.r8.s64 = 1000;
	// mulld r11,r11,r9
	ctx.r11.s64 = ctx.r11.s64 * ctx.r9.s64;
	// divd r9,r11,r8
	ctx.r9.s64 = PPCDivide(ctx.r11.s64, ctx.r8.s64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rotldi r11,r9,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u64, 1);
	// divd r9,r9,r10
	ctx.r9.s64 = PPCDivide(ctx.r9.s64, ctx.r10.s64);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mulld r29,r9,r10
	ctx.r29.s64 = ctx.r9.s64 * ctx.r10.s64;
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// tdllei r10,0
	// tdlgei r11,-1
	// bl 0x83a83e38
	ctx.lr = 0x83A869E4;
	sub_83A83E38(ctx, base);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// extsw r4,r3
	ctx.r4.s64 = ctx.r3.s32;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x83b66748
	ctx.lr = 0x83A869F4;
	sub_83B66748(ctx, base);
loc_83A869F4:
	// std r29,408(r31)
	PPC_STORE_U64(ctx.r31.u32 + 408, ctx.r29.u64);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// beq cr6,0x83a86a54
	if (cr6.eq) goto loc_83A86A54;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lis r10,32
	ctx.r10.s64 = 2097152;
	// lwz r5,152(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// li r6,-1
	ctx.r6.s64 = -1;
	// rlwinm r11,r11,0,8,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF00000;
	// lwz r4,304(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x83a86a40
	if (!cr6.eq) goto loc_83A86A40;
	// lbz r11,230(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 230);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// b 0x83a86a84
	goto loc_83A86A84;
loc_83A86A40:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x83a86a84
	goto loc_83A86A84;
loc_83A86A54:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a83e38
	ctx.lr = 0x83A86A60;
	sub_83A83E38(ctx, base);
	// lbz r11,229(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 229);
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// std r3,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r3.u64);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r20,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r20.u32);
	// lwz r5,88(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_83A86A84:
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// bl 0x83a9fea0
	ctx.lr = 0x83A86A8C;
	sub_83A9FEA0(ctx, base);
	// lbz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 228);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83a86aa4
	if (cr0.eq) goto loc_83A86AA4;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// bl 0x83a83888
	ctx.lr = 0x83A86AA4;
	sub_83A83888(ctx, base);
loc_83A86AA4:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// bl 0x83aa0010
	ctx.lr = 0x83A86AB0;
	sub_83AA0010(ctx, base);
	// lfs f1,384(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// bl 0x83aa0028
	ctx.lr = 0x83A86ABC;
	sub_83AA0028(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f1,48(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f1,f31
	cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// lfs f0,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// ble cr6,0x83a86ad8
	if (!cr6.gt) goto loc_83A86AD8;
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x83a86adc
	if (cr6.lt) goto loc_83A86ADC;
loc_83A86AD8:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
loc_83A86ADC:
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// bl 0x82a46f90
	ctx.lr = 0x83A86AE4;
	sub_82A46F90(ctx, base);
	// lwz r3,248(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a86b50
	if (cr6.eq) goto loc_83A86B50;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83a86b50
	if (!cr6.gt) goto loc_83A86B50;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lwa r10,8(r30)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r30.u32 + 8));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// extsw r9,r21
	ctx.r9.s64 = ctx.r21.s32;
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fdivs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// fmadds f0,f0,f13,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f30.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x83aba618
	ctx.lr = 0x83A86B50;
	sub_83ABA618(ctx, base);
loc_83A86B50:
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83a86b64
	if (cr6.eq) goto loc_83A86B64;
	// li r11,1
	ctx.r11.s64 = 1;
loc_83A86B64:
	// cmpdi cr6,r29,0
	cr6.compare<int64_t>(ctx.r29.s64, 0, xer);
	// ble cr6,0x83a86b74
	if (!cr6.gt) goto loc_83A86B74;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
loc_83A86B74:
	// clrlwi. r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stb r11,227(r31)
	PPC_STORE_U8(ctx.r31.u32 + 227, ctx.r11.u8);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// bne 0x83a86b8c
	if (!cr0.eq) goto loc_83A86B8C;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// b 0x83a86b90
	goto loc_83A86B90;
loc_83A86B8C:
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
loc_83A86B90:
	// stw r11,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r11.u32);
	// lbz r11,224(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 224);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x83a86bc0
	if (cr6.eq) goto loc_83A86BC0;
	// lwz r3,248(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a86bc0
	if (cr6.eq) goto loc_83A86BC0;
	// lwz r11,252(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a86bc0
	if (!cr6.eq) goto loc_83A86BC0;
	// bl 0x83aba6c0
	ctx.lr = 0x83A86BBC;
	sub_83ABA6C0(ctx, base);
	// stw r3,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r3.u32);
loc_83A86BC0:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f31,-112(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A86BD0"))) PPC_WEAK_FUNC(sub_83A86BD0);
PPC_FUNC_IMPL(__imp__sub_83A86BD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A86BD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,272(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83a86c3c
	if (cr6.eq) goto loc_83A86C3C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r29,280(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// bl 0x83abbe40
	ctx.lr = 0x83A86BF8;
	sub_83ABBE40(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x83a86c1c
	if (cr6.lt) goto loc_83A86C1C;
	// bne cr6,0x83a86c30
	if (!cr6.eq) goto loc_83A86C30;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r5,276(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a841e0
	ctx.lr = 0x83A86C18;
	sub_83A841E0(ctx, base);
	// b 0x83a86c30
	goto loc_83A86C30;
loc_83A86C1C:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r5,276(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a85ed0
	ctx.lr = 0x83A86C30;
	sub_83A85ED0(ctx, base);
loc_83A86C30:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r11.u32);
	// b 0x83a86d48
	goto loc_83A86D48;
loc_83A86C3C:
	// lbz r9,227(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 227);
	// rlwinm. r11,r9,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x83a86cb8
	if (cr0.eq) goto loc_83A86CB8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a83ed0
	ctx.lr = 0x83A86C50;
	sub_83A83ED0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x83a86ca8
	if (cr0.lt) goto loc_83A86CA8;
	// lbz r10,227(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 227);
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x83a86c78
	if (cr0.eq) goto loc_83A86C78;
	// lwz r11,332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, xer);
	// ble cr6,0x83a86c7c
	if (!cr6.gt) goto loc_83A86C7C;
	// rlwinm r9,r10,0,24,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFE;
	// stb r9,227(r31)
	PPC_STORE_U8(ctx.r31.u32 + 227, ctx.r9.u8);
loc_83A86C78:
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
loc_83A86C7C:
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, xer);
	// ble cr6,0x83a86c98
	if (!cr6.gt) goto loc_83A86C98;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_83A86C98:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r9.u32);
	// stw r10,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r10.u32);
	// stb r11,225(r31)
	PPC_STORE_U8(ctx.r31.u32 + 225, ctx.r11.u8);
loc_83A86CA8:
	// lbz r11,227(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 227);
	// andi. r11,r11,253
	ctx.r11.u64 = ctx.r11.u64 & 253;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stb r11,227(r31)
	PPC_STORE_U8(ctx.r31.u32 + 227, ctx.r11.u8);
	// b 0x83a86d38
	goto loc_83A86D38;
loc_83A86CB8:
	// lbz r11,225(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 225);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x83a86d38
	if (!cr0.eq) goto loc_83A86D38;
	// clrlwi. r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x83a86d30
	if (cr0.eq) goto loc_83A86D30;
	// lwz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// addi r10,r31,300
	ctx.r10.s64 = ctx.r31.s64 + 300;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83a86ce4
	if (!cr6.gt) goto loc_83A86CE4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
loc_83A86CE4:
	// bne cr6,0x83a86cf0
	if (!cr6.eq) goto loc_83A86CF0;
	// rlwinm r9,r9,0,24,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFE;
	// stb r9,227(r31)
	PPC_STORE_U8(ctx.r31.u32 + 227, ctx.r9.u8);
loc_83A86CF0:
	// stw r11,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a86d30
	if (cr6.eq) goto loc_83A86D30;
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// lwz r10,236(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// lwz r9,332(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// ble cr6,0x83a86d1c
	if (!cr6.gt) goto loc_83A86D1C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,0
	ctx.r9.s64 = 0;
loc_83A86D1C:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r11.u32);
	// stw r9,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r9.u32);
	// stb r10,225(r31)
	PPC_STORE_U8(ctx.r31.u32 + 225, ctx.r10.u8);
	// b 0x83a86d38
	goto loc_83A86D38;
loc_83A86D30:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a83f88
	ctx.lr = 0x83A86D38;
	sub_83A83F88(ctx, base);
loc_83A86D38:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,224(r31)
	PPC_STORE_U8(ctx.r31.u32 + 224, ctx.r11.u8);
	// bl 0x83a84cb8
	ctx.lr = 0x83A86D48;
	sub_83A84CB8(ctx, base);
loc_83A86D48:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A86D50"))) PPC_WEAK_FUNC(sub_83A86D50);
PPC_FUNC_IMPL(__imp__sub_83A86D50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A86D58;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x831ea7a0
	ctx.lr = 0x83A86D74;
	sub_831EA7A0(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r10,3
	ctx.r10.s64 = 3;
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// lis r6,2
	ctx.r6.s64 = 131072;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// ori r6,r6,2
	ctx.r6.u64 = ctx.r6.u64 | 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a862f0
	ctx.lr = 0x83A86DB8;
	sub_83A862F0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A86DC0"))) PPC_WEAK_FUNC(sub_83A86DC0);
PPC_FUNC_IMPL(__imp__sub_83A86DC0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,227(r3)
	PPC_STORE_U8(ctx.r3.u32 + 227, ctx.r11.u8);
	// stb r11,224(r3)
	PPC_STORE_U8(ctx.r3.u32 + 224, ctx.r11.u8);
	// stb r11,225(r3)
	PPC_STORE_U8(ctx.r3.u32 + 225, ctx.r11.u8);
	// stb r11,383(r3)
	PPC_STORE_U8(ctx.r3.u32 + 383, ctx.r11.u8);
	// stw r11,268(r3)
	PPC_STORE_U32(ctx.r3.u32 + 268, ctx.r11.u32);
	// stw r11,272(r3)
	PPC_STORE_U32(ctx.r3.u32 + 272, ctx.r11.u32);
	// stw r11,276(r3)
	PPC_STORE_U32(ctx.r3.u32 + 276, ctx.r11.u32);
	// stw r11,280(r3)
	PPC_STORE_U32(ctx.r3.u32 + 280, ctx.r11.u32);
	// std r11,288(r3)
	PPC_STORE_U64(ctx.r3.u32 + 288, ctx.r11.u64);
	// stw r11,296(r3)
	PPC_STORE_U32(ctx.r3.u32 + 296, ctx.r11.u32);
	// b 0x83a86560
	sub_83A86560(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A86DF0"))) PPC_WEAK_FUNC(sub_83A86DF0);
PPC_FUNC_IMPL(__imp__sub_83A86DF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A86DF8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r30,227(r3)
	PPC_STORE_U8(ctx.r3.u32 + 227, ctx.r30.u8);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// stb r30,224(r3)
	PPC_STORE_U8(ctx.r3.u32 + 224, ctx.r30.u8);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// stb r30,225(r3)
	PPC_STORE_U8(ctx.r3.u32 + 225, ctx.r30.u8);
	// stb r30,383(r3)
	PPC_STORE_U8(ctx.r3.u32 + 383, ctx.r30.u8);
	// stw r30,268(r3)
	PPC_STORE_U32(ctx.r3.u32 + 268, ctx.r30.u32);
	// stw r30,272(r3)
	PPC_STORE_U32(ctx.r3.u32 + 272, ctx.r30.u32);
	// stw r30,276(r3)
	PPC_STORE_U32(ctx.r3.u32 + 276, ctx.r30.u32);
	// stw r30,280(r3)
	PPC_STORE_U32(ctx.r3.u32 + 280, ctx.r30.u32);
	// std r30,288(r3)
	PPC_STORE_U64(ctx.r3.u32 + 288, ctx.r30.u64);
	// stw r30,296(r3)
	PPC_STORE_U32(ctx.r3.u32 + 296, ctx.r30.u32);
	// bl 0x83a86560
	ctx.lr = 0x83A86E38;
	sub_83A86560(ctx, base);
	// lbz r11,225(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 225);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x83a86e90
	if (cr6.eq) goto loc_83A86E90;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,9624
	ctx.r4.s64 = ctx.r11.s64 + 9624;
	// bl 0x831ea3f0
	ctx.lr = 0x83A86E54;
	sub_831EA3F0(ctx, base);
	// stb r30,227(r31)
	PPC_STORE_U8(ctx.r31.u32 + 227, ctx.r30.u8);
	// stb r30,224(r31)
	PPC_STORE_U8(ctx.r31.u32 + 224, ctx.r30.u8);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stb r30,225(r31)
	PPC_STORE_U8(ctx.r31.u32 + 225, ctx.r30.u8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stb r30,383(r31)
	PPC_STORE_U8(ctx.r31.u32 + 383, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r30.u32);
	// stw r30,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r30.u32);
	// stw r30,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r30.u32);
	// stw r30,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r30.u32);
	// std r30,288(r31)
	PPC_STORE_U64(ctx.r31.u32 + 288, ctx.r30.u64);
	// stw r30,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r30.u32);
	// bl 0x83a86560
	ctx.lr = 0x83A86E8C;
	sub_83A86560(ctx, base);
	// b 0x83a86ea0
	goto loc_83A86EA0;
loc_83A86E90:
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// stw r29,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r29.u32);
	// stw r28,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r28.u32);
	// stw r11,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r11.u32);
loc_83A86EA0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A86EA8"))) PPC_WEAK_FUNC(sub_83A86EA8);
PPC_FUNC_IMPL(__imp__sub_83A86EA8) {
	PPC_FUNC_PROLOGUE();
	// b 0x83a86670
	sub_83A86670(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A86EAC"))) PPC_WEAK_FUNC(sub_83A86EAC);
PPC_FUNC_IMPL(__imp__sub_83A86EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A86EB0"))) PPC_WEAK_FUNC(sub_83A86EB0);
PPC_FUNC_IMPL(__imp__sub_83A86EB0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,248(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 248);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a86ee8
	if (cr6.eq) goto loc_83A86EE8;
	// bl 0x83aba660
	ctx.lr = 0x83A86ED4;
	sub_83ABA660(ctx, base);
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// bne cr6,0x83a86ee8
	if (!cr6.eq) goto loc_83A86EE8;
	// lis r11,4
	ctx.r11.s64 = 262144;
	// ori r11,r11,11
	ctx.r11.u64 = ctx.r11.u64 | 11;
	// stw r11,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r11.u32);
loc_83A86EE8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a86248
	ctx.lr = 0x83A86EF0;
	sub_83A86248(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x83a7a038
	ctx.lr = 0x83A86EFC;
	sub_83A7A038(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x83a86f18
	if (cr0.eq) goto loc_83A86F18;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x83a7a090
	ctx.lr = 0x83A86F0C;
	sub_83A7A090(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r11.u32);
loc_83A86F18:
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

__attribute__((alias("__imp__sub_83A86F2C"))) PPC_WEAK_FUNC(sub_83A86F2C);
PPC_FUNC_IMPL(__imp__sub_83A86F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A86F30"))) PPC_WEAK_FUNC(sub_83A86F30);
PPC_FUNC_IMPL(__imp__sub_83A86F30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83A86F38;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x83a83810
	ctx.lr = 0x83A86F4C;
	sub_83A83810(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// blt 0x83a87030
	if (cr0.lt) goto loc_83A87030;
	// lis r10,-31739
	ctx.r10.s64 = -2080047104;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r26,r10,27004
	ctx.r26.s64 = ctx.r10.s64 + 27004;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// stw r11,27004(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27004, ctx.r11.u32);
	// beq cr6,0x83a87018
	if (cr6.eq) goto loc_83A87018;
	// cmpw cr6,r30,r27
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, xer);
	// blt cr6,0x83a87018
	if (cr6.lt) goto loc_83A87018;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ea7a0
	ctx.lr = 0x83A86F80;
	sub_831EA7A0(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r11,r3,5
	ctx.r11.s64 = ctx.r3.s64 + 5;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x83b663f8
	ctx.lr = 0x83A86F98;
	sub_83B663F8(ctx, base);
	// lis r25,-31739
	ctx.r25.s64 = -2080047104;
	// add r28,r30,r29
	ctx.r28.u64 = ctx.r30.u64 + ctx.r29.u64;
	// stw r3,27016(r25)
	PPC_STORE_U32(ctx.r25.u32 + 27016, ctx.r3.u32);
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bl 0x83102db0
	ctx.lr = 0x83A86FC0;
	sub_83102DB0(ctx, base);
	// bl 0x83aba6d8
	ctx.lr = 0x83A86FC4;
	sub_83ABA6D8(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r11,r3,5
	ctx.r11.s64 = ctx.r3.s64 + 5;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x83ab9dd8
	ctx.lr = 0x83A86FDC;
	sub_83AB9DD8(ctx, base);
	// subf r11,r29,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r29.s64;
	// add r4,r29,r28
	ctx.r4.u64 = ctx.r29.u64 + ctx.r28.u64;
	// subf r5,r30,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r30.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83aa0988
	ctx.lr = 0x83A86FF0;
	sub_83AA0988(ctx, base);
	// bl 0x83aba008
	ctx.lr = 0x83A86FF4;
	sub_83ABA008(ctx, base);
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,27016(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 27016);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r10,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r10.u32);
	// bne cr6,0x83a87030
	if (!cr6.eq) goto loc_83A87030;
	// b 0x83a8702c
	goto loc_83A8702C;
loc_83A87018:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,9680
	ctx.r4.s64 = ctx.r11.s64 + 9680;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A8702C;
	sub_831EA418(ctx, base);
loc_83A8702C:
	// bl 0x83a865e8
	ctx.lr = 0x83A87030;
	sub_83A865E8(ctx, base);
loc_83A87030:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A87038"))) PPC_WEAK_FUNC(sub_83A87038);
PPC_FUNC_IMPL(__imp__sub_83A87038) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,27016(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27016);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r10,-31832
	ctx.r10.s64 = -2086141952;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r5,r10,22160
	ctx.r5.s64 = ctx.r10.s64 + 22160;
	// b 0x83b66598
	sub_83B66598(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A8705C"))) PPC_WEAK_FUNC(sub_83A8705C);
PPC_FUNC_IMPL(__imp__sub_83A8705C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A87060"))) PPC_WEAK_FUNC(sub_83A87060);
PPC_FUNC_IMPL(__imp__sub_83A87060) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A87068;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a87148
	if (cr6.eq) goto loc_83A87148;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83a87148
	if (cr6.eq) goto loc_83A87148;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// blt cr6,0x83a87148
	if (cr6.lt) goto loc_83A87148;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmpw cr6,r5,r11
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, xer);
	// bgt cr6,0x83a87148
	if (cr6.gt) goto loc_83A87148;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83a761b8
	ctx.lr = 0x83A870A8;
	sub_83A761B8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a870c0
	if (!cr6.eq) goto loc_83A870C0;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-4
	ctx.r5.s64 = -4;
	// addi r4,r11,9704
	ctx.r4.s64 = ctx.r11.s64 + 9704;
	// b 0x83a87154
	goto loc_83A87154;
loc_83A870C0:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x83a870fc
	if (!cr6.eq) goto loc_83A870FC;
	// lhz r10,376(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 376);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// beq cr6,0x83a87134
	if (cr6.eq) goto loc_83A87134;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// beq cr6,0x83a87134
	if (cr6.eq) goto loc_83A87134;
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// beq cr6,0x83a87134
	if (cr6.eq) goto loc_83A87134;
	// stb r11,227(r31)
	PPC_STORE_U8(ctx.r31.u32 + 227, ctx.r11.u8);
	// stb r11,224(r31)
	PPC_STORE_U8(ctx.r31.u32 + 224, ctx.r11.u8);
	// stb r11,225(r31)
	PPC_STORE_U8(ctx.r31.u32 + 225, ctx.r11.u8);
	// stb r11,383(r31)
	PPC_STORE_U8(ctx.r31.u32 + 383, ctx.r11.u8);
loc_83A870FC:
	// stw r11,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r11.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r11,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r11.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r11.u32);
	// std r11,288(r31)
	PPC_STORE_U64(ctx.r31.u32 + 288, ctx.r11.u64);
	// stw r11,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r11.u32);
	// bl 0x83a86560
	ctx.lr = 0x83A87124;
	sub_83A86560(ctx, base);
loc_83A87124:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a761b8
	ctx.lr = 0x83A87130;
	sub_83A761B8(ctx, base);
	// b 0x83a8715c
	goto loc_83A8715C;
loc_83A87134:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,9544
	ctx.r4.s64 = ctx.r11.s64 + 9544;
	// bl 0x831ea3f0
	ctx.lr = 0x83A87144;
	sub_831EA3F0(ctx, base);
	// b 0x83a87124
	goto loc_83A87124;
loc_83A87148:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,9692
	ctx.r4.s64 = ctx.r11.s64 + 9692;
loc_83A87154:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A8715C;
	sub_831EA418(ctx, base);
loc_83A8715C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A87164"))) PPC_WEAK_FUNC(sub_83A87164);
PPC_FUNC_IMPL(__imp__sub_83A87164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A87168"))) PPC_WEAK_FUNC(sub_83A87168);
PPC_FUNC_IMPL(__imp__sub_83A87168) {
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
	// lbz r11,224(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 224);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x83a87244
	if (cr6.eq) goto loc_83A87244;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x83a87208
	if (cr6.eq) goto loc_83A87208;
	// lbz r11,382(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 382);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x83a87260
	if (!cr0.eq) goto loc_83A87260;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,88(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// bl 0x83a7a038
	ctx.lr = 0x83A871AC;
	sub_83A7A038(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne 0x83a871c8
	if (!cr0.eq) goto loc_83A871C8;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,7340
	ctx.r4.s64 = ctx.r11.s64 + 7340;
	// bl 0x831ea3f0
	ctx.lr = 0x83A871C4;
	sub_831EA3F0(ctx, base);
	// b 0x83a87260
	goto loc_83A87260;
loc_83A871C8:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a7a240
	ctx.lr = 0x83A871D8;
	sub_83A7A240(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a7a2a0
	ctx.lr = 0x83A871E4;
	sub_83A7A2A0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x83a7a0d8
	ctx.lr = 0x83A871FC;
	sub_83A7A0D8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,382(r31)
	PPC_STORE_U8(ctx.r31.u32 + 382, ctx.r11.u8);
	// b 0x83a87260
	goto loc_83A87260;
loc_83A87208:
	// lwz r3,248(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// bl 0x83aba660
	ctx.lr = 0x83A87210;
	sub_83ABA660(ctx, base);
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// beq cr6,0x83a87230
	if (cr6.eq) goto loc_83A87230;
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// bne cr6,0x83a87260
	if (!cr6.eq) goto loc_83A87260;
	// lis r11,4
	ctx.r11.s64 = 262144;
	// ori r11,r11,11
	ctx.r11.u64 = ctx.r11.u64 | 11;
	// stw r11,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r11.u32);
	// b 0x83a87260
	goto loc_83A87260;
loc_83A87230:
	// lwz r3,248(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// bl 0x83aba6a8
	ctx.lr = 0x83A87238;
	sub_83ABA6A8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,224(r31)
	PPC_STORE_U8(ctx.r31.u32 + 224, ctx.r11.u8);
	// b 0x83a87260
	goto loc_83A87260;
loc_83A87244:
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x83a7a138
	ctx.lr = 0x83A87250;
	sub_83A7A138(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// blt cr6,0x83a87260
	if (cr6.lt) goto loc_83A87260;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a86bd0
	ctx.lr = 0x83A87260;
	sub_83A86BD0(ctx, base);
loc_83A87260:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A87278"))) PPC_WEAK_FUNC(sub_83A87278);
PPC_FUNC_IMPL(__imp__sub_83A87278) {
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
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r11,18(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bgt 0x83a872d8
	if (cr0.gt) goto loc_83A872D8;
	// bl 0x83a84cb8
	ctx.lr = 0x83A872A0;
	sub_83A84CB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a87168
	ctx.lr = 0x83A872A8;
	sub_83A87168(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a86248
	ctx.lr = 0x83A872B0;
	sub_83A86248(ctx, base);
	// lwa r11,312(r31)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 312));
	// ld r10,408(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 408);
	// cmpd cr6,r10,r11
	cr6.compare<int64_t>(ctx.r10.s64, ctx.r11.s64, xer);
	// bge cr6,0x83a872d8
	if (!cr6.lt) goto loc_83A872D8;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x83a7a160
	ctx.lr = 0x83A872CC;
	sub_83A7A160(ctx, base);
	// lwz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, xer);
	// ble cr6,0x83a872e4
	if (!cr6.gt) goto loc_83A872E4;
loc_83A872D8:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,5
	ctx.r11.u64 = ctx.r11.u64 | 5;
	// stw r11,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r11.u32);
loc_83A872E4:
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

__attribute__((alias("__imp__sub_83A872F8"))) PPC_WEAK_FUNC(sub_83A872F8);
PPC_FUNC_IMPL(__imp__sub_83A872F8) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,92(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// bl 0x83ab9390
	ctx.lr = 0x83A87318;
	sub_83AB9390(ctx, base);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lbz r11,18(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble 0x83a87364
	if (!cr0.gt) goto loc_83A87364;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a84cb8
	ctx.lr = 0x83A87330;
	sub_83A84CB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a87168
	ctx.lr = 0x83A87338;
	sub_83A87168(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a86248
	ctx.lr = 0x83A87340;
	sub_83A86248(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a84e40
	ctx.lr = 0x83A87348;
	sub_83A84E40(ctx, base);
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lbz r11,49(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 49);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x83a87364
	if (!cr0.eq) goto loc_83A87364;
	// bl 0x83ab96b0
	ctx.lr = 0x83A8735C;
	sub_83AB96B0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a87370
	if (cr0.eq) goto loc_83A87370;
loc_83A87364:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r11,r11,6
	ctx.r11.u64 = ctx.r11.u64 | 6;
	// stw r11,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r11.u32);
loc_83A87370:
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

__attribute__((alias("__imp__sub_83A87384"))) PPC_WEAK_FUNC(sub_83A87384);
PPC_FUNC_IMPL(__imp__sub_83A87384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A87388"))) PPC_WEAK_FUNC(sub_83A87388);
PPC_FUNC_IMPL(__imp__sub_83A87388) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83a84cb8
	ctx.lr = 0x83A873A0;
	sub_83A84CB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a87168
	ctx.lr = 0x83A873A8;
	sub_83A87168(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a86248
	ctx.lr = 0x83A873B0;
	sub_83A86248(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a84e40
	ctx.lr = 0x83A873B8;
	sub_83A84E40(ctx, base);
	// lbz r11,380(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 380);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x83a873d8
	if (!cr0.eq) goto loc_83A873D8;
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// bl 0x83a9ff10
	ctx.lr = 0x83A873CC;
	sub_83A9FF10(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r11,r11,7
	ctx.r11.u64 = ctx.r11.u64 | 7;
	// stw r11,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r11.u32);
loc_83A873D8:
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

__attribute__((alias("__imp__sub_83A873EC"))) PPC_WEAK_FUNC(sub_83A873EC);
PPC_FUNC_IMPL(__imp__sub_83A873EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A873F0"))) PPC_WEAK_FUNC(sub_83A873F0);
PPC_FUNC_IMPL(__imp__sub_83A873F0) {
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
	// bl 0x83a84cb8
	ctx.lr = 0x83A87408;
	sub_83A84CB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a87168
	ctx.lr = 0x83A87410;
	sub_83A87168(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a86248
	ctx.lr = 0x83A87418;
	sub_83A86248(ctx, base);
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// bl 0x83a9ff60
	ctx.lr = 0x83A87420;
	sub_83A9FF60(ctx, base);
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// bne cr6,0x83a87434
	if (!cr6.eq) goto loc_83A87434;
loc_83A87428:
	// lis r11,4
	ctx.r11.s64 = 262144;
	// ori r11,r11,11
	ctx.r11.u64 = ctx.r11.u64 | 11;
	// b 0x83a874bc
	goto loc_83A874BC;
loc_83A87434:
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// bl 0x82e877c8
	ctx.lr = 0x83A8743C;
	sub_82E877C8(ctx, base);
	// lbz r11,380(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 380);
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// cmpw cr6,r3,r4
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r4.s32, xer);
	// beq cr6,0x83a87454
	if (cr6.eq) goto loc_83A87454;
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// bl 0x83a9ff48
	ctx.lr = 0x83A87454;
	sub_83A9FF48(ctx, base);
loc_83A87454:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,396(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x83a87474
	if (!cr6.gt) goto loc_83A87474;
	// bl 0x83a83ce8
	ctx.lr = 0x83A87470;
	sub_83A83CE8(ctx, base);
	// b 0x83a87478
	goto loc_83A87478;
loc_83A87474:
	// bl 0x83a83b80
	ctx.lr = 0x83A87478;
	sub_83A83B80(ctx, base);
loc_83A87478:
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// bl 0x83a9ff60
	ctx.lr = 0x83A87480;
	sub_83A9FF60(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x83a874c0
	if (!cr6.eq) goto loc_83A874C0;
	// lwz r3,248(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a874b4
	if (cr6.eq) goto loc_83A874B4;
	// bl 0x83aba660
	ctx.lr = 0x83A87498;
	sub_83ABA660(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a874b4
	if (!cr6.eq) goto loc_83A874B4;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,7232
	ctx.r4.s64 = ctx.r11.s64 + 7232;
	// bl 0x831ea3f0
	ctx.lr = 0x83A874B0;
	sub_831EA3F0(ctx, base);
	// b 0x83a87428
	goto loc_83A87428;
loc_83A874B4:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
loc_83A874BC:
	// stw r11,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r11.u32);
loc_83A874C0:
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

__attribute__((alias("__imp__sub_83A874D4"))) PPC_WEAK_FUNC(sub_83A874D4);
PPC_FUNC_IMPL(__imp__sub_83A874D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A874D8"))) PPC_WEAK_FUNC(sub_83A874D8);
PPC_FUNC_IMPL(__imp__sub_83A874D8) {
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r11,27020(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27020);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a87504
	if (!cr6.eq) goto loc_83A87504;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a87520
	goto loc_83A87520;
loc_83A87504:
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// bl 0x83a81ee8
	ctx.lr = 0x83A87518;
	sub_83A81EE8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_83A87520:
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

__attribute__((alias("__imp__sub_83A87534"))) PPC_WEAK_FUNC(sub_83A87534);
PPC_FUNC_IMPL(__imp__sub_83A87534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A87538"))) PPC_WEAK_FUNC(sub_83A87538);
PPC_FUNC_IMPL(__imp__sub_83A87538) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83A87540;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r30,r11,27020
	ctx.r30.s64 = ctx.r11.s64 + 27020;
	// lwz r8,27020(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27020);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83a87784
	if (cr6.eq) goto loc_83A87784;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x83a8759c
	if (cr6.eq) goto loc_83A8759C;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mulli r10,r10,204
	ctx.r10.s64 = ctx.r10.s64 * 204;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r9,r11,160
	ctx.r9.s64 = ctx.r11.s64 + 160;
	// lhz r9,160(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 160);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// sth r9,160(r11)
	PPC_STORE_U16(ctx.r11.u32 + 160, ctx.r9.u16);
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,162
	ctx.r10.s64 = ctx.r11.s64 + 162;
	// lhz r10,162(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 162);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,162(r11)
	PPC_STORE_U16(ctx.r11.u32 + 162, ctx.r10.u16);
loc_83A8759C:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x83a875c4
	if (cr6.eq) goto loc_83A875C4;
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// lwz r10,12(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mulli r11,r11,204
	ctx.r11.s64 = ctx.r11.s64 * 204;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,164
	ctx.r10.s64 = ctx.r11.s64 + 164;
	// lhz r10,164(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 164);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,164(r11)
	PPC_STORE_U16(ctx.r11.u32 + 164, ctx.r10.u16);
loc_83A875C4:
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mulli r26,r10,204
	ctx.r26.s64 = ctx.r10.s64 * 204;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r10,176(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a87784
	if (cr6.eq) goto loc_83A87784;
	// lwz r25,168(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x83a87784
	if (cr6.eq) goto loc_83A87784;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// li r29,2
	ctx.r29.s64 = 2;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r27,r10,9788
	ctx.r27.s64 = ctx.r10.s64 + 9788;
	// lfs f31,-26260(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -26260);
	ctx.f31.f64 = double(temp.f32);
loc_83A87608:
	// lwz r31,0(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lbz r10,29(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 29);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r10,12(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// add r9,r10,r26
	ctx.r9.u64 = ctx.r10.u64 + ctx.r26.u64;
	// beq 0x83a87628
	if (cr0.eq) goto loc_83A87628;
	// lhz r9,162(r9)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + 162);
	// b 0x83a8762c
	goto loc_83A8762C;
loc_83A87628:
	// lhz r9,164(r9)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + 164);
loc_83A8762C:
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x83a87778
	if (!cr6.eq) goto loc_83A87778;
	// lhz r9,30(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 30);
	// cmplwi cr6,r9,65535
	cr6.compare<uint32_t>(ctx.r9.u32, 65535, xer);
	// bne cr6,0x83a876f4
	if (!cr6.eq) goto loc_83A876F4;
	// lhz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 20);
	// lwz r7,32(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lhz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 24);
	// mulli r9,r9,204
	ctx.r9.s64 = ctx.r9.s64 * 204;
	// stw r29,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r29.u32);
	// stw r7,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r7.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplwi cr6,r6,65535
	cr6.compare<uint32_t>(ctx.r6.u32, 65535, xer);
	// beq cr6,0x83a87778
	if (cr6.eq) goto loc_83A87778;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a876e4
	if (cr6.eq) goto loc_83A876E4;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// subfic r6,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r11.s64;
	// lwz r6,12(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subfe r4,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r4.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r28,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r28.u32);
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// lhz r31,24(r31)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r31.u32 + 24);
	// and r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 & ctx.r3.u64;
	// stw r29,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r29.u32);
	// stw r31,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r31.u32);
	// lwz r5,184(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 184);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r6,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r6.u32);
	// stw r4,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r4.u32);
	// bne cr6,0x83a876c4
	if (!cr6.eq) goto loc_83A876C4;
	// stw r9,180(r10)
	PPC_STORE_U32(ctx.r10.u32 + 180, ctx.r9.u32);
	// b 0x83a876d0
	goto loc_83A876D0;
loc_83A876C4:
	// stw r28,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r28.u32);
	// lwz r7,184(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 184);
	// stw r9,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r9.u32);
loc_83A876D0:
	// stw r9,184(r10)
	PPC_STORE_U32(ctx.r10.u32 + 184, ctx.r9.u32);
	// lwz r9,188(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 188);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,188(r10)
	PPC_STORE_U32(ctx.r10.u32 + 188, ctx.r9.u32);
	// b 0x83a87778
	goto loc_83A87778;
loc_83A876E4:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea3f0
	ctx.lr = 0x83A876F0;
	sub_831EA3F0(ctx, base);
	// b 0x83a87770
	goto loc_83A87770;
loc_83A876F4:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a87754
	if (!cr6.eq) goto loc_83A87754;
	// li r8,402
	ctx.r8.s64 = 402;
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r6,5
	ctx.r6.s64 = 5;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x83ab0510
	ctx.lr = 0x83A87724;
	sub_83AB0510(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// lhz r4,30(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 30);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83ab1ef0
	ctx.lr = 0x83A87734;
	sub_83AB1EF0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 20);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r10,r10,204
	ctx.r10.s64 = ctx.r10.s64 * 204;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x83aadbd8
	ctx.lr = 0x83A87754;
	sub_83AADBD8(ctx, base);
loc_83A87754:
	// lfs f2,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f2.f64 = double(temp.f32);
	// lbz r7,22(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 22);
	// lhz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 24);
	// lfs f1,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lhz r4,30(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 30);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83ab2210
	ctx.lr = 0x83A87770;
	sub_83AB2210(ctx, base);
loc_83A87770:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_83A87778:
	// lwz r25,4(r25)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// bne cr6,0x83a87608
	if (!cr6.eq) goto loc_83A87608;
loc_83A87784:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A87790"))) PPC_WEAK_FUNC(sub_83A87790);
PPC_FUNC_IMPL(__imp__sub_83A87790) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r9,27020(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27020);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// extsh r5,r3
	ctx.r5.s64 = ctx.r3.s16;
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mulli r10,r5,204
	ctx.r10.s64 = ctx.r5.s64 * 204;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r8,r11,160
	ctx.r8.s64 = ctx.r11.s64 + 160;
	// lhz r8,160(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 160);
	// addis r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 65536;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// sth r8,160(r11)
	PPC_STORE_U16(ctx.r11.u32 + 160, ctx.r8.u16);
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r11,160(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 160);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,9856
	ctx.r4.s64 = ctx.r11.s64 + 9856;
	// b 0x831ea400
	sub_831EA400(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A877E8"))) PPC_WEAK_FUNC(sub_83A877E8);
PPC_FUNC_IMPL(__imp__sub_83A877E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A877EC"))) PPC_WEAK_FUNC(sub_83A877EC);
PPC_FUNC_IMPL(__imp__sub_83A877EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A877F0"))) PPC_WEAK_FUNC(sub_83A877F0);
PPC_FUNC_IMPL(__imp__sub_83A877F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A877F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31739
	ctx.r29.s64 = -2080047104;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r11,27020(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27020);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a8790c
	if (cr6.eq) goto loc_83A8790C;
	// lis r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ori r31,r10,65535
	ctx.r31.u64 = ctx.r10.u64 | 65535;
	// beq cr6,0x83a8786c
	if (cr6.eq) goto loc_83A8786C;
	// extsh r5,r3
	ctx.r5.s64 = ctx.r3.s16;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mulli r9,r5,204
	ctx.r9.s64 = ctx.r5.s64 * 204;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r8,r10,162
	ctx.r8.s64 = ctx.r10.s64 + 162;
	// lhz r8,162(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 162);
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// sth r8,162(r10)
	PPC_STORE_U16(ctx.r10.u32 + 162, ctx.r8.u16);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lhz r10,162(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 162);
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// bne cr6,0x83a8786c
	if (!cr6.eq) goto loc_83A8786C;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,9952
	ctx.r4.s64 = ctx.r11.s64 + 9952;
	// bl 0x831ea400
	ctx.lr = 0x83A87868;
	sub_831EA400(ctx, base);
	// lwz r11,27020(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27020);
loc_83A8786C:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// beq cr6,0x83a87894
	if (cr6.eq) goto loc_83A87894;
	// extsh r10,r30
	ctx.r10.s64 = ctx.r30.s16;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mulli r10,r10,204
	ctx.r10.s64 = ctx.r10.s64 * 204;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r9,r10,164
	ctx.r9.s64 = ctx.r10.s64 + 164;
	// lhz r9,164(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 164);
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// sth r9,164(r10)
	PPC_STORE_U16(ctx.r10.u32 + 164, ctx.r9.u16);
loc_83A87894:
	// extsh r9,r30
	ctx.r9.s64 = ctx.r30.s16;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mulli r9,r9,204
	ctx.r9.s64 = ctx.r9.s64 * 204;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r8,176(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 176);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// ble cr6,0x83a8790c
	if (!cr6.gt) goto loc_83A8790C;
	// lwz r7,168(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 168);
	// b 0x83a87904
	goto loc_83A87904;
loc_83A878B8:
	// lwz r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lbz r10,29(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 29);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// beq 0x83a878d8
	if (cr0.eq) goto loc_83A878D8;
	// lhz r10,162(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 162);
	// b 0x83a878dc
	goto loc_83A878DC;
loc_83A878D8:
	// lhz r10,164(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 164);
loc_83A878DC:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x83a87900
	if (!cr6.eq) goto loc_83A87900;
	// lbz r10,28(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 28);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x83a87900
	if (!cr0.eq) goto loc_83A87900;
	// lwz r10,32(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r6,48(r8)
	PPC_STORE_U32(ctx.r8.u32 + 48, ctx.r6.u32);
	// stw r10,36(r8)
	PPC_STORE_U32(ctx.r8.u32 + 36, ctx.r10.u32);
loc_83A87900:
	// lwz r7,4(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
loc_83A87904:
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x83a878b8
	if (!cr6.eq) goto loc_83A878B8;
loc_83A8790C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A87914"))) PPC_WEAK_FUNC(sub_83A87914);
PPC_FUNC_IMPL(__imp__sub_83A87914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A87918"))) PPC_WEAK_FUNC(sub_83A87918);
PPC_FUNC_IMPL(__imp__sub_83A87918) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83A87920;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r30,r11,27020
	ctx.r30.s64 = ctx.r11.s64 + 27020;
	// lwz r11,27020(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27020);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a87bc4
	if (cr6.eq) goto loc_83A87BC4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// mulli r10,r10,204
	ctx.r10.s64 = ctx.r10.s64 * 204;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,176(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a87bc4
	if (cr6.eq) goto loc_83A87BC4;
	// lwz r27,168(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x83a87bc4
	if (cr6.eq) goto loc_83A87BC4;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r28,2
	ctx.r28.s64 = 2;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r26,r11,10044
	ctx.r26.s64 = ctx.r11.s64 + 10044;
	// lfs f31,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f31.f64 = double(temp.f32);
loc_83A87980:
	// lwz r31,0(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lbz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83a879bc
	if (!cr6.eq) goto loc_83A879BC;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a879bc
	if (!cr6.eq) goto loc_83A879BC;
	// lhz r4,30(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 30);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83aad900
	ctx.lr = 0x83A879A8;
	sub_83AAD900(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a879bc
	if (!cr0.eq) goto loc_83A879BC;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r28,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r28.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_83A879BC:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a87b60
	if (cr6.eq) goto loc_83A87B60;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x83a87b94
	if (!cr6.eq) goto loc_83A87B94;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x83a87b94
	if (cr6.lt) goto loc_83A87B94;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// ld r10,48(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 48);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addme r10,r10
	temp.u8 = (ctx.r10.u32 != 0) | (xer.ca != 0);
	ctx.r10.s64 = ctx.r10.s64 + xer.ca - 1;
	xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a87b94
	if (!cr6.eq) goto loc_83A87B94;
	// lhz r11,30(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 30);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// bne cr6,0x83a87ad8
	if (!cr6.eq) goto loc_83A87AD8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 20);
	// lhz r9,26(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 26);
	// mulli r10,r10,204
	ctx.r10.s64 = ctx.r10.s64 * 204;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r29,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r29.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r9,65535
	cr6.compare<uint32_t>(ctx.r9.u32, 65535, xer);
	// beq cr6,0x83a87b94
	if (cr6.eq) goto loc_83A87B94;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83a87ac8
	if (cr6.eq) goto loc_83A87AC8;
	// rotlwi r7,r9,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r8,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r8.u32);
	// lwz r7,4(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r29,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r29.u32);
	// lhz r4,26(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 26);
	// stw r4,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r4.u32);
	// stw r7,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r7.u32);
	// rotlwi r7,r7,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r28,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r28.u32);
	// subfic r7,r7,0
	xer.ca = ctx.r7.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r7.s64;
	// lwz r6,184(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// subfe r7,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r8,r7,r5
	ctx.r8.u64 = ctx.r7.u64 & ctx.r5.u64;
	// stw r8,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r8.u32);
	// bne cr6,0x83a87aa8
	if (!cr6.eq) goto loc_83A87AA8;
	// stw r10,180(r11)
	PPC_STORE_U32(ctx.r11.u32 + 180, ctx.r10.u32);
	// b 0x83a87ab4
	goto loc_83A87AB4;
loc_83A87AA8:
	// stw r29,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r29.u32);
	// lwz r9,184(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
loc_83A87AB4:
	// stw r10,184(r11)
	PPC_STORE_U32(ctx.r11.u32 + 184, ctx.r10.u32);
	// lwz r10,188(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,188(r11)
	PPC_STORE_U32(ctx.r11.u32 + 188, ctx.r10.u32);
	// b 0x83a87b54
	goto loc_83A87B54;
loc_83A87AC8:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea3f0
	ctx.lr = 0x83A87AD4;
	sub_831EA3F0(ctx, base);
	// b 0x83a87b54
	goto loc_83A87B54;
loc_83A87AD8:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a87b38
	if (!cr6.eq) goto loc_83A87B38;
	// li r8,402
	ctx.r8.s64 = 402;
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r6,5
	ctx.r6.s64 = 5;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x83ab0510
	ctx.lr = 0x83A87B08;
	sub_83AB0510(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// lfs f1,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lhz r4,30(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 30);
	// bl 0x83ab1ef0
	ctx.lr = 0x83A87B18;
	sub_83AB1EF0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 20);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r10,r10,204
	ctx.r10.s64 = ctx.r10.s64 * 204;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x83aadbd8
	ctx.lr = 0x83A87B38;
	sub_83AADBD8(ctx, base);
loc_83A87B38:
	// lfs f2,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f2.f64 = double(temp.f32);
	// lbz r7,23(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 23);
	// lhz r6,26(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 26);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lhz r4,30(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 30);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83ab2210
	ctx.lr = 0x83A87B54;
	sub_83AB2210(ctx, base);
loc_83A87B54:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// b 0x83a87b94
	goto loc_83A87B94;
loc_83A87B60:
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83a87b94
	if (cr6.eq) goto loc_83A87B94;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 20);
	// mulli r11,r11,204
	ctx.r11.s64 = ctx.r11.s64 * 204;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x83aadbf0
	ctx.lr = 0x83A87B88;
	sub_83AADBF0(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83ab05b8
	ctx.lr = 0x83A87B90;
	sub_83AB05B8(ctx, base);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
loc_83A87B94:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x83a87bb8
	if (!cr6.eq) goto loc_83A87BB8;
	// lhz r4,30(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 30);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83aad900
	ctx.lr = 0x83A87BAC;
	sub_83AAD900(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a87bb8
	if (!cr0.eq) goto loc_83A87BB8;
	// stw r29,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r29.u32);
loc_83A87BB8:
	// lwz r27,4(r27)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// bne cr6,0x83a87980
	if (!cr6.eq) goto loc_83A87980;
loc_83A87BC4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A87BD0"))) PPC_WEAK_FUNC(sub_83A87BD0);
PPC_FUNC_IMPL(__imp__sub_83A87BD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83A87BD8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r29,r11,27020
	ctx.r29.s64 = ctx.r11.s64 + 27020;
	// lwz r11,27020(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27020);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a87d50
	if (cr6.eq) goto loc_83A87D50;
	// bl 0x83aa4fa8
	ctx.lr = 0x83A87BF4;
	sub_83AA4FA8(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r10,1000
	ctx.r10.s64 = 1000;
	// divdu r10,r3,r10
	ctx.r10.u64 = PPCDivide(ctx.r3.u64, ctx.r10.u64);
	// std r10,48(r11)
	PPC_STORE_U64(ctx.r11.u32 + 48, ctx.r10.u64);
	// cmpldi cr6,r10,0
	cr6.compare<uint64_t>(ctx.r10.u64, 0, xer);
	// beq cr6,0x83a87d50
	if (cr6.eq) goto loc_83A87D50;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83a87d50
	if (!cr6.gt) goto loc_83A87D50;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
loc_83A87C24:
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mulli r10,r27,204
	ctx.r10.s64 = ctx.r27.s64 * 204;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 152);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x83a87c68
	if (!cr0.eq) goto loc_83A87C68;
	// li r4,140
	ctx.r4.s64 = 140;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83aad900
	ctx.lr = 0x83A87C48;
	sub_83AAD900(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a87c68
	if (!cr0.eq) goto loc_83A87C68;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r11,152(r31)
	PPC_STORE_U8(ctx.r31.u32 + 152, ctx.r11.u8);
	// li r4,142
	ctx.r4.s64 = 142;
	// bl 0x83ab1ee8
	ctx.lr = 0x83A87C68;
	sub_83AB1EE8(ctx, base);
loc_83A87C68:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a87918
	ctx.lr = 0x83A87C70;
	sub_83A87918(ctx, base);
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83a87d34
	if (!cr6.gt) goto loc_83A87D34;
	// lwz r8,12(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
loc_83A87C88:
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a87cb8
	if (cr6.eq) goto loc_83A87CB8;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r10,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r10.u32);
	// bne cr6,0x83a87ca8
	if (!cr6.eq) goto loc_83A87CA8;
	// stw r28,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r28.u32);
loc_83A87CA8:
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// lwz r10,188(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r10.u32);
loc_83A87CB8:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,12(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r10.u32);
	// bne 0x83a87cfc
	if (!cr0.eq) goto loc_83A87CFC;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83a87ce0
	if (!cr6.eq) goto loc_83A87CE0;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// b 0x83a87cf0
	goto loc_83A87CF0;
loc_83A87CE0:
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
loc_83A87CF0:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r8,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r8.u32);
	// b 0x83a87d2c
	goto loc_83A87D2C;
loc_83A87CFC:
	// lwz r10,184(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83a87d10
	if (!cr6.eq) goto loc_83A87D10;
	// stw r11,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
	// b 0x83a87d1c
	goto loc_83A87D1C;
loc_83A87D10:
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// lwz r10,184(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
loc_83A87D1C:
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r11.u32);
loc_83A87D2C:
	// bdnz 0x83a87c88
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A87C88;
	// stw r9,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r9.u32);
loc_83A87D34:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r10,r27,1
	ctx.r10.s64 = ctx.r27.s64 + 1;
	// clrlwi r30,r10,16
	ctx.r30.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmpw cr6,r30,r10
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, xer);
	// blt cr6,0x83a87c24
	if (cr6.lt) goto loc_83A87C24;
loc_83A87D50:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A87D58"))) PPC_WEAK_FUNC(sub_83A87D58);
PPC_FUNC_IMPL(__imp__sub_83A87D58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83A87D60;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x83a8fa38
	ctx.lr = 0x83A87D6C;
	sub_83A8FA38(ctx, base);
	// lis r26,-31739
	ctx.r26.s64 = -2080047104;
	// lwz r11,27020(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 27020);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a87d84
	if (!cr6.eq) goto loc_83A87D84;
loc_83A87D7C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a87f0c
	goto loc_83A87F0C;
loc_83A87D84:
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi r28,r3,16
	ctx.r28.u64 = ctx.r3.u32 & 0xFFFF;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, xer);
	// ble cr6,0x83a87da8
	if (!cr6.gt) goto loc_83A87DA8;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,10112
	ctx.r4.s64 = ctx.r11.s64 + 10112;
	// bl 0x831ea3f0
	ctx.lr = 0x83A87DA4;
	sub_831EA3F0(ctx, base);
	// b 0x83a87d7c
	goto loc_83A87D7C;
loc_83A87DA8:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x83a87ed4
	if (cr6.eq) goto loc_83A87ED4;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_83A87DBC:
	// mulli r11,r29,52
	ctx.r11.s64 = ctx.r29.s64 * 52;
	// add r31,r11,r27
	ctx.r31.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stwx r31,r11,r27
	PPC_STORE_U32(ctx.r11.u32 + ctx.r27.u32, ctx.r31.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// bl 0x83a8fa50
	ctx.lr = 0x83A87DD4;
	sub_83A8FA50(ctx, base);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stfs f13,40(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lhz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// lwz r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lfs f12,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// lhz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// stfs f12,44(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lhz r5,86(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// lbz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 92);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// stb r9,22(r31)
	PPC_STORE_U8(ctx.r31.u32 + 22, ctx.r9.u8);
	// mulli r10,r10,204
	ctx.r10.s64 = ctx.r10.s64 * 204;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// sth r8,20(r31)
	PPC_STORE_U16(ctx.r31.u32 + 20, ctx.r8.u16);
	// stb r7,23(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23, ctx.r7.u8);
	// sth r6,24(r31)
	PPC_STORE_U16(ctx.r31.u32 + 24, ctx.r6.u16);
	// sth r5,26(r31)
	PPC_STORE_U16(ctx.r31.u32 + 26, ctx.r5.u16);
	// stb r4,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r4.u8);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// lbz r25,93(r1)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r1.u32 + 93);
	// lhz r24,94(r1)
	ctx.r24.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// lwz r11,27020(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 27020);
	// stb r25,29(r31)
	PPC_STORE_U8(ctx.r31.u32 + 29, ctx.r25.u8);
	// sth r24,30(r31)
	PPC_STORE_U16(ctx.r31.u32 + 30, ctx.r24.u16);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r9,172(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 172);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83a87e74
	if (!cr6.eq) goto loc_83A87E74;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r31,168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 168, ctx.r31.u32);
	// b 0x83a87e88
	goto loc_83A87E88;
loc_83A87E74:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r10,172(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 172);
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
loc_83A87E88:
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// addi r8,r29,1
	ctx.r8.s64 = ctx.r29.s64 + 1;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mulli r10,r10,204
	ctx.r10.s64 = ctx.r10.s64 * 204;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// clrlwi r3,r8,16
	ctx.r3.u64 = ctx.r8.u32 & 0xFFFF;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r28
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, xer);
	// stw r31,172(r10)
	PPC_STORE_U32(ctx.r10.u32 + 172, ctx.r31.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lhz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// mulli r11,r11,204
	ctx.r11.s64 = ctx.r11.s64 * 204;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,176
	ctx.r10.s64 = ctx.r11.s64 + 176;
	// lwz r10,176(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,176(r11)
	PPC_STORE_U32(ctx.r11.u32 + 176, ctx.r10.u32);
	// blt cr6,0x83a87dbc
	if (cr6.lt) goto loc_83A87DBC;
loc_83A87ED4:
	// mulli r11,r28,52
	ctx.r11.s64 = ctx.r28.s64 * 52;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x83a87f08
	if (cr6.eq) goto loc_83A87F08;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_83A87EE8:
	// mulli r9,r10,52
	ctx.r9.s64 = ctx.r10.s64 * 52;
	// add r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 + ctx.r27.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// stw r11,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r11.u32);
	// addi r11,r11,402
	ctx.r11.s64 = ctx.r11.s64 + 402;
	// cmplw cr6,r10,r28
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, xer);
	// blt cr6,0x83a87ee8
	if (cr6.lt) goto loc_83A87EE8;
loc_83A87F08:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83A87F0C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A87F14"))) PPC_WEAK_FUNC(sub_83A87F14);
PPC_FUNC_IMPL(__imp__sub_83A87F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A87F18"))) PPC_WEAK_FUNC(sub_83A87F18);
PPC_FUNC_IMPL(__imp__sub_83A87F18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A87F20;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r28,1
	ctx.r28.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a87f44
	if (!cr6.eq) goto loc_83A87F44;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83a88100
	goto loc_83A88100;
loc_83A87F44:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// extsw r11,r10
	ctx.r11.s64 = ctx.r10.s32;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a87f98
	if (cr6.eq) goto loc_83A87F98;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83a87f84
	if (!cr6.eq) goto loc_83A87F84;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r30.u32);
loc_83A87F84:
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
loc_83A87F98:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a8804c
	if (!cr6.eq) goto loc_83A8804C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a87fdc
	if (cr6.eq) goto loc_83A87FDC;
loc_83A87FB4:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// bge cr6,0x83a87fd0
	if (!cr6.lt) goto loc_83A87FD0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_83A87FD0:
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83a87fb4
	if (!cr6.eq) goto loc_83A87FB4;
loc_83A87FDC:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// bge cr6,0x83a88068
	if (!cr6.lt) goto loc_83A88068;
loc_83A87FF0:
	// li r5,47
	ctx.r5.s64 = 47;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83abda00
	ctx.lr = 0x83A87FFC;
	sub_83ABDA00(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// extsw r11,r10
	ctx.r11.s64 = ctx.r10.s32;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a8804c
	if (cr6.eq) goto loc_83A8804C;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83a88038
	if (!cr6.eq) goto loc_83A88038;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r30.u32);
loc_83A88038:
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
loc_83A8804C:
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83a880d4
	if (!cr6.eq) goto loc_83A880D4;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x83a880e4
	goto loc_83A880E4;
loc_83A88068:
	// bne cr6,0x83a88078
	if (!cr6.eq) goto loc_83A88078;
	// lbz r11,3(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 3);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83a87ff0
	if (cr0.eq) goto loc_83A87FF0;
loc_83A88078:
	// lis r31,-31739
	ctx.r31.s64 = -2080047104;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// lwz r11,26604(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26604);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a880fc
	if (cr6.eq) goto loc_83A880FC;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831ea798
	ctx.lr = 0x83A8809C;
	sub_831EA798(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,60(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x83aa3ce8
	ctx.lr = 0x83A880B4;
	sub_83AA3CE8(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// lwz r10,26604(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26604);
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,26608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26608);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A880D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x83a880fc
	goto loc_83A880FC;
loc_83A880D4:
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
loc_83A880E4:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_83A880FC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_83A88100:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A88108"))) PPC_WEAK_FUNC(sub_83A88108);
PPC_FUNC_IMPL(__imp__sub_83A88108) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
loc_83A88124:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// beq cr6,0x83a88140
	if (cr6.eq) goto loc_83A88140;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a88124
	if (!cr6.eq) goto loc_83A88124;
	// blr 
	return;
loc_83A88140:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// bne cr6,0x83a88174
	if (!cr6.eq) goto loc_83A88174;
	// rotlwi r10,r7,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83a881bc
	if (!cr6.eq) goto loc_83A881BC;
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// b 0x83a881bc
	goto loc_83A881BC;
loc_83A88174:
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x83a881bc
	if (cr0.eq) goto loc_83A881BC;
loc_83A8817C:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// beq cr6,0x83a88194
	if (cr6.eq) goto loc_83A88194;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne 0x83a8817c
	if (!cr0.eq) goto loc_83A8817C;
loc_83A88194:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a881bc
	if (cr6.eq) goto loc_83A881BC;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// bne cr6,0x83a881bc
	if (!cr6.eq) goto loc_83A881BC;
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
loc_83A881BC:
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83a881f0
	if (!cr6.eq) goto loc_83A881F0;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x83a88200
	goto loc_83A88200;
loc_83A881F0:
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
loc_83A88200:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A8821C"))) PPC_WEAK_FUNC(sub_83A8821C);
PPC_FUNC_IMPL(__imp__sub_83A8821C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A88220"))) PPC_WEAK_FUNC(sub_83A88220);
PPC_FUNC_IMPL(__imp__sub_83A88220) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83A88228;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31739
	ctx.r28.s64 = -2080047104;
	// lwz r11,27020(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 27020);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a883cc
	if (cr6.eq) goto loc_83A883CC;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83a8831c
	if (!cr6.gt) goto loc_83A8831C;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_83A88254:
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x83ab05b8
	ctx.lr = 0x83A88264;
	sub_83AB05B8(ctx, base);
	// lwz r11,27020(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 27020);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stw r30,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r30.u32);
loc_83A88274:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r8,168(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 168);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83a88308
	if (cr6.eq) goto loc_83A88308;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r9,r10,168
	ctx.r9.s64 = ctx.r10.s64 + 168;
	// lwz r9,168(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 168);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r9,168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 168, ctx.r9.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r10,168(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 168);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83a882c0
	if (!cr6.eq) goto loc_83A882C0;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stw r30,172(r10)
	PPC_STORE_U32(ctx.r10.u32 + 172, ctx.r30.u32);
loc_83A882C0:
	// stw r30,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r30.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r9,r10,176
	ctx.r9.s64 = ctx.r10.s64 + 176;
	// lwz r9,176(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 176);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,176(r10)
	PPC_STORE_U32(ctx.r10.u32 + 176, ctx.r9.u32);
	// beq cr6,0x83a88308
	if (cr6.eq) goto loc_83A88308;
	// lwz r29,0(r8)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r30,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r30.u32);
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a88274
	if (cr6.eq) goto loc_83A88274;
	// bl 0x83ab05b8
	ctx.lr = 0x83A882FC;
	sub_83AB05B8(ctx, base);
	// lwz r11,27020(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 27020);
	// stw r30,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r30.u32);
	// b 0x83a88274
	goto loc_83A88274;
loc_83A88308:
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r31,r31,204
	ctx.r31.s64 = ctx.r31.s64 + 204;
	// cmpw cr6,r27,r10
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r10.s32, xer);
	// blt cr6,0x83a88254
	if (cr6.lt) goto loc_83A88254;
loc_83A8831C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r30.u32);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a883c4
	if (cr6.eq) goto loc_83A883C4;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// bne cr6,0x83a88344
	if (!cr6.eq) goto loc_83A88344;
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
loc_83A88344:
	// stw r30,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r30.u32);
	// b 0x83a883b8
	goto loc_83A883B8;
loc_83A8834C:
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// b 0x83a88358
	goto loc_83A88358;
loc_83A88354:
	// stw r30,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r30.u32);
loc_83A88358:
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83a88390
	if (cr6.eq) goto loc_83A88390;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// bne cr6,0x83a88378
	if (!cr6.eq) goto loc_83A88378;
	// stw r30,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r30.u32);
loc_83A88378:
	// stw r30,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r30.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// lwz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stw r8,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r8.u32);
	// bne cr6,0x83a88354
	if (!cr6.eq) goto loc_83A88354;
loc_83A88390:
	// stw r30,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r30.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83a883cc
	if (cr6.eq) goto loc_83A883CC;
	// lwz r10,4(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bne cr6,0x83a883b4
	if (!cr6.eq) goto loc_83A883B4;
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
loc_83A883B4:
	// stw r30,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r30.u32);
loc_83A883B8:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_83A883C4:
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x83a8834c
	if (!cr6.eq) goto loc_83A8834C;
loc_83A883CC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A883D4"))) PPC_WEAK_FUNC(sub_83A883D4);
PPC_FUNC_IMPL(__imp__sub_83A883D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A883D8"))) PPC_WEAK_FUNC(sub_83A883D8);
PPC_FUNC_IMPL(__imp__sub_83A883D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// extsh. r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// blt 0x83a8841c
	if (cr0.lt) goto loc_83A8841C;
	// lis r9,-31739
	ctx.r9.s64 = -2080047104;
	// mulli r10,r11,204
	ctx.r10.s64 = ctx.r11.s64 * 204;
	// lwz r11,27020(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 27020);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x83aaf2a8
	ctx.lr = 0x83A8841C;
	sub_83AAF2A8(ctx, base);
loc_83A8841C:
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A88430"))) PPC_WEAK_FUNC(sub_83A88430);
PPC_FUNC_IMPL(__imp__sub_83A88430) {
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
	// bl 0x83a8d380
	ctx.lr = 0x83A88440;
	sub_83A8D380(ctx, base);
	// bl 0x83a883d8
	ctx.lr = 0x83A88444;
	sub_83A883D8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A88454"))) PPC_WEAK_FUNC(sub_83A88454);
PPC_FUNC_IMPL(__imp__sub_83A88454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A88458"))) PPC_WEAK_FUNC(sub_83A88458);
PPC_FUNC_IMPL(__imp__sub_83A88458) {
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
	// bl 0x83a8d410
	ctx.lr = 0x83A88468;
	sub_83A8D410(ctx, base);
	// bl 0x83a883d8
	ctx.lr = 0x83A8846C;
	sub_83A883D8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A8847C"))) PPC_WEAK_FUNC(sub_83A8847C);
PPC_FUNC_IMPL(__imp__sub_83A8847C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A88480"))) PPC_WEAK_FUNC(sub_83A88480);
PPC_FUNC_IMPL(__imp__sub_83A88480) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// extsh. r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt 0x83a884f8
	if (cr0.lt) goto loc_83A884F8;
	// lis r9,-31739
	ctx.r9.s64 = -2080047104;
	// mulli r10,r11,204
	ctx.r10.s64 = ctx.r11.s64 * 204;
	// lwz r11,27020(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 27020);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r11,153(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 153);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x83a884d0
	if (!cr0.eq) goto loc_83A884D0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a884f4
	if (!cr6.eq) goto loc_83A884F4;
loc_83A884D0:
	// lbz r11,154(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 154);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x83a884f4
	if (!cr0.eq) goto loc_83A884F4;
	// bl 0x83a82480
	ctx.lr = 0x83A884E0;
	sub_83A82480(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83ab1ef0
	ctx.lr = 0x83A884F0;
	sub_83AB1EF0(ctx, base);
	// bl 0x83a824c0
	ctx.lr = 0x83A884F4;
	sub_83A824C0(ctx, base);
loc_83A884F4:
	// stfs f31,156(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 156, temp.u32);
loc_83A884F8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
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

__attribute__((alias("__imp__sub_83A88510"))) PPC_WEAK_FUNC(sub_83A88510);
PPC_FUNC_IMPL(__imp__sub_83A88510) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// extsh. r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// lfs f31,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// blt 0x83a8855c
	if (cr0.lt) goto loc_83A8855C;
	// lis r9,-31739
	ctx.r9.s64 = -2080047104;
	// mulli r10,r11,204
	ctx.r10.s64 = ctx.r11.s64 * 204;
	// lwz r11,27020(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 27020);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x83a82480
	ctx.lr = 0x83A8854C;
	sub_83A82480(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83ab3288
	ctx.lr = 0x83A88554;
	sub_83AB3288(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x83a824c0
	ctx.lr = 0x83A8855C;
	sub_83A824C0(ctx, base);
loc_83A8855C:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A88578"))) PPC_WEAK_FUNC(sub_83A88578);
PPC_FUNC_IMPL(__imp__sub_83A88578) {
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
	// bl 0x83a8d380
	ctx.lr = 0x83A88588;
	sub_83A8D380(ctx, base);
	// bl 0x83a88510
	ctx.lr = 0x83A8858C;
	sub_83A88510(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A8859C"))) PPC_WEAK_FUNC(sub_83A8859C);
PPC_FUNC_IMPL(__imp__sub_83A8859C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A885A0"))) PPC_WEAK_FUNC(sub_83A885A0);
PPC_FUNC_IMPL(__imp__sub_83A885A0) {
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
	// bl 0x83a8d410
	ctx.lr = 0x83A885B0;
	sub_83A8D410(ctx, base);
	// bl 0x83a88510
	ctx.lr = 0x83A885B4;
	sub_83A88510(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A885C4"))) PPC_WEAK_FUNC(sub_83A885C4);
PPC_FUNC_IMPL(__imp__sub_83A885C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A885C8"))) PPC_WEAK_FUNC(sub_83A885C8);
PPC_FUNC_IMPL(__imp__sub_83A885C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// extsh. r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt 0x83a886a0
	if (cr0.lt) goto loc_83A886A0;
	// lis r9,-31739
	ctx.r9.s64 = -2080047104;
	// mulli r10,r11,204
	ctx.r10.s64 = ctx.r11.s64 * 204;
	// lwz r11,27020(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 27020);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r11,154(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 154);
	// cmpw cr6,r11,r4
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, xer);
	// beq cr6,0x83a886a0
	if (cr6.eq) goto loc_83A886A0;
	// stb r4,154(r31)
	PPC_STORE_U8(ctx.r31.u32 + 154, ctx.r4.u8);
	// bl 0x83a82480
	ctx.lr = 0x83A88608;
	sub_83A82480(ctx, base);
	// lbz r11,154(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 154);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lbz r11,153(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 153);
	// beq 0x83a8866c
	if (cr0.eq) goto loc_83A8866C;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x83a8863c
	if (!cr0.eq) goto loc_83A8863C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a8863c
	if (cr6.eq) goto loc_83A8863C;
loc_83A88630:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// lfs f1,10196(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10196);
	ctx.f1.f64 = double(temp.f32);
	// b 0x83a88690
	goto loc_83A88690;
loc_83A8863C:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83aaf2a8
	ctx.lr = 0x83A8864C;
	sub_83AAF2A8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a8865c
	if (!cr6.eq) goto loc_83A8865C;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// b 0x83a88664
	goto loc_83A88664;
loc_83A8865C:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
loc_83A88664:
	// stfs f0,156(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 156, temp.u32);
	// b 0x83a88630
	goto loc_83A88630;
loc_83A8866C:
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x83a8868c
	if (!cr0.eq) goto loc_83A8868C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83a8868c
	if (cr6.eq) goto loc_83A8868C;
	// lfs f1,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// b 0x83a88690
	goto loc_83A88690;
loc_83A8868C:
	// lfs f1,156(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	ctx.f1.f64 = double(temp.f32);
loc_83A88690:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83ab1ef0
	ctx.lr = 0x83A8869C;
	sub_83AB1EF0(ctx, base);
	// bl 0x83a824c0
	ctx.lr = 0x83A886A0;
	sub_83A824C0(ctx, base);
loc_83A886A0:
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

__attribute__((alias("__imp__sub_83A886B4"))) PPC_WEAK_FUNC(sub_83A886B4);
PPC_FUNC_IMPL(__imp__sub_83A886B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A886B8"))) PPC_WEAK_FUNC(sub_83A886B8);
PPC_FUNC_IMPL(__imp__sub_83A886B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x83a8d410
	ctx.lr = 0x83A886C8;
	sub_83A8D410(ctx, base);
	// extsh. r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt 0x83a886ec
	if (cr0.lt) goto loc_83A886EC;
	// lis r9,-31739
	ctx.r9.s64 = -2080047104;
	// mulli r10,r11,204
	ctx.r10.s64 = ctx.r11.s64 * 204;
	// lwz r11,27020(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 27020);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r3,153(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 153);
	// b 0x83a886f0
	goto loc_83A886F0;
loc_83A886EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83A886F0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A88700"))) PPC_WEAK_FUNC(sub_83A88700);
PPC_FUNC_IMPL(__imp__sub_83A88700) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A88708;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-31739
	ctx.r9.s64 = -2080047104;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mulli r10,r11,204
	ctx.r10.s64 = ctx.r11.s64 * 204;
	// lwz r11,27020(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 27020);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r11,153(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 153);
	// cmpw cr6,r11,r4
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, xer);
	// beq cr6,0x83a887f8
	if (cr6.eq) goto loc_83A887F8;
	// bl 0x83a82480
	ctx.lr = 0x83A88740;
	sub_83A82480(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r28,8(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x83a887d8
	goto loc_83A887D8;
loc_83A8874C:
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, xer);
	// bne cr6,0x83a88780
	if (!cr6.eq) goto loc_83A88780;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq cr6,0x83a887d4
	if (cr6.eq) goto loc_83A887D4;
	// lbz r11,154(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 154);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x83a887d4
	if (!cr0.eq) goto loc_83A887D4;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a887d4
	if (cr6.eq) goto loc_83A887D4;
	// b 0x83a887c4
	goto loc_83A887C4;
loc_83A88780:
	// lbz r11,154(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 154);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a887c0
	if (cr6.eq) goto loc_83A887C0;
	// bne 0x83a887a8
	if (!cr0.eq) goto loc_83A887A8;
	// lfs f0,156(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// bl 0x83ab1ef0
	ctx.lr = 0x83A887A8;
	sub_83AB1EF0(ctx, base);
loc_83A887A8:
	// lbz r11,153(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 153);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83a887d4
	if (cr0.eq) goto loc_83A887D4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,153(r31)
	PPC_STORE_U8(ctx.r31.u32 + 153, ctx.r11.u8);
	// b 0x83a887d4
	goto loc_83A887D4;
loc_83A887C0:
	// bne 0x83a887d4
	if (!cr0.eq) goto loc_83A887D4;
loc_83A887C4:
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f1,156(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83ab1ef0
	ctx.lr = 0x83A887D4;
	sub_83AB1EF0(ctx, base);
loc_83A887D4:
	// lwz r28,4(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
loc_83A887D8:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x83a8874c
	if (!cr6.eq) goto loc_83A8874C;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stb r29,153(r30)
	PPC_STORE_U8(ctx.r30.u32 + 153, ctx.r29.u8);
	// stw r29,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r29.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stfs f31,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// bl 0x83a824c0
	ctx.lr = 0x83A887F8;
	sub_83A824C0(ctx, base);
loc_83A887F8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A88804"))) PPC_WEAK_FUNC(sub_83A88804);
PPC_FUNC_IMPL(__imp__sub_83A88804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A88808"))) PPC_WEAK_FUNC(sub_83A88808);
PPC_FUNC_IMPL(__imp__sub_83A88808) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// extsh. r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt 0x83a888e4
	if (cr0.lt) goto loc_83A888E4;
	// lis r10,-31739
	ctx.r10.s64 = -2080047104;
	// lwz r10,27020(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27020);
	// lwz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// bge cr6,0x83a888e4
	if (!cr6.lt) goto loc_83A888E4;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mulli r11,r11,204
	ctx.r11.s64 = ctx.r11.s64 * 204;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x83a82480
	ctx.lr = 0x83A8884C;
	sub_83A82480(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne cr6,0x83a8888c
	if (!cr6.eq) goto loc_83A8888C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,142
	ctx.r4.s64 = 142;
	// bl 0x83ab1ee8
	ctx.lr = 0x83A88864;
	sub_83AB1EE8(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lhz r6,148(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 148);
	// lfs f2,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
loc_83A88874:
	// li r4,140
	ctx.r4.s64 = 140;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x83ab2210
	ctx.lr = 0x83A88884;
	sub_83AB2210(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x83a888dc
	goto loc_83A888DC;
loc_83A8888C:
	// lhz r6,150(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 150);
	// cmplwi r6,0
	cr0.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne 0x83a888bc
	if (!cr0.eq) goto loc_83A888BC;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,142
	ctx.r4.s64 = 142;
	// bl 0x83ab1ee8
	ctx.lr = 0x83A888A4;
	sub_83AB1EE8(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lhz r6,150(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 150);
	// lfs f2,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
	// b 0x83a88874
	goto loc_83A88874;
loc_83A888BC:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,140
	ctx.r4.s64 = 140;
	// lfs f2,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83ab2210
	ctx.lr = 0x83A888D8;
	sub_83AB2210(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_83A888DC:
	// stb r11,152(r31)
	PPC_STORE_U8(ctx.r31.u32 + 152, ctx.r11.u8);
	// bl 0x83a824c0
	ctx.lr = 0x83A888E4;
	sub_83A824C0(ctx, base);
loc_83A888E4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A888FC"))) PPC_WEAK_FUNC(sub_83A888FC);
PPC_FUNC_IMPL(__imp__sub_83A888FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A88900"))) PPC_WEAK_FUNC(sub_83A88900);
PPC_FUNC_IMPL(__imp__sub_83A88900) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// extsh. r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// blt 0x83a88964
	if (cr0.lt) goto loc_83A88964;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r11,27020(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27020);
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bge cr6,0x83a88964
	if (!cr6.lt) goto loc_83A88964;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mulli r10,r10,204
	ctx.r10.s64 = ctx.r10.s64 * 204;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x83aaf228
	ctx.lr = 0x83A8894C;
	sub_83AAF228(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addic r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
	// b 0x83a88968
	goto loc_83A88968;
loc_83A88964:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83A88968:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A88978"))) PPC_WEAK_FUNC(sub_83A88978);
PPC_FUNC_IMPL(__imp__sub_83A88978) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// cmplwi cr6,r4,65535
	cr6.compare<uint32_t>(ctx.r4.u32, 65535, xer);
	// beq cr6,0x83a889f4
	if (cr6.eq) goto loc_83A889F4;
	// cmplwi cr6,r4,1000
	cr6.compare<uint32_t>(ctx.r4.u32, 1000, xer);
	// blt cr6,0x83a889f4
	if (cr6.lt) goto loc_83A889F4;
	// extsh. r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge 0x83a889c4
	if (!cr0.lt) goto loc_83A889C4;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,10212
	ctx.r4.s64 = ctx.r11.s64 + 10212;
	// bl 0x831ea3f0
	ctx.lr = 0x83A889C0;
	sub_831EA3F0(ctx, base);
	// b 0x83a88a08
	goto loc_83A88A08;
loc_83A889C4:
	// lis r9,-31739
	ctx.r9.s64 = -2080047104;
	// mulli r10,r11,204
	ctx.r10.s64 = ctx.r11.s64 * 204;
	// lwz r11,27020(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 27020);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x83a82480
	ctx.lr = 0x83A889DC;
	sub_83A82480(ctx, base);
	// clrlwi r4,r30,16
	ctx.r4.u64 = ctx.r30.u32 & 0xFFFF;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83ab1ef0
	ctx.lr = 0x83A889EC;
	sub_83AB1EF0(ctx, base);
	// bl 0x83a824c0
	ctx.lr = 0x83A889F0;
	sub_83A824C0(ctx, base);
	// b 0x83a88a08
	goto loc_83A88A08;
loc_83A889F4:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,10200
	ctx.r4.s64 = ctx.r11.s64 + 10200;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A88A08;
	sub_831EA418(ctx, base);
loc_83A88A08:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A88A24"))) PPC_WEAK_FUNC(sub_83A88A24);
PPC_FUNC_IMPL(__imp__sub_83A88A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A88A28"))) PPC_WEAK_FUNC(sub_83A88A28);
PPC_FUNC_IMPL(__imp__sub_83A88A28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83a88a64
	if (!cr6.eq) goto loc_83A88A64;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,10404
	ctx.r4.s64 = ctx.r11.s64 + 10404;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A88A60;
	sub_831EA418(ctx, base);
	// b 0x83a88be8
	goto loc_83A88BE8;
loc_83A88A64:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a8f478
	ctx.lr = 0x83A88A6C;
	sub_83A8F478(ctx, base);
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r9,65535
	cr6.compare<uint32_t>(ctx.r9.u32, 65535, xer);
	// bne cr6,0x83a88a90
	if (!cr6.eq) goto loc_83A88A90;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,10348
	ctx.r4.s64 = ctx.r11.s64 + 10348;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea400
	ctx.lr = 0x83A88A8C;
	sub_831EA400(ctx, base);
	// b 0x83a88be8
	goto loc_83A88BE8;
loc_83A88A90:
	// extsh. r11,r30
	ctx.r11.s64 = ctx.r30.s16;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge 0x83a88aac
	if (!cr0.lt) goto loc_83A88AAC;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,10304
	ctx.r4.s64 = ctx.r11.s64 + 10304;
	// bl 0x831ea3f0
	ctx.lr = 0x83A88AA8;
	sub_831EA3F0(ctx, base);
	// b 0x83a88be8
	goto loc_83A88BE8;
loc_83A88AAC:
	// lis r8,-31739
	ctx.r8.s64 = -2080047104;
	// mulli r10,r11,204
	ctx.r10.s64 = ctx.r11.s64 * 204;
	// lwz r11,27020(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 27020);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// ori r30,r9,32768
	ctx.r30.u64 = ctx.r9.u64 | 32768;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x83a82480
	ctx.lr = 0x83A88ACC;
	sub_83A82480(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83aaf768
	ctx.lr = 0x83A88ADC;
	sub_83AAF768(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a88bd0
	if (!cr6.eq) goto loc_83A88BD0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a8f510
	ctx.lr = 0x83A88AF0;
	sub_83A8F510(ctx, base);
	// lhz r4,102(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 102);
	// cmplwi cr6,r4,65535
	cr6.compare<uint32_t>(ctx.r4.u32, 65535, xer);
	// beq cr6,0x83a88b94
	if (cr6.eq) goto loc_83A88B94;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83a99898
	ctx.lr = 0x83A88B08;
	sub_83A99898(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a88be4
	if (cr0.eq) goto loc_83A88BE4;
	// lbz r9,81(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne 0x83a88b30
	if (!cr0.eq) goto loc_83A88B30;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83ab31c0
	ctx.lr = 0x83A88B2C;
	sub_83AB31C0(ctx, base);
	// b 0x83a88be4
	goto loc_83A88BE4;
loc_83A88B30:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r31,23
	ctx.r10.s64 = ctx.r31.s64 + 23;
loc_83A88B38:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi r8,0
	cr0.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq 0x83a88b58
	if (cr0.eq) goto loc_83A88B58;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// blt cr6,0x83a88b38
	if (cr6.lt) goto loc_83A88B38;
	// b 0x83a88be4
	goto loc_83A88BE4;
loc_83A88B58:
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// sthx r30,r8,r31
	PPC_STORE_U16(ctx.r8.u32 + ctx.r31.u32, ctx.r30.u16);
	// stb r7,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r7.u8);
	// stb r9,21(r11)
	PPC_STORE_U8(ctx.r11.u32 + 21, ctx.r9.u8);
	// stb r10,23(r11)
	PPC_STORE_U8(ctx.r11.u32 + 23, ctx.r10.u8);
	// stw r6,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r6.u32);
	// stw r5,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r5.u32);
	// b 0x83a88be4
	goto loc_83A88BE4;
loc_83A88B94:
	// lbz r11,97(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 97);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83a88be4
	if (cr0.eq) goto loc_83A88BE4;
	// lhz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 100);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83aad908
	ctx.lr = 0x83A88BAC;
	sub_83AAD908(ctx, base);
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// bne cr6,0x83a88be4
	if (!cr6.eq) goto loc_83A88BE4;
	// lhz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 100);
	// lfs f1,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83ab1ef0
	ctx.lr = 0x83A88BCC;
	sub_83AB1EF0(ctx, base);
	// b 0x83a88be4
	goto loc_83A88BE4;
loc_83A88BD0:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r11,10256
	ctx.r4.s64 = ctx.r11.s64 + 10256;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea400
	ctx.lr = 0x83A88BE4;
	sub_831EA400(ctx, base);
loc_83A88BE4:
	// bl 0x83a824c0
	ctx.lr = 0x83A88BE8;
	sub_83A824C0(ctx, base);
loc_83A88BE8:
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

__attribute__((alias("__imp__sub_83A88C00"))) PPC_WEAK_FUNC(sub_83A88C00);
PPC_FUNC_IMPL(__imp__sub_83A88C00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A88C08;
	__savegprlr_29(ctx, base);
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
	// bne cr6,0x83a88c34
	if (!cr6.eq) goto loc_83A88C34;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,10576
	ctx.r4.s64 = ctx.r11.s64 + 10576;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A88C30;
	sub_831EA418(ctx, base);
	// b 0x83a88d18
	goto loc_83A88D18;
loc_83A88C34:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a8f478
	ctx.lr = 0x83A88C3C;
	sub_83A8F478(ctx, base);
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r9,65535
	cr6.compare<uint32_t>(ctx.r9.u32, 65535, xer);
	// bne cr6,0x83a88c60
	if (!cr6.eq) goto loc_83A88C60;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,10520
	ctx.r4.s64 = ctx.r11.s64 + 10520;
loc_83A88C50:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea400
	ctx.lr = 0x83A88C5C;
	sub_831EA400(ctx, base);
	// b 0x83a88d18
	goto loc_83A88D18;
loc_83A88C60:
	// extsh. r11,r31
	ctx.r11.s64 = ctx.r31.s16;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge 0x83a88c7c
	if (!cr0.lt) goto loc_83A88C7C;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,10476
	ctx.r4.s64 = ctx.r11.s64 + 10476;
	// bl 0x831ea3f0
	ctx.lr = 0x83A88C78;
	sub_831EA3F0(ctx, base);
	// b 0x83a88d18
	goto loc_83A88D18;
loc_83A88C7C:
	// lis r8,-31739
	ctx.r8.s64 = -2080047104;
	// mulli r10,r11,204
	ctx.r10.s64 = ctx.r11.s64 * 204;
	// lwz r11,27020(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 27020);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// ori r31,r9,32768
	ctx.r31.u64 = ctx.r9.u64 | 32768;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// ori r4,r11,32768
	ctx.r4.u64 = ctx.r11.u64 | 32768;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x83aaf800
	ctx.lr = 0x83A88CA8;
	sub_83AAF800(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a88cbc
	if (!cr0.eq) goto loc_83A88CBC;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,10416
	ctx.r4.s64 = ctx.r11.s64 + 10416;
	// b 0x83a88c50
	goto loc_83A88C50;
loc_83A88CBC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a8f510
	ctx.lr = 0x83A88CC8;
	sub_83A8F510(ctx, base);
	// lhz r11,86(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x83a88d18
	if (cr6.eq) goto loc_83A88D18;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x83aaf910
	ctx.lr = 0x83A88CE0;
	sub_83AAF910(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r30,32
	ctx.r10.s64 = ctx.r30.s64 + 32;
loc_83A88CE8:
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r31
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, xer);
	// beq cr6,0x83a88d08
	if (cr6.eq) goto loc_83A88D08;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// blt cr6,0x83a88ce8
	if (cr6.lt) goto loc_83A88CE8;
	// b 0x83a88d18
	goto loc_83A88D18;
loc_83A88D08:
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// li r10,0
	ctx.r10.s64 = 0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stb r10,23(r11)
	PPC_STORE_U8(ctx.r11.u32 + 23, ctx.r10.u8);
loc_83A88D18:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A88D20"))) PPC_WEAK_FUNC(sub_83A88D20);
PPC_FUNC_IMPL(__imp__sub_83A88D20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A88D28;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// extsh. r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge 0x83a88d48
	if (!cr0.lt) goto loc_83A88D48;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,10588
	ctx.r4.s64 = ctx.r11.s64 + 10588;
	// bl 0x831ea3f0
	ctx.lr = 0x83A88D44;
	sub_831EA3F0(ctx, base);
	// b 0x83a88e18
	goto loc_83A88E18;
loc_83A88D48:
	// lis r9,-31739
	ctx.r9.s64 = -2080047104;
	// mulli r10,r11,204
	ctx.r10.s64 = ctx.r11.s64 * 204;
	// lwz r11,27020(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 27020);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lbz r10,145(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 145);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x83a88e18
	if (cr0.eq) goto loc_83A88E18;
	// li r29,0
	ctx.r29.s64 = 0;
loc_83A88D74:
	// lwz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// lhzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r29.u32);
	// rlwinm. r11,r11,0,0,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x83a88e00
	if (cr0.eq) goto loc_83A88E00;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// lhzx r30,r11,r29
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r29.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83aaf800
	ctx.lr = 0x83A88D98;
	sub_83AAF800(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a8f510
	ctx.lr = 0x83A88DA4;
	sub_83A8F510(ctx, base);
	// lhz r11,86(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x83a88df8
	if (cr6.eq) goto loc_83A88DF8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83aaf910
	ctx.lr = 0x83A88DBC;
	sub_83AAF910(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r9,r30,16
	ctx.r9.u64 = ctx.r30.u32 & 0xFFFF;
	// addi r10,r31,32
	ctx.r10.s64 = ctx.r31.s64 + 32;
loc_83A88DC8:
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// beq cr6,0x83a88de8
	if (cr6.eq) goto loc_83A88DE8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// blt cr6,0x83a88dc8
	if (cr6.lt) goto loc_83A88DC8;
	// b 0x83a88df8
	goto loc_83A88DF8;
loc_83A88DE8:
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// li r10,0
	ctx.r10.s64 = 0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r10,23(r11)
	PPC_STORE_U8(ctx.r11.u32 + 23, ctx.r10.u8);
loc_83A88DF8:
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// addi r29,r29,-2
	ctx.r29.s64 = ctx.r29.s64 + -2;
loc_83A88E00:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// lbz r10,145(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 145);
	// cmpw cr6,r28,r10
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, xer);
	// blt cr6,0x83a88d74
	if (cr6.lt) goto loc_83A88D74;
loc_83A88E18:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A88E20"))) PPC_WEAK_FUNC(sub_83A88E20);
PPC_FUNC_IMPL(__imp__sub_83A88E20) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x83a88e58
	if (!cr6.eq) goto loc_83A88E58;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,10728
	ctx.r4.s64 = ctx.r11.s64 + 10728;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A88E50;
	sub_831EA418(ctx, base);
loc_83A88E50:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a88eb4
	goto loc_83A88EB4;
loc_83A88E58:
	// li r10,0
	ctx.r10.s64 = 0;
	// extsh. r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bge 0x83a88e7c
	if (!cr0.lt) goto loc_83A88E7C;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,10680
	ctx.r4.s64 = ctx.r11.s64 + 10680;
	// bl 0x831ea3f0
	ctx.lr = 0x83A88E78;
	sub_831EA3F0(ctx, base);
	// b 0x83a88e50
	goto loc_83A88E50;
loc_83A88E7C:
	// lis r9,-31739
	ctx.r9.s64 = -2080047104;
	// mulli r10,r11,204
	ctx.r10.s64 = ctx.r11.s64 * 204;
	// lwz r11,27020(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 27020);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x83aaf8e0
	ctx.lr = 0x83A88E98;
	sub_83AAF8E0(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x83a88e50
	if (cr6.eq) goto loc_83A88E50;
	// clrlwi r3,r11,17
	ctx.r3.u64 = ctx.r11.u32 & 0x7FFF;
	// bl 0x83a8f670
	ctx.lr = 0x83A88EAC;
	sub_83A8F670(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_83A88EB4:
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

__attribute__((alias("__imp__sub_83A88EC8"))) PPC_WEAK_FUNC(sub_83A88EC8);
PPC_FUNC_IMPL(__imp__sub_83A88EC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// extsh. r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt 0x83a88ef8
	if (cr0.lt) goto loc_83A88EF8;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r11,27020(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27020);
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bge cr6,0x83a88ef8
	if (!cr6.lt) goto loc_83A88EF8;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mulli r10,r10,204
	ctx.r10.s64 = ctx.r10.s64 * 204;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// blr 
	return;
loc_83A88EF8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A88F00"))) PPC_WEAK_FUNC(sub_83A88F00);
PPC_FUNC_IMPL(__imp__sub_83A88F00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// extsh. r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge 0x83a88f38
	if (!cr0.lt) goto loc_83A88F38;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,10788
	ctx.r4.s64 = ctx.r11.s64 + 10788;
	// bl 0x831ea3f0
	ctx.lr = 0x83A88F24;
	sub_831EA3F0(ctx, base);
loc_83A88F24:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83A88F28:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83A88F38:
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// beq cr6,0x83a88f24
	if (cr6.eq) goto loc_83A88F24;
	// lis r9,-31739
	ctx.r9.s64 = -2080047104;
	// mulli r10,r11,204
	ctx.r10.s64 = ctx.r11.s64 * 204;
	// lwz r11,27020(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 27020);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// b 0x83a88f70
	goto loc_83A88F70;
loc_83A88F5C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// beq cr6,0x83a88f7c
	if (cr6.eq) goto loc_83A88F7C;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_83A88F70:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a88f5c
	if (!cr6.eq) goto loc_83A88F5C;
	// b 0x83a88f24
	goto loc_83A88F24;
loc_83A88F7C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83a88f28
	goto loc_83A88F28;
}

__attribute__((alias("__imp__sub_83A88F84"))) PPC_WEAK_FUNC(sub_83A88F84);
PPC_FUNC_IMPL(__imp__sub_83A88F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A88F88"))) PPC_WEAK_FUNC(sub_83A88F88);
PPC_FUNC_IMPL(__imp__sub_83A88F88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83A88F90;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82624b10
	ctx.lr = 0x83A88F9C;
	sub_82624B10(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// bl 0x83aa4f98
	ctx.lr = 0x83A88FA8;
	sub_83AA4F98(ctx, base);
	// lis r29,-31739
	ctx.r29.s64 = -2080047104;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// ble cr6,0x83a89064
	if (!cr6.gt) goto loc_83A89064;
loc_83A88FBC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83ac1318
	ctx.lr = 0x83A88FC8;
	sub_83AC1318(ctx, base);
	// lwz r11,27020(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27020);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// mulli r10,r10,204
	ctx.r10.s64 = ctx.r10.s64 * 204;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r10,166(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 166);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x83a89058
	if (cr0.eq) goto loc_83A89058;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// mulli r10,r10,1000
	ctx.r10.s64 = ctx.r10.s64 * 1000;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,3(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// rldicr r9,r9,8,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r4,5(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r3,6(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// lbz r11,7(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// rldicr r9,r9,8,55
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// rldicr r9,r9,8,55
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// or r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 | ctx.r6.u64;
	// rldicr r9,r9,8,55
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// or r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 | ctx.r5.u64;
	// rldicr r9,r9,8,55
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// or r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 | ctx.r4.u64;
	// rldicr r9,r9,8,55
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// or r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 | ctx.r3.u64;
	// rldicr r9,r9,8,55
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// subf r11,r11,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r11.s64;
	// cmpld cr6,r11,r10
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, xer);
	// blt cr6,0x83a8911c
	if (cr6.lt) goto loc_83A8911C;
loc_83A89058:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r27
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r27.s32, xer);
	// blt cr6,0x83a88fbc
	if (cr6.lt) goto loc_83A88FBC;
loc_83A89064:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// ble cr6,0x83a89110
	if (!cr6.gt) goto loc_83A89110;
loc_83A89070:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83ac1318
	ctx.lr = 0x83A8907C;
	sub_83AC1318(ctx, base);
	// lwz r11,27020(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27020);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// mulli r10,r10,204
	ctx.r10.s64 = ctx.r10.s64 * 204;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r10,166(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 166);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x83a89104
	if (cr0.eq) goto loc_83A89104;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rldicl r8,r28,8,56
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r28.u64, 8) & 0xFF;
	// rldicl r7,r28,24,40
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r28.u64, 24) & 0xFFFFFF;
	// rldicl r9,r28,16,48
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u64, 16) & 0xFFFF;
	// rldicl r6,r28,32,32
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r28.u64, 32) & 0xFFFFFFFF;
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rldicl r7,r28,40,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r28.u64, 40) & 0xFFFFFFFFFF;
	// stb r9,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r9.u8);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rldicl r6,r28,48,16
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r28.u64, 48) & 0xFFFFFFFFFFFF;
	// stb r10,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r10.u8);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rldicl r7,r28,56,8
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r28.u64, 56) & 0xFFFFFFFFFFFFFF;
	// stb r9,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, ctx.r9.u8);
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stb r10,4(r8)
	PPC_STORE_U8(ctx.r8.u32 + 4, ctx.r10.u8);
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stb r6,5(r8)
	PPC_STORE_U8(ctx.r8.u32 + 5, ctx.r6.u8);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stb r7,6(r9)
	PPC_STORE_U8(ctx.r9.u32 + 6, ctx.r7.u8);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stb r28,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r28.u8);
loc_83A89104:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r27
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r27.s32, xer);
	// blt cr6,0x83a89070
	if (cr6.lt) goto loc_83A89070;
loc_83A89110:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83A8911C:
	// li r26,1
	ctx.r26.s64 = 1;
	// b 0x83a89110
	goto loc_83A89110;
}

__attribute__((alias("__imp__sub_83A89124"))) PPC_WEAK_FUNC(sub_83A89124);
PPC_FUNC_IMPL(__imp__sub_83A89124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A89128"))) PPC_WEAK_FUNC(sub_83A89128);
PPC_FUNC_IMPL(__imp__sub_83A89128) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83A89130;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x83aa4f98
	ctx.lr = 0x83A89140;
	sub_83AA4F98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83a81ee8
	ctx.lr = 0x83A89148;
	sub_83A81EE8(ctx, base);
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// lwz r6,27020(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27020);
	// ble 0x83a89208
	if (!cr0.gt) goto loc_83A89208;
	// lwz r7,20(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r9,0
	ctx.r9.s64 = 0;
loc_83A89164:
	// lhzx r11,r9,r7
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x83a891f8
	if (cr6.eq) goto loc_83A891F8;
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// mulli r11,r11,204
	ctx.r11.s64 = ctx.r11.s64 * 204;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r10,166(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 166);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x83a891f8
	if (cr0.eq) goto loc_83A891F8;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// mulli r10,r10,1000
	ctx.r10.s64 = ctx.r10.s64 * 1000;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r28,2(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r27,3(r11)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r26,4(r11)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// rldicr r5,r5,8,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r25,5(r11)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r24,6(r11)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// or r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 | ctx.r4.u64;
	// lbz r11,7(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// rldicr r5,r5,8,55
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// or r5,r5,r28
	ctx.r5.u64 = ctx.r5.u64 | ctx.r28.u64;
	// rldicr r5,r5,8,55
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// or r5,r5,r27
	ctx.r5.u64 = ctx.r5.u64 | ctx.r27.u64;
	// rldicr r5,r5,8,55
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// or r5,r5,r26
	ctx.r5.u64 = ctx.r5.u64 | ctx.r26.u64;
	// rldicr r5,r5,8,55
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// or r5,r5,r25
	ctx.r5.u64 = ctx.r5.u64 | ctx.r25.u64;
	// rldicr r5,r5,8,55
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// or r5,r5,r24
	ctx.r5.u64 = ctx.r5.u64 | ctx.r24.u64;
	// rldicr r5,r5,8,55
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// or r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 | ctx.r11.u64;
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// cmpld cr6,r11,r10
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, xer);
	// blt cr6,0x83a892bc
	if (cr6.lt) goto loc_83A892BC;
loc_83A891F8:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// cmpw cr6,r8,r3
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r3.s32, xer);
	// blt cr6,0x83a89164
	if (cr6.lt) goto loc_83A89164;
loc_83A89208:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x83a892b0
	if (!cr6.gt) goto loc_83A892B0;
	// mtctr r3
	ctr.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
loc_83A89218:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lhzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x83a892a8
	if (cr6.eq) goto loc_83A892A8;
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// mulli r11,r11,204
	ctx.r11.s64 = ctx.r11.s64 * 204;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r10,166(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 166);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x83a892a8
	if (cr0.eq) goto loc_83A892A8;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rldicl r7,r31,8,56
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r31.u64, 8) & 0xFF;
	// rldicl r5,r31,24,40
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u64, 24) & 0xFFFFFF;
	// rldicl r8,r31,16,48
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u64, 16) & 0xFFFF;
	// rldicl r4,r31,32,32
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u64, 32) & 0xFFFFFFFF;
	// stb r7,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rldicl r5,r31,40,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u64, 40) & 0xFFFFFFFFFF;
	// stb r8,1(r7)
	PPC_STORE_U8(ctx.r7.u32 + 1, ctx.r8.u8);
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rldicl r4,r31,48,16
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u64, 48) & 0xFFFFFFFFFFFF;
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rldicl r5,r31,56,8
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u64, 56) & 0xFFFFFFFFFFFFFF;
	// stb r8,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r8.u8);
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stb r10,4(r7)
	PPC_STORE_U8(ctx.r7.u32 + 4, ctx.r10.u8);
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stb r4,5(r7)
	PPC_STORE_U8(ctx.r7.u32 + 5, ctx.r4.u8);
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stb r5,6(r8)
	PPC_STORE_U8(ctx.r8.u32 + 6, ctx.r5.u8);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stb r31,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r31.u8);
loc_83A892A8:
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// bdnz 0x83a89218
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A89218;
loc_83A892B0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_83A892BC:
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x83a892b0
	goto loc_83A892B0;
}

__attribute__((alias("__imp__sub_83A892C4"))) PPC_WEAK_FUNC(sub_83A892C4);
PPC_FUNC_IMPL(__imp__sub_83A892C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A892C8"))) PPC_WEAK_FUNC(sub_83A892C8);
PPC_FUNC_IMPL(__imp__sub_83A892C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A892D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x831ea7a0
	ctx.lr = 0x83A892F0;
	sub_831EA7A0(ctx, base);
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r11,27020
	ctx.r10.s64 = ctx.r11.s64 + 27020;
	// addi r5,r31,7
	ctx.r5.s64 = ctx.r31.s64 + 7;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// rlwinm. r7,r30,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// rlwinm r5,r5,0,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFF8;
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// stw r8,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r8.u32);
	// ble 0x83a89378
	if (!cr0.gt) goto loc_83A89378;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
loc_83A8932C:
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// bne cr6,0x83a89348
	if (!cr6.eq) goto loc_83A89348;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x83a89358
	goto loc_83A89358;
loc_83A89348:
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
loc_83A89358:
	// li r4,-1
	ctx.r4.s64 = -1;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r6,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r6.u32);
	// bdnz 0x83a8932c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A8932C;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
loc_83A89378:
	// rlwinm r11,r7,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r9,r11,56
	ctx.r9.s64 = ctx.r11.s64 + 56;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// stw r31,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r31.u32);
	// stw r29,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r29.u32);
	// stw r28,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r28.u32);
	// stw r30,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A893B8"))) PPC_WEAK_FUNC(sub_83A893B8);
PPC_FUNC_IMPL(__imp__sub_83A893B8) {
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
	// bl 0x83a88220
	ctx.lr = 0x83A893C8;
	sub_83A88220(ctx, base);
	// lis r10,-31739
	ctx.r10.s64 = -2080047104;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,27020(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27020, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A893E4"))) PPC_WEAK_FUNC(sub_83A893E4);
PPC_FUNC_IMPL(__imp__sub_83A893E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A893E8"))) PPC_WEAK_FUNC(sub_83A893E8);
PPC_FUNC_IMPL(__imp__sub_83A893E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x83A893F0;
	__savegprlr_19(ctx, base);
	// stfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f31.u64);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r26,-31739
	ctx.r26.s64 = -2080047104;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r10,111
	ctx.r10.s64 = ctx.r10.s64 + 111;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// rlwinm r19,r10,2,0,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,27020(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 27020);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// addi r10,r10,7
	ctx.r10.s64 = ctx.r10.s64 + 7;
	// rlwinm r28,r10,0,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// ble cr6,0x83a894a0
	if (!cr6.gt) goto loc_83A894A0;
	// lis r9,-32205
	ctx.r9.s64 = -2110586880;
	// addi r10,r28,12
	ctx.r10.s64 = ctx.r28.s64 + 12;
	// lfs f0,10196(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 10196);
	ctx.f0.f64 = double(temp.f32);
loc_83A8943C:
	// addi r9,r10,-12
	ctx.r9.s64 = ctx.r10.s64 + -12;
	// stw r30,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r30.u32);
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// stw r30,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r30.u32);
	// stw r30,-8(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8, ctx.r30.u32);
	// stw r9,-12(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12, ctx.r9.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x83a89468
	if (!cr6.eq) goto loc_83A89468;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x83a89474
	goto loc_83A89474;
loc_83A89468:
	// stw r30,-8(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8, ctx.r30.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r9.u32);
loc_83A89474:
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stfs f0,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// stw r30,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r30.u32);
	// addi r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 + 28;
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmpw cr6,r8,r9
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, xer);
	// blt cr6,0x83a8943c
	if (cr6.lt) goto loc_83A8943C;
loc_83A894A0:
	// mulli r10,r9,28
	ctx.r10.s64 = ctx.r9.s64 * 28;
	// add r27,r10,r28
	ctx.r27.u64 = ctx.r10.u64 + ctx.r28.u64;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// stw r27,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r27.u32);
	// mr r20,r27
	ctx.r20.u64 = ctx.r27.u64;
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83a89568
	if (!cr6.gt) goto loc_83A89568;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_83A894C4:
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// clrlwi r3,r29,16
	ctx.r3.u64 = ctx.r29.u32 & 0xFFFF;
	// bl 0x83a8d288
	ctx.lr = 0x83A894D0;
	sub_83A8D288(ctx, base);
	// stw r31,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r31.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// lhz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 196);
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83a894fc
	if (!cr6.eq) goto loc_83A894FC;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// b 0x83a89514
	goto loc_83A89514;
loc_83A894FC:
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// lhz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 196);
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
loc_83A89514:
	// lhz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 196);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// addi r31,r31,204
	ctx.r31.s64 = ctx.r31.s64 + 204;
	// lhz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 196);
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// lhz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 196);
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, xer);
	// blt cr6,0x83a894c4
	if (cr6.lt) goto loc_83A894C4;
	// lwz r11,27020(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 27020);
loc_83A89568:
	// lwz r9,4(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// mr r22,r30
	ctx.r22.u64 = ctx.r30.u64;
	// mulli r10,r9,204
	ctx.r10.s64 = ctx.r9.s64 * 204;
	// stw r9,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r9.u32);
	// lwz r9,4(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// add r23,r10,r27
	ctx.r23.u64 = ctx.r10.u64 + ctx.r27.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x83a89aac
	if (!cr6.gt) goto loc_83A89AAC;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// li r24,1
	ctx.r24.s64 = 1;
	// addi r21,r11,10832
	ctx.r21.s64 = ctx.r11.s64 + 10832;
	// lfs f31,-26260(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f31.f64 = double(temp.f32);
loc_83A895A0:
	// clrlwi r29,r22,16
	ctx.r29.u64 = ctx.r22.u32 & 0xFFFF;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a8d288
	ctx.lr = 0x83A895B0;
	sub_83A8D288(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// sth r30,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, ctx.r30.u16);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// sth r11,114(r1)
	PPC_STORE_U16(ctx.r1.u32 + 114, ctx.r11.u16);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// sth r30,124(r1)
	PPC_STORE_U16(ctx.r1.u32 + 124, ctx.r30.u16);
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// bl 0x83a8d288
	ctx.lr = 0x83A895D4;
	sub_83A8D288(ctx, base);
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// mr r8,r19
	ctx.r8.u64 = ctx.r19.u64;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,55
	ctx.r3.s64 = 55;
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x83ab0510
	ctx.lr = 0x83A895F4;
	sub_83AB0510(ctx, base);
	// lwz r11,27020(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 27020);
	// add r23,r23,r19
	ctx.r23.u64 = ctx.r23.u64 + ctx.r19.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
	// lwz r3,188(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x83a8964c
	if (cr6.eq) goto loc_83A8964C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x83a8fa20
	ctx.lr = 0x83A8961C;
	sub_83A8FA20(ctx, base);
	// lwz r11,27020(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 27020);
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,3
	ctx.r8.s64 = 3;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x83ab3320
	ctx.lr = 0x83A8964C;
	sub_83AB3320(ctx, base);
loc_83A8964C:
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x83a89690
	if (cr6.eq) goto loc_83A89690;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// bl 0x83a8fa20
	ctx.lr = 0x83A89660;
	sub_83A8FA20(ctx, base);
	// lwz r11,27020(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 27020);
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,3
	ctx.r8.s64 = 3;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x83ab3320
	ctx.lr = 0x83A89690;
	sub_83AB3320(ctx, base);
loc_83A89690:
	// lwz r11,27020(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 27020);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x83aaf2a8
	ctx.lr = 0x83A896AC;
	sub_83AAF2A8(ctx, base);
	// lwz r11,27020(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 27020);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// beq cr6,0x83a896e4
	if (cr6.eq) goto loc_83A896E4;
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stfs f31,156(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 156, temp.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lfs f1,156(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x83ab1ef0
	ctx.lr = 0x83A896DC;
	sub_83AB1EF0(ctx, base);
	// lwz r11,27020(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 27020);
	// b 0x83a896f0
	goto loc_83A896F0;
loc_83A896E4:
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,156(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 156, temp.u32);
loc_83A896F0:
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x83aaf228
	ctx.lr = 0x83A89708;
	sub_83AAF228(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83a8972c
	if (cr6.eq) goto loc_83A8972C;
	// lwz r11,27020(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 27020);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,142
	ctx.r4.s64 = 142;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x83ab1ee8
	ctx.lr = 0x83A8972C;
	sub_83AB1EE8(ctx, base);
loc_83A8972C:
	// lwz r11,27020(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 27020);
	// lhz r9,124(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 124);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// sth r9,166(r10)
	PPC_STORE_U16(ctx.r10.u32 + 166, ctx.r9.u16);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// stw r9,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r9.u32);
	// lwz r10,204(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a898ec
	if (cr6.eq) goto loc_83A898EC;
	// rlwinm. r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x83a898ec
	if (cr0.eq) goto loc_83A898EC;
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// addi r28,r11,-1
	ctx.r28.s64 = ctx.r11.s64 + -1;
loc_83A89770:
	// lbzu r11,2(r28)
	ea = 2 + ctx.r28.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r28.u32 = ea;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lbz r10,-1(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + -1);
	// rlwimi r11,r10,8,16,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF00) | (ctx.r11.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r29,r11,16
	ctx.r29.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a8f510
	ctx.lr = 0x83A8978C;
	sub_83A8F510(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a898cc
	if (cr0.eq) goto loc_83A898CC;
	// rlwinm. r10,r29,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// bne 0x83a897a8
	if (!cr0.eq) goto loc_83A897A8;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// ori r29,r11,16384
	ctx.r29.u64 = ctx.r11.u64 | 16384;
loc_83A897A8:
	// lwz r11,27020(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 27020);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x83aaf768
	ctx.lr = 0x83A897C4;
	sub_83AAF768(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a898bc
	if (cr0.eq) goto loc_83A898BC;
	// lhz r4,150(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 150);
	// cmplwi cr6,r4,65535
	cr6.compare<uint32_t>(ctx.r4.u32, 65535, xer);
	// beq cr6,0x83a89868
	if (cr6.eq) goto loc_83A89868;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83a99898
	ctx.lr = 0x83A897E4;
	sub_83A99898(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a898cc
	if (cr0.eq) goto loc_83A898CC;
	// lbz r9,129(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 129);
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne 0x83a8980c
	if (!cr0.eq) goto loc_83A8980C;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwz r3,12(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83ab31c0
	ctx.lr = 0x83A89808;
	sub_83AB31C0(ctx, base);
	// b 0x83a898cc
	goto loc_83A898CC;
loc_83A8980C:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_83A89810:
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + ctx.r20.u64;
	// lbz r8,23(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 23);
	// cmplwi r8,0
	cr0.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq 0x83a89838
	if (cr0.eq) goto loc_83A89838;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// blt cr6,0x83a89810
	if (cr6.lt) goto loc_83A89810;
	// b 0x83a898cc
	goto loc_83A898CC;
loc_83A89838:
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// lbz r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// lwz r7,132(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r6,136(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// stb r9,21(r11)
	PPC_STORE_U8(ctx.r11.u32 + 21, ctx.r9.u8);
	// stb r24,23(r11)
	PPC_STORE_U8(ctx.r11.u32 + 23, ctx.r24.u8);
	// stb r8,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r8.u8);
	// stw r7,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r7.u32);
	// stw r6,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r6.u32);
	// sthx r29,r10,r20
	PPC_STORE_U16(ctx.r10.u32 + ctx.r20.u32, ctx.r29.u16);
	// b 0x83a898cc
	goto loc_83A898CC;
loc_83A89868:
	// lbz r11,145(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 145);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83a898cc
	if (cr0.eq) goto loc_83A898CC;
	// lwz r11,27020(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 27020);
	// lhz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 148);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x83aad908
	ctx.lr = 0x83A8988C;
	sub_83AAD908(ctx, base);
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// bne cr6,0x83a898cc
	if (!cr6.eq) goto loc_83A898CC;
	// lwz r11,27020(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 27020);
	// lfs f1,164(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f1.f64 = double(temp.f32);
	// lhz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 148);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x83ab1ef0
	ctx.lr = 0x83A898B8;
	sub_83AB1EF0(ctx, base);
	// b 0x83a898cc
	goto loc_83A898CC;
loc_83A898BC:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea400
	ctx.lr = 0x83A898CC;
	sub_831EA400(ctx, base);
loc_83A898CC:
	// lwz r10,204(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// addi r11,r27,1
	ctx.r11.s64 = ctx.r27.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x83a89770
	if (cr6.lt) goto loc_83A89770;
	// lwz r11,27020(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 27020);
loc_83A898EC:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// stb r24,152(r10)
	PPC_STORE_U8(ctx.r10.u32 + 152, ctx.r24.u8);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// stb r30,153(r10)
	PPC_STORE_U8(ctx.r10.u32 + 153, ctx.r30.u8);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// stb r30,154(r10)
	PPC_STORE_U8(ctx.r10.u32 + 154, ctx.r30.u8);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// sth r30,160(r10)
	PPC_STORE_U16(ctx.r10.u32 + 160, ctx.r30.u16);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// sth r30,162(r10)
	PPC_STORE_U16(ctx.r10.u32 + 162, ctx.r30.u16);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// sth r30,164(r10)
	PPC_STORE_U16(ctx.r10.u32 + 164, ctx.r30.u16);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// stw r30,168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 168, ctx.r30.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// stw r30,172(r10)
	PPC_STORE_U32(ctx.r10.u32 + 172, ctx.r30.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// stw r30,176(r10)
	PPC_STORE_U32(ctx.r10.u32 + 176, ctx.r30.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// stw r30,180(r10)
	PPC_STORE_U32(ctx.r10.u32 + 180, ctx.r30.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// stw r30,184(r10)
	PPC_STORE_U32(ctx.r10.u32 + 184, ctx.r30.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// stw r30,188(r10)
	PPC_STORE_U32(ctx.r10.u32 + 188, ctx.r30.u32);
	// lhz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x83a89a74
	if (cr0.eq) goto loc_83A89A74;
	// lhz r10,114(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 114);
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// beq cr6,0x83a89a74
	if (cr6.eq) goto loc_83A89A74;
	// bl 0x83a8fa90
	ctx.lr = 0x83A89998;
	sub_83A8FA90(ctx, base);
	// lwz r11,27020(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 27020);
	// lhz r10,114(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 114);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r9,r31,r9
	ctx.r9.u64 = ctx.r31.u64 + ctx.r9.u64;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r10,192(r9)
	PPC_STORE_U32(ctx.r9.u32 + 192, ctx.r10.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lhz r9,114(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 114);
	// add r8,r31,r10
	ctx.r8.u64 = ctx.r31.u64 + ctx.r10.u64;
	// mulli r10,r9,24
	ctx.r10.s64 = ctx.r9.s64 * 24;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// stw r10,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r10.u32);
	// lhz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// cmpwi r10,0
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble 0x83a89a64
	if (!cr0.gt) goto loc_83A89A64;
loc_83A899E0:
	// bl 0x83a8faa0
	ctx.lr = 0x83A899E4;
	sub_83A8FAA0(ctx, base);
	// lwz r11,27020(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 27020);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// lwz r10,196(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 196);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// lwz r10,196(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 196);
	// bne cr6,0x83a89a24
	if (!cr6.eq) goto loc_83A89A24;
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// lwz r10,196(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 196);
	// stw r3,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// b 0x83a89a3c
	goto loc_83A89A3C;
loc_83A89A24:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// lwz r10,196(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 196);
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
loc_83A89A3C:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// lwz r10,196(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 196);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lhz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// cmpw cr6,r29,r10
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, xer);
	// blt cr6,0x83a899e0
	if (cr6.lt) goto loc_83A899E0;
loc_83A89A64:
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r9,r31,r9
	ctx.r9.u64 = ctx.r31.u64 + ctx.r9.u64;
	// stw r10,200(r9)
	PPC_STORE_U32(ctx.r9.u32 + 200, ctx.r10.u32);
	// b 0x83a89a98
	goto loc_83A89A98;
loc_83A89A74:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// stw r30,192(r10)
	PPC_STORE_U32(ctx.r10.u32 + 192, ctx.r30.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// stw r30,196(r10)
	PPC_STORE_U32(ctx.r10.u32 + 196, ctx.r30.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// stw r30,200(r10)
	PPC_STORE_U32(ctx.r10.u32 + 200, ctx.r30.u32);
loc_83A89A98:
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r31,r31,204
	ctx.r31.s64 = ctx.r31.s64 + 204;
	// cmpw cr6,r22,r10
	cr6.compare<int32_t>(ctx.r22.s32, ctx.r10.s32, xer);
	// blt cr6,0x83a895a0
	if (cr6.lt) goto loc_83A895A0;
loc_83A89AAC:
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mulli r4,r11,462
	ctx.r4.s64 = ctx.r11.s64 * 462;
	// bl 0x83a87d58
	ctx.lr = 0x83A89ABC;
	sub_83A87D58(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A89ACC"))) PPC_WEAK_FUNC(sub_83A89ACC);
PPC_FUNC_IMPL(__imp__sub_83A89ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A89AD0"))) PPC_WEAK_FUNC(sub_83A89AD0);
PPC_FUNC_IMPL(__imp__sub_83A89AD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r11,27020(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27020);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a89ae8
	if (!cr6.eq) goto loc_83A89AE8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83A89AE8:
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mulli r11,r9,204
	ctx.r11.s64 = ctx.r9.s64 * 204;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,192
	ctx.r3.s64 = ctx.r11.s64 + 192;
	// b 0x83a87f18
	sub_83A87F18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A89B00"))) PPC_WEAK_FUNC(sub_83A89B00);
PPC_FUNC_IMPL(__imp__sub_83A89B00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r11,27020(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27020);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mulli r11,r9,204
	ctx.r11.s64 = ctx.r9.s64 * 204;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,192
	ctx.r3.s64 = ctx.r11.s64 + 192;
	// b 0x83a88108
	sub_83A88108(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A89B28"))) PPC_WEAK_FUNC(sub_83A89B28);
PPC_FUNC_IMPL(__imp__sub_83A89B28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A89B2C"))) PPC_WEAK_FUNC(sub_83A89B2C);
PPC_FUNC_IMPL(__imp__sub_83A89B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A89B30"))) PPC_WEAK_FUNC(sub_83A89B30);
PPC_FUNC_IMPL(__imp__sub_83A89B30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x83a8d410
	ctx.lr = 0x83A89B48;
	sub_83A8D410(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83a88480
	ctx.lr = 0x83A89B50;
	sub_83A88480(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A89B64"))) PPC_WEAK_FUNC(sub_83A89B64);
PPC_FUNC_IMPL(__imp__sub_83A89B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A89B68"))) PPC_WEAK_FUNC(sub_83A89B68);
PPC_FUNC_IMPL(__imp__sub_83A89B68) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x83a8d410
	ctx.lr = 0x83A89B80;
	sub_83A8D410(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83a885c8
	ctx.lr = 0x83A89B88;
	sub_83A885C8(ctx, base);
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

__attribute__((alias("__imp__sub_83A89B9C"))) PPC_WEAK_FUNC(sub_83A89B9C);
PPC_FUNC_IMPL(__imp__sub_83A89B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A89BA0"))) PPC_WEAK_FUNC(sub_83A89BA0);
PPC_FUNC_IMPL(__imp__sub_83A89BA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x83a8d410
	ctx.lr = 0x83A89BB0;
	sub_83A8D410(ctx, base);
	// extsh. r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt 0x83a89bd4
	if (cr0.lt) goto loc_83A89BD4;
	// lis r9,-31739
	ctx.r9.s64 = -2080047104;
	// mulli r10,r11,204
	ctx.r10.s64 = ctx.r11.s64 * 204;
	// lwz r11,27020(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 27020);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r3,154(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 154);
	// b 0x83a89bd8
	goto loc_83A89BD8;
loc_83A89BD4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83A89BD8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A89BE8"))) PPC_WEAK_FUNC(sub_83A89BE8);
PPC_FUNC_IMPL(__imp__sub_83A89BE8) {
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
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x83a8d410
	ctx.lr = 0x83A89C08;
	sub_83A8D410(ctx, base);
	// extsh. r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt 0x83a89c1c
	if (cr0.lt) goto loc_83A89C1C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83a88700
	ctx.lr = 0x83A89C1C;
	sub_83A88700(ctx, base);
loc_83A89C1C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
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

__attribute__((alias("__imp__sub_83A89C34"))) PPC_WEAK_FUNC(sub_83A89C34);
PPC_FUNC_IMPL(__imp__sub_83A89C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A89C38"))) PPC_WEAK_FUNC(sub_83A89C38);
PPC_FUNC_IMPL(__imp__sub_83A89C38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x83a8d380
	ctx.lr = 0x83A89C48;
	sub_83A8D380(ctx, base);
	// extsh. r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt 0x83a89c58
	if (cr0.lt) goto loc_83A89C58;
	// bl 0x83a88900
	ctx.lr = 0x83A89C54;
	sub_83A88900(ctx, base);
	// b 0x83a89c5c
	goto loc_83A89C5C;
loc_83A89C58:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83A89C5C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A89C6C"))) PPC_WEAK_FUNC(sub_83A89C6C);
PPC_FUNC_IMPL(__imp__sub_83A89C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A89C70"))) PPC_WEAK_FUNC(sub_83A89C70);
PPC_FUNC_IMPL(__imp__sub_83A89C70) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x83a8d410
	ctx.lr = 0x83A89C88;
	sub_83A8D410(ctx, base);
	// extsh. r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt 0x83a89c98
	if (cr0.lt) goto loc_83A89C98;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83a88808
	ctx.lr = 0x83A89C98;
	sub_83A88808(ctx, base);
loc_83A89C98:
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

__attribute__((alias("__imp__sub_83A89CAC"))) PPC_WEAK_FUNC(sub_83A89CAC);
PPC_FUNC_IMPL(__imp__sub_83A89CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A89CB0"))) PPC_WEAK_FUNC(sub_83A89CB0);
PPC_FUNC_IMPL(__imp__sub_83A89CB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x83a8d410
	ctx.lr = 0x83A89CC0;
	sub_83A8D410(ctx, base);
	// extsh. r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt 0x83a89cd0
	if (cr0.lt) goto loc_83A89CD0;
	// bl 0x83a88900
	ctx.lr = 0x83A89CCC;
	sub_83A88900(ctx, base);
	// b 0x83a89cd4
	goto loc_83A89CD4;
loc_83A89CD0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83A89CD4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A89CE4"))) PPC_WEAK_FUNC(sub_83A89CE4);
PPC_FUNC_IMPL(__imp__sub_83A89CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A89CE8"))) PPC_WEAK_FUNC(sub_83A89CE8);
PPC_FUNC_IMPL(__imp__sub_83A89CE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A89CF0;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83a89d24
	if (!cr6.eq) goto loc_83A89D24;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,10940
	ctx.r4.s64 = ctx.r11.s64 + 10940;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A89D20;
	sub_831EA418(ctx, base);
	// b 0x83a89d8c
	goto loc_83A89D8C;
loc_83A89D24:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a8f398
	ctx.lr = 0x83A89D2C;
	sub_83A8F398(ctx, base);
	// clrlwi r30,r3,16
	ctx.r30.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r30,65535
	cr6.compare<uint32_t>(ctx.r30.u32, 65535, xer);
	// bne cr6,0x83a89d50
	if (!cr6.eq) goto loc_83A89D50;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,10880
	ctx.r4.s64 = ctx.r11.s64 + 10880;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea400
	ctx.lr = 0x83A89D4C;
	sub_831EA400(ctx, base);
	// b 0x83a89d8c
	goto loc_83A89D8C;
loc_83A89D50:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x83a89d64
	if (cr6.gt) goto loc_83A89D64;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_83A89D64:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x83a89d78
	if (cr6.lt) goto loc_83A89D78;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_83A89D78:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a8d410
	ctx.lr = 0x83A89D80;
	sub_83A8D410(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83a88978
	ctx.lr = 0x83A89D8C;
	sub_83A88978(ctx, base);
loc_83A89D8C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A89D98"))) PPC_WEAK_FUNC(sub_83A89D98);
PPC_FUNC_IMPL(__imp__sub_83A89D98) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x83a8d410
	ctx.lr = 0x83A89DB0;
	sub_83A8D410(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83a88a28
	ctx.lr = 0x83A89DB8;
	sub_83A88A28(ctx, base);
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

__attribute__((alias("__imp__sub_83A89DCC"))) PPC_WEAK_FUNC(sub_83A89DCC);
PPC_FUNC_IMPL(__imp__sub_83A89DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A89DD0"))) PPC_WEAK_FUNC(sub_83A89DD0);
PPC_FUNC_IMPL(__imp__sub_83A89DD0) {
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
	// bl 0x83a8d410
	ctx.lr = 0x83A89DEC;
	sub_83A8D410(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x83a82480
	ctx.lr = 0x83A89DF4;
	sub_83A82480(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a88c00
	ctx.lr = 0x83A89E00;
	sub_83A88C00(ctx, base);
	// bl 0x83a824c0
	ctx.lr = 0x83A89E04;
	sub_83A824C0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A89E1C"))) PPC_WEAK_FUNC(sub_83A89E1C);
PPC_FUNC_IMPL(__imp__sub_83A89E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A89E20"))) PPC_WEAK_FUNC(sub_83A89E20);
PPC_FUNC_IMPL(__imp__sub_83A89E20) {
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
	// bl 0x83a8d410
	ctx.lr = 0x83A89E34;
	sub_83A8D410(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83a82480
	ctx.lr = 0x83A89E3C;
	sub_83A82480(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a88d20
	ctx.lr = 0x83A89E44;
	sub_83A88D20(ctx, base);
	// bl 0x83a824c0
	ctx.lr = 0x83A89E48;
	sub_83A824C0(ctx, base);
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

__attribute__((alias("__imp__sub_83A89E5C"))) PPC_WEAK_FUNC(sub_83A89E5C);
PPC_FUNC_IMPL(__imp__sub_83A89E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A89E60"))) PPC_WEAK_FUNC(sub_83A89E60);
PPC_FUNC_IMPL(__imp__sub_83A89E60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x83a8d410
	ctx.lr = 0x83A89E70;
	sub_83A8D410(ctx, base);
	// extsh. r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge 0x83a89e90
	if (!cr0.lt) goto loc_83A89E90;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,10636
	ctx.r4.s64 = ctx.r11.s64 + 10636;
	// bl 0x831ea3f0
	ctx.lr = 0x83A89E88;
	sub_831EA3F0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83a89eac
	goto loc_83A89EAC;
loc_83A89E90:
	// lis r9,-31739
	ctx.r9.s64 = -2080047104;
	// mulli r10,r11,204
	ctx.r10.s64 = ctx.r11.s64 * 204;
	// lwz r11,27020(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 27020);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x83aaf8d8
	ctx.lr = 0x83A89EAC;
	sub_83AAF8D8(ctx, base);
loc_83A89EAC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A89EBC"))) PPC_WEAK_FUNC(sub_83A89EBC);
PPC_FUNC_IMPL(__imp__sub_83A89EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A89EC0"))) PPC_WEAK_FUNC(sub_83A89EC0);
PPC_FUNC_IMPL(__imp__sub_83A89EC0) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x83a8d410
	ctx.lr = 0x83A89EE0;
	sub_83A8D410(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83a88e20
	ctx.lr = 0x83A89EEC;
	sub_83A88E20(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A89F04"))) PPC_WEAK_FUNC(sub_83A89F04);
PPC_FUNC_IMPL(__imp__sub_83A89F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A89F08"))) PPC_WEAK_FUNC(sub_83A89F08);
PPC_FUNC_IMPL(__imp__sub_83A89F08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x83a8d410
	ctx.lr = 0x83A89F18;
	sub_83A8D410(ctx, base);
	// extsh. r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge 0x83a89f38
	if (!cr0.lt) goto loc_83A89F38;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,10744
	ctx.r4.s64 = ctx.r11.s64 + 10744;
	// bl 0x831ea3f0
	ctx.lr = 0x83A89F30;
	sub_831EA3F0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83a89f50
	goto loc_83A89F50;
loc_83A89F38:
	// lis r9,-31739
	ctx.r9.s64 = -2080047104;
	// mulli r10,r11,204
	ctx.r10.s64 = ctx.r11.s64 * 204;
	// lwz r11,27020(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 27020);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r3,160(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 160);
loc_83A89F50:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A89F60"))) PPC_WEAK_FUNC(sub_83A89F60);
PPC_FUNC_IMPL(__imp__sub_83A89F60) {
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
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x83a89f8c
	if (!cr6.gt) goto loc_83A89F8C;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble cr6,0x83a89f8c
	if (!cr6.gt) goto loc_83A89F8C;
	// mullw r11,r3,r4
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r4.s32);
	// mulli r11,r11,288
	ctx.r11.s64 = ctx.r11.s64 * 288;
	// rlwinm r3,r11,26,6,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// b 0x83a89fa4
	goto loc_83A89FA4;
loc_83A89F8C:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,11020
	ctx.r4.s64 = ctx.r11.s64 + 11020;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A89FA0;
	sub_831EA418(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
loc_83A89FA4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A89FB4"))) PPC_WEAK_FUNC(sub_83A89FB4);
PPC_FUNC_IMPL(__imp__sub_83A89FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A89FB8"))) PPC_WEAK_FUNC(sub_83A89FB8);
PPC_FUNC_IMPL(__imp__sub_83A89FB8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831ea7a0
	ctx.lr = 0x83A89FD8;
	sub_831EA7A0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x83b667c0
	ctx.lr = 0x83A89FE8;
	sub_83B667C0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x83abadc0
	ctx.lr = 0x83A89FF4;
	sub_83ABADC0(ctx, base);
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

__attribute__((alias("__imp__sub_83A8A008"))) PPC_WEAK_FUNC(sub_83A8A008);
PPC_FUNC_IMPL(__imp__sub_83A8A008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A8A010;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x831ea7a0
	ctx.lr = 0x83A8A030;
	sub_831EA7A0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x83b667c0
	ctx.lr = 0x83A8A040;
	sub_83B667C0(ctx, base);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83abb000
	ctx.lr = 0x83A8A058;
	sub_83ABB000(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A8A060"))) PPC_WEAK_FUNC(sub_83A8A060);
PPC_FUNC_IMPL(__imp__sub_83A8A060) {
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
	// bl 0x83a83240
	ctx.lr = 0x83A8A074;
	sub_83A83240(ctx, base);
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r11,r11,27148
	ctx.r11.s64 = ctx.r11.s64 + 27148;
	// lwz r10,-104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -104);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,-104(r11)
	PPC_STORE_U32(ctx.r11.u32 + -104, ctx.r10.u32);
	// beq 0x83a8a094
	if (cr0.eq) goto loc_83A8A094;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x83a8a0a4
	goto loc_83A8A0A4;
loc_83A8A094:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x83b67060
	ctx.lr = 0x83A8A0A0;
	sub_83B67060(ctx, base);
	// li r31,1
	ctx.r31.s64 = 1;
loc_83A8A0A4:
	// bl 0x83a83248
	ctx.lr = 0x83A8A0A8;
	sub_83A83248(ctx, base);
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(ctx.r31.s32, 1, xer);
	// bne cr6,0x83a8a0c8
	if (!cr6.eq) goto loc_83A8A0C8;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83a76620
	ctx.lr = 0x83A8A0BC;
	sub_83A76620(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83a76620
	ctx.lr = 0x83A8A0C8;
	sub_83A76620(ctx, base);
loc_83A8A0C8:
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

__attribute__((alias("__imp__sub_83A8A0DC"))) PPC_WEAK_FUNC(sub_83A8A0DC);
PPC_FUNC_IMPL(__imp__sub_83A8A0DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A8A0E0"))) PPC_WEAK_FUNC(sub_83A8A0E0);
PPC_FUNC_IMPL(__imp__sub_83A8A0E0) {
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
	// bl 0x830fe8a0
	ctx.lr = 0x83A8A0FC;
	sub_830FE8A0(ctx, base);
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mulli r10,r31,96
	ctx.r10.s64 = ctx.r31.s64 * 96;
	// addi r11,r11,27048
	ctx.r11.s64 = ctx.r11.s64 + 27048;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r4,96
	ctx.r4.s64 = 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ea7a0
	ctx.lr = 0x83A8A11C;
	sub_831EA7A0(ctx, base);
	// std r30,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r30.u64);
	// std r30,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r30.u64);
	// std r30,72(r31)
	PPC_STORE_U64(ctx.r31.u32 + 72, ctx.r30.u64);
	// std r30,80(r31)
	PPC_STORE_U64(ctx.r31.u32 + 80, ctx.r30.u64);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A8A144"))) PPC_WEAK_FUNC(sub_83A8A144);
PPC_FUNC_IMPL(__imp__sub_83A8A144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A8A148"))) PPC_WEAK_FUNC(sub_83A8A148);
PPC_FUNC_IMPL(__imp__sub_83A8A148) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A8A150;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ea7a0
	ctx.lr = 0x83A8A168;
	sub_831EA7A0(ctx, base);
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mulli r10,r31,96
	ctx.r10.s64 = ctx.r31.s64 * 96;
	// addi r11,r11,27048
	ctx.r11.s64 = ctx.r11.s64 + 27048;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ldx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// ld r28,24(r29)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r29.u32 + 24);
	// bl 0x83b67078
	ctx.lr = 0x83A8A188;
	sub_83B67078(ctx, base);
	// lis r11,15
	ctx.r11.s64 = 983040;
	// tdllei r3,0
	// ori r31,r11,16960
	ctx.r31.u64 = ctx.r11.u64 | 16960;
	// mulld r11,r28,r31
	ctx.r11.s64 = ctx.r28.s64 * ctx.r31.s64;
	// divdu r11,r11,r3
	ctx.r11.u64 = PPCDivide(ctx.r11.u64, ctx.r3.u64);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// ld r28,32(r29)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r29.u32 + 32);
	// bl 0x83b67078
	ctx.lr = 0x83A8A1A8;
	sub_83B67078(ctx, base);
	// mulld r11,r28,r31
	ctx.r11.s64 = ctx.r28.s64 * ctx.r31.s64;
	// divdu r11,r11,r3
	ctx.r11.u64 = PPCDivide(ctx.r11.u64, ctx.r3.u64);
	// tdllei r3,0
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// ld r28,48(r29)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r29.u32 + 48);
	// bl 0x83b67078
	ctx.lr = 0x83A8A1C0;
	sub_83B67078(ctx, base);
	// mulld r11,r28,r31
	ctx.r11.s64 = ctx.r28.s64 * ctx.r31.s64;
	// divdu r11,r11,r3
	ctx.r11.u64 = PPCDivide(ctx.r11.u64, ctx.r3.u64);
	// tdllei r3,0
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// ld r28,56(r29)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r29.u32 + 56);
	// bl 0x83b67078
	ctx.lr = 0x83A8A1D8;
	sub_83B67078(ctx, base);
	// mulld r10,r28,r31
	ctx.r10.s64 = ctx.r28.s64 * ctx.r31.s64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// divdu r10,r10,r3
	ctx.r10.u64 = PPCDivide(ctx.r10.u64, ctx.r3.u64);
	// tdllei r3,0
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// beq cr6,0x83a8a23c
	if (cr6.eq) goto loc_83A8A23C;
	// ld r10,40(r29)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r29.u32 + 40);
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// divdu r28,r10,r11
	ctx.r28.u64 = PPCDivide(ctx.r10.u64, ctx.r11.u64);
	// tdllei r11,0
	// bl 0x83b67078
	ctx.lr = 0x83A8A208;
	sub_83B67078(ctx, base);
	// mulld r11,r28,r31
	ctx.r11.s64 = ctx.r28.s64 * ctx.r31.s64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// divdu r11,r11,r3
	ctx.r11.u64 = PPCDivide(ctx.r11.u64, ctx.r3.u64);
	// tdllei r3,0
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// tdllei r10,0
	// ld r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 64);
	// divdu r29,r11,r10
	ctx.r29.u64 = PPCDivide(ctx.r11.u64, ctx.r10.u64);
	// bl 0x83b67078
	ctx.lr = 0x83A8A22C;
	sub_83B67078(ctx, base);
	// mulld r11,r29,r31
	ctx.r11.s64 = ctx.r29.s64 * ctx.r31.s64;
	// divdu r11,r11,r3
	ctx.r11.u64 = PPCDivide(ctx.r11.u64, ctx.r3.u64);
	// tdllei r3,0
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
loc_83A8A23C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A8A244"))) PPC_WEAK_FUNC(sub_83A8A244);
PPC_FUNC_IMPL(__imp__sub_83A8A244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A8A248"))) PPC_WEAK_FUNC(sub_83A8A248);
PPC_FUNC_IMPL(__imp__sub_83A8A248) {
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
	// bl 0x830fe8a0
	ctx.lr = 0x83A8A260;
	sub_830FE8A0(ctx, base);
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r31,r11,27048
	ctx.r31.s64 = ctx.r11.s64 + 27048;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ld r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// bl 0x83b670b0
	ctx.lr = 0x83A8A278;
	sub_83B670B0(ctx, base);
	// ld r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 56);
	// std r3,48(r31)
	PPC_STORE_U64(ctx.r31.u32 + 48, ctx.r3.u64);
	// cmpld cr6,r11,r3
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r3.u64, xer);
	// bge cr6,0x83a8a28c
	if (!cr6.lt) goto loc_83A8A28C;
	// std r3,56(r31)
	PPC_STORE_U64(ctx.r31.u32 + 56, ctx.r3.u64);
loc_83A8A28C:
	// ld r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 64);
	// li r10,0
	ctx.r10.s64 = 0;
	// std r30,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r30.u64);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// std r10,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r10.u64);
	// std r11,64(r31)
	PPC_STORE_U64(ctx.r31.u32 + 64, ctx.r11.u64);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A8A2BC"))) PPC_WEAK_FUNC(sub_83A8A2BC);
PPC_FUNC_IMPL(__imp__sub_83A8A2BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A8A2C0"))) PPC_WEAK_FUNC(sub_83A8A2C0);
PPC_FUNC_IMPL(__imp__sub_83A8A2C0) {
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,27040
	ctx.r31.s64 = ctx.r11.s64 + 27040;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83a8a360
	if (!cr6.gt) goto loc_83A8A360;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a8a308
	if (cr6.eq) goto loc_83A8A308;
	// bl 0x82590fc8
	ctx.lr = 0x83A8A2FC;
	sub_82590FC8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// bne cr6,0x83a8a360
	if (!cr6.eq) goto loc_83A8A360;
loc_83A8A308:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq cr6,0x83a8a31c
	if (cr6.eq) goto loc_83A8A31C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x83a8a320
	goto loc_83A8A320;
loc_83A8A31C:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_83A8A320:
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a8a338
	if (!cr6.eq) goto loc_83A8A338;
	// bl 0x830fe8a0
	ctx.lr = 0x83A8A330;
	sub_830FE8A0(ctx, base);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// std r3,80(r31)
	PPC_STORE_U64(ctx.r31.u32 + 80, ctx.r3.u64);
loc_83A8A338:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a8a360
	if (!cr6.eq) goto loc_83A8A360;
	// bl 0x830fe8a0
	ctx.lr = 0x83A8A344;
	sub_830FE8A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// ld r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 80);
	// std r4,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r4.u64);
	// bl 0x83b670b0
	ctx.lr = 0x83A8A354;
	sub_83B670B0(ctx, base);
	// ld r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// std r11,96(r31)
	PPC_STORE_U64(ctx.r31.u32 + 96, ctx.r11.u64);
loc_83A8A360:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A8A378"))) PPC_WEAK_FUNC(sub_83A8A378);
PPC_FUNC_IMPL(__imp__sub_83A8A378) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne cr6,0x83a8a398
	if (!cr6.eq) goto loc_83A8A398;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,11152
	ctx.r4.s64 = ctx.r11.s64 + 11152;
	// b 0x831ea418
	sub_831EA418(ctx, base);
	return;
loc_83A8A398:
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r11,27044(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27044);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bgt cr6,0x83a8a3b4
	if (cr6.gt) goto loc_83A8A3B4;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,11100
	ctx.r4.s64 = ctx.r11.s64 + 11100;
	// b 0x831ea3f0
	sub_831EA3F0(ctx, base);
	return;
loc_83A8A3B4:
	// b 0x83a8a148
	sub_83A8A148(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A8A3B8"))) PPC_WEAK_FUNC(sub_83A8A3B8);
PPC_FUNC_IMPL(__imp__sub_83A8A3B8) {
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
	// bl 0x830fe8a0
	ctx.lr = 0x83A8A3CC;
	sub_830FE8A0(ctx, base);
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r31,r11,27048
	ctx.r31.s64 = ctx.r11.s64 + 27048;
	// std r3,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r3.u64);
	// ld r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// bl 0x83b670b0
	ctx.lr = 0x83A8A3E4;
	sub_83B670B0(ctx, base);
	// ld r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// cmpld cr6,r11,r3
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r3.u64, xer);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// ble cr6,0x83a8a3f8
	if (!cr6.gt) goto loc_83A8A3F8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83A8A3F8:
	// ld r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// cmpld cr6,r10,r11
	cr6.compare<uint64_t>(ctx.r10.u64, ctx.r11.u64, xer);
	// bge cr6,0x83a8a40c
	if (!cr6.lt) goto loc_83A8A40C;
	// std r11,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r11.u64);
loc_83A8A40C:
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// li r8,-1
	ctx.r8.s64 = -1;
	// ld r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrldi r8,r8,32
	ctx.r8.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// std r10,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// cmpld cr6,r10,r8
	cr6.compare<uint64_t>(ctx.r10.u64, ctx.r8.u64, xer);
	// std r11,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r11.u64);
	// ble cr6,0x83a8a43c
	if (!cr6.gt) goto loc_83A8A43C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83a8a0e0
	ctx.lr = 0x83A8A43C;
	sub_83A8A0E0(ctx, base);
loc_83A8A43C:
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

__attribute__((alias("__imp__sub_83A8A450"))) PPC_WEAK_FUNC(sub_83A8A450);
PPC_FUNC_IMPL(__imp__sub_83A8A450) {
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
	// bl 0x83a83240
	ctx.lr = 0x83A8A464;
	sub_83A83240(ctx, base);
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r31,r11,27040
	ctx.r31.s64 = ctx.r11.s64 + 27040;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83a8a488
	if (cr6.eq) goto loc_83A8A488;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x83a8a4b0
	goto loc_83A8A4B0;
loc_83A8A488:
	// bl 0x83b67048
	ctx.lr = 0x83A8A48C;
	sub_83B67048(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83a8a0e0
	ctx.lr = 0x83A8A494;
	sub_83A8A0E0(ctx, base);
	// bl 0x83a76208
	ctx.lr = 0x83A8A498;
	sub_83A76208(ctx, base);
	// stw r3,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83a8a4ac
	if (cr0.eq) goto loc_83A8A4AC;
	// bl 0x82927020
	ctx.lr = 0x83A8A4A8;
	sub_82927020(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_83A8A4AC:
	// li r31,1
	ctx.r31.s64 = 1;
loc_83A8A4B0:
	// bl 0x83a83248
	ctx.lr = 0x83A8A4B4;
	sub_83A83248(ctx, base);
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(ctx.r31.s32, 1, xer);
	// bne cr6,0x83a8a4dc
	if (!cr6.eq) goto loc_83A8A4DC;
	// lis r11,-31831
	ctx.r11.s64 = -2086076416;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-23992
	ctx.r3.s64 = ctx.r11.s64 + -23992;
	// bl 0x83a76620
	ctx.lr = 0x83A8A4CC;
	sub_83A76620(ctx, base);
	// lis r11,-31831
	ctx.r11.s64 = -2086076416;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r3,r11,-23624
	ctx.r3.s64 = ctx.r11.s64 + -23624;
	// bl 0x83a76620
	ctx.lr = 0x83A8A4DC;
	sub_83A76620(ctx, base);
loc_83A8A4DC:
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

__attribute__((alias("__imp__sub_83A8A4F0"))) PPC_WEAK_FUNC(sub_83A8A4F0);
PPC_FUNC_IMPL(__imp__sub_83A8A4F0) {
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
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,11424
	ctx.r4.s64 = ctx.r11.s64 + 11424;
	// bl 0x831ea400
	ctx.lr = 0x83A8A510;
	sub_831EA400(ctx, base);
	// lis r10,-31739
	ctx.r10.s64 = -2080047104;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,27164(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27164, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A8A52C"))) PPC_WEAK_FUNC(sub_83A8A52C);
PPC_FUNC_IMPL(__imp__sub_83A8A52C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A8A530"))) PPC_WEAK_FUNC(sub_83A8A530);
PPC_FUNC_IMPL(__imp__sub_83A8A530) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A8A540"))) PPC_WEAK_FUNC(sub_83A8A540);
PPC_FUNC_IMPL(__imp__sub_83A8A540) {
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
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,11504
	ctx.r4.s64 = ctx.r11.s64 + 11504;
	// bl 0x831ea400
	ctx.lr = 0x83A8A55C;
	sub_831EA400(ctx, base);
	// lis r10,-31739
	ctx.r10.s64 = -2080047104;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,27164(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27164, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A8A578"))) PPC_WEAK_FUNC(sub_83A8A578);
PPC_FUNC_IMPL(__imp__sub_83A8A578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// lis r10,-31739
	ctx.r10.s64 = -2080047104;
	// addi r11,r11,11168
	ctx.r11.s64 = ctx.r11.s64 + 11168;
	// addi r3,r11,112
	ctx.r3.s64 = ctx.r11.s64 + 112;
	// stw r11,27152(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27152, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A8A590"))) PPC_WEAK_FUNC(sub_83A8A590);
PPC_FUNC_IMPL(__imp__sub_83A8A590) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,27164
	ctx.r31.s64 = ctx.r11.s64 + 27164;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x83a8a64c
	if (cr6.eq) goto loc_83A8A64C;
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a8a638
	if (!cr6.eq) goto loc_83A8A638;
	// addi r3,r31,-8
	ctx.r3.s64 = ctx.r31.s64 + -8;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x839fbc30
	ctx.lr = 0x83A8A5D8;
	sub_839FBC30(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x83a8a5f0
	if (!cr0.lt) goto loc_83A8A5F0;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,11792
	ctx.r4.s64 = ctx.r11.s64 + 11792;
	// b 0x83a8a620
	goto loc_83A8A620;
loc_83A8A5F0:
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r4,r11,-14724
	ctx.r4.s64 = ctx.r11.s64 + -14724;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A8A60C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x83a8a62c
	if (!cr0.lt) goto loc_83A8A62C;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,11728
	ctx.r4.s64 = ctx.r11.s64 + 11728;
loc_83A8A620:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x831ea400
	ctx.lr = 0x83A8A628;
	sub_831EA400(ctx, base);
	// b 0x83a8a64c
	goto loc_83A8A64C;
loc_83A8A62C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x83a8a64c
	goto loc_83A8A64C;
loc_83A8A638:
	// stw r3,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A8A64C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83A8A64C:
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a8a6c4
	if (cr6.eq) goto loc_83A8A6C4;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne cr6,0x83a8a6c4
	if (!cr6.eq) goto loc_83A8A6C4;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a8a6bc
	if (!cr6.eq) goto loc_83A8A6BC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r6,0
	ctx.r6.s64 = 0;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r6,r6,48000
	ctx.r6.u64 = ctx.r6.u64 | 48000;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// li r5,0
	ctx.r5.s64 = 0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A8A698;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bge 0x83a8a6b0
	if (!cr0.lt) goto loc_83A8A6B0;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,11624
	ctx.r4.s64 = ctx.r11.s64 + 11624;
	// bl 0x831ea400
	ctx.lr = 0x83A8A6B0;
	sub_831EA400(ctx, base);
loc_83A8A6B0:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_83A8A6B4:
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// b 0x83a8a6c8
	goto loc_83A8A6C8;
loc_83A8A6BC:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x83a8a6b4
	goto loc_83A8A6B4;
loc_83A8A6C4:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_83A8A6C8:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a8a6e4
	if (!cr6.eq) goto loc_83A8A6E4;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,11580
	ctx.r4.s64 = ctx.r11.s64 + 11580;
	// bl 0x831ea3f0
	ctx.lr = 0x83A8A6DC;
	sub_831EA3F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a8a70c
	goto loc_83A8A70C;
loc_83A8A6E4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A8A6F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_83A8A70C:
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

__attribute__((alias("__imp__sub_83A8A724"))) PPC_WEAK_FUNC(sub_83A8A724);
PPC_FUNC_IMPL(__imp__sub_83A8A724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A8A728"))) PPC_WEAK_FUNC(sub_83A8A728);
PPC_FUNC_IMPL(__imp__sub_83A8A728) {
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r31,r11,27168
	ctx.r31.s64 = ctx.r11.s64 + 27168;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a8a75c
	if (cr6.eq) goto loc_83A8A75C;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,11928
	ctx.r4.s64 = ctx.r11.s64 + 11928;
	// bl 0x831ea3f0
	ctx.lr = 0x83A8A75C;
	sub_831EA3F0(ctx, base);
loc_83A8A75C:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a8a788
	if (cr6.eq) goto loc_83A8A788;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A8A780;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_83A8A788:
	// lwz r3,-12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a8a7f8
	if (cr6.eq) goto loc_83A8A7F8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31767
	ctx.r10.s64 = -2081882112;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r4,-14728(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14728);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A8A7AC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a8a7dc
	if (cr6.eq) goto loc_83A8A7DC;
	// lwz r3,-12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r4,r11,-14724
	ctx.r4.s64 = ctx.r11.s64 + -14724;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A8A7D4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_83A8A7DC:
	// lwz r3,-12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A8A7F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r11.u32);
loc_83A8A7F8:
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

__attribute__((alias("__imp__sub_83A8A80C"))) PPC_WEAK_FUNC(sub_83A8A80C);
PPC_FUNC_IMPL(__imp__sub_83A8A80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A8A810"))) PPC_WEAK_FUNC(sub_83A8A810);
PPC_FUNC_IMPL(__imp__sub_83A8A810) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r3,27156(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27156);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a8a85c
	if (cr6.eq) goto loc_83A8A85C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31767
	ctx.r10.s64 = -2081882112;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r4,-14728(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14728);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A8A844;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bge 0x83a8a85c
	if (!cr0.lt) goto loc_83A8A85C;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,12012
	ctx.r4.s64 = ctx.r11.s64 + 12012;
	// bl 0x831ea400
	ctx.lr = 0x83A8A85C;
	sub_831EA400(ctx, base);
loc_83A8A85C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A8A86C"))) PPC_WEAK_FUNC(sub_83A8A86C);
PPC_FUNC_IMPL(__imp__sub_83A8A86C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A8A870"))) PPC_WEAK_FUNC(sub_83A8A870);
PPC_FUNC_IMPL(__imp__sub_83A8A870) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a8a964
	if (cr6.eq) goto loc_83A8A964;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lis r10,-31767
	ctx.r10.s64 = -2081882112;
	// addi r31,r11,27192
	ctx.r31.s64 = ctx.r11.s64 + 27192;
	// lwz r4,-14728(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14728);
	// lwz r3,-36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A8A8B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A8A8D4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A8A8E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x83a8a928
	goto loc_83A8A928;
loc_83A8A8EC:
	// lwz r11,-20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a8a934
	if (cr6.eq) goto loc_83A8A934;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A8A914;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a8a934
	if (cr6.eq) goto loc_83A8A934;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x83a75e98
	ctx.lr = 0x83A8A928;
	sub_83A75E98(ctx, base);
loc_83A8A928:
	// lwz r11,-36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a8a8ec
	if (!cr6.eq) goto loc_83A8A8EC;
loc_83A8A934:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x83a75e98
	ctx.lr = 0x83A8A93C;
	sub_83A75E98(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A8A950;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_83A8A964:
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

__attribute__((alias("__imp__sub_83A8A97C"))) PPC_WEAK_FUNC(sub_83A8A97C);
PPC_FUNC_IMPL(__imp__sub_83A8A97C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A8A980"))) PPC_WEAK_FUNC(sub_83A8A980);
PPC_FUNC_IMPL(__imp__sub_83A8A980) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,62(r3)
	PPC_STORE_U8(ctx.r3.u32 + 62, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A8A98C"))) PPC_WEAK_FUNC(sub_83A8A98C);
PPC_FUNC_IMPL(__imp__sub_83A8A98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A8A990"))) PPC_WEAK_FUNC(sub_83A8A990);
PPC_FUNC_IMPL(__imp__sub_83A8A990) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A8A998;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A8A9C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// blt cr6,0x83a8a9dc
	if (cr6.lt) goto loc_83A8A9DC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a8aad0
	goto loc_83A8AAD0;
loc_83A8A9DC:
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// twllei r11,0
	// rlwinm r5,r29,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r8,56(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// divwu r7,r9,r11
	ctx.r7.u32 = PPCDivide(ctx.r9.u32, ctx.r11.u32);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r30,44(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mullw r11,r7,r11
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// rlwinm r10,r8,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// subf r8,r8,r30
	ctx.r8.s64 = ctx.r30.s64 - ctx.r8.s64;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r29,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x83ac19c8
	ctx.lr = 0x83A8AA24;
	sub_83AC19C8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mullw r11,r11,r3
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
	// lbz r9,62(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 62);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// bne 0x83a8aa58
	if (!cr0.eq) goto loc_83A8AA58;
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x83a8aacc
	if (cr6.lt) goto loc_83A8AACC;
loc_83A8AA58:
	// li r5,36
	ctx.r5.s64 = 36;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831cdcf0
	ctx.lr = 0x83A8AA68;
	sub_831CDCF0(ctx, base);
	// addi r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 + 28;
	// lwzx r10,r29,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A8AA9C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bge 0x83a8aab8
	if (!cr0.lt) goto loc_83A8AAB8;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,12080
	ctx.r4.s64 = ctx.r11.s64 + 12080;
	// bl 0x831ea400
	ctx.lr = 0x83A8AAB4;
	sub_831EA400(ctx, base);
	// b 0x83a8aacc
	goto loc_83A8AACC;
loc_83A8AAB8:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_83A8AACC:
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
loc_83A8AAD0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A8AAD8"))) PPC_WEAK_FUNC(sub_83A8AAD8);
PPC_FUNC_IMPL(__imp__sub_83A8AAD8) {
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
	// lbz r11,61(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 61);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpw cr6,r11,r4
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, xer);
	// beq cr6,0x83a8ab44
	if (cr6.eq) goto loc_83A8AB44;
	// lbz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 60);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83a8ab40
	if (cr0.eq) goto loc_83A8AB40;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,-14728(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14728);
	// bne cr6,0x83a8ab34
	if (!cr6.eq) goto loc_83A8AB34;
	// lwz r11,76(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// b 0x83a8ab38
	goto loc_83A8AB38;
loc_83A8AB34:
	// lwz r11,80(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
loc_83A8AB38:
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A8AB40;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83A8AB40:
	// stb r30,61(r31)
	PPC_STORE_U8(ctx.r31.u32 + 61, ctx.r30.u8);
loc_83A8AB44:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A8AB5C"))) PPC_WEAK_FUNC(sub_83A8AB5C);
PPC_FUNC_IMPL(__imp__sub_83A8AB5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A8AB60"))) PPC_WEAK_FUNC(sub_83A8AB60);
PPC_FUNC_IMPL(__imp__sub_83A8AB60) {
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
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lwa r11,8(r3)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r3.u32 + 8));
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,-31767
	ctx.r9.s64 = -2081882112;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// lwz r5,-14728(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14728);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// fdivs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// bctrl 
	ctx.lr = 0x83A8ABC4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_83A8ABE4"))) PPC_WEAK_FUNC(sub_83A8ABE4);
PPC_FUNC_IMPL(__imp__sub_83A8ABE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A8ABE8"))) PPC_WEAK_FUNC(sub_83A8ABE8);
PPC_FUNC_IMPL(__imp__sub_83A8ABE8) {
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
	ctx.lr = 0x83A8ABF0;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f31,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83A8AC24;
	sub_831CDCF0(ctx, base);
	// li r5,224
	ctx.r5.s64 = 224;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x831cdcf0
	ctx.lr = 0x83A8AC34;
	sub_831CDCF0(ctx, base);
	// li r5,252
	ctx.r5.s64 = 252;
	// li r4,0
	ctx.r4.s64 = 0;
	// stfs f31,336(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 336, temp.u32);
	// addi r3,r1,340
	ctx.r3.s64 = ctx.r1.s64 + 340;
	// bl 0x831cdcf0
	ctx.lr = 0x83A8AC48;
	sub_831CDCF0(ctx, base);
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpw cr6,r30,r5
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r5.s32, xer);
	// blt cr6,0x83a8ac58
	if (cr6.lt) goto loc_83A8AC58;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
loc_83A8AC58:
	// cmpwi cr6,r29,8
	cr6.compare<int32_t>(ctx.r29.s32, 8, xer);
	// blt cr6,0x83a8ac64
	if (cr6.lt) goto loc_83A8AC64;
	// li r29,8
	ctx.r29.s64 = 8;
loc_83A8AC64:
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble cr6,0x83a8acf0
	if (!cr6.gt) goto loc_83A8ACF0;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
loc_83A8AC7C:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble cr6,0x83a8acb0
	if (!cr6.gt) goto loc_83A8ACB0;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_83A8AC98:
	// lfsx f0,r8,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r9,r10
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, temp.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x83a8ac98
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A8AC98;
	// cmpwi cr6,r29,8
	cr6.compare<int32_t>(ctx.r29.s32, 8, xer);
	// bge cr6,0x83a8acd8
	if (!cr6.lt) goto loc_83A8ACD8;
loc_83A8ACB0:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r11,r11,8
	xer.ca = ctx.r11.u32 <= 8;
	ctx.r11.s64 = 8 - ctx.r11.s64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a8acd8
	if (cr6.eq) goto loc_83A8ACD8;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_83A8ACD0:
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83a8acd0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A8ACD0;
loc_83A8ACD8:
	// addic. r6,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x83a8ac7c
	if (!cr0.eq) goto loc_83A8AC7C;
	// cmpwi cr6,r30,8
	cr6.compare<int32_t>(ctx.r30.s32, 8, xer);
	// bge cr6,0x83a8ad1c
	if (!cr6.lt) goto loc_83A8AD1C;
loc_83A8ACF0:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r7,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// subfic r9,r7,8
	xer.ca = ctx.r7.u32 <= 8;
	ctx.r9.s64 = 8 - ctx.r7.s64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm. r11,r9,3,2,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0x3FFFFFF8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// li r9,0
	ctx.r9.s64 = 0;
	// beq 0x83a8ad1c
	if (cr0.eq) goto loc_83A8AD1C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_83A8AD14:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83a8ad14
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A8AD14;
loc_83A8AD1C:
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r4,r11,27172
	ctx.r4.s64 = ctx.r11.s64 + 27172;
	// lwz r6,16(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmpwi cr6,r6,8
	cr6.compare<int32_t>(ctx.r6.s32, 8, xer);
	// bne cr6,0x83a8ad64
	if (!cr6.eq) goto loc_83A8AD64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble cr6,0x83a8ae0c
	if (!cr6.gt) goto loc_83A8AE0C;
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
loc_83A8AD40:
	// lfs f0,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// stfs f13,20(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f11,24(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stfsu f12,32(r11)
	ea = 32 + ctx.r11.u32;
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83a8ad40
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A8AD40;
loc_83A8AD64:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// cmpwi cr6,r6,8
	cr6.compare<int32_t>(ctx.r6.s32, 8, xer);
	// lfs f0,10700(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10700);
	ctx.f0.f64 = double(temp.f32);
	// bge cr6,0x83a8adb0
	if (!cr6.lt) goto loc_83A8ADB0;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble cr6,0x83a8adb0
	if (!cr6.gt) goto loc_83A8ADB0;
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
loc_83A8AD84:
	// lfs f12,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f13,f12,f0,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// lfs f11,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f12,f12,f0,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f13,20(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f12,24(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f31,28(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stfsu f31,32(r11)
	ea = 32 + ctx.r11.u32;
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83a8ad84
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A8AD84;
loc_83A8ADB0:
	// cmpwi cr6,r6,6
	cr6.compare<int32_t>(ctx.r6.s32, 6, xer);
	// bge cr6,0x83a8ae0c
	if (!cr6.lt) goto loc_83A8AE0C;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble cr6,0x83a8ae0c
	if (!cr6.gt) goto loc_83A8AE0C;
	// addi r11,r1,68
	ctx.r11.s64 = ctx.r1.s64 + 68;
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
loc_83A8ADC8:
	// lfs f13,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f12,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// stfs f31,20(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f31,24(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f31,28(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// fmadds f12,f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmadds f13,f11,f0,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fadds f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// stfs f12,12(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// fadds f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// stfs f13,16(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfsu f31,32(r11)
	ea = 32 + ctx.r11.u32;
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83a8adc8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A8ADC8;
loc_83A8AE0C:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x83a8ae60
	if (!cr6.gt) goto loc_83A8AE60;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
loc_83A8AE1C:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// ble cr6,0x83a8ae50
	if (!cr6.gt) goto loc_83A8AE50;
	// addi r10,r7,-4
	ctx.r10.s64 = ctx.r7.s64 + -4;
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
loc_83A8AE30:
	// mullw r8,r5,r11
	ctx.r8.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// lfsu f0,4(r10)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r10.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stfsx f0,r8,r3
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, temp.u32);
	// bdnz 0x83a8ae30
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A8AE30;
loc_83A8AE50:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r7,r7,32
	ctx.r7.s64 = ctx.r7.s64 + 32;
	// cmpw cr6,r9,r5
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, xer);
	// blt cr6,0x83a8ae1c
	if (cr6.lt) goto loc_83A8AE1C;
loc_83A8AE60:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r7,r1,336
	ctx.r7.s64 = ctx.r1.s64 + 336;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,-14728(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14728);
	// lwz r11,64(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A8AE84;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A8AE90"))) PPC_WEAK_FUNC(sub_83A8AE90);
PPC_FUNC_IMPL(__imp__sub_83A8AE90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83a8aecc
	if (cr6.eq) goto loc_83A8AECC;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x83a8aec4
	if (cr6.eq) goto loc_83A8AEC4;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// beq cr6,0x83a8aebc
	if (cr6.eq) goto loc_83A8AEBC;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// bne cr6,0x83a8aec4
	if (!cr6.eq) goto loc_83A8AEC4;
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_83A8AEBC:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_83A8AEC4:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83A8AECC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A8AED4"))) PPC_WEAK_FUNC(sub_83A8AED4);
PPC_FUNC_IMPL(__imp__sub_83A8AED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A8AED8"))) PPC_WEAK_FUNC(sub_83A8AED8);
PPC_FUNC_IMPL(__imp__sub_83A8AED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// stw r3,27160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 27160, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A8AEE4"))) PPC_WEAK_FUNC(sub_83A8AEE4);
PPC_FUNC_IMPL(__imp__sub_83A8AEE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A8AEE8"))) PPC_WEAK_FUNC(sub_83A8AEE8);
PPC_FUNC_IMPL(__imp__sub_83A8AEE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// stw r3,27180(r11)
	PPC_STORE_U32(ctx.r11.u32 + 27180, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A8AEF4"))) PPC_WEAK_FUNC(sub_83A8AEF4);
PPC_FUNC_IMPL(__imp__sub_83A8AEF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A8AEF8"))) PPC_WEAK_FUNC(sub_83A8AEF8);
PPC_FUNC_IMPL(__imp__sub_83A8AEF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r11,r11,27172
	ctx.r11.s64 = ctx.r11.s64 + 27172;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A8AF14"))) PPC_WEAK_FUNC(sub_83A8AF14);
PPC_FUNC_IMPL(__imp__sub_83A8AF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A8AF18"))) PPC_WEAK_FUNC(sub_83A8AF18);
PPC_FUNC_IMPL(__imp__sub_83A8AF18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x83a8af30
	if (!cr6.eq) goto loc_83A8AF30;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,12172
	ctx.r4.s64 = ctx.r11.s64 + 12172;
	// b 0x831ea3f0
	sub_831EA3F0(ctx, base);
	return;
loc_83A8AF30:
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// stw r3,27184(r11)
	PPC_STORE_U32(ctx.r11.u32 + 27184, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A8AF3C"))) PPC_WEAK_FUNC(sub_83A8AF3C);
PPC_FUNC_IMPL(__imp__sub_83A8AF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A8AF40"))) PPC_WEAK_FUNC(sub_83A8AF40);
PPC_FUNC_IMPL(__imp__sub_83A8AF40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,255
	ctx.r11.s64 = 16711680;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, xer);
	// blt cr6,0x83a8af54
	if (cr6.lt) goto loc_83A8AF54;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_83A8AF54:
	// subfic r11,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// rlwinm r11,r3,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// lis r10,-31739
	ctx.r10.s64 = -2080047104;
	// addme r11,r11
	temp.u8 = (ctx.r11.u32 != 0) | (xer.ca != 0);
	ctx.r11.s64 = ctx.r11.s64 + xer.ca - 1;
	xer.ca = temp.u8;
	// and r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 & ctx.r3.u64;
	// stw r11,27196(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27196, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A8AF70"))) PPC_WEAK_FUNC(sub_83A8AF70);
PPC_FUNC_IMPL(__imp__sub_83A8AF70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r8,6
	cr6.compare<int32_t>(ctx.r8.s32, 6, xer);
	// ble cr6,0x83a8af84
	if (!cr6.gt) goto loc_83A8AF84;
	// li r8,8
	ctx.r8.s64 = 8;
	// b 0x83a8af90
	goto loc_83A8AF90;
loc_83A8AF84:
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// ble cr6,0x83a8af90
	if (!cr6.gt) goto loc_83A8AF90;
	// li r8,6
	ctx.r8.s64 = 6;
loc_83A8AF90:
	// lis r10,-31739
	ctx.r10.s64 = -2080047104;
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// lwz r10,27196(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27196);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83a8afc0
	if (!cr6.gt) goto loc_83A8AFC0;
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
	// li r10,3
	ctx.r10.s64 = 3;
	// divwu r11,r11,r10
	ctx.r11.u32 = PPCDivide(ctx.r11.u32, ctx.r10.u32);
	// b 0x83a8b000
	goto loc_83A8B000;
loc_83A8AFC0:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// twllei r11,0
	// twllei r11,0
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// divw r7,r10,r11
	ctx.r7.s32 = PPCDivide(ctx.r10.s32, ctx.r11.s32);
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// mullw r7,r7,r11
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// rotlwi r10,r7,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// andc r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	// andc r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 & ~ctx.r10.u64;
	// divw r11,r7,r11
	ctx.r11.s32 = PPCDivide(ctx.r7.s32, ctx.r11.s32);
	// twlgei r9,-1
	// twlgei r10,-1
loc_83A8B000:
	// mulli r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 * 3;
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// addi r11,r11,18
	ctx.r11.s64 = ctx.r11.s64 + 18;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A8B014"))) PPC_WEAK_FUNC(sub_83A8B014);
PPC_FUNC_IMPL(__imp__sub_83A8B014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A8B018"))) PPC_WEAK_FUNC(sub_83A8B018);
PPC_FUNC_IMPL(__imp__sub_83A8B018) {
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
	ctx.lr = 0x83A8B020;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x83a8af70
	ctx.lr = 0x83A8B034;
	sub_83A8AF70(ctx, base);
	// cmpw cr6,r5,r3
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r3.s32, xer);
	// bge cr6,0x83a8b058
	if (!cr6.lt) goto loc_83A8B058;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,12440
	ctx.r4.s64 = ctx.r11.s64 + 12440;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A8B050;
	sub_831EA418(ctx, base);
loc_83A8B050:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a8b334
	goto loc_83A8B334;
loc_83A8B058:
	// lwz r29,4(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmpwi cr6,r29,6
	cr6.compare<int32_t>(ctx.r29.s32, 6, xer);
	// ble cr6,0x83a8b0b8
	if (!cr6.gt) goto loc_83A8B0B8;
	// li r29,8
	ctx.r29.s64 = 8;
loc_83A8B068:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83A8B078;
	sub_831CDCF0(ctx, base);
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r10,r31,7
	ctx.r10.s64 = ctx.r31.s64 + 7;
	// lfs f0,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// rlwinm r30,r10,0,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r28,r11,27196
	ctx.r28.s64 = ctx.r11.s64 + 27196;
	// li r24,3
	ctx.r24.s64 = 3;
	// addi r8,r30,64
	ctx.r8.s64 = ctx.r30.s64 + 64;
	// lwz r10,27196(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27196);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83a8b0e8
	if (!cr6.gt) goto loc_83A8B0E8;
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
	// divwu r11,r11,r24
	ctx.r11.u32 = PPCDivide(ctx.r11.u32, ctx.r24.u32);
	// b 0x83a8b128
	goto loc_83A8B128;
loc_83A8B0B8:
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// ble cr6,0x83a8b0c4
	if (!cr6.gt) goto loc_83A8B0C4;
	// li r29,6
	ctx.r29.s64 = 6;
loc_83A8B0C4:
	// cmpwi cr6,r29,8
	cr6.compare<int32_t>(ctx.r29.s32, 8, xer);
	// ble cr6,0x83a8b068
	if (!cr6.gt) goto loc_83A8B068;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r11,12336
	ctx.r4.s64 = ctx.r11.s64 + 12336;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea410
	ctx.lr = 0x83A8B0E4;
	sub_831EA410(ctx, base);
	// b 0x83a8b050
	goto loc_83A8B050;
loc_83A8B0E8:
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// twllei r11,0
	// twllei r11,0
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// divw r9,r10,r11
	ctx.r9.s32 = PPCDivide(ctx.r10.s32, ctx.r11.s32);
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// mullw r7,r9,r11
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// rotlwi r9,r7,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// andc r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 & ~ctx.r10.u64;
	// andc r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	// divw r11,r7,r11
	ctx.r11.s32 = PPCDivide(ctx.r7.s32, ctx.r11.s32);
	// twlgei r10,-1
	// twlgei r9,-1
loc_83A8B128:
	// mulli r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 * 3;
	// mtctr r24
	ctr.u64 = ctx.r24.u64;
	// mullw r10,r11,r29
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// addi r10,r30,28
	ctx.r10.s64 = ctx.r30.s64 + 28;
	// divwu r27,r9,r24
	ctx.r27.u32 = PPCDivide(ctx.r9.u32, ctx.r24.u32);
loc_83A8B144:
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// add r8,r27,r8
	ctx.r8.u64 = ctx.r27.u64 + ctx.r8.u64;
	// bdnz 0x83a8b144
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A8B144;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x831cdcf0
	ctx.lr = 0x83A8B160;
	sub_831CDCF0(ctx, base);
	// lis r10,0
	ctx.r10.s64 = 0;
	// rlwinm r11,r29,2,16,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFC;
	// sth r29,114(r1)
	PPC_STORE_U16(ctx.r1.u32 + 114, ctx.r29.u16);
	// ori r31,r10,48000
	ctx.r31.u64 = ctx.r10.u64 | 48000;
	// sth r11,124(r1)
	PPC_STORE_U16(ctx.r1.u32 + 124, ctx.r11.u16);
	// li r10,32
	ctx.r10.s64 = 32;
	// mullw r11,r11,r31
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// sth r10,126(r1)
	PPC_STORE_U16(ctx.r1.u32 + 126, ctx.r10.u16);
	// sth r10,130(r1)
	PPC_STORE_U16(ctx.r1.u32 + 130, ctx.r10.u16);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// lis r9,-32205
	ctx.r9.s64 = -2110586880;
	// li r11,22
	ctx.r11.s64 = 22;
	// li r10,-2
	ctx.r10.s64 = -2;
	// addi r4,r9,12316
	ctx.r4.s64 = ctx.r9.s64 + 12316;
	// sth r11,128(r1)
	PPC_STORE_U16(ctx.r1.u32 + 128, ctx.r11.u16);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// sth r10,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, ctx.r10.u16);
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x831ce980
	ctx.lr = 0x83A8B1B0;
	sub_831CE980(ctx, base);
	// lwa r8,8(r26)
	ctx.r8.s64 = int32_t(PPC_LOAD_U32(ctx.r26.u32 + 8));
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r10,-32207
	ctx.r10.s64 = -2110717952;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,-5704(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -5704);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,-24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -24);
	// lis r7,-32222
	ctx.r7.s64 = -2111700992;
	// lwz r9,16(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// li r25,0
	ctx.r25.s64 = 0;
	// li r10,16
	ctx.r10.s64 = 16;
	// subfic r9,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r9.s64;
	// stw r25,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// subfe r11,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f31,-26260(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -26260);
	ctx.f31.f64 = double(temp.f32);
	// and r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 & ctx.r10.u64;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fcmpu cr6,f1,f31
	cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bgt cr6,0x83a8b21c
	if (cr6.gt) goto loc_83A8B21C;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
loc_83A8B21C:
	// lwz r3,-40(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -40);
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r11,-14720
	ctx.r8.s64 = ctx.r11.s64 + -14720;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A8B248;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bge 0x83a8b270
	if (!cr0.lt) goto loc_83A8B270;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,12248
	ctx.r4.s64 = ctx.r11.s64 + 12248;
	// bl 0x831ea400
	ctx.lr = 0x83A8B260;
	sub_831EA400(ctx, base);
	// stw r25,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r25.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a8a870
	ctx.lr = 0x83A8B26C;
	sub_83A8A870(ctx, base);
	// b 0x83a8b050
	goto loc_83A8B050;
loc_83A8B270:
	// rotlwi r10,r27,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r27.u32, 1);
	// lwz r11,-4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4);
	// divw r9,r27,r29
	ctx.r9.s32 = PPCDivide(ctx.r27.s32, ctx.r29.s32);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r27,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r27.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// andc r10,r29,r10
	ctx.r10.u64 = ctx.r29.u64 & ~ctx.r10.u64;
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r11,-4(r28)
	PPC_STORE_U32(ctx.r28.u32 + -4, ctx.r11.u32);
	// twllei r29,0
	// stw r24,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r24.u32);
	// twlgei r10,-1
	// stw r9,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r9.u32);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble cr6,0x83a8b31c
	if (!cr6.gt) goto loc_83A8B31C;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// addi r6,r10,-4
	ctx.r6.s64 = ctx.r10.s64 + -4;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
loc_83A8B2D0:
	// li r9,8
	ctx.r9.s64 = 8;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83A8B2E0:
	// add r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bne cr6,0x83a8b2fc
	if (!cr6.eq) goto loc_83A8B2FC;
	// stfsx f31,r9,r5
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r5.u32, temp.u32);
	// b 0x83a8b300
	goto loc_83A8B300;
loc_83A8B2FC:
	// stfsx f0,r9,r5
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r5.u32, temp.u32);
loc_83A8B300:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x83a8b2e0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A8B2E0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r7,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r6.u32 = ea;
	// addi r7,r7,32
	ctx.r7.s64 = ctx.r7.s64 + 32;
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, xer);
	// blt cr6,0x83a8b2d0
	if (cr6.lt) goto loc_83A8B2D0;
loc_83A8B31C:
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a8abe8
	ctx.lr = 0x83A8B330;
	sub_83A8ABE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_83A8B334:
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A8B340"))) PPC_WEAK_FUNC(sub_83A8B340);
PPC_FUNC_IMPL(__imp__sub_83A8B340) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lbz r11,61(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 61);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x83a8b380
	if (!cr0.eq) goto loc_83A8B380;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,-14728(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14728);
	// lwz r11,76(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A8B380;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83A8B380:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r11.u8);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83A8B3A8"))) PPC_WEAK_FUNC(sub_83A8B3A8);
PPC_FUNC_IMPL(__imp__sub_83A8B3A8) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A8B3D8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A8B3EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stb r11,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r11.u8);
	// stb r11,62(r31)
	PPC_STORE_U8(ctx.r31.u32 + 62, ctx.r11.u8);
	// stb r11,63(r31)
	PPC_STORE_U8(ctx.r31.u32 + 63, ctx.r11.u8);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83A8B420"))) PPC_WEAK_FUNC(sub_83A8B420);
PPC_FUNC_IMPL(__imp__sub_83A8B420) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A8B428;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r5,20(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83a8b46c
	if (cr6.eq) goto loc_83A8B46C;
	// addi r30,r4,24
	ctx.r30.s64 = ctx.r4.s64 + 24;
loc_83A8B444:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a8a990
	ctx.lr = 0x83A8B450;
	sub_83A8A990(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x83a8b480
	if (cr0.eq) goto loc_83A8B480;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a7a2f0
	ctx.lr = 0x83A8B460;
	sub_83A7A2F0(ctx, base);
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x83a8b444
	if (!cr6.eq) goto loc_83A8B444;
loc_83A8B46C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lbz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83a7a0d8
	ctx.lr = 0x83A8B47C;
	sub_83A7A0D8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_83A8B480:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A8B48C"))) PPC_WEAK_FUNC(sub_83A8B48C);
PPC_FUNC_IMPL(__imp__sub_83A8B48C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A8B490"))) PPC_WEAK_FUNC(sub_83A8B490);
PPC_FUNC_IMPL(__imp__sub_83A8B490) {
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
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a8b5a4
	if (!cr6.eq) goto loc_83A8B5A4;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r11,27164(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27164);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a8b4d4
	if (cr6.eq) goto loc_83A8B4D4;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A8B4D4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83A8B4D4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A8B4F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,63(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 63);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x83a8b530
	if (cr0.eq) goto loc_83A8B530;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83a8b530
	if (!cr6.eq) goto loc_83A8B530;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stb r11,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r11.u8);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// stb r11,63(r31)
	PPC_STORE_U8(ctx.r31.u32 + 63, ctx.r11.u8);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// b 0x83a8b5a0
	goto loc_83A8B5A0;
loc_83A8B530:
	// lbz r10,62(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 62);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x83a8b5a4
	if (cr0.eq) goto loc_83A8B5A4;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a8b5a4
	if (!cr6.eq) goto loc_83A8B5A4;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83a8b564
	if (!cr6.gt) goto loc_83A8B564;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a8a990
	ctx.lr = 0x83A8B560;
	sub_83A8A990(ctx, base);
	// b 0x83a8b5a4
	goto loc_83A8B5A4;
loc_83A8B564:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A8B578;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bge 0x83a8b594
	if (!cr0.lt) goto loc_83A8B594;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,12456
	ctx.r4.s64 = ctx.r11.s64 + 12456;
	// bl 0x831ea400
	ctx.lr = 0x83A8B590;
	sub_831EA400(ctx, base);
	// b 0x83a8b5a4
	goto loc_83A8B5A4;
loc_83A8B594:
	// li r10,1
	ctx.r10.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r10,63(r31)
	PPC_STORE_U8(ctx.r31.u32 + 63, ctx.r10.u8);
loc_83A8B5A0:
	// stb r11,62(r31)
	PPC_STORE_U8(ctx.r31.u32 + 62, ctx.r11.u8);
loc_83A8B5A4:
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

__attribute__((alias("__imp__sub_83A8B5B8"))) PPC_WEAK_FUNC(sub_83A8B5B8);
PPC_FUNC_IMPL(__imp__sub_83A8B5B8) {
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
	// bl 0x83a8b3a8
	ctx.lr = 0x83A8B5D8;
	sub_83A8B3A8(ctx, base);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_83A8B5F8"))) PPC_WEAK_FUNC(sub_83A8B5F8);
PPC_FUNC_IMPL(__imp__sub_83A8B5F8) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A8B630;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A8B644;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a8b420
	ctx.lr = 0x83A8B650;
	sub_83A8B420(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A8B668"))) PPC_WEAK_FUNC(sub_83A8B668);
PPC_FUNC_IMPL(__imp__sub_83A8B668) {
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
	// bl 0x83a8b490
	ctx.lr = 0x83A8B680;
	sub_83A8B490(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
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

__attribute__((alias("__imp__sub_83A8B6A4"))) PPC_WEAK_FUNC(sub_83A8B6A4);
PPC_FUNC_IMPL(__imp__sub_83A8B6A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A8B6A8"))) PPC_WEAK_FUNC(sub_83A8B6A8);
PPC_FUNC_IMPL(__imp__sub_83A8B6A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A8B6B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x83a8b490
	ctx.lr = 0x83A8B6C4;
	sub_83A8B490(ctx, base);
	// lwa r11,48(r31)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 48));
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mulld r30,r10,r11
	ctx.r30.s64 = ctx.r10.s64 * ctx.r11.s64;
	// cmpdi cr6,r30,0
	cr6.compare<int64_t>(ctx.r30.s64, 0, xer);
	// bge cr6,0x83a8b6dc
	if (!cr6.lt) goto loc_83A8B6DC;
	// li r30,0
	ctx.r30.s64 = 0;
loc_83A8B6DC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A8B6F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// subf r11,r30,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r30.s64;
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(ctx.r11.s64, 0, xer);
	// ble cr6,0x83a8b718
	if (!cr6.gt) goto loc_83A8B718;
	// lwa r9,48(r31)
	ctx.r9.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 48));
	// cmpd cr6,r11,r9
	cr6.compare<int64_t>(ctx.r11.s64, ctx.r9.s64, xer);
	// bgt cr6,0x83a8b718
	if (cr6.gt) goto loc_83A8B718;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
loc_83A8B718:
	// std r30,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r30.u64);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A8B72C"))) PPC_WEAK_FUNC(sub_83A8B72C);
PPC_FUNC_IMPL(__imp__sub_83A8B72C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A8B730"))) PPC_WEAK_FUNC(sub_83A8B730);
PPC_FUNC_IMPL(__imp__sub_83A8B730) {
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
	// bl 0x83a8b490
	ctx.lr = 0x83A8B740;
	sub_83A8B490(ctx, base);
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

__attribute__((alias("__imp__sub_83A8B754"))) PPC_WEAK_FUNC(sub_83A8B754);
PPC_FUNC_IMPL(__imp__sub_83A8B754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A8B758"))) PPC_WEAK_FUNC(sub_83A8B758);
PPC_FUNC_IMPL(__imp__sub_83A8B758) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83a82cd8
	ctx.lr = 0x83A8B770;
	sub_83A82CD8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a8b78c
	if (!cr0.eq) goto loc_83A8B78C;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-6
	ctx.r5.s64 = -6;
	// addi r4,r11,12688
	ctx.r4.s64 = ctx.r11.s64 + 12688;
	// bl 0x831ea418
	ctx.lr = 0x83A8B788;
	sub_831EA418(ctx, base);
	// b 0x83a8b7b8
	goto loc_83A8B7B8;
loc_83A8B78C:
	// bl 0x83a76208
	ctx.lr = 0x83A8B790;
	sub_83A76208(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83a8b7b0
	if (!cr0.eq) goto loc_83A8B7B0;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// addi r5,r11,12612
	ctx.r5.s64 = ctx.r11.s64 + 12612;
	// addi r4,r10,12672
	ctx.r4.s64 = ctx.r10.s64 + 12672;
	// bl 0x831ea400
	ctx.lr = 0x83A8B7AC;
	sub_831EA400(ctx, base);
	// b 0x83a8b7b8
	goto loc_83A8B7B8;
loc_83A8B7B0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83a769e8
	ctx.lr = 0x83A8B7B8;
	sub_83A769E8(ctx, base);
loc_83A8B7B8:
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

__attribute__((alias("__imp__sub_83A8B7CC"))) PPC_WEAK_FUNC(sub_83A8B7CC);
PPC_FUNC_IMPL(__imp__sub_83A8B7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A8B7D0"))) PPC_WEAK_FUNC(sub_83A8B7D0);
PPC_FUNC_IMPL(__imp__sub_83A8B7D0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83a82cd8
	ctx.lr = 0x83A8B7E8;
	sub_83A82CD8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a8b804
	if (!cr0.eq) goto loc_83A8B804;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-6
	ctx.r5.s64 = -6;
	// addi r4,r11,12716
	ctx.r4.s64 = ctx.r11.s64 + 12716;
	// bl 0x831ea418
	ctx.lr = 0x83A8B800;
	sub_831EA418(ctx, base);
	// b 0x83a8b830
	goto loc_83A8B830;
loc_83A8B804:
	// bl 0x83a76208
	ctx.lr = 0x83A8B808;
	sub_83A76208(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83a8b828
	if (!cr0.eq) goto loc_83A8B828;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// addi r5,r11,12612
	ctx.r5.s64 = ctx.r11.s64 + 12612;
	// addi r4,r10,12700
	ctx.r4.s64 = ctx.r10.s64 + 12700;
	// bl 0x831ea400
	ctx.lr = 0x83A8B824;
	sub_831EA400(ctx, base);
	// b 0x83a8b830
	goto loc_83A8B830;
loc_83A8B828:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83a77b60
	ctx.lr = 0x83A8B830;
	sub_83A77B60(ctx, base);
loc_83A8B830:
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

__attribute__((alias("__imp__sub_83A8B844"))) PPC_WEAK_FUNC(sub_83A8B844);
PPC_FUNC_IMPL(__imp__sub_83A8B844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A8B848"))) PPC_WEAK_FUNC(sub_83A8B848);
PPC_FUNC_IMPL(__imp__sub_83A8B848) {
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
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x83a8b888
	if (cr6.lt) goto loc_83A8B888;
	// beq cr6,0x83a8b878
	if (cr6.eq) goto loc_83A8B878;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,12728
	ctx.r4.s64 = ctx.r11.s64 + 12728;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A8B874;
	sub_831EA418(ctx, base);
	// b 0x83a8b898
	goto loc_83A8B898;
loc_83A8B878:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x83a79600
	ctx.lr = 0x83A8B880;
	sub_83A79600(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83a8b894
	goto loc_83A8B894;
loc_83A8B888:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83a79600
	ctx.lr = 0x83A8B890;
	sub_83A79600(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_83A8B894:
	// bl 0x83ac1bf8
	ctx.lr = 0x83A8B898;
	sub_83AC1BF8(ctx, base);
loc_83A8B898:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A8B8A8"))) PPC_WEAK_FUNC(sub_83A8B8A8);
PPC_FUNC_IMPL(__imp__sub_83A8B8A8) {
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r31,r11,27200
	ctx.r31.s64 = ctx.r11.s64 + 27200;
	// lwz r11,27200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27200);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a8b8e4
	if (cr6.eq) goto loc_83A8B8E4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A8B8E0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x83a8b8e8
	goto loc_83A8B8E8;
loc_83A8B8E4:
	// bl 0x832d20c8
	ctx.lr = 0x83A8B8E8;
	sub_832D20C8(ctx, base);
loc_83A8B8E8:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a8b8fc
	if (cr6.eq) goto loc_83A8B8FC;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_83A8B8FC:
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

__attribute__((alias("__imp__sub_83A8B910"))) PPC_WEAK_FUNC(sub_83A8B910);
PPC_FUNC_IMPL(__imp__sub_83A8B910) {
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r31,r11,27204
	ctx.r31.s64 = ctx.r11.s64 + 27204;
	// lwz r11,27204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27204);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a8b94c
	if (cr6.eq) goto loc_83A8B94C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A8B948;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x83a8b950
	goto loc_83A8B950;
loc_83A8B94C:
	// bl 0x832d21c0
	ctx.lr = 0x83A8B950;
	sub_832D21C0(ctx, base);
loc_83A8B950:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
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

__attribute__((alias("__imp__sub_83A8B970"))) PPC_WEAK_FUNC(sub_83A8B970);
PPC_FUNC_IMPL(__imp__sub_83A8B970) {
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
	// stwu r1,-2512(r1)
	ea = -2512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a90510
	ctx.lr = 0x83A8B994;
	sub_83A90510(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a8b9a4
	if (!cr0.eq) goto loc_83A8B9A4;
loc_83A8B99C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83a8b9cc
	goto loc_83A8B9CC;
loc_83A8B9A4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a8ca20
	ctx.lr = 0x83A8B9AC;
	sub_83A8CA20(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a8b99c
	if (cr0.eq) goto loc_83A8B99C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83aa1398
	ctx.lr = 0x83A8B9BC;
	sub_83AA1398(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83a8ca20
	ctx.lr = 0x83A8B9C8;
	sub_83A8CA20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83A8B9CC:
	// addi r1,r1,2512
	ctx.r1.s64 = ctx.r1.s64 + 2512;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A8B9E0"))) PPC_WEAK_FUNC(sub_83A8B9E0);
PPC_FUNC_IMPL(__imp__sub_83A8B9E0) {
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
	// stwu r1,-2512(r1)
	ea = -2512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a90510
	ctx.lr = 0x83A8BA04;
	sub_83A90510(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a8ba14
	if (!cr0.eq) goto loc_83A8BA14;
loc_83A8BA0C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a8ba3c
	goto loc_83A8BA3C;
loc_83A8BA14:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a8ca20
	ctx.lr = 0x83A8BA1C;
	sub_83A8CA20(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a8ba0c
	if (cr0.eq) goto loc_83A8BA0C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a8c230
	ctx.lr = 0x83A8BA2C;
	sub_83A8C230(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83a8ca20
	ctx.lr = 0x83A8BA38;
	sub_83A8CA20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83A8BA3C:
	// addi r1,r1,2512
	ctx.r1.s64 = ctx.r1.s64 + 2512;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A8BA50"))) PPC_WEAK_FUNC(sub_83A8BA50);
PPC_FUNC_IMPL(__imp__sub_83A8BA50) {
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
	// stwu r1,-2512(r1)
	ea = -2512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x83a8ba88
	if (!cr6.eq) goto loc_83A8BA88;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,12812
	ctx.r4.s64 = ctx.r11.s64 + 12812;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A8BA80;
	sub_831EA418(ctx, base);
loc_83A8BA80:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a8bac8
	goto loc_83A8BAC8;
loc_83A8BA88:
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a90510
	ctx.lr = 0x83A8BA98;
	sub_83A90510(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a8ba80
	if (cr0.eq) goto loc_83A8BA80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a8ca20
	ctx.lr = 0x83A8BAA8;
	sub_83A8CA20(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a8ba80
	if (cr0.eq) goto loc_83A8BA80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a90d68
	ctx.lr = 0x83A8BAB8;
	sub_83A90D68(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83a8ca20
	ctx.lr = 0x83A8BAC4;
	sub_83A8CA20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83A8BAC8:
	// addi r1,r1,2512
	ctx.r1.s64 = ctx.r1.s64 + 2512;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A8BADC"))) PPC_WEAK_FUNC(sub_83A8BADC);
PPC_FUNC_IMPL(__imp__sub_83A8BADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A8BAE0"))) PPC_WEAK_FUNC(sub_83A8BAE0);
PPC_FUNC_IMPL(__imp__sub_83A8BAE0) {
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
	// stwu r1,-2512(r1)
	ea = -2512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x83a8bb14
	if (!cr6.eq) goto loc_83A8BB14;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,12824
	ctx.r4.s64 = ctx.r11.s64 + 12824;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A8BB10;
	sub_831EA418(ctx, base);
	// b 0x83a8bb64
	goto loc_83A8BB64;
loc_83A8BB14:
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a90510
	ctx.lr = 0x83A8BB24;
	sub_83A90510(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a8bb64
	if (cr0.eq) goto loc_83A8BB64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a8ca20
	ctx.lr = 0x83A8BB34;
	sub_83A8CA20(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a8bb64
	if (cr0.eq) goto loc_83A8BB64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x83a90d68
	ctx.lr = 0x83A8BB44;
	sub_83A90D68(ctx, base);
	// addi r5,r31,56
	ctx.r5.s64 = ctx.r31.s64 + 56;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,2324
	ctx.r3.s64 = ctx.r1.s64 + 2324;
	// bl 0x83ac86a0
	ctx.lr = 0x83A8BB54;
	sub_83AC86A0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83a8ca20
	ctx.lr = 0x83A8BB5C;
	sub_83A8CA20(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_83A8BB64:
	// addi r1,r1,2512
	ctx.r1.s64 = ctx.r1.s64 + 2512;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A8BB78"))) PPC_WEAK_FUNC(sub_83A8BB78);
PPC_FUNC_IMPL(__imp__sub_83A8BB78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-2512(r1)
	ea = -2512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x83a90510
	ctx.lr = 0x83A8BBA4;
	sub_83A90510(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a8bbb4
	if (!cr0.eq) goto loc_83A8BBB4;
loc_83A8BBAC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83a8bbec
	goto loc_83A8BBEC;
loc_83A8BBB4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a8ca20
	ctx.lr = 0x83A8BBBC;
	sub_83A8CA20(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a8bbac
	if (cr0.eq) goto loc_83A8BBAC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x83ac8998
	ctx.lr = 0x83A8BBD0;
	sub_83AC8998(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x83aa0ec0
	ctx.lr = 0x83A8BBDC;
	sub_83AA0EC0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83a8ca20
	ctx.lr = 0x83A8BBE8;
	sub_83A8CA20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83A8BBEC:
	// addi r1,r1,2512
	ctx.r1.s64 = ctx.r1.s64 + 2512;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A8BC04"))) PPC_WEAK_FUNC(sub_83A8BC04);
PPC_FUNC_IMPL(__imp__sub_83A8BC04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A8BC08"))) PPC_WEAK_FUNC(sub_83A8BC08);
PPC_FUNC_IMPL(__imp__sub_83A8BC08) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831ea798
	ctx.lr = 0x83A8BC24;
	sub_831EA798(ctx, base);
	// bl 0x83a8cfe0
	ctx.lr = 0x83A8BC28;
	sub_83A8CFE0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x83a8bc48
	if (!cr0.eq) goto loc_83A8BC48;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,12980
	ctx.r4.s64 = ctx.r11.s64 + 12980;
loc_83A8BC38:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea3f0
	ctx.lr = 0x83A8BC40;
	sub_831EA3F0(ctx, base);
loc_83A8BC40:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a8bcb4
	goto loc_83A8BCB4;
loc_83A8BC48:
	// bl 0x83a82480
	ctx.lr = 0x83A8BC4C;
	sub_83A82480(ctx, base);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83ab5cf0
	ctx.lr = 0x83A8BC58;
	sub_83AB5CF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83a824c0
	ctx.lr = 0x83A8BC60;
	sub_83A824C0(ctx, base);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq cr6,0x83a8bc40
	if (cr6.eq) goto loc_83A8BC40;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a874d8
	ctx.lr = 0x83A8BC78;
	sub_83A874D8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a8bc8c
	if (!cr0.eq) goto loc_83A8BC8C;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,12912
	ctx.r4.s64 = ctx.r11.s64 + 12912;
	// b 0x83a8bc38
	goto loc_83A8BC38;
loc_83A8BC8C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a8d1b0
	ctx.lr = 0x83A8BC94;
	sub_83A8D1B0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a8bc40
	if (cr0.eq) goto loc_83A8BC40;
	// bl 0x83a82480
	ctx.lr = 0x83A8BCA0;
	sub_83A82480(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a893e8
	ctx.lr = 0x83A8BCA8;
	sub_83A893E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83a824c0
	ctx.lr = 0x83A8BCB0;
	sub_83A824C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83A8BCB4:
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

__attribute__((alias("__imp__sub_83A8BCC8"))) PPC_WEAK_FUNC(sub_83A8BCC8);
PPC_FUNC_IMPL(__imp__sub_83A8BCC8) {
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
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x831ee520
	ctx.lr = 0x83A8BCE4;
	sub_831EE520(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a8bd20
	if (!cr0.eq) goto loc_83A8BD20;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(ctx.r11.s64, 0, xer);
	// ble cr6,0x83a8bd20
	if (!cr6.gt) goto loc_83A8BD20;
	// addi r11,r11,2047
	ctx.r11.s64 = ctx.r11.s64 + 2047;
	// sradi r10,r11,10
	xer.ca = (ctx.r11.s64 < 0) & ((ctx.r11.u64 & 0x3FF) != 0);
	ctx.r10.s64 = ctx.r11.s64 >> 10;
	// rldicl r10,r10,11,53
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 11) & 0x7FF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sradi r11,r11,11
	xer.ca = (ctx.r11.s64 < 0) & ((ctx.r11.u64 & 0x7FF) != 0);
	ctx.r11.s64 = ctx.r11.s64 >> 11;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rldicr r11,r11,11,52
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 11) & 0xFFFFFFFFFFFFF800;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// b 0x83a8bd48
	goto loc_83A8BD48;
loc_83A8BD20:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83a8bd30
	if (!cr6.eq) goto loc_83A8BD30;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r31,r11,10500
	ctx.r31.s64 = ctx.r11.s64 + 10500;
loc_83A8BD30:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,13012
	ctx.r4.s64 = ctx.r11.s64 + 13012;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea400
	ctx.lr = 0x83A8BD44;
	sub_831EA400(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
loc_83A8BD48:
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

__attribute__((alias("__imp__sub_83A8BD5C"))) PPC_WEAK_FUNC(sub_83A8BD5C);
PPC_FUNC_IMPL(__imp__sub_83A8BD5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A8BD60"))) PPC_WEAK_FUNC(sub_83A8BD60);
PPC_FUNC_IMPL(__imp__sub_83A8BD60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A8BD68;
	__savegprlr_28(ctx, base);
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
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x831f14b0
	ctx.lr = 0x83A8BD84;
	sub_831F14B0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a8bd94
	if (cr0.eq) goto loc_83A8BD94;
loc_83A8BD8C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83a8be14
	goto loc_83A8BE14;
loc_83A8BD94:
	// extsw r7,r28
	ctx.r7.s64 = ctx.r28.s32;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x831f1010
	ctx.lr = 0x83A8BDB4;
	sub_831F1010(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// beq 0x83a8bdd8
	if (cr0.eq) goto loc_83A8BDD8;
	// bl 0x831f11e8
	ctx.lr = 0x83A8BDC4;
	sub_831F11E8(ctx, base);
	// b 0x83a8bd8c
	goto loc_83A8BD8C;
loc_83A8BDC8:
	// bl 0x831eed28
	ctx.lr = 0x83A8BDCC;
	sub_831EED28(ctx, base);
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x83a75e98
	ctx.lr = 0x83A8BDD4;
	sub_83A75E98(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_83A8BDD8:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x831effb8
	ctx.lr = 0x83A8BDE0;
	sub_831EFFB8(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83a8bdc8
	if (cr6.eq) goto loc_83A8BDC8;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x831f09a0
	ctx.lr = 0x83A8BDF8;
	sub_831F09A0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x831f11e8
	ctx.lr = 0x83A8BE00;
	sub_831F11E8(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x83a8bd8c
	if (!cr6.eq) goto loc_83A8BD8C;
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// extsw r3,r11
	ctx.r3.s64 = ctx.r11.s32;
loc_83A8BE14:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A8BE1C"))) PPC_WEAK_FUNC(sub_83A8BE1C);
PPC_FUNC_IMPL(__imp__sub_83A8BE1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A8BE20"))) PPC_WEAK_FUNC(sub_83A8BE20);
PPC_FUNC_IMPL(__imp__sub_83A8BE20) {
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r31,r11,27216
	ctx.r31.s64 = ctx.r11.s64 + 27216;
	// lwz r11,27216(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27216);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a8be58
	if (!cr6.eq) goto loc_83A8BE58;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,13144
	ctx.r4.s64 = ctx.r11.s64 + 13144;
loc_83A8BE4C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea3f0
	ctx.lr = 0x83A8BE54;
	sub_831EA3F0(ctx, base);
	// b 0x83a8bee8
	goto loc_83A8BEE8;
loc_83A8BE58:
	// bl 0x83a95bd0
	ctx.lr = 0x83A8BE5C;
	sub_83A95BD0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83a8be70
	if (cr0.eq) goto loc_83A8BE70;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,13072
	ctx.r4.s64 = ctx.r11.s64 + 13072;
	// b 0x83a8be4c
	goto loc_83A8BE4C;
loc_83A8BE70:
	// li r3,59
	ctx.r3.s64 = 59;
	// bl 0x83a9df68
	ctx.lr = 0x83A8BE78;
	sub_83A9DF68(ctx, base);
	// bl 0x83aa1448
	ctx.lr = 0x83A8BE7C;
	sub_83AA1448(ctx, base);
	// bl 0x83a82480
	ctx.lr = 0x83A8BE80;
	sub_83A82480(ctx, base);
	// bl 0x83a9f340
	ctx.lr = 0x83A8BE84;
	sub_83A9F340(ctx, base);
	// bl 0x83a88220
	ctx.lr = 0x83A8BE88;
	sub_83A88220(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83ab5cf0
	ctx.lr = 0x83A8BE94;
	sub_83AB5CF0(ctx, base);
	// bl 0x83a824c0
	ctx.lr = 0x83A8BE98;
	sub_83A824C0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a8beb0
	if (cr6.eq) goto loc_83A8BEB0;
	// bl 0x83a90450
	ctx.lr = 0x83A8BEA8;
	sub_83A90450(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_83A8BEB0:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83a82de8
	ctx.lr = 0x83A8BEB8;
	sub_83A82DE8(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x83a82de8
	ctx.lr = 0x83A8BEC0;
	sub_83A82DE8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_83A8BEE8:
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

__attribute__((alias("__imp__sub_83A8BEFC"))) PPC_WEAK_FUNC(sub_83A8BEFC);
PPC_FUNC_IMPL(__imp__sub_83A8BEFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A8BF00"))) PPC_WEAK_FUNC(sub_83A8BF00);
PPC_FUNC_IMPL(__imp__sub_83A8BF00) {
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r11,27216(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27216);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a8bf24
	if (cr6.eq) goto loc_83A8BF24;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83a8bf40
	goto loc_83A8BF40;
loc_83A8BF24:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83a8bf3c
	if (cr6.eq) goto loc_83A8BF3C;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,13180
	ctx.r4.s64 = ctx.r11.s64 + 13180;
	// bl 0x831ea3f0
	ctx.lr = 0x83A8BF3C;
	sub_831EA3F0(ctx, base);
loc_83A8BF3C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83A8BF40:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A8BF50"))) PPC_WEAK_FUNC(sub_83A8BF50);
PPC_FUNC_IMPL(__imp__sub_83A8BF50) {
	PPC_FUNC_PROLOGUE();
	// b 0x83a91cc0
	sub_83A91CC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A8BF54"))) PPC_WEAK_FUNC(sub_83A8BF54);
PPC_FUNC_IMPL(__imp__sub_83A8BF54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A8BF58"))) PPC_WEAK_FUNC(sub_83A8BF58);
PPC_FUNC_IMPL(__imp__sub_83A8BF58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a8bf6c
	if (cr6.eq) goto loc_83A8BF6C;
	// lis r11,4
	ctx.r11.s64 = 262144;
	// ori r11,r11,24576
	ctx.r11.u64 = ctx.r11.u64 | 24576;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_83A8BF6C:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,277
	ctx.r11.s64 = 18153472;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A8BF80"))) PPC_WEAK_FUNC(sub_83A8BF80);
PPC_FUNC_IMPL(__imp__sub_83A8BF80) {
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r11,27216(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27216);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a8bfb4
	if (!cr6.eq) goto loc_83A8BFB4;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,13180
	ctx.r4.s64 = ctx.r11.s64 + 13180;
	// bl 0x831ea3f0
	ctx.lr = 0x83A8BFAC;
	sub_831EA3F0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83a8bfbc
	goto loc_83A8BFBC;
loc_83A8BFB4:
	// bl 0x83a8ca78
	ctx.lr = 0x83A8BFB8;
	sub_83A8CA78(ctx, base);
	// lwz r3,940(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 940);
loc_83A8BFBC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A8BFCC"))) PPC_WEAK_FUNC(sub_83A8BFCC);
PPC_FUNC_IMPL(__imp__sub_83A8BFCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A8BFD0"))) PPC_WEAK_FUNC(sub_83A8BFD0);
PPC_FUNC_IMPL(__imp__sub_83A8BFD0) {
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83a8c008
	if (!cr6.eq) goto loc_83A8C008;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,13216
	ctx.r4.s64 = ctx.r11.s64 + 13216;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A8C000;
	sub_831EA418(ctx, base);
loc_83A8C000:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a8c048
	goto loc_83A8C048;
loc_83A8C008:
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r11,27216(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27216);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a8c02c
	if (!cr6.eq) goto loc_83A8C02C;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,13180
	ctx.r4.s64 = ctx.r11.s64 + 13180;
	// bl 0x831ea3f0
	ctx.lr = 0x83A8C028;
	sub_831EA3F0(ctx, base);
	// b 0x83a8c000
	goto loc_83A8C000;
loc_83A8C02C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83a8f2d0
	ctx.lr = 0x83A8C034;
	sub_83A8F2D0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a8c048
	if (!cr6.eq) goto loc_83A8C048;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,-1000
	ctx.r11.s64 = ctx.r11.s64 + -1000;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_83A8C048:
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

__attribute__((alias("__imp__sub_83A8C05C"))) PPC_WEAK_FUNC(sub_83A8C05C);
PPC_FUNC_IMPL(__imp__sub_83A8C05C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A8C060"))) PPC_WEAK_FUNC(sub_83A8C060);
PPC_FUNC_IMPL(__imp__sub_83A8C060) {
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r11,27216(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27216);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a8c098
	if (!cr6.eq) goto loc_83A8C098;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,13180
	ctx.r4.s64 = ctx.r11.s64 + 13180;
	// bl 0x831ea3f0
	ctx.lr = 0x83A8C08C;
	sub_831EA3F0(ctx, base);
loc_83A8C08C:
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x83a8c0c8
	goto loc_83A8C0C8;
loc_83A8C098:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a8c0b4
	if (!cr6.eq) goto loc_83A8C0B4;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,13228
	ctx.r4.s64 = ctx.r11.s64 + 13228;
	// bl 0x831ea418
	ctx.lr = 0x83A8C0B0;
	sub_831EA418(ctx, base);
	// b 0x83a8c08c
	goto loc_83A8C08C;
loc_83A8C0B4:
	// bl 0x83a8f398
	ctx.lr = 0x83A8C0B8;
	sub_83A8F398(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x83a8c08c
	if (cr6.eq) goto loc_83A8C08C;
	// addi r3,r11,-1000
	ctx.r3.s64 = ctx.r11.s64 + -1000;
loc_83A8C0C8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A8C0D8"))) PPC_WEAK_FUNC(sub_83A8C0D8);
PPC_FUNC_IMPL(__imp__sub_83A8C0D8) {
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r11,27216(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27216);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a8c10c
	if (!cr6.eq) goto loc_83A8C10C;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,13180
	ctx.r4.s64 = ctx.r11.s64 + 13180;
	// bl 0x831ea3f0
	ctx.lr = 0x83A8C104;
	sub_831EA3F0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83a8c114
	goto loc_83A8C114;
loc_83A8C10C:
	// bl 0x83a8ca78
	ctx.lr = 0x83A8C110;
	sub_83A8CA78(ctx, base);
	// lwz r3,1004(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1004);
loc_83A8C114:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A8C124"))) PPC_WEAK_FUNC(sub_83A8C124);
PPC_FUNC_IMPL(__imp__sub_83A8C124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A8C128"))) PPC_WEAK_FUNC(sub_83A8C128);
PPC_FUNC_IMPL(__imp__sub_83A8C128) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A8C130;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83a8c160
	if (!cr6.eq) goto loc_83A8C160;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,13240
	ctx.r4.s64 = ctx.r11.s64 + 13240;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A8C158;
	sub_831EA418(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a8c1e0
	goto loc_83A8C1E0;
loc_83A8C160:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a8f4d0
	ctx.lr = 0x83A8C16C;
	sub_83A8F4D0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a8c1dc
	if (!cr6.eq) goto loc_83A8C1DC;
	// lhz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// li r10,1000
	ctx.r10.s64 = 1000;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// sth r30,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r30.u16);
	// clrlwi r11,r11,17
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFF;
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// divw r10,r11,r10
	ctx.r10.s32 = PPCDivide(ctx.r11.s32, ctx.r10.s32);
	// mulli r10,r10,1000
	ctx.r10.s64 = ctx.r10.s64 * 1000;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// sth r11,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r11.u16);
	// bl 0x83a8f670
	ctx.lr = 0x83A8C1A8;
	sub_83A8F670(ctx, base);
	// lhz r10,86(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// bne cr6,0x83a8c1c4
	if (!cr6.eq) goto loc_83A8C1C4;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x83a8c1cc
	goto loc_83A8C1CC;
loc_83A8C1C4:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
loc_83A8C1CC:
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// sth r11,18(r31)
	PPC_STORE_U16(ctx.r31.u32 + 18, ctx.r11.u16);
	// rlwinm r11,r10,31,17,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFF;
	// sth r11,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r11.u16);
loc_83A8C1DC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_83A8C1E0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A8C1E8"))) PPC_WEAK_FUNC(sub_83A8C1E8);
PPC_FUNC_IMPL(__imp__sub_83A8C1E8) {
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
	// bl 0x83a8f478
	ctx.lr = 0x83A8C200;
	sub_83A8F478(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// bne cr6,0x83a8c214
	if (!cr6.eq) goto loc_83A8C214;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a8c21c
	goto loc_83A8C21C;
loc_83A8C214:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83a8c128
	ctx.lr = 0x83A8C21C;
	sub_83A8C128(ctx, base);
loc_83A8C21C:
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

__attribute__((alias("__imp__sub_83A8C230"))) PPC_WEAK_FUNC(sub_83A8C230);
PPC_FUNC_IMPL(__imp__sub_83A8C230) {
	PPC_FUNC_PROLOGUE();
	// b 0x83a8f988
	sub_83A8F988(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A8C234"))) PPC_WEAK_FUNC(sub_83A8C234);
PPC_FUNC_IMPL(__imp__sub_83A8C234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

