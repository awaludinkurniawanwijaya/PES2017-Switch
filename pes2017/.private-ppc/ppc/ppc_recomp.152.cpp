#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82C36E54"))) PPC_WEAK_FUNC(sub_82C36E54);
PPC_FUNC_IMPL(__imp__sub_82C36E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C36E58"))) PPC_WEAK_FUNC(sub_82C36E58);
PPC_FUNC_IMPL(__imp__sub_82C36E58) {
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
	// bl 0x82d19a78
	ctx.lr = 0x82C36E68;
	sub_82D19A78(ctx, base);
	// bl 0x82d2b0f8
	ctx.lr = 0x82C36E6C;
	sub_82D2B0F8(ctx, base);
	// bl 0x82d39100
	ctx.lr = 0x82C36E70;
	sub_82D39100(ctx, base);
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

__attribute__((alias("__imp__sub_82C36E84"))) PPC_WEAK_FUNC(sub_82C36E84);
PPC_FUNC_IMPL(__imp__sub_82C36E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C36E88"))) PPC_WEAK_FUNC(sub_82C36E88);
PPC_FUNC_IMPL(__imp__sub_82C36E88) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,15424
	ctx.r9.s64 = ctx.r11.s64 + 15424;
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
	ctx.lr = 0x82C36EC0;
	sub_82D25548(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82c36ed8
	if (cr6.eq) goto loc_82C36ED8;
	// bl 0x82416268
	ctx.lr = 0x82C36ED4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C36ED8:
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

__attribute__((alias("__imp__sub_82C36EF0"))) PPC_WEAK_FUNC(sub_82C36EF0);
PPC_FUNC_IMPL(__imp__sub_82C36EF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// ld r30,96(r3)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83a7d958
	ctx.lr = 0x82C36F10;
	sub_83A7D958(ctx, base);
	// bl 0x83524138
	ctx.lr = 0x82C36F14;
	sub_83524138(ctx, base);
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// rotlwi r10,r30,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// lis r9,-32208
	ctx.r9.s64 = -2110783488;
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// clrldi r6,r8,32
	ctx.r6.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,23372(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 23372);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f13,15172(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 15172);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fcmpu cr6,f11,f13
	cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// ble cr6,0x82c36f8c
	if (!cr6.gt) goto loc_82C36F8C;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,21716
	ctx.r9.s64 = ctx.r10.s64 + 21716;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r11.u8);
	// bl 0x83103068
	ctx.lr = 0x82C36F78;
	sub_83103068(ctx, base);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82C36F8C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C36F8C:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_82C36FA8"))) PPC_WEAK_FUNC(sub_82C36FA8);
PPC_FUNC_IMPL(__imp__sub_82C36FA8) {
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
	// blt cr6,0x82c36fd0
	if (cr6.lt) goto loc_82C36FD0;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82c36fd4
	goto loc_82C36FD4;
loc_82C36FD0:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82C36FD4:
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
	ctx.lr = 0x82C36FF0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3700c
	if (cr6.eq) goto loc_82C3700C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c36dd8
	ctx.lr = 0x82C37004;
	sub_82C36DD8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c37010
	if (!cr6.eq) goto loc_82C37010;
loc_82C3700C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C37010:
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

__attribute__((alias("__imp__sub_82C37028"))) PPC_WEAK_FUNC(sub_82C37028);
PPC_FUNC_IMPL(__imp__sub_82C37028) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82C37030;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C37040;
	sub_82D19A78(ctx, base);
	// bl 0x82d2b0f8
	ctx.lr = 0x82C37044;
	sub_82D2B0F8(ctx, base);
	// bl 0x82d390c0
	ctx.lr = 0x82C37048;
	sub_82D390C0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C37050;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r31,r11,15332
	ctx.r31.s64 = ctx.r11.s64 + 15332;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,-44
	ctx.r4.s64 = ctx.r31.s64 + -44;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C37070;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c37084
	if (cr6.eq) goto loc_82C37084;
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// ori r4,r4,546
	ctx.r4.u64 = ctx.r4.u64 | 546;
	// bl 0x82d29598
	ctx.lr = 0x82C37084;
	sub_82D29598(ctx, base);
loc_82C37084:
	// bl 0x82d86078
	ctx.lr = 0x82C37088;
	sub_82D86078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C37094;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r31,-28
	ctx.r4.s64 = ctx.r31.s64 + -28;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C370AC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82c371d8
	if (cr6.eq) goto loc_82C371D8;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c371d8
	if (cr6.eq) goto loc_82C371D8;
	// lwz r3,116(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// bl 0x825832f0
	ctx.lr = 0x82C370C8;
	sub_825832F0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r4,r31,-378
	ctx.r4.s64 = ctx.r31.s64 + -378;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwz r8,5780(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5780);
	// lfs f0,8976(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8976);
	ctx.f0.f64 = double(temp.f32);
	// std r8,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r8.u64);
	// lfd f13,112(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f31,f11,f0
	ctx.f31.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// bl 0x837b0c10
	ctx.lr = 0x82C370F8;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-377
	ctx.r4.s64 = ctx.r31.s64 + -377;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x837b0c10
	ctx.lr = 0x82C37104;
	sub_837B0C10(ctx, base);
	// lis r4,28
	ctx.r4.s64 = 1835008;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// ori r4,r4,6
	ctx.r4.u64 = ctx.r4.u64 | 6;
	// bl 0x82d04220
	ctx.lr = 0x82C37114;
	sub_82D04220(ctx, base);
	// stfd f31,32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f31.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// ori r4,r4,352
	ctx.r4.u64 = ctx.r4.u64 | 352;
	// bl 0x82d042a8
	ctx.lr = 0x82C37130;
	sub_82D042A8(ctx, base);
	// addi r5,r31,-16
	ctx.r5.s64 = ctx.r31.s64 + -16;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82ab6970
	ctx.lr = 0x82C37140;
	sub_82AB6970(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// bl 0x82ac8718
	ctx.lr = 0x82C37150;
	sub_82AC8718(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r7,15
	ctx.r7.s64 = 15;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259cb28
	ctx.lr = 0x82C37178;
	sub_8259CB28(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82C37180;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8387e8e0
	ctx.lr = 0x82C37188;
	sub_8387E8E0(ctx, base);
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r6,16
	cr6.compare<uint32_t>(ctx.r6.u32, 16, xer);
	// bge cr6,0x82c3719c
	if (!cr6.lt) goto loc_82C3719C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_82C3719C:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x82C371A4;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82C371B8;
	sub_82D291E0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82C371C0;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82C371C8;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x82C371D0;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x82C371D8;
	sub_8387E8E0(ctx, base);
loc_82C371D8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C371E0;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C371F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c37224
	if (cr6.eq) goto loc_82C37224;
	// lwz r3,100(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c37224
	if (cr6.eq) goto loc_82C37224;
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
	ctx.lr = 0x82C37224;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C37224:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C37234"))) PPC_WEAK_FUNC(sub_82C37234);
PPC_FUNC_IMPL(__imp__sub_82C37234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C37238"))) PPC_WEAK_FUNC(sub_82C37238);
PPC_FUNC_IMPL(__imp__sub_82C37238) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-31760
	ctx.r10.s64 = -2081423360;
	// addi r9,r11,16272
	ctx.r9.s64 = ctx.r11.s64 + 16272;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,9264(r10)
	PPC_STORE_U32(ctx.r10.u32 + 9264, ctx.r11.u32);
	// bl 0x831032a0
	ctx.lr = 0x82C37270;
	sub_831032A0(ctx, base);
	// clrlwi r8,r30,31
	ctx.r8.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82c37288
	if (cr6.eq) goto loc_82C37288;
	// bl 0x82416268
	ctx.lr = 0x82C37284;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C37288:
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

__attribute__((alias("__imp__sub_82C372A0"))) PPC_WEAK_FUNC(sub_82C372A0);
PPC_FUNC_IMPL(__imp__sub_82C372A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82C372A8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,5
	ctx.r11.s64 = 327680;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r27,108
	ctx.r27.s64 = 108;
	// ori r28,r11,14904
	ctx.r28.u64 = ctx.r11.u64 | 14904;
loc_82C372C4:
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c37348
	if (cr6.eq) goto loc_82C37348;
	// lbz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 72);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c37348
	if (cr6.eq) goto loc_82C37348;
	// bl 0x831156e8
	ctx.lr = 0x82C372E0;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x83123968
	ctx.lr = 0x82C372F0;
	sub_83123968(ctx, base);
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// lbz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 100);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x82c37338
	if (cr6.eq) goto loc_82C37338;
	// stb r3,100(r11)
	PPC_STORE_U8(ctx.r11.u32 + 100, ctx.r3.u8);
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r7,r8,r27
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r27.s32);
	// cmplw cr6,r7,r31
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, xer);
	// ble cr6,0x82c37350
	if (!cr6.gt) goto loc_82C37350;
	// add r11,r29,r10
	ctx.r11.u64 = ctx.r29.u64 + ctx.r10.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r9,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r9.u32);
	// lwz r3,76(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// bl 0x82bff800
	ctx.lr = 0x82C37338;
	sub_82BFF800(ctx, base);
loc_82C37338:
	// addi r29,r29,108
	ctx.r29.s64 = ctx.r29.s64 + 108;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r29,216
	cr6.compare<uint32_t>(ctx.r29.u32, 216, xer);
	// blt cr6,0x82c372c4
	if (cr6.lt) goto loc_82C372C4;
loc_82C37348:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82C37350:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C3735C;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82C3735C"))) PPC_WEAK_FUNC(sub_82C3735C);
PPC_FUNC_IMPL(__imp__sub_82C3735C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C37360"))) PPC_WEAK_FUNC(sub_82C37360);
PPC_FUNC_IMPL(__imp__sub_82C37360) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82C37368;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c374d4
	if (cr6.eq) goto loc_82C374D4;
	// bl 0x830ff290
	ctx.lr = 0x82C37380;
	sub_830FF290(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r26,r11,16028
	ctx.r26.s64 = ctx.r11.s64 + 16028;
	// addi r11,r26,88
	ctx.r11.s64 = ctx.r26.s64 + 88;
	// beq cr6,0x82c3739c
	if (cr6.eq) goto loc_82C3739C;
	// addi r11,r26,72
	ctx.r11.s64 = ctx.r26.s64 + 72;
loc_82C3739C:
	// addi r24,r11,8
	ctx.r24.s64 = ctx.r11.s64 + 8;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r29,108
	ctx.r29.s64 = 108;
	// li r25,1
	ctx.r25.s64 = 1;
loc_82C373B4:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r5,4(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// lwz r4,0(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r3,76(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	// bl 0x82bff970
	ctx.lr = 0x82C373C8;
	sub_82BFF970(ctx, base);
	// lwz r10,76(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	// lwz r11,76(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// lwz r10,80(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r29
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r29.s32);
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, xer);
	// ble cr6,0x82c374dc
	if (!cr6.gt) goto loc_82C374DC;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stb r25,97(r11)
	PPC_STORE_U8(ctx.r11.u32 + 97, ctx.r25.u8);
	// lwz r10,76(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	// lwz r11,76(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// lwz r10,80(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r29
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r29.s32);
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, xer);
	// ble cr6,0x82c374e8
	if (!cr6.gt) goto loc_82C374E8;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stb r25,98(r11)
	PPC_STORE_U8(ctx.r11.u32 + 98, ctx.r25.u8);
	// lwz r10,76(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	// lwz r11,76(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// lwz r10,80(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r29
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r29.s32);
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, xer);
	// ble cr6,0x82c374f4
	if (!cr6.gt) goto loc_82C374F4;
	// addi r10,r26,64
	ctx.r10.s64 = ctx.r26.s64 + 64;
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwzx r8,r27,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r10.u32);
	// stw r8,88(r9)
	PPC_STORE_U32(ctx.r9.u32 + 88, ctx.r8.u32);
	// lwz r10,76(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	// lwz r11,76(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// lwz r7,80(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// divw r5,r6,r29
	ctx.r5.s32 = PPCDivide(ctx.r6.s32, ctx.r29.s32);
	// cmplw cr6,r5,r31
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r31.u32, xer);
	// ble cr6,0x82c37500
	if (!cr6.gt) goto loc_82C37500;
	// addi r10,r26,56
	ctx.r10.s64 = ctx.r26.s64 + 56;
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwzx r8,r27,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r10.u32);
	// stw r8,84(r9)
	PPC_STORE_U32(ctx.r9.u32 + 84, ctx.r8.u32);
	// lwz r11,76(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	// addi r11,r11,76
	ctx.r11.s64 = ctx.r11.s64 + 76;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r6,r10,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r10.s64;
	// divw r5,r6,r29
	ctx.r5.s32 = PPCDivide(ctx.r6.s32, ctx.r29.s32);
	// cmplw cr6,r5,r31
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r31.u32, xer);
	// ble cr6,0x82c3750c
	if (!cr6.gt) goto loc_82C3750C;
	// lwzx r9,r27,r26
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r26.u32);
	// add r8,r30,r10
	ctx.r8.u64 = ctx.r30.u64 + ctx.r10.u64;
	// stw r9,92(r8)
	PPC_STORE_U32(ctx.r8.u32 + 92, ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r6,r10,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r10.s64;
	// divw r5,r6,r29
	ctx.r5.s32 = PPCDivide(ctx.r6.s32, ctx.r29.s32);
	// cmplw cr6,r5,r31
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r31.u32, xer);
	// ble cr6,0x82c37518
	if (!cr6.gt) goto loc_82C37518;
	// add r11,r30,r10
	ctx.r11.u64 = ctx.r30.u64 + ctx.r10.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r25,99(r11)
	PPC_STORE_U8(ctx.r11.u32 + 99, ctx.r25.u8);
	// lwz r3,76(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	// bl 0x82bff800
	ctx.lr = 0x82C374C0;
	sub_82BFF800(ctx, base);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,108
	ctx.r30.s64 = ctx.r30.s64 + 108;
	// cmplwi cr6,r27,8
	cr6.compare<uint32_t>(ctx.r27.u32, 8, xer);
	// blt cr6,0x82c373b4
	if (cr6.lt) goto loc_82C373B4;
loc_82C374D4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82C374DC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C374E8;
	sub_831CC188(ctx, base);
loc_82C374E8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C374F4;
	sub_831CC188(ctx, base);
loc_82C374F4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C37500;
	sub_831CC188(ctx, base);
loc_82C37500:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C3750C;
	sub_831CC188(ctx, base);
loc_82C3750C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C37518;
	sub_831CC188(ctx, base);
loc_82C37518:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C37524;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82C37524"))) PPC_WEAK_FUNC(sub_82C37524);
PPC_FUNC_IMPL(__imp__sub_82C37524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C37528"))) PPC_WEAK_FUNC(sub_82C37528);
PPC_FUNC_IMPL(__imp__sub_82C37528) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,108
	ctx.r7.s64 = 108;
loc_82C37540:
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// lwz r9,76(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// subf r6,r9,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw r5,r6,r7
	ctx.r5.s32 = PPCDivide(ctx.r6.s32, ctx.r7.s32);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// ble cr6,0x82c3757c
	if (!cr6.gt) goto loc_82C3757C;
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r8,r8,108
	ctx.r8.s64 = ctx.r8.s64 + 108;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r8,216
	cr6.compare<uint32_t>(ctx.r8.u32, 216, xer);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stb r4,104(r9)
	PPC_STORE_U8(ctx.r9.u32 + 104, ctx.r4.u8);
	// blt cr6,0x82c37540
	if (cr6.lt) goto loc_82C37540;
	// blr 
	return;
loc_82C3757C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// b 0x831cc188
	sub_831CC188(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C37588"))) PPC_WEAK_FUNC(sub_82C37588);
PPC_FUNC_IMPL(__imp__sub_82C37588) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82C37590;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,25(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 25);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c375d8
	if (!cr6.eq) goto loc_82C375D8;
	// li r29,2
	ctx.r29.s64 = 2;
loc_82C375AC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82c37588
	ctx.lr = 0x82C375B8;
	sub_82C37588(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// bl 0x825952b8
	ctx.lr = 0x82C375CC;
	sub_825952B8(ctx, base);
	// lbz r11,25(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 25);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c375ac
	if (cr6.eq) goto loc_82C375AC;
loc_82C375D8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C375E0"))) PPC_WEAK_FUNC(sub_82C375E0);
PPC_FUNC_IMPL(__imp__sub_82C375E0) {
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
	// bl 0x82c37588
	ctx.lr = 0x82C37600;
	sub_82C37588(ctx, base);
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

__attribute__((alias("__imp__sub_82C37634"))) PPC_WEAK_FUNC(sub_82C37634);
PPC_FUNC_IMPL(__imp__sub_82C37634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C37638"))) PPC_WEAK_FUNC(sub_82C37638);
PPC_FUNC_IMPL(__imp__sub_82C37638) {
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
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r8,25(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82c376c8
	if (!cr6.eq) goto loc_82C376C8;
	// lwz r8,12(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// clrlwi r5,r9,24
	ctx.r5.u64 = ctx.r9.u32 & 0xFF;
	// li r9,-1
	ctx.r9.s64 = -1;
loc_82C3767C:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82c37698
	if (cr6.eq) goto loc_82C37698;
	// subfc r10,r8,r10
	xer.ca = ctx.r10.u32 >= ctx.r8.u32;
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// subfze r10,r9
	temp.u8 = ~ctx.r9.u32 + xer.ca < xer.ca;
	ctx.r10.u64 = ~ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x82c376a4
	goto loc_82C376A4;
loc_82C37698:
	// subfc r3,r10,r8
	xer.ca = ctx.r8.u32 >= ctx.r10.u32;
	ctx.r3.s64 = ctx.r8.s64 - ctx.r10.s64;
	// subfe r3,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r10,r3,31
	ctx.r10.u64 = ctx.r3.u32 & 0x1;
loc_82C376A4:
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c376b8
	if (cr6.eq) goto loc_82C376B8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82c376bc
	goto loc_82C376BC;
loc_82C376B8:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_82C376BC:
	// lbz r3,25(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3767c
	if (cr6.eq) goto loc_82C3767C;
loc_82C376C8:
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dba428
	ctx.lr = 0x82C376D4;
	sub_82DBA428(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r10,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r10.u8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82C37700"))) PPC_WEAK_FUNC(sub_82C37700);
PPC_FUNC_IMPL(__imp__sub_82C37700) {
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
	// add r11,r5,r4
	ctx.r11.u64 = ctx.r5.u64 + ctx.r4.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r10,120(r11)
	PPC_STORE_U8(ctx.r11.u32 + 120, ctx.r10.u8);
	// lwz r4,76(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// bl 0x82a946c0
	ctx.lr = 0x82C37728;
	sub_82A946C0(ctx, base);
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

__attribute__((alias("__imp__sub_82C37740"))) PPC_WEAK_FUNC(sub_82C37740);
PPC_FUNC_IMPL(__imp__sub_82C37740) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x82C37748;
	__savegprlr_20(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x831156e8
	ctx.lr = 0x82C37758;
	sub_831156E8(ctx, base);
	// lwz r24,48(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8311c148
	ctx.lr = 0x82C37768;
	sub_8311C148(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// ld r4,504(r28)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r28.u32 + 504);
	// bl 0x8311c260
	ctx.lr = 0x82C37778;
	sub_8311C260(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387b310
	ctx.lr = 0x82C3778C;
	sub_8387B310(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
	// lis r23,-31776
	ctx.r23.s64 = -2082471936;
	// li r22,2
	ctx.r22.s64 = 2;
	// addi r26,r11,16296
	ctx.r26.s64 = ctx.r11.s64 + 16296;
loc_82C377A8:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bge cr6,0x82c377c0
	if (!cr6.lt) goto loc_82C377C0;
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + ctx.r21.u64;
	// lbz r11,584(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 584);
	// b 0x82c377c4
	goto loc_82C377C4;
loc_82C377C0:
	// li r11,255
	ctx.r11.s64 = 255;
loc_82C377C4:
	// lhz r9,808(r28)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r28.u32 + 808);
	// ld r30,-16828(r23)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r23.u32 + -16828);
	// clrlwi r8,r9,25
	ctx.r8.u64 = ctx.r9.u32 & 0x7F;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x82c377e4
	if (!cr6.lt) goto loc_82C377E4;
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r30,r10,r28
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r28.u32);
loc_82C377E4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8311bf98
	ctx.lr = 0x82C377F0;
	sub_8311BF98(ctx, base);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83123670
	ctx.lr = 0x82C37800;
	sub_83123670(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x83120738
	ctx.lr = 0x82C37810;
	sub_83120738(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// blt cr6,0x82c37824
	if (cr6.lt) goto loc_82C37824;
	// li r11,7
	ctx.r11.s64 = 7;
loc_82C37824:
	// stw r22,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r22.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,28
	ctx.r4.s64 = 28;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwzx r31,r11,r26
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// bl 0x82595718
	ctx.lr = 0x82C37840;
	sub_82595718(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addic. r11,r3,12
	xer.ca = ctx.r3.u32 > 4294967283;
	ctx.r11.s64 = ctx.r3.s64 + 12;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stb r27,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, ctx.r27.u8);
	// stb r27,25(r3)
	PPC_STORE_U8(ctx.r3.u32 + 25, ctx.r27.u8);
	// beq 0x82c37874
	if (cr0.eq) goto loc_82C37874;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// std r30,4(r11)
	PPC_STORE_U64(ctx.r11.u32 + 4, ctx.r30.u64);
loc_82C37874:
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82c37638
	ctx.lr = 0x82C37884;
	sub_82C37638(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// add r25,r31,r25
	ctx.r25.u64 = ctx.r31.u64 + ctx.r25.u64;
	// cmplwi cr6,r29,11
	cr6.compare<uint32_t>(ctx.r29.u32, 11, xer);
	// blt cr6,0x82c377a8
	if (cr6.lt) goto loc_82C377A8;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a672c8
	ctx.lr = 0x82C3789C;
	sub_82A672C8(ctx, base);
	// lwz r30,116(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r30
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, xer);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// beq cr6,0x82c378e0
	if (cr6.eq) goto loc_82C378E0;
loc_82C378BC:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// add r31,r10,r31
	ctx.r31.u64 = ctx.r10.u64 + ctx.r31.u64;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, xer);
	// bgt cr6,0x82c3792c
	if (cr6.gt) goto loc_82C3792C;
	// bl 0x833ccd48
	ctx.lr = 0x82C378D4;
	sub_833CCD48(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// bne cr6,0x82c378bc
	if (!cr6.eq) goto loc_82C378BC;
loc_82C378E0:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8349cc40
	ctx.lr = 0x82C378E8;
	sub_8349CC40(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r10,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r10.u32);
	// stw r9,4(r20)
	PPC_STORE_U32(ctx.r20.u32 + 4, ctx.r9.u32);
	// bl 0x82c5a180
	ctx.lr = 0x82C37910;
	sub_82C5A180(ctx, base);
	// stw r22,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r22.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x825952b8
	ctx.lr = 0x82C37920;
	sub_825952B8(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_82C3792C:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r10,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r10.u32);
	// stw r9,4(r20)
	PPC_STORE_U32(ctx.r20.u32 + 4, ctx.r9.u32);
	// bl 0x82c5a180
	ctx.lr = 0x82C3794C;
	sub_82C5A180(ctx, base);
	// stw r22,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r22.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x825952b8
	ctx.lr = 0x82C3795C;
	sub_825952B8(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C37968"))) PPC_WEAK_FUNC(sub_82C37968);
PPC_FUNC_IMPL(__imp__sub_82C37968) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x82C37970;
	__savegprlr_19(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,76(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r25,r11,15980
	ctx.r25.s64 = ctx.r11.s64 + 15980;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c379ac
	if (!cr6.eq) goto loc_82C379AC;
	// addi r3,r25,180
	ctx.r3.s64 = ctx.r25.s64 + 180;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82c00618
	ctx.lr = 0x82C37998;
	sub_82C00618(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r11.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x83103100
	ctx.lr = 0x82C379AC;
	sub_83103100(ctx, base);
loc_82C379AC:
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c37cac
	if (cr6.eq) goto loc_82C37CAC;
	// bl 0x831156e8
	ctx.lr = 0x82C379BC;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addis r19,r11,5
	ctx.r19.s64 = ctx.r11.s64 + 327680;
	// addi r19,r19,14904
	ctx.r19.s64 = ctx.r19.s64 + 14904;
	// bl 0x830ff290
	ctx.lr = 0x82C379CC;
	sub_830FF290(ctx, base);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r20,r25,136
	ctx.r20.s64 = ctx.r25.s64 + 136;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// beq cr6,0x82c379e0
	if (cr6.eq) goto loc_82C379E0;
	// addi r20,r25,120
	ctx.r20.s64 = ctx.r25.s64 + 120;
loc_82C379E0:
	// li r21,0
	ctx.r21.s64 = 0;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r24,r25,112
	ctx.r24.s64 = ctx.r25.s64 + 112;
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// addi r26,r30,112
	ctx.r26.s64 = ctx.r30.s64 + 112;
	// addi r27,r30,80
	ctx.r27.s64 = ctx.r30.s64 + 80;
	// li r23,1
	ctx.r23.s64 = 1;
	// li r28,108
	ctx.r28.s64 = 108;
	// addi r22,r11,-16828
	ctx.r22.s64 = ctx.r11.s64 + -16828;
loc_82C37A08:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r5,4(r20)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// lwz r4,0(r20)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// lwz r3,76(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// bl 0x82bff970
	ctx.lr = 0x82C37A1C;
	sub_82BFF970(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831239e0
	ctx.lr = 0x82C37A2C;
	sub_831239E0(ctx, base);
	// lwz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c37a48
	if (!cr6.eq) goto loc_82C37A48;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x82c37a70
	goto loc_82C37A70;
loc_82C37A48:
	// lhz r8,0(r27)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// lhz r7,0(r22)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r22.u32 + 0);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x82c37a68
	if (!cr6.eq) goto loc_82C37A68;
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// beq cr6,0x82c37a6c
	if (cr6.eq) goto loc_82C37A6C;
loc_82C37A68:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_82C37A6C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82C37A70:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c37a9c
	if (cr6.eq) goto loc_82C37A9C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c37740
	ctx.lr = 0x82C37A8C;
	sub_82C37740(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r10.u32);
loc_82C37A9C:
	// ld r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r27.u32 + 0);
	// lwz r10,76(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lwz r11,76(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// lwz r10,80(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r7,r8,r28
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r28.s32);
	// cmplw cr6,r7,r31
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, xer);
	// ble cr6,0x82c37cb4
	if (!cr6.gt) goto loc_82C37CB4;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r9,60(r11)
	PPC_STORE_U64(ctx.r11.u32 + 60, ctx.r9.u64);
	// lwz r10,76(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// lwz r9,80(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// lwz r11,76(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r7,r8,r28
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r28.s32);
	// cmplw cr6,r7,r31
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, xer);
	// ble cr6,0x82c37cc0
	if (!cr6.gt) goto loc_82C37CC0;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r10,r11,52
	ctx.r10.s64 = ctx.r11.s64 + 52;
	// stw r9,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r9.u32);
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r8,80(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// divw r6,r7,r28
	ctx.r6.s32 = PPCDivide(ctx.r7.s32, ctx.r28.s32);
	// cmplw cr6,r6,r31
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r31.u32, xer);
	// ble cr6,0x82c37ccc
	if (!cr6.gt) goto loc_82C37CCC;
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lbz r9,100(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 100);
	// stw r9,76(r10)
	PPC_STORE_U32(ctx.r10.u32 + 76, ctx.r9.u32);
	// bl 0x8314c5d8
	ctx.lr = 0x82C37B30;
	sub_8314C5D8(ctx, base);
	// lwz r10,76(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// lwz r11,76(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// lwz r8,80(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// divw r6,r7,r28
	ctx.r6.s32 = PPCDivide(ctx.r7.s32, ctx.r28.s32);
	// cmplw cr6,r6,r31
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r31.u32, xer);
	// ble cr6,0x82c37cd8
	if (!cr6.gt) goto loc_82C37CD8;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// stw r10,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r10.u32);
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r9,80(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// divw r7,r8,r28
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r28.s32);
	// cmplw cr6,r7,r31
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, xer);
	// ble cr6,0x82c37ce4
	if (!cr6.gt) goto loc_82C37CE4;
	// add r11,r10,r29
	ctx.r11.u64 = ctx.r10.u64 + ctx.r29.u64;
	// stw r31,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r31.u32);
	// lwz r10,76(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// lwz r11,76(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// lwz r10,80(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r28
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r28.s32);
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, xer);
	// ble cr6,0x82c37cf0
	if (!cr6.gt) goto loc_82C37CF0;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stb r23,97(r11)
	PPC_STORE_U8(ctx.r11.u32 + 97, ctx.r23.u8);
	// lwz r10,76(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// lwz r11,76(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// lwz r10,80(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r28
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r28.s32);
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, xer);
	// ble cr6,0x82c37cfc
	if (!cr6.gt) goto loc_82C37CFC;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stb r21,98(r11)
	PPC_STORE_U8(ctx.r11.u32 + 98, ctx.r21.u8);
	// lwz r10,76(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// lwz r11,76(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// lwz r10,80(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r28
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r28.s32);
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, xer);
	// ble cr6,0x82c37d08
	if (!cr6.gt) goto loc_82C37D08;
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r10,88(r9)
	PPC_STORE_U32(ctx.r9.u32 + 88, ctx.r10.u32);
	// lwz r10,76(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// lwz r11,76(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// lwz r8,80(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// divw r6,r7,r28
	ctx.r6.s32 = PPCDivide(ctx.r7.s32, ctx.r28.s32);
	// cmplw cr6,r6,r31
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r31.u32, xer);
	// ble cr6,0x82c37d14
	if (!cr6.gt) goto loc_82C37D14;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r8,r25,56
	ctx.r8.s64 = ctx.r25.s64 + 56;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// stw r5,84(r9)
	PPC_STORE_U32(ctx.r9.u32 + 84, ctx.r5.u32);
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// addi r11,r11,76
	ctx.r11.s64 = ctx.r11.s64 + 76;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r3,r10,r4
	ctx.r3.s64 = ctx.r4.s64 - ctx.r10.s64;
	// divw r9,r3,r28
	ctx.r9.s32 = PPCDivide(ctx.r3.s32, ctx.r28.s32);
	// cmplw cr6,r9,r31
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, xer);
	// ble cr6,0x82c37d20
	if (!cr6.gt) goto loc_82C37D20;
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// add r8,r29,r10
	ctx.r8.u64 = ctx.r29.u64 + ctx.r10.u64;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r10,r31
	ctx.r7.u64 = ctx.r10.u64 + ctx.r31.u64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r25
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r25.u32);
	// stw r5,92(r8)
	PPC_STORE_U32(ctx.r8.u32 + 92, ctx.r5.u32);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r3,r11,r4
	ctx.r3.s64 = ctx.r4.s64 - ctx.r11.s64;
	// divw r10,r3,r28
	ctx.r10.s32 = PPCDivide(ctx.r3.s32, ctx.r28.s32);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// ble cr6,0x82c37d2c
	if (!cr6.gt) goto loc_82C37D2C;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r23,99(r11)
	PPC_STORE_U8(ctx.r11.u32 + 99, ctx.r23.u8);
	// lwz r3,76(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// bl 0x82bff800
	ctx.lr = 0x82C37C90;
	sub_82BFF800(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// addi r29,r29,108
	ctx.r29.s64 = ctx.r29.s64 + 108;
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// blt cr6,0x82c37a08
	if (cr6.lt) goto loc_82C37A08;
loc_82C37CAC:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_82C37CB4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C37CC0;
	sub_831CC188(ctx, base);
loc_82C37CC0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C37CCC;
	sub_831CC188(ctx, base);
loc_82C37CCC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C37CD8;
	sub_831CC188(ctx, base);
loc_82C37CD8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C37CE4;
	sub_831CC188(ctx, base);
loc_82C37CE4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C37CF0;
	sub_831CC188(ctx, base);
loc_82C37CF0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C37CFC;
	sub_831CC188(ctx, base);
loc_82C37CFC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C37D08;
	sub_831CC188(ctx, base);
loc_82C37D08:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C37D14;
	sub_831CC188(ctx, base);
loc_82C37D14:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C37D20;
	sub_831CC188(ctx, base);
loc_82C37D20:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C37D2C;
	sub_831CC188(ctx, base);
loc_82C37D2C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C37D38;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82C37D38"))) PPC_WEAK_FUNC(sub_82C37D38);
PPC_FUNC_IMPL(__imp__sub_82C37D38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// stb r11,121(r3)
	PPC_STORE_U8(ctx.r3.u32 + 121, ctx.r11.u8);
	// stb r11,120(r3)
	PPC_STORE_U8(ctx.r3.u32 + 120, ctx.r11.u8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c37d5c
	if (cr6.eq) goto loc_82C37D5C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// b 0x82c37360
	sub_82C37360(ctx, base);
	return;
loc_82C37D5C:
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// b 0x82c37968
	sub_82C37968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C37D64"))) PPC_WEAK_FUNC(sub_82C37D64);
PPC_FUNC_IMPL(__imp__sub_82C37D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C37D68"))) PPC_WEAK_FUNC(sub_82C37D68);
PPC_FUNC_IMPL(__imp__sub_82C37D68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab4
	ctx.lr = 0x82C37D70;
	__savegprlr_15(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r11,16132
	ctx.r4.s64 = ctx.r11.s64 + 16132;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x83103328
	ctx.lr = 0x82C37D88;
	sub_83103328(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,0
	ctx.r9.s64 = 0;
	// stw r31,72(r28)
	PPC_STORE_U32(ctx.r28.u32 + 72, ctx.r31.u32);
	// li r24,0
	ctx.r24.s64 = 0;
	// addi r8,r10,16272
	ctx.r8.s64 = ctx.r10.s64 + 16272;
	// ori r22,r9,65535
	ctx.r22.u64 = ctx.r9.u64 | 65535;
	// stw r24,76(r28)
	PPC_STORE_U32(ctx.r28.u32 + 76, ctx.r24.u32);
	// stw r8,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r8.u32);
	// addi r30,r28,80
	ctx.r30.s64 = ctx.r28.s64 + 80;
	// stw r24,84(r28)
	PPC_STORE_U32(ctx.r28.u32 + 84, ctx.r24.u32);
	// stw r24,92(r28)
	PPC_STORE_U32(ctx.r28.u32 + 92, ctx.r24.u32);
	// sth r22,80(r28)
	PPC_STORE_U16(ctx.r28.u32 + 80, ctx.r22.u16);
	// sth r22,88(r28)
	PPC_STORE_U16(ctx.r28.u32 + 88, ctx.r22.u16);
	// bl 0x831156e8
	ctx.lr = 0x82C37DC0;
	sub_831156E8(ctx, base);
	// lwz r7,52(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lis r10,-21846
	ctx.r10.s64 = -1431699456;
	// addis r27,r7,5
	ctx.r27.s64 = ctx.r7.s64 + 327680;
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// mr r21,r30
	ctx.r21.u64 = ctx.r30.u64;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// addi r18,r28,96
	ctx.r18.s64 = ctx.r28.s64 + 96;
	// addi r17,r28,98
	ctx.r17.s64 = ctx.r28.s64 + 98;
	// addi r16,r28,100
	ctx.r16.s64 = ctx.r28.s64 + 100;
	// addi r25,r28,112
	ctx.r25.s64 = ctx.r28.s64 + 112;
	// addi r27,r27,14904
	ctx.r27.s64 = ctx.r27.s64 + 14904;
	// li r15,1
	ctx.r15.s64 = 1;
	// ori r23,r10,43691
	ctx.r23.u64 = ctx.r10.u64 | 43691;
	// lis r30,-31762
	ctx.r30.s64 = -2081554432;
	// lis r19,-31776
	ctx.r19.s64 = -2082471936;
	// addi r26,r11,-1792
	ctx.r26.s64 = ctx.r11.s64 + -1792;
loc_82C37E00:
	// ld r11,-16828(r19)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r19.u32 + -16828);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// std r11,0(r21)
	PPC_STORE_U64(ctx.r21.u32 + 0, ctx.r11.u64);
	// stbx r15,r18,r31
	PPC_STORE_U8(ctx.r18.u32 + ctx.r31.u32, ctx.r15.u8);
	// stbx r24,r17,r31
	PPC_STORE_U8(ctx.r17.u32 + ctx.r31.u32, ctx.r24.u8);
	// bl 0x83123968
	ctx.lr = 0x82C37E1C;
	sub_83123968(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// stbx r29,r16,r31
	PPC_STORE_U8(ctx.r16.u32 + ctx.r31.u32, ctx.r29.u8);
	// stw r24,-8(r25)
	PPC_STORE_U32(ctx.r25.u32 + -8, ctx.r24.u32);
	// bl 0x82a672c8
	ctx.lr = 0x82C37E30;
	sub_82A672C8(ctx, base);
	// rlwinm r9,r3,24,8,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFFFFFF;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mulhwu r8,r9,r23
	ctx.r8.u64 = (uint64_t(ctx.r9.u32) * uint64_t(ctx.r23.u32)) >> 32;
	// rlwinm r11,r8,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r6,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r6.s64;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// bl 0x831239e0
	ctx.lr = 0x82C37E60;
	sub_831239E0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83123778
	ctx.lr = 0x82C37E68;
	sub_83123778(ctx, base);
	// lwz r11,-1692(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1692);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c37e98
	if (!cr6.eq) goto loc_82C37E98;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r11,-1692(r30)
	PPC_STORE_U32(ctx.r30.u32 + -1692, ctx.r11.u32);
	// bl 0x837cbbc8
	ctx.lr = 0x82C37E8C;
	sub_837CBBC8(ctx, base);
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17840
	ctx.r3.s64 = ctx.r11.s64 + -17840;
	// bl 0x831cdcc8
	ctx.lr = 0x82C37E98;
	sub_831CDCC8(ctx, base);
loc_82C37E98:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x837cbd68
	ctx.lr = 0x82C37EA8;
	sub_837CBD68(ctx, base);
	// lwz r11,-1692(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1692);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c37ed4
	if (!cr6.eq) goto loc_82C37ED4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r11,-1692(r30)
	PPC_STORE_U32(ctx.r30.u32 + -1692, ctx.r11.u32);
	// bl 0x837cbbc8
	ctx.lr = 0x82C37EC8;
	sub_837CBBC8(ctx, base);
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17840
	ctx.r3.s64 = ctx.r11.s64 + -17840;
	// bl 0x831cdcc8
	ctx.lr = 0x82C37ED4;
	sub_831CDCC8(ctx, base);
loc_82C37ED4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// clrlwi r6,r29,24
	ctx.r6.u64 = ctx.r29.u32 & 0xFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x837cbe70
	ctx.lr = 0x82C37EE8;
	sub_837CBE70(ctx, base);
	// lwz r11,-1692(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1692);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c37f14
	if (!cr6.eq) goto loc_82C37F14;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r11,-1692(r30)
	PPC_STORE_U32(ctx.r30.u32 + -1692, ctx.r11.u32);
	// bl 0x837cbbc8
	ctx.lr = 0x82C37F08;
	sub_837CBBC8(ctx, base);
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17840
	ctx.r3.s64 = ctx.r11.s64 + -17840;
	// bl 0x831cdcc8
	ctx.lr = 0x82C37F14;
	sub_831CDCC8(ctx, base);
loc_82C37F14:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x837cbe70
	ctx.lr = 0x82C37F28;
	sub_837CBE70(ctx, base);
	// lwz r11,-1692(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1692);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c37f54
	if (!cr6.eq) goto loc_82C37F54;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r11,-1692(r30)
	PPC_STORE_U32(ctx.r30.u32 + -1692, ctx.r11.u32);
	// bl 0x837cbbc8
	ctx.lr = 0x82C37F48;
	sub_837CBBC8(ctx, base);
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17840
	ctx.r3.s64 = ctx.r11.s64 + -17840;
	// bl 0x831cdcc8
	ctx.lr = 0x82C37F54;
	sub_831CDCC8(ctx, base);
loc_82C37F54:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,-1
	ctx.r6.s64 = -1;
	// clrlwi r5,r20,16
	ctx.r5.u64 = ctx.r20.u32 & 0xFFFF;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x837cbec8
	ctx.lr = 0x82C37F70;
	sub_837CBEC8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r21,r21,8
	ctx.r21.s64 = ctx.r21.s64 + 8;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// blt cr6,0x82c37e00
	if (cr6.lt) goto loc_82C37E00;
	// lwz r11,-1692(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1692);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c37fb0
	if (!cr6.eq) goto loc_82C37FB0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r11,-1692(r30)
	PPC_STORE_U32(ctx.r30.u32 + -1692, ctx.r11.u32);
	// bl 0x837cbbc8
	ctx.lr = 0x82C37FA4;
	sub_837CBBC8(ctx, base);
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17840
	ctx.r3.s64 = ctx.r11.s64 + -17840;
	// bl 0x831cdcc8
	ctx.lr = 0x82C37FB0;
	sub_831CDCC8(ctx, base);
loc_82C37FB0:
	// stb r15,64(r26)
	PPC_STORE_U8(ctx.r26.u32 + 64, ctx.r15.u8);
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// lwz r11,72(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// stb r24,121(r28)
	PPC_STORE_U8(ctx.r28.u32 + 121, ctx.r24.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r24,120(r28)
	PPC_STORE_U8(ctx.r28.u32 + 120, ctx.r24.u8);
	// blt cr6,0x82c37fe4
	if (cr6.lt) goto loc_82C37FE4;
	// bne cr6,0x82c37fec
	if (!cr6.eq) goto loc_82C37FEC;
	// bl 0x82c37360
	ctx.lr = 0x82C37FD8;
	sub_82C37360(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb04
	__restgprlr_15(ctx, base);
	return;
loc_82C37FE4:
	// bl 0x82c37968
	ctx.lr = 0x82C37FE8;
	sub_82C37968(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82C37FEC:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb04
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C37FF4"))) PPC_WEAK_FUNC(sub_82C37FF4);
PPC_FUNC_IMPL(__imp__sub_82C37FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C37FF8"))) PPC_WEAK_FUNC(sub_82C37FF8);
PPC_FUNC_IMPL(__imp__sub_82C37FF8) {
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
	// lis r31,-31760
	ctx.r31.s64 = -2081423360;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,9264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9264);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c38054
	if (!cr6.eq) goto loc_82C38054;
	// li r11,27
	ctx.r11.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,124
	ctx.r4.s64 = 124;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82C38038;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3804c
	if (cr6.eq) goto loc_82C3804C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c37d68
	ctx.lr = 0x82C38048;
	sub_82C37D68(ctx, base);
	// b 0x82c38050
	goto loc_82C38050;
loc_82C3804C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C38050:
	// stw r3,9264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9264, ctx.r3.u32);
loc_82C38054:
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

__attribute__((alias("__imp__sub_82C3806C"))) PPC_WEAK_FUNC(sub_82C3806C);
PPC_FUNC_IMPL(__imp__sub_82C3806C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C38070"))) PPC_WEAK_FUNC(sub_82C38070);
PPC_FUNC_IMPL(__imp__sub_82C38070) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82C38078;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,144(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c380f4
	if (cr6.eq) goto loc_82C380F4;
	// lbz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 140);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82c380f4
	if (!cr6.eq) goto loc_82C380F4;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r30,r11,-16732
	ctx.r30.s64 = ctx.r11.s64 + -16732;
	// lwz r4,-16732(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16732);
	// bl 0x82d2bb40
	ctx.lr = 0x82C380AC;
	sub_82D2BB40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c380f4
	if (cr6.eq) goto loc_82C380F4;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// bl 0x82d2bb40
	ctx.lr = 0x82C380C4;
	sub_82D2BB40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c380f4
	if (cr6.eq) goto loc_82C380F4;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C380EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r9,140(r31)
	PPC_STORE_U8(ctx.r31.u32 + 140, ctx.r9.u8);
loc_82C380F4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C3810C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C38114"))) PPC_WEAK_FUNC(sub_82C38114);
PPC_FUNC_IMPL(__imp__sub_82C38114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C38118"))) PPC_WEAK_FUNC(sub_82C38118);
PPC_FUNC_IMPL(__imp__sub_82C38118) {
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
	// bl 0x82d1c1a8
	ctx.lr = 0x82C38130;
	sub_82D1C1A8(ctx, base);
	// cmplwi cr6,r3,2
	cr6.compare<uint32_t>(ctx.r3.u32, 2, xer);
	// bge cr6,0x82c38150
	if (!cr6.lt) goto loc_82C38150;
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
loc_82C38150:
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,-2
	ctx.r3.s64 = ctx.r11.s64 + -2;
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

__attribute__((alias("__imp__sub_82C38170"))) PPC_WEAK_FUNC(sub_82C38170);
PPC_FUNC_IMPL(__imp__sub_82C38170) {
	PPC_FUNC_PROLOGUE();
	// stb r4,152(r3)
	PPC_STORE_U8(ctx.r3.u32 + 152, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C38178"))) PPC_WEAK_FUNC(sub_82C38178);
PPC_FUNC_IMPL(__imp__sub_82C38178) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// blt cr6,0x82c38190
	if (cr6.lt) goto loc_82C38190;
	// addi r10,r11,5
	ctx.r10.s64 = ctx.r11.s64 + 5;
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// bgt cr6,0x82c38194
	if (cr6.gt) goto loc_82C38194;
loc_82C38190:
	// li r5,1
	ctx.r5.s64 = 1;
loc_82C38194:
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c381a8
	if (!cr6.eq) goto loc_82C381A8;
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r11.s64;
	// b 0x82c38220
	goto loc_82C38220;
loc_82C381A8:
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// li r10,60
	ctx.r10.s64 = 60;
	// lwz r9,96(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw r7,r8,r10
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	// cmplwi cr6,r7,5
	cr6.compare<uint32_t>(ctx.r7.u32, 5, xer);
	// ble cr6,0x82c38218
	if (!cr6.gt) goto loc_82C38218;
	// cmplwi cr6,r4,2
	cr6.compare<uint32_t>(ctx.r4.u32, 2, xer);
	// ble cr6,0x82c38218
	if (!cr6.gt) goto loc_82C38218;
	// addi r10,r4,-2
	ctx.r10.s64 = ctx.r4.s64 + -2;
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// addi r9,r10,5
	ctx.r9.s64 = ctx.r10.s64 + 5;
	// stw r10,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r10.u32);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// ble cr6,0x82c38210
	if (!cr6.gt) goto loc_82C38210;
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// lis r10,-13108
	ctx.r10.s64 = -859045888;
	// subf r9,r11,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r11.s64;
	// stw r11,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r11.u32);
	// ori r8,r10,52429
	ctx.r8.u64 = ctx.r10.u64 | 52429;
	// mulhwu r7,r9,r8
	ctx.r7.u64 = (uint64_t(ctx.r9.u32) * uint64_t(ctx.r8.u32)) >> 32;
	// rlwinm r11,r7,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r4,r6,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r6.s64;
	// b 0x82c38220
	goto loc_82C38220;
loc_82C38210:
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x82c38228
	goto loc_82C38228;
loc_82C38218:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r11.u32);
loc_82C38220:
	// cmplwi cr6,r4,5
	cr6.compare<uint32_t>(ctx.r4.u32, 5, xer);
	// bge cr6,0x82c38234
	if (!cr6.lt) goto loc_82C38234;
loc_82C38228:
	// addi r5,r4,2
	ctx.r5.s64 = ctx.r4.s64 + 2;
	// lwz r4,148(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// b 0x82d1eac0
	sub_82D1EAC0(ctx, base);
	return;
loc_82C38234:
	// lwz r4,148(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// li r5,4
	ctx.r5.s64 = 4;
	// b 0x82d1eac0
	sub_82D1EAC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C38240"))) PPC_WEAK_FUNC(sub_82C38240);
PPC_FUNC_IMPL(__imp__sub_82C38240) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82C38248;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82c383dc
	if (cr6.eq) goto loc_82C383DC;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// li r10,60
	ctx.r10.s64 = 60;
	// lwz r9,96(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw r7,r8,r10
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	// cmplw cr6,r7,r5
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, xer);
	// ble cr6,0x82c383dc
	if (!cr6.gt) goto loc_82C383DC;
	// lwz r10,100(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r30,r4,100
	ctx.r30.s64 = ctx.r4.s64 + 100;
	// addi r27,r11,16784
	ctx.r27.s64 = ctx.r11.s64 + 16784;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r27,-12
	ctx.r4.s64 = ctx.r27.s64 + -12;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C382A0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c383dc
	if (cr6.eq) goto loc_82C383DC;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mulli r28,r25,60
	ctx.r28.s64 = ctx.r25.s64 * 60;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r4,56(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// beq cr6,0x82c382d4
	if (cr6.eq) goto loc_82C382D4;
	// bl 0x82d29598
	ctx.lr = 0x82C382C8;
	sub_82D29598(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82c382d8
	goto loc_82C382D8;
loc_82C382D4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82C382D8:
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d2aec8
	ctx.lr = 0x82C382E0;
	sub_82D2AEC8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C382F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c383dc
	if (cr6.eq) goto loc_82C383DC;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c38350
	if (cr6.eq) goto loc_82C38350;
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82c3832c
	if (cr6.lt) goto loc_82C3832C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82C3832C:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,112(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C38348;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82c38354
	goto loc_82C38354;
loc_82C38350:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82C38354:
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82C38360;
	sub_82D2AEC8(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82C38374;
	sub_82D2B608(ctx, base);
	// lwz r8,112(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r10,116(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// li r11,0
	ctx.r11.s64 = 0;
	// subf r9,r8,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r8.s64;
	// srawi. r9,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82c383dc
	if (cr0.eq) goto loc_82C383DC;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// ble cr6,0x82c383bc
	if (!cr6.gt) goto loc_82C383BC;
loc_82C38398:
	// lwzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmplw cr6,r25,r7
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r7.u32, xer);
	// beq cr6,0x82c383c8
	if (cr6.eq) goto loc_82C383C8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82c38398
	if (cr6.gt) goto loc_82C38398;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82C383BC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C383C8;
	sub_831CC188(ctx, base);
loc_82C383C8:
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82C383DC;
	sub_82D2B608(ctx, base);
loc_82C383DC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C383E4"))) PPC_WEAK_FUNC(sub_82C383E4);
PPC_FUNC_IMPL(__imp__sub_82C383E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C383E8"))) PPC_WEAK_FUNC(sub_82C383E8);
PPC_FUNC_IMPL(__imp__sub_82C383E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lwz r8,112(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,116(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// subf r9,r8,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r8.s64;
	// srawi. r9,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82c38428
	if (cr0.eq) goto loc_82C38428;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// ble cr6,0x82c38430
	if (!cr6.gt) goto loc_82C38430;
loc_82C3840C:
	// lwzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmplw cr6,r7,r4
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, xer);
	// beq cr6,0x82c3843c
	if (cr6.eq) goto loc_82C3843C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82c3840c
	if (cr6.gt) goto loc_82C3840C;
loc_82C38428:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82C38430:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// b 0x831cc188
	sub_831CC188(ctx, base);
	return;
loc_82C3843C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C38444"))) PPC_WEAK_FUNC(sub_82C38444);
PPC_FUNC_IMPL(__imp__sub_82C38444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C38448"))) PPC_WEAK_FUNC(sub_82C38448);
PPC_FUNC_IMPL(__imp__sub_82C38448) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82C38450;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c38550
	if (cr6.eq) goto loc_82C38550;
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// subfic r10,r11,5
	xer.ca = ctx.r11.u32 <= 5;
	ctx.r10.s64 = 5 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82c384c4
	if (!cr6.eq) goto loc_82C384C4;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c38550
	if (cr6.eq) goto loc_82C38550;
loc_82C38488:
	// addi r4,r30,2
	ctx.r4.s64 = ctx.r30.s64 + 2;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// bl 0x82d33db0
	ctx.lr = 0x82C38494;
	sub_82D33DB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c384ac
	if (cr6.eq) goto loc_82C384AC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c38240
	ctx.lr = 0x82C384AC;
	sub_82C38240(ctx, base);
loc_82C384AC:
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// bgt cr6,0x82c38488
	if (cr6.gt) goto loc_82C38488;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82C384C4:
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r26,60
	ctx.r26.s64 = 60;
	// addi r29,r11,-2
	ctx.r29.s64 = ctx.r11.s64 + -2;
loc_82C384D4:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// bl 0x82d33db0
	ctx.lr = 0x82C384E0;
	sub_82D33DB0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c38544
	if (cr6.eq) goto loc_82C38544;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// blt cr6,0x82c38510
	if (cr6.lt) goto loc_82C38510;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r8,r9,r26
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r26.s32);
	// cmplw cr6,r8,r29
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, xer);
	// bgt cr6,0x82c38514
	if (cr6.gt) goto loc_82C38514;
loc_82C38510:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82C38514:
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82C38524;
	sub_82D2AEC8(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82c38540
	if (!cr6.eq) goto loc_82C38540;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c38240
	ctx.lr = 0x82C38540;
	sub_82C38240(ctx, base);
loc_82C38540:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_82C38544:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplwi cr6,r27,9
	cr6.compare<uint32_t>(ctx.r27.u32, 9, xer);
	// blt cr6,0x82c384d4
	if (cr6.lt) goto loc_82C384D4;
loc_82C38550:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C38558"))) PPC_WEAK_FUNC(sub_82C38558);
PPC_FUNC_IMPL(__imp__sub_82C38558) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82C38560;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,141(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 141);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c386d4
	if (!cr6.eq) goto loc_82C386D4;
	// bl 0x82d19a78
	ctx.lr = 0x82C38578;
	sub_82D19A78(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c38590
	if (!cr6.eq) goto loc_82C38590;
loc_82C38584:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82C38590:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,16660
	ctx.r4.s64 = ctx.r11.s64 + 16660;
	// bl 0x82d2f098
	ctx.lr = 0x82C385A0;
	sub_82D2F098(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,144(r30)
	PPC_STORE_U32(ctx.r30.u32 + 144, ctx.r3.u32);
	// beq cr6,0x82c38584
	if (cr6.eq) goto loc_82C38584;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d33c10
	ctx.lr = 0x82C385B4;
	sub_82D33C10(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c385f0
	if (cr6.eq) goto loc_82C385F0;
loc_82C385C4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a88
	ctx.lr = 0x82C385D0;
	sub_82D19A88(ctx, base);
	// lwz r11,144(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// beq cr6,0x82c385ec
	if (cr6.eq) goto loc_82C385EC;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r29,r31
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, xer);
	// bgt cr6,0x82c385c4
	if (cr6.gt) goto loc_82C385C4;
	// b 0x82c385f0
	goto loc_82C385F0;
loc_82C385EC:
	// stw r31,148(r30)
	PPC_STORE_U32(ctx.r30.u32 + 148, ctx.r31.u32);
loc_82C385F0:
	// lwz r29,128(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x82c38604
	if (!cr6.eq) goto loc_82C38604;
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x82c3860c
	goto loc_82C3860C;
loc_82C38604:
	// cmplwi cr6,r29,5
	cr6.compare<uint32_t>(ctx.r29.u32, 5, xer);
	// bgt cr6,0x82c38684
	if (cr6.gt) goto loc_82C38684;
loc_82C3860C:
	// lwz r3,144(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-16592
	ctx.r11.s64 = ctx.r11.s64 + -16592;
	// li r5,1
	ctx.r5.s64 = 1;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,-4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C38638;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82C3863C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,144(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// bl 0x82d33db0
	ctx.lr = 0x82C38648;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c38674
	if (cr6.eq) goto loc_82C38674;
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// blt cr6,0x82c38668
	if (cr6.lt) goto loc_82C38668;
	// addi r11,r29,2
	ctx.r11.s64 = ctx.r29.s64 + 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// bgt cr6,0x82c3866c
	if (cr6.gt) goto loc_82C3866C;
loc_82C38668:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82C3866C:
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d2aec8
	ctx.lr = 0x82C38674;
	sub_82D2AEC8(ctx, base);
loc_82C38674:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,9
	cr6.compare<uint32_t>(ctx.r31.u32, 9, xer);
	// blt cr6,0x82c3863c
	if (cr6.lt) goto loc_82C3863C;
	// b 0x82c386a8
	goto loc_82C386A8;
loc_82C38684:
	// lwz r3,144(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r10,r11,-16592
	ctx.r10.s64 = ctx.r11.s64 + -16592;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,20(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C386A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C386A8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19720
	ctx.lr = 0x82C386B4;
	sub_82D19720(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,132(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// bl 0x82c38178
	ctx.lr = 0x82C386C4;
	sub_82C38178(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c38448
	ctx.lr = 0x82C386CC;
	sub_82C38448(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,141(r30)
	PPC_STORE_U8(ctx.r30.u32 + 141, ctx.r11.u8);
loc_82C386D4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C386E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C386F0"))) PPC_WEAK_FUNC(sub_82C386F0);
PPC_FUNC_IMPL(__imp__sub_82C386F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82C386F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,152(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 152);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c387f4
	if (cr6.eq) goto loc_82C387F4;
	// bl 0x82d19ba0
	ctx.lr = 0x82C38710;
	sub_82D19BA0(ctx, base);
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// bne cr6,0x82c387f4
	if (!cr6.eq) goto loc_82C387F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1c1a8
	ctx.lr = 0x82C38724;
	sub_82D1C1A8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,1
	ctx.r28.s64 = 1;
	// lis r27,-31776
	ctx.r27.s64 = -2082471936;
loc_82C38734:
	// cmplwi cr6,r29,2
	cr6.compare<uint32_t>(ctx.r29.u32, 2, xer);
	// bgt cr6,0x82c38794
	if (cr6.gt) goto loc_82C38794;
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// subfic r10,r11,5
	xer.ca = ctx.r11.u32 <= 5;
	ctx.r10.s64 = 5 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// bne cr6,0x82c387e4
	if (!cr6.eq) goto loc_82C387E4;
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c387e4
	if (cr6.eq) goto loc_82C387E4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,-16732(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + -16732);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C38784;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stb r28,140(r31)
	PPC_STORE_U8(ctx.r31.u32 + 140, ctx.r28.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c38448
	ctx.lr = 0x82C38790;
	sub_82C38448(ctx, base);
	// b 0x82c387d8
	goto loc_82C387D8;
loc_82C38794:
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r29,-2
	ctx.r4.s64 = ctx.r29.s64 + -2;
	// bl 0x82c383e8
	ctx.lr = 0x82C387A4;
	sub_82C383E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x82c387c8
	if (cr6.eq) goto loc_82C387C8;
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// subfic r10,r11,5
	xer.ca = ctx.r11.u32 <= 5;
	ctx.r10.s64 = 5 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// bne cr6,0x82c387e8
	if (!cr6.eq) goto loc_82C387E8;
loc_82C387C8:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,148(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1eac0
	ctx.lr = 0x82C387D8;
	sub_82D1EAC0(ctx, base);
loc_82C387D8:
	// li r4,123
	ctx.r4.s64 = 123;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d17da0
	ctx.lr = 0x82C387E4;
	sub_82D17DA0(ctx, base);
loc_82C387E4:
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82C387E8:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c38734
	if (cr6.eq) goto loc_82C38734;
loc_82C387F4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C387FC"))) PPC_WEAK_FUNC(sub_82C387FC);
PPC_FUNC_IMPL(__imp__sub_82C387FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C38800"))) PPC_WEAK_FUNC(sub_82C38800);
PPC_FUNC_IMPL(__imp__sub_82C38800) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82C38808;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,152(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 152);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c38918
	if (cr6.eq) goto loc_82C38918;
	// bl 0x82d19ba0
	ctx.lr = 0x82C38820;
	sub_82D19BA0(ctx, base);
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// bne cr6,0x82c38918
	if (!cr6.eq) goto loc_82C38918;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1c1a8
	ctx.lr = 0x82C38834;
	sub_82D1C1A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,1
	ctx.r28.s64 = 1;
	// lis r27,-31776
	ctx.r27.s64 = -2082471936;
loc_82C38844:
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r30,6
	cr6.compare<uint32_t>(ctx.r30.u32, 6, xer);
	// blt cr6,0x82c388ac
	if (cr6.lt) goto loc_82C388AC;
	// subfic r10,r11,5
	xer.ca = ctx.r11.u32 <= 5;
	ctx.r10.s64 = 5 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// bne cr6,0x82c38908
	if (!cr6.eq) goto loc_82C38908;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// ble cr6,0x82c38908
	if (!cr6.gt) goto loc_82C38908;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,-16728(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + -16728);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C3889C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stb r28,140(r31)
	PPC_STORE_U8(ctx.r31.u32 + 140, ctx.r28.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c38448
	ctx.lr = 0x82C388A8;
	sub_82C38448(ctx, base);
	// b 0x82c388fc
	goto loc_82C388FC;
loc_82C388AC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// ble cr6,0x82c38908
	if (!cr6.gt) goto loc_82C38908;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r30,-2
	ctx.r4.s64 = ctx.r30.s64 + -2;
	// bl 0x82c383e8
	ctx.lr = 0x82C388C8;
	sub_82C383E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x82c388ec
	if (cr6.eq) goto loc_82C388EC;
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// subfic r10,r11,5
	xer.ca = ctx.r11.u32 <= 5;
	ctx.r10.s64 = 5 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// bne cr6,0x82c3890c
	if (!cr6.eq) goto loc_82C3890C;
loc_82C388EC:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,148(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1eac0
	ctx.lr = 0x82C388FC;
	sub_82D1EAC0(ctx, base);
loc_82C388FC:
	// li r4,123
	ctx.r4.s64 = 123;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d17da0
	ctx.lr = 0x82C38908;
	sub_82D17DA0(ctx, base);
loc_82C38908:
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_82C3890C:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c38844
	if (cr6.eq) goto loc_82C38844;
loc_82C38918:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C38920"))) PPC_WEAK_FUNC(sub_82C38920);
PPC_FUNC_IMPL(__imp__sub_82C38920) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82C38928;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82c389b8
	if (cr6.eq) goto loc_82C389B8;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r5,48
	ctx.r31.s64 = ctx.r5.s64 + 48;
	// li r26,15
	ctx.r26.s64 = 15;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,-1
	ctx.r27.s64 = -1;
loc_82C38950:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82c389a4
	if (cr6.eq) goto loc_82C389A4;
	// stw r26,-28(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28, ctx.r26.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r28,-32(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32, ctx.r28.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r28,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r28.u8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82C38978;
	sub_8259CB28(ctx, base);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// stw r28,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r28.u32);
	// addi r11,r30,56
	ctx.r11.s64 = ctx.r30.s64 + 56;
	// stb r28,-20(r31)
	PPC_STORE_U8(ctx.r31.u32 + -20, ctx.r28.u8);
	// addi r3,r31,-20
	ctx.r3.s64 = ctx.r31.s64 + -20;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-28
	ctx.r4.s64 = ctx.r11.s64 + -28;
	// bl 0x8259cb28
	ctx.lr = 0x82C3899C;
	sub_8259CB28(ctx, base);
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82C389A4:
	// addi r30,r30,60
	ctx.r30.s64 = ctx.r30.s64 + 60;
	// addi r29,r29,60
	ctx.r29.s64 = ctx.r29.s64 + 60;
	// addi r31,r31,60
	ctx.r31.s64 = ctx.r31.s64 + 60;
	// cmplw cr6,r30,r25
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, xer);
	// bne cr6,0x82c38950
	if (!cr6.eq) goto loc_82C38950;
loc_82C389B8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C389C4"))) PPC_WEAK_FUNC(sub_82C389C4);
PPC_FUNC_IMPL(__imp__sub_82C389C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C389C8"))) PPC_WEAK_FUNC(sub_82C389C8);
PPC_FUNC_IMPL(__imp__sub_82C389C8) {
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
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// addi r31,r3,112
	ctx.r31.s64 = ctx.r3.s64 + 112;
	// lwz r3,112(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,116(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// bne cr6,0x82c38a48
	if (!cr6.eq) goto loc_82C38A48;
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, xer);
	// beq cr6,0x82c38a90
	if (cr6.eq) goto loc_82C38A90;
loc_82C38A04:
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// beq cr6,0x82c38a20
	if (cr6.eq) goto loc_82C38A20;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, xer);
	// bne cr6,0x82c38a04
	if (!cr6.eq) goto loc_82C38A04;
	// b 0x82c38a90
	goto loc_82C38A90;
loc_82C38A20:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// srawi r9,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x831ce420
	ctx.lr = 0x82C38A38;
	sub_831CE420(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r8,r11,-4
	ctx.r8.s64 = ctx.r11.s64 + -4;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// b 0x82c38a8c
	goto loc_82C38A8C;
loc_82C38A48:
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, xer);
	// beq cr6,0x82c38a70
	if (cr6.eq) goto loc_82C38A70;
loc_82C38A50:
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// beq cr6,0x82c38a6c
	if (cr6.eq) goto loc_82C38A6C;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, xer);
	// bne cr6,0x82c38a50
	if (!cr6.eq) goto loc_82C38A50;
	// b 0x82c38a70
	goto loc_82C38A70;
loc_82C38A6C:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82C38A70:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c38a90
	if (!cr6.eq) goto loc_82C38A90;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835977d8
	ctx.lr = 0x82C38A8C;
	sub_835977D8(ctx, base);
loc_82C38A8C:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82C38A90:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82c38aa4
	if (!cr6.eq) goto loc_82C38AA4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c38448
	ctx.lr = 0x82C38AA4;
	sub_82C38448(ctx, base);
loc_82C38AA4:
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

__attribute__((alias("__imp__sub_82C38ABC"))) PPC_WEAK_FUNC(sub_82C38ABC);
PPC_FUNC_IMPL(__imp__sub_82C38ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C38AC0"))) PPC_WEAK_FUNC(sub_82C38AC0);
PPC_FUNC_IMPL(__imp__sub_82C38AC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82C38AC8;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,1092
	ctx.r11.s64 = 71565312;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,17476
	ctx.r10.u64 = ctx.r11.u64 | 17476;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82c38aec
	if (!cr6.gt) goto loc_82C38AEC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x82C38AEC;
	sub_831CC150(ctx, base);
loc_82C38AEC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r26,60
	ctx.r26.s64 = 60;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r26
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r26.s32);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// bge cr6,0x82c38b94
	if (!cr6.lt) goto loc_82C38B94;
	// li r27,2
	ctx.r27.s64 = 2;
	// mulli r28,r4,60
	ctx.r28.s64 = ctx.r4.s64 * 60;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82C38B24;
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
	// bl 0x82c38920
	ctx.lr = 0x82C38B48;
	sub_82C38920(ctx, base);
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
	// beq cr6,0x82c38b7c
	if (cr6.eq) goto loc_82C38B7C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82f05918
	ctx.lr = 0x82C38B6C;
	sub_82F05918(ctx, base);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82C38B7C;
	sub_825952B8(ctx, base);
loc_82C38B7C:
	// mulli r11,r26,60
	ctx.r11.s64 = ctx.r26.s64 * 60;
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
loc_82C38B94:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C38B9C"))) PPC_WEAK_FUNC(sub_82C38B9C);
PPC_FUNC_IMPL(__imp__sub_82C38B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C38BA0"))) PPC_WEAK_FUNC(sub_82C38BA0);
PPC_FUNC_IMPL(__imp__sub_82C38BA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,1092
	ctx.r10.s64 = 71565312;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,60
	ctx.r9.s64 = 60;
	// ori r8,r10,17476
	ctx.r8.u64 = ctx.r10.u64 | 17476;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// subf r5,r4,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r4.s64;
	// divw r10,r6,r9
	ctx.r10.s32 = PPCDivide(ctx.r6.s32, ctx.r9.s32);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bge cr6,0x82c38bd4
	if (!cr6.lt) goto loc_82C38BD4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// b 0x831cc150
	sub_831CC150(ctx, base);
	return;
loc_82C38BD4:
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
	// blt cr6,0x82c38c04
	if (cr6.lt) goto loc_82C38C04;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82C38C04:
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x82c38c10
	if (!cr6.lt) goto loc_82C38C10;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_82C38C10:
	// b 0x82c38ac0
	sub_82C38AC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C38C14"))) PPC_WEAK_FUNC(sub_82C38C14);
PPC_FUNC_IMPL(__imp__sub_82C38C14) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C38C18"))) PPC_WEAK_FUNC(sub_82C38C18);
PPC_FUNC_IMPL(__imp__sub_82C38C18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82C38C20;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,16880
	ctx.r9.s64 = ctx.r11.s64 + 16880;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// li r28,2
	ctx.r28.s64 = 2;
	// lwz r4,112(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82c38c5c
	if (cr6.eq) goto loc_82C38C5C;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82C38C5C;
	sub_825952B8(ctx, base);
loc_82C38C5C:
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r30,96
	ctx.r31.s64 = ctx.r30.s64 + 96;
	// stw r29,116(r30)
	PPC_STORE_U32(ctx.r30.u32 + 116, ctx.r29.u32);
	// stw r29,120(r30)
	PPC_STORE_U32(ctx.r30.u32 + 120, ctx.r29.u32);
	// stw r29,112(r30)
	PPC_STORE_U32(ctx.r30.u32 + 112, ctx.r29.u32);
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c38c9c
	if (cr6.eq) goto loc_82C38C9C;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82f05918
	ctx.lr = 0x82C38C8C;
	sub_82F05918(ctx, base);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82C38C9C;
	sub_825952B8(ctx, base);
loc_82C38C9C:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// bl 0x82d25548
	ctx.lr = 0x82C38CB0;
	sub_82D25548(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C38CB8"))) PPC_WEAK_FUNC(sub_82C38CB8);
PPC_FUNC_IMPL(__imp__sub_82C38CB8) {
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
	// bge cr6,0x82c38cf0
	if (!cr6.lt) goto loc_82C38CF0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x82c38cf4
	if (!cr6.gt) goto loc_82C38CF4;
loc_82C38CF0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82C38CF4:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c38d44
	if (cr6.eq) goto loc_82C38D44;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,60
	ctx.r9.s64 = 60;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r7,r10,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// divw r30,r7,r9
	ctx.r30.s32 = PPCDivide(ctx.r7.s32, ctx.r9.s32);
	// bne cr6,0x82c38d28
	if (!cr6.eq) goto loc_82C38D28;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c38ba0
	ctx.lr = 0x82C38D28;
	sub_82C38BA0(ctx, base);
loc_82C38D28:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c38d70
	if (cr6.eq) goto loc_82C38D70;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r11,r30,60
	ctx.r11.s64 = ctx.r30.s64 * 60;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82c38d6c
	goto loc_82C38D6C;
loc_82C38D44:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82c38d5c
	if (!cr6.eq) goto loc_82C38D5C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c38ba0
	ctx.lr = 0x82C38D5C;
	sub_82C38BA0(ctx, base);
loc_82C38D5C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c38d70
	if (cr6.eq) goto loc_82C38D70;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82C38D6C:
	// bl 0x82e7e410
	ctx.lr = 0x82C38D70;
	sub_82E7E410(ctx, base);
loc_82C38D70:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 + 60;
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

__attribute__((alias("__imp__sub_82C38D94"))) PPC_WEAK_FUNC(sub_82C38D94);
PPC_FUNC_IMPL(__imp__sub_82C38D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C38D98"))) PPC_WEAK_FUNC(sub_82C38D98);
PPC_FUNC_IMPL(__imp__sub_82C38D98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82C38DA0;
	__savegprlr_23(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// bl 0x8308e078
	ctx.lr = 0x82C38DC0;
	sub_8308E078(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d253f8
	ctx.lr = 0x82C38DD8;
	sub_82D253F8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,16880
	ctx.r9.s64 = ctx.r11.s64 + 16880;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// stw r8,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r8.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r31,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r31.u32);
	// addi r28,r30,96
	ctx.r28.s64 = ctx.r30.s64 + 96;
	// stw r31,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r31.u32);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// stw r31,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r31.u32);
	// stw r31,112(r30)
	PPC_STORE_U32(ctx.r30.u32 + 112, ctx.r31.u32);
	// stw r31,116(r30)
	PPC_STORE_U32(ctx.r30.u32 + 116, ctx.r31.u32);
	// stw r31,120(r30)
	PPC_STORE_U32(ctx.r30.u32 + 120, ctx.r31.u32);
	// stw r26,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r26.u32);
	// stw r25,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r25.u32);
	// stw r31,136(r30)
	PPC_STORE_U32(ctx.r30.u32 + 136, ctx.r31.u32);
	// stb r31,140(r30)
	PPC_STORE_U8(ctx.r30.u32 + 140, ctx.r31.u8);
	// stb r31,141(r30)
	PPC_STORE_U8(ctx.r30.u32 + 141, ctx.r31.u8);
	// stw r31,144(r30)
	PPC_STORE_U32(ctx.r30.u32 + 144, ctx.r31.u32);
	// stw r31,148(r30)
	PPC_STORE_U32(ctx.r30.u32 + 148, ctx.r31.u32);
	// stb r11,152(r30)
	PPC_STORE_U8(ctx.r30.u32 + 152, ctx.r11.u8);
	// bne cr6,0x82c38e40
	if (!cr6.eq) goto loc_82C38E40;
	// stw r11,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r11.u32);
loc_82C38E40:
	// lwz r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x82c38e70
	if (!cr6.gt) goto loc_82C38E70;
loc_82C38E50:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c38cb8
	ctx.lr = 0x82C38E5C;
	sub_82C38CB8(ctx, base);
	// lwz r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r27,r27,60
	ctx.r27.s64 = ctx.r27.s64 + 60;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// bgt cr6,0x82c38e50
	if (cr6.gt) goto loc_82C38E50;
loc_82C38E70:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r24,60
	ctx.r24.s64 = 60;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw. r8,r9,r24
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r24.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82c38f78
	if (cr0.eq) goto loc_82C38F78;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// li r27,15
	ctx.r27.s64 = 15;
	// li r23,2
	ctx.r23.s64 = 2;
	// addi r26,r11,16636
	ctx.r26.s64 = ctx.r11.s64 + 16636;
loc_82C38EA0:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c38f58
	if (cr6.eq) goto loc_82C38F58;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// li r5,20
	ctx.r5.s64 = 20;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x82C38ED0;
	sub_8259CC28(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82c38ee8
	if (cr6.lt) goto loc_82C38EE8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82C38EE8:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82C38EEC:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82c38eec
	if (!cr6.eq) goto loc_82C38EEC;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82C38F14;
	sub_825A1EB8(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82c38f28
	if (!cr6.lt) goto loc_82C38F28;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82C38F28:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d20ae0
	ctx.lr = 0x82C38F30;
	sub_82D20AE0(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c38f4c
	if (cr6.lt) goto loc_82C38F4C;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82C38F4C;
	sub_825952B8(ctx, base);
loc_82C38F4C:
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
loc_82C38F58:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r29,r29,60
	ctx.r29.s64 = ctx.r29.s64 + 60;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r8,r9,r24
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r24.s32);
	// cmplw cr6,r8,r25
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r25.u32, xer);
	// bgt cr6,0x82c38ea0
	if (cr6.gt) goto loc_82C38EA0;
loc_82C38F78:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C38F84"))) PPC_WEAK_FUNC(sub_82C38F84);
PPC_FUNC_IMPL(__imp__sub_82C38F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C38F88"))) PPC_WEAK_FUNC(sub_82C38F88);
PPC_FUNC_IMPL(__imp__sub_82C38F88) {
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
	// bl 0x82c38c18
	ctx.lr = 0x82C38FA8;
	sub_82C38C18(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c38fc0
	if (cr6.eq) goto loc_82C38FC0;
	// bl 0x82416268
	ctx.lr = 0x82C38FBC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C38FC0:
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

__attribute__((alias("__imp__sub_82C38FD8"))) PPC_WEAK_FUNC(sub_82C38FD8);
PPC_FUNC_IMPL(__imp__sub_82C38FD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// lwz r11,10008(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10008);
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

__attribute__((alias("__imp__sub_82C38FEC"))) PPC_WEAK_FUNC(sub_82C38FEC);
PPC_FUNC_IMPL(__imp__sub_82C38FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C38FF0"))) PPC_WEAK_FUNC(sub_82C38FF0);
PPC_FUNC_IMPL(__imp__sub_82C38FF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r5,2
	cr6.compare<int32_t>(ctx.r5.s32, 2, xer);
	// bne cr6,0x82c39018
	if (!cr6.eq) goto loc_82C39018;
	// li r9,2
	ctx.r9.s64 = 2;
	// stb r10,81(r3)
	PPC_STORE_U8(ctx.r3.u32 + 81, ctx.r10.u8);
	// stb r10,82(r11)
	PPC_STORE_U8(ctx.r11.u32 + 82, ctx.r10.u8);
	// stw r9,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r9.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82C39018:
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x82c3903c
	if (!cr6.eq) goto loc_82C3903C;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// stb r10,81(r11)
	PPC_STORE_U8(ctx.r11.u32 + 81, ctx.r10.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r9.u32);
	// stb r10,82(r11)
	PPC_STORE_U8(ctx.r11.u32 + 82, ctx.r10.u8);
	// blr 
	return;
loc_82C3903C:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// bne cr6,0x82c39048
	if (!cr6.eq) goto loc_82C39048;
	// stw r10,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
loc_82C39048:
	// stw r10,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,81(r11)
	PPC_STORE_U8(ctx.r11.u32 + 81, ctx.r10.u8);
	// stb r10,82(r11)
	PPC_STORE_U8(ctx.r11.u32 + 82, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C3905C"))) PPC_WEAK_FUNC(sub_82C3905C);
PPC_FUNC_IMPL(__imp__sub_82C3905C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C39060"))) PPC_WEAK_FUNC(sub_82C39060);
PPC_FUNC_IMPL(__imp__sub_82C39060) {
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
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c39098
	if (cr6.eq) goto loc_82C39098;
loc_82C39080:
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
loc_82C39098:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cdef30
	ctx.lr = 0x82C390A0;
	sub_82CDEF30(ctx, base);
	// stw r3,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c39080
	if (cr6.eq) goto loc_82C39080;
	// lbz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// li r4,1
	ctx.r4.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c390c0
	if (!cr6.eq) goto loc_82C390C0;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82C390C0:
	// bl 0x82cdf060
	ctx.lr = 0x82C390C4;
	sub_82CDF060(ctx, base);
	// lbz r11,83(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 83);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c390e8
	if (cr6.eq) goto loc_82C390E8;
	// lbz r11,82(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 82);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r5,r10,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x82cdf078
	ctx.lr = 0x82C390E8;
	sub_82CDF078(ctx, base);
loc_82C390E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,92(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// bl 0x83103100
	ctx.lr = 0x82C390F4;
	sub_83103100(ctx, base);
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

__attribute__((alias("__imp__sub_82C3910C"))) PPC_WEAK_FUNC(sub_82C3910C);
PPC_FUNC_IMPL(__imp__sub_82C3910C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C39110"))) PPC_WEAK_FUNC(sub_82C39110);
PPC_FUNC_IMPL(__imp__sub_82C39110) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,88(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3918c
	if (cr6.eq) goto loc_82C3918C;
	// bl 0x82d17e98
	ctx.lr = 0x82C39134;
	sub_82D17E98(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c39178
	if (!cr6.eq) goto loc_82C39178;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3918c
	if (cr6.eq) goto loc_82C3918C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C3915C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r9.u32);
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
loc_82C39178:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d20da8
	ctx.lr = 0x82C39184;
	sub_82D20DA8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
loc_82C3918C:
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

__attribute__((alias("__imp__sub_82C391A0"))) PPC_WEAK_FUNC(sub_82C391A0);
PPC_FUNC_IMPL(__imp__sub_82C391A0) {
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
	// lis r11,264
	ctx.r11.s64 = 17301504;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r9,r11,20480
	ctx.r9.u64 = ctx.r11.u64 | 20480;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82c39210
	if (!cr6.eq) goto loc_82C39210;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x82c3920c
	if (cr6.eq) goto loc_82C3920C;
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3920c
	if (cr6.eq) goto loc_82C3920C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C39208;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
loc_82C3920C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82C39210:
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

__attribute__((alias("__imp__sub_82C39228"))) PPC_WEAK_FUNC(sub_82C39228);
PPC_FUNC_IMPL(__imp__sub_82C39228) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,92(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c39260
	if (cr6.eq) goto loc_82C39260;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C39258;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r9.u32);
loc_82C39260:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c39274
	if (cr6.eq) goto loc_82C39274;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c39110
	ctx.lr = 0x82C39274;
	sub_82C39110(ctx, base);
loc_82C39274:
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

__attribute__((alias("__imp__sub_82C39288"))) PPC_WEAK_FUNC(sub_82C39288);
PPC_FUNC_IMPL(__imp__sub_82C39288) {
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
	// lwz r3,92(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c392c4
	if (cr6.eq) goto loc_82C392C4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C392C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
loc_82C392C4:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c392d8
	if (cr6.eq) goto loc_82C392D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c39110
	ctx.lr = 0x82C392D8;
	sub_82C39110(ctx, base);
loc_82C392D8:
	// li r11,4
	ctx.r11.s64 = 4;
	// stb r30,82(r31)
	PPC_STORE_U8(ctx.r31.u32 + 82, ctx.r30.u8);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,81(r31)
	PPC_STORE_U8(ctx.r31.u32 + 81, ctx.r10.u8);
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

__attribute__((alias("__imp__sub_82C39308"))) PPC_WEAK_FUNC(sub_82C39308);
PPC_FUNC_IMPL(__imp__sub_82C39308) {
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
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c3934c
	if (!cr6.eq) goto loc_82C3934C;
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c3934c
	if (!cr6.eq) goto loc_82C3934C;
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
loc_82C3934C:
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c39370
	if (cr6.eq) goto loc_82C39370;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C39368;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r9.u32);
loc_82C39370:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c39384
	if (cr6.eq) goto loc_82C39384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c39110
	ctx.lr = 0x82C39384;
	sub_82C39110(ctx, base);
loc_82C39384:
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

__attribute__((alias("__imp__sub_82C3939C"))) PPC_WEAK_FUNC(sub_82C3939C);
PPC_FUNC_IMPL(__imp__sub_82C3939C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C393A0"))) PPC_WEAK_FUNC(sub_82C393A0);
PPC_FUNC_IMPL(__imp__sub_82C393A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82C393A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r3,36
	ctx.r30.s64 = ctx.r3.s64 + 36;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c393c8
	if (cr6.lt) goto loc_82C393C8;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82416268
	ctx.lr = 0x82C393C8;
	sub_82416268(ctx, base);
loc_82C393C8:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
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
	// blt cr6,0x82c393f4
	if (cr6.lt) goto loc_82C393F4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82416268
	ctx.lr = 0x82C393F4;
	sub_82416268(ctx, base);
loc_82C393F4:
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

__attribute__((alias("__imp__sub_82C39408"))) PPC_WEAK_FUNC(sub_82C39408);
PPC_FUNC_IMPL(__imp__sub_82C39408) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82C39410;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r3,36
	ctx.r31.s64 = ctx.r3.s64 + 36;
	// li r27,2
	ctx.r27.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c3943c
	if (cr6.lt) goto loc_82C3943C;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82C3943C;
	sub_825952B8(ctx, base);
loc_82C3943C:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// stb r29,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r29.u8);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c39470
	if (cr6.lt) goto loc_82C39470;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82C39470;
	sub_825952B8(ctx, base);
loc_82C39470:
	// stw r28,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r28.u32);
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// stb r29,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r29.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C39484"))) PPC_WEAK_FUNC(sub_82C39484);
PPC_FUNC_IMPL(__imp__sub_82C39484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C39488"))) PPC_WEAK_FUNC(sub_82C39488);
PPC_FUNC_IMPL(__imp__sub_82C39488) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82C39490;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
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
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r27,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r27.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r29,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r29.u8);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// bl 0x82470e60
	ctx.lr = 0x82C394D0;
	sub_82470E60(ctx, base);
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,36
	ctx.r4.s64 = ctx.r30.s64 + 36;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// stw r27,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r27.u32);
	// stw r29,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r29.u32);
	// stb r29,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r29.u8);
	// bl 0x82470e60
	ctx.lr = 0x82C394F8;
	sub_82470E60(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r10,r30,62
	ctx.r10.s64 = ctx.r30.s64 + 62;
	// addi r9,r31,62
	ctx.r9.s64 = ctx.r31.s64 + 62;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_82C39508:
	// lhzu r11,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// sthu r11,2(r9)
	ea = 2 + ctx.r9.u32;
	PPC_STORE_U16(ea, ctx.r11.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x82c39508
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82C39508;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C39520"))) PPC_WEAK_FUNC(sub_82C39520);
PPC_FUNC_IMPL(__imp__sub_82C39520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82C39528;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
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
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// lbz r10,1(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r10,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r10.u8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r27,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r27.u32);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// stb r29,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r29.u8);
	// bl 0x8259cb28
	ctx.lr = 0x82C39570;
	sub_8259CB28(ctx, base);
	// lwz r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,36
	ctx.r4.s64 = ctx.r30.s64 + 36;
	// stw r9,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// stw r27,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r27.u32);
	// stw r29,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r29.u32);
	// stb r29,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r29.u8);
	// bl 0x8259cb28
	ctx.lr = 0x82C39598;
	sub_8259CB28(ctx, base);
	// lwz r8,64(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C395AC"))) PPC_WEAK_FUNC(sub_82C395AC);
PPC_FUNC_IMPL(__imp__sub_82C395AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C395B0"))) PPC_WEAK_FUNC(sub_82C395B0);
PPC_FUNC_IMPL(__imp__sub_82C395B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82C395B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82c39624
	if (cr6.eq) goto loc_82C39624;
	// addi r31,r3,56
	ctx.r31.s64 = ctx.r3.s64 + 56;
	// li r29,15
	ctx.r29.s64 = 15;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82C395D4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c395e8
	if (cr6.lt) goto loc_82C395E8;
	// lwz r3,-20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// bl 0x82416268
	ctx.lr = 0x82C395E8;
	sub_82416268(ctx, base);
loc_82C395E8:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r30,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r30.u32);
	// stb r30,-20(r31)
	PPC_STORE_U8(ctx.r31.u32 + -20, ctx.r30.u8);
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c39608
	if (cr6.lt) goto loc_82C39608;
	// lwz r3,-52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -52);
	// bl 0x82416268
	ctx.lr = 0x82C39608;
	sub_82416268(ctx, base);
loc_82C39608:
	// stw r29,-32(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32, ctx.r29.u32);
	// stw r30,-36(r31)
	PPC_STORE_U32(ctx.r31.u32 + -36, ctx.r30.u32);
	// stb r30,-52(r31)
	PPC_STORE_U8(ctx.r31.u32 + -52, ctx.r30.u8);
	// addi r31,r31,76
	ctx.r31.s64 = ctx.r31.s64 + 76;
	// addi r11,r31,-56
	ctx.r11.s64 = ctx.r31.s64 + -56;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// bne cr6,0x82c395d4
	if (!cr6.eq) goto loc_82C395D4;
loc_82C39624:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C3962C"))) PPC_WEAK_FUNC(sub_82C3962C);
PPC_FUNC_IMPL(__imp__sub_82C3962C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C39630"))) PPC_WEAK_FUNC(sub_82C39630);
PPC_FUNC_IMPL(__imp__sub_82C39630) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82c39730
	if (cr6.eq) goto loc_82C39730;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82c39730
	if (cr6.eq) goto loc_82C39730;
	// lbz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// addi r4,r5,4
	ctx.r4.s64 = ctx.r5.s64 + 4;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// lwz r10,24(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82c39678
	if (cr6.lt) goto loc_82C39678;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82C39678:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82C3967C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c3967c
	if (!cr6.eq) goto loc_82C3967C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82C396A0;
	sub_8259CC28(ctx, base);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r10,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r10.u32);
	// bl 0x82d860f0
	ctx.lr = 0x82C396AC;
	sub_82D860F0(ctx, base);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r4,r31,36
	ctx.r4.s64 = ctx.r31.s64 + 36;
	// subf r8,r9,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r9.s64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// stb r6,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r6.u8);
	// lwz r5,56(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x82c396d4
	if (cr6.lt) goto loc_82C396D4;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82C396D4:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82C396D8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c396d8
	if (!cr6.eq) goto loc_82C396D8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82C396FC;
	sub_8259CC28(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r10,r1,78
	ctx.r10.s64 = ctx.r1.s64 + 78;
	// addi r9,r31,62
	ctx.r9.s64 = ctx.r31.s64 + 62;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_82C3970C:
	// lhzu r11,2(r9)
	ea = 2 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// sthu r11,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r11.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x82c3970c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82C3970C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74260
	ctx.lr = 0x82C39720;
	sub_82E74260(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r11.u32);
	// b 0x82c39734
	goto loc_82C39734;
loc_82C39730:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C39734:
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

__attribute__((alias("__imp__sub_82C3974C"))) PPC_WEAK_FUNC(sub_82C3974C);
PPC_FUNC_IMPL(__imp__sub_82C3974C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C39750"))) PPC_WEAK_FUNC(sub_82C39750);
PPC_FUNC_IMPL(__imp__sub_82C39750) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82C39758;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82c397d8
	if (cr6.eq) goto loc_82C397D8;
	// addi r31,r3,56
	ctx.r31.s64 = ctx.r3.s64 + 56;
	// li r28,2
	ctx.r28.s64 = 2;
	// li r29,15
	ctx.r29.s64 = 15;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82C39778:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c39794
	if (cr6.lt) goto loc_82C39794;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// bl 0x825952b8
	ctx.lr = 0x82C39794;
	sub_825952B8(ctx, base);
loc_82C39794:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r30,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r30.u32);
	// stb r30,-20(r31)
	PPC_STORE_U8(ctx.r31.u32 + -20, ctx.r30.u8);
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c397bc
	if (cr6.lt) goto loc_82C397BC;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,-52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -52);
	// bl 0x825952b8
	ctx.lr = 0x82C397BC;
	sub_825952B8(ctx, base);
loc_82C397BC:
	// stw r29,-32(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32, ctx.r29.u32);
	// stw r30,-36(r31)
	PPC_STORE_U32(ctx.r31.u32 + -36, ctx.r30.u32);
	// stb r30,-52(r31)
	PPC_STORE_U8(ctx.r31.u32 + -52, ctx.r30.u8);
	// addi r31,r31,68
	ctx.r31.s64 = ctx.r31.s64 + 68;
	// addi r11,r31,-56
	ctx.r11.s64 = ctx.r31.s64 + -56;
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, xer);
	// bne cr6,0x82c39778
	if (!cr6.eq) goto loc_82C39778;
loc_82C397D8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C397E0"))) PPC_WEAK_FUNC(sub_82C397E0);
PPC_FUNC_IMPL(__imp__sub_82C397E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82C397E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82c3986c
	if (cr6.eq) goto loc_82C3986C;
	// addi r31,r3,32
	ctx.r31.s64 = ctx.r3.s64 + 32;
	// li r29,-1
	ctx.r29.s64 = -1;
loc_82C39804:
	// lbz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,-28
	ctx.r4.s64 = ctx.r31.s64 + -28;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// bl 0x82470e60
	ctx.lr = 0x82C39820;
	sub_82470E60(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// stw r10,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r10.u32);
	// bl 0x82470e60
	ctx.lr = 0x82C3983C;
	sub_82470E60(ctx, base);
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r31,30
	ctx.r11.s64 = ctx.r31.s64 + 30;
	// addi r10,r30,62
	ctx.r10.s64 = ctx.r30.s64 + 62;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82C3984C:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x82c3984c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82C3984C;
	// addi r31,r31,76
	ctx.r31.s64 = ctx.r31.s64 + 76;
	// addi r30,r30,76
	ctx.r30.s64 = ctx.r30.s64 + 76;
	// addi r11,r31,-32
	ctx.r11.s64 = ctx.r31.s64 + -32;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// bne cr6,0x82c39804
	if (!cr6.eq) goto loc_82C39804;
loc_82C3986C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C39878"))) PPC_WEAK_FUNC(sub_82C39878);
PPC_FUNC_IMPL(__imp__sub_82C39878) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82C39880;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r27,4(r4)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,36
	ctx.r4.s64 = 36;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82C398AC;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addic. r3,r3,8
	xer.ca = ctx.r3.u32 > 4294967287;
	ctx.r3.s64 = ctx.r3.s64 + 8;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// beq 0x82c398e4
	if (cr0.eq) goto loc_82C398E4;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82470e60
	ctx.lr = 0x82C398E4;
	sub_82470E60(ctx, base);
loc_82C398E4:
	// lis r10,2340
	ctx.r10.s64 = 153354240;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// ori r9,r10,37448
	ctx.r9.u64 = ctx.r10.u64 | 37448;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bge cr6,0x82c39908
	if (!cr6.lt) goto loc_82C39908;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,15616
	ctx.r3.s64 = ctx.r11.s64 + 15616;
	// bl 0x831cc150
	ctx.lr = 0x82C39908;
	sub_831CC150(ctx, base);
loc_82C39908:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C39924"))) PPC_WEAK_FUNC(sub_82C39924);
PPC_FUNC_IMPL(__imp__sub_82C39924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C39928"))) PPC_WEAK_FUNC(sub_82C39928);
PPC_FUNC_IMPL(__imp__sub_82C39928) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82C39930;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82c399a8
	if (cr6.eq) goto loc_82C399A8;
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// li r29,-1
	ctx.r29.s64 = -1;
loc_82C3994C:
	// lbz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -4);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// lbz r10,-3(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -3);
	// stb r10,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r10.u8);
	// bl 0x8259cb28
	ctx.lr = 0x82C39970;
	sub_8259CB28(ctx, base);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// stw r9,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r9.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82C3998C;
	sub_8259CB28(ctx, base);
	// lwz r8,60(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r31,r31,68
	ctx.r31.s64 = ctx.r31.s64 + 68;
	// addi r7,r31,-4
	ctx.r7.s64 = ctx.r31.s64 + -4;
	// stw r8,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r8.u32);
	// cmplw cr6,r7,r28
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r28.u32, xer);
	// addi r30,r30,68
	ctx.r30.s64 = ctx.r30.s64 + 68;
	// bne cr6,0x82c3994c
	if (!cr6.eq) goto loc_82C3994C;
loc_82C399A8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C399B4"))) PPC_WEAK_FUNC(sub_82C399B4);
PPC_FUNC_IMPL(__imp__sub_82C399B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C399B8"))) PPC_WEAK_FUNC(sub_82C399B8);
PPC_FUNC_IMPL(__imp__sub_82C399B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82C399C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// lis r10,-32203
	ctx.r10.s64 = -2110455808;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stb r30,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r30.u8);
	// addi r28,r10,-22544
	ctx.r28.s64 = ctx.r10.s64 + -22544;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stb r30,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r30.u8);
	// addi r29,r31,36
	ctx.r29.s64 = ctx.r31.s64 + 36;
	// stb r30,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r30.u8);
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// bl 0x8259cc28
	ctx.lr = 0x82C39A0C;
	sub_8259CC28(ctx, base);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8259cc28
	ctx.lr = 0x82C39A20;
	sub_8259CC28(ctx, base);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C39A30"))) PPC_WEAK_FUNC(sub_82C39A30);
PPC_FUNC_IMPL(__imp__sub_82C39A30) {
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
	// lwz r10,116(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// blt cr6,0x82c39a70
	if (cr6.lt) goto loc_82C39A70;
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c39a68
	if (cr6.lt) goto loc_82C39A68;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x82416268
	ctx.lr = 0x82C39A68;
	sub_82416268(ctx, base);
loc_82C39A68:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82c39a98
	goto loc_82C39A98;
loc_82C39A70:
	// addi r3,r11,112
	ctx.r3.s64 = ctx.r11.s64 + 112;
	// lwz r4,112(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82c39878
	ctx.lr = 0x82C39A80;
	sub_82C39878(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c39a94
	if (cr6.lt) goto loc_82C39A94;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82416268
	ctx.lr = 0x82C39A94;
	sub_82416268(ctx, base);
loc_82C39A94:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82C39A98:
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

__attribute__((alias("__imp__sub_82C39AC0"))) PPC_WEAK_FUNC(sub_82C39AC0);
PPC_FUNC_IMPL(__imp__sub_82C39AC0) {
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
	// beq cr6,0x82c39b04
	if (cr6.eq) goto loc_82C39B04;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82c395b0
	ctx.lr = 0x82C39AF0;
	sub_82C395B0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82C39B04;
	sub_825952B8(ctx, base);
loc_82C39B04:
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

__attribute__((alias("__imp__sub_82C39B28"))) PPC_WEAK_FUNC(sub_82C39B28);
PPC_FUNC_IMPL(__imp__sub_82C39B28) {
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
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c39bc4
	if (cr6.eq) goto loc_82C39BC4;
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// lwz r30,-26904(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26904);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82c39bc4
	if (cr6.eq) goto loc_82C39BC4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,17226
	ctx.r4.s64 = ctx.r11.s64 + 17226;
	// bl 0x837b0c10
	ctx.lr = 0x82C39B6C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x82cdfd50
	ctx.lr = 0x82C39B78;
	sub_82CDFD50(ctx, base);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c39bbc
	if (cr6.eq) goto loc_82C39BBC;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82c39b98
	if (!cr6.lt) goto loc_82C39B98;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_82C39B98:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82475d40
	ctx.lr = 0x82C39BA0;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c39a30
	ctx.lr = 0x82C39BAC;
	sub_82C39A30(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82C39BB4;
	sub_8387E8E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82c39bc8
	goto loc_82C39BC8;
loc_82C39BBC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82C39BC4;
	sub_8387E8E0(ctx, base);
loc_82C39BC4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C39BC8:
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

__attribute__((alias("__imp__sub_82C39BE0"))) PPC_WEAK_FUNC(sub_82C39BE0);
PPC_FUNC_IMPL(__imp__sub_82C39BE0) {
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
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// addis r11,r11,-264
	ctx.r11.s64 = ctx.r11.s64 + -17301504;
	// addic. r11,r11,-20480
	xer.ca = ctx.r11.u32 > 20479;
	ctx.r11.s64 = ctx.r11.s64 + -20480;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82c39c20
	if (cr0.eq) goto loc_82C39C20;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82c39c50
	if (!cr6.eq) goto loc_82C39C50;
	// bl 0x82c39b28
	ctx.lr = 0x82C39C0C;
	sub_82C39B28(ctx, base);
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
loc_82C39C20:
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x82c39c3c
	if (cr6.eq) goto loc_82C39C3C;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r10,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// bl 0x82c39110
	ctx.lr = 0x82C39C3C;
	sub_82C39110(ctx, base);
loc_82C39C3C:
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
loc_82C39C50:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C39C64"))) PPC_WEAK_FUNC(sub_82C39C64);
PPC_FUNC_IMPL(__imp__sub_82C39C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C39C68"))) PPC_WEAK_FUNC(sub_82C39C68);
PPC_FUNC_IMPL(__imp__sub_82C39C68) {
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
	// beq cr6,0x82c39cb4
	if (cr6.eq) goto loc_82C39CB4;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82c397e0
	ctx.lr = 0x82C39C9C;
	sub_82C397E0(ctx, base);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82c395b0
	ctx.lr = 0x82C39CB0;
	sub_82C395B0(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_82C39CB4:
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

__attribute__((alias("__imp__sub_82C39CCC"))) PPC_WEAK_FUNC(sub_82C39CCC);
PPC_FUNC_IMPL(__imp__sub_82C39CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C39CD0"))) PPC_WEAK_FUNC(sub_82C39CD0);
PPC_FUNC_IMPL(__imp__sub_82C39CD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82C39CD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-31760
	ctx.r10.s64 = -2081423360;
	// addi r9,r11,17544
	ctx.r9.s64 = ctx.r11.s64 + 17544;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r3,96
	ctx.r31.s64 = ctx.r3.s64 + 96;
	// stw r29,10008(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10008, ctx.r29.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// lwz r3,96(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c39d30
	if (cr6.eq) goto loc_82C39D30;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82c39750
	ctx.lr = 0x82C39D1C;
	sub_82C39750(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82C39D30;
	sub_825952B8(ctx, base);
loc_82C39D30:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// bl 0x831032a0
	ctx.lr = 0x82C39D44;
	sub_831032A0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C39D4C"))) PPC_WEAK_FUNC(sub_82C39D4C);
PPC_FUNC_IMPL(__imp__sub_82C39D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C39D50"))) PPC_WEAK_FUNC(sub_82C39D50);
PPC_FUNC_IMPL(__imp__sub_82C39D50) {
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
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82c39dac
	if (cr6.eq) goto loc_82C39DAC;
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82c39d90
	if (!cr6.eq) goto loc_82C39D90;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c391a0
	ctx.lr = 0x82C39D90;
	sub_82C391A0(ctx, base);
loc_82C39D90:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82c39dac
	if (!cr6.eq) goto loc_82C39DAC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c39be0
	ctx.lr = 0x82C39DAC;
	sub_82C39BE0(ctx, base);
loc_82C39DAC:
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

__attribute__((alias("__imp__sub_82C39DC4"))) PPC_WEAK_FUNC(sub_82C39DC4);
PPC_FUNC_IMPL(__imp__sub_82C39DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C39DC8"))) PPC_WEAK_FUNC(sub_82C39DC8);
PPC_FUNC_IMPL(__imp__sub_82C39DC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82C39DD0;
	__savegprlr_28(ctx, base);
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
	// beq cr6,0x82c39f70
	if (cr6.eq) goto loc_82C39F70;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r29,76
	ctx.r29.s64 = 76;
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// subf r11,r3,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r3.s64;
	// divw. r10,r11,r29
	ctx.r10.s32 = PPCDivide(ctx.r11.s32, ctx.r29.s32);
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82c39e10
	if (!cr0.eq) goto loc_82C39E10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c39c68
	ctx.lr = 0x82C39E04;
	sub_82C39C68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82C39E10:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r9,r11,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r11.s64;
	// divw r9,r9,r29
	ctx.r9.s32 = PPCDivide(ctx.r9.s32, ctx.r29.s32);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82c39e74
	if (cr6.gt) goto loc_82C39E74;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// bl 0x82c397e0
	ctx.lr = 0x82C39E38;
	sub_82C397E0(ctx, base);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82c395b0
	ctx.lr = 0x82C39E48;
	sub_82C395B0(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw r7,r8,r29
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r29.s32);
	// mulli r10,r7,76
	ctx.r10.s64 = ctx.r7.s64 * 76;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82C39E74:
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// divw r6,r7,r29
	ctx.r6.s32 = PPCDivide(ctx.r7.s32, ctx.r29.s32);
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// bgt cr6,0x82c39ee4
	if (cr6.gt) goto loc_82C39EE4;
	// mulli r10,r9,76
	ctx.r10.s64 = ctx.r9.s64 * 76;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// add r29,r10,r3
	ctx.r29.u64 = ctx.r10.u64 + ctx.r3.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82c397e0
	ctx.lr = 0x82C39EA0;
	sub_82C397E0(ctx, base);
	// lwz r28,4(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, xer);
	// beq cr6,0x82c39ed4
	if (cr6.eq) goto loc_82C39ED4;
loc_82C39EB0:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82c39ec4
	if (cr6.eq) goto loc_82C39EC4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c39488
	ctx.lr = 0x82C39EC4;
	sub_82C39488(ctx, base);
loc_82C39EC4:
	// addi r29,r29,76
	ctx.r29.s64 = ctx.r29.s64 + 76;
	// addi r30,r30,76
	ctx.r30.s64 = ctx.r30.s64 + 76;
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, xer);
	// bne cr6,0x82c39eb0
	if (!cr6.eq) goto loc_82C39EB0;
loc_82C39ED4:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82C39EE4:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c39f10
	if (cr6.eq) goto loc_82C39F10;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82c395b0
	ctx.lr = 0x82C39EFC;
	sub_82C395B0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82C39F10;
	sub_825952B8(ctx, base);
loc_82C39F10:
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
	// bl 0x83813460
	ctx.lr = 0x82C39F28;
	sub_83813460(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82c39f70
	if (cr6.eq) goto loc_82C39F70;
	// lwz r28,4(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, xer);
	// beq cr6,0x82c39f6c
	if (cr6.eq) goto loc_82C39F6C;
loc_82C39F48:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82c39f5c
	if (cr6.eq) goto loc_82C39F5C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c39488
	ctx.lr = 0x82C39F5C;
	sub_82C39488(ctx, base);
loc_82C39F5C:
	// addi r30,r30,76
	ctx.r30.s64 = ctx.r30.s64 + 76;
	// addi r29,r29,76
	ctx.r29.s64 = ctx.r29.s64 + 76;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, xer);
	// bne cr6,0x82c39f48
	if (!cr6.eq) goto loc_82C39F48;
loc_82C39F6C:
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
loc_82C39F70:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C39F7C"))) PPC_WEAK_FUNC(sub_82C39F7C);
PPC_FUNC_IMPL(__imp__sub_82C39F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C39F80"))) PPC_WEAK_FUNC(sub_82C39F80);
PPC_FUNC_IMPL(__imp__sub_82C39F80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82C39F88;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,963
	ctx.r11.s64 = 63111168;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,50115
	ctx.r10.u64 = ctx.r11.u64 | 50115;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82c39fac
	if (!cr6.gt) goto loc_82C39FAC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x82C39FAC;
	sub_831CC150(ctx, base);
loc_82C39FAC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r24,68
	ctx.r24.s64 = 68;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r24
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r24.s32);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// bge cr6,0x82c3a06c
	if (!cr6.lt) goto loc_82C3A06C;
	// li r25,2
	ctx.r25.s64 = 2;
	// mulli r26,r4,68
	ctx.r26.s64 = ctx.r4.s64 * 68;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82C39FE4;
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
	// beq cr6,0x82c3a020
	if (cr6.eq) goto loc_82C3A020;
loc_82C39FFC:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82c3a010
	if (cr6.eq) goto loc_82C3A010;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c39520
	ctx.lr = 0x82C3A010;
	sub_82C39520(ctx, base);
loc_82C3A010:
	// addi r30,r30,68
	ctx.r30.s64 = ctx.r30.s64 + 68;
	// addi r29,r29,68
	ctx.r29.s64 = ctx.r29.s64 + 68;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, xer);
	// bne cr6,0x82c39ffc
	if (!cr6.eq) goto loc_82C39FFC;
loc_82C3A020:
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
	// beq cr6,0x82c3a054
	if (cr6.eq) goto loc_82C3A054;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82c39750
	ctx.lr = 0x82C3A044;
	sub_82C39750(ctx, base);
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82C3A054;
	sub_825952B8(ctx, base);
loc_82C3A054:
	// mulli r11,r30,68
	ctx.r11.s64 = ctx.r30.s64 * 68;
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
loc_82C3A06C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C3A074"))) PPC_WEAK_FUNC(sub_82C3A074);
PPC_FUNC_IMPL(__imp__sub_82C3A074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3A078"))) PPC_WEAK_FUNC(sub_82C3A078);
PPC_FUNC_IMPL(__imp__sub_82C3A078) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,17444
	ctx.r4.s64 = ctx.r11.s64 + 17444;
	// bl 0x83103328
	ctx.lr = 0x82C3A098;
	sub_83103328(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,3
	ctx.r9.s64 = 3;
	// addi r8,r10,17544
	ctx.r8.s64 = ctx.r10.s64 + 17544;
	// stb r11,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r11.u8);
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r9,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r9.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r7.u32);
	// stb r11,81(r31)
	PPC_STORE_U8(ctx.r31.u32 + 81, ctx.r11.u8);
	// stb r11,82(r31)
	PPC_STORE_U8(ctx.r31.u32 + 82, ctx.r11.u8);
	// stb r11,83(r31)
	PPC_STORE_U8(ctx.r31.u32 + 83, ctx.r11.u8);
	// stb r11,84(r31)
	PPC_STORE_U8(ctx.r31.u32 + 84, ctx.r11.u8);
	// stb r11,85(r31)
	PPC_STORE_U8(ctx.r31.u32 + 85, ctx.r11.u8);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82C3A0FC"))) PPC_WEAK_FUNC(sub_82C3A0FC);
PPC_FUNC_IMPL(__imp__sub_82C3A0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3A100"))) PPC_WEAK_FUNC(sub_82C3A100);
PPC_FUNC_IMPL(__imp__sub_82C3A100) {
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
	// bl 0x82c39cd0
	ctx.lr = 0x82C3A120;
	sub_82C39CD0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c3a138
	if (cr6.eq) goto loc_82C3A138;
	// bl 0x82416268
	ctx.lr = 0x82C3A134;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C3A138:
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

__attribute__((alias("__imp__sub_82C3A150"))) PPC_WEAK_FUNC(sub_82C3A150);
PPC_FUNC_IMPL(__imp__sub_82C3A150) {
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
	// lwz r5,96(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// addi r31,r3,96
	ctx.r31.s64 = ctx.r3.s64 + 96;
	// lwz r4,100(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82c3a19c
	if (cr6.eq) goto loc_82C3A19C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82c39928
	ctx.lr = 0x82C3A184;
	sub_82C39928(ctx, base);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82c39750
	ctx.lr = 0x82C3A198;
	sub_82C39750(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_82C3A19C:
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// lwz r11,-26904(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26904);
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
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C3A1C4"))) PPC_WEAK_FUNC(sub_82C3A1C4);
PPC_FUNC_IMPL(__imp__sub_82C3A1C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3A1C8"))) PPC_WEAK_FUNC(sub_82C3A1C8);
PPC_FUNC_IMPL(__imp__sub_82C3A1C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,963
	ctx.r10.s64 = 63111168;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,68
	ctx.r9.s64 = 68;
	// ori r8,r10,50115
	ctx.r8.u64 = ctx.r10.u64 | 50115;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// subf r5,r4,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r4.s64;
	// divw r10,r6,r9
	ctx.r10.s32 = PPCDivide(ctx.r6.s32, ctx.r9.s32);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bge cr6,0x82c3a1fc
	if (!cr6.lt) goto loc_82C3A1FC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// b 0x831cc150
	sub_831CC150(ctx, base);
	return;
loc_82C3A1FC:
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
	// blt cr6,0x82c3a22c
	if (cr6.lt) goto loc_82C3A22C;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82C3A22C:
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x82c3a238
	if (!cr6.lt) goto loc_82C3A238;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_82C3A238:
	// b 0x82c39f80
	sub_82C39F80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C3A23C"))) PPC_WEAK_FUNC(sub_82C3A23C);
PPC_FUNC_IMPL(__imp__sub_82C3A23C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C3A240"))) PPC_WEAK_FUNC(sub_82C3A240);
PPC_FUNC_IMPL(__imp__sub_82C3A240) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82C3A248;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,124
	ctx.r31.s64 = ctx.r3.s64 + 124;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82c39dc8
	ctx.lr = 0x82C3A260;
	sub_82C39DC8(ctx, base);
	// lwz r10,128(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// lwz r9,124(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// li r11,76
	ctx.r11.s64 = 76;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw r29,r8,r11
	ctx.r29.s32 = PPCDivide(ctx.r8.s32, ctx.r11.s32);
	// bl 0x83a7d958
	ctx.lr = 0x82C3A278;
	sub_83A7D958(ctx, base);
	// bl 0x83524138
	ctx.lr = 0x82C3A27C;
	sub_83524138(ctx, base);
	// std r3,104(r30)
	PPC_STORE_U64(ctx.r30.u32 + 104, ctx.r3.u64);
	// lwz r4,128(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// lwz r5,124(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82c3a2b4
	if (cr6.eq) goto loc_82C3A2B4;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82c397e0
	ctx.lr = 0x82C3A29C;
	sub_82C397E0(ctx, base);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82c395b0
	ctx.lr = 0x82C3A2B0;
	sub_82C395B0(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_82C3A2B4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C3A2C0"))) PPC_WEAK_FUNC(sub_82C3A2C0);
PPC_FUNC_IMPL(__imp__sub_82C3A2C0) {
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
	// lis r31,-31760
	ctx.r31.s64 = -2081423360;
	// lwz r3,10008(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10008);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c3a344
	if (!cr6.eq) goto loc_82C3A344;
	// bl 0x831021a0
	ctx.lr = 0x82C3A2E8;
	sub_831021A0(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82da45f8
	ctx.lr = 0x82C3A2F0;
	sub_82DA45F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c3a304
	if (!cr6.eq) goto loc_82C3A304;
loc_82C3A2FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82c3a344
	goto loc_82C3A344;
loc_82C3A304:
	// li r11,27
	ctx.r11.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,112
	ctx.r4.s64 = 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82C3A31C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3a35c
	if (cr6.eq) goto loc_82C3A35C;
	// bl 0x82c3a078
	ctx.lr = 0x82C3A328;
	sub_82C3A078(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,10008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10008, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3a2fc
	if (cr6.eq) goto loc_82C3A2FC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83103100
	ctx.lr = 0x82C3A340;
	sub_83103100(ctx, base);
	// lwz r3,10008(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10008);
loc_82C3A344:
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
loc_82C3A35C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,10008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10008, ctx.r11.u32);
	// b 0x82c3a344
	goto loc_82C3A344;
}

__attribute__((alias("__imp__sub_82C3A36C"))) PPC_WEAK_FUNC(sub_82C3A36C);
PPC_FUNC_IMPL(__imp__sub_82C3A36C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3A370"))) PPC_WEAK_FUNC(sub_82C3A370);
PPC_FUNC_IMPL(__imp__sub_82C3A370) {
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
	// bl 0x82c3a2c0
	ctx.lr = 0x82C3A390;
	sub_82C3A2C0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3a3a4
	if (cr6.eq) goto loc_82C3A3A4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82c38ff0
	ctx.lr = 0x82C3A3A4;
	sub_82C38FF0(ctx, base);
loc_82C3A3A4:
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

__attribute__((alias("__imp__sub_82C3A3BC"))) PPC_WEAK_FUNC(sub_82C3A3BC);
PPC_FUNC_IMPL(__imp__sub_82C3A3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3A3C0"))) PPC_WEAK_FUNC(sub_82C3A3C0);
PPC_FUNC_IMPL(__imp__sub_82C3A3C0) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// lwz r11,10008(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10008);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82c3a3fc
	if (!cr6.eq) goto loc_82C3A3FC;
loc_82C3A3E8:
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
loc_82C3A3FC:
	// bl 0x82c3a2c0
	ctx.lr = 0x82C3A400;
	sub_82C3A2C0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3a3e8
	if (cr6.eq) goto loc_82C3A3E8;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x82c3a3e8
	if (cr6.eq) goto loc_82C3A3E8;
	// bl 0x82c39288
	ctx.lr = 0x82C3A418;
	sub_82C39288(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C3A428"))) PPC_WEAK_FUNC(sub_82C3A428);
PPC_FUNC_IMPL(__imp__sub_82C3A428) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// lwz r11,10008(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10008);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82c3a464
	if (!cr6.eq) goto loc_82C3A464;
loc_82C3A450:
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
loc_82C3A464:
	// bl 0x82c3a2c0
	ctx.lr = 0x82C3A468;
	sub_82C3A2C0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3a450
	if (cr6.eq) goto loc_82C3A450;
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmpwi cr6,r10,5
	cr6.compare<int32_t>(ctx.r10.s32, 5, xer);
	// beq cr6,0x82c3a450
	if (cr6.eq) goto loc_82C3A450;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// stw r9,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r9.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r8,81(r11)
	PPC_STORE_U8(ctx.r11.u32 + 81, ctx.r8.u8);
	// stb r10,82(r11)
	PPC_STORE_U8(ctx.r11.u32 + 82, ctx.r10.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C3A4B0"))) PPC_WEAK_FUNC(sub_82C3A4B0);
PPC_FUNC_IMPL(__imp__sub_82C3A4B0) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// lwz r11,10008(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10008);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82c3a4ec
	if (!cr6.eq) goto loc_82C3A4EC;
loc_82C3A4D8:
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
loc_82C3A4EC:
	// bl 0x82c3a2c0
	ctx.lr = 0x82C3A4F0;
	sub_82C3A2C0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3a4d8
	if (cr6.eq) goto loc_82C3A4D8;
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmpwi cr6,r10,5
	cr6.compare<int32_t>(ctx.r10.s32, 5, xer);
	// beq cr6,0x82c3a510
	if (cr6.eq) goto loc_82C3A510;
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// bne cr6,0x82c3a4d8
	if (!cr6.eq) goto loc_82C3A4D8;
loc_82C3A510:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// li r9,6
	ctx.r9.s64 = 6;
	// stb r10,81(r11)
	PPC_STORE_U8(ctx.r11.u32 + 81, ctx.r10.u8);
	// stb r3,85(r11)
	PPC_STORE_U8(ctx.r11.u32 + 85, ctx.r3.u8);
	// stw r9,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r9.u32);
	// stb r10,82(r11)
	PPC_STORE_U8(ctx.r11.u32 + 82, ctx.r10.u8);
	// stb r10,83(r11)
	PPC_STORE_U8(ctx.r11.u32 + 83, ctx.r10.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C3A540"))) PPC_WEAK_FUNC(sub_82C3A540);
PPC_FUNC_IMPL(__imp__sub_82C3A540) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// lwz r11,10008(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10008);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82c3a57c
	if (!cr6.eq) goto loc_82C3A57C;
loc_82C3A568:
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
loc_82C3A57C:
	// bl 0x82c3a2c0
	ctx.lr = 0x82C3A580;
	sub_82C3A2C0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3a568
	if (cr6.eq) goto loc_82C3A568;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,84(r11)
	PPC_STORE_U8(ctx.r11.u32 + 84, ctx.r10.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C3A5A8"))) PPC_WEAK_FUNC(sub_82C3A5A8);
PPC_FUNC_IMPL(__imp__sub_82C3A5A8) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// lwz r11,10008(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10008);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82c3a5e4
	if (!cr6.eq) goto loc_82C3A5E4;
loc_82C3A5D0:
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
loc_82C3A5E4:
	// bl 0x82c3a2c0
	ctx.lr = 0x82C3A5E8;
	sub_82C3A2C0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3a5d0
	if (cr6.eq) goto loc_82C3A5D0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,84(r11)
	PPC_STORE_U8(ctx.r11.u32 + 84, ctx.r10.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C3A610"))) PPC_WEAK_FUNC(sub_82C3A610);
PPC_FUNC_IMPL(__imp__sub_82C3A610) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// lwz r11,10008(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10008);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82c3a64c
	if (!cr6.eq) goto loc_82C3A64C;
loc_82C3A638:
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
loc_82C3A64C:
	// bl 0x82c3a2c0
	ctx.lr = 0x82C3A650;
	sub_82C3A2C0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3a638
	if (cr6.eq) goto loc_82C3A638;
	// lbz r3,84(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 84);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C3A66C"))) PPC_WEAK_FUNC(sub_82C3A66C);
PPC_FUNC_IMPL(__imp__sub_82C3A66C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3A670"))) PPC_WEAK_FUNC(sub_82C3A670);
PPC_FUNC_IMPL(__imp__sub_82C3A670) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// lwz r11,10008(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10008);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82c3a6ac
	if (!cr6.eq) goto loc_82C3A6AC;
loc_82C3A698:
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
loc_82C3A6AC:
	// bl 0x82c3a2c0
	ctx.lr = 0x82C3A6B0;
	sub_82C3A2C0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3a698
	if (cr6.eq) goto loc_82C3A698;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
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

__attribute__((alias("__imp__sub_82C3A6D8"))) PPC_WEAK_FUNC(sub_82C3A6D8);
PPC_FUNC_IMPL(__imp__sub_82C3A6D8) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// lwz r11,10008(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10008);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82c3a714
	if (!cr6.eq) goto loc_82C3A714;
loc_82C3A700:
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
loc_82C3A714:
	// bl 0x82c3a2c0
	ctx.lr = 0x82C3A718;
	sub_82C3A2C0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3a700
	if (cr6.eq) goto loc_82C3A700;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
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

__attribute__((alias("__imp__sub_82C3A740"))) PPC_WEAK_FUNC(sub_82C3A740);
PPC_FUNC_IMPL(__imp__sub_82C3A740) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// lwz r11,10008(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10008);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82c3a77c
	if (!cr6.eq) goto loc_82C3A77C;
loc_82C3A768:
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
loc_82C3A77C:
	// bl 0x82c3a2c0
	ctx.lr = 0x82C3A780;
	sub_82C3A2C0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3a768
	if (cr6.eq) goto loc_82C3A768;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
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

__attribute__((alias("__imp__sub_82C3A7A4"))) PPC_WEAK_FUNC(sub_82C3A7A4);
PPC_FUNC_IMPL(__imp__sub_82C3A7A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3A7A8"))) PPC_WEAK_FUNC(sub_82C3A7A8);
PPC_FUNC_IMPL(__imp__sub_82C3A7A8) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// lwz r11,10008(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10008);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82c3a7e4
	if (!cr6.eq) goto loc_82C3A7E4;
loc_82C3A7D0:
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
loc_82C3A7E4:
	// bl 0x82c3a2c0
	ctx.lr = 0x82C3A7E8;
	sub_82C3A2C0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3a7d0
	if (cr6.eq) goto loc_82C3A7D0;
	// lbz r10,80(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 80);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x82c3a81c
	if (cr6.eq) goto loc_82C3A81C;
	// lwz r3,92(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stb r10,80(r11)
	PPC_STORE_U8(ctx.r11.u32 + 80, ctx.r10.u8);
	// beq cr6,0x82c3a81c
	if (cr6.eq) goto loc_82C3A81C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82cdf060
	ctx.lr = 0x82C3A81C;
	sub_82CDF060(ctx, base);
loc_82C3A81C:
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

__attribute__((alias("__imp__sub_82C3A830"))) PPC_WEAK_FUNC(sub_82C3A830);
PPC_FUNC_IMPL(__imp__sub_82C3A830) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// lwz r11,10008(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10008);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82c3a86c
	if (!cr6.eq) goto loc_82C3A86C;
loc_82C3A858:
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
loc_82C3A86C:
	// bl 0x82c3a2c0
	ctx.lr = 0x82C3A870;
	sub_82C3A2C0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3a858
	if (cr6.eq) goto loc_82C3A858;
	// lbz r10,80(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c3a8a4
	if (cr6.eq) goto loc_82C3A8A4;
	// lwz r3,92(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stb r10,80(r11)
	PPC_STORE_U8(ctx.r11.u32 + 80, ctx.r10.u8);
	// beq cr6,0x82c3a8a4
	if (cr6.eq) goto loc_82C3A8A4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82cdf060
	ctx.lr = 0x82C3A8A4;
	sub_82CDF060(ctx, base);
loc_82C3A8A4:
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

__attribute__((alias("__imp__sub_82C3A8B8"))) PPC_WEAK_FUNC(sub_82C3A8B8);
PPC_FUNC_IMPL(__imp__sub_82C3A8B8) {
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
	// bge cr6,0x82c3a8f0
	if (!cr6.lt) goto loc_82C3A8F0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x82c3a8f4
	if (!cr6.gt) goto loc_82C3A8F4;
loc_82C3A8F0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82C3A8F4:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c3a944
	if (cr6.eq) goto loc_82C3A944;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,68
	ctx.r9.s64 = 68;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r7,r10,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// divw r30,r7,r9
	ctx.r30.s32 = PPCDivide(ctx.r7.s32, ctx.r9.s32);
	// bne cr6,0x82c3a928
	if (!cr6.eq) goto loc_82C3A928;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c3a1c8
	ctx.lr = 0x82C3A928;
	sub_82C3A1C8(ctx, base);
loc_82C3A928:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3a970
	if (cr6.eq) goto loc_82C3A970;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r11,r30,68
	ctx.r11.s64 = ctx.r30.s64 * 68;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82c3a96c
	goto loc_82C3A96C;
loc_82C3A944:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82c3a95c
	if (!cr6.eq) goto loc_82C3A95C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c3a1c8
	ctx.lr = 0x82C3A95C;
	sub_82C3A1C8(ctx, base);
loc_82C3A95C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3a970
	if (cr6.eq) goto loc_82C3A970;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82C3A96C:
	// bl 0x82c39520
	ctx.lr = 0x82C3A970;
	sub_82C39520(ctx, base);
loc_82C3A970:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,68
	ctx.r11.s64 = ctx.r11.s64 + 68;
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

__attribute__((alias("__imp__sub_82C3A994"))) PPC_WEAK_FUNC(sub_82C3A994);
PPC_FUNC_IMPL(__imp__sub_82C3A994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3A998"))) PPC_WEAK_FUNC(sub_82C3A998);
PPC_FUNC_IMPL(__imp__sub_82C3A998) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82C3A9A0;
	__savegprlr_24(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82c3a9ec
	if (cr6.eq) goto loc_82C3A9EC;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// bl 0x82c3a240
	ctx.lr = 0x82C3A9CC;
	sub_82C3A240(ctx, base);
	// li r11,76
	ctx.r11.s64 = 76;
	// lwz r26,96(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r25,100(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// subf r10,r26,r25
	ctx.r10.s64 = ctx.r25.s64 - ctx.r26.s64;
	// divw. r9,r10,r11
	ctx.r9.s32 = PPCDivide(ctx.r10.s32, ctx.r11.s32);
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82c3a9f8
	if (!cr0.eq) goto loc_82C3A9F8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c39ac0
	ctx.lr = 0x82C3A9EC;
	sub_82C39AC0(ctx, base);
loc_82C3A9EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82C3A9F8:
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// cmplw cr6,r26,r25
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r25.u32, xer);
	// beq cr6,0x82c3aab0
	if (cr6.eq) goto loc_82C3AAB0;
	// lbz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// li r30,68
	ctx.r30.s64 = 68;
	// lbz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
loc_82C3AA10:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82c399b8
	ctx.lr = 0x82C3AA18;
	sub_82C399B8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82c39630
	ctx.lr = 0x82C3AA28;
	sub_82C39630(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82c3aa9c
	if (!cr6.eq) goto loc_82C3AA9C;
	// addi r31,r24,96
	ctx.r31.s64 = ctx.r24.s64 + 96;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c3a8b8
	ctx.lr = 0x82C3AA44;
	sub_82C3A8B8(ctx, base);
	// lwz r5,96(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 96);
	// lwz r11,100(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 100);
	// subf r10,r5,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r5.s64;
	// divw r9,r10,r30
	ctx.r9.s32 = PPCDivide(ctx.r10.s32, ctx.r30.s32);
	// cmplwi cr6,r9,30
	cr6.compare<uint32_t>(ctx.r9.u32, 30, xer);
	// ble cr6,0x82c3aa8c
	if (!cr6.gt) goto loc_82C3AA8C;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r5,68
	ctx.r3.s64 = ctx.r5.s64 + 68;
	// bl 0x82c39928
	ctx.lr = 0x82C3AA6C;
	sub_82C39928(ctx, base);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// addi r3,r4,-68
	ctx.r3.s64 = ctx.r4.s64 + -68;
	// bl 0x82c39750
	ctx.lr = 0x82C3AA80;
	sub_82C39750(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,-68
	ctx.r11.s64 = ctx.r11.s64 + -68;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82C3AA8C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r31,r9,r30
	ctx.r31.s32 = PPCDivide(ctx.r9.s32, ctx.r30.s32);
loc_82C3AA9C:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82c39408
	ctx.lr = 0x82C3AAA4;
	sub_82C39408(ctx, base);
	// addi r29,r29,76
	ctx.r29.s64 = ctx.r29.s64 + 76;
	// cmplw cr6,r29,r25
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r25.u32, xer);
	// bne cr6,0x82c3aa10
	if (!cr6.eq) goto loc_82C3AA10;
loc_82C3AAB0:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x82c3aae0
	if (cr6.eq) goto loc_82C3AAE0;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82c395b0
	ctx.lr = 0x82C3AACC;
	sub_82C395B0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82C3AAE0;
	sub_825952B8(ctx, base);
loc_82C3AAE0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C3AAEC"))) PPC_WEAK_FUNC(sub_82C3AAEC);
PPC_FUNC_IMPL(__imp__sub_82C3AAEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3AAF0"))) PPC_WEAK_FUNC(sub_82C3AAF0);
PPC_FUNC_IMPL(__imp__sub_82C3AAF0) {
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
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,-26904(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26904);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82c3ab60
	if (cr6.eq) goto loc_82C3AB60;
	// bl 0x82c3a998
	ctx.lr = 0x82C3AB18;
	sub_82C3A998(ctx, base);
	// lwz r8,96(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r10,68
	ctx.r10.s64 = 68;
	// li r11,0
	ctx.r11.s64 = 0;
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// divw. r10,r7,r10
	ctx.r10.s32 = PPCDivide(ctx.r7.s32, ctx.r10.s32);
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82c3ab60
	if (cr0.eq) goto loc_82C3AB60;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// ble cr6,0x82c3ab78
	if (!cr6.gt) goto loc_82C3AB78;
loc_82C3AB40:
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbz r6,1(r7)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + 1);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82c3ab84
	if (cr6.eq) goto loc_82C3AB84;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,68
	ctx.r9.s64 = ctx.r9.s64 + 68;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82c3ab40
	if (cr6.gt) goto loc_82C3AB40;
loc_82C3AB60:
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
loc_82C3AB78:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C3AB84;
	sub_831CC188(ctx, base);
loc_82C3AB84:
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

__attribute__((alias("__imp__sub_82C3AB9C"))) PPC_WEAK_FUNC(sub_82C3AB9C);
PPC_FUNC_IMPL(__imp__sub_82C3AB9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3ABA0"))) PPC_WEAK_FUNC(sub_82C3ABA0);
PPC_FUNC_IMPL(__imp__sub_82C3ABA0) {
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
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,-26904(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26904);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82c3abdc
	if (!cr6.eq) goto loc_82C3ABDC;
loc_82C3ABC4:
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
loc_82C3ABDC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c3a998
	ctx.lr = 0x82C3ABE4;
	sub_82C3A998(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c3abc4
	if (!cr6.eq) goto loc_82C3ABC4;
	// bl 0x82ce0e98
	ctx.lr = 0x82C3ABF4;
	sub_82CE0E98(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3abc4
	if (cr6.eq) goto loc_82C3ABC4;
	// addi r10,r31,96
	ctx.r10.s64 = ctx.r31.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 120, ctx.r10.u32);
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x83103100
	ctx.lr = 0x82C3AC18;
	sub_83103100(ctx, base);
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

__attribute__((alias("__imp__sub_82C3AC30"))) PPC_WEAK_FUNC(sub_82C3AC30);
PPC_FUNC_IMPL(__imp__sub_82C3AC30) {
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
	// beq cr6,0x82c3ac70
	if (cr6.eq) goto loc_82C3AC70;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c3ac70
	if (cr6.eq) goto loc_82C3AC70;
	// lbz r11,182(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 182);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c3ac70
	if (cr6.eq) goto loc_82C3AC70;
	// bl 0x82c3a998
	ctx.lr = 0x82C3AC68;
	sub_82C3A998(ctx, base);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x82cdf558
	ctx.lr = 0x82C3AC70;
	sub_82CDF558(ctx, base);
loc_82C3AC70:
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

__attribute__((alias("__imp__sub_82C3AC88"))) PPC_WEAK_FUNC(sub_82C3AC88);
PPC_FUNC_IMPL(__imp__sub_82C3AC88) {
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
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82c3acb8
	if (!cr6.eq) goto loc_82C3ACB8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c39060
	ctx.lr = 0x82C3ACB4;
	sub_82C39060(ctx, base);
	// b 0x82c3acc8
	goto loc_82C3ACC8;
loc_82C3ACB8:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82c3acc8
	if (!cr6.eq) goto loc_82C3ACC8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c3aba0
	ctx.lr = 0x82C3ACC8;
	sub_82C3ABA0(ctx, base);
loc_82C3ACC8:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82C3ACE4"))) PPC_WEAK_FUNC(sub_82C3ACE4);
PPC_FUNC_IMPL(__imp__sub_82C3ACE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3ACE8"))) PPC_WEAK_FUNC(sub_82C3ACE8);
PPC_FUNC_IMPL(__imp__sub_82C3ACE8) {
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
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,-26904(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26904);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x82c3ad18
	if (!cr6.eq) goto loc_82C3AD18;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82c3ad90
	goto loc_82C3AD90;
loc_82C3AD18:
	// ld r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 96);
	// ld r10,104(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 104);
	// cmpld cr6,r11,r10
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x82c3ad30
	if (cr6.gt) goto loc_82C3AD30;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82C3AD30:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c3ad8c
	if (cr6.eq) goto loc_82C3AD8C;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c3ad74
	if (cr6.eq) goto loc_82C3AD74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c3aaf0
	ctx.lr = 0x82C3AD50;
	sub_82C3AAF0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c3ad74
	if (!cr6.eq) goto loc_82C3AD74;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82cdf078
	ctx.lr = 0x82C3AD6C;
	sub_82CDF078(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,83(r31)
	PPC_STORE_U8(ctx.r31.u32 + 83, ctx.r11.u8);
loc_82C3AD74:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c3ad8c
	if (cr6.eq) goto loc_82C3AD8C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c3ac30
	ctx.lr = 0x82C3AD8C;
	sub_82C3AC30(ctx, base);
loc_82C3AD8C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82C3AD90:
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

__attribute__((alias("__imp__sub_82C3ADA8"))) PPC_WEAK_FUNC(sub_82C3ADA8);
PPC_FUNC_IMPL(__imp__sub_82C3ADA8) {
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
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,81(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 81);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c3ade8
	if (cr6.eq) goto loc_82C3ADE8;
	// bl 0x82c39228
	ctx.lr = 0x82C3ADCC;
	sub_82C39228(ctx, base);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x82c3ade0
	if (cr6.eq) goto loc_82C3ADE0;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x82c3ade8
	if (!cr6.eq) goto loc_82C3ADE8;
loc_82C3ADE0:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
loc_82C3ADE8:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bgt cr6,0x82c3af44
	if (cr6.gt) goto loc_82C3AF44;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82c3ae54
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C3AE54;
	// bdzf 4*cr6+eq,0x82c3ae80
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C3AE80;
	// bdzf 4*cr6+eq,0x82c3af44
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C3AF44;
	// bdzf 4*cr6+eq,0x82c3af44
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C3AF44;
	// bdzf 4*cr6+eq,0x82c3aec8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C3AEC8;
	// bdzf 4*cr6+eq,0x82c3aedc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C3AEDC;
	// bdzf 4*cr6+eq,0x82c3aef8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C3AEF8;
	// bne cr6,0x82c3af30
	if (!cr6.eq) goto loc_82C3AF30;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c3a150
	ctx.lr = 0x82C3AE24;
	sub_82C3A150(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c3ae38
	if (!cr6.eq) goto loc_82C3AE38;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
loc_82C3AE38:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
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
loc_82C3AE54:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// stw r9,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r9.u32);
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
loc_82C3AE80:
	// lbz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c3af44
	if (!cr6.eq) goto loc_82C3AF44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c3ac88
	ctx.lr = 0x82C3AE94;
	sub_82C3AC88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r10,0
	ctx.r10.s64 = 0;
	// subfic r9,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// stb r10,82(r31)
	PPC_STORE_U8(ctx.r31.u32 + 82, ctx.r10.u8);
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r8,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	// addi r7,r11,3
	ctx.r7.s64 = ctx.r11.s64 + 3;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
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
loc_82C3AEC8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c3ace8
	ctx.lr = 0x82C3AED0;
	sub_82C3ACE8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c3af44
	if (!cr6.eq) goto loc_82C3AF44;
loc_82C3AEDC:
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
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
loc_82C3AEF8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c39228
	ctx.lr = 0x82C3AF00;
	sub_82C39228(ctx, base);
	// lbz r11,85(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 85);
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r9,29
	ctx.r11.u64 = ctx.r9.u32 & 0x7;
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
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
loc_82C3AF30:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C3AF44;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C3AF44:
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

__attribute__((alias("__imp__sub_82C3AF58"))) PPC_WEAK_FUNC(sub_82C3AF58);
PPC_FUNC_IMPL(__imp__sub_82C3AF58) {
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
	// addi r5,r4,8
	ctx.r5.s64 = ctx.r4.s64 + 8;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// li r4,64
	ctx.r4.s64 = 64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bl 0x831ce7d8
	ctx.lr = 0x82C3AF94;
	sub_831CE7D8(ctx, base);
	// lwz r9,72(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r9.u32);
	// lbz r8,76(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 76);
	// stb r8,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r8.u8);
	// lbz r7,77(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 77);
	// stb r7,77(r31)
	PPC_STORE_U8(ctx.r31.u32 + 77, ctx.r7.u8);
	// lbz r6,78(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 78);
	// stb r6,78(r31)
	PPC_STORE_U8(ctx.r31.u32 + 78, ctx.r6.u8);
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

__attribute__((alias("__imp__sub_82C3AFD0"))) PPC_WEAK_FUNC(sub_82C3AFD0);
PPC_FUNC_IMPL(__imp__sub_82C3AFD0) {
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
	// bl 0x82b9a040
	ctx.lr = 0x82C3AFE0;
	sub_82B9A040(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c3b008
	if (cr6.eq) goto loc_82C3B008;
	// bl 0x82d26640
	ctx.lr = 0x82C3AFF0;
	sub_82D26640(ctx, base);
	// bl 0x82d25ab8
	ctx.lr = 0x82C3AFF4;
	sub_82D25AB8(ctx, base);
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
loc_82C3B008:
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

__attribute__((alias("__imp__sub_82C3B01C"))) PPC_WEAK_FUNC(sub_82C3B01C);
PPC_FUNC_IMPL(__imp__sub_82C3B01C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3B020"))) PPC_WEAK_FUNC(sub_82C3B020);
PPC_FUNC_IMPL(__imp__sub_82C3B020) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C3B028"))) PPC_WEAK_FUNC(sub_82C3B028);
PPC_FUNC_IMPL(__imp__sub_82C3B028) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C3B048;
	sub_82D19788(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C3B058;
	sub_82D19788(ctx, base);
	// bl 0x82dad2e0
	ctx.lr = 0x82C3B05C;
	sub_82DAD2E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3b070
	if (cr6.eq) goto loc_82C3B070;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,14
	ctx.r4.s64 = 14;
	// bl 0x82dafab0
	ctx.lr = 0x82C3B070;
	sub_82DAFAB0(ctx, base);
loc_82C3B070:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19720
	ctx.lr = 0x82C3B07C;
	sub_82D19720(ctx, base);
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

__attribute__((alias("__imp__sub_82C3B090"))) PPC_WEAK_FUNC(sub_82C3B090);
PPC_FUNC_IMPL(__imp__sub_82C3B090) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82C3B098;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C3B0A4;
	sub_82D19A78(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,18288
	ctx.r4.s64 = ctx.r11.s64 + 18288;
	// bl 0x82d2f098
	ctx.lr = 0x82C3B0B0;
	sub_82D2F098(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3b118
	if (cr6.eq) goto loc_82C3B118;
	// bl 0x82d33c10
	ctx.lr = 0x82C3B0C0;
	sub_82D33C10(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d33c10
	ctx.lr = 0x82C3B0CC;
	sub_82D33C10(ctx, base);
	// lbz r11,812(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 812);
	// addi r5,r3,-1
	ctx.r5.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c3b0fc
	if (!cr6.eq) goto loc_82C3B0FC;
	// lwz r11,816(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 816);
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, xer);
	// bne cr6,0x82c3b0fc
	if (!cr6.eq) goto loc_82C3B0FC;
	// addi r11,r5,1
	ctx.r11.s64 = ctx.r5.s64 + 1;
	// twllei r29,0
	// divwu r10,r11,r29
	ctx.r10.u32 = PPCDivide(ctx.r11.u32, ctx.r29.u32);
	// mullw r9,r10,r29
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r29.s32);
	// subf r5,r9,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r9.s64;
loc_82C3B0FC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f2,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x82d1ebf8
	ctx.lr = 0x82C3B118;
	sub_82D1EBF8(ctx, base);
loc_82C3B118:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C3B120"))) PPC_WEAK_FUNC(sub_82C3B120);
PPC_FUNC_IMPL(__imp__sub_82C3B120) {
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
	// lbz r11,812(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 812);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c3b178
	if (!cr6.eq) goto loc_82C3B178;
	// bl 0x82d19a78
	ctx.lr = 0x82C3B144;
	sub_82D19A78(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,18272
	ctx.r4.s64 = ctx.r11.s64 + 18272;
	// bl 0x82d2f098
	ctx.lr = 0x82C3B150;
	sub_82D2F098(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3b178
	if (cr6.eq) goto loc_82C3B178;
	// lwz r4,816(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// bl 0x82d33db0
	ctx.lr = 0x82C3B160;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3b178
	if (cr6.eq) goto loc_82C3B178;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2b608
	ctx.lr = 0x82C3B178;
	sub_82D2B608(ctx, base);
loc_82C3B178:
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

__attribute__((alias("__imp__sub_82C3B18C"))) PPC_WEAK_FUNC(sub_82C3B18C);
PPC_FUNC_IMPL(__imp__sub_82C3B18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3B190"))) PPC_WEAK_FUNC(sub_82C3B190);
PPC_FUNC_IMPL(__imp__sub_82C3B190) {
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
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x82C3B1B0;
	sub_8399F8B8(ctx, base);
	// mulli r11,r30,532
	ctx.r11.s64 = ctx.r30.s64 * 532;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8399edb0
	ctx.lr = 0x82C3B1C8;
	sub_8399EDB0(ctx, base);
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x82c3b2c8
	if (!cr6.lt) goto loc_82C3B2C8;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// bgt cr6,0x82c3b2c8
	if (cr6.gt) goto loc_82C3B2C8;
	// lis r12,-32060
	ctx.r12.s64 = -2101084160;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-19972
	ctx.r12.s64 = ctx.r12.s64 + -19972;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82C3B2C0;
	case 1:
		goto loc_82C3B2B4;
	case 2:
		goto loc_82C3B29C;
	case 3:
		goto loc_82C3B2A8;
	case 4:
		goto loc_82C3B290;
	case 5:
		goto loc_82C3B284;
	case 6:
		goto loc_82C3B26C;
	case 7:
		goto loc_82C3B278;
	case 8:
		goto loc_82C3B260;
	case 9:
		goto loc_82C3B248;
	case 10:
		goto loc_82C3B254;
	case 11:
		goto loc_82C3B23C;
	case 12:
		goto loc_82C3B230;
	default:
		return;
	}
	// lwz r22,-19776(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + -19776);
	// lwz r22,-19788(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + -19788);
	// lwz r22,-19812(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + -19812);
	// lwz r22,-19800(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + -19800);
	// lwz r22,-19824(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + -19824);
	// lwz r22,-19836(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + -19836);
	// lwz r22,-19860(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + -19860);
	// lwz r22,-19848(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + -19848);
	// lwz r22,-19872(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + -19872);
	// lwz r22,-19896(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + -19896);
	// lwz r22,-19884(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + -19884);
	// lwz r22,-19908(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + -19908);
	// lwz r22,-19920(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + -19920);
loc_82C3B230:
	// lis r3,101
	ctx.r3.s64 = 6619136;
	// ori r3,r3,32
	ctx.r3.u64 = ctx.r3.u64 | 32;
	// b 0x82c3b2cc
	goto loc_82C3B2CC;
loc_82C3B23C:
	// lis r3,101
	ctx.r3.s64 = 6619136;
	// ori r3,r3,49
	ctx.r3.u64 = ctx.r3.u64 | 49;
	// b 0x82c3b2cc
	goto loc_82C3B2CC;
loc_82C3B248:
	// lis r3,101
	ctx.r3.s64 = 6619136;
	// ori r3,r3,62
	ctx.r3.u64 = ctx.r3.u64 | 62;
	// b 0x82c3b2cc
	goto loc_82C3B2CC;
loc_82C3B254:
	// lis r3,101
	ctx.r3.s64 = 6619136;
	// ori r3,r3,63
	ctx.r3.u64 = ctx.r3.u64 | 63;
	// b 0x82c3b2cc
	goto loc_82C3B2CC;
loc_82C3B260:
	// lis r3,101
	ctx.r3.s64 = 6619136;
	// ori r3,r3,28
	ctx.r3.u64 = ctx.r3.u64 | 28;
	// b 0x82c3b2cc
	goto loc_82C3B2CC;
loc_82C3B26C:
	// lis r3,101
	ctx.r3.s64 = 6619136;
	// ori r3,r3,64
	ctx.r3.u64 = ctx.r3.u64 | 64;
	// b 0x82c3b2cc
	goto loc_82C3B2CC;
loc_82C3B278:
	// lis r3,101
	ctx.r3.s64 = 6619136;
	// ori r3,r3,65
	ctx.r3.u64 = ctx.r3.u64 | 65;
	// b 0x82c3b2cc
	goto loc_82C3B2CC;
loc_82C3B284:
	// lis r3,101
	ctx.r3.s64 = 6619136;
	// ori r3,r3,20
	ctx.r3.u64 = ctx.r3.u64 | 20;
	// b 0x82c3b2cc
	goto loc_82C3B2CC;
loc_82C3B290:
	// lis r3,101
	ctx.r3.s64 = 6619136;
	// ori r3,r3,18
	ctx.r3.u64 = ctx.r3.u64 | 18;
	// b 0x82c3b2cc
	goto loc_82C3B2CC;
loc_82C3B29C:
	// lis r3,101
	ctx.r3.s64 = 6619136;
	// ori r3,r3,66
	ctx.r3.u64 = ctx.r3.u64 | 66;
	// b 0x82c3b2cc
	goto loc_82C3B2CC;
loc_82C3B2A8:
	// lis r3,101
	ctx.r3.s64 = 6619136;
	// ori r3,r3,67
	ctx.r3.u64 = ctx.r3.u64 | 67;
	// b 0x82c3b2cc
	goto loc_82C3B2CC;
loc_82C3B2B4:
	// lis r3,101
	ctx.r3.s64 = 6619136;
	// ori r3,r3,6
	ctx.r3.u64 = ctx.r3.u64 | 6;
	// b 0x82c3b2cc
	goto loc_82C3B2CC;
loc_82C3B2C0:
	// lis r3,101
	ctx.r3.s64 = 6619136;
	// b 0x82c3b2cc
	goto loc_82C3B2CC;
loc_82C3B2C8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C3B2CC:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C3B2E4"))) PPC_WEAK_FUNC(sub_82C3B2E4);
PPC_FUNC_IMPL(__imp__sub_82C3B2E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3B2E8"))) PPC_WEAK_FUNC(sub_82C3B2E8);
PPC_FUNC_IMPL(__imp__sub_82C3B2E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82C3B2F0;
	__savegprlr_23(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82dad2e0
	ctx.lr = 0x82C3B2F8;
	sub_82DAD2E0(ctx, base);
	// lwz r27,60(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// bl 0x831156e8
	ctx.lr = 0x82C3B300;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r28,0
	ctx.r28.s64 = 0;
	// addis r26,r11,222
	ctx.r26.s64 = ctx.r11.s64 + 14548992;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// addi r26,r26,-12208
	ctx.r26.s64 = ctx.r26.s64 + -12208;
	// li r29,-1
	ctx.r29.s64 = -1;
	// li r23,2
	ctx.r23.s64 = 2;
	// li r24,4
	ctx.r24.s64 = 4;
	// li r25,1
	ctx.r25.s64 = 1;
loc_82C3B324:
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x831cdcf0
	ctx.lr = 0x82C3B33C;
	sub_831CDCF0(ctx, base);
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// rlwinm r11,r30,2,22,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FC;
	// stw r23,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r23.u32);
	// stb r24,156(r1)
	PPC_STORE_U8(ctx.r1.u32 + 156, ctx.r24.u8);
	// li r4,64
	ctx.r4.s64 = 64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stb r28,157(r1)
	PPC_STORE_U8(ctx.r1.u32 + 157, ctx.r28.u8);
	// stb r25,158(r1)
	PPC_STORE_U8(ctx.r1.u32 + 158, ctx.r25.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r31,r11,r26
	ctx.r31.u64 = ctx.r11.u64 + ctx.r26.u64;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// bl 0x831ce7d8
	ctx.lr = 0x82C3B384;
	sub_831CE7D8(ctx, base);
	// lwz r8,80(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r7,r27
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r27.u32, xer);
	// stw r8,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r8.u32);
	// lbz r6,84(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 84);
	// stb r6,156(r1)
	PPC_STORE_U8(ctx.r1.u32 + 156, ctx.r6.u8);
	// lbz r5,85(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 85);
	// stb r5,157(r1)
	PPC_STORE_U8(ctx.r1.u32 + 157, ctx.r5.u8);
	// lbz r4,86(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 86);
	// stb r4,158(r1)
	PPC_STORE_U8(ctx.r1.u32 + 158, ctx.r4.u8);
	// beq cr6,0x82c3b3c8
	if (cr6.eq) goto loc_82C3B3C8;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,24
	cr6.compare<uint32_t>(ctx.r30.u32, 24, xer);
	// blt cr6,0x82c3b324
	if (cr6.lt) goto loc_82C3B324;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82C3B3C8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C3B3D4"))) PPC_WEAK_FUNC(sub_82C3B3D4);
PPC_FUNC_IMPL(__imp__sub_82C3B3D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3B3D8"))) PPC_WEAK_FUNC(sub_82C3B3D8);
PPC_FUNC_IMPL(__imp__sub_82C3B3D8) {
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
	// bl 0x82b00d00
	ctx.lr = 0x82C3B3F4;
	sub_82B00D00(ctx, base);
	// addi r30,r31,224
	ctx.r30.s64 = ctx.r31.s64 + 224;
	// li r5,72
	ctx.r5.s64 = 72;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x82C3B408;
	sub_831CDCF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b00b98
	ctx.lr = 0x82C3B410;
	sub_82B00B98(ctx, base);
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x82C3B420;
	sub_831CDCF0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,296(r31)
	PPC_STORE_U8(ctx.r31.u32 + 296, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82C3B444"))) PPC_WEAK_FUNC(sub_82C3B444);
PPC_FUNC_IMPL(__imp__sub_82C3B444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3B448"))) PPC_WEAK_FUNC(sub_82C3B448);
PPC_FUNC_IMPL(__imp__sub_82C3B448) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// beq cr6,0x82c3b4b0
	if (cr6.eq) goto loc_82C3B4B0;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
loc_82C3B458:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x82c3b478
	if (cr6.eq) goto loc_82C3B478;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, xer);
	// bne cr6,0x82c3b458
	if (!cr6.eq) goto loc_82C3B458;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82C3B478:
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, xer);
	// beq cr6,0x82c3b4b0
	if (cr6.eq) goto loc_82C3B4B0;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// beq cr6,0x82c3b4b0
	if (cr6.eq) goto loc_82C3B4B0;
loc_82C3B48C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,0(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// beq cr6,0x82c3b4a4
	if (cr6.eq) goto loc_82C3B4A4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82C3B4A4:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// bne cr6,0x82c3b48c
	if (!cr6.eq) goto loc_82C3B48C;
loc_82C3B4B0:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C3B4B8"))) PPC_WEAK_FUNC(sub_82C3B4B8);
PPC_FUNC_IMPL(__imp__sub_82C3B4B8) {
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
	// addi r11,r4,27
	ctx.r11.s64 = ctx.r4.s64 + 27;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r3
	ctx.r31.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c3b4f4
	if (!cr6.eq) goto loc_82C3B4F4;
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
loc_82C3B4F4:
	// bl 0x82e744f8
	ctx.lr = 0x82C3B4F8;
	sub_82E744F8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82b64b88
	ctx.lr = 0x82C3B50C;
	sub_82B64B88(ctx, base);
	// bl 0x82dad2e0
	ctx.lr = 0x82C3B510;
	sub_82DAD2E0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82b66948
	ctx.lr = 0x82C3B518;
	sub_82B66948(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// rlwinm r31,r9,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// beq cr6,0x82c3b534
	if (cr6.eq) goto loc_82C3B534;
	// bl 0x8259b510
	ctx.lr = 0x82C3B534;
	sub_8259B510(ctx, base);
loc_82C3B534:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
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

__attribute__((alias("__imp__sub_82C3B554"))) PPC_WEAK_FUNC(sub_82C3B554);
PPC_FUNC_IMPL(__imp__sub_82C3B554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3B558"))) PPC_WEAK_FUNC(sub_82C3B558);
PPC_FUNC_IMPL(__imp__sub_82C3B558) {
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
	// addi r11,r4,53
	ctx.r11.s64 = ctx.r4.s64 + 53;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r3
	ctx.r31.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c3b594
	if (!cr6.eq) goto loc_82C3B594;
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
loc_82C3B594:
	// bl 0x82e744f8
	ctx.lr = 0x82C3B598;
	sub_82E744F8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82b64b88
	ctx.lr = 0x82C3B5AC;
	sub_82B64B88(ctx, base);
	// bl 0x82dad2e0
	ctx.lr = 0x82C3B5B0;
	sub_82DAD2E0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82b66948
	ctx.lr = 0x82C3B5B8;
	sub_82B66948(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// rlwinm r31,r9,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// beq cr6,0x82c3b5d4
	if (cr6.eq) goto loc_82C3B5D4;
	// bl 0x8259b510
	ctx.lr = 0x82C3B5D4;
	sub_8259B510(ctx, base);
loc_82C3B5D4:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
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

__attribute__((alias("__imp__sub_82C3B5F4"))) PPC_WEAK_FUNC(sub_82C3B5F4);
PPC_FUNC_IMPL(__imp__sub_82C3B5F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3B5F8"))) PPC_WEAK_FUNC(sub_82C3B5F8);
PPC_FUNC_IMPL(__imp__sub_82C3B5F8) {
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
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82C3B62C;
	sub_82595718(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// addic. r11,r3,12
	xer.ca = ctx.r3.u32 > 4294967283;
	ctx.r11.s64 = ctx.r3.s64 + 12;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// stb r10,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r10.u8);
	// stb r10,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r10.u8);
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// lbz r9,1(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// beq 0x82c3b668
	if (cr0.eq) goto loc_82C3B668;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stb r9,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r9.u8);
loc_82C3B668:
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

__attribute__((alias("__imp__sub_82C3B680"))) PPC_WEAK_FUNC(sub_82C3B680);
PPC_FUNC_IMPL(__imp__sub_82C3B680) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82C3B688;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,13
	cr6.compare<uint32_t>(ctx.r4.u32, 13, xer);
	// beq cr6,0x82c3b75c
	if (cr6.eq) goto loc_82C3B75C;
	// cmplwi cr6,r4,11
	cr6.compare<uint32_t>(ctx.r4.u32, 11, xer);
	// bne cr6,0x82c3b6b8
	if (!cr6.eq) goto loc_82C3B6B8;
	// bl 0x82d19a78
	ctx.lr = 0x82C3B6A8;
	sub_82D19A78(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r31,r11,18240
	ctx.r31.s64 = ctx.r11.s64 + 18240;
	// addi r4,r31,-28
	ctx.r4.s64 = ctx.r31.s64 + -28;
	// b 0x82c3b6c8
	goto loc_82C3B6C8;
loc_82C3B6B8:
	// bl 0x82d19a78
	ctx.lr = 0x82C3B6BC;
	sub_82D19A78(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r31,r11,18240
	ctx.r31.s64 = ctx.r11.s64 + 18240;
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
loc_82C3B6C8:
	// bl 0x82d2f098
	ctx.lr = 0x82C3B6CC;
	sub_82D2F098(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3b75c
	if (cr6.eq) goto loc_82C3B75C;
	// cmplwi cr6,r29,11
	cr6.compare<uint32_t>(ctx.r29.u32, 11, xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// beq cr6,0x82c3b6e4
	if (cr6.eq) goto loc_82C3B6E4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82C3B6E4:
	// bl 0x82d33db0
	ctx.lr = 0x82C3B6E8;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3b75c
	if (cr6.eq) goto loc_82C3B75C;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C3B708;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3b75c
	if (cr6.eq) goto loc_82C3B75C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r9,r29,178
	ctx.r9.s64 = ctx.r29.s64 + 178;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwzx r5,r8,r30
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	// bl 0x82d042a8
	ctx.lr = 0x82C3B740;
	sub_82D042A8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82C3B754;
	sub_82D291E0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82C3B75C;
	sub_8387E8E0(ctx, base);
loc_82C3B75C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C3B764"))) PPC_WEAK_FUNC(sub_82C3B764);
PPC_FUNC_IMPL(__imp__sub_82C3B764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3B768"))) PPC_WEAK_FUNC(sub_82C3B768);
PPC_FUNC_IMPL(__imp__sub_82C3B768) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82C3B770;
	__savegprlr_23(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// bl 0x82dad2e0
	ctx.lr = 0x82C3B77C;
	sub_82DAD2E0(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3b888
	if (cr6.eq) goto loc_82C3B888;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,15
	ctx.r29.s64 = 15;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// li r25,24
	ctx.r25.s64 = 24;
	// li r30,-1
	ctx.r30.s64 = -1;
	// li r26,4
	ctx.r26.s64 = 4;
	// li r28,2
	ctx.r28.s64 = 2;
loc_82C3B7A4:
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// stb r31,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r31.u8);
	// stb r26,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r26.u8);
	// stw r28,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r28.u32);
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// stb r31,145(r1)
	PPC_STORE_U8(ctx.r1.u32 + 145, ctx.r31.u8);
	// stb r31,146(r1)
	PPC_STORE_U8(ctx.r1.u32 + 146, ctx.r31.u8);
	// stb r31,147(r1)
	PPC_STORE_U8(ctx.r1.u32 + 147, ctx.r31.u8);
	// bl 0x82db1298
	ctx.lr = 0x82C3B7E4;
	sub_82DB1298(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c3b840
	if (cr6.eq) goto loc_82C3B840;
	// lbz r10,147(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 147);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82c3b814
	if (!cr6.eq) goto loc_82C3B814;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c3b85c
	if (cr6.lt) goto loc_82C3B85C;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// b 0x82c3b854
	goto loc_82C3B854;
loc_82C3B814:
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r23,764
	ctx.r4.s64 = ctx.r23.s64 + 764;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x833ecc50
	ctx.lr = 0x82C3B824;
	sub_833ECC50(ctx, base);
	// lwz r10,768(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 768);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82c3b880
	if (cr6.eq) goto loc_82C3B880;
	// lbz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c3b880
	if (cr6.eq) goto loc_82C3B880;
loc_82C3B840:
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c3b85c
	if (cr6.lt) goto loc_82C3B85C;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
loc_82C3B854:
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x825952b8
	ctx.lr = 0x82C3B85C;
	sub_825952B8(ctx, base);
loc_82C3B85C:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// stb r31,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r31.u8);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// cmplwi cr6,r27,24
	cr6.compare<uint32_t>(ctx.r27.u32, 24, xer);
	// blt cr6,0x82c3b7a4
	if (cr6.lt) goto loc_82C3B7A4;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82C3B880:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c644a0
	ctx.lr = 0x82C3B888;
	sub_82C644A0(ctx, base);
loc_82C3B888:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C3B894"))) PPC_WEAK_FUNC(sub_82C3B894);
PPC_FUNC_IMPL(__imp__sub_82C3B894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3B898"))) PPC_WEAK_FUNC(sub_82C3B898);
PPC_FUNC_IMPL(__imp__sub_82C3B898) {
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
	// bl 0x83021980
	ctx.lr = 0x82C3B8C0;
	sub_83021980(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x837ba1c0
	ctx.lr = 0x82C3B8D4;
	sub_837BA1C0(ctx, base);
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

__attribute__((alias("__imp__sub_82C3B8F0"))) PPC_WEAK_FUNC(sub_82C3B8F0);
PPC_FUNC_IMPL(__imp__sub_82C3B8F0) {
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
	// bl 0x82c3b5f8
	ctx.lr = 0x82C3B918;
	sub_82C3B5F8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x837ba1c0
	ctx.lr = 0x82C3B92C;
	sub_837BA1C0(ctx, base);
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

__attribute__((alias("__imp__sub_82C3B948"))) PPC_WEAK_FUNC(sub_82C3B948);
PPC_FUNC_IMPL(__imp__sub_82C3B948) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82C3B950;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82b9b358
	ctx.lr = 0x82C3B95C;
	sub_82B9B358(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C3B964;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r31,r11,18112
	ctx.r31.s64 = ctx.r11.s64 + 18112;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,-60
	ctx.r4.s64 = ctx.r31.s64 + -60;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C3B984;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3ba84
	if (cr6.eq) goto loc_82C3BA84;
	// lis r4,512
	ctx.r4.s64 = 33554432;
	// ori r4,r4,131
	ctx.r4.u64 = ctx.r4.u64 | 131;
	// bl 0x82d39ab8
	ctx.lr = 0x82C3B998;
	sub_82D39AB8(ctx, base);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82d47a58
	ctx.lr = 0x82C3B9A0;
	sub_82D47A58(ctx, base);
	// bl 0x82d476f0
	ctx.lr = 0x82C3B9A4;
	sub_82D476F0(ctx, base);
	// bl 0x82d86078
	ctx.lr = 0x82C3B9A8;
	sub_82D86078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3ba84
	if (cr6.eq) goto loc_82C3BA84;
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r10,300(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 300);
	// stb r10,784(r30)
	PPC_STORE_U8(ctx.r30.u32 + 784, ctx.r10.u8);
	// bl 0x82d19a78
	ctx.lr = 0x82C3B9C8;
	sub_82D19A78(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,-52
	ctx.r4.s64 = ctx.r31.s64 + -52;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C3B9E0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C3B9E8;
	sub_82D19A78(ctx, base);
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// bl 0x82d2f098
	ctx.lr = 0x82C3B9F0;
	sub_82D2F098(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3ba84
	if (cr6.eq) goto loc_82C3BA84;
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// bl 0x82d2f098
	ctx.lr = 0x82C3BA00;
	sub_82D2F098(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3ba84
	if (cr6.eq) goto loc_82C3BA84;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C3BA20;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3ba34
	if (cr6.eq) goto loc_82C3BA34;
	// lis r4,508
	ctx.r4.s64 = 33292288;
	// ori r4,r4,115
	ctx.r4.u64 = ctx.r4.u64 | 115;
	// bl 0x82d29598
	ctx.lr = 0x82C3BA34;
	sub_82D29598(ctx, base);
loc_82C3BA34:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C3BA48;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82C3BA4C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c3b680
	ctx.lr = 0x82C3BA58;
	sub_82C3B680(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,12
	cr6.compare<uint32_t>(ctx.r31.u32, 12, xer);
	// blt cr6,0x82c3ba4c
	if (cr6.lt) goto loc_82C3BA4C;
	// lwz r3,104(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// bl 0x82dd92d0
	ctx.lr = 0x82C3BA6C;
	sub_82DD92D0(ctx, base);
	// bl 0x8399f8b8
	ctx.lr = 0x82C3BA70;
	sub_8399F8B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3ba7c
	if (cr6.eq) goto loc_82C3BA7C;
	// bl 0x839a0648
	ctx.lr = 0x82C3BA7C;
	sub_839A0648(ctx, base);
loc_82C3BA7C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c3b120
	ctx.lr = 0x82C3BA84;
	sub_82C3B120(ctx, base);
loc_82C3BA84:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C3BA90"))) PPC_WEAK_FUNC(sub_82C3BA90);
PPC_FUNC_IMPL(__imp__sub_82C3BA90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82C3BA98;
	__savegprlr_27(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,-2
	cr6.compare<int32_t>(ctx.r5.s32, -2, xer);
	// beq cr6,0x82c3bbb8
	if (cr6.eq) goto loc_82C3BBB8;
	// cmplwi cr6,r4,24
	cr6.compare<uint32_t>(ctx.r4.u32, 24, xer);
	// bge cr6,0x82c3bbb8
	if (!cr6.lt) goto loc_82C3BBB8;
	// cmplwi cr6,r5,13
	cr6.compare<uint32_t>(ctx.r5.u32, 13, xer);
	// bne cr6,0x82c3bae8
	if (!cr6.eq) goto loc_82C3BAE8;
	// addi r11,r4,154
	ctx.r11.s64 = ctx.r4.s64 + 154;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// addi r10,r10,178
	ctx.r10.s64 = ctx.r10.s64 + 178;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stwx r9,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r9.u32);
	// lwzx r4,r11,r3
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// b 0x82c3bba4
	goto loc_82C3BBA4;
loc_82C3BAE8:
	// bl 0x831156e8
	ctx.lr = 0x82C3BAEC;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r29,48(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x82C3BB14;
	sub_831CDCF0(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r9,2
	ctx.r9.s64 = 2;
	// lwz r8,100(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r9,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r9.u32);
	// subf r5,r11,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r11.s64;
	// stb r7,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, ctx.r7.u8);
	// stb r28,173(r1)
	PPC_STORE_U8(ctx.r1.u32 + 173, ctx.r28.u8);
	// srawi. r4,r5,3
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 3;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// stb r6,174(r1)
	PPC_STORE_U8(ctx.r1.u32 + 174, ctx.r6.u8);
	// bne 0x82c3bb50
	if (!cr0.eq) goto loc_82C3BB50;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C3BB50;
	sub_831CC188(ctx, base);
loc_82C3BB50:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// rlwinm r11,r30,2,22,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// add r7,r11,r29
	ctx.r7.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addis r4,r7,222
	ctx.r4.s64 = ctx.r7.s64 + 14548992;
	// addi r4,r4,-12200
	ctx.r4.s64 = ctx.r4.s64 + -12200;
	// bl 0x82c3af58
	ctx.lr = 0x82C3BB7C;
	sub_82C3AF58(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,168(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// cmpw cr6,r5,r6
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, xer);
	// bne cr6,0x82c3bbac
	if (!cr6.eq) goto loc_82C3BBAC;
	// addi r11,r27,178
	ctx.r11.s64 = ctx.r27.s64 + 178;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
loc_82C3BBA4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c3b680
	ctx.lr = 0x82C3BBAC;
	sub_82C3B680(ctx, base);
loc_82C3BBAC:
	// addi r11,r30,154
	ctx.r11.s64 = ctx.r30.s64 + 154;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r27,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r27.u32);
loc_82C3BBB8:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C3BBC0"))) PPC_WEAK_FUNC(sub_82C3BBC0);
PPC_FUNC_IMPL(__imp__sub_82C3BBC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82C3BBC8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,51
	ctx.r11.s64 = ctx.r4.s64 + 51;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r3
	ctx.r31.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// lbz r9,344(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 344);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82c3bbf8
	if (!cr6.eq) goto loc_82C3BBF8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82C3BBF8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,356(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 356);
	// add r28,r11,r29
	ctx.r28.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r10,760(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 760);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c3bc50
	if (!cr6.eq) goto loc_82C3BC50;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82C3BC14:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,368(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 368);
	// ldx r9,r10,r30
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r30.u32);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r5,-2
	cr6.compare<int32_t>(ctx.r5.s32, -2, xer);
	// beq cr6,0x82c3bc3c
	if (cr6.eq) goto loc_82C3BC3C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82c3ba90
	ctx.lr = 0x82C3BC3C;
	sub_82C3BA90(ctx, base);
loc_82C3BC3C:
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplwi cr6,r30,192
	cr6.compare<uint32_t>(ctx.r30.u32, 192, xer);
	// blt cr6,0x82c3bc14
	if (cr6.lt) goto loc_82C3BC14;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,760(r28)
	PPC_STORE_U8(ctx.r28.u32 + 760, ctx.r11.u8);
loc_82C3BC50:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82e744f8
	ctx.lr = 0x82C3BC58;
	sub_82E744F8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// beq cr6,0x82c3bcb0
	if (cr6.eq) goto loc_82C3BCB0;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// bl 0x8257fad0
	ctx.lr = 0x82C3BC84;
	sub_8257FAD0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x82c3bcb0
	if (cr6.lt) goto loc_82C3BCB0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8257fb60
	ctx.lr = 0x82C3BCA8;
	sub_8257FB60(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_82C3BCB0:
	// bl 0x82dad2e0
	ctx.lr = 0x82C3BCB4;
	sub_82DAD2E0(ctx, base);
	// lwz r11,564(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 564);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c3bccc
	if (!cr6.eq) goto loc_82C3BCCC;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x82c3bcf0
	goto loc_82C3BCF0;
loc_82C3BCCC:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lbz r11,344(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 344);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c3bce0
	if (cr6.eq) goto loc_82C3BCE0;
	// bl 0x82e744f8
	ctx.lr = 0x82C3BCE0;
	sub_82E744F8(ctx, base);
loc_82C3BCE0:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,564(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 564);
	// bl 0x82e744b0
	ctx.lr = 0x82C3BCEC;
	sub_82E744B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82C3BCF0:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3bd00
	if (cr6.eq) goto loc_82C3BD00;
	// bl 0x8259b510
	ctx.lr = 0x82C3BD00;
	sub_8259B510(ctx, base);
loc_82C3BD00:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C3BD14"))) PPC_WEAK_FUNC(sub_82C3BD14);
PPC_FUNC_IMPL(__imp__sub_82C3BD14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3BD18"))) PPC_WEAK_FUNC(sub_82C3BD18);
PPC_FUNC_IMPL(__imp__sub_82C3BD18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82C3BD20;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,18392
	ctx.r9.s64 = ctx.r11.s64 + 18392;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// bl 0x82d482c0
	ctx.lr = 0x82C3BD48;
	sub_82D482C0(ctx, base);
	// lwz r6,768(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 768);
	// addi r4,r31,764
	ctx.r4.s64 = ctx.r31.s64 + 764;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82d0e798
	ctx.lr = 0x82C3BD5C;
	sub_82D0E798(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// lwz r4,768(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 768);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// bl 0x825952b8
	ctx.lr = 0x82C3BD70;
	sub_825952B8(ctx, base);
	// addi r11,r31,616
	ctx.r11.s64 = ctx.r31.s64 + 616;
	// li r29,23
	ctx.r29.s64 = 23;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
loc_82C3BD7C:
	// lwzu r3,-8(r30)
	ea = -8 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3bd8c
	if (cr6.eq) goto loc_82C3BD8C;
	// bl 0x8259b510
	ctx.lr = 0x82C3BD8C;
	sub_8259B510(ctx, base);
loc_82C3BD8C:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bge 0x82c3bd7c
	if (!cr0.lt) goto loc_82C3BD7C;
	// addi r11,r31,424
	ctx.r11.s64 = ctx.r31.s64 + 424;
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
loc_82C3BDA0:
	// lwzu r3,-8(r30)
	ea = -8 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3bdb0
	if (cr6.eq) goto loc_82C3BDB0;
	// bl 0x8259b510
	ctx.lr = 0x82C3BDB0;
	sub_8259B510(ctx, base);
loc_82C3BDB0:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bge 0x82c3bda0
	if (!cr0.lt) goto loc_82C3BDA0;
	// addi r11,r31,408
	ctx.r11.s64 = ctx.r31.s64 + 408;
	// li r29,23
	ctx.r29.s64 = 23;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
loc_82C3BDC4:
	// lwzu r3,-8(r30)
	ea = -8 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3bdd4
	if (cr6.eq) goto loc_82C3BDD4;
	// bl 0x8259b510
	ctx.lr = 0x82C3BDD4;
	sub_8259B510(ctx, base);
loc_82C3BDD4:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bge 0x82c3bdc4
	if (!cr0.lt) goto loc_82C3BDC4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b9a760
	ctx.lr = 0x82C3BDE4;
	sub_82B9A760(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C3BDEC"))) PPC_WEAK_FUNC(sub_82C3BDEC);
PPC_FUNC_IMPL(__imp__sub_82C3BDEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3BDF0"))) PPC_WEAK_FUNC(sub_82C3BDF0);
PPC_FUNC_IMPL(__imp__sub_82C3BDF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x82C3BDF8;
	__savegprlr_21(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,27
	ctx.r11.s64 = ctx.r4.s64 + 27;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// rlwinm r21,r11,3,0,28
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r21,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r3.u32);
	// lbz r10,344(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 344);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c3be24
	if (!cr6.eq) goto loc_82C3BE24;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_82C3BE24:
	// lbz r31,345(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 345);
	// bl 0x82dad2e0
	ctx.lr = 0x82C3BE2C;
	sub_82DAD2E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3bf24
	if (cr6.eq) goto loc_82C3BF24;
	// bl 0x831156e8
	ctx.lr = 0x82C3BE38;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r28,0
	ctx.r28.s64 = 0;
	// addis r26,r11,222
	ctx.r26.s64 = ctx.r11.s64 + 14548992;
	// li r23,2
	ctx.r23.s64 = 2;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// clrlwi r27,r31,24
	ctx.r27.u64 = ctx.r31.u32 & 0xFF;
	// addi r26,r26,-12208
	ctx.r26.s64 = ctx.r26.s64 + -12208;
	// li r29,-1
	ctx.r29.s64 = -1;
	// li r24,4
	ctx.r24.s64 = 4;
	// li r25,1
	ctx.r25.s64 = 1;
loc_82C3BE60:
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x831cdcf0
	ctx.lr = 0x82C3BE78;
	sub_831CDCF0(ctx, base);
	// rlwinm r10,r30,2,22,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FC;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r23,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r23.u32);
	// stb r24,156(r1)
	PPC_STORE_U8(ctx.r1.u32 + 156, ctx.r24.u8);
	// li r4,64
	ctx.r4.s64 = 64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r28,157(r1)
	PPC_STORE_U8(ctx.r1.u32 + 157, ctx.r28.u8);
	// stb r25,158(r1)
	PPC_STORE_U8(ctx.r1.u32 + 158, ctx.r25.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r31,r11,r26
	ctx.r31.u64 = ctx.r11.u64 + ctx.r26.u64;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// bl 0x831ce7d8
	ctx.lr = 0x82C3BEC0;
	sub_831CE7D8(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r6,r27
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r27.u32, xer);
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// lbz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 84);
	// stb r8,156(r1)
	PPC_STORE_U8(ctx.r1.u32 + 156, ctx.r8.u8);
	// lbz r7,85(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 85);
	// stb r7,157(r1)
	PPC_STORE_U8(ctx.r1.u32 + 157, ctx.r7.u8);
	// lbz r5,86(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 86);
	// stb r5,158(r1)
	PPC_STORE_U8(ctx.r1.u32 + 158, ctx.r5.u8);
	// beq cr6,0x82c3befc
	if (cr6.eq) goto loc_82C3BEFC;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,24
	cr6.compare<uint32_t>(ctx.r30.u32, 24, xer);
	// blt cr6,0x82c3be60
	if (cr6.lt) goto loc_82C3BE60;
	// b 0x82c3bf04
	goto loc_82C3BF04;
loc_82C3BEFC:
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_82C3BF04:
	// lwz r11,808(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 808);
	// cmpw cr6,r11,r23
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, xer);
	// bne cr6,0x82c3bf24
	if (!cr6.eq) goto loc_82C3BF24;
	// lwzx r11,r21,r22
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r22.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r5,356(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 356);
	// bl 0x82c3ba90
	ctx.lr = 0x82C3BF24;
	sub_82C3BA90(ctx, base);
loc_82C3BF24:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C3BF30"))) PPC_WEAK_FUNC(sub_82C3BF30);
PPC_FUNC_IMPL(__imp__sub_82C3BF30) {
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
	// bl 0x82c3bd18
	ctx.lr = 0x82C3BF50;
	sub_82C3BD18(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c3bf68
	if (cr6.eq) goto loc_82C3BF68;
	// bl 0x82416268
	ctx.lr = 0x82C3BF64;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C3BF68:
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

__attribute__((alias("__imp__sub_82C3BF80"))) PPC_WEAK_FUNC(sub_82C3BF80);
PPC_FUNC_IMPL(__imp__sub_82C3BF80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82C3BF88;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r3,120
	ctx.r31.s64 = ctx.r3.s64 + 120;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// li r28,1
	ctx.r28.s64 = 1;
loc_82C3BFA0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82c3bfd0
	if (cr6.lt) goto loc_82C3BFD0;
	// bne cr6,0x82c3bfec
	if (!cr6.eq) goto loc_82C3BFEC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c3bdf0
	ctx.lr = 0x82C3BFBC;
	sub_82C3BDF0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c3bfec
	if (cr6.eq) goto loc_82C3BFEC;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// b 0x82c3bfec
	goto loc_82C3BFEC;
loc_82C3BFD0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c3b4b8
	ctx.lr = 0x82C3BFDC;
	sub_82C3B4B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c3bfec
	if (cr6.eq) goto loc_82C3BFEC;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_82C3BFEC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r30,24
	cr6.compare<uint32_t>(ctx.r30.u32, 24, xer);
	// blt cr6,0x82c3bfa0
	if (cr6.lt) goto loc_82C3BFA0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C3C004"))) PPC_WEAK_FUNC(sub_82C3C004);
PPC_FUNC_IMPL(__imp__sub_82C3C004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3C008"))) PPC_WEAK_FUNC(sub_82C3C008);
PPC_FUNC_IMPL(__imp__sub_82C3C008) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x82C3C010;
	__savegprlr_20(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r20,r3,712
	ctx.r20.s64 = ctx.r3.s64 + 712;
	// li r21,0
	ctx.r21.s64 = 0;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r7,r3,620
	ctx.r7.s64 = ctx.r3.s64 + 620;
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_82C3C02C:
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r21,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r21.u32);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82C3C03C:
	// lwz r10,-4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bne cr6,0x82c3c054
	if (!cr6.eq) goto loc_82C3C054;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82C3C054:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bne cr6,0x82c3c06c
	if (!cr6.eq) goto loc_82C3C06C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82C3C06C:
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bne cr6,0x82c3c084
	if (!cr6.eq) goto loc_82C3C084;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82C3C084:
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bne cr6,0x82c3c09c
	if (!cr6.eq) goto loc_82C3C09C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82C3C09C:
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bne cr6,0x82c3c0b4
	if (!cr6.eq) goto loc_82C3C0B4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82C3C0B4:
	// lwz r10,16(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bne cr6,0x82c3c0cc
	if (!cr6.eq) goto loc_82C3C0CC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82C3C0CC:
	// addi r9,r9,24
	ctx.r9.s64 = ctx.r9.s64 + 24;
	// bdnz 0x82c3c03c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82C3C03C;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r8,12
	cr6.compare<uint32_t>(ctx.r8.u32, 12, xer);
	// blt cr6,0x82c3c02c
	if (cr6.lt) goto loc_82C3C02C;
	// bl 0x82d86078
	ctx.lr = 0x82C3C0E8;
	sub_82D86078(ctx, base);
	// lwz r23,76(r3)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// mr r26,r21
	ctx.r26.u64 = ctx.r21.u64;
	// mr r25,r20
	ctx.r25.u64 = ctx.r20.u64;
	// li r22,2
	ctx.r22.s64 = 2;
	// li r27,13
	ctx.r27.s64 = 13;
loc_82C3C0FC:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c3c284
	if (cr6.eq) goto loc_82C3C284;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// stw r21,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r21.u32);
	// stw r21,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r21.u32);
	// stw r21,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r21.u32);
	// stw r21,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r21.u32);
loc_82C3C11C:
	// addi r10,r11,154
	ctx.r10.s64 = ctx.r11.s64 + 154;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r24
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r24.u32);
	// cmplw cr6,r8,r26
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r26.u32, xer);
	// bne cr6,0x82c3c140
	if (!cr6.eq) goto loc_82C3C140;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x835977d8
	ctx.lr = 0x82C3C13C;
	sub_835977D8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82C3C140:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// blt cr6,0x82c3c11c
	if (cr6.lt) goto loc_82C3C11C;
	// lwz r30,96(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r29,100(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// subf r11,r30,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r30.s64;
	// srawi. r4,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 2;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x82c3c17c
	if (!cr0.eq) goto loc_82C3C17C;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// stw r21,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r21.u32);
	// beq cr6,0x82c3c278
	if (cr6.eq) goto loc_82C3C278;
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// b 0x82c3c270
	goto loc_82C3C270;
loc_82C3C17C:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// beq cr6,0x82c3c260
	if (cr6.eq) goto loc_82C3C260;
loc_82C3C184:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82dd9520
	ctx.lr = 0x82C3C18C;
	sub_82DD9520(ctx, base);
	// rlwinm r28,r3,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r28,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// bge cr6,0x82c3c1cc
	if (!cr6.lt) goto loc_82C3C1CC;
	// addi r11,r11,154
	ctx.r11.s64 = ctx.r11.s64 + 154;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r31,r24
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r24.u32);
	// addi r10,r11,178
	ctx.r10.s64 = ctx.r11.s64 + 178;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r24
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// stwx r9,r11,r24
	PPC_STORE_U32(ctx.r11.u32 + ctx.r24.u32, ctx.r9.u32);
	// lwzx r4,r31,r24
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r24.u32);
	// bl 0x82c3b680
	ctx.lr = 0x82C3C1C8;
	sub_82C3B680(ctx, base);
	// stwx r27,r31,r24
	PPC_STORE_U32(ctx.r31.u32 + ctx.r24.u32, ctx.r27.u32);
loc_82C3C1CC:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// beq cr6,0x82c3c230
	if (cr6.eq) goto loc_82C3C230;
	// lwzx r10,r28,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r30.u32);
loc_82C3C1DC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x82c3c1f8
	if (cr6.eq) goto loc_82C3C1F8;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// bne cr6,0x82c3c1dc
	if (!cr6.eq) goto loc_82C3C1DC;
	// b 0x82c3c230
	goto loc_82C3C230;
loc_82C3C1F8:
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// beq cr6,0x82c3c230
	if (cr6.eq) goto loc_82C3C230;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r29
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, xer);
	// beq cr6,0x82c3c230
	if (cr6.eq) goto loc_82C3C230;
loc_82C3C20C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwzx r8,r28,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r30.u32);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// beq cr6,0x82c3c224
	if (cr6.eq) goto loc_82C3C224;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82C3C224:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r10,r29
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, xer);
	// bne cr6,0x82c3c20c
	if (!cr6.eq) goto loc_82C3C20C;
loc_82C3C230:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// beq cr6,0x82c3c250
	if (cr6.eq) goto loc_82C3C250;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x831ce420
	ctx.lr = 0x82C3C24C;
	sub_831CE420(ctx, base);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_82C3C250:
	// subf r11,r30,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r30.s64;
	// srawi r4,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 2;
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x82c3c184
	if (!cr6.eq) goto loc_82C3C184;
loc_82C3C260:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82c3c278
	if (cr6.eq) goto loc_82C3C278;
	// stw r22,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r22.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
loc_82C3C270:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825952b8
	ctx.lr = 0x82C3C278;
	sub_825952B8(ctx, base);
loc_82C3C278:
	// stw r21,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r21.u32);
	// stw r21,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r21.u32);
	// stw r21,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r21.u32);
loc_82C3C284:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// cmplwi cr6,r26,11
	cr6.compare<uint32_t>(ctx.r26.u32, 11, xer);
	// blt cr6,0x82c3c0fc
	if (cr6.lt) goto loc_82C3C0FC;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// stw r21,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r21.u32);
	// stw r21,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r21.u32);
	// stw r21,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r21.u32);
	// stw r21,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r21.u32);
loc_82C3C2A8:
	// addi r10,r11,154
	ctx.r10.s64 = ctx.r11.s64 + 154;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r24
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r24.u32);
	// cmplwi cr6,r8,13
	cr6.compare<uint32_t>(ctx.r8.u32, 13, xer);
	// bne cr6,0x82c3c2cc
	if (!cr6.eq) goto loc_82C3C2CC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x835977d8
	ctx.lr = 0x82C3C2C8;
	sub_835977D8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82C3C2CC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// blt cr6,0x82c3c2a8
	if (cr6.lt) goto loc_82C3C2A8;
	// lwz r29,96(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r30,100(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// subf r11,r29,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r29.s64;
	// srawi. r4,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 2;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x82c3c3c8
	if (cr0.eq) goto loc_82C3C3C8;
loc_82C3C2F0:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82dd9520
	ctx.lr = 0x82C3C2F8;
	sub_82DD9520(ctx, base);
	// li r10,11
	ctx.r10.s64 = 11;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82C3C30C:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c3c31c
	if (!cr6.eq) goto loc_82C3C31C;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
loc_82C3C31C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82c3c30c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82C3C30C;
	// rlwinm r31,r3,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwzx r4,r31,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// bl 0x82c3ba90
	ctx.lr = 0x82C3C338;
	sub_82C3BA90(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r30
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, xer);
	// beq cr6,0x82c3c39c
	if (cr6.eq) goto loc_82C3C39C;
	// lwzx r10,r31,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
loc_82C3C348:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x82c3c364
	if (cr6.eq) goto loc_82C3C364;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// bne cr6,0x82c3c348
	if (!cr6.eq) goto loc_82C3C348;
	// b 0x82c3c39c
	goto loc_82C3C39C;
loc_82C3C364:
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// beq cr6,0x82c3c39c
	if (cr6.eq) goto loc_82C3C39C;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, xer);
	// beq cr6,0x82c3c39c
	if (cr6.eq) goto loc_82C3C39C;
loc_82C3C378:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwzx r8,r31,r29
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// beq cr6,0x82c3c390
	if (cr6.eq) goto loc_82C3C390;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82C3C390:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, xer);
	// bne cr6,0x82c3c378
	if (!cr6.eq) goto loc_82C3C378;
loc_82C3C39C:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// beq cr6,0x82c3c3bc
	if (cr6.eq) goto loc_82C3C3BC;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x831ce420
	ctx.lr = 0x82C3C3B8;
	sub_831CE420(ctx, base);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82C3C3BC:
	// subf r11,r29,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r29.s64;
	// srawi. r4,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 2;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x82c3c2f0
	if (!cr0.eq) goto loc_82C3C2F0;
loc_82C3C3C8:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82c3c3e0
	if (cr6.eq) goto loc_82C3C3E0;
	// stw r22,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r22.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x825952b8
	ctx.lr = 0x82C3C3E0;
	sub_825952B8(ctx, base);
loc_82C3C3E0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C3C3EC"))) PPC_WEAK_FUNC(sub_82C3C3EC);
PPC_FUNC_IMPL(__imp__sub_82C3C3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3C3F0"))) PPC_WEAK_FUNC(sub_82C3C3F0);
PPC_FUNC_IMPL(__imp__sub_82C3C3F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82C3C3F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C3C408;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82C3C410;
	sub_82D33DB0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82C3C418;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3c568
	if (cr6.eq) goto loc_82C3C568;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r10,18260
	ctx.r4.s64 = ctx.r10.s64 + 18260;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C3C43C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,100(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r7,15
	ctx.r7.s64 = 15;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// subf r6,r11,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r11.s64;
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r29.u8);
	// srawi. r5,r6,3
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 3;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne 0x82c3c474
	if (!cr0.eq) goto loc_82C3C474;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C3C474;
	sub_831CC188(ctx, base);
loc_82C3C474:
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lwz r27,88(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8399f8b8
	ctx.lr = 0x82C3C484;
	sub_8399F8B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82C3C48C;
	sub_831156E8(ctx, base);
	// mulli r11,r27,532
	ctx.r11.s64 = ctx.r27.s64 * 532;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addis r31,r10,5
	ctx.r31.s64 = ctx.r10.s64 + 327680;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// addi r31,r31,14904
	ctx.r31.s64 = ctx.r31.s64 + 14904;
	// bl 0x8399ea10
	ctx.lr = 0x82C3C4AC;
	sub_8399EA10(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83123ba8
	ctx.lr = 0x82C3C4C0;
	sub_83123BA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// li r5,224
	ctx.r5.s64 = 224;
	// bl 0x831ce980
	ctx.lr = 0x82C3C4D0;
	sub_831CE980(ctx, base);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r11,r11,-16392
	ctx.r11.s64 = ctx.r11.s64 + -16392;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c3c4f4
	if (!cr6.eq) goto loc_82C3C4F4;
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x82c3c51c
	goto loc_82C3C51C;
loc_82C3C4F4:
	// lhz r8,172(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 172);
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x82c3c514
	if (!cr6.eq) goto loc_82C3C514;
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82c3c518
	if (cr6.eq) goto loc_82C3C518;
loc_82C3C514:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82C3C518:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82C3C51C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c3c534
	if (!cr6.eq) goto loc_82C3C534;
	// addi r4,r1,184
	ctx.r4.s64 = ctx.r1.s64 + 184;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259d6c0
	ctx.lr = 0x82C3C534;
	sub_8259D6C0(ctx, base);
loc_82C3C534:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82C3C548;
	sub_82D291E0(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c3c568
	if (cr6.lt) goto loc_82C3C568;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82C3C568;
	sub_825952B8(ctx, base);
loc_82C3C568:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C3C570"))) PPC_WEAK_FUNC(sub_82C3C570);
PPC_FUNC_IMPL(__imp__sub_82C3C570) {
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
	ctx.lr = 0x82C3C578;
	__savegprlr_25(ctx, base);
	// stwu r1,-928(r1)
	ea = -928 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bne cr6,0x82c3c8d0
	if (!cr6.eq) goto loc_82C3C8D0;
	// bl 0x82d17d90
	ctx.lr = 0x82C3C590;
	sub_82D17D90(ctx, base);
	// lis r11,5
	ctx.r11.s64 = 327680;
	// li r25,1
	ctx.r25.s64 = 1;
	// ori r27,r11,14904
	ctx.r27.u64 = ctx.r11.u64 | 14904;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c3c690
	if (!cr6.eq) goto loc_82C3C690;
	// lbz r11,784(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 784);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c3c690
	if (cr6.eq) goto loc_82C3C690;
	// bl 0x82d86078
	ctx.lr = 0x82C3C5B4;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3c8d0
	if (cr6.eq) goto loc_82C3C8D0;
	// lwz r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// bl 0x83767d18
	ctx.lr = 0x82C3C5C4;
	sub_83767D18(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r30,r31,96
	ctx.r30.s64 = ctx.r31.s64 + 96;
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r8,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 3;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82c3c5ec
	if (!cr0.eq) goto loc_82C3C5EC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C3C5EC;
	sub_831CC188(ctx, base);
loc_82C3C5EC:
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r10,154
	ctx.r11.s64 = ctx.r10.s64 + 154;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r10,r31
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// bl 0x8399f8b8
	ctx.lr = 0x82C3C604;
	sub_8399F8B8(ctx, base);
	// mulli r11,r28,532
	ctx.r11.s64 = ctx.r28.s64 * 532;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// li r5,532
	ctx.r5.s64 = 532;
	// bl 0x831ce980
	ctx.lr = 0x82C3C61C;
	sub_831CE980(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x8399ea10
	ctx.lr = 0x82C3C628;
	sub_8399EA10(ctx, base);
	// clrlwi r28,r3,24
	ctx.r28.u64 = ctx.r3.u32 & 0xFF;
	// bl 0x831156e8
	ctx.lr = 0x82C3C630;
	sub_831156E8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r8,52(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// subf r7,r11,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r11.s64;
	// add r3,r8,r27
	ctx.r3.u64 = ctx.r8.u64 + ctx.r27.u64;
	// srawi. r6,r7,3
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 3;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne 0x82c3c658
	if (!cr0.eq) goto loc_82C3C658;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C3C658;
	sub_831CC188(ctx, base);
loc_82C3C658:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x83123ce0
	ctx.lr = 0x82C3C678;
	sub_83123CE0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c3c3f0
	ctx.lr = 0x82C3C684;
	sub_82C3C3F0(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 780, ctx.r9.u32);
	// b 0x82c3c694
	goto loc_82C3C694;
loc_82C3C690:
	// stw r25,780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 780, ctx.r25.u32);
loc_82C3C694:
	// li r11,5
	ctx.r11.s64 = 5;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// bl 0x82d482c0
	ctx.lr = 0x82C3C6A4;
	sub_82D482C0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d199d0
	ctx.lr = 0x82C3C6B0;
	sub_82D199D0(ctx, base);
	// bl 0x82d86078
	ctx.lr = 0x82C3C6B4;
	sub_82D86078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3c78c
	if (cr6.eq) goto loc_82C3C78C;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r8,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 3;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82c3c6e0
	if (!cr0.eq) goto loc_82C3C6E0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C3C6E0;
	sub_831CC188(ctx, base);
loc_82C3C6E0:
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// bl 0x831156e8
	ctx.lr = 0x82C3C6EC;
	sub_831156E8(ctx, base);
	// lbz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 92);
	// lis r8,5
	ctx.r8.s64 = 327680;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// ori r7,r8,35313
	ctx.r7.u64 = ctx.r8.u64 | 35313;
	// lwz r30,88(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// lbzx r29,r6,r7
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r7.u32);
	// bne cr6,0x82c3c714
	if (!cr6.eq) goto loc_82C3C714;
	// addi r29,r29,-11
	ctx.r29.s64 = ctx.r29.s64 + -11;
loc_82C3C714:
	// bl 0x831156e8
	ctx.lr = 0x82C3C718;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x82C3C728;
	sub_8399F8B8(ctx, base);
	// mulli r11,r30,532
	ctx.r11.s64 = ctx.r30.s64 * 532;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// li r5,532
	ctx.r5.s64 = 532;
	// bl 0x831ce980
	ctx.lr = 0x82C3C740;
	sub_831CE980(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x8399ea10
	ctx.lr = 0x82C3C74C;
	sub_8399EA10(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83123ba8
	ctx.lr = 0x82C3C760;
	sub_83123BA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,224
	ctx.r5.s64 = 224;
	// bl 0x831ce980
	ctx.lr = 0x82C3C770;
	sub_831CE980(ctx, base);
	// lwz r11,104(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 104);
	// ld r10,140(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 140);
	// std r10,516(r11)
	PPC_STORE_U64(ctx.r11.u32 + 516, ctx.r10.u64);
	// lwz r9,780(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 780);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82c3c78c
	if (!cr6.eq) goto loc_82C3C78C;
	// stb r25,524(r11)
	PPC_STORE_U8(ctx.r11.u32 + 524, ctx.r25.u8);
loc_82C3C78C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C3C794;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82C3C79C;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3c8d0
	if (cr6.eq) goto loc_82C3C8D0;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r29,r31,96
	ctx.r29.s64 = ctx.r31.s64 + 96;
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r8,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 3;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82c3c7c8
	if (!cr0.eq) goto loc_82C3C7C8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C3C7C8;
	sub_831CC188(ctx, base);
loc_82C3C7C8:
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// addi r11,r11,154
	ctx.r11.s64 = ctx.r11.s64 + 154;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// bl 0x82d33db0
	ctx.lr = 0x82C3C7DC;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3c8d0
	if (cr6.eq) goto loc_82C3C8D0;
	// lwz r10,100(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r30,r11,18136
	ctx.r30.s64 = ctx.r11.s64 + 18136;
	// addi r4,r30,-12
	ctx.r4.s64 = ctx.r30.s64 + -12;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C3C804;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3c8d0
	if (cr6.eq) goto loc_82C3C8D0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,70
	ctx.r4.s64 = 70;
	// bl 0x82d28130
	ctx.lr = 0x82C3C818;
	sub_82D28130(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r8,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 3;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82c3c838
	if (!cr0.eq) goto loc_82C3C838;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C3C838;
	sub_831CC188(ctx, base);
loc_82C3C838:
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r9,r11,154
	ctx.r9.s64 = ctx.r11.s64 + 154;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f2,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f2.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// lwzx r5,r8,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// bl 0x82d1ebf8
	ctx.lr = 0x82C3C864;
	sub_82D1EBF8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83102db0
	ctx.lr = 0x82C3C870;
	sub_83102DB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C3C878;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82C3C890;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3c8d0
	if (cr6.eq) goto loc_82C3C8D0;
	// lis r4,515
	ctx.r4.s64 = 33751040;
	// ori r4,r4,26
	ctx.r4.u64 = ctx.r4.u64 | 26;
	// bl 0x82d39ab8
	ctx.lr = 0x82C3C8A4;
	sub_82D39AB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C3C8AC;
	sub_82D19A78(ctx, base);
	// bl 0x83574c00
	ctx.lr = 0x82C3C8B0;
	sub_83574C00(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3c8d0
	if (cr6.eq) goto loc_82C3C8D0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d44fa8
	ctx.lr = 0x82C3C8C4;
	sub_82D44FA8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d44fa8
	ctx.lr = 0x82C3C8D0;
	sub_82D44FA8(ctx, base);
loc_82C3C8D0:
	// addi r1,r1,928
	ctx.r1.s64 = ctx.r1.s64 + 928;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C3C8D8"))) PPC_WEAK_FUNC(sub_82C3C8D8);
PPC_FUNC_IMPL(__imp__sub_82C3C8D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82C3C8E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82C3C8EC;
	sub_82D86078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3ca08
	if (cr6.eq) goto loc_82C3CA08;
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// bl 0x82dbb5c0
	ctx.lr = 0x82C3C900;
	sub_82DBB5C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c3ca08
	if (cr6.eq) goto loc_82C3CA08;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C3C914;
	sub_82D19A78(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r29,r11,18184
	ctx.r29.s64 = ctx.r11.s64 + 18184;
	// addi r4,r29,-12
	ctx.r4.s64 = ctx.r29.s64 + -12;
	// bl 0x82d2f098
	ctx.lr = 0x82C3C924;
	sub_82D2F098(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3ca08
	if (cr6.eq) goto loc_82C3CA08;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b73340
	ctx.lr = 0x82C3C938;
	sub_82B73340(ctx, base);
	// lwz r3,20(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// bl 0x831f81f8
	ctx.lr = 0x82C3C940;
	sub_831F81F8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82dbbf30
	ctx.lr = 0x82C3C948;
	sub_82DBBF30(ctx, base);
	// lbz r10,291(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 291);
	// li r5,1
	ctx.r5.s64 = 1;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82c3c9c0
	if (!cr6.eq) goto loc_82C3C9C0;
	// lbz r11,784(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 784);
	// li r6,2
	ctx.r6.s64 = 2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c3c9b4
	if (!cr6.eq) goto loc_82C3C9B4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2b608
	ctx.lr = 0x82C3C974;
	sub_82D2B608(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82C3C984;
	sub_82D2AEC8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f2,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x82d1ebf8
	ctx.lr = 0x82C3C9A4;
	sub_82D1EBF8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b73218
	ctx.lr = 0x82C3C9AC;
	sub_82B73218(ctx, base);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82C3C9B4:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2b608
	ctx.lr = 0x82C3C9BC;
	sub_82D2B608(ctx, base);
	// b 0x82c3c9f8
	goto loc_82C3C9F8;
loc_82C3C9C0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C3C9D4;
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
	ctx.lr = 0x82C3C9E8;
	sub_82D2B608(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82C3C9F8;
	sub_82D2AEC8(ctx, base);
loc_82C3C9F8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c3b090
	ctx.lr = 0x82C3CA00;
	sub_82C3B090(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b73218
	ctx.lr = 0x82C3CA08;
	sub_82B73218(ctx, base);
loc_82C3CA08:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C3CA10"))) PPC_WEAK_FUNC(sub_82C3CA10);
PPC_FUNC_IMPL(__imp__sub_82C3CA10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x82C3CA18;
	__savegprlr_21(ctx, base);
	// stwu r1,-1360(r1)
	ea = -1360 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,53
	ctx.r11.s64 = ctx.r4.s64 + 53;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// rlwinm r29,r11,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// lwzx r11,r29,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r3.u32);
	// lbz r10,344(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 344);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c3ca48
	if (!cr6.eq) goto loc_82C3CA48;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,1360
	ctx.r1.s64 = ctx.r1.s64 + 1360;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_82C3CA48:
	// lbz r31,345(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 345);
	// addi r30,r23,764
	ctx.r30.s64 = ctx.r23.s64 + 764;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// bl 0x833ecc50
	ctx.lr = 0x82C3CA68;
	sub_833ECC50(ctx, base);
	// lwz r10,768(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 768);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r24,1
	ctx.r24.s64 = 1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82c3ca84
	if (cr6.eq) goto loc_82C3CA84;
	// stb r24,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r24.u8);
	// b 0x82c3ca9c
	goto loc_82C3CA9C;
loc_82C3CA84:
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r24,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r24.u8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c3b8f0
	ctx.lr = 0x82C3CA9C;
	sub_82C3B8F0(ctx, base);
loc_82C3CA9C:
	// lwzx r11,r29,r23
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r23.u32);
	// lwz r10,356(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 356);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x82c3cc04
	if (cr6.eq) goto loc_82C3CC04;
	// bl 0x82d86078
	ctx.lr = 0x82C3CAB0;
	sub_82D86078(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3cc10
	if (cr6.eq) goto loc_82C3CC10;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82c3b3d8
	ctx.lr = 0x82C3CAC4;
	sub_82C3B3D8(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82C3CAC8;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r30,0
	ctx.r30.s64 = 0;
	// addis r28,r11,222
	ctx.r28.s64 = ctx.r11.s64 + 14548992;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r28,r28,-12208
	ctx.r28.s64 = ctx.r28.s64 + -12208;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// li r29,-1
	ctx.r29.s64 = -1;
	// li r26,2
	ctx.r26.s64 = 2;
	// li r27,4
	ctx.r27.s64 = 4;
loc_82C3CAF0:
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x831cdcf0
	ctx.lr = 0x82C3CB08;
	sub_831CDCF0(ctx, base);
	// stw r26,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r26.u32);
	// stb r27,188(r1)
	PPC_STORE_U8(ctx.r1.u32 + 188, ctx.r27.u8);
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// stb r30,189(r1)
	PPC_STORE_U8(ctx.r1.u32 + 189, ctx.r30.u8);
	// rlwinm r11,r31,2,22,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0x3FC;
	// stb r24,190(r1)
	PPC_STORE_U8(ctx.r1.u32 + 190, ctx.r24.u8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bl 0x82c3af58
	ctx.lr = 0x82C3CB38;
	sub_82C3AF58(ctx, base);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplw cr6,r10,r25
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r25.u32, xer);
	// beq cr6,0x82c3cb54
	if (cr6.eq) goto loc_82C3CB54;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,24
	cr6.compare<uint32_t>(ctx.r31.u32, 24, xer);
	// blt cr6,0x82c3caf0
	if (cr6.lt) goto loc_82C3CAF0;
	// b 0x82c3cb60
	goto loc_82C3CB60;
loc_82C3CB54:
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
loc_82C3CB60:
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// lwz r3,80(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 80);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x82dd6050
	ctx.lr = 0x82C3CB70;
	sub_82DD6050(ctx, base);
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// li r5,224
	ctx.r5.s64 = 224;
	// bl 0x831ce980
	ctx.lr = 0x82C3CB80;
	sub_831CE980(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r10,r11,154
	ctx.r10.s64 = ctx.r11.s64 + 154;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r23
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r23.u32);
	// cmplwi cr6,r31,13
	cr6.compare<uint32_t>(ctx.r31.u32, 13, xer);
	// beq cr6,0x82c3cc10
	if (cr6.eq) goto loc_82C3CC10;
	// rotlwi r11,r31,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// cmpwi cr6,r11,-2
	cr6.compare<int32_t>(ctx.r11.s32, -2, xer);
	// beq cr6,0x82c3cc10
	if (cr6.eq) goto loc_82C3CC10;
	// lwz r30,88(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8399f8b8
	ctx.lr = 0x82C3CBAC;
	sub_8399F8B8(ctx, base);
	// mulli r11,r30,532
	ctx.r11.s64 = ctx.r30.s64 * 532;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// li r5,532
	ctx.r5.s64 = 532;
	// bl 0x831ce980
	ctx.lr = 0x82C3CBC4;
	sub_831CE980(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// bl 0x8399ea10
	ctx.lr = 0x82C3CBD0;
	sub_8399EA10(ctx, base);
	// clrlwi r30,r3,24
	ctx.r30.u64 = ctx.r3.u32 & 0xFF;
	// bl 0x831156e8
	ctx.lr = 0x82C3CBD8;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addis r3,r11,5
	ctx.r3.s64 = ctx.r11.s64 + 327680;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
	// addi r3,r3,14904
	ctx.r3.s64 = ctx.r3.s64 + 14904;
	// bl 0x83123ce0
	ctx.lr = 0x82C3CBF8;
	sub_83123CE0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82c3c3f0
	ctx.lr = 0x82C3CC04;
	sub_82C3C3F0(ctx, base);
loc_82C3CC04:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82c3b558
	ctx.lr = 0x82C3CC10;
	sub_82C3B558(ctx, base);
loc_82C3CC10:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1360
	ctx.r1.s64 = ctx.r1.s64 + 1360;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C3CC1C"))) PPC_WEAK_FUNC(sub_82C3CC1C);
PPC_FUNC_IMPL(__imp__sub_82C3CC1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3CC20"))) PPC_WEAK_FUNC(sub_82C3CC20);
PPC_FUNC_IMPL(__imp__sub_82C3CC20) {
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
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r11,812(r3)
	PPC_STORE_U8(ctx.r3.u32 + 812, ctx.r11.u8);
	// bl 0x831156e8
	ctx.lr = 0x82C3CC44;
	sub_831156E8(ctx, base);
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c3cc64
	if (cr6.eq) goto loc_82C3CC64;
	// bl 0x83115808
	ctx.lr = 0x82C3CC54;
	sub_83115808(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82c3cc68
	if (!cr6.eq) goto loc_82C3CC68;
loc_82C3CC64:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82C3CC68:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c3cca0
	if (cr6.eq) goto loc_82C3CCA0;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82b73340
	ctx.lr = 0x82C3CC7C;
	sub_82B73340(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82C3CC80;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,221
	ctx.r10.s64 = 14483456;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// ori r9,r10,55276
	ctx.r9.u64 = ctx.r10.u64 | 55276;
	// lwz r8,48(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lbzx r7,r8,r9
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// stb r7,812(r31)
	PPC_STORE_U8(ctx.r31.u32 + 812, ctx.r7.u8);
	// bl 0x82b73218
	ctx.lr = 0x82C3CCA0;
	sub_82B73218(ctx, base);
loc_82C3CCA0:
	// lwz r30,808(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 808);
	// bl 0x8399f8b8
	ctx.lr = 0x82C3CCA8;
	sub_8399F8B8(ctx, base);
	// mulli r11,r30,532
	ctx.r11.s64 = ctx.r30.s64 * 532;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8399edb0
	ctx.lr = 0x82C3CCC0;
	sub_8399EDB0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82C3CCC4:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,11
	cr6.compare<uint32_t>(ctx.r10.u32, 11, xer);
	// bge cr6,0x82c3cce0
	if (!cr6.lt) goto loc_82C3CCE0;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lbzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x82c3ccf0
	if (cr6.eq) goto loc_82C3CCF0;
loc_82C3CCE0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// blt cr6,0x82c3ccc4
	if (cr6.lt) goto loc_82C3CCC4;
	// b 0x82c3ccf4
	goto loc_82C3CCF4;
loc_82C3CCF0:
	// stw r11,816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 816, ctx.r11.u32);
loc_82C3CCF4:
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C3CD0C"))) PPC_WEAK_FUNC(sub_82C3CD0C);
PPC_FUNC_IMPL(__imp__sub_82C3CD0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3CD10"))) PPC_WEAK_FUNC(sub_82C3CD10);
PPC_FUNC_IMPL(__imp__sub_82C3CD10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x82C3CD18;
	__savegprlr_14(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// bl 0x82b9b060
	ctx.lr = 0x82C3CD30;
	sub_82B9B060(ctx, base);
	// li r15,24
	ctx.r15.s64 = 24;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r8,r11,18392
	ctx.r8.s64 = ctx.r11.s64 + 18392;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r8,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r8.u32);
	// mr r10,r15
	ctx.r10.u64 = ctx.r15.u64;
	// stw r25,116(r20)
	PPC_STORE_U32(ctx.r20.u32 + 116, ctx.r25.u32);
	// addi r11,r20,212
	ctx.r11.s64 = ctx.r20.s64 + 212;
	// stw r7,72(r20)
	PPC_STORE_U32(ctx.r20.u32 + 72, ctx.r7.u32);
	// mtctr r15
	ctr.u64 = ctx.r15.u64;
loc_82C3CD60:
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// stwu r25,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r25.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82c3cd60
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82C3CD60;
	// stw r25,408(r20)
	PPC_STORE_U32(ctx.r20.u32 + 408, ctx.r25.u32);
	// addi r14,r20,424
	ctx.r14.s64 = ctx.r20.s64 + 424;
	// stw r25,412(r20)
	PPC_STORE_U32(ctx.r20.u32 + 412, ctx.r25.u32);
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// stw r25,416(r20)
	PPC_STORE_U32(ctx.r20.u32 + 416, ctx.r25.u32);
	// addi r18,r20,408
	ctx.r18.s64 = ctx.r20.s64 + 408;
	// stw r25,420(r20)
	PPC_STORE_U32(ctx.r20.u32 + 420, ctx.r25.u32);
	// mtctr r15
	ctr.u64 = ctx.r15.u64;
	// addi r11,r14,-4
	ctx.r11.s64 = ctx.r14.s64 + -4;
loc_82C3CD90:
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// stwu r25,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r25.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82c3cd90
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82C3CD90;
	// addi r16,r20,764
	ctx.r16.s64 = ctx.r20.s64 + 764;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x8381b9d0
	ctx.lr = 0x82C3CDB0;
	sub_8381B9D0(ctx, base);
	// li r24,1
	ctx.r24.s64 = 1;
	// li r17,2
	ctx.r17.s64 = 2;
	// stb r25,784(r20)
	PPC_STORE_U8(ctx.r20.u32 + 784, ctx.r25.u8);
	// stw r24,780(r20)
	PPC_STORE_U32(ctx.r20.u32 + 780, ctx.r24.u32);
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// std r25,792(r20)
	PPC_STORE_U64(ctx.r20.u32 + 792, ctx.r25.u64);
	// std r25,800(r20)
	PPC_STORE_U64(ctx.r20.u32 + 800, ctx.r25.u64);
	// stw r17,808(r20)
	PPC_STORE_U32(ctx.r20.u32 + 808, ctx.r17.u32);
	// stb r24,812(r20)
	PPC_STORE_U8(ctx.r20.u32 + 812, ctx.r24.u8);
	// stw r25,816(r20)
	PPC_STORE_U32(ctx.r20.u32 + 816, ctx.r25.u32);
	// stw r25,820(r20)
	PPC_STORE_U32(ctx.r20.u32 + 820, ctx.r25.u32);
	// bl 0x82dad2e0
	ctx.lr = 0x82C3CDE0;
	sub_82DAD2E0(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3ce2c
	if (cr6.eq) goto loc_82C3CE2C;
	// lwz r11,228(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// lis r10,4
	ctx.r10.s64 = 262144;
	// li r4,14
	ctx.r4.s64 = 14;
	// ori r30,r10,37856
	ctx.r30.u64 = ctx.r10.u64 | 37856;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r11,808(r20)
	PPC_STORE_U32(ctx.r20.u32 + 808, ctx.r11.u32);
	// lwz r31,56(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// bl 0x82dae510
	ctx.lr = 0x82C3CE0C;
	sub_82DAE510(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82dae510
	ctx.lr = 0x82C3CE1C;
	sub_82DAE510(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82dae510
	ctx.lr = 0x82C3CE2C;
	sub_82DAE510(ctx, base);
loc_82C3CE2C:
	// lwz r11,808(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 808);
	// addi r3,r20,96
	ctx.r3.s64 = ctx.r20.s64 + 96;
	// stb r31,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r31.u8);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x83546fd8
	ctx.lr = 0x82C3CE44;
	sub_83546FD8(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82c3cc20
	ctx.lr = 0x82C3CE4C;
	sub_82C3CC20(ctx, base);
	// lwz r9,100(r20)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r20.u32 + 100);
	// lwz r8,96(r20)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r20.u32 + 96);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// srawi. r6,r7,3
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 3;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq 0x82c3ceac
	if (cr0.eq) goto loc_82C3CEAC;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// addi r31,r11,-16440
	ctx.r31.s64 = ctx.r11.s64 + -16440;
	// lwz r4,-16440(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16440);
	// bl 0x82d20ae0
	ctx.lr = 0x82C3CE74;
	sub_82D20AE0(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82d20ae0
	ctx.lr = 0x82C3CE80;
	sub_82D20AE0(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82d20ae0
	ctx.lr = 0x82C3CE8C;
	sub_82D20AE0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82d23390
	ctx.lr = 0x82C3CE9C;
	sub_82D23390(ctx, base);
	// bl 0x8308e078
	ctx.lr = 0x82C3CEA0;
	sub_8308E078(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82d195d8
	ctx.lr = 0x82C3CEAC;
	sub_82D195D8(ctx, base);
loc_82C3CEAC:
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// addi r28,r20,120
	ctx.r28.s64 = ctx.r20.s64 + 120;
	// addi r29,r20,428
	ctx.r29.s64 = ctx.r20.s64 + 428;
	// mr r23,r15
	ctx.r23.u64 = ctx.r15.u64;
	// li r21,29
	ctx.r21.s64 = 29;
	// addi r27,r11,272
	ctx.r27.s64 = ctx.r11.s64 + 272;
	// addi r22,r10,17524
	ctx.r22.s64 = ctx.r10.s64 + 17524;
	// addi r26,r9,272
	ctx.r26.s64 = ctx.r9.s64 + 272;
loc_82C3CED4:
	// stw r25,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r25.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r21,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r21.u32);
	// li r4,360
	ctx.r4.s64 = 360;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82595718
	ctx.lr = 0x82C3CEEC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3cf04
	if (cr6.eq) goto loc_82C3CF04;
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x82e816d8
	ctx.lr = 0x82C3CEFC;
	sub_82E816D8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82c3cf08
	goto loc_82C3CF08;
loc_82C3CF04:
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_82C3CF08:
	// stw r24,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r24.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,80
	ctx.r4.s64 = 80;
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// bl 0x82595718
	ctx.lr = 0x82C3CF1C;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3cf48
	if (cr6.eq) goto loc_82C3CF48;
	// stw r22,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r22.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stw r24,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r24.u32);
	// bl 0x8257fa88
	ctx.lr = 0x82C3CF38;
	sub_8257FA88(ctx, base);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stw r24,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r24.u32);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// b 0x82c3cf4c
	goto loc_82C3CF4C;
loc_82C3CF48:
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_82C3CF4C:
	// stw r30,-212(r29)
	PPC_STORE_U32(ctx.r29.u32 + -212, ctx.r30.u32);
	// lwz r11,-208(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -208);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// beq cr6,0x82c3cfb0
	if (cr6.eq) goto loc_82C3CFB0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82c3cf9c
	if (cr6.eq) goto loc_82C3CF9C;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// stw r4,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r4.u32);
	// bl 0x8257fad0
	ctx.lr = 0x82C3CF74;
	sub_8257FAD0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r10,140(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x82c3cf9c
	if (cr6.lt) goto loc_82C3CF9C;
	// addi r3,r1,244
	ctx.r3.s64 = ctx.r1.s64 + 244;
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// bl 0x8257fb60
	ctx.lr = 0x82C3CF98;
	sub_8257FB60(ctx, base);
	// stw r25,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r25.u32);
loc_82C3CF9C:
	// lwz r3,-208(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -208);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3cfac
	if (cr6.eq) goto loc_82C3CFAC;
	// bl 0x8259b510
	ctx.lr = 0x82C3CFAC;
	sub_8259B510(ctx, base);
loc_82C3CFAC:
	// stw r31,-208(r29)
	PPC_STORE_U32(ctx.r29.u32 + -208, ctx.r31.u32);
loc_82C3CFB0:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82c3cfc0
	if (cr6.eq) goto loc_82C3CFC0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259b510
	ctx.lr = 0x82C3CFC0;
	sub_8259B510(ctx, base);
loc_82C3CFC0:
	// stw r21,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r21.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,360
	ctx.r4.s64 = 360;
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// bl 0x82595718
	ctx.lr = 0x82C3CFD4;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3cfec
	if (cr6.eq) goto loc_82C3CFEC;
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x82e82ae0
	ctx.lr = 0x82C3CFE4;
	sub_82E82AE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82c3cff0
	goto loc_82C3CFF0;
loc_82C3CFEC:
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_82C3CFF0:
	// stw r24,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r24.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,80
	ctx.r4.s64 = 80;
	// addi r3,r1,180
	ctx.r3.s64 = ctx.r1.s64 + 180;
	// bl 0x82595718
	ctx.lr = 0x82C3D004;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3d030
	if (cr6.eq) goto loc_82C3D030;
	// stw r22,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r22.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stw r24,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r24.u32);
	// bl 0x8257fa88
	ctx.lr = 0x82C3D020;
	sub_8257FA88(ctx, base);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stw r24,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r24.u32);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// b 0x82c3d034
	goto loc_82C3D034;
loc_82C3D030:
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_82C3D034:
	// stw r30,-4(r29)
	PPC_STORE_U32(ctx.r29.u32 + -4, ctx.r30.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// beq cr6,0x82c3d098
	if (cr6.eq) goto loc_82C3D098;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82c3d084
	if (cr6.eq) goto loc_82C3D084;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// bl 0x8257fad0
	ctx.lr = 0x82C3D05C;
	sub_8257FAD0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x82c3d084
	if (cr6.lt) goto loc_82C3D084;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x8257fb60
	ctx.lr = 0x82C3D080;
	sub_8257FB60(ctx, base);
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
loc_82C3D084:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3d094
	if (cr6.eq) goto loc_82C3D094;
	// bl 0x8259b510
	ctx.lr = 0x82C3D094;
	sub_8259B510(ctx, base);
loc_82C3D094:
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
loc_82C3D098:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82c3d0a8
	if (cr6.eq) goto loc_82C3D0A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259b510
	ctx.lr = 0x82C3D0A8;
	sub_8259B510(ctx, base);
loc_82C3D0A8:
	// addic. r23,r23,-1
	xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	cr0.compare<int32_t>(ctx.r23.s32, 0, xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// bne 0x82c3ced4
	if (!cr0.eq) goto loc_82C3CED4;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// addi r26,r20,760
	ctx.r26.s64 = ctx.r20.s64 + 760;
	// addi r29,r20,412
	ctx.r29.s64 = ctx.r20.s64 + 412;
	// addi r27,r11,272
	ctx.r27.s64 = ctx.r11.s64 + 272;
loc_82C3D0CC:
	// stbx r25,r26,r28
	PPC_STORE_U8(ctx.r26.u32 + ctx.r28.u32, ctx.r25.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r21,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r21.u32);
	// li r4,376
	ctx.r4.s64 = 376;
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// bl 0x82595718
	ctx.lr = 0x82C3D0E4;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3d0fc
	if (cr6.eq) goto loc_82C3D0FC;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x82e82370
	ctx.lr = 0x82C3D0F4;
	sub_82E82370(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82c3d100
	goto loc_82C3D100;
loc_82C3D0FC:
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_82C3D100:
	// stw r24,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r24.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,80
	ctx.r4.s64 = 80;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82595718
	ctx.lr = 0x82C3D114;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3d140
	if (cr6.eq) goto loc_82C3D140;
	// stw r22,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r22.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stw r24,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r24.u32);
	// bl 0x8257fa88
	ctx.lr = 0x82C3D130;
	sub_8257FA88(ctx, base);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stw r24,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r24.u32);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// b 0x82c3d144
	goto loc_82C3D144;
loc_82C3D140:
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_82C3D144:
	// stw r30,-4(r29)
	PPC_STORE_U32(ctx.r29.u32 + -4, ctx.r30.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// beq cr6,0x82c3d1a8
	if (cr6.eq) goto loc_82C3D1A8;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82c3d194
	if (cr6.eq) goto loc_82C3D194;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// stw r4,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r4.u32);
	// bl 0x8257fad0
	ctx.lr = 0x82C3D16C;
	sub_8257FAD0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x82c3d194
	if (cr6.lt) goto loc_82C3D194;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x8257fb60
	ctx.lr = 0x82C3D190;
	sub_8257FB60(ctx, base);
	// stw r25,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r25.u32);
loc_82C3D194:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3d1a4
	if (cr6.eq) goto loc_82C3D1A4;
	// bl 0x8259b510
	ctx.lr = 0x82C3D1A4;
	sub_8259B510(ctx, base);
loc_82C3D1A4:
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
loc_82C3D1A8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82c3d1b8
	if (cr6.eq) goto loc_82C3D1B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259b510
	ctx.lr = 0x82C3D1B8;
	sub_8259B510(ctx, base);
loc_82C3D1B8:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// cmplwi cr6,r28,2
	cr6.compare<uint32_t>(ctx.r28.u32, 2, xer);
	// blt cr6,0x82c3d0cc
	if (cr6.lt) goto loc_82C3D0CC;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// addi r30,r20,616
	ctx.r30.s64 = ctx.r20.s64 + 616;
	// li r28,-2
	ctx.r28.s64 = -2;
	// li r27,15
	ctx.r27.s64 = 15;
	// li r29,-1
	ctx.r29.s64 = -1;
	// li r26,4
	ctx.r26.s64 = 4;
	// li r24,13
	ctx.r24.s64 = 13;
loc_82C3D1E4:
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// stw r27,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r27.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r15,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r15.u32);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// stw r29,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r29.u32);
	// stw r25,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r25.u32);
	// stw r25,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r25.u32);
	// stb r25,204(r1)
	PPC_STORE_U8(ctx.r1.u32 + 204, ctx.r25.u8);
	// stb r26,232(r1)
	PPC_STORE_U8(ctx.r1.u32 + 232, ctx.r26.u8);
	// stw r17,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r17.u32);
	// stb r25,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r25.u8);
	// stb r25,241(r1)
	PPC_STORE_U8(ctx.r1.u32 + 241, ctx.r25.u8);
	// stb r25,242(r1)
	PPC_STORE_U8(ctx.r1.u32 + 242, ctx.r25.u8);
	// stb r25,243(r1)
	PPC_STORE_U8(ctx.r1.u32 + 243, ctx.r25.u8);
	// bl 0x82db1298
	ctx.lr = 0x82C3D228;
	sub_82DB1298(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82c3d254
	if (!cr6.eq) goto loc_82C3D254;
	// lwz r11,808(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 808);
	// lwz r10,236(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// bne cr6,0x82c3d254
	if (!cr6.eq) goto loc_82C3D254;
	// lbz r10,243(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 243);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c3d254
	if (!cr6.eq) goto loc_82C3D254;
	// stw r24,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r24.u32);
loc_82C3D254:
	// lwz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c3d270
	if (cr6.lt) goto loc_82C3D270;
	// stw r17,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r17.u32);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// lwz r4,204(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// bl 0x825952b8
	ctx.lr = 0x82C3D270;
	sub_825952B8(ctx, base);
loc_82C3D270:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stw r27,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r27.u32);
	// stw r25,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r25.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// stb r25,204(r1)
	PPC_STORE_U8(ctx.r1.u32 + 204, ctx.r25.u8);
	// cmplwi cr6,r31,24
	cr6.compare<uint32_t>(ctx.r31.u32, 24, xer);
	// blt cr6,0x82c3d1e4
	if (cr6.lt) goto loc_82C3D1E4;
	// li r10,12
	ctx.r10.s64 = 12;
	// addi r11,r20,712
	ctx.r11.s64 = ctx.r20.s64 + 712;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82C3D2A0:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82c3d2a0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82C3D2A0;
	// mr r31,r18
	ctx.r31.u64 = ctx.r18.u64;
	// mr r29,r17
	ctx.r29.u64 = ctx.r17.u64;
loc_82C3D2B0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3d358
	if (cr6.eq) goto loc_82C3D358;
	// bl 0x82e744f8
	ctx.lr = 0x82C3D2C0;
	sub_82E744F8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// beq cr6,0x82c3d314
	if (cr6.eq) goto loc_82C3D314;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// stw r4,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// bl 0x8257fad0
	ctx.lr = 0x82C3D2EC;
	sub_8257FAD0(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x82c3d314
	if (cr6.lt) goto loc_82C3D314;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x8257fb60
	ctx.lr = 0x82C3D310;
	sub_8257FB60(ctx, base);
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
loc_82C3D314:
	// bl 0x82dad2e0
	ctx.lr = 0x82C3D318;
	sub_82DAD2E0(ctx, base);
	// lwz r11,564(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 564);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c3d348
	if (cr6.eq) goto loc_82C3D348;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lbz r11,344(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 344);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c3d33c
	if (cr6.eq) goto loc_82C3D33C;
	// bl 0x82e744f8
	ctx.lr = 0x82C3D33C;
	sub_82E744F8(ctx, base);
loc_82C3D33C:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r3,564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 564);
	// bl 0x82e744b0
	ctx.lr = 0x82C3D348;
	sub_82E744B0(ctx, base);
loc_82C3D348:
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3d358
	if (cr6.eq) goto loc_82C3D358;
	// bl 0x8259b510
	ctx.lr = 0x82C3D358;
	sub_8259B510(ctx, base);
loc_82C3D358:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x82c3d2b0
	if (!cr0.eq) goto loc_82C3D2B0;
	// lwz r11,4(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 4);
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,21(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c3d3a4
	if (!cr6.eq) goto loc_82C3D3A4;
loc_82C3D378:
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82cd17d8
	ctx.lr = 0x82C3D384;
	sub_82CD17D8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r17,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r17.u32);
	// bl 0x825952b8
	ctx.lr = 0x82C3D398;
	sub_825952B8(ctx, base);
	// lbz r11,21(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c3d378
	if (cr6.eq) goto loc_82C3D378;
loc_82C3D3A4:
	// lwz r11,4(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 4);
	// mr r31,r14
	ctx.r31.u64 = ctx.r14.u64;
	// mr r29,r15
	ctx.r29.u64 = ctx.r15.u64;
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r10,4(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 4);
	// stw r10,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r16)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r16.u32 + 4);
	// stw r9,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r9.u32);
	// stw r25,8(r16)
	PPC_STORE_U32(ctx.r16.u32 + 8, ctx.r25.u32);
loc_82C3D3C8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3d470
	if (cr6.eq) goto loc_82C3D470;
	// bl 0x82e744f8
	ctx.lr = 0x82C3D3D8;
	sub_82E744F8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// beq cr6,0x82c3d42c
	if (cr6.eq) goto loc_82C3D42C;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// stw r4,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r4.u32);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// bl 0x8257fad0
	ctx.lr = 0x82C3D404;
	sub_8257FAD0(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x82c3d42c
	if (cr6.lt) goto loc_82C3D42C;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x8257fb60
	ctx.lr = 0x82C3D428;
	sub_8257FB60(ctx, base);
	// stw r25,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r25.u32);
loc_82C3D42C:
	// bl 0x82dad2e0
	ctx.lr = 0x82C3D430;
	sub_82DAD2E0(ctx, base);
	// lwz r11,564(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 564);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c3d460
	if (cr6.eq) goto loc_82C3D460;
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lbz r11,344(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 344);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c3d454
	if (cr6.eq) goto loc_82C3D454;
	// bl 0x82e744f8
	ctx.lr = 0x82C3D454;
	sub_82E744F8(ctx, base);
loc_82C3D454:
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// lwz r3,564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 564);
	// bl 0x82e744b0
	ctx.lr = 0x82C3D460;
	sub_82E744B0(ctx, base);
loc_82C3D460:
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3d470
	if (cr6.eq) goto loc_82C3D470;
	// bl 0x8259b510
	ctx.lr = 0x82C3D470;
	sub_8259B510(ctx, base);
loc_82C3D470:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x82c3d3c8
	if (!cr0.eq) goto loc_82C3D3C8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C3D48C;
	sub_82D19788(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C3D498"))) PPC_WEAK_FUNC(sub_82C3D498);
PPC_FUNC_IMPL(__imp__sub_82C3D498) {
	PPC_FUNC_PROLOGUE();
	// b 0x82c3c570
	sub_82C3C570(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C3D49C"))) PPC_WEAK_FUNC(sub_82C3D49C);
PPC_FUNC_IMPL(__imp__sub_82C3D49C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3D4A0"))) PPC_WEAK_FUNC(sub_82C3D4A0);
PPC_FUNC_IMPL(__imp__sub_82C3D4A0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x82c3d4b0
	sub_82C3D4B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C3D4A8"))) PPC_WEAK_FUNC(sub_82C3D4A8);
PPC_FUNC_IMPL(__imp__sub_82C3D4A8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x82c3d4b0
	sub_82C3D4B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C3D4B0"))) PPC_WEAK_FUNC(sub_82C3D4B0);
PPC_FUNC_IMPL(__imp__sub_82C3D4B0) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r8,r11,18704
	ctx.r8.s64 = ctx.r11.s64 + 18704;
	// addi r7,r10,18692
	ctx.r7.s64 = ctx.r10.s64 + 18692;
	// addi r6,r9,18688
	ctx.r6.s64 = ctx.r9.s64 + 18688;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r6,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r6.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82b6a590
	ctx.lr = 0x82C3D4F4;
	sub_82B6A590(ctx, base);
	// clrlwi r5,r30,31
	ctx.r5.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82c3d50c
	if (cr6.eq) goto loc_82C3D50C;
	// bl 0x82416268
	ctx.lr = 0x82C3D508;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C3D50C:
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

__attribute__((alias("__imp__sub_82C3D524"))) PPC_WEAK_FUNC(sub_82C3D524);
PPC_FUNC_IMPL(__imp__sub_82C3D524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3D528"))) PPC_WEAK_FUNC(sub_82C3D528);
PPC_FUNC_IMPL(__imp__sub_82C3D528) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x82c3d538
	sub_82C3D538(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C3D530"))) PPC_WEAK_FUNC(sub_82C3D530);
PPC_FUNC_IMPL(__imp__sub_82C3D530) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x82c3d538
	sub_82C3D538(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C3D538"))) PPC_WEAK_FUNC(sub_82C3D538);
PPC_FUNC_IMPL(__imp__sub_82C3D538) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r8,r11,18744
	ctx.r8.s64 = ctx.r11.s64 + 18744;
	// addi r7,r10,18732
	ctx.r7.s64 = ctx.r10.s64 + 18732;
	// addi r6,r9,18728
	ctx.r6.s64 = ctx.r9.s64 + 18728;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// addi r3,r3,320
	ctx.r3.s64 = ctx.r3.s64 + 320;
	// stw r6,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r6.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x839a3280
	ctx.lr = 0x82C3D580;
	sub_839A3280(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b6a590
	ctx.lr = 0x82C3D588;
	sub_82B6A590(ctx, base);
	// clrlwi r5,r30,31
	ctx.r5.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82c3d5a0
	if (cr6.eq) goto loc_82C3D5A0;
	// bl 0x82416268
	ctx.lr = 0x82C3D59C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C3D5A0:
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

__attribute__((alias("__imp__sub_82C3D5B8"))) PPC_WEAK_FUNC(sub_82C3D5B8);
PPC_FUNC_IMPL(__imp__sub_82C3D5B8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x82c3d5c8
	sub_82C3D5C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C3D5C0"))) PPC_WEAK_FUNC(sub_82C3D5C0);
PPC_FUNC_IMPL(__imp__sub_82C3D5C0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x82c3d5c8
	sub_82C3D5C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C3D5C8"))) PPC_WEAK_FUNC(sub_82C3D5C8);
PPC_FUNC_IMPL(__imp__sub_82C3D5C8) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r8,r11,18784
	ctx.r8.s64 = ctx.r11.s64 + 18784;
	// addi r7,r10,18772
	ctx.r7.s64 = ctx.r10.s64 + 18772;
	// addi r6,r9,18768
	ctx.r6.s64 = ctx.r9.s64 + 18768;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r6,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r6.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82b6a590
	ctx.lr = 0x82C3D60C;
	sub_82B6A590(ctx, base);
	// clrlwi r5,r30,31
	ctx.r5.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82c3d624
	if (cr6.eq) goto loc_82C3D624;
	// bl 0x82416268
	ctx.lr = 0x82C3D620;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C3D624:
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

__attribute__((alias("__imp__sub_82C3D63C"))) PPC_WEAK_FUNC(sub_82C3D63C);
PPC_FUNC_IMPL(__imp__sub_82C3D63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3D640"))) PPC_WEAK_FUNC(sub_82C3D640);
PPC_FUNC_IMPL(__imp__sub_82C3D640) {
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
	// li r4,824
	ctx.r4.s64 = 824;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82C3D674;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3d68c
	if (cr6.eq) goto loc_82C3D68C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82c3cd10
	ctx.lr = 0x82C3D688;
	sub_82C3CD10(ctx, base);
	// b 0x82c3d690
	goto loc_82C3D690;
loc_82C3D68C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C3D690:
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

__attribute__((alias("__imp__sub_82C3D6A8"))) PPC_WEAK_FUNC(sub_82C3D6A8);
PPC_FUNC_IMPL(__imp__sub_82C3D6A8) {
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
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,10
	ctx.r4.s64 = 10;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e81630
	ctx.lr = 0x82C3D6D0;
	sub_82E81630(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c3d704
	if (cr6.eq) goto loc_82C3D704;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19ba0
	ctx.lr = 0x82C3D6E4;
	sub_82D19BA0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82c3d6fc
	if (!cr6.eq) goto loc_82C3D6FC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19bb0
	ctx.lr = 0x82C3D6F4;
	sub_82D19BB0(ctx, base);
	// stw r3,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r3.u32);
	// b 0x82c3d70c
	goto loc_82C3D70C;
loc_82C3D6FC:
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x82c3d708
	goto loc_82C3D708;
loc_82C3D704:
	// li r11,13
	ctx.r11.s64 = 13;
loc_82C3D708:
	// stw r11,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r11.u32);
loc_82C3D70C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c3b2e8
	ctx.lr = 0x82C3D714;
	sub_82C3B2E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,396(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// bl 0x82c3ba90
	ctx.lr = 0x82C3D724;
	sub_82C3BA90(ctx, base);
	// bl 0x82dad2e0
	ctx.lr = 0x82C3D728;
	sub_82DAD2E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3d784
	if (cr6.eq) goto loc_82C3D784;
	// lwz r3,564(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 564);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3d744
	if (cr6.eq) goto loc_82C3D744;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74498
	ctx.lr = 0x82C3D744;
	sub_82E74498(ctx, base);
loc_82C3D744:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c3d784
	if (!cr6.eq) goto loc_82C3D784;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r8,r11,18704
	ctx.r8.s64 = ctx.r11.s64 + 18704;
	// addi r7,r10,18692
	ctx.r7.s64 = ctx.r10.s64 + 18692;
	// addi r6,r9,18688
	ctx.r6.s64 = ctx.r9.s64 + 18688;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stw r7,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r7.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r6,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r6.u32);
	// bl 0x82b6a590
	ctx.lr = 0x82C3D77C;
	sub_82B6A590(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82c3d7b4
	goto loc_82C3D7B4;
loc_82C3D784:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r8,r11,18704
	ctx.r8.s64 = ctx.r11.s64 + 18704;
	// addi r7,r10,18692
	ctx.r7.s64 = ctx.r10.s64 + 18692;
	// addi r6,r9,18688
	ctx.r6.s64 = ctx.r9.s64 + 18688;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stw r7,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r7.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r6,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r6.u32);
	// bl 0x82b6a590
	ctx.lr = 0x82C3D7B0;
	sub_82B6A590(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82C3D7B4:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C3D7CC"))) PPC_WEAK_FUNC(sub_82C3D7CC);
PPC_FUNC_IMPL(__imp__sub_82C3D7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3D7D0"))) PPC_WEAK_FUNC(sub_82C3D7D0);
PPC_FUNC_IMPL(__imp__sub_82C3D7D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82C3D7D8;
	__savegprlr_23(ctx, base);
	// stwu r1,-624(r1)
	ea = -624 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82e822b0
	ctx.lr = 0x82C3D7F0;
	sub_82E822B0(ctx, base);
	// li r23,0
	ctx.r23.s64 = 0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r9,528(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 528);
	// lis r8,11
	ctx.r8.s64 = 720896;
	// stw r24,524(r1)
	PPC_STORE_U32(ctx.r1.u32 + 524, ctx.r24.u32);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r26,r25,616
	ctx.r26.s64 = ctx.r25.s64 + 616;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// li r31,8
	ctx.r31.s64 = 8;
	// ori r28,r8,1
	ctx.r28.u64 = ctx.r8.u64 | 1;
	// addi r29,r11,8980
	ctx.r29.s64 = ctx.r11.s64 + 8980;
	// addi r30,r10,30872
	ctx.r30.s64 = ctx.r10.s64 + 30872;
loc_82C3D820:
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,532(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 532);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// blt cr6,0x82c3d894
	if (cr6.lt) goto loc_82C3D894;
	// addi r4,r9,2
	ctx.r4.s64 = ctx.r9.s64 + 2;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// ble cr6,0x82c3d884
	if (!cr6.gt) goto loc_82C3D884;
	// addi r11,r1,536
	ctx.r11.s64 = ctx.r1.s64 + 536;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r10,r1,528
	ctx.r10.s64 = ctx.r1.s64 + 528;
	// stw r31,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r31.u32);
	// addi r9,r1,532
	ctx.r9.s64 = ctx.r1.s64 + 532;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// stw r10,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// stw r9,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r9.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8247b270
	ctx.lr = 0x82C3D878;
	sub_8247B270(ctx, base);
	// lwz r9,528(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 528);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// b 0x82c3d888
	goto loc_82C3D888;
loc_82C3D884:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82C3D888:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c3d8b8
	if (cr6.eq) goto loc_82C3D8B8;
loc_82C3D894:
	// lwz r10,536(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 536);
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82c3d8b0
	if (cr0.eq) goto loc_82C3D8B0;
	// ld r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// lwz r9,528(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 528);
loc_82C3D8B0:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r9.u32);
loc_82C3D8B8:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmplwi cr6,r27,24
	cr6.compare<uint32_t>(ctx.r27.u32, 24, xer);
	// blt cr6,0x82c3d820
	if (cr6.lt) goto loc_82C3D820;
	// add r11,r24,r25
	ctx.r11.u64 = ctx.r24.u64 + ctx.r25.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,760(r11)
	PPC_STORE_U8(ctx.r11.u32 + 760, ctx.r10.u8);
	// bl 0x82dad2e0
	ctx.lr = 0x82C3D8D8;
	sub_82DAD2E0(ctx, base);
	// lwz r3,564(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 564);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c3d8ec
	if (!cr6.eq) goto loc_82C3D8EC;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// b 0x82c3d8f4
	goto loc_82C3D8F4;
loc_82C3D8EC:
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// bl 0x82e74498
	ctx.lr = 0x82C3D8F4;
	sub_82E74498(ctx, base);
loc_82C3D8F4:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r8,r11,18744
	ctx.r8.s64 = ctx.r11.s64 + 18744;
	// addi r7,r10,18732
	ctx.r7.s64 = ctx.r10.s64 + 18732;
	// addi r6,r9,18728
	ctx.r6.s64 = ctx.r9.s64 + 18728;
	// stw r8,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r8.u32);
	// addi r5,r1,536
	ctx.r5.s64 = ctx.r1.s64 + 536;
	// stw r7,408(r1)
	PPC_STORE_U32(ctx.r1.u32 + 408, ctx.r7.u32);
	// addi r4,r1,528
	ctx.r4.s64 = ctx.r1.s64 + 528;
	// stw r6,424(r1)
	PPC_STORE_U32(ctx.r1.u32 + 424, ctx.r6.u32);
	// addi r3,r1,532
	ctx.r3.s64 = ctx.r1.s64 + 532;
	// bne cr6,0x82c3d98c
	if (!cr6.eq) goto loc_82C3D98C;
	// stw r4,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r4.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stw r5,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r5.u32);
	// bl 0x8247b7d8
	ctx.lr = 0x82C3D954;
	sub_8247B7D8(ctx, base);
	// lwz r3,536(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 536);
	// stw r23,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r23.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3d974
	if (cr6.eq) goto loc_82C3D974;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8247b268
	ctx.lr = 0x82C3D96C;
	sub_8247B268(ctx, base);
	// stw r23,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r23.u32);
	// stw r23,536(r1)
	PPC_STORE_U32(ctx.r1.u32 + 536, ctx.r23.u32);
loc_82C3D974:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82b6a590
	ctx.lr = 0x82C3D980;
	sub_82B6A590(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82C3D98C:
	// stw r4,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r4.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r3,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r3.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stw r5,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r5.u32);
	// bl 0x8247b7d8
	ctx.lr = 0x82C3D9B0;
	sub_8247B7D8(ctx, base);
	// lwz r3,536(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 536);
	// stw r23,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r23.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3d9d0
	if (cr6.eq) goto loc_82C3D9D0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8247b268
	ctx.lr = 0x82C3D9C8;
	sub_8247B268(ctx, base);
	// stw r23,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r23.u32);
	// stw r23,536(r1)
	PPC_STORE_U32(ctx.r1.u32 + 536, ctx.r23.u32);
loc_82C3D9D0:
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82b6a590
	ctx.lr = 0x82C3D9DC;
	sub_82B6A590(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C3D9E8"))) PPC_WEAK_FUNC(sub_82C3D9E8);
PPC_FUNC_IMPL(__imp__sub_82C3D9E8) {
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
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,11
	ctx.r4.s64 = 11;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e82a38
	ctx.lr = 0x82C3DA08;
	sub_82E82A38(ctx, base);
	// lwz r11,780(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 780);
	// stw r11,412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 412, ctx.r11.u32);
	// bl 0x82dad2e0
	ctx.lr = 0x82C3DA14;
	sub_82DAD2E0(ctx, base);
	// lwz r3,564(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 564);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3da28
	if (cr6.eq) goto loc_82C3DA28;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82e74498
	ctx.lr = 0x82C3DA28;
	sub_82E74498(ctx, base);
loc_82C3DA28:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c3da78
	if (!cr6.eq) goto loc_82C3DA78;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r8,r11,18784
	ctx.r8.s64 = ctx.r11.s64 + 18784;
	// addi r7,r10,18772
	ctx.r7.s64 = ctx.r10.s64 + 18772;
	// addi r6,r9,18768
	ctx.r6.s64 = ctx.r9.s64 + 18768;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// stw r7,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r7.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r6,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r6.u32);
	// bl 0x82b6a590
	ctx.lr = 0x82C3DA60;
	sub_82B6A590(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82C3DA78:
	// bl 0x82dad2e0
	ctx.lr = 0x82C3DA7C;
	sub_82DAD2E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3dab4
	if (cr6.eq) goto loc_82C3DAB4;
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r31,764
	ctx.r4.s64 = ctx.r31.s64 + 764;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x833ecc50
	ctx.lr = 0x82C3DA9C;
	sub_833ECC50(ctx, base);
	// lwz r10,768(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 768);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82c3dab4
	if (cr6.eq) goto loc_82C3DAB4;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r10.u8);
loc_82C3DAB4:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r8,r11,18784
	ctx.r8.s64 = ctx.r11.s64 + 18784;
	// addi r7,r10,18772
	ctx.r7.s64 = ctx.r10.s64 + 18772;
	// addi r6,r9,18768
	ctx.r6.s64 = ctx.r9.s64 + 18768;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// stw r7,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r7.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r6,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r6.u32);
	// bl 0x82b6a590
	ctx.lr = 0x82C3DAE0;
	sub_82B6A590(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C3DAF8"))) PPC_WEAK_FUNC(sub_82C3DAF8);
PPC_FUNC_IMPL(__imp__sub_82C3DAF8) {
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
	ctx.lr = 0x82C3DB00;
	__savegprlr_19(ctx, base);
	// stwu r1,-768(r1)
	ea = -768 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgt cr6,0x82c3e670
	if (cr6.gt) goto loc_82C3E670;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82c3db68
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C3DB68;
	// bdzf 4*cr6+eq,0x82c3dc98
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C3DC98;
	// bdzf 4*cr6+eq,0x82c3ddf4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C3DDF4;
	// bdzf 4*cr6+eq,0x82c3e448
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C3E448;
	// bdzf 4*cr6+eq,0x82c3e4d0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C3E4D0;
	// bne cr6,0x82c3e5c4
	if (!cr6.eq) goto loc_82C3E5C4;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82c3bf80
	ctx.lr = 0x82C3DB3C;
	sub_82C3BF80(ctx, base);
	// bl 0x82d478c8
	ctx.lr = 0x82C3DB40;
	sub_82D478C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c3e670
	if (cr6.eq) goto loc_82C3E670;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82c3b028
	ctx.lr = 0x82C3DB54;
	sub_82C3B028(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,116(r23)
	PPC_STORE_U32(ctx.r23.u32 + 116, ctx.r11.u32);
	// addi r1,r1,768
	ctx.r1.s64 = ctx.r1.s64 + 768;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_82C3DB68:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82c3bf80
	ctx.lr = 0x82C3DB70;
	sub_82C3BF80(ctx, base);
	// bl 0x82d478c8
	ctx.lr = 0x82C3DB74;
	sub_82D478C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c3dbac
	if (cr6.eq) goto loc_82C3DBAC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C3DB90;
	sub_82D19788(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C3DBA0;
	sub_82D19788(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d19720
	ctx.lr = 0x82C3DBAC;
	sub_82D19720(ctx, base);
loc_82C3DBAC:
	// bl 0x82dad2e0
	ctx.lr = 0x82C3DBB0;
	sub_82DAD2E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3e670
	if (cr6.eq) goto loc_82C3E670;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,14
	ctx.r4.s64 = 14;
	// bl 0x82dafaf8
	ctx.lr = 0x82C3DBC8;
	sub_82DAFAF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c3e670
	if (cr6.eq) goto loc_82C3E670;
	// li r19,2
	ctx.r19.s64 = 2;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r9,r23,760
	ctx.r9.s64 = ctx.r23.s64 + 760;
	// mtctr r19
	ctr.u64 = ctx.r19.u64;
loc_82C3DBEC:
	// stbx r31,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r31.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82c3dbec
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82C3DBEC;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82db0a88
	ctx.lr = 0x82C3DC04;
	sub_82DB0A88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c3dc34
	if (cr6.eq) goto loc_82C3DC34;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82c3c008
	ctx.lr = 0x82C3DC18;
	sub_82C3C008(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r4,808(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 808);
	// bl 0x82c3d7d0
	ctx.lr = 0x82C3DC24;
	sub_82C3D7D0(ctx, base);
	// bl 0x83a7d958
	ctx.lr = 0x82C3DC28;
	sub_83A7D958(ctx, base);
	// bl 0x83524138
	ctx.lr = 0x82C3DC2C;
	sub_83524138(ctx, base);
	// addi r11,r3,3000
	ctx.r11.s64 = ctx.r3.s64 + 3000;
	// std r11,792(r23)
	PPC_STORE_U64(ctx.r23.u32 + 792, ctx.r11.u64);
loc_82C3DC34:
	// lwz r11,808(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 808);
	// addi r11,r11,0
	ctx.r11.s64 = ctx.r11.s64 + 0;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x82c3dc68
	if (!cr6.lt) goto loc_82C3DC68;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// cmplwi cr6,r8,24
	cr6.compare<uint32_t>(ctx.r8.u32, 24, xer);
	// bne cr6,0x82c3dc74
	if (!cr6.eq) goto loc_82C3DC74;
loc_82C3DC68:
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,760(r11)
	PPC_STORE_U8(ctx.r11.u32 + 760, ctx.r10.u8);
loc_82C3DC74:
	// bl 0x82dad2e0
	ctx.lr = 0x82C3DC78;
	sub_82DAD2E0(ctx, base);
	// lis r5,4
	ctx.r5.s64 = 262144;
	// li r4,15
	ctx.r4.s64 = 15;
	// ori r5,r5,37856
	ctx.r5.u64 = ctx.r5.u64 | 37856;
	// bl 0x82dae510
	ctx.lr = 0x82C3DC88;
	sub_82DAE510(ctx, base);
	// stw r19,116(r23)
	PPC_STORE_U32(ctx.r23.u32 + 116, ctx.r19.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,768
	ctx.r1.s64 = ctx.r1.s64 + 768;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_82C3DC98:
	// bl 0x82dad2e0
	ctx.lr = 0x82C3DC9C;
	sub_82DAD2E0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3e670
	if (cr6.eq) goto loc_82C3E670;
	// bl 0x83a7d958
	ctx.lr = 0x82C3DCAC;
	sub_83A7D958(ctx, base);
	// bl 0x83524138
	ctx.lr = 0x82C3DCB0;
	sub_83524138(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82db0a88
	ctx.lr = 0x82C3DCC0;
	sub_82DB0A88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c3dd20
	if (cr6.eq) goto loc_82C3DD20;
	// ld r11,792(r23)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r23.u32 + 792);
	// cmpld cr6,r30,r11
	cr6.compare<uint64_t>(ctx.r30.u64, ctx.r11.u64, xer);
	// ble cr6,0x82c3dd20
	if (!cr6.gt) goto loc_82C3DD20;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r10,r23,616
	ctx.r10.s64 = ctx.r23.s64 + 616;
loc_82C3DCE4:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,13
	cr6.compare<uint32_t>(ctx.r9.u32, 13, xer);
	// beq cr6,0x82c3dd04
	if (cr6.eq) goto loc_82C3DD04;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// blt cr6,0x82c3dce4
	if (cr6.lt) goto loc_82C3DCE4;
	// b 0x82c3dd0c
	goto loc_82C3DD0C;
loc_82C3DD04:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82c3c008
	ctx.lr = 0x82C3DD0C;
	sub_82C3C008(ctx, base);
loc_82C3DD0C:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r4,808(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 808);
	// bl 0x82c3d7d0
	ctx.lr = 0x82C3DD18;
	sub_82C3D7D0(ctx, base);
	// addi r11,r30,3000
	ctx.r11.s64 = ctx.r30.s64 + 3000;
	// std r11,792(r23)
	PPC_STORE_U64(ctx.r23.u32 + 792, ctx.r11.u64);
loc_82C3DD20:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82db0a88
	ctx.lr = 0x82C3DD2C;
	sub_82DB0A88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c3dd54
	if (!cr6.eq) goto loc_82C3DD54;
	// li r10,12
	ctx.r10.s64 = 12;
	// addi r11,r23,712
	ctx.r11.s64 = ctx.r23.s64 + 712;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82C3DD4C:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82c3dd4c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82C3DD4C;
loc_82C3DD54:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82c3bbc0
	ctx.lr = 0x82C3DD60;
	sub_82C3BBC0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// blt cr6,0x82c3dd54
	if (cr6.lt) goto loc_82C3DD54;
	// lbz r11,760(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 760);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82c3dd94
	if (!cr6.eq) goto loc_82C3DD94;
	// lbz r11,761(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 761);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82c3dd94
	if (!cr6.eq) goto loc_82C3DD94;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82dafab0
	ctx.lr = 0x82C3DD94;
	sub_82DAFAB0(ctx, base);
loc_82C3DD94:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82dafaf8
	ctx.lr = 0x82C3DDA4;
	sub_82DAFAF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c3e670
	if (cr6.eq) goto loc_82C3E670;
	// bl 0x82d47978
	ctx.lr = 0x82C3DDB4;
	sub_82D47978(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C3DDBC;
	sub_82D19A78(ctx, base);
	// bl 0x83574c00
	ctx.lr = 0x82C3DDC0;
	sub_83574C00(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3dde0
	if (cr6.eq) goto loc_82C3DDE0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d19ba0
	ctx.lr = 0x82C3DDD4;
	sub_82D19BA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d44fa8
	ctx.lr = 0x82C3DDE0;
	sub_82D44FA8(ctx, base);
loc_82C3DDE0:
	// li r11,3
	ctx.r11.s64 = 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,116(r23)
	PPC_STORE_U32(ctx.r23.u32 + 116, ctx.r11.u32);
	// addi r1,r1,768
	ctx.r1.s64 = ctx.r1.s64 + 768;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_82C3DDF4:
	// bl 0x82dad2e0
	ctx.lr = 0x82C3DDF8;
	sub_82DAD2E0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r19,2
	ctx.r19.s64 = 2;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r20,15
	ctx.r20.s64 = 15;
	// li r27,-1
	ctx.r27.s64 = -1;
	// li r21,4
	ctx.r21.s64 = 4;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3ded4
	if (cr6.eq) goto loc_82C3DED4;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// li r28,24
	ctx.r28.s64 = 24;
loc_82C3DE20:
	// stw r20,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r20.u32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// stw r28,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r28.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r27.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r31.u32);
	// stw r31,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r31.u32);
	// stb r31,156(r1)
	PPC_STORE_U8(ctx.r1.u32 + 156, ctx.r31.u8);
	// stb r21,184(r1)
	PPC_STORE_U8(ctx.r1.u32 + 184, ctx.r21.u8);
	// stw r19,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r19.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// stb r31,193(r1)
	PPC_STORE_U8(ctx.r1.u32 + 193, ctx.r31.u8);
	// stb r31,194(r1)
	PPC_STORE_U8(ctx.r1.u32 + 194, ctx.r31.u8);
	// stb r31,195(r1)
	PPC_STORE_U8(ctx.r1.u32 + 195, ctx.r31.u8);
	// bl 0x82db1298
	ctx.lr = 0x82C3DE60;
	sub_82DB1298(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c3dea0
	if (cr6.eq) goto loc_82C3DEA0;
	// lbz r10,195(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 195);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82c3de84
	if (!cr6.eq) goto loc_82C3DE84;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82c644a0
	ctx.lr = 0x82C3DE80;
	sub_82C644A0(ctx, base);
	// b 0x82c3dec8
	goto loc_82C3DEC8;
loc_82C3DE84:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r31,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r31.u8);
	// addi r4,r23,764
	ctx.r4.s64 = ctx.r23.s64 + 764;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82c3b898
	ctx.lr = 0x82C3DEA0;
	sub_82C3B898(ctx, base);
loc_82C3DEA0:
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c3debc
	if (cr6.lt) goto loc_82C3DEBC;
	// stw r19,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r19.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,156(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// bl 0x825952b8
	ctx.lr = 0x82C3DEBC;
	sub_825952B8(ctx, base);
loc_82C3DEBC:
	// stw r20,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r20.u32);
	// stw r31,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r31.u32);
	// stb r31,156(r1)
	PPC_STORE_U8(ctx.r1.u32 + 156, ctx.r31.u8);
loc_82C3DEC8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,24
	cr6.compare<uint32_t>(ctx.r30.u32, 24, xer);
	// blt cr6,0x82c3de20
	if (cr6.lt) goto loc_82C3DE20;
loc_82C3DED4:
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x82d47a58
	ctx.lr = 0x82C3DEDC;
	sub_82D47A58(ctx, base);
	// bl 0x82d476f0
	ctx.lr = 0x82C3DEE0;
	sub_82D476F0(ctx, base);
	// bl 0x82dad2e0
	ctx.lr = 0x82C3DEE4;
	sub_82DAD2E0(ctx, base);
	// lis r5,4
	ctx.r5.s64 = 262144;
	// li r4,16
	ctx.r4.s64 = 16;
	// ori r5,r5,37856
	ctx.r5.u64 = ctx.r5.u64 | 37856;
	// bl 0x82dae510
	ctx.lr = 0x82C3DEF4;
	sub_82DAE510(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82c3b2e8
	ctx.lr = 0x82C3DEFC;
	sub_82C3B2E8(ctx, base);
	// addi r11,r3,154
	ctx.r11.s64 = ctx.r3.s64 + 154;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r23
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r23.u32);
	// cmplwi cr6,r9,11
	cr6.compare<uint32_t>(ctx.r9.u32, 11, xer);
	// bne cr6,0x82c3e054
	if (!cr6.eq) goto loc_82C3E054;
	// bl 0x82dad2e0
	ctx.lr = 0x82C3DF14;
	sub_82DAD2E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3df28
	if (cr6.eq) goto loc_82C3DF28;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82dafab0
	ctx.lr = 0x82C3DF28;
	sub_82DAFAB0(ctx, base);
loc_82C3DF28:
	// bl 0x831156e8
	ctx.lr = 0x82C3DF2C;
	sub_831156E8(ctx, base);
	// lis r11,5
	ctx.r11.s64 = 327680;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// ori r9,r11,37448
	ctx.r9.u64 = ctx.r11.u64 | 37448;
	// stwx r19,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r19.u32);
	// lwz r11,96(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 96);
	// lwz r8,100(r23)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r23.u32 + 100);
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// srawi. r6,r7,3
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 3;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne 0x82c3df5c
	if (!cr0.eq) goto loc_82C3DF5C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C3DF5C;
	sub_831CC188(ctx, base);
loc_82C3DF5C:
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x831156e8
	ctx.lr = 0x82C3DF68;
	sub_831156E8(ctx, base);
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lis r8,5
	ctx.r8.s64 = 327680;
	// lbz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// li r7,32
	ctx.r7.s64 = 32;
	// ori r6,r8,35289
	ctx.r6.u64 = ctx.r8.u64 | 35289;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbzx r4,r5,r6
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r6.u32);
	// subfc r3,r7,r4
	xer.ca = ctx.r4.u32 >= ctx.r7.u32;
	ctx.r3.s64 = ctx.r4.s64 - ctx.r7.s64;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r31,r10,r4
	ctx.r31.u64 = ctx.r10.u64 & ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x82C3DF94;
	sub_831156E8(ctx, base);
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mulli r11,r31,2800
	ctx.r11.s64 = ctx.r31.s64 * 2800;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r31,r11,690
	ctx.r31.s64 = ctx.r11.s64 + 690;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8312a600
	ctx.lr = 0x82C3DFAC;
	sub_8312A600(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,3
	cr6.compare<uint32_t>(ctx.r9.u32, 3, xer);
	// bne cr6,0x82c3dfc4
	if (!cr6.eq) goto loc_82C3DFC4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8312a568
	ctx.lr = 0x82C3DFC4;
	sub_8312A568(ctx, base);
loc_82C3DFC4:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r11,780(r23)
	PPC_STORE_U32(ctx.r23.u32 + 780, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r10,116(r23)
	PPC_STORE_U32(ctx.r23.u32 + 116, ctx.r10.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d199d0
	ctx.lr = 0x82C3DFE0;
	sub_82D199D0(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C3DFE8;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r11,r9,18152
	ctx.r11.s64 = ctx.r9.s64 + 18152;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82C3E008;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3e670
	if (cr6.eq) goto loc_82C3E670;
	// lis r4,515
	ctx.r4.s64 = 33751040;
	// ori r4,r4,26
	ctx.r4.u64 = ctx.r4.u64 | 26;
	// bl 0x82d39ab8
	ctx.lr = 0x82C3E01C;
	sub_82D39AB8(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C3E024;
	sub_82D19A78(ctx, base);
	// bl 0x83574c00
	ctx.lr = 0x82C3E028;
	sub_83574C00(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3e670
	if (cr6.eq) goto loc_82C3E670;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d44fa8
	ctx.lr = 0x82C3E03C;
	sub_82D44FA8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d44fa8
	ctx.lr = 0x82C3E048;
	sub_82D44FA8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,768
	ctx.r1.s64 = ctx.r1.s64 + 768;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_82C3E054:
	// lwz r11,96(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 96);
	// lwz r10,100(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 100);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r8,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 3;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82c3e074
	if (!cr0.eq) goto loc_82C3E074;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C3E074;
	sub_831CC188(ctx, base);
loc_82C3E074:
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x831156e8
	ctx.lr = 0x82C3E080;
	sub_831156E8(ctx, base);
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lis r11,221
	ctx.r11.s64 = 14483456;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// addis r24,r10,6
	ctx.r24.s64 = ctx.r10.s64 + 393216;
	// addi r25,r23,616
	ctx.r25.s64 = ctx.r23.s64 + 616;
	// addi r24,r24,-30316
	ctx.r24.s64 = ctx.r24.s64 + -30316;
	// li r22,1
	ctx.r22.s64 = 1;
	// ori r26,r11,53336
	ctx.r26.u64 = ctx.r11.u64 | 53336;
loc_82C3E0A0:
	// bl 0x831156e8
	ctx.lr = 0x82C3E0A4;
	sub_831156E8(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r28,48(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(ctx.r11.u32, 13, xer);
	// beq cr6,0x82c3e138
	if (cr6.eq) goto loc_82C3E138;
	// cmpwi cr6,r11,-2
	cr6.compare<int32_t>(ctx.r11.s32, -2, xer);
	// beq cr6,0x82c3e138
	if (cr6.eq) goto loc_82C3E138;
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r27,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r27.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r31.u32);
	// addi r3,r1,360
	ctx.r3.s64 = ctx.r1.s64 + 360;
	// bl 0x831cdcf0
	ctx.lr = 0x82C3E0D4;
	sub_831CDCF0(ctx, base);
	// stw r19,424(r1)
	PPC_STORE_U32(ctx.r1.u32 + 424, ctx.r19.u32);
	// stb r21,428(r1)
	PPC_STORE_U8(ctx.r1.u32 + 428, ctx.r21.u8);
	// rlwinm r11,r29,2,22,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0x3FC;
	// stb r31,429(r1)
	PPC_STORE_U8(ctx.r1.u32 + 429, ctx.r31.u8);
	// clrlwi r30,r29,24
	ctx.r30.u64 = ctx.r29.u32 & 0xFF;
	// stb r22,430(r1)
	PPC_STORE_U8(ctx.r1.u32 + 430, ctx.r22.u8);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r4,r10,r26
	ctx.r4.u64 = ctx.r10.u64 + ctx.r26.u64;
	// bl 0x82c3af58
	ctx.lr = 0x82C3E104;
	sub_82C3AF58(ctx, base);
	// lwz r11,424(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 424);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82c3e120
	if (!cr6.eq) goto loc_82C3E120;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// add r10,r30,r24
	ctx.r10.u64 = ctx.r30.u64 + ctx.r24.u64;
	// stb r11,93(r10)
	PPC_STORE_U8(ctx.r10.u32 + 93, ctx.r11.u8);
	// b 0x82c3e138
	goto loc_82C3E138;
loc_82C3E120:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82c3e138
	if (!cr6.eq) goto loc_82C3E138;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// add r10,r30,r24
	ctx.r10.u64 = ctx.r30.u64 + ctx.r24.u64;
	// addi r9,r11,11
	ctx.r9.s64 = ctx.r11.s64 + 11;
	// stb r9,93(r10)
	PPC_STORE_U8(ctx.r10.u32 + 93, ctx.r9.u8);
loc_82C3E138:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// cmpwi cr6,r29,22
	cr6.compare<int32_t>(ctx.r29.s32, 22, xer);
	// blt cr6,0x82c3e0a0
	if (cr6.lt) goto loc_82C3E0A0;
	// bl 0x831156e8
	ctx.lr = 0x82C3E14C;
	sub_831156E8(ctx, base);
	// lis r11,5
	ctx.r11.s64 = 327680;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r8,r11,37448
	ctx.r8.u64 = ctx.r11.u64 | 37448;
	// li r7,32
	ctx.r7.s64 = 32;
	// stwx r9,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
	// lbz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// add r5,r11,r24
	ctx.r5.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lbz r4,69(r5)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r5.u32 + 69);
	// subfc r3,r7,r4
	xer.ca = ctx.r4.u32 >= ctx.r7.u32;
	ctx.r3.s64 = ctx.r4.s64 - ctx.r7.s64;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r30,r10,r4
	ctx.r30.u64 = ctx.r10.u64 & ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x82C3E180;
	sub_831156E8(ctx, base);
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mulli r11,r30,2800
	ctx.r11.s64 = ctx.r30.s64 * 2800;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r11,690
	ctx.r3.s64 = ctx.r11.s64 + 690;
	// bl 0x8312a568
	ctx.lr = 0x82C3E198;
	sub_8312A568(ctx, base);
	// lbz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r7,r11,r24
	ctx.r7.u64 = ctx.r11.u64 + ctx.r24.u64;
	// cmpwi cr6,r8,1
	cr6.compare<int32_t>(ctx.r8.s32, 1, xer);
	// lbz r29,93(r7)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r7.u32 + 93);
	// bne cr6,0x82c3e1b4
	if (!cr6.eq) goto loc_82C3E1B4;
	// addi r29,r29,-11
	ctx.r29.s64 = ctx.r29.s64 + -11;
loc_82C3E1B4:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r11,18152
	ctx.r3.s64 = ctx.r11.s64 + 18152;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2f420
	ctx.lr = 0x82C3E1D4;
	sub_82D2F420(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C3E1E4;
	sub_82D19788(ctx, base);
	// stw r20,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r20.u32);
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r31.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stb r31,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r31.u8);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r20,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r20.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82c3b190
	ctx.lr = 0x82C3E20C;
	sub_82C3B190(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82d04220
	ctx.lr = 0x82C3E218;
	sub_82D04220(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82c3e22c
	if (!cr6.lt) goto loc_82C3E22C;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
loc_82C3E22C:
	// lis r4,512
	ctx.r4.s64 = 33554432;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// ori r4,r4,110
	ctx.r4.u64 = ctx.r4.u64 | 110;
	// bl 0x82d042a8
	ctx.lr = 0x82C3E23C;
	sub_82D042A8(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d2a108
	ctx.lr = 0x82C3E248;
	sub_82D2A108(ctx, base);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d2aab0
	ctx.lr = 0x82C3E254;
	sub_82D2AAB0(ctx, base);
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// bl 0x82d86078
	ctx.lr = 0x82C3E25C;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3e2c4
	if (cr6.eq) goto loc_82C3E2C4;
	// lwz r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// lbz r11,300(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 300);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c3e2c4
	if (cr6.eq) goto loc_82C3E2C4;
	// bl 0x83767d18
	ctx.lr = 0x82C3E278;
	sub_83767D18(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// addi r4,r11,56
	ctx.r4.s64 = ctx.r11.s64 + 56;
	// bl 0x837b0c10
	ctx.lr = 0x82C3E288;
	sub_837B0C10(ctx, base);
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d2a158
	ctx.lr = 0x82C3E298;
	sub_82D2A158(ctx, base);
	// lwz r11,324(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c3e2b8
	if (cr6.lt) goto loc_82C3E2B8;
	// stw r19,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r19.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,304(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// bl 0x825952b8
	ctx.lr = 0x82C3E2B8;
	sub_825952B8(ctx, base);
loc_82C3E2B8:
	// stw r20,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r20.u32);
	// stw r31,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r31.u32);
	// stb r31,304(r1)
	PPC_STORE_U8(ctx.r1.u32 + 304, ctx.r31.u8);
loc_82C3E2C4:
	// stw r20,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r20.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// stb r31,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r31.u8);
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8399f8b8
	ctx.lr = 0x82C3E2D8;
	sub_8399F8B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82C3E2E0;
	sub_831156E8(ctx, base);
	// mulli r11,r26,532
	ctx.r11.s64 = ctx.r26.s64 * 532;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addis r30,r10,5
	ctx.r30.s64 = ctx.r10.s64 + 327680;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// addi r30,r30,14904
	ctx.r30.s64 = ctx.r30.s64 + 14904;
	// bl 0x8399ea10
	ctx.lr = 0x82C3E300;
	sub_8399EA10(ctx, base);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83123ba8
	ctx.lr = 0x82C3E314;
	sub_83123BA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// li r5,224
	ctx.r5.s64 = 224;
	// bl 0x831ce980
	ctx.lr = 0x82C3E324;
	sub_831CE980(ctx, base);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r11,r11,-16392
	ctx.r11.s64 = ctx.r11.s64 + -16392;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c3e348
	if (!cr6.eq) goto loc_82C3E348;
	// lwz r11,480(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 480);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x82c3e370
	goto loc_82C3E370;
loc_82C3E348:
	// lhz r8,476(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 476);
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x82c3e368
	if (!cr6.eq) goto loc_82C3E368;
	// lwz r11,480(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 480);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// beq cr6,0x82c3e36c
	if (cr6.eq) goto loc_82C3E36C;
loc_82C3E368:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82C3E36C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82C3E370:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c3e3ac
	if (!cr6.eq) goto loc_82C3E3AC;
	// addi r11,r1,488
	ctx.r11.s64 = ctx.r1.s64 + 488;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82C3E384:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82c3e384
	if (!cr6.eq) goto loc_82C3E384;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,488
	ctx.r4.s64 = ctx.r1.s64 + 488;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82C3E3AC;
	sub_8259CC28(ctx, base);
loc_82C3E3AC:
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d2a158
	ctx.lr = 0x82C3E3BC;
	sub_82D2A158(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83103100
	ctx.lr = 0x82C3E3C8;
	sub_83103100(ctx, base);
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// stw r28,820(r23)
	PPC_STORE_U32(ctx.r23.u32 + 820, ctx.r28.u32);
	// stw r21,116(r23)
	PPC_STORE_U32(ctx.r23.u32 + 116, ctx.r21.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c3e3ec
	if (cr6.lt) goto loc_82C3E3EC;
	// stw r19,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r19.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x825952b8
	ctx.lr = 0x82C3E3EC;
	sub_825952B8(ctx, base);
loc_82C3E3EC:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r20,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r20.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r31.u8);
	// blt cr6,0x82c3e414
	if (cr6.lt) goto loc_82C3E414;
	// stw r19,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r19.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x82C3E414;
	sub_825952B8(ctx, base);
loc_82C3E414:
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// stw r20,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r20.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// blt cr6,0x82c3e670
	if (cr6.lt) goto loc_82C3E670;
	// stw r19,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r19.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,272(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// bl 0x825952b8
	ctx.lr = 0x82C3E43C;
	sub_825952B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,768
	ctx.r1.s64 = ctx.r1.s64 + 768;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_82C3E448:
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82C3E450:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82c3ca10
	ctx.lr = 0x82C3E45C;
	sub_82C3CA10(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,24
	cr6.compare<uint32_t>(ctx.r30.u32, 24, xer);
	// blt cr6,0x82c3e450
	if (cr6.lt) goto loc_82C3E450;
	// bl 0x82d478c8
	ctx.lr = 0x82C3E46C;
	sub_82D478C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c3e670
	if (cr6.eq) goto loc_82C3E670;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d17d80
	ctx.lr = 0x82C3E484;
	sub_82D17D80(ctx, base);
	// lwz r4,820(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 820);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82c3e4bc
	if (cr6.eq) goto loc_82C3E4BC;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x831030c0
	ctx.lr = 0x82C3E498;
	sub_831030C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c3e4bc
	if (cr6.eq) goto loc_82C3E4BC;
	// lwz r3,820(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 820);
	// bl 0x82d29e18
	ctx.lr = 0x82C3E4AC;
	sub_82D29E18(ctx, base);
	// stw r31,820(r23)
	PPC_STORE_U32(ctx.r23.u32 + 820, ctx.r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,768
	ctx.r1.s64 = ctx.r1.s64 + 768;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_82C3E4BC:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82c3c570
	ctx.lr = 0x82C3E4C4;
	sub_82C3C570(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,768
	ctx.r1.s64 = ctx.r1.s64 + 768;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_82C3E4D0:
	// bl 0x83a7d958
	ctx.lr = 0x82C3E4D4;
	sub_83A7D958(ctx, base);
	// bl 0x83524138
	ctx.lr = 0x82C3E4D8;
	sub_83524138(ctx, base);
	// ld r11,800(r23)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r23.u32 + 800);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// bne cr6,0x82c3e500
	if (!cr6.eq) goto loc_82C3E500;
	// lis r11,0
	ctx.r11.s64 = 0;
	// std r31,792(r23)
	PPC_STORE_U64(ctx.r23.u32 + 792, ctx.r31.u64);
	// ori r10,r11,40000
	ctx.r10.u64 = ctx.r11.u64 | 40000;
	// add r9,r3,r10
	ctx.r9.u64 = ctx.r3.u64 + ctx.r10.u64;
	// std r9,800(r23)
	PPC_STORE_U64(ctx.r23.u32 + 800, ctx.r9.u64);
loc_82C3E500:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82C3E504:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82c3ca10
	ctx.lr = 0x82C3E510;
	sub_82C3CA10(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,24
	cr6.compare<uint32_t>(ctx.r30.u32, 24, xer);
	// blt cr6,0x82c3e504
	if (cr6.lt) goto loc_82C3E504;
	// ld r11,792(r23)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r23.u32 + 792);
	// cmpld cr6,r29,r11
	cr6.compare<uint64_t>(ctx.r29.u64, ctx.r11.u64, xer);
	// ble cr6,0x82c3e538
	if (!cr6.gt) goto loc_82C3E538;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82c3d9e8
	ctx.lr = 0x82C3E530;
	sub_82C3D9E8(ctx, base);
	// addi r11,r29,3000
	ctx.r11.s64 = ctx.r29.s64 + 3000;
	// std r11,792(r23)
	PPC_STORE_U64(ctx.r23.u32 + 792, ctx.r11.u64);
loc_82C3E538:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82c3b768
	ctx.lr = 0x82C3E540;
	sub_82C3B768(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c3e56c
	if (cr6.eq) goto loc_82C3E56C;
	// bl 0x82dad2e0
	ctx.lr = 0x82C3E550;
	sub_82DAD2E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3e564
	if (cr6.eq) goto loc_82C3E564;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82dafab0
	ctx.lr = 0x82C3E564;
	sub_82DAFAB0(ctx, base);
loc_82C3E564:
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,116(r23)
	PPC_STORE_U32(ctx.r23.u32 + 116, ctx.r11.u32);
loc_82C3E56C:
	// bl 0x82dad2e0
	ctx.lr = 0x82C3E570;
	sub_82DAD2E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3e670
	if (cr6.eq) goto loc_82C3E670;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82dafaf8
	ctx.lr = 0x82C3E584;
	sub_82DAFAF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c3e670
	if (cr6.eq) goto loc_82C3E670;
	// bl 0x82d47978
	ctx.lr = 0x82C3E594;
	sub_82D47978(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d482c0
	ctx.lr = 0x82C3E59C;
	sub_82D482C0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// stw r23,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r23.u32);
	// addi r9,r11,21716
	ctx.r9.s64 = ctx.r11.s64 + 21716;
	// stb r31,248(r1)
	PPC_STORE_U8(ctx.r1.u32 + 248, ctx.r31.u8);
	// ori r8,r10,8
	ctx.r8.u64 = ctx.r10.u64 | 8;
	// stw r9,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r9.u32);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// stw r8,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r8.u32);
	// b 0x82c3e660
	goto loc_82C3E660;
loc_82C3E5C4:
	// bl 0x83a7d958
	ctx.lr = 0x82C3E5C8;
	sub_83A7D958(ctx, base);
	// bl 0x83524138
	ctx.lr = 0x82C3E5CC;
	sub_83524138(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82C3E5D8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82c3ca10
	ctx.lr = 0x82C3E5E4;
	sub_82C3CA10(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,24
	cr6.compare<uint32_t>(ctx.r30.u32, 24, xer);
	// blt cr6,0x82c3e5d8
	if (cr6.lt) goto loc_82C3E5D8;
	// ld r11,792(r23)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r23.u32 + 792);
	// cmpld cr6,r29,r11
	cr6.compare<uint64_t>(ctx.r29.u64, ctx.r11.u64, xer);
	// ble cr6,0x82c3e60c
	if (!cr6.gt) goto loc_82C3E60C;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82c3d9e8
	ctx.lr = 0x82C3E604;
	sub_82C3D9E8(ctx, base);
	// addi r11,r29,3000
	ctx.r11.s64 = ctx.r29.s64 + 3000;
	// std r11,792(r23)
	PPC_STORE_U64(ctx.r23.u32 + 792, ctx.r11.u64);
loc_82C3E60C:
	// bl 0x82dad2e0
	ctx.lr = 0x82C3E610;
	sub_82DAD2E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3e670
	if (cr6.eq) goto loc_82C3E670;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82dafaf8
	ctx.lr = 0x82C3E624;
	sub_82DAFAF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c3e670
	if (cr6.eq) goto loc_82C3E670;
	// bl 0x82d47978
	ctx.lr = 0x82C3E634;
	sub_82D47978(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d482c0
	ctx.lr = 0x82C3E63C;
	sub_82D482C0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// stw r23,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r23.u32);
	// addi r9,r11,21716
	ctx.r9.s64 = ctx.r11.s64 + 21716;
	// stb r31,264(r1)
	PPC_STORE_U8(ctx.r1.u32 + 264, ctx.r31.u8);
	// ori r8,r10,8
	ctx.r8.u64 = ctx.r10.u64 | 8;
	// stw r9,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r9.u32);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// stw r8,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r8.u32);
loc_82C3E660:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83103068
	ctx.lr = 0x82C3E668;
	sub_83103068(ctx, base);
	// li r7,7
	ctx.r7.s64 = 7;
	// stw r7,116(r23)
	PPC_STORE_U32(ctx.r23.u32 + 116, ctx.r7.u32);
loc_82C3E670:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,768
	ctx.r1.s64 = ctx.r1.s64 + 768;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C3E67C"))) PPC_WEAK_FUNC(sub_82C3E67C);
PPC_FUNC_IMPL(__imp__sub_82C3E67C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3E680"))) PPC_WEAK_FUNC(sub_82C3E680);
PPC_FUNC_IMPL(__imp__sub_82C3E680) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82c3d6a8
	ctx.lr = 0x82C3E69C;
	sub_82C3D6A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d19788
	ctx.lr = 0x82C3E6AC;
	sub_82D19788(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d19788
	ctx.lr = 0x82C3E6BC;
	sub_82D19788(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,108
	ctx.r5.s64 = 7077888;
	// li r4,1
	ctx.r4.s64 = 1;
	// ori r5,r5,40
	ctx.r5.u64 = ctx.r5.u64 | 40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C3E6DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x82dad2e0
	ctx.lr = 0x82C3E6E0;
	sub_82DAD2E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3e6f4
	if (cr6.eq) goto loc_82C3E6F4;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,14
	ctx.r4.s64 = 14;
	// bl 0x82dafab0
	ctx.lr = 0x82C3E6F4;
	sub_82DAFAB0(ctx, base);
loc_82C3E6F4:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19720
	ctx.lr = 0x82C3E708;
	sub_82D19720(ctx, base);
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

__attribute__((alias("__imp__sub_82C3E71C"))) PPC_WEAK_FUNC(sub_82C3E71C);
PPC_FUNC_IMPL(__imp__sub_82C3E71C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3E720"))) PPC_WEAK_FUNC(sub_82C3E720);
PPC_FUNC_IMPL(__imp__sub_82C3E720) {
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
	// lwz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82c3e798
	if (!cr6.eq) goto loc_82C3E798;
	// bl 0x82dad2e0
	ctx.lr = 0x82C3E744;
	sub_82DAD2E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3e758
	if (cr6.eq) goto loc_82C3E758;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,14
	ctx.r4.s64 = 14;
	// bl 0x82dafab0
	ctx.lr = 0x82C3E758;
	sub_82DAFAB0(ctx, base);
loc_82C3E758:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c3d6a8
	ctx.lr = 0x82C3E76C;
	sub_82C3D6A8(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C3E77C;
	sub_82D19788(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C3E78C;
	sub_82D19788(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19720
	ctx.lr = 0x82C3E798;
	sub_82D19720(ctx, base);
loc_82C3E798:
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

__attribute__((alias("__imp__sub_82C3E7AC"))) PPC_WEAK_FUNC(sub_82C3E7AC);
PPC_FUNC_IMPL(__imp__sub_82C3E7AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3E7B0"))) PPC_WEAK_FUNC(sub_82C3E7B0);
PPC_FUNC_IMPL(__imp__sub_82C3E7B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82C3E7B8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82c50138
	ctx.lr = 0x82C3E7C8;
	sub_82C50138(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r9,r11,19224
	ctx.r9.s64 = ctx.r11.s64 + 19224;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r28,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r28.u32);
	// addi r30,r31,352
	ctx.r30.s64 = ctx.r31.s64 + 352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// li r29,2
	ctx.r29.s64 = 2;
	// stw r28,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r28.u32);
	// li r27,27
	ctx.r27.s64 = 27;
loc_82C3E7F8:
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82C3E80C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3e820
	if (cr6.eq) goto loc_82C3E820;
	// bl 0x82c2f748
	ctx.lr = 0x82C3E818;
	sub_82C2F748(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82c3e824
	goto loc_82C3E824;
loc_82C3E820:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82C3E824:
	// stw r4,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r4.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82c3e838
	if (cr6.eq) goto loc_82C3E838;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82C3E838;
	sub_83103100(ctx, base);
loc_82C3E838:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82c3e7f8
	if (!cr0.eq) goto loc_82C3E7F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C3E850"))) PPC_WEAK_FUNC(sub_82C3E850);
PPC_FUNC_IMPL(__imp__sub_82C3E850) {
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
	// li r4,360
	ctx.r4.s64 = 360;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82C3E884;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3e89c
	if (cr6.eq) goto loc_82C3E89C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82c3e7b0
	ctx.lr = 0x82C3E898;
	sub_82C3E7B0(ctx, base);
	// b 0x82c3e8a0
	goto loc_82C3E8A0;
loc_82C3E89C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C3E8A0:
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

__attribute__((alias("__imp__sub_82C3E8B8"))) PPC_WEAK_FUNC(sub_82C3E8B8);
PPC_FUNC_IMPL(__imp__sub_82C3E8B8) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,19224
	ctx.r9.s64 = ctx.r11.s64 + 19224;
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
	// bl 0x82c502e8
	ctx.lr = 0x82C3E8F0;
	sub_82C502E8(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82c3e908
	if (cr6.eq) goto loc_82C3E908;
	// bl 0x82416268
	ctx.lr = 0x82C3E904;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C3E908:
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

__attribute__((alias("__imp__sub_82C3E920"))) PPC_WEAK_FUNC(sub_82C3E920);
PPC_FUNC_IMPL(__imp__sub_82C3E920) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82C3E928;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82d86078
	ctx.lr = 0x82C3E93C;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3e9dc
	if (cr6.eq) goto loc_82C3E9DC;
	// bl 0x82dad2e0
	ctx.lr = 0x82C3E948;
	sub_82DAD2E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c3e970
	if (!cr6.eq) goto loc_82C3E970;
	// lis r11,527
	ctx.r11.s64 = 34537472;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r9,r11,158
	ctx.r9.u64 = ctx.r11.u64 | 158;
	// stb r10,344(r29)
	PPC_STORE_U8(ctx.r29.u32 + 344, ctx.r10.u8);
	// stw r9,348(r29)
	PPC_STORE_U32(ctx.r29.u32 + 348, ctx.r9.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82C3E970:
	// addic r11,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// subfe r11,r11,r31
	temp.u8 = (~ctx.r11.u32 + ctx.r31.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r31.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r31.u64 + xer.ca;
	xer.ca = temp.u8;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x82c3e998
	if (!cr6.lt) goto loc_82C3E998;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r31,32(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// b 0x82c3e99c
	goto loc_82C3E99C;
loc_82C3E998:
	// li r31,24
	ctx.r31.s64 = 24;
loc_82C3E99C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b67090
	ctx.lr = 0x82C3E9A4;
	sub_82B67090(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82db1298
	ctx.lr = 0x82C3E9B4;
	sub_82DB1298(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c3e9e8
	if (!cr6.eq) goto loc_82C3E9E8;
	// lis r11,527
	ctx.r11.s64 = 34537472;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r9,r11,158
	ctx.r9.u64 = ctx.r11.u64 | 158;
	// stb r10,344(r29)
	PPC_STORE_U8(ctx.r29.u32 + 344, ctx.r10.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,348(r29)
	PPC_STORE_U32(ctx.r29.u32 + 348, ctx.r9.u32);
	// bl 0x82c644a0
	ctx.lr = 0x82C3E9DC;
	sub_82C644A0(ctx, base);
loc_82C3E9DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82C3E9E8:
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82C3E9FC;
	sub_8259CB28(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c644a0
	ctx.lr = 0x82C3EA04;
	sub_82C644A0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C3EA10"))) PPC_WEAK_FUNC(sub_82C3EA10);
PPC_FUNC_IMPL(__imp__sub_82C3EA10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82C3EA18;
	__savegprlr_27(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82c3eb4c
	if (cr6.eq) goto loc_82C3EB4C;
	// lwz r11,100(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r3,r4,100
	ctx.r3.s64 = ctx.r4.s64 + 100;
	// addi r4,r10,19124
	ctx.r4.s64 = ctx.r10.s64 + 19124;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C3EA48;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c3ea70
	if (!cr6.eq) goto loc_82C3EA70;
loc_82C3EA54:
	// lis r11,527
	ctx.r11.s64 = 34537472;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r9,r11,158
	ctx.r9.u64 = ctx.r11.u64 | 158;
	// stb r10,344(r28)
	PPC_STORE_U8(ctx.r28.u32 + 344, ctx.r10.u8);
	// stw r9,348(r28)
	PPC_STORE_U32(ctx.r28.u32 + 348, ctx.r9.u32);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82C3EA70:
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2b6e0
	ctx.lr = 0x82C3EA84;
	sub_82D2B6E0(ctx, base);
	// addi r11,r31,88
	ctx.r11.s64 = ctx.r31.s64 + 88;
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r27,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c3ea54
	if (cr6.eq) goto loc_82C3EA54;
	// bl 0x82dad2e0
	ctx.lr = 0x82C3EA9C;
	sub_82DAD2E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3ea54
	if (cr6.eq) goto loc_82C3EA54;
	// addic r11,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// subfe r11,r11,r31
	temp.u8 = (~ctx.r11.u32 + ctx.r31.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r31.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r31.u64 + xer.ca;
	xer.ca = temp.u8;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x82c3ead0
	if (!cr6.lt) goto loc_82C3EAD0;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r3
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// b 0x82c3ead4
	goto loc_82C3EAD4;
loc_82C3EAD0:
	// li r31,-1
	ctx.r31.s64 = -1;
loc_82C3EAD4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b6b738
	ctx.lr = 0x82C3EADC;
	sub_82B6B738(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82db2970
	ctx.lr = 0x82C3EAEC;
	sub_82DB2970(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c3eb1c
	if (!cr6.eq) goto loc_82C3EB1C;
	// lis r11,527
	ctx.r11.s64 = 34537472;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r9,r11,158
	ctx.r9.u64 = ctx.r11.u64 | 158;
	// stb r10,344(r28)
	PPC_STORE_U8(ctx.r28.u32 + 344, ctx.r10.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,348(r28)
	PPC_STORE_U32(ctx.r28.u32 + 348, ctx.r9.u32);
	// bl 0x82b6a860
	ctx.lr = 0x82C3EB14;
	sub_82B6A860(ctx, base);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82C3EB1C:
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2b6e0
	ctx.lr = 0x82C3EB30;
	sub_82D2B6E0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// ld r6,168(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwzx r3,r27,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// bl 0x82c2f918
	ctx.lr = 0x82C3EB44;
	sub_82C2F918(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b6a860
	ctx.lr = 0x82C3EB4C;
	sub_82B6A860(ctx, base);
loc_82C3EB4C:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C3EB54"))) PPC_WEAK_FUNC(sub_82C3EB54);
PPC_FUNC_IMPL(__imp__sub_82C3EB54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3EB58"))) PPC_WEAK_FUNC(sub_82C3EB58);
PPC_FUNC_IMPL(__imp__sub_82C3EB58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82C3EB60;
	__savegprlr_22(ctx, base);
	// stwu r1,-592(r1)
	ea = -592 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82d86078
	ctx.lr = 0x82C3EB68;
	sub_82D86078(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c3eb80
	if (!cr6.eq) goto loc_82C3EB80;
loc_82C3EB74:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_82C3EB80:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r3,52(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 52);
	// li r6,200
	ctx.r6.s64 = 200;
	// addi r5,r11,19132
	ctx.r5.s64 = ctx.r11.s64 + 19132;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82da9890
	ctx.lr = 0x82C3EB98;
	sub_82DA9890(ctx, base);
	// bl 0x82dad2e0
	ctx.lr = 0x82C3EB9C;
	sub_82DAD2E0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3eb74
	if (cr6.eq) goto loc_82C3EB74;
	// lwz r23,368(r3)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r3.u32 + 368);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x82c3ece8
	if (cr6.eq) goto loc_82C3ECE8;
	// li r28,15
	ctx.r28.s64 = 15;
	// li r24,24
	ctx.r24.s64 = 24;
	// li r30,-1
	ctx.r30.s64 = -1;
	// li r25,4
	ctx.r25.s64 = 4;
	// li r26,2
	ctx.r26.s64 = 2;
loc_82C3EBD0:
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r24.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// stb r31,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r31.u8);
	// stb r25,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r25.u8);
	// stw r26,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r26.u32);
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// stb r31,145(r1)
	PPC_STORE_U8(ctx.r1.u32 + 145, ctx.r31.u8);
	// stb r31,146(r1)
	PPC_STORE_U8(ctx.r1.u32 + 146, ctx.r31.u8);
	// stb r31,147(r1)
	PPC_STORE_U8(ctx.r1.u32 + 147, ctx.r31.u8);
	// bl 0x82db1298
	ctx.lr = 0x82C3EC10;
	sub_82DB1298(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c3ec48
	if (!cr6.eq) goto loc_82C3EC48;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c3ec38
	if (cr6.lt) goto loc_82C3EC38;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x825952b8
	ctx.lr = 0x82C3EC38;
	sub_825952B8(ctx, base);
loc_82C3EC38:
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// stb r31,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r31.u8);
	// b 0x82c3ecdc
	goto loc_82C3ECDC;
loc_82C3EC48:
	// lbz r10,147(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 147);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c3ecd4
	if (!cr6.eq) goto loc_82C3ECD4;
	// lbz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 144);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x82c3ecd4
	if (cr6.eq) goto loc_82C3ECD4;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82b6b738
	ctx.lr = 0x82C3EC68;
	sub_82B6B738(ctx, base);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x82db29e0
	ctx.lr = 0x82C3EC78;
	sub_82DB29E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c3eccc
	if (cr6.eq) goto loc_82C3ECCC;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82b5e118
	ctx.lr = 0x82C3EC8C;
	sub_82B5E118(ctx, base);
	// lwz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,348
	ctx.r4.s64 = ctx.r1.s64 + 348;
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82C3ECA8;
	sub_8259CB28(ctx, base);
	// ld r10,312(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 312);
	// stb r31,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r31.u8);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stb r31,209(r1)
	PPC_STORE_U8(ctx.r1.u32 + 209, ctx.r31.u8);
	// std r10,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r10.u64);
	// lwz r3,52(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 52);
	// bl 0x82da9740
	ctx.lr = 0x82C3ECC4;
	sub_82DA9740(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82da8c38
	ctx.lr = 0x82C3ECCC;
	sub_82DA8C38(ctx, base);
loc_82C3ECCC:
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82b6a860
	ctx.lr = 0x82C3ECD4;
	sub_82B6A860(ctx, base);
loc_82C3ECD4:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c644a0
	ctx.lr = 0x82C3ECDC;
	sub_82C644A0(ctx, base);
loc_82C3ECDC:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r23
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r23.u32, xer);
	// blt cr6,0x82c3ebd0
	if (cr6.lt) goto loc_82C3EBD0;
loc_82C3ECE8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C3ECF4"))) PPC_WEAK_FUNC(sub_82C3ECF4);
PPC_FUNC_IMPL(__imp__sub_82C3ECF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3ECF8"))) PPC_WEAK_FUNC(sub_82C3ECF8);
PPC_FUNC_IMPL(__imp__sub_82C3ECF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82C3ED00;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82c50138
	ctx.lr = 0x82C3ED10;
	sub_82C50138(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r9,r11,19968
	ctx.r9.s64 = ctx.r11.s64 + 19968;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r28,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r28.u32);
	// addi r30,r31,352
	ctx.r30.s64 = ctx.r31.s64 + 352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// li r29,2
	ctx.r29.s64 = 2;
	// stw r28,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r28.u32);
	// li r27,27
	ctx.r27.s64 = 27;
loc_82C3ED40:
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82C3ED54;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3ed68
	if (cr6.eq) goto loc_82C3ED68;
	// bl 0x82c2f748
	ctx.lr = 0x82C3ED60;
	sub_82C2F748(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82c3ed6c
	goto loc_82C3ED6C;
loc_82C3ED68:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82C3ED6C:
	// stw r4,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r4.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82c3ed80
	if (cr6.eq) goto loc_82C3ED80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82C3ED80;
	sub_83103100(ctx, base);
loc_82C3ED80:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82c3ed40
	if (!cr0.eq) goto loc_82C3ED40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C3ED98"))) PPC_WEAK_FUNC(sub_82C3ED98);
PPC_FUNC_IMPL(__imp__sub_82C3ED98) {
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
	// bl 0x82d19a78
	ctx.lr = 0x82C3EDA8;
	sub_82D19A78(ctx, base);
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

__attribute__((alias("__imp__sub_82C3EDBC"))) PPC_WEAK_FUNC(sub_82C3EDBC);
PPC_FUNC_IMPL(__imp__sub_82C3EDBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3EDC0"))) PPC_WEAK_FUNC(sub_82C3EDC0);
PPC_FUNC_IMPL(__imp__sub_82C3EDC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82C3EDC8;
	__savegprlr_28(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82C3EDD4;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c3edf8
	if (!cr6.eq) goto loc_82C3EDF8;
	// lis r11,527
	ctx.r11.s64 = 34537472;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r9,r11,158
	ctx.r9.u64 = ctx.r11.u64 | 158;
	// stb r10,344(r30)
	PPC_STORE_U8(ctx.r30.u32 + 344, ctx.r10.u8);
	// stw r9,348(r30)
	PPC_STORE_U32(ctx.r30.u32 + 348, ctx.r9.u32);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82C3EDF8:
	// bl 0x831156e8
	ctx.lr = 0x82C3EDFC;
	sub_831156E8(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addis r31,r11,5
	ctx.r31.s64 = ctx.r11.s64 + 327680;
	// addi r31,r31,14904
	ctx.r31.s64 = ctx.r31.s64 + 14904;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83124260
	ctx.lr = 0x82C3EE1C;
	sub_83124260(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// li r29,1
	ctx.r29.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c3eea8
	if (cr6.eq) goto loc_82C3EEA8;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83124260
	ctx.lr = 0x82C3EE3C;
	sub_83124260(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c3eea8
	if (cr6.eq) goto loc_82C3EEA8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82b7cb68
	ctx.lr = 0x82C3EE50;
	sub_82B7CB68(ctx, base);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83124270
	ctx.lr = 0x82C3EE64;
	sub_83124270(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c50420
	ctx.lr = 0x82C3EE74;
	sub_82C50420(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82b7cb68
	ctx.lr = 0x82C3EE7C;
	sub_82B7CB68(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83124270
	ctx.lr = 0x82C3EE90;
	sub_83124270(ctx, base);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c50420
	ctx.lr = 0x82C3EEA0;
	sub_82C50420(ctx, base);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82C3EEA8:
	// lis r11,527
	ctx.r11.s64 = 34537472;
	// stb r29,344(r30)
	PPC_STORE_U8(ctx.r30.u32 + 344, ctx.r29.u8);
	// ori r10,r11,158
	ctx.r10.u64 = ctx.r11.u64 | 158;
	// stw r10,348(r30)
	PPC_STORE_U32(ctx.r30.u32 + 348, ctx.r10.u32);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C3EEC0"))) PPC_WEAK_FUNC(sub_82C3EEC0);
PPC_FUNC_IMPL(__imp__sub_82C3EEC0) {
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
	// li r4,360
	ctx.r4.s64 = 360;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82C3EEF4;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3ef0c
	if (cr6.eq) goto loc_82C3EF0C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82c3ecf8
	ctx.lr = 0x82C3EF08;
	sub_82C3ECF8(ctx, base);
	// b 0x82c3ef10
	goto loc_82C3EF10;
loc_82C3EF0C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C3EF10:
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

__attribute__((alias("__imp__sub_82C3EF28"))) PPC_WEAK_FUNC(sub_82C3EF28);
PPC_FUNC_IMPL(__imp__sub_82C3EF28) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,19968
	ctx.r9.s64 = ctx.r11.s64 + 19968;
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
	// bl 0x82c502e8
	ctx.lr = 0x82C3EF60;
	sub_82C502E8(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82c3ef78
	if (cr6.eq) goto loc_82C3EF78;
	// bl 0x82416268
	ctx.lr = 0x82C3EF74;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C3EF78:
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

__attribute__((alias("__imp__sub_82C3EF90"))) PPC_WEAK_FUNC(sub_82C3EF90);
PPC_FUNC_IMPL(__imp__sub_82C3EF90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82C3EF98;
	__savegprlr_27(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82c3f0cc
	if (cr6.eq) goto loc_82C3F0CC;
	// lwz r11,100(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r3,r4,100
	ctx.r3.s64 = ctx.r4.s64 + 100;
	// addi r4,r10,19868
	ctx.r4.s64 = ctx.r10.s64 + 19868;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C3EFC8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c3eff0
	if (!cr6.eq) goto loc_82C3EFF0;
loc_82C3EFD4:
	// lis r11,527
	ctx.r11.s64 = 34537472;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r9,r11,158
	ctx.r9.u64 = ctx.r11.u64 | 158;
	// stb r10,344(r28)
	PPC_STORE_U8(ctx.r28.u32 + 344, ctx.r10.u8);
	// stw r9,348(r28)
	PPC_STORE_U32(ctx.r28.u32 + 348, ctx.r9.u32);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82C3EFF0:
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2b6e0
	ctx.lr = 0x82C3F004;
	sub_82D2B6E0(ctx, base);
	// addi r11,r31,88
	ctx.r11.s64 = ctx.r31.s64 + 88;
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r27,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c3efd4
	if (cr6.eq) goto loc_82C3EFD4;
	// bl 0x82dad2e0
	ctx.lr = 0x82C3F01C;
	sub_82DAD2E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3efd4
	if (cr6.eq) goto loc_82C3EFD4;
	// addic r11,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// subfe r11,r11,r31
	temp.u8 = (~ctx.r11.u32 + ctx.r31.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r31.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r31.u64 + xer.ca;
	xer.ca = temp.u8;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x82c3f050
	if (!cr6.lt) goto loc_82C3F050;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r3
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// b 0x82c3f054
	goto loc_82C3F054;
loc_82C3F050:
	// li r31,-1
	ctx.r31.s64 = -1;
loc_82C3F054:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b6b738
	ctx.lr = 0x82C3F05C;
	sub_82B6B738(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82db2970
	ctx.lr = 0x82C3F06C;
	sub_82DB2970(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c3f09c
	if (!cr6.eq) goto loc_82C3F09C;
	// lis r11,527
	ctx.r11.s64 = 34537472;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r9,r11,158
	ctx.r9.u64 = ctx.r11.u64 | 158;
	// stb r10,344(r28)
	PPC_STORE_U8(ctx.r28.u32 + 344, ctx.r10.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,348(r28)
	PPC_STORE_U32(ctx.r28.u32 + 348, ctx.r9.u32);
	// bl 0x82b6a860
	ctx.lr = 0x82C3F094;
	sub_82B6A860(ctx, base);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82C3F09C:
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2b6e0
	ctx.lr = 0x82C3F0B0;
	sub_82D2B6E0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// ld r6,168(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwzx r3,r27,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// bl 0x82c2f918
	ctx.lr = 0x82C3F0C4;
	sub_82C2F918(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b6a860
	ctx.lr = 0x82C3F0CC;
	sub_82B6A860(ctx, base);
loc_82C3F0CC:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C3F0D4"))) PPC_WEAK_FUNC(sub_82C3F0D4);
PPC_FUNC_IMPL(__imp__sub_82C3F0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3F0D8"))) PPC_WEAK_FUNC(sub_82C3F0D8);
PPC_FUNC_IMPL(__imp__sub_82C3F0D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82C3F0E0;
	__savegprlr_22(ctx, base);
	// stwu r1,-592(r1)
	ea = -592 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82d86078
	ctx.lr = 0x82C3F0E8;
	sub_82D86078(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c3f100
	if (!cr6.eq) goto loc_82C3F100;
loc_82C3F0F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_82C3F100:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r3,52(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 52);
	// li r6,200
	ctx.r6.s64 = 200;
	// addi r5,r11,19876
	ctx.r5.s64 = ctx.r11.s64 + 19876;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82da9890
	ctx.lr = 0x82C3F118;
	sub_82DA9890(ctx, base);
	// bl 0x82dad2e0
	ctx.lr = 0x82C3F11C;
	sub_82DAD2E0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3f0f4
	if (cr6.eq) goto loc_82C3F0F4;
	// lwz r23,368(r3)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r3.u32 + 368);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x82c3f268
	if (cr6.eq) goto loc_82C3F268;
	// li r28,15
	ctx.r28.s64 = 15;
	// li r24,24
	ctx.r24.s64 = 24;
	// li r30,-1
	ctx.r30.s64 = -1;
	// li r25,4
	ctx.r25.s64 = 4;
	// li r26,2
	ctx.r26.s64 = 2;
loc_82C3F150:
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r24.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// stb r31,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r31.u8);
	// stb r25,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r25.u8);
	// stw r26,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r26.u32);
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// stb r31,145(r1)
	PPC_STORE_U8(ctx.r1.u32 + 145, ctx.r31.u8);
	// stb r31,146(r1)
	PPC_STORE_U8(ctx.r1.u32 + 146, ctx.r31.u8);
	// stb r31,147(r1)
	PPC_STORE_U8(ctx.r1.u32 + 147, ctx.r31.u8);
	// bl 0x82db1298
	ctx.lr = 0x82C3F190;
	sub_82DB1298(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c3f1c8
	if (!cr6.eq) goto loc_82C3F1C8;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c3f1b8
	if (cr6.lt) goto loc_82C3F1B8;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x825952b8
	ctx.lr = 0x82C3F1B8;
	sub_825952B8(ctx, base);
loc_82C3F1B8:
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// stb r31,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r31.u8);
	// b 0x82c3f25c
	goto loc_82C3F25C;
loc_82C3F1C8:
	// lbz r10,147(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 147);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c3f254
	if (!cr6.eq) goto loc_82C3F254;
	// lbz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 144);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x82c3f254
	if (cr6.eq) goto loc_82C3F254;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82b6b738
	ctx.lr = 0x82C3F1E8;
	sub_82B6B738(ctx, base);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x82db29e0
	ctx.lr = 0x82C3F1F8;
	sub_82DB29E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c3f24c
	if (cr6.eq) goto loc_82C3F24C;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82b5e118
	ctx.lr = 0x82C3F20C;
	sub_82B5E118(ctx, base);
	// lwz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,348
	ctx.r4.s64 = ctx.r1.s64 + 348;
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82C3F228;
	sub_8259CB28(ctx, base);
	// ld r10,312(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 312);
	// stb r31,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r31.u8);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stb r31,209(r1)
	PPC_STORE_U8(ctx.r1.u32 + 209, ctx.r31.u8);
	// std r10,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r10.u64);
	// lwz r3,52(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 52);
	// bl 0x82da9740
	ctx.lr = 0x82C3F244;
	sub_82DA9740(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82da8c38
	ctx.lr = 0x82C3F24C;
	sub_82DA8C38(ctx, base);
loc_82C3F24C:
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82b6a860
	ctx.lr = 0x82C3F254;
	sub_82B6A860(ctx, base);
loc_82C3F254:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c644a0
	ctx.lr = 0x82C3F25C;
	sub_82C644A0(ctx, base);
loc_82C3F25C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r23
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r23.u32, xer);
	// blt cr6,0x82c3f150
	if (cr6.lt) goto loc_82C3F150;
loc_82C3F268:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C3F274"))) PPC_WEAK_FUNC(sub_82C3F274);
PPC_FUNC_IMPL(__imp__sub_82C3F274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3F278"))) PPC_WEAK_FUNC(sub_82C3F278);
PPC_FUNC_IMPL(__imp__sub_82C3F278) {
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
	// bl 0x82c3a610
	ctx.lr = 0x82C3F288;
	sub_82C3A610(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c3f298
	if (cr6.eq) goto loc_82C3F298;
	// bl 0x82c3a5a8
	ctx.lr = 0x82C3F298;
	sub_82C3A5A8(ctx, base);
loc_82C3F298:
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

__attribute__((alias("__imp__sub_82C3F2AC"))) PPC_WEAK_FUNC(sub_82C3F2AC);
PPC_FUNC_IMPL(__imp__sub_82C3F2AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3F2B0"))) PPC_WEAK_FUNC(sub_82C3F2B0);
PPC_FUNC_IMPL(__imp__sub_82C3F2B0) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C3F2C8;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r31,9
	cr6.compare<uint32_t>(ctx.r31.u32, 9, xer);
	// li r5,1
	ctx.r5.s64 = 1;
	// bne cr6,0x82c3f2f0
	if (!cr6.eq) goto loc_82C3F2F0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r11,r9,21172
	ctx.r11.s64 = ctx.r9.s64 + 21172;
	// addi r4,r11,-12
	ctx.r4.s64 = ctx.r11.s64 + -12;
	// lwz r8,72(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// b 0x82c3f304
	goto loc_82C3F304;
loc_82C3F2F0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r4,r10,21172
	ctx.r4.s64 = ctx.r10.s64 + 21172;
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82C3F304:
	// bctrl 
	ctx.lr = 0x82C3F308;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_82C3F31C"))) PPC_WEAK_FUNC(sub_82C3F31C);
PPC_FUNC_IMPL(__imp__sub_82C3F31C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3F320"))) PPC_WEAK_FUNC(sub_82C3F320);
PPC_FUNC_IMPL(__imp__sub_82C3F320) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r5,9
	cr6.compare<uint32_t>(ctx.r5.u32, 9, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// stw r6,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C3F330"))) PPC_WEAK_FUNC(sub_82C3F330);
PPC_FUNC_IMPL(__imp__sub_82C3F330) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82C3F338;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 128);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x82c3f548
	if (cr6.eq) goto loc_82C3F548;
	// bl 0x831156e8
	ctx.lr = 0x82C3F350;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r28,0
	ctx.r28.s64 = 0;
	// addis r30,r11,5
	ctx.r30.s64 = ctx.r11.s64 + 327680;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r30,r30,14904
	ctx.r30.s64 = ctx.r30.s64 + 14904;
	// li r25,1
	ctx.r25.s64 = 1;
	// lis r27,-31776
	ctx.r27.s64 = -2082471936;
	// addi r26,r11,20748
	ctx.r26.s64 = ctx.r11.s64 + 20748;
loc_82C3F370:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19aa8
	ctx.lr = 0x82C3F380;
	sub_82D19AA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3f53c
	if (cr6.eq) goto loc_82C3F53C;
	// lbz r11,98(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 98);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82c3f39c
	if (!cr6.eq) goto loc_82C3F39C;
	// cmplwi cr6,r28,9
	cr6.compare<uint32_t>(ctx.r28.u32, 9, xer);
	// bne cr6,0x82c3f53c
	if (!cr6.eq) goto loc_82C3F53C;
loc_82C3F39C:
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r4,-15992(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + -15992);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C3F3B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3f53c
	if (cr6.eq) goto loc_82C3F53C;
	// bl 0x83a970c8
	ctx.lr = 0x82C3F3C0;
	sub_83A970C8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,9
	cr6.compare<uint32_t>(ctx.r28.u32, 9, xer);
	// bgt cr6,0x82c3f53c
	if (cr6.gt) goto loc_82C3F53C;
	// lis r12,-32060
	ctx.r12.s64 = -2101084160;
	// rlwinm r0,r28,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-3100
	ctx.r12.s64 = ctx.r12.s64 + -3100;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r28.u32) {
	case 0:
		goto loc_82C3F40C;
	case 1:
		goto loc_82C3F41C;
	case 2:
		goto loc_82C3F4C4;
	case 3:
		goto loc_82C3F4DC;
	case 4:
		goto loc_82C3F4F4;
	case 5:
		goto loc_82C3F434;
	case 6:
		goto loc_82C3F484;
	case 7:
		goto loc_82C3F4A4;
	case 8:
		goto loc_82C3F464;
	case 9:
		goto loc_82C3F504;
	default:
		return;
	}
	// lwz r22,-3060(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + -3060);
	// lwz r22,-3044(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + -3044);
	// lwz r22,-2876(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + -2876);
	// lwz r22,-2852(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + -2852);
	// lwz r22,-2828(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + -2828);
	// lwz r22,-3020(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + -3020);
	// lwz r22,-2940(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + -2940);
	// lwz r22,-2908(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + -2908);
	// lwz r22,-2972(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + -2972);
	// lwz r22,-2812(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + -2812);
loc_82C3F40C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82583338
	ctx.lr = 0x82C3F418;
	sub_82583338(ctx, base);
	// b 0x82c3f53c
	goto loc_82C3F53C;
loc_82C3F41C:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r10,r11,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// bl 0x839e07e8
	ctx.lr = 0x82C3F430;
	sub_839E07E8(ctx, base);
	// b 0x82c3f53c
	goto loc_82C3F53C;
loc_82C3F434:
	// stb r25,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r25.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83129790
	ctx.lr = 0x82C3F444;
	sub_83129790(ctx, base);
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
	// bl 0x83123800
	ctx.lr = 0x82C3F460;
	sub_83123800(ctx, base);
	// b 0x82c3f53c
	goto loc_82C3F53C;
loc_82C3F464:
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// bl 0x831237d0
	ctx.lr = 0x82C3F480;
	sub_831237D0(ctx, base);
	// b 0x82c3f53c
	goto loc_82C3F53C;
loc_82C3F484:
	// lbz r11,96(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c3f53c
	if (!cr6.eq) goto loc_82C3F53C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831239c8
	ctx.lr = 0x82C3F4A0;
	sub_831239C8(ctx, base);
	// b 0x82c3f53c
	goto loc_82C3F53C;
loc_82C3F4A4:
	// lbz r11,96(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c3f53c
	if (!cr6.eq) goto loc_82C3F53C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831239c8
	ctx.lr = 0x82C3F4C0;
	sub_831239C8(ctx, base);
	// b 0x82c3f53c
	goto loc_82C3F53C;
loc_82C3F4C4:
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r4,r10,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x83123838
	ctx.lr = 0x82C3F4D8;
	sub_83123838(ctx, base);
	// b 0x82c3f53c
	goto loc_82C3F53C;
loc_82C3F4DC:
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r4,r10,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x83123860
	ctx.lr = 0x82C3F4F0;
	sub_83123860(ctx, base);
	// b 0x82c3f53c
	goto loc_82C3F53C;
loc_82C3F4F4:
	// clrlwi r4,r31,24
	ctx.r4.u64 = ctx.r31.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83123870
	ctx.lr = 0x82C3F500;
	sub_83123870(ctx, base);
	// b 0x82c3f53c
	goto loc_82C3F53C;
loc_82C3F504:
	// lwz r11,104(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// lwz r10,100(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// lwz r9,116(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 116);
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// ble cr6,0x82c3f53c
	if (!cr6.gt) goto loc_82C3F53C;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// ble cr6,0x82c3f550
	if (!cr6.gt) goto loc_82C3F550;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// clrlwi r4,r10,16
	ctx.r4.u64 = ctx.r10.u32 & 0xFFFF;
	// bl 0x83123898
	ctx.lr = 0x82C3F53C;
	sub_83123898(ctx, base);
loc_82C3F53C:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplwi cr6,r28,10
	cr6.compare<uint32_t>(ctx.r28.u32, 10, xer);
	// blt cr6,0x82c3f370
	if (cr6.lt) goto loc_82C3F370;
loc_82C3F548:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82C3F550:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C3F55C;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82C3F55C"))) PPC_WEAK_FUNC(sub_82C3F55C);
PPC_FUNC_IMPL(__imp__sub_82C3F55C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3F560"))) PPC_WEAK_FUNC(sub_82C3F560);
PPC_FUNC_IMPL(__imp__sub_82C3F560) {
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
	// lis r11,264
	ctx.r11.s64 = 17301504;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// ori r9,r11,20480
	ctx.r9.u64 = ctx.r11.u64 | 20480;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82c3f584
	if (!cr6.eq) goto loc_82C3F584;
	// bl 0x82c3f330
	ctx.lr = 0x82C3F584;
	sub_82C3F330(ctx, base);
loc_82C3F584:
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

__attribute__((alias("__imp__sub_82C3F598"))) PPC_WEAK_FUNC(sub_82C3F598);
PPC_FUNC_IMPL(__imp__sub_82C3F598) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82C3F5A0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x82c3f6b8
	if (!cr6.eq) goto loc_82C3F6B8;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r30,r3,100
	ctx.r30.s64 = ctx.r3.s64 + 100;
	// lwz r10,104(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r26,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r26.s64 = ctx.r9.s32 >> 2;
	// bl 0x82d19a78
	ctx.lr = 0x82C3F5CC;
	sub_82D19A78(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r27,r3,100
	ctx.r27.s64 = ctx.r3.s64 + 100;
	// addi r29,r11,21208
	ctx.r29.s64 = ctx.r11.s64 + 21208;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r29,-24
	ctx.r4.s64 = ctx.r29.s64 + -24;
	// bl 0x82d2e228
	ctx.lr = 0x82C3F5E4;
	sub_82D2E228(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3f648
	if (cr6.eq) goto loc_82C3F648;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r28,r3,100
	ctx.r28.s64 = ctx.r3.s64 + 100;
	// addi r4,r29,-16
	ctx.r4.s64 = ctx.r29.s64 + -16;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C3F608;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3f620
	if (cr6.eq) goto loc_82C3F620;
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrldi r4,r11,32
	ctx.r4.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// bl 0x82d294d0
	ctx.lr = 0x82C3F620;
	sub_82D294D0(ctx, base);
loc_82C3F620:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C3F638;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3f648
	if (cr6.eq) goto loc_82C3F648;
	// clrldi r4,r26,32
	ctx.r4.u64 = ctx.r26.u64 & 0xFFFFFFFF;
	// bl 0x82d294d0
	ctx.lr = 0x82C3F648;
	sub_82D294D0(ctx, base);
loc_82C3F648:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// srawi r7,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r7,r11
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82c3f670
	if (cr6.gt) goto loc_82C3F670;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C3F670;
	sub_831CC188(ctx, base);
loc_82C3F670:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r8,-31776
	ctx.r8.s64 = -2082471936;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwzx r7,r9,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// lwz r4,-15988(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15988);
	// stw r7,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r7.u32);
	// lwz r6,0(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82C3F69C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d39d50
	ctx.lr = 0x82C3F6A8;
	sub_82D39D50(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d39cd0
	ctx.lr = 0x82C3F6B0;
	sub_82D39CD0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r4,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r4.u32);
loc_82C3F6B8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C3F6C0"))) PPC_WEAK_FUNC(sub_82C3F6C0);
PPC_FUNC_IMPL(__imp__sub_82C3F6C0) {
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
	// bl 0x82c3f330
	ctx.lr = 0x82C3F6D8;
	sub_82C3F330(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,128(r31)
	PPC_STORE_U8(ctx.r31.u32 + 128, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82C3F6F8"))) PPC_WEAK_FUNC(sub_82C3F6F8);
PPC_FUNC_IMPL(__imp__sub_82C3F6F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82C3F700;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x82c3f730
	if (!cr6.eq) goto loc_82C3F730;
	// lwz r10,116(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// lwz r9,120(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x82c3f730
	if (cr6.eq) goto loc_82C3F730;
	// bl 0x82c3f598
	ctx.lr = 0x82C3F728;
	sub_82C3F598(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82C3F730:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82c3f7c8
	if (cr6.lt) goto loc_82C3F7C8;
	// beq cr6,0x82c3f7a4
	if (cr6.eq) goto loc_82C3F7A4;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x82c3f7ec
	if (!cr6.lt) goto loc_82C3F7EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C3F74C;
	sub_82D19A78(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r9,100(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r4,-15988(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -15988);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C3F76C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82bdf720
	ctx.lr = 0x82C3F77C;
	sub_82BDF720(ctx, base);
	// lwz r7,112(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82C3F794;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r6,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r6.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82C3F7A4:
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// bl 0x82bdf6a0
	ctx.lr = 0x82C3F7AC;
	sub_82BDF6A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c3f7ec
	if (cr6.eq) goto loc_82C3F7EC;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82C3F7C8:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// bl 0x82be0158
	ctx.lr = 0x82C3F7D8;
	sub_82BE0158(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c3f7ec
	if (cr6.eq) goto loc_82C3F7EC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
loc_82C3F7EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C3F7F4"))) PPC_WEAK_FUNC(sub_82C3F7F4);
PPC_FUNC_IMPL(__imp__sub_82C3F7F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3F7F8"))) PPC_WEAK_FUNC(sub_82C3F7F8);
PPC_FUNC_IMPL(__imp__sub_82C3F7F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82C3F800;
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
	ctx.lr = 0x82C3F81C;
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
	ctx.lr = 0x82C3F834;
	sub_82D253F8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// stb r28,97(r31)
	PPC_STORE_U8(ctx.r31.u32 + 97, ctx.r28.u8);
	// li r30,0
	ctx.r30.s64 = 0;
	// stb r27,98(r31)
	PPC_STORE_U8(ctx.r31.u32 + 98, ctx.r27.u8);
	// addi r9,r11,21304
	ctx.r9.s64 = ctx.r11.s64 + 21304;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stb r30,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r30.u8);
	// li r7,3
	ctx.r7.s64 = 3;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// lis r6,-31776
	ctx.r6.s64 = -2082471936;
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// addi r29,r6,-16004
	ctx.r29.s64 = ctx.r6.s64 + -16004;
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// stb r30,128(r31)
	PPC_STORE_U8(ctx.r31.u32 + 128, ctx.r30.u8);
	// stw r7,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r7.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// lwz r4,-16004(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16004);
	// bl 0x82d20ae0
	ctx.lr = 0x82C3F898;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x82d23390
	ctx.lr = 0x82C3F8A8;
	sub_82D23390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d191f8
	ctx.lr = 0x82C3F8B0;
	sub_82D191F8(ctx, base);
	// lis r5,-31743
	ctx.r5.s64 = -2080309248;
	// lwz r11,15392(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 15392);
	// lbz r4,5(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// stb r4,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r4.u8);
	// bne cr6,0x82c3f8e8
	if (!cr6.eq) goto loc_82C3F8E8;
	// bl 0x831156e8
	ctx.lr = 0x82C3F8CC;
	sub_831156E8(ctx, base);
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c3f8ec
	if (!cr6.eq) goto loc_82C3F8EC;
	// stb r30,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r30.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82C3F8E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C3F8EC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C3F8F4"))) PPC_WEAK_FUNC(sub_82C3F8F4);
PPC_FUNC_IMPL(__imp__sub_82C3F8F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3F8F8"))) PPC_WEAK_FUNC(sub_82C3F8F8);
PPC_FUNC_IMPL(__imp__sub_82C3F8F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82C3F900;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c3f920
	if (cr6.lt) goto loc_82C3F920;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82c3f924
	goto loc_82C3F924;
loc_82C3F920:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82C3F924:
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
	ctx.lr = 0x82C3F940;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3f964
	if (cr6.eq) goto loc_82C3F964;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c3f7f8
	ctx.lr = 0x82C3F95C;
	sub_82C3F7F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c3f968
	if (!cr6.eq) goto loc_82C3F968;
loc_82C3F964:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C3F968:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C3F970"))) PPC_WEAK_FUNC(sub_82C3F970);
PPC_FUNC_IMPL(__imp__sub_82C3F970) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,21304
	ctx.r9.s64 = ctx.r11.s64 + 21304;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,100(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3f9b4
	if (cr6.eq) goto loc_82C3F9B4;
	// bl 0x82416268
	ctx.lr = 0x82C3F9B4;
	sub_82416268(ctx, base);
loc_82C3F9B4:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// bl 0x82d25548
	ctx.lr = 0x82C3F9CC;
	sub_82D25548(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c3f9e4
	if (cr6.eq) goto loc_82C3F9E4;
	// bl 0x82416268
	ctx.lr = 0x82C3F9E0;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C3F9E4:
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

__attribute__((alias("__imp__sub_82C3F9FC"))) PPC_WEAK_FUNC(sub_82C3F9FC);
PPC_FUNC_IMPL(__imp__sub_82C3F9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3FA00"))) PPC_WEAK_FUNC(sub_82C3FA00);
PPC_FUNC_IMPL(__imp__sub_82C3FA00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab4
	ctx.lr = 0x82C3FA08;
	__savegprlr_15(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82C3FA14;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addis r21,r11,5
	ctx.r21.s64 = ctx.r11.s64 + 327680;
	// addi r21,r21,14904
	ctx.r21.s64 = ctx.r21.s64 + 14904;
	// bl 0x8314ee28
	ctx.lr = 0x82C3FA24;
	sub_8314EE28(ctx, base);
	// bl 0x82f047e0
	ctx.lr = 0x82C3FA28;
	sub_82F047E0(ctx, base);
	// lwz r31,100(r16)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r16.u32 + 100);
	// lwz r4,104(r16)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r16.u32 + 104);
	// addi r26,r16,100
	ctx.r26.s64 = ctx.r16.s64 + 100;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r4
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, xer);
	// beq cr6,0x82c3fa60
	if (cr6.eq) goto loc_82C3FA60;
	// subf r11,r4,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x831ce420
	ctx.lr = 0x82C3FA58;
	sub_831CE420(ctx, base);
	// add r10,r30,r31
	ctx.r10.u64 = ctx.r30.u64 + ctx.r31.u64;
	// stw r10,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r10.u32);
loc_82C3FA60:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f04c50
	ctx.lr = 0x82C3FA70;
	sub_82F04C50(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// li r18,-2
	ctx.r18.s64 = -2;
	// bl 0x83a76f48
	ctx.lr = 0x82C3FA7C;
	sub_83A76F48(ctx, base);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r8,0(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// subf r10,r8,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r8.s64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// srawi. r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// beq 0x82c3fad4
	if (cr0.eq) goto loc_82C3FAD4;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// cmplw cr6,r10,r28
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, xer);
	// ble cr6,0x82c3fb24
	if (!cr6.gt) goto loc_82C3FB24;
loc_82C3FAAC:
	// lwzx r6,r9,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// clrlwi r5,r31,16
	ctx.r5.u64 = ctx.r31.u32 & 0xFFFF;
	// cmplw cr6,r6,r5
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, xer);
	// bne cr6,0x82c3fac4
	if (!cr6.eq) goto loc_82C3FAC4;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r18,r31
	ctx.r18.u64 = ctx.r31.u64;
loc_82C3FAC4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82c3faac
	if (cr6.gt) goto loc_82C3FAAC;
loc_82C3FAD4:
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c3fb74
	if (!cr6.eq) goto loc_82C3FB74;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// li r3,21
	ctx.r3.s64 = 21;
	// bl 0x82f04c50
	ctx.lr = 0x82C3FAFC;
	sub_82F04C50(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// beq cr6,0x82c3fb5c
	if (cr6.eq) goto loc_82C3FB5C;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// srawi. r10,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82c3fb30
	if (!cr0.eq) goto loc_82C3FB30;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C3FB24;
	sub_831CC188(ctx, base);
loc_82C3FB24:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C3FB30;
	sub_831CC188(ctx, base);
loc_82C3FB30:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bne cr6,0x82c3fb5c
	if (!cr6.eq) goto loc_82C3FB5C;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r18,r31
	ctx.r18.u64 = ctx.r31.u64;
	// bl 0x82ab5f20
	ctx.lr = 0x82C3FB58;
	sub_82AB5F20(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_82C3FB5C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3fb68
	if (cr6.eq) goto loc_82C3FB68;
	// bl 0x82416268
	ctx.lr = 0x82C3FB68;
	sub_82416268(ctx, base);
loc_82C3FB68:
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
loc_82C3FB74:
	// lwz r11,136(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 136);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c3fb98
	if (!cr6.eq) goto loc_82C3FB98;
	// bl 0x82bdfa98
	ctx.lr = 0x82C3FB84;
	sub_82BDFA98(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// stw r11,136(r16)
	PPC_STORE_U32(ctx.r16.u32 + 136, ctx.r11.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x83103100
	ctx.lr = 0x82C3FB98;
	sub_83103100(ctx, base);
loc_82C3FB98:
	// bl 0x830ff290
	ctx.lr = 0x82C3FB9C;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r9,516
	ctx.r9.s64 = 33816576;
	// addi r11,r11,-11
	ctx.r11.s64 = ctx.r11.s64 + -11;
	// mr r23,r28
	ctx.r23.u64 = ctx.r28.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// rlwinm r20,r10,27,31,31
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r24,15
	ctx.r24.s64 = 15;
	// ori r19,r9,37
	ctx.r19.u64 = ctx.r9.u64 | 37;
	// li r17,2
	ctx.r17.s64 = 2;
	// addi r22,r11,-15984
	ctx.r22.s64 = ctx.r11.s64 + -15984;
	// addi r25,r10,20928
	ctx.r25.s64 = ctx.r10.s64 + 20928;
loc_82C3FBD0:
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x82d21408
	ctx.lr = 0x82C3FBE4;
	sub_82D21408(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x82d19aa8
	ctx.lr = 0x82C3FBF4;
	sub_82D19AA8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c40064
	if (cr6.eq) goto loc_82C40064;
	// lbz r11,98(r16)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r16.u32 + 98);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82c3fc24
	if (!cr6.eq) goto loc_82C3FC24;
	// cmplwi cr6,r23,9
	cr6.compare<uint32_t>(ctx.r23.u32, 9, xer);
	// beq cr6,0x82c3fc24
	if (cr6.eq) goto loc_82C3FC24;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2b608
	ctx.lr = 0x82C3FC24;
	sub_82D2B608(ctx, base);
loc_82C3FC24:
	// lwz r11,100(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// addi r31,r29,100
	ctx.r31.s64 = ctx.r29.s64 + 100;
	// lwz r4,-12(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + -12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C3FC40;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c3fc58
	if (cr6.eq) goto loc_82C3FC58;
	// addi r11,r25,-40
	ctx.r11.s64 = ctx.r25.s64 + -40;
	// rlwinm r10,r23,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d29598
	ctx.lr = 0x82C3FC58;
	sub_82D29598(ctx, base);
loc_82C3FC58:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r10,r22,40
	ctx.r10.s64 = ctx.r22.s64 + 40;
	// rlwinm r30,r23,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwzx r4,r30,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C3FC7C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-8(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + -8);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82C3FC94;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c40064
	if (cr6.eq) goto loc_82C40064;
	// cmplwi cr6,r23,1
	cr6.compare<uint32_t>(ctx.r23.u32, 1, xer);
	// bne cr6,0x82c3fd20
	if (!cr6.eq) goto loc_82C3FD20;
	// addi r31,r25,-180
	ctx.r31.s64 = ctx.r25.s64 + -180;
	// li r30,14
	ctx.r30.s64 = 14;
loc_82C3FCB0:
	// stw r24,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r24.u32);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// stw r28,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r28.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stb r28,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r28.u8);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82d042a8
	ctx.lr = 0x82C3FCCC;
	sub_82D042A8(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82c3fce0
	if (!cr6.lt) goto loc_82C3FCE0;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
loc_82C3FCE0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d3b548
	ctx.lr = 0x82C3FCE8;
	sub_82D3B548(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c3fd04
	if (cr6.lt) goto loc_82C3FD04;
	// stw r17,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r17.u32);
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x825952b8
	ctx.lr = 0x82C3FD04;
	sub_825952B8(ctx, base);
loc_82C3FD04:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r24,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r24.u32);
	// stw r28,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r28.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// stb r28,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r28.u8);
	// bne 0x82c3fcb0
	if (!cr0.eq) goto loc_82C3FCB0;
	// b 0x82c3fe08
	goto loc_82C3FE08;
loc_82C3FD20:
	// cmplwi cr6,r23,9
	cr6.compare<uint32_t>(ctx.r23.u32, 9, xer);
	// bne cr6,0x82c3fdf4
	if (!cr6.eq) goto loc_82C3FDF4;
	// stw r24,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r24.u32);
	// addi r4,r25,-582
	ctx.r4.s64 = ctx.r25.s64 + -582;
	// stw r28,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r28.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r28,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r28.u8);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8259cc28
	ctx.lr = 0x82C3FD44;
	sub_8259CC28(ctx, base);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi. r11,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82c3fdc8
	if (cr0.eq) goto loc_82C3FDC8;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// ble cr6,0x82c40138
	if (!cr6.gt) goto loc_82C40138;
loc_82C3FD68:
	// lwzx r11,r30,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// clrlwi r15,r11,16
	ctx.r15.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x82f048a8
	ctx.lr = 0x82C3FD7C;
	sub_82F048A8(ctx, base);
	// clrlwi r10,r18,16
	ctx.r10.u64 = ctx.r18.u32 & 0xFFFF;
	// cmplw cr6,r15,r10
	cr6.compare<uint32_t>(ctx.r15.u32, ctx.r10.u32, xer);
	// bne cr6,0x82c3fd8c
	if (!cr6.eq) goto loc_82C3FD8C;
	// stw r31,116(r16)
	PPC_STORE_U32(ctx.r16.u32 + 116, ctx.r31.u32);
loc_82C3FD8C:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82c3fda0
	if (!cr6.lt) goto loc_82C3FDA0;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
loc_82C3FDA0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d3b548
	ctx.lr = 0x82C3FDA8;
	sub_82D3B548(ctx, base);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// bgt cr6,0x82c3fd68
	if (cr6.gt) goto loc_82C3FD68;
loc_82C3FDC8:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c3fde4
	if (cr6.lt) goto loc_82C3FDE4;
	// stw r17,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r17.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x825952b8
	ctx.lr = 0x82C3FDE4;
	sub_825952B8(ctx, base);
loc_82C3FDE4:
	// stw r24,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r24.u32);
	// stw r28,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r28.u32);
	// stb r28,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r28.u8);
	// b 0x82c3fe08
	goto loc_82C3FE08;
loc_82C3FDF4:
	// addi r11,r25,40
	ctx.r11.s64 = ctx.r25.s64 + 40;
	// lwzx r4,r30,r22
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r22.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwzx r5,r30,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x82d3b6a0
	ctx.lr = 0x82C3FE08;
	sub_82D3B6A0(ctx, base);
loc_82C3FE08:
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// cmplwi cr6,r23,9
	cr6.compare<uint32_t>(ctx.r23.u32, 9, xer);
	// bgt cr6,0x82c40058
	if (cr6.gt) goto loc_82C40058;
	// lis r12,-32060
	ctx.r12.s64 = -2101084160;
	// rlwinm r0,r23,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-468
	ctx.r12.s64 = ctx.r12.s64 + -468;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r23.u32) {
	case 0:
		goto loc_82C3FE54;
	case 1:
		goto loc_82C3FE64;
	case 2:
		goto loc_82C3FFB8;
	case 3:
		goto loc_82C3FFEC;
	case 4:
		goto loc_82C40020;
	case 5:
		goto loc_82C3FEE8;
	case 6:
		goto loc_82C3FF40;
	case 7:
		goto loc_82C3FF7C;
	case 8:
		goto loc_82C3FF30;
	case 9:
		goto loc_82C40030;
	default:
		return;
	}
	// lwz r22,-428(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + -428);
	// lwz r22,-412(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + -412);
	// lwz r22,-72(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + -72);
	// lwz r22,-20(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + -20);
	// lwz r22,32(r4)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// lwz r22,-280(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + -280);
	// lwz r22,-192(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + -192);
	// lwz r22,-132(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + -132);
	// lwz r22,-208(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + -208);
	// lwz r22,48(r4)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
loc_82C3FE54:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x825832f0
	ctx.lr = 0x82C3FE5C;
	sub_825832F0(ctx, base);
	// clrlwi r31,r3,24
	ctx.r31.u64 = ctx.r3.u32 & 0xFF;
	// b 0x82c40058
	goto loc_82C40058;
loc_82C3FE64:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82dab678
	ctx.lr = 0x82C3FE6C;
	sub_82DAB678(ctx, base);
	// clrlwi r11,r20,24
	ctx.r11.u64 = ctx.r20.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c3fe94
	if (cr6.eq) goto loc_82C3FE94;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r31,10
	ctx.r31.s64 = 10;
	// bl 0x82d2b608
	ctx.lr = 0x82C3FE94;
	sub_82D2B608(ctx, base);
loc_82C3FE94:
	// addi r11,r25,-180
	ctx.r11.s64 = ctx.r25.s64 + -180;
	// li r8,14
	ctx.r8.s64 = 14;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// clrlwi r7,r31,24
	ctx.r7.u64 = ctx.r31.u32 & 0xFF;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_82C3FEA8:
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r6
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, xer);
	// beq cr6,0x82c3fecc
	if (cr6.eq) goto loc_82C3FECC;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,56
	cr6.compare<uint32_t>(ctx.r10.u32, 56, xer);
	// blt cr6,0x82c3fea8
	if (cr6.lt) goto loc_82C3FEA8;
	// b 0x82c3fed0
	goto loc_82C3FED0;
loc_82C3FECC:
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
loc_82C3FED0:
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// addi r11,r11,-14
	ctx.r11.s64 = ctx.r11.s64 + -14;
	// subfic r11,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r31,r9,r8
	ctx.r31.u64 = ctx.r9.u64 & ctx.r8.u64;
	// b 0x82c40058
	goto loc_82C40058;
loc_82C3FEE8:
	// bl 0x830ff290
	ctx.lr = 0x82C3FEEC;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82C3FEF0;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,6
	cr6.compare<uint32_t>(ctx.r3.u32, 6, xer);
	// beq cr6,0x82c3ff20
	if (cr6.eq) goto loc_82C3FF20;
	// cmplwi cr6,r3,7
	cr6.compare<uint32_t>(ctx.r3.u32, 7, xer);
	// beq cr6,0x82c3ff20
	if (cr6.eq) goto loc_82C3FF20;
	// clrlwi r11,r20,24
	ctx.r11.u64 = ctx.r20.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c3ff20
	if (!cr6.eq) goto loc_82C3FF20;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82C3FF20;
	sub_82D2B608(ctx, base);
loc_82C3FF20:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x831237f8
	ctx.lr = 0x82C3FF28;
	sub_831237F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82c40058
	goto loc_82C40058;
loc_82C3FF30:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82dab6b8
	ctx.lr = 0x82C3FF38;
	sub_82DAB6B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82c40058
	goto loc_82C40058;
loc_82C3FF40:
	// lbz r11,96(r16)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r16.u32 + 96);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82c3ff68
	if (!cr6.eq) goto loc_82C3FF68;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82C3FF60;
	sub_82D2B608(ctx, base);
	// li r31,5
	ctx.r31.s64 = 5;
	// b 0x82c40058
	goto loc_82C40058;
loc_82C3FF68:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x831239a8
	ctx.lr = 0x82C3FF74;
	sub_831239A8(ctx, base);
	// clrlwi r31,r3,24
	ctx.r31.u64 = ctx.r3.u32 & 0xFF;
	// b 0x82c40058
	goto loc_82C40058;
loc_82C3FF7C:
	// lbz r11,96(r16)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r16.u32 + 96);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82c3ffa4
	if (!cr6.eq) goto loc_82C3FFA4;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82C3FF9C;
	sub_82D2B608(ctx, base);
	// li r31,5
	ctx.r31.s64 = 5;
	// b 0x82c40058
	goto loc_82C40058;
loc_82C3FFA4:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x831239a8
	ctx.lr = 0x82C3FFB0;
	sub_831239A8(ctx, base);
	// clrlwi r31,r3,24
	ctx.r31.u64 = ctx.r3.u32 & 0xFF;
	// b 0x82c40058
	goto loc_82C40058;
loc_82C3FFB8:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x83123830
	ctx.lr = 0x82C3FFC0;
	sub_83123830(ctx, base);
	// clrlwi r11,r20,24
	ctx.r11.u64 = ctx.r20.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c40058
	if (cr6.eq) goto loc_82C40058;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82C3FFE8;
	sub_82D2B608(ctx, base);
	// b 0x82c40058
	goto loc_82C40058;
loc_82C3FFEC:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x83123858
	ctx.lr = 0x82C3FFF4;
	sub_83123858(ctx, base);
	// clrlwi r11,r20,24
	ctx.r11.u64 = ctx.r20.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c40058
	if (cr6.eq) goto loc_82C40058;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82C4001C;
	sub_82D2B608(ctx, base);
	// b 0x82c40058
	goto loc_82C40058;
loc_82C40020:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x83123868
	ctx.lr = 0x82C40028;
	sub_83123868(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82c40058
	goto loc_82C40058;
loc_82C40030:
	// lbz r11,97(r16)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r16.u32 + 97);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c40050
	if (!cr6.eq) goto loc_82C40050;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82C40050;
	sub_82D2B608(ctx, base);
loc_82C40050:
	// lwz r11,116(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 116);
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
loc_82C40058:
	// clrlwi r4,r31,24
	ctx.r4.u64 = ctx.r31.u32 & 0xFF;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d3b298
	ctx.lr = 0x82C40064;
	sub_82D3B298(ctx, base);
loc_82C40064:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// cmplwi cr6,r23,10
	cr6.compare<uint32_t>(ctx.r23.u32, 10, xer);
	// blt cr6,0x82c3fbd0
	if (cr6.lt) goto loc_82C3FBD0;
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// li r30,10
	ctx.r30.s64 = 10;
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
loc_82C40084:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// stw r24,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r24.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r28,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r28.u32);
	// stb r28,228(r1)
	PPC_STORE_U8(ctx.r1.u32 + 228, ctx.r28.u8);
	// stw r11,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// bl 0x830f6558
	ctx.lr = 0x82C400A4;
	sub_830F6558(ctx, base);
	// lwz r10,248(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82c400c0
	if (cr6.lt) goto loc_82C400C0;
	// stw r17,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r17.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// lwz r4,228(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// bl 0x825952b8
	ctx.lr = 0x82C400C0;
	sub_825952B8(ctx, base);
loc_82C400C0:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r24,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r24.u32);
	// stw r28,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r28.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// stb r28,228(r1)
	PPC_STORE_U8(ctx.r1.u32 + 228, ctx.r28.u8);
	// bne 0x82c40084
	if (!cr0.eq) goto loc_82C40084;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x82d24c38
	ctx.lr = 0x82C400E8;
	sub_82D24C38(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C400F8;
	sub_82D19788(ctx, base);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x82c3f598
	ctx.lr = 0x82C40100;
	sub_82C3F598(ctx, base);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c4012c
	if (cr6.eq) goto loc_82C4012C;
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x830f6290
	ctx.lr = 0x82C4011C;
	sub_830F6290(ctx, base);
	// stw r17,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r17.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x82C4012C;
	sub_825952B8(ctx, base);
loc_82C4012C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb04
	__restgprlr_15(ctx, base);
	return;
loc_82C40138:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C40144;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82C40144"))) PPC_WEAK_FUNC(sub_82C40144);
PPC_FUNC_IMPL(__imp__sub_82C40144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C40148"))) PPC_WEAK_FUNC(sub_82C40148);
PPC_FUNC_IMPL(__imp__sub_82C40148) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82C40150;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-31760
	ctx.r27.s64 = -2081423360;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,11868(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11868);
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// bl 0x82d19aa8
	ctx.lr = 0x82C40170;
	sub_82D19AA8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r30,-31776
	ctx.r30.s64 = -2082471936;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r4,-15760(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -15760);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C40190;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r28,-31760
	ctx.r28.s64 = -2081423360;
	// lwz r4,11864(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 11864);
	// bl 0x82d3b298
	ctx.lr = 0x82C4019C;
	sub_82D3B298(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d19aa8
	ctx.lr = 0x82C401AC;
	sub_82D19AA8(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r4,-15760(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -15760);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C401C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r29,-31760
	ctx.r29.s64 = -2081423360;
	// lwz r4,11860(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11860);
	// bl 0x82d3b298
	ctx.lr = 0x82C401D0;
	sub_82D3B298(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19aa8
	ctx.lr = 0x82C401E0;
	sub_82D19AA8(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r4,-15760(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -15760);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82C401F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r30,-31760
	ctx.r30.s64 = -2081423360;
	// lwz r4,11856(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11856);
	// bl 0x82d3b298
	ctx.lr = 0x82C40204;
	sub_82D3B298(ctx, base);
	// lwz r11,11856(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11856);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,11856(r30)
	PPC_STORE_U32(ctx.r30.u32 + 11856, ctx.r11.u32);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x82c4027c
	if (!cr6.eq) goto loc_82C4027C;
	// lwz r11,11860(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11860);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,11856(r30)
	PPC_STORE_U32(ctx.r30.u32 + 11856, ctx.r10.u32);
	// stw r11,11860(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11860, ctx.r11.u32);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x82c4027c
	if (!cr6.eq) goto loc_82C4027C;
	// lwz r11,11864(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 11864);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,11860(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11860, ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,11864(r28)
	PPC_STORE_U32(ctx.r28.u32 + 11864, ctx.r11.u32);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x82c40280
	if (!cr6.eq) goto loc_82C40280;
	// lwz r11,11868(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11868);
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,11864(r28)
	PPC_STORE_U32(ctx.r28.u32 + 11864, ctx.r10.u32);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// subfic r7,r8,0
	xer.ca = ctx.r8.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r8.s64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 & ctx.r11.u64;
	// stw r11,11868(r27)
	PPC_STORE_U32(ctx.r27.u32 + 11868, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82C4027C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82C40280:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C40288"))) PPC_WEAK_FUNC(sub_82C40288);
PPC_FUNC_IMPL(__imp__sub_82C40288) {
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
	// bl 0x82c3a610
	ctx.lr = 0x82C402A0;
	sub_82C3A610(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c402b0
	if (!cr6.eq) goto loc_82C402B0;
	// bl 0x82c3a540
	ctx.lr = 0x82C402B0;
	sub_82C3A540(ctx, base);
loc_82C402B0:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19858
	ctx.lr = 0x82C402BC;
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

__attribute__((alias("__imp__sub_82C402D0"))) PPC_WEAK_FUNC(sub_82C402D0);
PPC_FUNC_IMPL(__imp__sub_82C402D0) {
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82c403b8
	if (!cr6.eq) goto loc_82C403B8;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82c40370
	if (!cr6.eq) goto loc_82C40370;
	// bl 0x82d19aa8
	ctx.lr = 0x82C402F8;
	sub_82D19AA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c403b8
	if (cr6.eq) goto loc_82C403B8;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,-15760(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -15760);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C4031C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c403b8
	if (cr6.eq) goto loc_82C403B8;
	// bl 0x83a970c8
	ctx.lr = 0x82C40328;
	sub_83A970C8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// addi r9,r11,21716
	ctx.r9.s64 = ctx.r11.s64 + 21716;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// ori r8,r10,4131
	ctx.r8.u64 = ctx.r10.u64 | 4131;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r7,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r7.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103068
	ctx.lr = 0x82C4035C;
	sub_83103068(ctx, base);
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
loc_82C40370:
	// cmplwi cr6,r5,5
	cr6.compare<uint32_t>(ctx.r5.u32, 5, xer);
	// bne cr6,0x82c403b8
	if (!cr6.eq) goto loc_82C403B8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19aa8
	ctx.lr = 0x82C40384;
	sub_82D19AA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c403b8
	if (cr6.eq) goto loc_82C403B8;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,-15760(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -15760);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C403A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c403b8
	if (cr6.eq) goto loc_82C403B8;
	// bl 0x83a970c8
	ctx.lr = 0x82C403B4;
	sub_83A970C8(ctx, base);
	// stw r3,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r3.u32);
loc_82C403B8:
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

__attribute__((alias("__imp__sub_82C403CC"))) PPC_WEAK_FUNC(sub_82C403CC);
PPC_FUNC_IMPL(__imp__sub_82C403CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C403D0"))) PPC_WEAK_FUNC(sub_82C403D0);
PPC_FUNC_IMPL(__imp__sub_82C403D0) {
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
	ctx.lr = 0x82C403E0;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82C403E4;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,19
	cr6.compare<uint32_t>(ctx.r3.u32, 19, xer);
	// bne cr6,0x82c40400
	if (!cr6.eq) goto loc_82C40400;
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
loc_82C40400:
	// cmplwi cr6,r3,6
	cr6.compare<uint32_t>(ctx.r3.u32, 6, xer);
	// beq cr6,0x82c40438
	if (cr6.eq) goto loc_82C40438;
	// cmplwi cr6,r3,7
	cr6.compare<uint32_t>(ctx.r3.u32, 7, xer);
	// beq cr6,0x82c40438
	if (cr6.eq) goto loc_82C40438;
	// cmplwi cr6,r3,14
	cr6.compare<uint32_t>(ctx.r3.u32, 14, xer);
	// beq cr6,0x82c40438
	if (cr6.eq) goto loc_82C40438;
	// cmplwi cr6,r3,26
	cr6.compare<uint32_t>(ctx.r3.u32, 26, xer);
	// beq cr6,0x82c40438
	if (cr6.eq) goto loc_82C40438;
	// bl 0x830ff290
	ctx.lr = 0x82C40424;
	sub_830FF290(ctx, base);
	// bl 0x830ff948
	ctx.lr = 0x82C40428;
	sub_830FF948(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c4043c
	if (cr6.eq) goto loc_82C4043C;
loc_82C40438:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82C4043C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C4044C"))) PPC_WEAK_FUNC(sub_82C4044C);
PPC_FUNC_IMPL(__imp__sub_82C4044C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C40450"))) PPC_WEAK_FUNC(sub_82C40450);
PPC_FUNC_IMPL(__imp__sub_82C40450) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82C40458;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,160(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 160);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x82c40610
	if (cr6.eq) goto loc_82C40610;
	// bl 0x831156e8
	ctx.lr = 0x82C40470;
	sub_831156E8(ctx, base);
	// lwz r11,120(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 120);
	// lwz r9,124(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 124);
	// lwz r7,52(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// lwz r10,104(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// addis r31,r7,5
	ctx.r31.s64 = ctx.r7.s64 + 327680;
	// srawi r6,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 2;
	// addi r31,r31,14904
	ctx.r31.s64 = ctx.r31.s64 + 14904;
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82c404a4
	if (cr6.gt) goto loc_82C404A4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C404A4;
	sub_831CC188(ctx, base);
loc_82C404A4:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// clrlwi r4,r9,24
	ctx.r4.u64 = ctx.r9.u32 & 0xFF;
	// bl 0x83123890
	ctx.lr = 0x82C404B8;
	sub_83123890(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19aa8
	ctx.lr = 0x82C404C8;
	sub_82D19AA8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82d2b038
	ctx.lr = 0x82C404D0;
	sub_82D2B038(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// lis r30,-31776
	ctx.r30.s64 = -2082471936;
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x82c40508
	if (!cr6.eq) goto loc_82C40508;
	// lwz r11,100(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// addi r3,r28,100
	ctx.r3.s64 = ctx.r28.s64 + 100;
	// lwz r4,-15760(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -15760);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C404F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x83a970c8
	ctx.lr = 0x82C404FC;
	sub_83A970C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a47360
	ctx.lr = 0x82C40508;
	sub_82A47360(ctx, base);
loc_82C40508:
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19aa8
	ctx.lr = 0x82C40518;
	sub_82D19AA8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82d2b038
	ctx.lr = 0x82C40520;
	sub_82D2B038(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82c40554
	if (!cr6.eq) goto loc_82C40554;
	// lwz r11,100(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// addi r3,r28,100
	ctx.r3.s64 = ctx.r28.s64 + 100;
	// lwz r4,-15760(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -15760);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C40544;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x83a970c8
	ctx.lr = 0x82C40548;
	sub_83A970C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831340b8
	ctx.lr = 0x82C40554;
	sub_831340B8(ctx, base);
loc_82C40554:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19aa8
	ctx.lr = 0x82C40564;
	sub_82D19AA8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82d2b038
	ctx.lr = 0x82C4056C;
	sub_82D2B038(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82c405a0
	if (!cr6.eq) goto loc_82C405A0;
	// lwz r11,100(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// addi r3,r28,100
	ctx.r3.s64 = ctx.r28.s64 + 100;
	// lwz r4,-15760(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -15760);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C40590;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x83a970c8
	ctx.lr = 0x82C40594;
	sub_83A970C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831238a8
	ctx.lr = 0x82C405A0;
	sub_831238A8(ctx, base);
loc_82C405A0:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19aa8
	ctx.lr = 0x82C405B0;
	sub_82D19AA8(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r4,-15760(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -15760);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C405C8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x83a970c8
	ctx.lr = 0x82C405CC;
	sub_83A970C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82583318
	ctx.lr = 0x82C405D8;
	sub_82583318(ctx, base);
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19aa8
	ctx.lr = 0x82C405E8;
	sub_82D19AA8(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r4,-15760(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -15760);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C40600;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x83a970c8
	ctx.lr = 0x82C40604;
	sub_83A970C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82583320
	ctx.lr = 0x82C40610;
	sub_82583320(ctx, base);
loc_82C40610:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C40618"))) PPC_WEAK_FUNC(sub_82C40618);
PPC_FUNC_IMPL(__imp__sub_82C40618) {
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
	// lis r11,264
	ctx.r11.s64 = 17301504;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// ori r9,r11,20480
	ctx.r9.u64 = ctx.r11.u64 | 20480;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82c4063c
	if (!cr6.eq) goto loc_82C4063C;
	// bl 0x82c40450
	ctx.lr = 0x82C4063C;
	sub_82C40450(ctx, base);
loc_82C4063C:
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

__attribute__((alias("__imp__sub_82C40650"))) PPC_WEAK_FUNC(sub_82C40650);
PPC_FUNC_IMPL(__imp__sub_82C40650) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82C40658;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x82c406f8
	if (!cr6.eq) goto loc_82C406F8;
	// stw r4,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r4.u32);
	// bl 0x82d19a78
	ctx.lr = 0x82C40678;
	sub_82D19A78(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r9,100(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r4,-15768(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -15768);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C40698;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d39d50
	ctx.lr = 0x82C406A4;
	sub_82D39D50(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d39cd0
	ctx.lr = 0x82C406AC;
	sub_82D39CD0(ctx, base);
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r7,124(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// srawi r5,r6,2
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 2;
	// cmplw cr6,r5,r30
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r30.u32, xer);
	// bgt cr6,0x82c406d0
	if (cr6.gt) goto loc_82C406D0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C406D0;
	sub_831CC188(ctx, base);
loc_82C406D0:
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,156(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmplw cr6,r30,r9
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, xer);
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r8,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r8.u32);
	// bne cr6,0x82c406f0
	if (!cr6.eq) goto loc_82C406F0;
	// li r11,253
	ctx.r11.s64 = 253;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
loc_82C406F0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_82C406F8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C40700"))) PPC_WEAK_FUNC(sub_82C40700);
PPC_FUNC_IMPL(__imp__sub_82C40700) {
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
	// bl 0x82c40450
	ctx.lr = 0x82C40718;
	sub_82C40450(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,160(r31)
	PPC_STORE_U8(ctx.r31.u32 + 160, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82C40738"))) PPC_WEAK_FUNC(sub_82C40738);
PPC_FUNC_IMPL(__imp__sub_82C40738) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82C40740;
	__savegprlr_22(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C40750;
	sub_82D19A78(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// addi r24,r11,22152
	ctx.r24.s64 = ctx.r11.s64 + 22152;
	// addi r4,r24,-44
	ctx.r4.s64 = ctx.r24.s64 + -44;
	// bl 0x82d2f098
	ctx.lr = 0x82C40764;
	sub_82D2F098(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c40804
	if (cr6.eq) goto loc_82C40804;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r24,-36
	ctx.r4.s64 = ctx.r24.s64 + -36;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C4078C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c40804
	if (cr6.eq) goto loc_82C40804;
	// lwz r11,140(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 140);
	// li r10,28
	ctx.r10.s64 = 28;
	// lwz r9,144(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 144);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r7,r8,r10
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	// cmplw cr6,r7,r23
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r23.u32, xer);
	// bgt cr6,0x82c407c0
	if (cr6.gt) goto loc_82C407C0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C407C0;
	sub_831CC188(ctx, base);
loc_82C407C0:
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// stb r25,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r25.u8);
	// mulli r10,r23,28
	ctx.r10.s64 = ctx.r23.s64 * 28;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259cb28
	ctx.lr = 0x82C407E8;
	sub_8259CB28(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82C407FC;
	sub_82D291E0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82C40804;
	sub_8387E8E0(ctx, base);
loc_82C40804:
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82c409a0
	if (cr6.eq) goto loc_82C409A0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82C4081C;
	sub_82D33DB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r28,-31776
	ctx.r28.s64 = -2082471936;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c40928
	if (cr6.eq) goto loc_82C40928;
	// bl 0x830ff290
	ctx.lr = 0x82C40830;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82C40834;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,8
	cr6.compare<uint32_t>(ctx.r3.u32, 8, xer);
	// beq cr6,0x82c40914
	if (cr6.eq) goto loc_82C40914;
	// cmplwi cr6,r3,11
	cr6.compare<uint32_t>(ctx.r3.u32, 11, xer);
	// beq cr6,0x82c40914
	if (cr6.eq) goto loc_82C40914;
	// cmplwi cr6,r3,12
	cr6.compare<uint32_t>(ctx.r3.u32, 12, xer);
	// beq cr6,0x82c40914
	if (cr6.eq) goto loc_82C40914;
	// cmplwi cr6,r3,9
	cr6.compare<uint32_t>(ctx.r3.u32, 9, xer);
	// beq cr6,0x82c40914
	if (cr6.eq) goto loc_82C40914;
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// addi r3,r30,100
	ctx.r3.s64 = ctx.r30.s64 + 100;
	// lwz r4,-15760(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + -15760);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C4086C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c40928
	if (cr6.eq) goto loc_82C40928;
	// bl 0x83a970c8
	ctx.lr = 0x82C4087C;
	sub_83A970C8(ctx, base);
	// lwz r9,124(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 124);
	// lwz r11,120(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 120);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r10,104(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 104);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r9,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82c408b8
	if (cr6.gt) goto loc_82C408B8;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82c408b0
	if (!cr6.eq) goto loc_82C408B0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C408B0;
	sub_831CC188(ctx, base);
loc_82C408B0:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82c408c0
	goto loc_82C408C0;
loc_82C408B8:
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
loc_82C408C0:
	// cmplwi cr6,r8,39
	cr6.compare<uint32_t>(ctx.r8.u32, 39, xer);
	// beq cr6,0x82c40904
	if (cr6.eq) goto loc_82C40904;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82c408ec
	if (cr6.gt) goto loc_82C408EC;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82c408e4
	if (!cr6.eq) goto loc_82C408E4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C408E4;
	sub_831CC188(ctx, base);
loc_82C408E4:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82c408f4
	goto loc_82C408F4;
loc_82C408EC:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_82C408F4:
	// cmplwi cr6,r11,50
	cr6.compare<uint32_t>(ctx.r11.u32, 50, xer);
	// beq cr6,0x82c40904
	if (cr6.eq) goto loc_82C40904;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82c40918
	goto loc_82C40918;
loc_82C40904:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// bl 0x82d3b298
	ctx.lr = 0x82C40914;
	sub_82D3B298(ctx, base);
loc_82C40914:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82C40918:
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82C40928;
	sub_82D2B608(ctx, base);
loc_82C40928:
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82C40934;
	sub_82D33DB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c409a0
	if (cr6.eq) goto loc_82C409A0;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r4,-15760(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + -15760);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C40958;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c409a0
	if (cr6.eq) goto loc_82C409A0;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// bne cr6,0x82c40978
	if (!cr6.eq) goto loc_82C40978;
	// lwz r4,116(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 116);
	// bl 0x82d3b298
	ctx.lr = 0x82C40970;
	sub_82D3B298(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82c40990
	goto loc_82C40990;
loc_82C40978:
	// cmplwi cr6,r27,1
	cr6.compare<uint32_t>(ctx.r27.u32, 1, xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x82c40988
	if (cr6.eq) goto loc_82C40988;
	// li r4,3
	ctx.r4.s64 = 3;
loc_82C40988:
	// bl 0x82d3b298
	ctx.lr = 0x82C4098C;
	sub_82D3B298(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
loc_82C40990:
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82C409A0;
	sub_82D2B608(ctx, base);
loc_82C409A0:
	// addi r4,r24,-24
	ctx.r4.s64 = ctx.r24.s64 + -24;
	// addi r3,r22,100
	ctx.r3.s64 = ctx.r22.s64 + 100;
	// bl 0x82d2e228
	ctx.lr = 0x82C409AC;
	sub_82D2E228(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c40a2c
	if (cr6.eq) goto loc_82C40A2C;
	// lwz r11,100(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 100);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82c409d4
	if (!cr6.eq) goto loc_82C409D4;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82C409CC;
	sub_82D2AEC8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_82C409D4:
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// addi r4,r24,-16
	ctx.r4.s64 = ctx.r24.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C409F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c40a04
	if (cr6.eq) goto loc_82C40A04;
	// addi r11,r23,1
	ctx.r11.s64 = ctx.r23.s64 + 1;
	// clrldi r4,r11,32
	ctx.r4.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// bl 0x82d294d0
	ctx.lr = 0x82C40A04;
	sub_82D294D0(ctx, base);
loc_82C40A04:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C40A1C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c40a2c
	if (cr6.eq) goto loc_82C40A2C;
	// lwz r4,100(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 100);
	// bl 0x82d294d0
	ctx.lr = 0x82C40A2C;
	sub_82D294D0(ctx, base);
loc_82C40A2C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C40A34"))) PPC_WEAK_FUNC(sub_82C40A34);
PPC_FUNC_IMPL(__imp__sub_82C40A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C40A38"))) PPC_WEAK_FUNC(sub_82C40A38);
PPC_FUNC_IMPL(__imp__sub_82C40A38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82C40A40;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,104(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82c40738
	ctx.lr = 0x82C40A50;
	sub_82C40738(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x82c40a7c
	if (!cr6.eq) goto loc_82C40A7C;
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// beq cr6,0x82c40a7c
	if (cr6.eq) goto loc_82C40A7C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c40650
	ctx.lr = 0x82C40A74;
	sub_82C40650(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82C40A7C:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82c40b14
	if (cr6.lt) goto loc_82C40B14;
	// beq cr6,0x82c40af0
	if (cr6.eq) goto loc_82C40AF0;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x82c40b34
	if (!cr6.lt) goto loc_82C40B34;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C40A98;
	sub_82D19A78(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r9,100(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r4,-15768(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -15768);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C40AB8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82bdf720
	ctx.lr = 0x82C40AC8;
	sub_82BDF720(ctx, base);
	// lwz r7,112(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82C40AE0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r6,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r6.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82C40AF0:
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// bl 0x82bdf6a0
	ctx.lr = 0x82C40AF8;
	sub_82BDF6A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c40b34
	if (cr6.eq) goto loc_82C40B34;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82C40B14:
	// lwz r4,112(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// bl 0x82be0218
	ctx.lr = 0x82C40B20;
	sub_82BE0218(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c40b34
	if (cr6.eq) goto loc_82C40B34;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_82C40B34:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

