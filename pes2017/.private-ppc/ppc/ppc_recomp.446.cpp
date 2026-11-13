#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_837F2534"))) PPC_WEAK_FUNC(sub_837F2534);
PPC_FUNC_IMPL(__imp__sub_837F2534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837F2538"))) PPC_WEAK_FUNC(sub_837F2538);
PPC_FUNC_IMPL(__imp__sub_837F2538) {
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
	// bl 0x837f2068
	ctx.lr = 0x837F2558;
	sub_837F2068(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f2570
	if (cr6.eq) goto loc_837F2570;
	// bl 0x82416268
	ctx.lr = 0x837F256C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_837F2570:
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

__attribute__((alias("__imp__sub_837F2588"))) PPC_WEAK_FUNC(sub_837F2588);
PPC_FUNC_IMPL(__imp__sub_837F2588) {
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
	// bl 0x837f24a0
	ctx.lr = 0x837F25A8;
	sub_837F24A0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f25c0
	if (cr6.eq) goto loc_837F25C0;
	// bl 0x82416268
	ctx.lr = 0x837F25BC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_837F25C0:
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

__attribute__((alias("__imp__sub_837F25D8"))) PPC_WEAK_FUNC(sub_837F25D8);
PPC_FUNC_IMPL(__imp__sub_837F25D8) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r30,r11,-6820
	ctx.r30.s64 = ctx.r11.s64 + -6820;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837F25FC;
	sub_82596FE8(ctx, base);
	// lis r31,-31743
	ctx.r31.s64 = -2080309248;
	// lwz r11,-6828(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -6828);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837f2664
	if (!cr6.eq) goto loc_837F2664;
	// li r11,33
	ctx.r11.s64 = 33;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,748
	ctx.r4.s64 = 748;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x837F2624;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837f264c
	if (cr6.eq) goto loc_837F264C;
	// bl 0x837f1770
	ctx.lr = 0x837F2630;
	sub_837F1770(ctx, base);
	// stw r3,-6828(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6828, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x837f2664
	if (!cr6.eq) goto loc_837F2664;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82597088
	ctx.lr = 0x837F2644;
	sub_82597088(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x837f2670
	goto loc_837F2670;
loc_837F264C:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,-6828(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6828, ctx.r11.u32);
	// bl 0x82597088
	ctx.lr = 0x837F265C;
	sub_82597088(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x837f2670
	goto loc_837F2670;
loc_837F2664:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82597088
	ctx.lr = 0x837F266C;
	sub_82597088(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_837F2670:
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

__attribute__((alias("__imp__sub_837F2688"))) PPC_WEAK_FUNC(sub_837F2688);
PPC_FUNC_IMPL(__imp__sub_837F2688) {
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
	// lis r31,-31743
	ctx.r31.s64 = -2080309248;
	// lwz r3,-6828(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -6828);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x837f26d8
	if (!cr6.eq) goto loc_837F26D8;
	// li r11,33
	ctx.r11.s64 = 33;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,748
	ctx.r4.s64 = 748;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x837F26C0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837f26d0
	if (cr6.eq) goto loc_837F26D0;
	// bl 0x837f1770
	ctx.lr = 0x837F26CC;
	sub_837F1770(ctx, base);
	// b 0x837f26d4
	goto loc_837F26D4;
loc_837F26D0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_837F26D4:
	// stw r3,-6828(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6828, ctx.r3.u32);
loc_837F26D8:
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

__attribute__((alias("__imp__sub_837F26EC"))) PPC_WEAK_FUNC(sub_837F26EC);
PPC_FUNC_IMPL(__imp__sub_837F26EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837F26F0"))) PPC_WEAK_FUNC(sub_837F26F0);
PPC_FUNC_IMPL(__imp__sub_837F26F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab4
	ctx.lr = 0x837F26F8;
	__savegprlr_15(ctx, base);
	// stwu r1,-2832(r1)
	ea = -2832 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r26,12(r4)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// mr r17,r4
	ctx.r17.u64 = ctx.r4.u64;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x837f3278
	if (cr6.eq) goto loc_837F3278;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x837f3278
	if (!cr6.lt) goto loc_837F3278;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x837f27b8
	if (!cr6.eq) goto loc_837F27B8;
	// lbz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// beq cr6,0x837f2770
	if (cr6.eq) goto loc_837F2770;
	// li r31,1
	ctx.r31.s64 = 1;
	// stb r31,160(r26)
	PPC_STORE_U8(ctx.r26.u32 + 160, ctx.r31.u8);
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x837f2758
	if (cr6.lt) goto loc_837F2758;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_837F2758:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r4,4(r18)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x837f0180
	ctx.lr = 0x837F2768;
	sub_837F0180(ctx, base);
	// stw r31,8(r18)
	PPC_STORE_U32(ctx.r18.u32 + 8, ctx.r31.u32);
	// b 0x837f27a0
	goto loc_837F27A0;
loc_837F2770:
	// stb r30,80(r26)
	PPC_STORE_U8(ctx.r26.u32 + 80, ctx.r30.u8);
	// lwz r10,36(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 36);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x837f2784
	if (cr6.lt) goto loc_837F2784;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_837F2784:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r4,4(r18)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x837f0060
	ctx.lr = 0x837F2794;
	sub_837F0060(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r30,52(r18)
	PPC_STORE_U32(ctx.r18.u32 + 52, ctx.r30.u32);
	// stw r11,8(r18)
	PPC_STORE_U32(ctx.r18.u32 + 8, ctx.r11.u32);
loc_837F27A0:
	// lwz r11,4(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// lwz r10,8(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 8);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// stw r11,4(r17)
	PPC_STORE_U32(ctx.r17.u32 + 4, ctx.r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x837f3278
	if (!cr6.lt) goto loc_837F3278;
loc_837F27B8:
	// lwz r10,8(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 8);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// beq cr6,0x837f2be0
	if (cr6.eq) goto loc_837F2BE0;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bne cr6,0x837f3278
	if (!cr6.eq) goto loc_837F3278;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r3,r26,4
	ctx.r3.s64 = ctx.r26.s64 + 4;
	// stw r11,4(r17)
	PPC_STORE_U32(ctx.r17.u32 + 4, ctx.r11.u32);
	// bl 0x837e5b10
	ctx.lr = 0x837F27DC;
	sub_837E5B10(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837f3278
	if (cr6.eq) goto loc_837F3278;
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// lwz r10,36(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 36);
	// addi r20,r18,16
	ctx.r20.s64 = ctx.r18.s64 + 16;
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// addi r9,r11,4700
	ctx.r9.s64 = ctx.r11.s64 + 4700;
	// stw r30,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r30.u32);
	// stw r30,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r30.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stw r9,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r9.u32);
	// stw r30,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r30.u32);
	// stw r30,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r30.u32);
	// stw r30,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r30.u32);
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// stw r30,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r30.u32);
	// stw r30,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r30.u32);
	// stw r30,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r30.u32);
	// stw r30,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r30.u32);
	// blt cr6,0x837f2838
	if (cr6.lt) goto loc_837F2838;
	// lwz r4,0(r20)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// b 0x837f283c
	goto loc_837F283C;
loc_837F2838:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
loc_837F283C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x837e8bf8
	ctx.lr = 0x837F2848;
	sub_837E8BF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x837efdf0
	ctx.lr = 0x837F2854;
	sub_837EFDF0(ctx, base);
	// lwz r21,308(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r11,12(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 12);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_837F2860:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x837f2860
	if (!cr6.eq) goto loc_837F2860;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bgt cr6,0x837f28a0
	if (cr6.gt) goto loc_837F28A0;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// lwz r3,44(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 44);
	// bl 0x837f1538
	ctx.lr = 0x837F2890;
	sub_837F1538(ctx, base);
	// lwz r11,4(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// stw r11,4(r17)
	PPC_STORE_U32(ctx.r17.u32 + 4, ctx.r11.u32);
	// b 0x837f2b90
	goto loc_837F2B90;
loc_837F28A0:
	// lwz r11,312(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	// li r10,15
	ctx.r10.s64 = 15;
	// lwz r27,52(r18)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r18.u32 + 52);
	// subf r9,r21,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r21.s64;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// srawi r22,r9,4
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r22.s64 = ctx.r9.s32 >> 4;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// cmplw cr6,r27,r22
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r22.u32, xer);
	// bge cr6,0x837f2b54
	if (!cr6.lt) goto loc_837F2B54;
	// rlwinm r11,r27,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r10,-32211
	ctx.r10.s64 = -2110980096;
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + ctx.r21.u64;
	// lis r9,-32211
	ctx.r9.s64 = -2110980096;
	// addi r29,r11,12
	ctx.r29.s64 = ctx.r11.s64 + 12;
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// lis r8,-32211
	ctx.r8.s64 = -2110980096;
	// addi r25,r11,4992
	ctx.r25.s64 = ctx.r11.s64 + 4992;
	// addi r24,r10,5008
	ctx.r24.s64 = ctx.r10.s64 + 5008;
	// addi r23,r9,5000
	ctx.r23.s64 = ctx.r9.s64 + 5000;
	// addi r28,r8,4984
	ctx.r28.s64 = ctx.r8.s64 + 4984;
loc_837F28F4:
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_837F28FC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837f28fc
	if (!cr6.eq) goto loc_837F28FC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r8,r11,-4
	ctx.r8.s64 = ctx.r11.s64 + -4;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_837F2928:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq cr6,0x837f294c
	if (cr6.eq) goto loc_837F294C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x837f2928
	if (cr6.eq) goto loc_837F2928;
loc_837F294C:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x837f2980
	if (!cr6.eq) goto loc_837F2980;
	// lwz r30,44(r18)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r18.u32 + 44);
	// lwz r4,-12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -12);
	// addi r31,r30,132
	ctx.r31.s64 = ctx.r30.s64 + 132;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837efdf0
	ctx.lr = 0x837F2968;
	sub_837EFDF0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x837f1538
	ctx.lr = 0x837F2974;
	sub_837F1538(ctx, base);
	// lwz r11,4(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
loc_837F2978:
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// b 0x837f2b28
	goto loc_837F2B28;
loc_837F2980:
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_837F2988:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq cr6,0x837f29ac
	if (cr6.eq) goto loc_837F29AC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x837f2988
	if (cr6.eq) goto loc_837F2988;
loc_837F29AC:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x837f2a08
	if (!cr6.eq) goto loc_837F2A08;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259d6c0
	ctx.lr = 0x837F29BC;
	sub_8259D6C0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837ea4e0
	ctx.lr = 0x837F29C8;
	sub_837EA4E0(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r6,-12(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + -12);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x837f29e0
	if (!cr6.lt) goto loc_837F29E0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
loc_837F29E0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r7,-8(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + -8);
	// lwz r4,4(r18)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// bl 0x837f00f8
	ctx.lr = 0x837F29F0;
	sub_837F00F8(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// lwz r11,4(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// bne cr6,0x837f2b24
	if (!cr6.eq) goto loc_837F2B24;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// b 0x837f2b28
	goto loc_837F2B28;
loc_837F2A08:
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_837F2A10:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq cr6,0x837f2a34
	if (cr6.eq) goto loc_837F2A34;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x837f2a10
	if (cr6.eq) goto loc_837F2A10;
loc_837F2A34:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x837f2a8c
	if (!cr6.eq) goto loc_837F2A8C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259d6c0
	ctx.lr = 0x837F2A44;
	sub_8259D6C0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837ea720
	ctx.lr = 0x837F2A50;
	sub_837EA720(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x837f2a64
	if (!cr6.lt) goto loc_837F2A64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
loc_837F2A64:
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r4,4(r18)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x837f01e8
	ctx.lr = 0x837F2A74;
	sub_837F01E8(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// lwz r11,4(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// bne cr6,0x837f2978
	if (!cr6.eq) goto loc_837F2978;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// b 0x837f2b28
	goto loc_837F2B28;
loc_837F2A8C:
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_837F2A94:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x837f2ab8
	if (cr6.eq) goto loc_837F2AB8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x837f2a94
	if (cr6.eq) goto loc_837F2A94;
loc_837F2AB8:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x837f2b2c
	if (!cr6.eq) goto loc_837F2B2C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259d6c0
	ctx.lr = 0x837F2AC8;
	sub_8259D6C0(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f2ae0
	if (cr6.eq) goto loc_837F2AE0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837ea568
	ctx.lr = 0x837F2AE0;
	sub_837EA568(ctx, base);
loc_837F2AE0:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r6,-12(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + -12);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x837f2af8
	if (!cr6.lt) goto loc_837F2AF8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
loc_837F2AF8:
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r7,-8(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + -8);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,4(r18)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// bl 0x837f02e0
	ctx.lr = 0x837F2B0C;
	sub_837F02E0(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// lwz r11,4(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// bne cr6,0x837f2b24
	if (!cr6.eq) goto loc_837F2B24;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// b 0x837f2b28
	goto loc_837F2B28;
loc_837F2B24:
	// addi r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 9;
loc_837F2B28:
	// stw r11,4(r17)
	PPC_STORE_U32(ctx.r17.u32 + 4, ctx.r11.u32);
loc_837F2B2C:
	// lwz r11,4(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// lwz r10,8(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 8);
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x837f2b4c
	if (!cr6.lt) goto loc_837F2B4C;
	// cmplw cr6,r27,r22
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r22.u32, xer);
	// blt cr6,0x837f28f4
	if (cr6.lt) goto loc_837F28F4;
loc_837F2B4C:
	// cmplw cr6,r27,r22
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r22.u32, xer);
	// blt cr6,0x837f2bc4
	if (cr6.lt) goto loc_837F2BC4;
loc_837F2B54:
	// lwz r11,20(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 20);
	// lwz r5,0(r21)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837f2b6c
	if (cr6.lt) goto loc_837F2B6C;
	// lwz r4,0(r20)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// b 0x837f2b70
	goto loc_837F2B70;
loc_837F2B6C:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
loc_837F2B70:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r6,4(r21)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// bl 0x837e8c50
	ctx.lr = 0x837F2B7C;
	sub_837E8C50(ctx, base);
	// lwz r11,4(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// stw r11,4(r17)
	PPC_STORE_U32(ctx.r17.u32 + 4, ctx.r11.u32);
	// bl 0x8387e8e0
	ctx.lr = 0x837F2B90;
	sub_8387E8E0(ctx, base);
loc_837F2B90:
	// bl 0x837da198
	ctx.lr = 0x837F2B94;
	sub_837DA198(ctx, base);
	// lbz r11,11373(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11373);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f2bac
	if (cr6.eq) goto loc_837F2BAC;
	// lwz r11,44(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 44);
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// bl 0x837e2530
	ctx.lr = 0x837F2BAC;
	sub_837E2530(ctx, base);
loc_837F2BAC:
	// li r11,3
	ctx.r11.s64 = 3;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// stw r11,8(r18)
	PPC_STORE_U32(ctx.r18.u32 + 8, ctx.r11.u32);
	// bl 0x837f0b10
	ctx.lr = 0x837F2BBC;
	sub_837F0B10(ctx, base);
	// addi r1,r1,2832
	ctx.r1.s64 = ctx.r1.s64 + 2832;
	// b 0x831cdb04
	__restgprlr_15(ctx, base);
	return;
loc_837F2BC4:
	// stw r27,52(r18)
	PPC_STORE_U32(ctx.r18.u32 + 52, ctx.r27.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x837F2BD0;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x837f0b10
	ctx.lr = 0x837F2BD8;
	sub_837F0B10(ctx, base);
	// addi r1,r1,2832
	ctx.r1.s64 = ctx.r1.s64 + 2832;
	// b 0x831cdb04
	__restgprlr_15(ctx, base);
	return;
loc_837F2BE0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r31,r26,84
	ctx.r31.s64 = ctx.r26.s64 + 84;
	// stw r11,4(r17)
	PPC_STORE_U32(ctx.r17.u32 + 4, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837e5b10
	ctx.lr = 0x837F2BF4;
	sub_837E5B10(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837f3278
	if (cr6.eq) goto loc_837F3278;
	// lwz r10,36(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 36);
	// addi r11,r18,16
	ctx.r11.s64 = ctx.r18.s64 + 16;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x837f2c14
	if (cr6.lt) goto loc_837F2C14;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_837F2C14:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837e8a48
	ctx.lr = 0x837F2C20;
	sub_837E8A48(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837f3248
	if (cr6.eq) goto loc_837F3248;
	// addic. r11,r3,96
	xer.ca = ctx.r3.u32 > 4294967199;
	ctx.r11.s64 = ctx.r3.s64 + 96;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x837f3248
	if (cr0.eq) goto loc_837F3248;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x824e67a8
	ctx.lr = 0x837F2C3C;
	sub_824E67A8(ctx, base);
	// lwz r11,288(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r4,r11,200
	ctx.r4.s64 = ctx.r11.s64 + 200;
	// bl 0x837e47c0
	ctx.lr = 0x837F2C4C;
	sub_837E47C0(ctx, base);
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// lis r10,-32211
	ctx.r10.s64 = -2110980096;
	// lis r9,-32211
	ctx.r9.s64 = -2110980096;
	// lis r8,-32211
	ctx.r8.s64 = -2110980096;
	// lis r7,-32211
	ctx.r7.s64 = -2110980096;
	// lis r6,-32211
	ctx.r6.s64 = -2110980096;
	// lis r5,-32211
	ctx.r5.s64 = -2110980096;
	// lis r4,-32211
	ctx.r4.s64 = -2110980096;
	// li r20,-1
	ctx.r20.s64 = -1;
	// addi r27,r11,4964
	ctx.r27.s64 = ctx.r11.s64 + 4964;
	// addi r26,r10,4944
	ctx.r26.s64 = ctx.r10.s64 + 4944;
	// addi r25,r9,4924
	ctx.r25.s64 = ctx.r9.s64 + 4924;
	// addi r24,r8,4904
	ctx.r24.s64 = ctx.r8.s64 + 4904;
	// addi r23,r7,4884
	ctx.r23.s64 = ctx.r7.s64 + 4884;
	// addi r22,r6,4864
	ctx.r22.s64 = ctx.r6.s64 + 4864;
	// addi r21,r5,4848
	ctx.r21.s64 = ctx.r5.s64 + 4848;
	// addi r28,r4,4832
	ctx.r28.s64 = ctx.r4.s64 + 4832;
	// lwz r29,248(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// lwz r19,272(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
loc_837F2C98:
	// subf r11,r29,r20
	ctx.r11.s64 = ctx.r20.s64 - ctx.r29.s64;
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
	// beq cr6,0x837f3234
	if (cr6.eq) goto loc_837F3234;
	// lwz r11,280(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// rlwinm r31,r29,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// lwzx r16,r31,r11
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x8241f0a0
	ctx.lr = 0x837F2CC8;
	sub_8241F0A0(ctx, base);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82451bb8
	ctx.lr = 0x837F2CD8;
	sub_82451BB8(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// bl 0x82573280
	ctx.lr = 0x837F2CE0;
	sub_82573280(ctx, base);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82573c50
	ctx.lr = 0x837F2CEC;
	sub_82573C50(ctx, base);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x82573c50
	ctx.lr = 0x837F2CF4;
	sub_82573C50(ctx, base);
	// clrlwi r10,r16,24
	ctx.r10.u64 = ctx.r16.u32 & 0xFF;
	// lwz r11,280(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837f2d5c
	if (cr6.eq) goto loc_837F2D5C;
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x837e39d0
	ctx.lr = 0x837F2D0C;
	sub_837E39D0(ctx, base);
	// std r30,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r30.u64);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// bl 0x8241f040
	ctx.lr = 0x837F2D1C;
	sub_8241F040(ctx, base);
	// std r30,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r30.u64);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lwz r4,232(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// bl 0x8241f040
	ctx.lr = 0x837F2D2C;
	sub_8241F040(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// bl 0x8241f040
	ctx.lr = 0x837F2D38;
	sub_8241F040(ctx, base);
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x83806390
	ctx.lr = 0x837F2D44;
	sub_83806390(ctx, base);
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,44(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 44);
	// bl 0x837ea1f8
	ctx.lr = 0x837F2D54;
	sub_837EA1F8(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// b 0x837f321c
	goto loc_837F321C;
loc_837F2D5C:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// lwzx r16,r31,r11
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x8241f0a0
	ctx.lr = 0x837F2D6C;
	sub_8241F0A0(ctx, base);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x82451bb8
	ctx.lr = 0x837F2D7C;
	sub_82451BB8(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// bl 0x82573280
	ctx.lr = 0x837F2D84;
	sub_82573280(ctx, base);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x82573c50
	ctx.lr = 0x837F2D90;
	sub_82573C50(ctx, base);
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x82573c50
	ctx.lr = 0x837F2D98;
	sub_82573C50(ctx, base);
	// clrlwi r10,r16,24
	ctx.r10.u64 = ctx.r16.u32 & 0xFF;
	// lwz r11,280(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837f2e04
	if (cr6.eq) goto loc_837F2E04;
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x837e3a40
	ctx.lr = 0x837F2DB0;
	sub_837E3A40(ctx, base);
	// std r30,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r30.u64);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x8241f040
	ctx.lr = 0x837F2DC0;
	sub_8241F040(ctx, base);
	// std r30,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r30.u64);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// lwz r4,184(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// bl 0x8241f040
	ctx.lr = 0x837F2DD0;
	sub_8241F040(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x8241f040
	ctx.lr = 0x837F2DDC;
	sub_8241F040(ctx, base);
	// addi r3,r1,800
	ctx.r3.s64 = ctx.r1.s64 + 800;
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// bl 0x83808cf8
	ctx.lr = 0x837F2DE8;
	sub_83808CF8(ctx, base);
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,44(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 44);
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x837ecb88
	ctx.lr = 0x837F2DFC;
	sub_837ECB88(ctx, base);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// b 0x837f321c
	goto loc_837F321C;
loc_837F2E04:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwzx r16,r31,r11
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x8241f0a0
	ctx.lr = 0x837F2E14;
	sub_8241F0A0(ctx, base);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82451bb8
	ctx.lr = 0x837F2E24;
	sub_82451BB8(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// bl 0x82573280
	ctx.lr = 0x837F2E2C;
	sub_82573280(ctx, base);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82573c50
	ctx.lr = 0x837F2E38;
	sub_82573C50(ctx, base);
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x82573c50
	ctx.lr = 0x837F2E40;
	sub_82573C50(ctx, base);
	// clrlwi r10,r16,24
	ctx.r10.u64 = ctx.r16.u32 & 0xFF;
	// lwz r11,280(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837f2eac
	if (cr6.eq) goto loc_837F2EAC;
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x837e3ab0
	ctx.lr = 0x837F2E58;
	sub_837E3AB0(ctx, base);
	// std r30,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r30.u64);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x8241f040
	ctx.lr = 0x837F2E68;
	sub_8241F040(ctx, base);
	// std r30,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r30.u64);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// lwz r4,200(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// bl 0x8241f040
	ctx.lr = 0x837F2E78;
	sub_8241F040(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x8241f040
	ctx.lr = 0x837F2E84;
	sub_8241F040(ctx, base);
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// lwz r4,152(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// bl 0x83805e70
	ctx.lr = 0x837F2E90;
	sub_83805E70(ctx, base);
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,44(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 44);
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x837ea2b0
	ctx.lr = 0x837F2EA4;
	sub_837EA2B0(ctx, base);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// b 0x837f321c
	goto loc_837F321C;
loc_837F2EAC:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwzx r16,r31,r11
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// bl 0x8241f0a0
	ctx.lr = 0x837F2EBC;
	sub_8241F0A0(ctx, base);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x82451bb8
	ctx.lr = 0x837F2ECC;
	sub_82451BB8(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// bl 0x82573280
	ctx.lr = 0x837F2ED4;
	sub_82573280(ctx, base);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x82573c50
	ctx.lr = 0x837F2EE0;
	sub_82573C50(ctx, base);
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// bl 0x82573c50
	ctx.lr = 0x837F2EE8;
	sub_82573C50(ctx, base);
	// clrlwi r10,r16,24
	ctx.r10.u64 = ctx.r16.u32 & 0xFF;
	// lwz r11,280(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837f2f50
	if (cr6.eq) goto loc_837F2F50;
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x837e3b20
	ctx.lr = 0x837F2F00;
	sub_837E3B20(ctx, base);
	// std r30,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r30.u64);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8241f040
	ctx.lr = 0x837F2F10;
	sub_8241F040(ctx, base);
	// std r30,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r30.u64);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x8241f040
	ctx.lr = 0x837F2F20;
	sub_8241F040(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8241f040
	ctx.lr = 0x837F2F2C;
	sub_8241F040(ctx, base);
	// addi r3,r1,976
	ctx.r3.s64 = ctx.r1.s64 + 976;
	// lwz r4,168(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x83808730
	ctx.lr = 0x837F2F38;
	sub_83808730(ctx, base);
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,44(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 44);
	// bl 0x837ea398
	ctx.lr = 0x837F2F48;
	sub_837EA398(ctx, base);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// b 0x837f321c
	goto loc_837F321C;
loc_837F2F50:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwzx r16,r31,r11
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// bl 0x8241f0a0
	ctx.lr = 0x837F2F60;
	sub_8241F0A0(ctx, base);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x82451bb8
	ctx.lr = 0x837F2F70;
	sub_82451BB8(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// bl 0x82573280
	ctx.lr = 0x837F2F78;
	sub_82573280(ctx, base);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x82573c50
	ctx.lr = 0x837F2F84;
	sub_82573C50(ctx, base);
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// bl 0x82573c50
	ctx.lr = 0x837F2F8C;
	sub_82573C50(ctx, base);
	// clrlwi r10,r16,24
	ctx.r10.u64 = ctx.r16.u32 & 0xFF;
	// lwz r11,280(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837f3028
	if (cr6.eq) goto loc_837F3028;
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x837e3b90
	ctx.lr = 0x837F2FA4;
	sub_837E3B90(ctx, base);
	// std r30,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r30.u64);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8241f040
	ctx.lr = 0x837F2FB4;
	sub_8241F040(ctx, base);
	// std r30,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r30.u64);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x8241f040
	ctx.lr = 0x837F2FC4;
	sub_8241F040(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8241f040
	ctx.lr = 0x837F2FD0;
	sub_8241F040(ctx, base);
	// addi r3,r1,1184
	ctx.r3.s64 = ctx.r1.s64 + 1184;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x83809f60
	ctx.lr = 0x837F2FDC;
	sub_83809F60(ctx, base);
	// lwz r11,44(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 44);
	// addi r16,r3,4
	ctx.r16.s64 = ctx.r3.s64 + 4;
	// addi r31,r11,68
	ctx.r31.s64 = ctx.r11.s64 + 68;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837f1160
	ctx.lr = 0x837F2FF4;
	sub_837F1160(ctx, base);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// li r5,324
	ctx.r5.s64 = 324;
	// bl 0x831ce980
	ctx.lr = 0x837F3004;
	sub_831CE980(ctx, base);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837f1160
	ctx.lr = 0x837F3010;
	sub_837F1160(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r3,r1,1184
	ctx.r3.s64 = ctx.r1.s64 + 1184;
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// bl 0x837e3e38
	ctx.lr = 0x837F3020;
	sub_837E3E38(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// b 0x837f321c
	goto loc_837F321C;
loc_837F3028:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwzx r16,r31,r11
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// bl 0x8241f0a0
	ctx.lr = 0x837F3038;
	sub_8241F0A0(ctx, base);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// bl 0x82451bb8
	ctx.lr = 0x837F3048;
	sub_82451BB8(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// bl 0x82573280
	ctx.lr = 0x837F3050;
	sub_82573280(ctx, base);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// bl 0x82573c50
	ctx.lr = 0x837F305C;
	sub_82573C50(ctx, base);
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// bl 0x82573c50
	ctx.lr = 0x837F3064;
	sub_82573C50(ctx, base);
	// clrlwi r10,r16,24
	ctx.r10.u64 = ctx.r16.u32 & 0xFF;
	// lwz r11,280(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837f30d0
	if (cr6.eq) goto loc_837F30D0;
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x837e3c00
	ctx.lr = 0x837F307C;
	sub_837E3C00(ctx, base);
	// std r30,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r30.u64);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8241f040
	ctx.lr = 0x837F308C;
	sub_8241F040(ctx, base);
	// std r30,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r30.u64);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x8241f040
	ctx.lr = 0x837F309C;
	sub_8241F040(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8241f040
	ctx.lr = 0x837F30A8;
	sub_8241F040(ctx, base);
	// addi r3,r1,1536
	ctx.r3.s64 = ctx.r1.s64 + 1536;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x8380b0d0
	ctx.lr = 0x837F30B4;
	sub_8380B0D0(ctx, base);
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,44(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 44);
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x837ecc78
	ctx.lr = 0x837F30C8;
	sub_837ECC78(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// b 0x837f321c
	goto loc_837F321C;
loc_837F30D0:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwzx r16,r31,r11
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x8241f0a0
	ctx.lr = 0x837F30E0;
	sub_8241F0A0(ctx, base);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// bl 0x82451bb8
	ctx.lr = 0x837F30F0;
	sub_82451BB8(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// bl 0x82573280
	ctx.lr = 0x837F30F8;
	sub_82573280(ctx, base);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// bl 0x82573c50
	ctx.lr = 0x837F3104;
	sub_82573C50(ctx, base);
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x82573c50
	ctx.lr = 0x837F310C;
	sub_82573C50(ctx, base);
	// clrlwi r10,r16,24
	ctx.r10.u64 = ctx.r16.u32 & 0xFF;
	// lwz r11,280(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837f3178
	if (cr6.eq) goto loc_837F3178;
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x837e3c70
	ctx.lr = 0x837F3124;
	sub_837E3C70(ctx, base);
	// std r30,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r30.u64);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8241f040
	ctx.lr = 0x837F3134;
	sub_8241F040(ctx, base);
	// std r30,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r30.u64);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x8241f040
	ctx.lr = 0x837F3144;
	sub_8241F040(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8241f040
	ctx.lr = 0x837F3150;
	sub_8241F040(ctx, base);
	// addi r3,r1,1840
	ctx.r3.s64 = ctx.r1.s64 + 1840;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x8380c200
	ctx.lr = 0x837F315C;
	sub_8380C200(ctx, base);
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,44(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 44);
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x837ecd68
	ctx.lr = 0x837F3170;
	sub_837ECD68(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// b 0x837f321c
	goto loc_837F321C;
loc_837F3178:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwzx r16,r31,r11
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x8241f0a0
	ctx.lr = 0x837F3188;
	sub_8241F0A0(ctx, base);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x82451bb8
	ctx.lr = 0x837F3198;
	sub_82451BB8(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// bl 0x82573280
	ctx.lr = 0x837F31A0;
	sub_82573280(ctx, base);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x82573c50
	ctx.lr = 0x837F31AC;
	sub_82573C50(ctx, base);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82573c50
	ctx.lr = 0x837F31B4;
	sub_82573C50(ctx, base);
	// clrlwi r10,r16,24
	ctx.r10.u64 = ctx.r16.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837f3224
	if (cr6.eq) goto loc_837F3224;
	// lwz r11,280(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x837e3ce0
	ctx.lr = 0x837F31CC;
	sub_837E3CE0(ctx, base);
	// std r30,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r30.u64);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8241f040
	ctx.lr = 0x837F31DC;
	sub_8241F040(ctx, base);
	// std r30,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r30.u64);
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x8241f040
	ctx.lr = 0x837F31EC;
	sub_8241F040(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8241f040
	ctx.lr = 0x837F31F8;
	sub_8241F040(ctx, base);
	// addi r3,r1,2224
	ctx.r3.s64 = ctx.r1.s64 + 2224;
	// lwz r4,216(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// bl 0x8380d638
	ctx.lr = 0x837F3204;
	sub_8380D638(ctx, base);
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,44(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 44);
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x837ece98
	ctx.lr = 0x837F3218;
	sub_837ECE98(ctx, base);
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
loc_837F321C:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8241f040
	ctx.lr = 0x837F3224;
	sub_8241F040(ctx, base);
loc_837F3224:
	// rlwinm r11,r29,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r19
	ctx.r11.u64 = ctx.r11.u64 + ctx.r19.u64;
	// lwz r29,20(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// b 0x837f2c98
	goto loc_837F2C98;
loc_837F3234:
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x824b75b0
	ctx.lr = 0x837F323C;
	sub_824B75B0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x8241f040
	ctx.lr = 0x837F3248;
	sub_8241F040(ctx, base);
loc_837F3248:
	// bl 0x837da198
	ctx.lr = 0x837F324C;
	sub_837DA198(ctx, base);
	// lbz r11,11373(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11373);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f3264
	if (cr6.eq) goto loc_837F3264;
	// lwz r11,44(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 44);
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// bl 0x837e2530
	ctx.lr = 0x837F3264;
	sub_837E2530(ctx, base);
loc_837F3264:
	// lwz r11,4(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// stw r9,4(r17)
	PPC_STORE_U32(ctx.r17.u32 + 4, ctx.r9.u32);
	// stw r10,8(r18)
	PPC_STORE_U32(ctx.r18.u32 + 8, ctx.r10.u32);
loc_837F3278:
	// addi r1,r1,2832
	ctx.r1.s64 = ctx.r1.s64 + 2832;
	// b 0x831cdb04
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837F3280"))) PPC_WEAK_FUNC(sub_837F3280);
PPC_FUNC_IMPL(__imp__sub_837F3280) {
	PPC_FUNC_PROLOGUE();
	// b 0x837f25d8
	sub_837F25D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837F3284"))) PPC_WEAK_FUNC(sub_837F3284);
PPC_FUNC_IMPL(__imp__sub_837F3284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837F3288"))) PPC_WEAK_FUNC(sub_837F3288);
PPC_FUNC_IMPL(__imp__sub_837F3288) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837F3290;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31743
	ctx.r29.s64 = -2080309248;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r30,-6828(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + -6828);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x837f32e8
	if (!cr6.eq) goto loc_837F32E8;
	// li r11,33
	ctx.r11.s64 = 33;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,748
	ctx.r4.s64 = 748;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x837F32C4;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837f32d8
	if (cr6.eq) goto loc_837F32D8;
	// bl 0x837f1770
	ctx.lr = 0x837F32D0;
	sub_837F1770(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x837f32dc
	goto loc_837F32DC;
loc_837F32D8:
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_837F32DC:
	// stw r30,-6828(r29)
	PPC_STORE_U32(ctx.r29.u32 + -6828, ctx.r30.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x837f3300
	if (cr6.eq) goto loc_837F3300;
loc_837F32E8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,644
	ctx.r3.s64 = ctx.r30.s64 + 644;
	// bl 0x837e5890
	ctx.lr = 0x837F32F4;
	sub_837E5890(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,692
	ctx.r3.s64 = ctx.r30.s64 + 692;
	// bl 0x837e5890
	ctx.lr = 0x837F3300;
	sub_837E5890(ctx, base);
loc_837F3300:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837e94a0
	ctx.lr = 0x837F3308;
	sub_837E94A0(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x837f3328
	if (cr6.eq) goto loc_837F3328;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x837eea28
	ctx.lr = 0x837F331C;
	sub_837EEA28(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,84
	ctx.r3.s64 = ctx.r30.s64 + 84;
	// bl 0x837eea28
	ctx.lr = 0x837F3328;
	sub_837EEA28(ctx, base);
loc_837F3328:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837e3f08
	ctx.lr = 0x837F3330;
	sub_837E3F08(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837F3344;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837e4170
	ctx.lr = 0x837F334C;
	sub_837E4170(ctx, base);
	// lwz r9,136(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// addi r3,r31,132
	ctx.r3.s64 = ctx.r31.s64 + 132;
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// bl 0x837edf10
	ctx.lr = 0x837F335C;
	sub_837EDF10(ctx, base);
	// lwz r8,136(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r8.u32);
	// lwz r7,136(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// stw r7,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r7.u32);
	// lwz r6,136(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// stw r6,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r6.u32);
	// stw r28,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r28.u32);
	// bl 0x837e3f90
	ctx.lr = 0x837F3380;
	sub_837E3F90(ctx, base);
	// lwz r5,72(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x837F3394;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x837f33c0
	if (cr6.eq) goto loc_837F33C0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,164
	ctx.r3.s64 = ctx.r30.s64 + 164;
	// bl 0x837eea28
	ctx.lr = 0x837F33A8;
	sub_837EEA28(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,244
	ctx.r3.s64 = ctx.r30.s64 + 244;
	// bl 0x837eea28
	ctx.lr = 0x837F33B4;
	sub_837EEA28(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,324
	ctx.r3.s64 = ctx.r30.s64 + 324;
	// bl 0x837eea28
	ctx.lr = 0x837F33C0;
	sub_837EEA28(ctx, base);
loc_837F33C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837e9600
	ctx.lr = 0x837F33C8;
	sub_837E9600(ctx, base);
	// stw r28,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837F33D4"))) PPC_WEAK_FUNC(sub_837F33D4);
PPC_FUNC_IMPL(__imp__sub_837F33D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837F33D8"))) PPC_WEAK_FUNC(sub_837F33D8);
PPC_FUNC_IMPL(__imp__sub_837F33D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837F33E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// lis r10,-32211
	ctx.r10.s64 = -2110980096;
	// addi r9,r11,5016
	ctx.r9.s64 = ctx.r11.s64 + 5016;
	// addi r8,r10,4784
	ctx.r8.s64 = ctx.r10.s64 + 4784;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r29,r3,8
	ctx.r29.s64 = ctx.r3.s64 + 8;
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// bl 0x837dfc58
	ctx.lr = 0x837F3418;
	sub_837DFC58(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// addi r3,r29,36
	ctx.r3.s64 = ctx.r29.s64 + 36;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// bl 0x838a2b30
	ctx.lr = 0x837F3434;
	sub_838A2B30(ctx, base);
	// lis r7,-32211
	ctx.r7.s64 = -2110980096;
	// addi r29,r31,72
	ctx.r29.s64 = ctx.r31.s64 + 72;
	// addi r6,r7,4808
	ctx.r6.s64 = ctx.r7.s64 + 4808;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r6,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r6.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// bl 0x837dfc58
	ctx.lr = 0x837F3454;
	sub_837DFC58(ctx, base);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// addi r3,r29,36
	ctx.r3.s64 = ctx.r29.s64 + 36;
	// bl 0x838a2b30
	ctx.lr = 0x837F346C;
	sub_838A2B30(ctx, base);
	// addi r3,r31,132
	ctx.r3.s64 = ctx.r31.s64 + 132;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82d48a40
	ctx.lr = 0x837F347C;
	sub_82D48A40(ctx, base);
	// addi r3,r31,148
	ctx.r3.s64 = ctx.r31.s64 + 148;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8381b9d0
	ctx.lr = 0x837F348C;
	sub_8381B9D0(ctx, base);
	// addi r3,r31,164
	ctx.r3.s64 = ctx.r31.s64 + 164;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8381b9d0
	ctx.lr = 0x837F349C;
	sub_8381B9D0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// stb r30,184(r31)
	PPC_STORE_U8(ctx.r31.u32 + 184, ctx.r30.u8);
	// stb r5,185(r31)
	PPC_STORE_U8(ctx.r31.u32 + 185, ctx.r5.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837F34C0"))) PPC_WEAK_FUNC(sub_837F34C0);
PPC_FUNC_IMPL(__imp__sub_837F34C0) {
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
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,5016
	ctx.r10.s64 = ctx.r11.s64 + 5016;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x837f3288
	ctx.lr = 0x837F34E8;
	sub_837F3288(ctx, base);
	// lwz r6,168(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// addi r4,r31,164
	ctx.r4.s64 = ctx.r31.s64 + 164;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82d0e798
	ctx.lr = 0x837F34FC;
	sub_82D0E798(ctx, base);
	// li r30,2
	ctx.r30.s64 = 2;
	// lwz r4,168(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// bl 0x825952b8
	ctx.lr = 0x837F3510;
	sub_825952B8(ctx, base);
	// lwz r6,152(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// addi r4,r31,148
	ctx.r4.s64 = ctx.r31.s64 + 148;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82d0e798
	ctx.lr = 0x837F3524;
	sub_82D0E798(ctx, base);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,152(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// bl 0x825952b8
	ctx.lr = 0x837F3534;
	sub_825952B8(ctx, base);
	// lwz r6,136(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// addi r4,r31,132
	ctx.r4.s64 = ctx.r31.s64 + 132;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x837eed40
	ctx.lr = 0x837F3548;
	sub_837EED40(ctx, base);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,136(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// bl 0x825952b8
	ctx.lr = 0x837F3558;
	sub_825952B8(ctx, base);
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// bl 0x837f24a0
	ctx.lr = 0x837F3560;
	sub_837F24A0(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x837f2068
	ctx.lr = 0x837F3568;
	sub_837F2068(ctx, base);
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

__attribute__((alias("__imp__sub_837F3580"))) PPC_WEAK_FUNC(sub_837F3580);
PPC_FUNC_IMPL(__imp__sub_837F3580) {
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
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_837F3594:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837f3594
	if (!cr6.eq) goto loc_837F3594;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837f365c
	if (cr6.eq) goto loc_837F365C;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_837F35BC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837f35bc
	if (!cr6.eq) goto loc_837F35BC;
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// addi r10,r11,2036
	ctx.r10.s64 = ctx.r11.s64 + 2036;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_837F35E8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x837f360c
	if (cr6.eq) goto loc_837F360C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x837f35e8
	if (cr6.eq) goto loc_837F35E8;
loc_837F360C:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x837f361c
	if (cr6.eq) goto loc_837F361C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_837F361C:
	// stb r11,185(r3)
	PPC_STORE_U8(ctx.r3.u32 + 185, ctx.r11.u8);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837e9210
	ctx.lr = 0x837F3638;
	sub_837E9210(ctx, base);
	// bl 0x837f2688
	ctx.lr = 0x837F363C;
	sub_837F2688(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837f3654
	if (cr6.eq) goto loc_837F3654;
	// bl 0x837f2688
	ctx.lr = 0x837F3648;
	sub_837F2688(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,644
	ctx.r3.s64 = ctx.r3.s64 + 644;
	// bl 0x837e5830
	ctx.lr = 0x837F3654;
	sub_837E5830(ctx, base);
loc_837F3654:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837e3930
	ctx.lr = 0x837F365C;
	sub_837E3930(ctx, base);
loc_837F365C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837F366C"))) PPC_WEAK_FUNC(sub_837F366C);
PPC_FUNC_IMPL(__imp__sub_837F366C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837F3670"))) PPC_WEAK_FUNC(sub_837F3670);
PPC_FUNC_IMPL(__imp__sub_837F3670) {
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
	// lis r31,-31743
	ctx.r31.s64 = -2080309248;
	// lbz r10,185(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 185);
	// lis r9,-32211
	ctx.r9.s64 = -2110980096;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r4,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// addi r7,r9,4408
	ctx.r7.s64 = ctx.r9.s64 + 4408;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// lwz r11,-6828(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -6828);
	// stb r10,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r10.u8);
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837f36ec
	if (!cr6.eq) goto loc_837F36EC;
	// li r11,33
	ctx.r11.s64 = 33;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,748
	ctx.r4.s64 = 748;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x837F36D4;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837f3748
	if (cr6.eq) goto loc_837F3748;
	// bl 0x837f1770
	ctx.lr = 0x837F36E0;
	sub_837F1770(ctx, base);
	// stw r3,-6828(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6828, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837f3730
	if (cr6.eq) goto loc_837F3730;
loc_837F36EC:
	// bl 0x837f2688
	ctx.lr = 0x837F36F0;
	sub_837F2688(ctx, base);
	// addi r31,r3,644
	ctx.r31.s64 = ctx.r3.s64 + 644;
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837F3700;
	sub_82596FE8(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837F3714;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8378d870
	ctx.lr = 0x837F3728;
	sub_8378D870(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82597088
	ctx.lr = 0x837F3730;
	sub_82597088(ctx, base);
loc_837F3730:
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
loc_837F3748:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-6828(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6828, ctx.r11.u32);
	// b 0x837f3730
	goto loc_837F3730;
}

__attribute__((alias("__imp__sub_837F3754"))) PPC_WEAK_FUNC(sub_837F3754);
PPC_FUNC_IMPL(__imp__sub_837F3754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837F3758"))) PPC_WEAK_FUNC(sub_837F3758);
PPC_FUNC_IMPL(__imp__sub_837F3758) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_837F3778:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837f3778
	if (!cr6.eq) goto loc_837F3778;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837f37e0
	if (cr6.eq) goto loc_837F37E0;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f37ec
	if (cr6.eq) goto loc_837F37EC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x837F37B4;
	sub_837B0C10(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x837f37c8
	if (!cr6.lt) goto loc_837F37C8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
loc_837F37C8:
	// bl 0x83104018
	ctx.lr = 0x837F37CC;
	sub_83104018(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837f37e8
	if (!cr6.eq) goto loc_837F37E8;
	// bl 0x8387e8e0
	ctx.lr = 0x837F37E0;
	sub_8387E8E0(ctx, base);
loc_837F37E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x837f3810
	goto loc_837F3810;
loc_837F37E8:
	// bl 0x8387e8e0
	ctx.lr = 0x837F37EC;
	sub_8387E8E0(ctx, base);
loc_837F37EC:
	// bl 0x837f2688
	ctx.lr = 0x837F37F0;
	sub_837F2688(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837f37e0
	if (cr6.eq) goto loc_837F37E0;
	// lbz r11,185(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 185);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r11,80(r3)
	PPC_STORE_U8(ctx.r3.u32 + 80, ctx.r11.u8);
	// bl 0x837f0060
	ctx.lr = 0x837F380C;
	sub_837F0060(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_837F3810:
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

__attribute__((alias("__imp__sub_837F3828"))) PPC_WEAK_FUNC(sub_837F3828);
PPC_FUNC_IMPL(__imp__sub_837F3828) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x837F3830;
	__savegprlr_24(ctx, base);
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_837F3844:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837f3844
	if (!cr6.eq) goto loc_837F3844;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837f39a0
	if (cr6.eq) goto loc_837F39A0;
	// bl 0x837f2688
	ctx.lr = 0x837F386C;
	sub_837F2688(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837f39a0
	if (cr6.eq) goto loc_837F39A0;
	// lbz r10,185(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 185);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r10,240(r27)
	PPC_STORE_U8(ctx.r27.u32 + 240, ctx.r10.u8);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// stb r31,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r31.u8);
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// bl 0x8259d6c0
	ctx.lr = 0x837F38BC;
	sub_8259D6C0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x8259d6c0
	ctx.lr = 0x837F38C8;
	sub_8259D6C0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// addi r28,r30,8
	ctx.r28.s64 = ctx.r30.s64 + 8;
	// lwz r25,8(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x837e9340
	ctx.lr = 0x837F38DC;
	sub_837E9340(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x837b0c10
	ctx.lr = 0x837F38EC;
	sub_837B0C10(ctx, base);
	// lwz r9,8(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x837F3908;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r7,20(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x837F3920;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x837f01e8
	ctx.lr = 0x837F3938;
	sub_837F01E8(ctx, base);
	// stw r3,56(r28)
	PPC_STORE_U32(ctx.r28.u32 + 56, ctx.r3.u32);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_837F3940:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837f3940
	if (!cr6.eq) goto loc_837F3940;
	// subf r11,r26,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r26.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837f3994
	if (cr6.eq) goto loc_837F3994;
	// li r6,1
	ctx.r6.s64 = 1;
	// lbz r7,320(r27)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r27.u32 + 320);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x837e8110
	ctx.lr = 0x837F397C;
	sub_837E8110(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r27,244
	ctx.r3.s64 = ctx.r27.s64 + 244;
	// bl 0x837efe60
	ctx.lr = 0x837F3988;
	sub_837EFE60(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x837e81f8
	ctx.lr = 0x837F3994;
	sub_837E81F8(ctx, base);
loc_837F3994:
	// stw r31,60(r28)
	PPC_STORE_U32(ctx.r28.u32 + 60, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837e3e90
	ctx.lr = 0x837F39A0;
	sub_837E3E90(ctx, base);
loc_837F39A0:
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837F39A8"))) PPC_WEAK_FUNC(sub_837F39A8);
PPC_FUNC_IMPL(__imp__sub_837F39A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x837F39B0;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31743
	ctx.r31.s64 = -2080309248;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-6828(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -6828);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837f39f8
	if (!cr6.eq) goto loc_837F39F8;
	// li r11,33
	ctx.r11.s64 = 33;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r4,748
	ctx.r4.s64 = 748;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x837F39E0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837f3ae0
	if (cr6.eq) goto loc_837F3AE0;
	// bl 0x837f1770
	ctx.lr = 0x837F39EC;
	sub_837F1770(ctx, base);
	// stw r3,-6828(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6828, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837f3b9c
	if (cr6.eq) goto loc_837F3B9C;
loc_837F39F8:
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r25,r30,12
	ctx.r25.s64 = ctx.r30.s64 + 12;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x837f3b9c
	if (cr6.eq) goto loc_837F3B9C;
	// addi r27,r30,8
	ctx.r27.s64 = ctx.r30.s64 + 8;
	// li r26,0
	ctx.r26.s64 = 0;
loc_837F3A18:
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,40(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x837F3A30;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r30,60(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x837f3a54
	if (cr6.eq) goto loc_837F3A54;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r11,r11,-6
	ctx.r11.s64 = ctx.r11.s64 + -6;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r30,r8,r30
	ctx.r30.u64 = ctx.r8.u64 & ctx.r30.u64;
loc_837F3A54:
	// lwz r29,56(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// bne cr6,0x837f3ab8
	if (!cr6.eq) goto loc_837F3AB8;
	// lbz r11,104(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f3aa8
	if (cr6.eq) goto loc_837F3AA8;
	// lis r11,-16618
	ctx.r11.s64 = -1089077248;
	// ld r10,96(r29)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r29.u32 + 96);
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r8,r11,40856
	ctx.r8.u64 = ctx.r11.u64 | 40856;
	// ori r7,r9,47264
	ctx.r7.u64 = ctx.r9.u64 | 47264;
	// li r11,1
	ctx.r11.s64 = 1;
	// rldimi r8,r7,32,0
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r8.u64 & 0xFFFFFFFF);
	// cmpld cr6,r10,r8
	cr6.compare<uint64_t>(ctx.r10.u64, ctx.r8.u64, xer);
	// beq cr6,0x837f3a98
	if (cr6.eq) goto loc_837F3A98;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_837F3A98:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// beq cr6,0x837f3aac
	if (cr6.eq) goto loc_837F3AAC;
loc_837F3AA8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_837F3AAC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f3abc
	if (cr6.eq) goto loc_837F3ABC;
loc_837F3AB8:
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_837F3ABC:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x837f3b80
	if (cr6.eq) goto loc_837F3B80;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x837f3b80
	if (cr6.eq) goto loc_837F3B80;
	// lwz r11,64(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f3af0
	if (cr6.eq) goto loc_837F3AF0;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x837f3b00
	goto loc_837F3B00;
loc_837F3AE0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-6828(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6828, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_837F3AF0:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x834feff8
	ctx.lr = 0x837F3AFC;
	sub_834FEFF8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_837F3B00:
	// lwz r10,144(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// addi r11,r30,124
	ctx.r11.s64 = ctx.r30.s64 + 124;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x837f3b18
	if (cr6.lt) goto loc_837F3B18;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x837f3b1c
	goto loc_837F3B1C;
loc_837F3B18:
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
loc_837F3B1C:
	// lwz r10,116(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// addi r11,r30,96
	ctx.r11.s64 = ctx.r30.s64 + 96;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x837f3b30
	if (cr6.lt) goto loc_837F3B30;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_837F3B30:
	// lwz r10,72(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// addi r4,r30,52
	ctx.r4.s64 = ctx.r30.s64 + 52;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x837f3b44
	if (cr6.lt) goto loc_837F3B44;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_837F3B44:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x834fd9d8
	ctx.lr = 0x837F3B54;
	sub_834FD9D8(ctx, base);
	// lwz r10,72(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// addi r11,r29,52
	ctx.r11.s64 = ctx.r29.s64 + 52;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x837f3b68
	if (cr6.lt) goto loc_837F3B68;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_837F3B68:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x834fde58
	ctx.lr = 0x837F3B74;
	sub_834FDE58(ctx, base);
	// stw r31,64(r28)
	PPC_STORE_U32(ctx.r28.u32 + 64, ctx.r31.u32);
	// stw r3,68(r28)
	PPC_STORE_U32(ctx.r28.u32 + 68, ctx.r3.u32);
	// b 0x837f3b84
	goto loc_837F3B84;
loc_837F3B80:
	// stw r26,64(r28)
	PPC_STORE_U32(ctx.r28.u32 + 64, ctx.r26.u32);
loc_837F3B84:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837c05a0
	ctx.lr = 0x837F3B8C;
	sub_837C05A0(ctx, base);
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x837f3a18
	if (!cr6.eq) goto loc_837F3A18;
loc_837F3B9C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837F3BA4"))) PPC_WEAK_FUNC(sub_837F3BA4);
PPC_FUNC_IMPL(__imp__sub_837F3BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837F3BA8"))) PPC_WEAK_FUNC(sub_837F3BA8);
PPC_FUNC_IMPL(__imp__sub_837F3BA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x837F3BB0;
	__savegprlr_21(ctx, base);
	// stwu r1,-560(r1)
	ea = -560 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r4,588(r1)
	PPC_STORE_U32(ctx.r1.u32 + 588, ctx.r4.u32);
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_837F3BC8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837f3bc8
	if (!cr6.eq) goto loc_837F3BC8;
	// subf r11,r24,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r24.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837f3f84
	if (cr6.eq) goto loc_837F3F84;
	// bl 0x837f2688
	ctx.lr = 0x837F3BF0;
	sub_837F2688(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837f3f84
	if (cr6.eq) goto loc_837F3F84;
	// lbz r11,185(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 185);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r23,15
	ctx.r23.s64 = 15;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stb r11,240(r25)
	PPC_STORE_U8(ctx.r25.u32 + 240, ctx.r11.u8);
	// lbz r10,185(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 185);
	// stb r10,400(r25)
	PPC_STORE_U8(ctx.r25.u32 + 400, ctx.r10.u8);
	// stw r23,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r23.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// stw r23,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r23.u32);
	// stw r31,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r31.u32);
	// stb r31,204(r1)
	PPC_STORE_U8(ctx.r1.u32 + 204, ctx.r31.u8);
	// stw r23,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r23.u32);
	// stw r31,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r31.u32);
	// stb r31,232(r1)
	PPC_STORE_U8(ctx.r1.u32 + 232, ctx.r31.u8);
	// stw r31,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r31.u32);
	// stw r31,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r31.u32);
	// stw r31,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r31.u32);
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stw r31,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r31.u32);
	// stb r31,280(r1)
	PPC_STORE_U8(ctx.r1.u32 + 280, ctx.r31.u8);
	// stw r31,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r31.u32);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// stw r31,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r31.u32);
	// stw r31,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r31.u32);
	// bl 0x8259d6c0
	ctx.lr = 0x837F3C6C;
	sub_8259D6C0(ctx, base);
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// addi r3,r1,204
	ctx.r3.s64 = ctx.r1.s64 + 204;
	// addi r29,r11,2068
	ctx.r29.s64 = ctx.r11.s64 + 2068;
	// addi r4,r29,-1073
	ctx.r4.s64 = ctx.r29.s64 + -1073;
	// bl 0x8259d6c0
	ctx.lr = 0x837F3C80;
	sub_8259D6C0(ctx, base);
	// addi r4,r29,-987
	ctx.r4.s64 = ctx.r29.s64 + -987;
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// bl 0x8259d6c0
	ctx.lr = 0x837F3C8C;
	sub_8259D6C0(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// addi r30,r27,72
	ctx.r30.s64 = ctx.r27.s64 + 72;
	// lwz r28,72(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 72);
	// bl 0x837e93c8
	ctx.lr = 0x837F3CA0;
	sub_837E93C8(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x837b0c10
	ctx.lr = 0x837F3CB0;
	sub_837B0C10(ctx, base);
	// lwz r9,8(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x837F3CCC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,72(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 72);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r7,20(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x837F3CE8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,44(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r21,-1
	ctx.r21.s64 = -1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x837f3d18
	if (cr6.eq) goto loc_837F3D18;
	// addi r30,r3,28
	ctx.r30.s64 = ctx.r3.s64 + 28;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a64a88
	ctx.lr = 0x837F3D0C;
	sub_82A64A88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f3dcc
	if (cr6.eq) goto loc_837F3DCC;
loc_837F3D18:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x837F3D24;
	sub_837B0C10(ctx, base);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_837F3D28:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837f3d28
	if (!cr6.eq) goto loc_837F3D28;
	// subf r11,r26,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r26.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837f3d6c
	if (!cr6.eq) goto loc_837F3D6C;
	// lbz r11,185(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 185);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f3d64
	if (cr6.eq) goto loc_837F3D64;
	// addi r4,r29,-24
	ctx.r4.s64 = ctx.r29.s64 + -24;
	// b 0x837f3d88
	goto loc_837F3D88;
loc_837F3D64:
	// addi r4,r29,-16
	ctx.r4.s64 = ctx.r29.s64 + -16;
	// b 0x837f3d88
	goto loc_837F3D88;
loc_837F3D6C:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x8259d6c0
	ctx.lr = 0x837F3D74;
	sub_8259D6C0(ctx, base);
	// lbz r11,185(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 185);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837f3d8c
	if (!cr6.eq) goto loc_837F3D8C;
	// addi r4,r29,-8
	ctx.r4.s64 = ctx.r29.s64 + -8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
loc_837F3D88:
	// bl 0x8380f6f8
	ctx.lr = 0x837F3D8C;
	sub_8380F6F8(ctx, base);
loc_837F3D8C:
	// addi r30,r28,28
	ctx.r30.s64 = ctx.r28.s64 + 28;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259cb28
	ctx.lr = 0x837F3DA4;
	sub_8259CB28(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8380f6f8
	ctx.lr = 0x837F3DB0;
	sub_8380F6F8(ctx, base);
	// addi r3,r28,56
	ctx.r3.s64 = ctx.r28.s64 + 56;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8259cb28
	ctx.lr = 0x837F3DC4;
	sub_8259CB28(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x837F3DCC;
	sub_8387E8E0(ctx, base);
loc_837F3DCC:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x837f01e8
	ctx.lr = 0x837F3DE0;
	sub_837F01E8(ctx, base);
	// stw r3,84(r28)
	PPC_STORE_U32(ctx.r28.u32 + 84, ctx.r3.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837f3df8
	if (cr6.lt) goto loc_837F3DF8;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x837f3dfc
	goto loc_837F3DFC;
loc_837F3DF8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_837F3DFC:
	// addi r3,r25,324
	ctx.r3.s64 = ctx.r25.s64 + 324;
	// bl 0x837e8a48
	ctx.lr = 0x837F3E04;
	sub_837E8A48(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837f3e28
	if (cr6.eq) goto loc_837F3E28;
	// stb r29,104(r28)
	PPC_STORE_U8(ctx.r28.u32 + 104, ctx.r29.u8);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837f3e68
	if (cr6.lt) goto loc_837F3E68;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x837f3e6c
	goto loc_837F3E6C;
loc_837F3E28:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837f3e3c
	if (cr6.lt) goto loc_837F3E3C;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x837f3e40
	goto loc_837F3E40;
loc_837F3E3C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_837F3E40:
	// bl 0x83104018
	ctx.lr = 0x837F3E44;
	sub_83104018(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f3e8c
	if (cr6.eq) goto loc_837F3E8C;
	// stb r29,104(r28)
	PPC_STORE_U8(ctx.r28.u32 + 104, ctx.r29.u8);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837f3e68
	if (cr6.lt) goto loc_837F3E68;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x837f3e6c
	goto loc_837F3E6C;
loc_837F3E68:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
loc_837F3E6C:
	// lbz r11,185(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 185);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r6,r10,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x837f0248
	ctx.lr = 0x837F3E84;
	sub_837F0248(ctx, base);
	// stw r3,88(r28)
	PPC_STORE_U32(ctx.r28.u32 + 88, ctx.r3.u32);
	// b 0x837f3e94
	goto loc_837F3E94;
loc_837F3E8C:
	// stb r31,104(r28)
	PPC_STORE_U8(ctx.r28.u32 + 104, ctx.r31.u8);
	// stw r31,88(r28)
	PPC_STORE_U32(ctx.r28.u32 + 88, ctx.r31.u32);
loc_837F3E94:
	// lwz r11,76(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	// addi r30,r28,56
	ctx.r30.s64 = ctx.r28.s64 + 56;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837f3eac
	if (cr6.lt) goto loc_837F3EAC;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x837f3eb0
	goto loc_837F3EB0;
loc_837F3EAC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_837F3EB0:
	// addi r3,r25,164
	ctx.r3.s64 = ctx.r25.s64 + 164;
	// bl 0x837e8a48
	ctx.lr = 0x837F3EB8;
	sub_837E8A48(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x837f3ee8
	if (!cr6.eq) goto loc_837F3EE8;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837f3ed4
	if (cr6.lt) goto loc_837F3ED4;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x837f3ed8
	goto loc_837F3ED8;
loc_837F3ED4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_837F3ED8:
	// bl 0x83104018
	ctx.lr = 0x837F3EDC;
	sub_83104018(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f3f1c
	if (cr6.eq) goto loc_837F3F1C;
loc_837F3EE8:
	// stb r29,112(r28)
	PPC_STORE_U8(ctx.r28.u32 + 112, ctx.r29.u8);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837f3f00
	if (cr6.lt) goto loc_837F3F00;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x837f3f04
	goto loc_837F3F04;
loc_837F3F00:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
loc_837F3F04:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x837f01e8
	ctx.lr = 0x837F3F14;
	sub_837F01E8(ctx, base);
	// stw r3,92(r28)
	PPC_STORE_U32(ctx.r28.u32 + 92, ctx.r3.u32);
	// b 0x837f3f24
	goto loc_837F3F24;
loc_837F3F1C:
	// stb r31,112(r28)
	PPC_STORE_U8(ctx.r28.u32 + 112, ctx.r31.u8);
	// stw r31,92(r28)
	PPC_STORE_U32(ctx.r28.u32 + 92, ctx.r31.u32);
loc_837F3F24:
	// stw r23,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r23.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// stw r21,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r21.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// stb r31,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r31.u8);
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// bl 0x8259d6c0
	ctx.lr = 0x837F3F5C;
	sub_8259D6C0(ctx, base);
	// stw r22,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r22.u32);
	// addi r4,r1,588
	ctx.r4.s64 = ctx.r1.s64 + 588;
	// addi r3,r27,132
	ctx.r3.s64 = ctx.r27.s64 + 132;
	// bl 0x837efb58
	ctx.lr = 0x837F3F6C;
	sub_837EFB58(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x837eb5f8
	ctx.lr = 0x837F3F74;
	sub_837EB5F8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x837F3F7C;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82d636d8
	ctx.lr = 0x837F3F84;
	sub_82D636D8(ctx, base);
loc_837F3F84:
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837F3F8C"))) PPC_WEAK_FUNC(sub_837F3F8C);
PPC_FUNC_IMPL(__imp__sub_837F3F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837F3F90"))) PPC_WEAK_FUNC(sub_837F3F90);
PPC_FUNC_IMPL(__imp__sub_837F3F90) {
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
	// lis r31,-31743
	ctx.r31.s64 = -2080309248;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-6828(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -6828);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x837f3ff0
	if (!cr6.eq) goto loc_837F3FF0;
	// li r11,33
	ctx.r11.s64 = 33;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,748
	ctx.r4.s64 = 748;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x837F3FD0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837f3fe0
	if (cr6.eq) goto loc_837F3FE0;
	// bl 0x837f1770
	ctx.lr = 0x837F3FDC;
	sub_837F1770(ctx, base);
	// b 0x837f3fe4
	goto loc_837F3FE4;
loc_837F3FE0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_837F3FE4:
	// stw r3,-6828(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6828, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837f3ff8
	if (cr6.eq) goto loc_837F3FF8;
loc_837F3FF0:
	// lbz r11,185(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 185);
	// stb r11,240(r3)
	PPC_STORE_U8(ctx.r3.u32 + 240, ctx.r11.u8);
loc_837F3FF8:
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

__attribute__((alias("__imp__sub_837F4010"))) PPC_WEAK_FUNC(sub_837F4010);
PPC_FUNC_IMPL(__imp__sub_837F4010) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x837F4018;
	__savegprlr_22(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31743
	ctx.r31.s64 = -2080309248;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r11,-6828(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -6828);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837f4060
	if (!cr6.eq) goto loc_837F4060;
	// li r11,33
	ctx.r11.s64 = 33;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r4,748
	ctx.r4.s64 = 748;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x837F4048;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837f4128
	if (cr6.eq) goto loc_837F4128;
	// bl 0x837f1770
	ctx.lr = 0x837F4054;
	sub_837F1770(ctx, base);
	// stw r3,-6828(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6828, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837f42a4
	if (cr6.eq) goto loc_837F42A4;
loc_837F4060:
	// lwz r11,80(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 80);
	// addi r23,r27,76
	ctx.r23.s64 = ctx.r27.s64 + 76;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x837f42a4
	if (cr6.eq) goto loc_837F42A4;
	// lis r11,-16618
	ctx.r11.s64 = -1089077248;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r24,r11,40856
	ctx.r24.u64 = ctx.r11.u64 | 40856;
	// ori r8,r9,47264
	ctx.r8.u64 = ctx.r9.u64 | 47264;
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// addi r25,r27,72
	ctx.r25.s64 = ctx.r27.s64 + 72;
	// rldimi r24,r8,32,0
	ctx.r24.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r24.u64 & 0xFFFFFFFF);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r26,15
	ctx.r26.s64 = 15;
	// li r22,2
	ctx.r22.s64 = 2;
	// addi r28,r11,2184
	ctx.r28.s64 = ctx.r11.s64 + 2184;
loc_837F40A4:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,40(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837F40BC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,68(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 68);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837f4138
	if (!cr6.eq) goto loc_837F4138;
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// addi r4,r28,-96
	ctx.r4.s64 = ctx.r28.s64 + -96;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// li r5,7
	ctx.r5.s64 = 7;
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r29.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x837F40E8;
	sub_8259CC28(ctx, base);
	// bl 0x837bf2b0
	ctx.lr = 0x837F40EC;
	sub_837BF2B0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x837bda88
	ctx.lr = 0x837F40F4;
	sub_837BDA88(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837f4114
	if (cr6.lt) goto loc_837F4114;
	// stw r22,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r22.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x837F4114;
	sub_825952B8(ctx, base);
loc_837F4114:
	// stw r31,68(r27)
	PPC_STORE_U32(ctx.r27.u32 + 68, ctx.r31.u32);
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r29.u8);
	// b 0x837f413c
	goto loc_837F413C;
loc_837F4128:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-6828(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6828, ctx.r11.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_837F4138:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_837F413C:
	// lwz r10,84(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837f41ac
	if (cr6.eq) goto loc_837F41AC;
	// lbz r11,104(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f4178
	if (cr6.eq) goto loc_837F4178;
	// ld r11,96(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 96);
	// cmpld cr6,r11,r24
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r24.u64, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x837f4168
	if (cr6.eq) goto loc_837F4168;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_837F4168:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// beq cr6,0x837f417c
	if (cr6.eq) goto loc_837F417C;
loc_837F4178:
	// li r11,1
	ctx.r11.s64 = 1;
loc_837F417C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837f41ac
	if (!cr6.eq) goto loc_837F41AC;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// addi r11,r10,52
	ctx.r11.s64 = ctx.r10.s64 + 52;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x837f419c
	if (cr6.lt) goto loc_837F419C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_837F419C:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x834fc640
	ctx.lr = 0x837F41A8;
	sub_834FC640(ctx, base);
	// stw r3,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r3.u32);
loc_837F41AC:
	// lbz r11,104(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 104);
	// stw r31,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r31.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f41d0
	if (cr6.eq) goto loc_837F41D0;
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f41d0
	if (cr6.eq) goto loc_837F41D0;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// stw r11,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r11.u32);
loc_837F41D0:
	// lbz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f428c
	if (cr6.eq) goto loc_837F428C;
	// lwz r11,116(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f41f0
	if (cr6.eq) goto loc_837F41F0;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x837f4200
	goto loc_837F4200;
loc_837F41F0:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x834feff8
	ctx.lr = 0x837F41FC;
	sub_834FEFF8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_837F4200:
	// addi r6,r28,-88
	ctx.r6.s64 = ctx.r28.s64 + -88;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x834fd9d8
	ctx.lr = 0x837F4218;
	sub_834FD9D8(ctx, base);
	// lwz r10,92(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837f4288
	if (cr6.eq) goto loc_837F4288;
	// lbz r11,104(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f4254
	if (cr6.eq) goto loc_837F4254;
	// ld r11,96(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 96);
	// cmpld cr6,r11,r24
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r24.u64, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x837f4244
	if (cr6.eq) goto loc_837F4244;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_837F4244:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// beq cr6,0x837f4258
	if (cr6.eq) goto loc_837F4258;
loc_837F4254:
	// li r11,1
	ctx.r11.s64 = 1;
loc_837F4258:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837f4288
	if (!cr6.eq) goto loc_837F4288;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// addi r11,r10,52
	ctx.r11.s64 = ctx.r10.s64 + 52;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x837f4278
	if (cr6.lt) goto loc_837F4278;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_837F4278:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x834fde58
	ctx.lr = 0x837F4284;
	sub_834FDE58(ctx, base);
	// stw r3,120(r30)
	PPC_STORE_U32(ctx.r30.u32 + 120, ctx.r3.u32);
loc_837F4288:
	// stw r31,116(r30)
	PPC_STORE_U32(ctx.r30.u32 + 116, ctx.r31.u32);
loc_837F428C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837c05a0
	ctx.lr = 0x837F4294;
	sub_837C05A0(ctx, base);
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x837f40a4
	if (!cr6.eq) goto loc_837F40A4;
loc_837F42A4:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837F42AC"))) PPC_WEAK_FUNC(sub_837F42AC);
PPC_FUNC_IMPL(__imp__sub_837F42AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837F42B0"))) PPC_WEAK_FUNC(sub_837F42B0);
PPC_FUNC_IMPL(__imp__sub_837F42B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x837F42B8;
	__savegprlr_23(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31743
	ctx.r31.s64 = -2080309248;
	// stw r4,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r4.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// li r23,33
	ctx.r23.s64 = 33;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r11,-6828(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -6828);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837f4314
	if (!cr6.eq) goto loc_837F4314;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,748
	ctx.r4.s64 = 748;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x837F42FC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837f43a0
	if (cr6.eq) goto loc_837F43A0;
	// bl 0x837f1770
	ctx.lr = 0x837F4308;
	sub_837F1770(ctx, base);
	// stw r3,-6828(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6828, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837f456c
	if (cr6.eq) goto loc_837F456C;
loc_837F4314:
	// addi r30,r25,148
	ctx.r30.s64 = ctx.r25.s64 + 148;
	// addi r5,r1,236
	ctx.r5.s64 = ctx.r1.s64 + 236;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82d50810
	ctx.lr = 0x837F4328;
	sub_82D50810(ctx, base);
	// lwz r11,152(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 152);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x837f43c8
	if (!cr6.eq) goto loc_837F43C8;
	// stw r23,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r23.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,72
	ctx.r4.s64 = 72;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595718
	ctx.lr = 0x837F4350;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837f43b0
	if (cr6.eq) goto loc_837F43B0;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r27,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r27.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r27,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r27.u8);
	// addi r4,r1,236
	ctx.r4.s64 = ctx.r1.s64 + 236;
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r27,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r27.u32);
	// stb r27,36(r3)
	PPC_STORE_U8(ctx.r3.u32 + 36, ctx.r27.u8);
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
	// stb r27,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r27.u8);
	// stw r10,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// stw r27,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a80fc8
	ctx.lr = 0x837F4398;
	sub_82A80FC8(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// b 0x837f445c
	goto loc_837F445C;
loc_837F43A0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-6828(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6828, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_837F43B0:
	// addi r4,r1,236
	ctx.r4.s64 = ctx.r1.s64 + 236;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// bl 0x82a80fc8
	ctx.lr = 0x837F43C0;
	sub_82A80FC8(ctx, base);
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
	// b 0x837f445c
	goto loc_837F445C;
loc_837F43C8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// clrlwi r10,r26,24
	ctx.r10.u64 = ctx.r26.u32 & 0xFF;
	// lbz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bne cr6,0x837f4458
	if (!cr6.eq) goto loc_837F4458;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_837F43E4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837f43e4
	if (!cr6.eq) goto loc_837F43E4;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x837F4410;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x837f4458
	if (!cr6.eq) goto loc_837F4458;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// addi r3,r10,36
	ctx.r3.s64 = ctx.r10.s64 + 36;
loc_837F4424:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837f4424
	if (!cr6.eq) goto loc_837F4424;
	// subf r11,r28,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r28.s64;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x837F4450;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x837f456c
	if (cr6.eq) goto loc_837F456C;
loc_837F4458:
	// lwz r31,16(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
loc_837F445C:
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stb r26,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r26.u8);
loc_837F4468:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837f4468
	if (!cr6.eq) goto loc_837F4468;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x837F4490;
	sub_8259CC28(ctx, base);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_837F4494:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837f4494
	if (!cr6.eq) goto loc_837F4494;
	// subf r11,r28,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r28.s64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x837F44BC;
	sub_8259CC28(ctx, base);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837f4504
	if (cr6.eq) goto loc_837F4504;
	// stw r23,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r23.u32);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x837F44D8;
	sub_82595150(ctx, base);
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837f44f8
	if (cr6.eq) goto loc_837F44F8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837F44F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_837F44F8:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x837F4500;
	sub_82595170(ctx, base);
	// stw r27,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r27.u32);
loc_837F4504:
	// lbz r11,185(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 185);
	// lis r10,-32211
	ctx.r10.s64 = -2110980096;
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// addi r9,r10,4440
	ctx.r9.s64 = ctx.r10.s64 + 4440;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stb r11,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r11.u8);
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
	// bl 0x837f2688
	ctx.lr = 0x837F452C;
	sub_837F2688(ctx, base);
	// addi r31,r3,692
	ctx.r31.s64 = ctx.r3.s64 + 692;
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837F453C;
	sub_82596FE8(ctx, base);
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x837F4550;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8378d870
	ctx.lr = 0x837F4564;
	sub_8378D870(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82597088
	ctx.lr = 0x837F456C;
	sub_82597088(ctx, base);
loc_837F456C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837F4574"))) PPC_WEAK_FUNC(sub_837F4574);
PPC_FUNC_IMPL(__imp__sub_837F4574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837F4578"))) PPC_WEAK_FUNC(sub_837F4578);
PPC_FUNC_IMPL(__imp__sub_837F4578) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x837F4580;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stw r4,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r4.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_837F4598:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837f4598
	if (!cr6.eq) goto loc_837F4598;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837f45c8
	if (!cr6.eq) goto loc_837F45C8;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f47a0
	if (cr6.eq) goto loc_837F47A0;
loc_837F45C8:
	// lis r31,-31743
	ctx.r31.s64 = -2080309248;
	// li r26,33
	ctx.r26.s64 = 33;
	// lwz r11,-6828(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -6828);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837f4608
	if (!cr6.eq) goto loc_837F4608;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,748
	ctx.r4.s64 = 748;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x837F45F0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837f467c
	if (cr6.eq) goto loc_837F467C;
	// bl 0x837f1770
	ctx.lr = 0x837F45FC;
	sub_837F1770(ctx, base);
	// stw r3,-6828(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6828, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837f47a0
	if (cr6.eq) goto loc_837F47A0;
loc_837F4608:
	// addi r30,r25,164
	ctx.r30.s64 = ctx.r25.s64 + 164;
	// addi r5,r1,220
	ctx.r5.s64 = ctx.r1.s64 + 220;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82d50810
	ctx.lr = 0x837F461C;
	sub_82D50810(ctx, base);
	// lwz r11,168(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 168);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x837f46a4
	if (!cr6.eq) goto loc_837F46A4;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,36
	ctx.r4.s64 = 36;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595718
	ctx.lr = 0x837F4644;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837f468c
	if (cr6.eq) goto loc_837F468C;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r28,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r28.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// addi r4,r1,220
	ctx.r4.s64 = ctx.r1.s64 + 220;
	// stb r28,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r28.u8);
	// stb r28,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r28.u8);
	// stw r28,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a80fc8
	ctx.lr = 0x837F4674;
	sub_82A80FC8(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// b 0x837f46f8
	goto loc_837F46F8;
loc_837F467C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-6828(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6828, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_837F468C:
	// addi r4,r1,220
	ctx.r4.s64 = ctx.r1.s64 + 220;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// bl 0x82a80fc8
	ctx.lr = 0x837F469C;
	sub_82A80FC8(ctx, base);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// b 0x837f46f8
	goto loc_837F46F8;
loc_837F46A4:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_837F46AC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837f46ac
	if (!cr6.eq) goto loc_837F46AC;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x837F46D8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x837f46f4
	if (!cr6.eq) goto loc_837F46F4;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// clrlwi r10,r27,24
	ctx.r10.u64 = ctx.r27.u32 & 0xFF;
	// lbz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 28);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x837f47a0
	if (cr6.eq) goto loc_837F47A0;
loc_837F46F4:
	// lwz r31,16(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
loc_837F46F8:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_837F46FC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837f46fc
	if (!cr6.eq) goto loc_837F46FC;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x837F4724;
	sub_8259CC28(ctx, base);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stb r27,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r27.u8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837f4770
	if (cr6.eq) goto loc_837F4770;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x837F4744;
	sub_82595150(ctx, base);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837f4764
	if (cr6.eq) goto loc_837F4764;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837F4764;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_837F4764:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x837F476C;
	sub_82595170(ctx, base);
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
loc_837F4770:
	// lbz r11,185(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 185);
	// lis r10,-32211
	ctx.r10.s64 = -2110980096;
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// addi r9,r10,4424
	ctx.r9.s64 = ctx.r10.s64 + 4424;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stb r11,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r11.u8);
	// bl 0x837f2688
	ctx.lr = 0x837F4794;
	sub_837F2688(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r3,692
	ctx.r3.s64 = ctx.r3.s64 + 692;
	// bl 0x837e5830
	ctx.lr = 0x837F47A0;
	sub_837E5830(ctx, base);
loc_837F47A0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837F47A8"))) PPC_WEAK_FUNC(sub_837F47A8);
PPC_FUNC_IMPL(__imp__sub_837F47A8) {
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
	// lis r31,-31743
	ctx.r31.s64 = -2080309248;
	// lwz r3,-6828(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -6828);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x837f4818
	if (!cr6.eq) goto loc_837F4818;
	// li r11,33
	ctx.r11.s64 = 33;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,748
	ctx.r4.s64 = 748;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x837F47E0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837f47f0
	if (cr6.eq) goto loc_837F47F0;
	// bl 0x837f1770
	ctx.lr = 0x837F47EC;
	sub_837F1770(ctx, base);
	// b 0x837f47f4
	goto loc_837F47F4;
loc_837F47F0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_837F47F4:
	// stw r3,-6828(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6828, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x837f4818
	if (!cr6.eq) goto loc_837F4818;
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
loc_837F4818:
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f483c
	if (cr6.eq) goto loc_837F483C;
loc_837F4824:
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
loc_837F483C:
	// lwz r11,188(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837f4824
	if (!cr6.eq) goto loc_837F4824;
	// lwz r11,268(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837f4824
	if (!cr6.eq) goto loc_837F4824;
	// lwz r11,348(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 348);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837f4824
	if (!cr6.eq) goto loc_837F4824;
	// lwz r11,652(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 652);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837f4824
	if (!cr6.eq) goto loc_837F4824;
	// lwz r11,700(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 700);
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

__attribute__((alias("__imp__sub_837F488C"))) PPC_WEAK_FUNC(sub_837F488C);
PPC_FUNC_IMPL(__imp__sub_837F488C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837F4890"))) PPC_WEAK_FUNC(sub_837F4890);
PPC_FUNC_IMPL(__imp__sub_837F4890) {
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
	// bl 0x837f1858
	ctx.lr = 0x837F48B0;
	sub_837F1858(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f48d0
	if (cr6.eq) goto loc_837F48D0;
	// bl 0x82595188
	ctx.lr = 0x837F48C0;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x837F48D0;
	sub_825952B8(ctx, base);
loc_837F48D0:
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

__attribute__((alias("__imp__sub_837F48EC"))) PPC_WEAK_FUNC(sub_837F48EC);
PPC_FUNC_IMPL(__imp__sub_837F48EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837F48F0"))) PPC_WEAK_FUNC(sub_837F48F0);
PPC_FUNC_IMPL(__imp__sub_837F48F0) {
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
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bge cr6,0x837f4928
	if (!cr6.lt) goto loc_837F4928;
loc_837F4910:
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
loc_837F4928:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837f4944
	if (cr6.eq) goto loc_837F4944;
	// bl 0x837f47a8
	ctx.lr = 0x837F4938;
	sub_837F47A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f4910
	if (cr6.eq) goto loc_837F4910;
loc_837F4944:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f49a8
	if (cr6.eq) goto loc_837F49A8;
	// lbz r10,133(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 133);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837f496c
	if (cr6.eq) goto loc_837F496C;
	// lwz r10,404(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 404);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x837f4910
	if (cr6.eq) goto loc_837F4910;
loc_837F496C:
	// lbz r10,134(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 134);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837f4988
	if (cr6.eq) goto loc_837F4988;
	// lwz r10,404(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 404);
	// rlwinm r9,r10,26,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x837f4910
	if (cr6.eq) goto loc_837F4910;
loc_837F4988:
	// lbz r10,135(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 135);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837f49a8
	if (cr6.eq) goto loc_837F49A8;
	// lwz r11,404(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 404);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r10,r11,25,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837f49ac
	if (cr6.eq) goto loc_837F49AC;
loc_837F49A8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_837F49AC:
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

__attribute__((alias("__imp__sub_837F49C0"))) PPC_WEAK_FUNC(sub_837F49C0);
PPC_FUNC_IMPL(__imp__sub_837F49C0) {
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
	// lwz r11,304(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837f49f0
	if (!cr6.eq) goto loc_837F49F0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,296
	ctx.r3.s64 = ctx.r3.s64 + 296;
	// bl 0x837e97d0
	ctx.lr = 0x837F49F0;
	sub_837E97D0(ctx, base);
loc_837F49F0:
	// lwz r11,320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f4a3c
	if (cr6.eq) goto loc_837F4A3C;
	// lwz r10,316(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x837f4a3c
	if (cr6.eq) goto loc_837F4A3C;
loc_837F4A10:
	// addi r5,r11,24
	ctx.r5.s64 = ctx.r11.s64 + 24;
	// lbz r6,170(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 170);
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x837f4578
	ctx.lr = 0x837F4A24;
	sub_837F4578(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837dc650
	ctx.lr = 0x837F4A2C;
	sub_837DC650(ctx, base);
	// lwz r10,316(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x837f4a10
	if (!cr6.eq) goto loc_837F4A10;
loc_837F4A3C:
	// addi r4,r31,292
	ctx.r4.s64 = ctx.r31.s64 + 292;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x837f3670
	ctx.lr = 0x837F4A48;
	sub_837F3670(ctx, base);
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

__attribute__((alias("__imp__sub_837F4A5C"))) PPC_WEAK_FUNC(sub_837F4A5C);
PPC_FUNC_IMPL(__imp__sub_837F4A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837F4A60"))) PPC_WEAK_FUNC(sub_837F4A60);
PPC_FUNC_IMPL(__imp__sub_837F4A60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x837F4A68;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x837f39a8
	ctx.lr = 0x837F4A78;
	sub_837F39A8(ctx, base);
	// lwz r11,400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f4ac8
	if (cr6.eq) goto loc_837F4AC8;
	// lwz r10,396(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x837f4ac8
	if (cr6.eq) goto loc_837F4AC8;
loc_837F4A98:
	// addi r7,r11,312
	ctx.r7.s64 = ctx.r11.s64 + 312;
	// lbz r5,448(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 448);
	// addi r6,r11,56
	ctx.r6.s64 = ctx.r11.s64 + 56;
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x837f42b0
	ctx.lr = 0x837F4AB0;
	sub_837F42B0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837dc890
	ctx.lr = 0x837F4AB8;
	sub_837DC890(ctx, base);
	// lwz r10,396(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x837f4a98
	if (!cr6.eq) goto loc_837F4A98;
loc_837F4AC8:
	// lwz r11,416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r26,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r26.u32);
	// beq cr6,0x837f4b24
	if (cr6.eq) goto loc_837F4B24;
	// lwz r29,412(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// addi r28,r31,408
	ctx.r28.s64 = ctx.r31.s64 + 408;
	// stw r26,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r26.u32);
loc_837F4AE8:
	// lwz r30,88(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mulli r11,r30,100
	ctx.r11.s64 = ctx.r30.s64 * 100;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x837e4738
	ctx.lr = 0x837F4B04;
	sub_837E4738(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r29
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, xer);
	// beq cr6,0x837f4b24
	if (cr6.eq) goto loc_837F4B24;
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// cmplwi cr6,r10,10
	cr6.compare<uint32_t>(ctx.r10.u32, 10, xer);
	// blt cr6,0x837f4ae8
	if (cr6.lt) goto loc_837F4AE8;
loc_837F4B24:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r28,r31,133
	ctx.r28.s64 = ctx.r31.s64 + 133;
	// stb r26,133(r31)
	PPC_STORE_U8(ctx.r31.u32 + 133, ctx.r26.u8);
	// stb r26,134(r31)
	PPC_STORE_U8(ctx.r31.u32 + 134, ctx.r26.u8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r26,135(r31)
	PPC_STORE_U8(ctx.r31.u32 + 135, ctx.r26.u8);
	// beq cr6,0x837f4c1c
	if (cr6.eq) goto loc_837F4C1C;
	// lwz r11,384(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f4c1c
	if (cr6.eq) goto loc_837F4C1C;
	// lwz r11,380(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// beq cr6,0x837f4c1c
	if (cr6.eq) goto loc_837F4C1C;
	// li r27,1
	ctx.r27.s64 = 1;
loc_837F4B64:
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_837F4B68:
	// lbzx r11,r28,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837f4b98
	if (!cr6.eq) goto loc_837F4B98;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,20(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// clrlwi r4,r30,24
	ctx.r4.u64 = ctx.r30.u32 & 0xFF;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x837fe6e0
	ctx.lr = 0x837F4B88;
	sub_837FE6E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f4b98
	if (cr6.eq) goto loc_837F4B98;
	// stbx r27,r28,r30
	PPC_STORE_U8(ctx.r28.u32 + ctx.r30.u32, ctx.r27.u8);
loc_837F4B98:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(ctx.r30.u32, 3, xer);
	// blt cr6,0x837f4b68
	if (cr6.lt) goto loc_837F4B68;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837f4bc4
	if (!cr6.eq) goto loc_837F4BC4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r9,92(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x837f4c04
	if (!cr6.eq) goto loc_837F4C04;
loc_837F4BC4:
	// lbz r11,134(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 134);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837f4be4
	if (!cr6.eq) goto loc_837F4BE4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// lwz r9,108(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x837f4c04
	if (!cr6.eq) goto loc_837F4C04;
loc_837F4BE4:
	// lbz r11,135(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 135);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837f4c1c
	if (!cr6.eq) goto loc_837F4C1C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// lwz r9,124(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x837f4c1c
	if (cr6.eq) goto loc_837F4C1C;
loc_837F4C04:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837dc800
	ctx.lr = 0x837F4C0C;
	sub_837DC800(ctx, base);
	// lwz r11,380(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// bne cr6,0x837f4b64
	if (!cr6.eq) goto loc_837F4B64;
loc_837F4C1C:
	// stw r26,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837F4C28"))) PPC_WEAK_FUNC(sub_837F4C28);
PPC_FUNC_IMPL(__imp__sub_837F4C28) {
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
	ctx.lr = 0x837F4C30;
	__savegprlr_24(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f4ffc
	if (cr6.eq) goto loc_837F4FFC;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,1
	ctx.r28.s64 = 1;
	// li r24,2
	ctx.r24.s64 = 2;
	// li r26,3
	ctx.r26.s64 = 3;
	// li r27,4
	ctx.r27.s64 = 4;
loc_837F4C5C:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x837f4d58
	if (cr6.gt) goto loc_837F4D58;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x837f4cbc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837F4CBC;
	// bdzf 4*cr6+eq,0x837f4d10
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837F4D10;
	// bne cr6,0x837f4d40
	if (!cr6.eq) goto loc_837F4D40;
	// lwz r11,492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// addi r3,r31,488
	ctx.r3.s64 = ctx.r31.s64 + 488;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82cd17d8
	ctx.lr = 0x837F4C8C;
	sub_82CD17D8(ctx, base);
	// lwz r10,492(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r9,492(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// stw r9,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r9.u32);
	// lwz r8,492(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// stw r8,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r8.u32);
	// stw r30,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r30.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x837eb680
	ctx.lr = 0x837F4CB4;
	sub_837EB680(ctx, base);
	// stw r28,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r28.u32);
	// b 0x837f4d58
	goto loc_837F4D58;
loc_837F4CBC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f4d08
	if (cr6.eq) goto loc_837F4D08;
	// lwz r11,184(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x837f4d4c
	if (cr6.eq) goto loc_837F4D4C;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// beq cr6,0x837f4d4c
	if (cr6.eq) goto loc_837F4D4C;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837f4cf0
	if (!cr6.eq) goto loc_837F4CF0;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x837f4cfc
	goto loc_837F4CFC;
loc_837F4CF0:
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_837F4CFC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f4d4c
	if (cr6.eq) goto loc_837F4D4C;
loc_837F4D08:
	// stw r26,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r26.u32);
	// b 0x837f4d58
	goto loc_837F4D58;
loc_837F4D10:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r9,0,27,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1C;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x837e4038
	ctx.lr = 0x837F4D2C;
	sub_837E4038(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x837f4d58
	if (cr6.eq) goto loc_837F4D58;
	// stw r27,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r27.u32);
	// b 0x837f4d58
	goto loc_837F4D58;
loc_837F4D40:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f4d58
	if (cr6.eq) goto loc_837F4D58;
loc_837F4D4C:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x837f4010
	ctx.lr = 0x837F4D54;
	sub_837F4010(ctx, base);
	// stw r24,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r24.u32);
loc_837F4D58:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f4ffc
	if (cr6.eq) goto loc_837F4FFC;
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// bne cr6,0x837f4c5c
	if (!cr6.eq) goto loc_837F4C5C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f4ffc
	if (cr6.eq) goto loc_837F4FFC;
	// lwz r29,96(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r25,r31,96
	ctx.r25.s64 = ctx.r31.s64 + 96;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplw cr6,r29,r4
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r4.u32, xer);
	// beq cr6,0x837f4dac
	if (cr6.eq) goto loc_837F4DAC;
	// subf r11,r4,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x831ce420
	ctx.lr = 0x837F4DA4;
	sub_831CE420(ctx, base);
	// add r10,r28,r29
	ctx.r10.u64 = ctx.r28.u64 + ctx.r29.u64;
	// stw r10,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r10.u32);
loc_837F4DAC:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x837f4ffc
	if (!cr6.gt) goto loc_837F4FFC;
	// lwz r11,484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837f4df8
	if (!cr6.eq) goto loc_837F4DF8;
	// li r11,33
	ctx.r11.s64 = 33;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r4,412
	ctx.r4.s64 = 412;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82595718
	ctx.lr = 0x837F4DE0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837f4df0
	if (cr6.eq) goto loc_837F4DF0;
	// bl 0x83810b70
	ctx.lr = 0x837F4DEC;
	sub_83810B70(ctx, base);
	// b 0x837f4df4
	goto loc_837F4DF4;
loc_837F4DF0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_837F4DF4:
	// stw r3,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r3.u32);
loc_837F4DF8:
	// lwz r9,412(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// li r28,10
	ctx.r28.s64 = 10;
	// lwz r7,88(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// twllei r7,0
	// divwu r6,r8,r7
	ctx.r6.u32 = PPCDivide(ctx.r8.u32, ctx.r7.u32);
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mullw r5,r6,r7
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r30.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// stw r30,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r30.u32);
	// stw r30,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r30.u32);
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// stw r30,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r30.u32);
	// subf r10,r5,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r5.s64;
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// stw r30,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r30.u32);
	// stw r30,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r30.u32);
	// stw r30,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r30.u32);
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r30,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r30.u32);
	// stw r30,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r30.u32);
	// stw r30,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r30.u32);
	// stw r30,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r30.u32);
	// stw r30,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r30.u32);
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r30,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r30.u32);
	// stw r30,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r30.u32);
	// stw r30,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r30.u32);
	// stw r30,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r30.u32);
	// stw r30,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r30.u32);
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// stw r30,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r30.u32);
	// beq cr6,0x837f4ef0
	if (cr6.eq) goto loc_837F4EF0;
	// mulli r29,r10,100
	ctx.r29.s64 = ctx.r10.s64 * 100;
loc_837F4EA4:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// subf. r10,r29,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r29.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt 0x837f4ed8
	if (cr0.lt) goto loc_837F4ED8;
	// cmpwi cr6,r10,100
	cr6.compare<int32_t>(ctx.r10.s32, 100, xer);
	// bge cr6,0x837f4ed8
	if (!cr6.lt) goto loc_837F4ED8;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// divw r10,r10,r28
	ctx.r10.s32 = PPCDivide(ctx.r10.s32, ctx.r28.s32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x835977d8
	ctx.lr = 0x837F4ED8;
	sub_835977D8(ctx, base);
loc_837F4ED8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837dc920
	ctx.lr = 0x837F4EE0;
	sub_837DC920(ctx, base);
	// lwz r10,412(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x837f4ea4
	if (!cr6.eq) goto loc_837F4EA4;
loc_837F4EF0:
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// addi r29,r1,128
	ctx.r29.s64 = ctx.r1.s64 + 128;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
loc_837F4F00:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r4,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble 0x837f4f44
	if (!cr0.gt) goto loc_837F4F44;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f4f2c
	if (cr6.eq) goto loc_837F4F2C;
	// addi r3,r11,292
	ctx.r3.s64 = ctx.r11.s64 + 292;
	// bl 0x837f9710
	ctx.lr = 0x837F4F28;
	sub_837F9710(ctx, base);
	// b 0x837f4f30
	goto loc_837F4F30;
loc_837F4F2C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_837F4F30:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x835977d8
	ctx.lr = 0x837F4F44;
	sub_835977D8(ctx, base);
loc_837F4F44:
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// bne 0x837f4f00
	if (!cr0.eq) goto loc_837F4F00;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// lwz r26,112(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// subf r10,r26,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r26.s64;
	// srawi r28,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r28.s64 = ctx.r10.s32 >> 2;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x837f4fb0
	if (cr6.eq) goto loc_837F4FB0;
	// addi r27,r28,-1
	ctx.r27.s64 = ctx.r28.s64 + -1;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_837F4F74:
	// cmplw cr6,r29,r27
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, xer);
	// bge cr6,0x837f4f94
	if (!cr6.lt) goto loc_837F4F94;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x837f4fa0
	if (!cr6.lt) goto loc_837F4FA0;
loc_837F4F94:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x835977d8
	ctx.lr = 0x837F4FA0;
	sub_835977D8(ctx, base);
loc_837F4FA0:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, xer);
	// blt cr6,0x837f4f74
	if (cr6.lt) goto loc_837F4F74;
loc_837F4FB0:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x837f4fc8
	if (cr6.eq) goto loc_837F4FC8;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x837F4FC8;
	sub_825952B8(ctx, base);
loc_837F4FC8:
	// addi r31,r1,288
	ctx.r31.s64 = ctx.r1.s64 + 288;
	// li r29,9
	ctx.r29.s64 = 9;
loc_837F4FD0:
	// lwzu r4,-16(r31)
	ea = -16 + ctx.r31.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x837f4fe8
	if (cr6.eq) goto loc_837F4FE8;
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825952b8
	ctx.lr = 0x837F4FE8;
	sub_825952B8(ctx, base);
loc_837F4FE8:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// bge 0x837f4fd0
	if (!cr0.lt) goto loc_837F4FD0;
loc_837F4FFC:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837F5004"))) PPC_WEAK_FUNC(sub_837F5004);
PPC_FUNC_IMPL(__imp__sub_837F5004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837F5008"))) PPC_WEAK_FUNC(sub_837F5008);
PPC_FUNC_IMPL(__imp__sub_837F5008) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837F5010;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31743
	ctx.r31.s64 = -2080309248;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r3,-6828(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -6828);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x837f505c
	if (!cr6.eq) goto loc_837F505C;
	// li r11,33
	ctx.r11.s64 = 33;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,748
	ctx.r4.s64 = 748;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x837F5044;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837f5054
	if (cr6.eq) goto loc_837F5054;
	// bl 0x837f1770
	ctx.lr = 0x837F5050;
	sub_837F1770(ctx, base);
	// b 0x837f5058
	goto loc_837F5058;
loc_837F5054:
	// li r3,0
	ctx.r3.s64 = 0;
loc_837F5058:
	// stw r3,-6828(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6828, ctx.r3.u32);
loc_837F505C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x837e8a48
	ctx.lr = 0x837F5068;
	sub_837E8A48(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x837f5078
	if (!cr6.eq) goto loc_837F5078;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_837F5078:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x837dc0e8
	ctx.lr = 0x837F5080;
	sub_837DC0E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837F5088"))) PPC_WEAK_FUNC(sub_837F5088);
PPC_FUNC_IMPL(__imp__sub_837F5088) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837F5090;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,12(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x837f52a4
	if (cr6.eq) goto loc_837F52A4;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x837f52a4
	if (cr6.gt) goto loc_837F52A4;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x837f514c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837F514C;
	// bdzf 4*cr6+eq,0x837f51dc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837F51DC;
	// bne cr6,0x837f5264
	if (!cr6.eq) goto loc_837F5264;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bgt cr6,0x837f52a4
	if (cr6.gt) goto loc_837F52A4;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bge cr6,0x837f52a4
	if (!cr6.lt) goto loc_837F52A4;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837f5140
	if (cr6.eq) goto loc_837F5140;
	// lwz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x837f5140
	if (cr6.eq) goto loc_837F5140;
loc_837F5108:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// bl 0x837f3758
	ctx.lr = 0x837F5118;
	sub_837F3758(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// bl 0x837dc920
	ctx.lr = 0x837F512C;
	sub_837DC920(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,120(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 120);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x837f5108
	if (!cr6.eq) goto loc_837F5108;
loc_837F5140:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_837F514C:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bge cr6,0x837f52a4
	if (!cr6.lt) goto loc_837F52A4;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x837f3f90
	ctx.lr = 0x837F5164;
	sub_837F3F90(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837f51d0
	if (cr6.eq) goto loc_837F51D0;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x837f51d0
	if (cr6.eq) goto loc_837F51D0;
loc_837F5188:
	// lbz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837f51b4
	if (cr6.eq) goto loc_837F51B4;
	// addi r6,r11,172
	ctx.r6.s64 = ctx.r11.s64 + 172;
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// addi r5,r11,44
	ctx.r5.s64 = ctx.r11.s64 + 44;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x837f3ba8
	ctx.lr = 0x837F51A8;
	sub_837F3BA8(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_837F51B4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837dc800
	ctx.lr = 0x837F51BC;
	sub_837DC800(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x837f5188
	if (!cr6.eq) goto loc_837F5188;
loc_837F51D0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_837F51DC:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bge cr6,0x837f52a4
	if (!cr6.lt) goto loc_837F52A4;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837f5248
	if (cr6.eq) goto loc_837F5248;
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x837f5248
	if (cr6.eq) goto loc_837F5248;
loc_837F5210:
	// addi r5,r11,184
	ctx.r5.s64 = ctx.r11.s64 + 184;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r4,r11,312
	ctx.r4.s64 = ctx.r11.s64 + 312;
	// bl 0x837f3828
	ctx.lr = 0x837F5220;
	sub_837F3828(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// bl 0x837dc890
	ctx.lr = 0x837F5234;
	sub_837DC890(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,104(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x837f5210
	if (!cr6.eq) goto loc_837F5210;
loc_837F5248:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x837f52a4
	if (!cr6.lt) goto loc_837F52A4;
loc_837F5264:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// bl 0x837e5b10
	ctx.lr = 0x837F5278;
	sub_837E5B10(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837f52a4
	if (cr6.eq) goto loc_837F52A4;
	// addi r3,r29,164
	ctx.r3.s64 = ctx.r29.s64 + 164;
	// bl 0x837e5b10
	ctx.lr = 0x837F528C;
	sub_837E5B10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f52a4
	if (cr6.eq) goto loc_837F52A4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_837F52A4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837F52AC"))) PPC_WEAK_FUNC(sub_837F52AC);
PPC_FUNC_IMPL(__imp__sub_837F52AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837F52B0"))) PPC_WEAK_FUNC(sub_837F52B0);
PPC_FUNC_IMPL(__imp__sub_837F52B0) {
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
	// bl 0x837f34c0
	ctx.lr = 0x837F52D0;
	sub_837F34C0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f52e8
	if (cr6.eq) goto loc_837F52E8;
	// bl 0x82416268
	ctx.lr = 0x837F52E4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_837F52E8:
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

__attribute__((alias("__imp__sub_837F5300"))) PPC_WEAK_FUNC(sub_837F5300);
PPC_FUNC_IMPL(__imp__sub_837F5300) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x837F5308;
	__savegprlr_20(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,4768
	ctx.r9.s64 = ctx.r11.s64 + 4768;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r23,15
	ctx.r23.s64 = 15;
	// stw r30,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r30.u32);
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r23,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r23.u32);
	// addi r21,r3,292
	ctx.r21.s64 = ctx.r3.s64 + 292;
	// stb r30,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r30.u8);
	// stfs f0,116(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// stw r30,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r30.u32);
	// stfs f0,120(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// stw r30,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r30.u32);
	// stfs f0,124(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// stw r30,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r30.u32);
	// stfs f0,128(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 128, temp.u32);
	// stw r30,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r30.u32);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// addi r26,r31,12
	ctx.r26.s64 = ctx.r31.s64 + 12;
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// addi r27,r31,40
	ctx.r27.s64 = ctx.r31.s64 + 40;
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// stw r30,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r30.u32);
	// stw r30,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r30.u32);
	// stw r30,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// stw r30,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r30.u32);
	// stw r30,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r30.u32);
	// stfs f0,260(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 260, temp.u32);
	// stfs f0,264(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 264, temp.u32);
	// stfs f0,268(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 268, temp.u32);
	// stfs f0,272(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 272, temp.u32);
	// bl 0x837f1438
	ctx.lr = 0x837F53C8;
	sub_837F1438(ctx, base);
	// addi r3,r31,488
	ctx.r3.s64 = ctx.r31.s64 + 488;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8381b9d0
	ctx.lr = 0x837F53D8;
	sub_8381B9D0(ctx, base);
	// stw r30,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r30.u32);
	// stw r30,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r30.u32);
	// bl 0x837f08b8
	ctx.lr = 0x837F53EC;
	sub_837F08B8(ctx, base);
	// li r8,33
	ctx.r8.s64 = 33;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r4,188
	ctx.r4.s64 = 188;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x837F5408;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837f541c
	if (cr6.eq) goto loc_837F541C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x837f33d8
	ctx.lr = 0x837F5418;
	sub_837F33D8(ctx, base);
	// b 0x837f5420
	goto loc_837F5420;
loc_837F541C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_837F5420:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r30,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r30.u32);
	// stw r30,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r30.u32);
	// beq cr6,0x837f5460
	if (cr6.eq) goto loc_837F5460;
	// bl 0x837f2688
	ctx.lr = 0x837F543C;
	sub_837F2688(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837f5450
	if (cr6.eq) goto loc_837F5450;
	// bl 0x837f2688
	ctx.lr = 0x837F5448;
	sub_837F2688(ctx, base);
	// lwz r11,740(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 740);
	// stw r11,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r11.u32);
loc_837F5450:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,340(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 340);
	// stw r10,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r10.u32);
	// b 0x837f546c
	goto loc_837F546C;
loc_837F5460:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,287(r31)
	PPC_STORE_U8(ctx.r31.u32 + 287, ctx.r11.u8);
	// stb r11,184(r3)
	PPC_STORE_U8(ctx.r3.u32 + 184, ctx.r11.u8);
loc_837F546C:
	// li r24,-1
	ctx.r24.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8259cb28
	ctx.lr = 0x837F5484;
	sub_8259CB28(ctx, base);
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// lwz r10,4(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x837f5558
	if (cr0.eq) goto loc_837F5558;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// li r20,2
	ctx.r20.s64 = 2;
loc_837F54A8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwzx r4,r11,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// bl 0x8291fdc8
	ctx.lr = 0x837F54B4;
	sub_8291FDC8(ctx, base);
	// stw r23,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r23.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x837F54D4;
	sub_8259CB28(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x825a1da8
	ctx.lr = 0x837F54EC;
	sub_825A1DA8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x837f5500
	if (!cr6.lt) goto loc_837F5500;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_837F5500:
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x837f3580
	ctx.lr = 0x837F550C;
	sub_837F3580(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837f5528
	if (cr6.lt) goto loc_837F5528;
	// stw r20,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r20.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x837F5528;
	sub_825952B8(ctx, base);
loc_837F5528:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// lwz r10,4(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// stw r23,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r23.u32);
	// addi r28,r28,28
	ctx.r28.s64 = ctx.r28.s64 + 28;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r25,r8
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r8.u32, xer);
	// blt cr6,0x837f54a8
	if (cr6.lt) goto loc_837F54A8;
loc_837F5558:
	// lbz r11,287(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 287);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f5570
	if (cr6.eq) goto loc_837F5570;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x837f3670
	ctx.lr = 0x837F5570;
	sub_837F3670(ctx, base);
loc_837F5570:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837F557C"))) PPC_WEAK_FUNC(sub_837F557C);
PPC_FUNC_IMPL(__imp__sub_837F557C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837F5580"))) PPC_WEAK_FUNC(sub_837F5580);
PPC_FUNC_IMPL(__imp__sub_837F5580) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x837f4c28
	ctx.lr = 0x837F559C;
	sub_837F4C28(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_837F55B8"))) PPC_WEAK_FUNC(sub_837F55B8);
PPC_FUNC_IMPL(__imp__sub_837F55B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837F55C0;
	__savegprlr_28(ctx, base);
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,140(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 140);
	ctx.f0.f64 = double(temp.f32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,120(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r10,116(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r3,124(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r4,r30,166
	ctx.r4.s64 = ctx.r30.s64 + 166;
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r29,132(r31)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r31.u32 + 132);
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// bl 0x837e6858
	ctx.lr = 0x837F5624;
	sub_837E6858(ctx, base);
	// lwz r10,484(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// addi r4,r30,12
	ctx.r4.s64 = ctx.r30.s64 + 12;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r30,184(r10)
	PPC_STORE_U32(ctx.r10.u32 + 184, ctx.r30.u32);
loc_837F5634:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837f5634
	if (!cr6.eq) goto loc_837F5634;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// li r28,1
	ctx.r28.s64 = 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837f57e8
	if (cr6.eq) goto loc_837F57E8;
	// lwz r11,484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x837f5008
	ctx.lr = 0x837F5670;
	sub_837F5008(ctx, base);
	// lwz r10,32(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837F5684;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,484(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lfs f13,144(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,372(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 372, temp.u32);
	// lwz r7,484(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lfs f12,148(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,376(r7)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + 376, temp.u32);
	// lwz r6,484(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lbz r5,157(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 157);
	// lfs f31,9008(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// stb r5,380(r6)
	PPC_STORE_U8(ctx.r6.u32 + 380, ctx.r5.u8);
	// lwz r4,484(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// stfs f0,400(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 400, temp.u32);
	// stb r28,404(r4)
	PPC_STORE_U8(ctx.r4.u32 + 404, ctx.r28.u8);
	// lbz r3,164(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 164);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r3,484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// bne cr6,0x837f56ec
	if (!cr6.eq) goto loc_837F56EC;
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// b 0x837f56f8
	goto loc_837F56F8;
loc_837F56EC:
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lfs f1,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_837F56F8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837F5708;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f0,160(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x837f57dc
	if (cr6.eq) goto loc_837F57DC;
	// lbz r11,175(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 175);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x837f57dc
	if (cr6.lt) goto loc_837F57DC;
	// lwz r10,508(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// lwz r9,504(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r7,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// bge cr6,0x837f574c
	if (!cr6.lt) goto loc_837F574C;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// b 0x837f5750
	goto loc_837F5750;
loc_837F574C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_837F5750:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stfs f31,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stfs f31,140(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lfs f30,-25156(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -25156);
	ctx.f30.f64 = double(temp.f32);
	// stfs f30,128(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f31,156(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f31,172(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f31,176(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f31,188(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// beq cr6,0x837f57dc
	if (cr6.eq) goto loc_837F57DC;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x83802228
	ctx.lr = 0x837F57A8;
	sub_83802228(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f57dc
	if (cr6.eq) goto loc_837F57DC;
	// lfs f0,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// lfs f12,160(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	ctx.f12.f64 = double(temp.f32);
	// lwz r10,484(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lfs f0,8976(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8976);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,384(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + 384, temp.u32);
	// b 0x837f57fc
	goto loc_837F57FC;
loc_837F57DC:
	// lwz r11,484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// stfs f31,384(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 384, temp.u32);
	// b 0x837f57fc
	goto loc_837F57FC;
loc_837F57E8:
	// lwz r3,484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837F57FC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_837F57FC:
	// addi r5,r30,8
	ctx.r5.s64 = ctx.r30.s64 + 8;
	// addi r4,r31,312
	ctx.r4.s64 = ctx.r31.s64 + 312;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x837e45a0
	ctx.lr = 0x837F580C;
	sub_837E45A0(ctx, base);
	// lwz r10,316(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x837f5828
	if (cr6.eq) goto loc_837F5828;
	// addi r4,r11,20
	ctx.r4.s64 = ctx.r11.s64 + 20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837e6130
	ctx.lr = 0x837F5828;
	sub_837E6130(ctx, base);
loc_837F5828:
	// lwz r11,484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// addi r10,r31,152
	ctx.r10.s64 = ctx.r31.s64 + 152;
	// stw r10,188(r11)
	PPC_STORE_U32(ctx.r11.u32 + 188, ctx.r10.u32);
	// lwz r9,484(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lbz r8,196(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 196);
	// stb r8,192(r9)
	PPC_STORE_U8(ctx.r9.u32 + 192, ctx.r8.u8);
	// lbz r7,197(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 197);
	// lwz r6,484(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// stb r7,193(r6)
	PPC_STORE_U8(ctx.r6.u32 + 193, ctx.r7.u8);
	// stb r28,289(r31)
	PPC_STORE_U8(ctx.r31.u32 + 289, ctx.r28.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837F5860"))) PPC_WEAK_FUNC(sub_837F5860);
PPC_FUNC_IMPL(__imp__sub_837F5860) {
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
	ctx.lr = 0x837F5868;
	__savegprlr_24(ctx, base);
	// stfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f29.u64);
	// stfd f30,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f30.u64);
	// stfd f31,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f5f04
	if (cr6.eq) goto loc_837F5F04;
	// lwz r11,368(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 368);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f58cc
	if (cr6.eq) goto loc_837F58CC;
	// lwz r10,364(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 364);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// beq cr6,0x837f58cc
	if (cr6.eq) goto loc_837F58CC;
loc_837F58A8:
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x837eb700
	ctx.lr = 0x837F58B4;
	sub_837EB700(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837dc9b0
	ctx.lr = 0x837F58BC;
	sub_837DC9B0(ctx, base);
	// lwz r10,364(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 364);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x837f58a8
	if (!cr6.eq) goto loc_837F58A8;
loc_837F58CC:
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r29,r30,296
	ctx.r29.s64 = ctx.r30.s64 + 296;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x837e97d0
	ctx.lr = 0x837F58E4;
	sub_837E97D0(ctx, base);
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x837e97d0
	ctx.lr = 0x837F58FC;
	sub_837E97D0(ctx, base);
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// lfs f13,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x837e97d0
	ctx.lr = 0x837F5914;
	sub_837E97D0(ctx, base);
	// addi r4,r3,42
	ctx.r4.s64 = ctx.r3.s64 + 42;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bl 0x837e6a50
	ctx.lr = 0x837F592C;
	sub_837E6A50(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f30,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f31.f64 = double(temp.f32);
	// lfs f29,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f29.f64 = double(temp.f32);
	// fcmpu cr6,f31,f30
	cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// ble cr6,0x837f59b0
	if (!cr6.gt) goto loc_837F59B0;
	// fcmpu cr6,f29,f30
	cr6.compare(ctx.f29.f64, ctx.f30.f64);
	// ble cr6,0x837f59b0
	if (!cr6.gt) goto loc_837F59B0;
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// lwz r3,2056(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2056);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x837F5964;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x837f59b0
	if (!cr6.eq) goto loc_837F59B0;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r4,100
	ctx.r4.s64 = 100;
	// addi r3,r11,228
	ctx.r3.s64 = ctx.r11.s64 + 228;
	// bl 0x837f9708
	ctx.lr = 0x837F5980;
	sub_837F9708(ctx, base);
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// fsubs f13,f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f29.f64 - ctx.f31.f64));
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// lfs f0,25244(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 25244);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmadds f8,f9,f0,f31
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f31.f64));
	// stfs f8,68(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 68, temp.u32);
	// b 0x837f59b4
	goto loc_837F59B4;
loc_837F59B0:
	// stfs f29,68(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r30.u32 + 68, temp.u32);
loc_837F59B4:
	// lfs f0,260(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	ctx.f0.f64 = double(temp.f32);
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// stfs f0,116(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 116, temp.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lfs f13,264(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stfs f13,120(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 120, temp.u32);
	// addi r31,r30,116
	ctx.r31.s64 = ctx.r30.s64 + 116;
	// lfs f12,268(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 268);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,124(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 124, temp.u32);
	// lfs f11,272(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,128(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 128, temp.u32);
	// lbz r11,276(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 276);
	// stb r11,132(r30)
	PPC_STORE_U8(ctx.r30.u32 + 132, ctx.r11.u8);
	// bl 0x837e97d0
	ctx.lr = 0x837F59F0;
	sub_837E97D0(ctx, base);
	// lbz r10,21(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 21);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837f5a80
	if (cr6.eq) goto loc_837F5A80;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x837e97d0
	ctx.lr = 0x837F5A0C;
	sub_837E97D0(ctx, base);
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// bl 0x837e97d0
	ctx.lr = 0x837F5A38;
	sub_837E97D0(ctx, base);
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// lfs f0,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,128(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 128, temp.u32);
	// fcmpu cr6,f0,f30
	cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// lfs f13,772(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 772);
	ctx.f13.f64 = double(temp.f32);
	// bge cr6,0x837f5a58
	if (!cr6.lt) goto loc_837F5A58;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// b 0x837f5a64
	goto loc_837F5A64;
loc_837F5A58:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x837f5a68
	if (cr6.lt) goto loc_837F5A68;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_837F5A64:
	// stfs f0,128(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 128, temp.u32);
loc_837F5A68:
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x837e97d0
	ctx.lr = 0x837F5A78;
	sub_837E97D0(ctx, base);
	// lbz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 40);
	// stb r11,132(r30)
	PPC_STORE_U8(ctx.r30.u32 + 132, ctx.r11.u8);
loc_837F5A80:
	// stfs f30,64(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r30.u32 + 64, temp.u32);
	// stb r26,290(r30)
	PPC_STORE_U8(ctx.r30.u32 + 290, ctx.r26.u8);
	// stfs f30,92(r30)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r30.u32 + 92, temp.u32);
	// bl 0x837da198
	ctx.lr = 0x837F5A90;
	sub_837DA198(ctx, base);
	// lbz r11,11370(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11370);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f5abc
	if (cr6.eq) goto loc_837F5ABC;
	// lwz r11,320(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 320);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837f5abc
	if (!cr6.eq) goto loc_837F5ABC;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x837dcf80
	ctx.lr = 0x837F5AB0;
	sub_837DCF80(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x837e6130
	ctx.lr = 0x837F5ABC;
	sub_837E6130(ctx, base);
loc_837F5ABC:
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r10,100(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x837f5aec
	if (cr6.eq) goto loc_837F5AEC;
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,96(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x837f55b8
	ctx.lr = 0x837F5AE8;
	sub_837F55B8(ctx, base);
	// b 0x837f5b0c
	goto loc_837F5B0C;
loc_837F5AEC:
	// lwz r11,320(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 320);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f5b0c
	if (cr6.eq) goto loc_837F5B0C;
	// lwz r11,316(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 316);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r4,r11,20
	ctx.r4.s64 = ctx.r11.s64 + 20;
	// bl 0x837e6130
	ctx.lr = 0x837F5B0C;
	sub_837E6130(ctx, base);
loc_837F5B0C:
	// lwz r11,504(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 504);
	// addi r25,r30,504
	ctx.r25.s64 = ctx.r30.s64 + 504;
	// lwz r10,508(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 508);
	// li r24,1
	ctx.r24.s64 = 1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x837f5ba4
	if (cr6.eq) goto loc_837F5BA4;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// srawi. r10,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x837f5ba4
	if (cr0.eq) goto loc_837F5BA4;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// addi r27,r11,-13328
	ctx.r27.s64 = ctx.r11.s64 + -13328;
loc_837F5B40:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwzx r31,r29,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x837f5b84
	if (cr6.eq) goto loc_837F5B84;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stb r26,941(r31)
	PPC_STORE_U8(ctx.r31.u32 + 941, ctx.r26.u8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837f5b68
	if (cr6.eq) goto loc_837F5B68;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x837b1748
	ctx.lr = 0x837F5B68;
	sub_837B1748(ctx, base);
loc_837F5B68:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837db998
	ctx.lr = 0x837F5B70;
	sub_837DB998(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x837f5b84
	if (cr6.lt) goto loc_837F5B84;
	// cmpwi cr6,r3,25
	cr6.compare<int32_t>(ctx.r3.s32, 25, xer);
	// bge cr6,0x837f5b84
	if (!cr6.lt) goto loc_837F5B84;
	// stbx r24,r3,r27
	PPC_STORE_U8(ctx.r3.u32 + ctx.r27.u32, ctx.r24.u8);
loc_837F5B84:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r28,r8
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r8.u32, xer);
	// blt cr6,0x837f5b40
	if (cr6.lt) goto loc_837F5B40;
loc_837F5BA4:
	// lwz r11,384(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 384);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f5c7c
	if (cr6.eq) goto loc_837F5C7C;
	// lwz r11,380(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 380);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, xer);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// beq cr6,0x837f5c7c
	if (cr6.eq) goto loc_837F5C7C;
loc_837F5BC8:
	// li r7,2
	ctx.r7.s64 = 2;
	// addi r10,r6,388
	ctx.r10.s64 = ctx.r6.s64 + 388;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// addi r9,r10,2
	ctx.r9.s64 = ctx.r10.s64 + 2;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
loc_837F5BE0:
	// stbx r26,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r26.u8);
	// stbx r26,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r26.u8);
	// stbx r26,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r26.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x837f5be0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837F5BE0;
	// stb r26,6(r10)
	PPC_STORE_U8(ctx.r10.u32 + 6, ctx.r26.u8);
	// lwz r11,280(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 280);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// blt cr6,0x837f5c08
	if (cr6.lt) goto loc_837F5C08;
	// stb r26,24(r6)
	PPC_STORE_U8(ctx.r6.u32 + 24, ctx.r26.u8);
loc_837F5C08:
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r11,20(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r7,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// bge cr6,0x837f5c38
	if (!cr6.lt) goto loc_837F5C38;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x837f5c3c
	if (!cr6.eq) goto loc_837F5C3C;
loc_837F5C38:
	// stb r26,24(r6)
	PPC_STORE_U8(ctx.r6.u32 + 24, ctx.r26.u8);
loc_837F5C3C:
	// lbz r11,24(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f5c60
	if (cr6.eq) goto loc_837F5C60;
	// lfs f0,300(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 300);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// blt cr6,0x837f5c60
	if (cr6.lt) goto loc_837F5C60;
	// addi r4,r6,16
	ctx.r4.s64 = ctx.r6.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x837e6b58
	ctx.lr = 0x837F5C60;
	sub_837E6B58(ctx, base);
loc_837F5C60:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x837dc800
	ctx.lr = 0x837F5C6C;
	sub_837DC800(ctx, base);
	// lwz r11,380(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 380);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, xer);
	// bne cr6,0x837f5bc8
	if (!cr6.eq) goto loc_837F5BC8;
loc_837F5C7C:
	// lwz r11,496(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 496);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f5d08
	if (cr6.eq) goto loc_837F5D08;
	// lwz r10,492(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 492);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x837f5d08
	if (cr6.eq) goto loc_837F5D08;
loc_837F5C9C:
	// lwz r31,16(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// stb r26,336(r31)
	PPC_STORE_U8(ctx.r31.u32 + 336, ctx.r26.u8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837f5cb8
	if (cr6.eq) goto loc_837F5CB8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83b56ab0
	ctx.lr = 0x837F5CB8;
	sub_83B56AB0(ctx, base);
loc_837F5CB8:
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837f5ccc
	if (cr6.eq) goto loc_837F5CCC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83b56848
	ctx.lr = 0x837F5CCC;
	sub_83B56848(ctx, base);
loc_837F5CCC:
	// lwz r31,168(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x837f5cf0
	if (cr6.eq) goto loc_837F5CF0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837f5cec
	if (cr6.eq) goto loc_837F5CEC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833c8980
	ctx.lr = 0x837F5CEC;
	sub_833C8980(ctx, base);
loc_837F5CEC:
	// stb r26,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r26.u8);
loc_837F5CF0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8330ee50
	ctx.lr = 0x837F5CF8;
	sub_8330EE50(ctx, base);
	// lwz r10,492(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 492);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x837f5c9c
	if (!cr6.eq) goto loc_837F5C9C;
loc_837F5D08:
	// lwz r11,400(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 400);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f5d90
	if (cr6.eq) goto loc_837F5D90;
	// lwz r11,396(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 396);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// beq cr6,0x837f5d90
	if (cr6.eq) goto loc_837F5D90;
	// addi r28,r30,488
	ctx.r28.s64 = ctx.r30.s64 + 488;
loc_837F5D2C:
	// addi r29,r31,20
	ctx.r29.s64 = ctx.r31.s64 + 20;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82d50810
	ctx.lr = 0x837F5D40;
	sub_82D50810(ctx, base);
	// lwz r11,492(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 492);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x837f5d54
	if (!cr6.eq) goto loc_837F5D54;
	// stb r26,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r26.u8);
loc_837F5D54:
	// lbz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f5d78
	if (cr6.eq) goto loc_837F5D78;
	// lfs f0,440(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// blt cr6,0x837f5d78
	if (cr6.lt) goto loc_837F5D78;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x837e6ec8
	ctx.lr = 0x837F5D78;
	sub_837E6EC8(ctx, base);
loc_837F5D78:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837dc890
	ctx.lr = 0x837F5D80;
	sub_837DC890(ctx, base);
	// lwz r11,396(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 396);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x837f5d2c
	if (!cr6.eq) goto loc_837F5D2C;
loc_837F5D90:
	// lwz r11,336(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 336);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f5ddc
	if (cr6.eq) goto loc_837F5DDC;
	// lwz r10,332(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 332);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x837f5ddc
	if (cr6.eq) goto loc_837F5DDC;
loc_837F5DB0:
	// stb r24,116(r11)
	PPC_STORE_U8(ctx.r11.u32 + 116, ctx.r24.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x837eb9f8
	ctx.lr = 0x837F5DC4;
	sub_837EB9F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837dc6e0
	ctx.lr = 0x837F5DCC;
	sub_837DC6E0(ctx, base);
	// lwz r10,332(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 332);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x837f5db0
	if (!cr6.eq) goto loc_837F5DB0;
loc_837F5DDC:
	// lwz r11,352(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 352);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f5f04
	if (cr6.eq) goto loc_837F5F04;
	// lwz r10,136(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// addi r31,r30,136
	ctx.r31.s64 = ctx.r30.s64 + 136;
	// lwz r9,140(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// extsw r4,r9
	ctx.r4.s64 = ctx.r9.s32;
	// addic r7,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r27,r5,r24
	ctx.r27.u64 = ctx.r5.u64 & ctx.r24.u64;
	// beq cr6,0x837f5e34
	if (cr6.eq) goto loc_837F5E34;
	// subf r11,r4,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x831ce420
	ctx.lr = 0x837F5E2C;
	sub_831CE420(ctx, base);
	// add r10,r28,r29
	ctx.r10.u64 = ctx.r28.u64 + ctx.r29.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_837F5E34:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// subf r11,r10,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(ctx.r11.u32, 20, xer);
	// bge cr6,0x837f5e64
	if (!cr6.lt) goto loc_837F5E64;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// subfic r5,r11,20
	xer.ca = ctx.r11.u32 <= 20;
	ctx.r5.s64 = 20 - ctx.r11.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a81748
	ctx.lr = 0x837F5E60;
	sub_82A81748(ctx, base);
	// b 0x837f5e94
	goto loc_837F5E94;
loc_837F5E64:
	// ble cr6,0x837f5e94
	if (!cr6.gt) goto loc_837F5E94;
	// addi r29,r10,80
	ctx.r29.s64 = ctx.r10.s64 + 80;
	// cmplw cr6,r29,r4
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r4.u32, xer);
	// beq cr6,0x837f5e94
	if (cr6.eq) goto loc_837F5E94;
	// subf r11,r4,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x831ce420
	ctx.lr = 0x837F5E8C;
	sub_831CE420(ctx, base);
	// add r10,r29,r28
	ctx.r10.u64 = ctx.r29.u64 + ctx.r28.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_837F5E94:
	// lwz r11,348(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 348);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// beq cr6,0x837f5f04
	if (cr6.eq) goto loc_837F5F04;
	// clrlwi r29,r27,24
	ctx.r29.u64 = ctx.r27.u32 & 0xFF;
loc_837F5EAC:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x837f5ec0
	if (cr6.eq) goto loc_837F5EC0;
	// addi r4,r8,16
	ctx.r4.s64 = ctx.r8.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x837de8b0
	ctx.lr = 0x837F5EC0;
	sub_837DE8B0(ctx, base);
loc_837F5EC0:
	// stb r24,208(r8)
	PPC_STORE_U8(ctx.r8.u32 + 208, ctx.r24.u8);
	// addi r31,r8,16
	ctx.r31.s64 = ctx.r8.s64 + 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x837dd780
	ctx.lr = 0x837F5ED8;
	sub_837DD780(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x837f5eec
	if (!cr6.eq) goto loc_837F5EEC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x837de8b0
	ctx.lr = 0x837F5EEC;
	sub_837DE8B0(ctx, base);
loc_837F5EEC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837dc770
	ctx.lr = 0x837F5EF4;
	sub_837DC770(ctx, base);
	// lwz r11,348(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 348);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// bne cr6,0x837f5eac
	if (!cr6.eq) goto loc_837F5EAC;
loc_837F5F04:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837F5F18"))) PPC_WEAK_FUNC(sub_837F5F18);
PPC_FUNC_IMPL(__imp__sub_837F5F18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x837F5F20;
	__savegprlr_25(ctx, base);
	// stfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f29.u64);
	// stfd f30,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x831d1254
	ctx.lr = 0x837F5F34;
	__savevmx_124(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,484(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 484);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r25,1
	ctx.r25.s64 = 1;
	// addi r26,r11,9008
	ctx.r26.s64 = ctx.r11.s64 + 9008;
	// lfs f29,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f29.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837f60ec
	if (cr6.eq) goto loc_837F60EC;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// addi r28,r3,96
	ctx.r28.s64 = ctx.r3.s64 + 96;
	// lwz r10,100(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x837f60ec
	if (cr6.eq) goto loc_837F60EC;
	// lfs f31,76(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f31.f64 = double(temp.f32);
loc_837F5F74:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r9,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lbz r8,160(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 160);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x837f5fac
	if (!cr6.eq) goto loc_837F5FAC;
	// lwz r11,484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r10,180(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bgt cr6,0x837f5fac
	if (cr6.gt) goto loc_837F5FAC;
	// lfs f1,92(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f1.f64 = double(temp.f32);
	// b 0x837f5fc8
	goto loc_837F5FC8;
loc_837F5FAC:
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,92(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x837f5fc4
	if (!cr6.gt) goto loc_837F5FC4;
	// fsubs f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// b 0x837f5fc8
	goto loc_837F5FC8;
loc_837F5FC4:
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
loc_837F5FC8:
	// lwz r3,484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837F5FE0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x837f6014
	if (!cr6.eq) goto loc_837F6014;
	// lbz r11,162(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 162);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f6014
	if (cr6.eq) goto loc_837F6014;
	// lwz r3,484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lfs f30,392(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 392);
	ctx.f30.f64 = double(temp.f32);
	// bl 0x83810aa0
	ctx.lr = 0x837F6004;
	sub_83810AA0(ctx, base);
	// fsubs f0,f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f1.f64));
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// stw r27,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r27.u32);
	// b 0x837f6098
	goto loc_837F6098;
loc_837F6014:
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// subf r7,r8,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r8.s64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// srawi r6,r7,2
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 2;
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// ble cr6,0x837f609c
	if (!cr6.gt) goto loc_837F609C;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x837f6078
	if (!cr6.eq) goto loc_837F6078;
	// lwz r3,484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// rotlwi r30,r8,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f30,392(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 392);
	ctx.f30.f64 = double(temp.f32);
	// bl 0x83810aa0
	ctx.lr = 0x837F6054;
	sub_83810AA0(ctx, base);
	// fsubs f0,f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f1.f64));
	// lwzx r10,r29,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// lfs f13,92(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f12,8(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r9.u32);
	// b 0x837f6098
	goto loc_837F6098;
loc_837F6078:
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,92(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// lwzx r7,r8,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lfs f13,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x837f609c
	if (cr6.lt) goto loc_837F609C;
	// stw r10,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r10.u32);
loc_837F6098:
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_837F609C:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f60c8
	if (cr6.eq) goto loc_837F60C8;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x837f55b8
	ctx.lr = 0x837F60C4;
	sub_837F55B8(ctx, base);
	// b 0x837f5f74
	goto loc_837F5F74;
loc_837F60C8:
	// lbz r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 288);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f60e0
	if (cr6.eq) goto loc_837F60E0;
	// lbz r11,289(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 289);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f60ec
	if (cr6.eq) goto loc_837F60EC;
loc_837F60E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837dc338
	ctx.lr = 0x837F60E8;
	sub_837DC338(ctx, base);
	// stb r27,289(r31)
	PPC_STORE_U8(ctx.r31.u32 + 289, ctx.r27.u8);
loc_837F60EC:
	// lwz r11,384(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f61b0
	if (cr6.eq) goto loc_837F61B0;
	// lwz r10,380(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x837f61b0
	if (cr6.eq) goto loc_837F61B0;
loc_837F610C:
	// lbz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837f6198
	if (cr6.eq) goto loc_837F6198;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lfs f13,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,504(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// lfs f0,300(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// fmr f31,f13
	ctx.f31.f64 = ctx.f13.f64;
	// fcmpu cr6,f0,f29
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// lwzx r30,r8,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// bge cr6,0x837f6140
	if (!cr6.lt) goto loc_837F6140;
	// fadds f31,f0,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
loc_837F6140:
	// lbz r10,941(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 941);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837f6154
	if (cr6.eq) goto loc_837F6154;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// b 0x837f6174
	goto loc_837F6174;
loc_837F6154:
	// fadds f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fcmpu cr6,f0,f29
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// blt cr6,0x837f6198
	if (cr6.lt) goto loc_837F6198;
	// addi r29,r11,16
	ctx.r29.s64 = ctx.r11.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x837e6b58
	ctx.lr = 0x837F6170;
	sub_837E6B58(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_837F6174:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837e70f0
	ctx.lr = 0x837F617C;
	sub_837E70F0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f2,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837F6198;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_837F6198:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837dc800
	ctx.lr = 0x837F61A0;
	sub_837DC800(ctx, base);
	// lwz r10,380(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x837f610c
	if (!cr6.eq) goto loc_837F610C;
loc_837F61B0:
	// lwz r11,400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f629c
	if (cr6.eq) goto loc_837F629C;
	// lwz r11,396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// beq cr6,0x837f629c
	if (cr6.eq) goto loc_837F629C;
loc_837F61D0:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r29,r30,20
	ctx.r29.s64 = ctx.r30.s64 + 20;
	// lbz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// beq cr6,0x837f6284
	if (cr6.eq) goto loc_837F6284;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r31,488
	ctx.r3.s64 = ctx.r31.s64 + 488;
	// bl 0x82a80fc8
	ctx.lr = 0x837F61F4;
	sub_82A80FC8(ctx, base);
	// lfs f0,440(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 440);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f31,f13
	ctx.f31.f64 = ctx.f13.f64;
	// fcmpu cr6,f0,f29
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x837f6210
	if (!cr6.lt) goto loc_837F6210;
	// fadds f31,f0,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
loc_837F6210:
	// lwz r11,160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// lbz r10,336(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 336);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f6224
	if (cr6.eq) goto loc_837F6224;
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
loc_837F6224:
	// lwz r11,164(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f6234
	if (cr6.eq) goto loc_837F6234;
	// lbz r10,25(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25);
loc_837F6234:
	// lwz r11,168(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f6244
	if (cr6.eq) goto loc_837F6244;
	// lbz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
loc_837F6244:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837f6268
	if (!cr6.eq) goto loc_837F6268;
	// fadds f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fcmpu cr6,f0,f29
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// blt cr6,0x837f6284
	if (cr6.lt) goto loc_837F6284;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837e6ec8
	ctx.lr = 0x837F6268;
	sub_837E6EC8(ctx, base);
loc_837F6268:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f2,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837F6284;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_837F6284:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837dc890
	ctx.lr = 0x837F628C;
	sub_837DC890(ctx, base);
	// lwz r11,396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bne cr6,0x837f61d0
	if (!cr6.eq) goto loc_837F61D0;
loc_837F629C:
	// lwz r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f6310
	if (cr6.eq) goto loc_837F6310;
	// lwz r10,332(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x837f6310
	if (cr6.eq) goto loc_837F6310;
loc_837F62BC:
	// lfs f13,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lfs f0,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x837f62ec
	if (cr6.lt) goto loc_837F62EC;
	// lfs f0,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x837f62ec
	if (!cr6.gt) goto loc_837F62EC;
	// fcmpu cr6,f0,f29
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x837f62ec
	if (!cr6.gt) goto loc_837F62EC;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
loc_837F62EC:
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837eb9f8
	ctx.lr = 0x837F62F8;
	sub_837EB9F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837dc6e0
	ctx.lr = 0x837F6300;
	sub_837DC6E0(ctx, base);
	// lwz r10,332(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x837f62bc
	if (!cr6.eq) goto loc_837F62BC;
loc_837F6310:
	// lwz r11,352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f6384
	if (cr6.eq) goto loc_837F6384;
	// lwz r10,348(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x837f6384
	if (cr6.eq) goto loc_837F6384;
loc_837F6330:
	// lfs f13,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lfs f0,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x837f6360
	if (cr6.lt) goto loc_837F6360;
	// lfs f0,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x837f6360
	if (!cr6.gt) goto loc_837F6360;
	// fcmpu cr6,f0,f29
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x837f6360
	if (!cr6.gt) goto loc_837F6360;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
loc_837F6360:
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837dd780
	ctx.lr = 0x837F636C;
	sub_837DD780(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837dc770
	ctx.lr = 0x837F6374;
	sub_837DC770(ctx, base);
	// lwz r10,348(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x837f6330
	if (!cr6.eq) goto loc_837F6330;
loc_837F6384:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f6608
	if (cr6.eq) goto loc_837F6608;
	// lwz r30,436(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 436);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x837a4b90
	ctx.lr = 0x837F63A0;
	sub_837A4B90(ctx, base);
	// lvlx128 v63,r0,r26
	temp.u32 = ctx.r26.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// vspltw128 v62,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x837a4438
	ctx.lr = 0x837F63B8;
	sub_837A4438(ctx, base);
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f63dc
	if (cr6.eq) goto loc_837F63DC;
	// lbz r11,132(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 132);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f63dc
	if (cr6.eq) goto loc_837F63DC;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_837F63DC:
	// lwz r11,384(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f65a0
	if (cr6.eq) goto loc_837F65A0;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f65a0
	if (cr6.eq) goto loc_837F65A0;
	// lwz r10,380(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lfs f30,-23580(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -23580);
	ctx.f30.f64 = double(temp.f32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x837f65a0
	if (cr6.eq) goto loc_837F65A0;
	// addi r9,r1,256
	ctx.r9.s64 = ctx.r1.s64 + 256;
	// lwz r30,504(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// addi r8,r1,240
	ctx.r8.s64 = ctx.r1.s64 + 240;
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// lis r5,-32222
	ctx.r5.s64 = -2111700992;
	// rotlwi r28,r10,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lvx128 v127,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lvx128 v126,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v125,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v125.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v124,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v124.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r10,22672
	ctx.r29.s64 = ctx.r10.s64 + 22672;
	// lfs f31,-26260(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -26260);
	ctx.f31.f64 = double(temp.f32);
loc_837F6448:
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lbz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 24);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// lwzx r11,r8,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	// beq cr6,0x837f658c
	if (cr6.eq) goto loc_837F658C;
	// lbz r10,941(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 941);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837f658c
	if (cr6.eq) goto loc_837F658C;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lfs f13,228(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// vspltisw v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_set1_epi32(int(0x0)));
	// lfs f0,224(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// lfs f12,232(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f12.f64 = double(temp.f32);
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v13,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// vspltw128 v12,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// vmaddcfp128 v13,v125,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v125.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vspltw128 v11,v63,3
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x0));
	// vspltw128 v10,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x55));
	// vmaddcfp128 v12,v124,v12,v0
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v124.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp128 v13,v127,v11,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v127.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp128 v12,v126,v10,v12
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v126.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vaddfp128 v61,v12,v13
	simde_mm_store_ps(ctx.v61.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vspltw128 v60,v61,0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xFF));
	// vspltw128 v59,v61,3
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0x0));
	// vspltw128 v58,v61,1
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xAA));
	// vspltw128 v57,v61,2
	simde_mm_store_si128((simde__m128i*)ctx.v57.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0x55));
	// stvx128 v60,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f12,128(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// stvx128 v59,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f13.f64 = double(temp.f32);
	// fneg f0,f13
	ctx.f0.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stvx128 v58,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// fcmpu cr6,f0,f12
	cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// stvx128 v57,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bge cr6,0x837f658c
	if (!cr6.lt) goto loc_837F658C;
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bge cr6,0x837f658c
	if (!cr6.lt) goto loc_837F658C;
	// lfs f12,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x837f658c
	if (!cr6.lt) goto loc_837F658C;
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bge cr6,0x837f658c
	if (!cr6.lt) goto loc_837F658C;
	// lfs f0,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x837f658c
	if (!cr6.gt) goto loc_837F658C;
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x837f658c
	if (!cr6.lt) goto loc_837F658C;
	// lvx128 v56,r0,r26
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r26.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupkd3d128 v7,v0,0
	vTemp.u32[0] = ctx.v0.u8[3] | 0x3F800000;
	vTemp.u32[1] = ctx.v0.u8[0] | 0x3F800000;
	vTemp.u32[2] = ctx.v0.u8[1] | 0x3F800000;
	vTemp.u32[3] = ctx.v0.u8[2] | 0x3F800000;
	ctx.v7 = vTemp;
	// vsubfp128 v55,v56,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v55.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v56.f32), simde_mm_load_ps(ctx.v63.f32)));
	// lvx128 v9,r0,r29
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// vmsum3fp128 v13,v55,v55
	simde_mm_store_ps(ctx.v13.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v55.f32), simde_mm_load_ps(ctx.v55.f32), 0xEF));
	// vrsqrtefp v12,v13
	simde_mm_store_ps(ctx.v12.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_sqrt_ps(simde_mm_load_ps(ctx.v13.f32))));
	// vcmpeqfp128 v54,v13,v0
	simde_mm_store_ps(ctx.v54.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v11,v12,v13,v0
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vcmpeqfp128 v53,v12,v0
	simde_mm_store_ps(ctx.v53.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v9,v11,v9,v0
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v0,v12,v11,v7
	simde_mm_store_ps(ctx.v0.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v7.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vor128 v8,v54,v53
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// vmaddfp v0,v0,v9,v11
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vsel v12,v0,v13,v8
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8))));
	// vspltw128 v52,v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v52.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0xFF));
	// stvx128 v52,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,176(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x837f658c
	if (!cr6.lt) goto loc_837F658C;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// fmr f30,f0
	ctx.f30.f64 = ctx.f0.f64;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_837F658C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837dc800
	ctx.lr = 0x837F6594;
	sub_837DC800(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// bne cr6,0x837f6448
	if (!cr6.eq) goto loc_837F6448;
loc_837F65A0:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// addi r30,r11,2444
	ctx.r30.s64 = ctx.r11.s64 + 2444;
	// beq cr6,0x837f65e8
	if (cr6.eq) goto loc_837F65E8;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r30,-176
	ctx.r4.s64 = ctx.r30.s64 + -176;
	// addi r3,r30,-160
	ctx.r3.s64 = ctx.r30.s64 + -160;
	// bl 0x833c7f20
	ctx.lr = 0x837F65C4;
	sub_833C7F20(ctx, base);
	// addi r4,r30,-136
	ctx.r4.s64 = ctx.r30.s64 + -136;
	// addi r3,r30,-120
	ctx.r3.s64 = ctx.r30.s64 + -120;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x833c7f20
	ctx.lr = 0x837F65D4;
	sub_833C7F20(ctx, base);
	// addi r4,r30,-96
	ctx.r4.s64 = ctx.r30.s64 + -96;
	// addi r3,r30,-80
	ctx.r3.s64 = ctx.r30.s64 + -80;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// bl 0x833c8078
	ctx.lr = 0x837F65E4;
	sub_833C8078(ctx, base);
	// b 0x837f6608
	goto loc_837F6608;
loc_837F65E8:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,-56
	ctx.r4.s64 = ctx.r30.s64 + -56;
	// addi r3,r30,-40
	ctx.r3.s64 = ctx.r30.s64 + -40;
	// bl 0x833c7f20
	ctx.lr = 0x837F65F8;
	sub_833C7F20(ctx, base);
	// addi r4,r30,-16
	ctx.r4.s64 = ctx.r30.s64 + -16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x833c7f20
	ctx.lr = 0x837F6608;
	sub_833C7F20(ctx, base);
loc_837F6608:
	// stb r25,290(r31)
	PPC_STORE_U8(ctx.r31.u32 + 290, ctx.r25.u8);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x831d14ec
	ctx.lr = 0x837F6618;
	__restvmx_124(ctx, base);
	// lfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f30,-80(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837F6628"))) PPC_WEAK_FUNC(sub_837F6628);
PPC_FUNC_IMPL(__imp__sub_837F6628) {
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
	// bl 0x837f5860
	ctx.lr = 0x837F6640;
	sub_837F5860(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_837F665C"))) PPC_WEAK_FUNC(sub_837F665C);
PPC_FUNC_IMPL(__imp__sub_837F665C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837F6660"))) PPC_WEAK_FUNC(sub_837F6660);
PPC_FUNC_IMPL(__imp__sub_837F6660) {
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
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837f6688
	if (cr6.eq) goto loc_837F6688;
	// bl 0x837e9768
	ctx.lr = 0x837F6688;
	sub_837E9768(ctx, base);
loc_837F6688:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// lfs f31,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,72(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stfs f31,76(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// bgt cr6,0x837f6918
	if (cr6.gt) goto loc_837F6918;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x837f66f0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837F66F0;
	// bdzf 4*cr6+eq,0x837f6714
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837F6714;
	// bdzf 4*cr6+eq,0x837f6740
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837F6740;
	// bdzf 4*cr6+eq,0x837f6764
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837F6764;
	// bdzf 4*cr6+eq,0x837f6784
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837F6784;
	// bne cr6,0x837f67a0
	if (!cr6.eq) goto loc_837F67A0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837f66e8
	if (cr6.eq) goto loc_837F66E8;
	// bl 0x837f47a8
	ctx.lr = 0x837F66D4;
	sub_837F47A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f6918
	if (cr6.eq) goto loc_837F6918;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837f49c0
	ctx.lr = 0x837F66E8;
	sub_837F49C0(ctx, base);
loc_837F66E8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
loc_837F66F0:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837f670c
	if (cr6.eq) goto loc_837F670C;
	// bl 0x837f47a8
	ctx.lr = 0x837F6700;
	sub_837F47A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f6918
	if (cr6.eq) goto loc_837F6918;
loc_837F670C:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
loc_837F6714:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837f6738
	if (cr6.eq) goto loc_837F6738;
	// bl 0x837f47a8
	ctx.lr = 0x837F6724;
	sub_837F47A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f6918
	if (cr6.eq) goto loc_837F6918;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837f4a60
	ctx.lr = 0x837F6738;
	sub_837F4A60(ctx, base);
loc_837F6738:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
loc_837F6740:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837f675c
	if (cr6.eq) goto loc_837F675C;
	// bl 0x837f47a8
	ctx.lr = 0x837F6750;
	sub_837F47A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f6918
	if (cr6.eq) goto loc_837F6918;
loc_837F675C:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
loc_837F6764:
	// lbz r11,284(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 284);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f68b8
	if (cr6.eq) goto loc_837F68B8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x837f4c28
	ctx.lr = 0x837F677C;
	sub_837F4C28(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
loc_837F6784:
	// lbz r11,284(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 284);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f6918
	if (cr6.eq) goto loc_837F6918;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837f5860
	ctx.lr = 0x837F6798;
	sub_837F5860(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
loc_837F67A0:
	// lfs f0,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x837f67cc
	if (!cr6.gt) goto loc_837F67CC;
	// lfs f13,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x837f67cc
	if (cr6.lt) goto loc_837F67CC;
	// lbz r11,286(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 286);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837f67cc
	if (!cr6.eq) goto loc_837F67CC;
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
loc_837F67CC:
	// lfs f0,248(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x837f6848
	if (!cr6.gt) goto loc_837F6848;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f6848
	if (cr6.eq) goto loc_837F6848;
	// lbz r10,407(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 407);
	// cmplwi cr6,r10,255
	cr6.compare<uint32_t>(ctx.r10.u32, 255, xer);
	// bne cr6,0x837f6848
	if (!cr6.eq) goto loc_837F6848;
	// lwz r3,420(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 420);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837f680c
	if (cr6.eq) goto loc_837F680C;
	// bl 0x837f48f0
	ctx.lr = 0x837F6800;
	sub_837F48F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f6848
	if (cr6.eq) goto loc_837F6848;
loc_837F680C:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f12,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,248(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-20096(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -20096);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x837f682c
	if (cr6.gt) goto loc_837F682C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_837F682C:
	// lfs f12,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f31
	cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// ble cr6,0x837f6840
	if (!cr6.gt) goto loc_837F6840;
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x837f6844
	if (!cr6.gt) goto loc_837F6844;
loc_837F6840:
	// stfs f0,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
loc_837F6844:
	// stfs f31,248(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 248, temp.u32);
loc_837F6848:
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// lfs f11,244(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f10,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,80(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// lfs f0,24504(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24504);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f9,f0,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// fmadds f0,f9,f10,f12
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f10.f64 + ctx.f12.f64));
	// ble cr6,0x837f687c
	if (!cr6.gt) goto loc_837F687C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// li r11,1
	ctx.r11.s64 = 1;
loc_837F687C:
	// lfs f13,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f31
	cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// ble cr6,0x837f6894
	if (!cr6.gt) goto loc_837F6894;
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x837f6894
	if (!cr6.gt) goto loc_837F6894;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_837F6894:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x837f68c4
	if (!cr6.gt) goto loc_837F68C4;
	// fsubs f13,f0,f12
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stfs f13,76(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// lfs f0,27608(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 27608);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f11,72(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// b 0x837f68cc
	goto loc_837F68CC;
loc_837F68B8:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x837f4c28
	ctx.lr = 0x837F68C0;
	sub_837F4C28(ctx, base);
	// b 0x837f6918
	goto loc_837F6918;
loc_837F68C4:
	// stfs f31,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stfs f31,76(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
loc_837F68CC:
	// lbz r10,290(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 290);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837f68e4
	if (!cr6.eq) goto loc_837F68E4;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f6900
	if (cr6.eq) goto loc_837F6900;
loc_837F68E4:
	// lfs f13,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,92(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// fadds f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fadds f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f10,64(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f9,92(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// fmr f11,f13
	ctx.f11.f64 = ctx.f13.f64;
loc_837F6900:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stfs f31,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f6918
	if (cr6.eq) goto loc_837F6918;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837f5f18
	ctx.lr = 0x837F6918;
	sub_837F5F18(ctx, base);
loc_837F6918:
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

__attribute__((alias("__imp__sub_837F6930"))) PPC_WEAK_FUNC(sub_837F6930);
PPC_FUNC_IMPL(__imp__sub_837F6930) {
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
	// bl 0x83809388
	ctx.lr = 0x837F6940;
	sub_83809388(ctx, base);
	// bl 0x83806558
	ctx.lr = 0x837F6944;
	sub_83806558(ctx, base);
	// bl 0x83807228
	ctx.lr = 0x837F6948;
	sub_83807228(ctx, base);
	// bl 0x838068e0
	ctx.lr = 0x837F694C;
	sub_838068E0(ctx, base);
	// bl 0x838079c8
	ctx.lr = 0x837F6950;
	sub_838079C8(ctx, base);
	// bl 0x83806bf0
	ctx.lr = 0x837F6954;
	sub_83806BF0(ctx, base);
	// bl 0x83807d90
	ctx.lr = 0x837F6958;
	sub_83807D90(ctx, base);
	// bl 0x83806ef0
	ctx.lr = 0x837F695C;
	sub_83806EF0(ctx, base);
	// bl 0x83809b10
	ctx.lr = 0x837F6960;
	sub_83809B10(ctx, base);
	// bl 0x83807190
	ctx.lr = 0x837F6964;
	sub_83807190(ctx, base);
	// bl 0x8380b958
	ctx.lr = 0x837F6968;
	sub_8380B958(ctx, base);
	// bl 0x8380abc8
	ctx.lr = 0x837F696C;
	sub_8380ABC8(ctx, base);
	// bl 0x8380c768
	ctx.lr = 0x837F6970;
	sub_8380C768(ctx, base);
	// bl 0x8380bd08
	ctx.lr = 0x837F6974;
	sub_8380BD08(ctx, base);
	// bl 0x8380dad8
	ctx.lr = 0x837F6978;
	sub_8380DAD8(ctx, base);
	// bl 0x8380d158
	ctx.lr = 0x837F697C;
	sub_8380D158(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837F698C"))) PPC_WEAK_FUNC(sub_837F698C);
PPC_FUNC_IMPL(__imp__sub_837F698C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837F6990"))) PPC_WEAK_FUNC(sub_837F6990);
PPC_FUNC_IMPL(__imp__sub_837F6990) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// clrlwi r31,r3,16
	ctx.r31.u64 = ctx.r3.u32 & 0xFFFF;
	// bl 0x82a4d1d8
	ctx.lr = 0x837F69B0;
	sub_82A4D1D8(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rlwinm r6,r30,16,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0xFF;
	// addi r7,r31,-1
	ctx.r7.s64 = ctx.r31.s64 + -1;
	// bl 0x82a4cdc0
	ctx.lr = 0x837F69C4;
	sub_82A4CDC0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f6a18
	if (cr6.eq) goto loc_837F6A18;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// clrlwi r31,r30,16
	ctx.r31.u64 = ctx.r30.u32 & 0xFFFF;
	// bl 0x82a4d1d8
	ctx.lr = 0x837F69E0;
	sub_82A4D1D8(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rlwinm r6,r30,16,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0xFF;
	// addi r7,r31,-1
	ctx.r7.s64 = ctx.r31.s64 + -1;
	// bl 0x82a4cf00
	ctx.lr = 0x837F69F4;
	sub_82A4CF00(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837f6a18
	if (cr6.eq) goto loc_837F6A18;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,30444(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 30444);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x837f6a24
	if (!cr6.lt) goto loc_837F6A24;
loc_837F6A18:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f1,-24912(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// b 0x837f6a30
	goto loc_837F6A30;
loc_837F6A24:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,8976(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8976);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
loc_837F6A30:
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

__attribute__((alias("__imp__sub_837F6A48"))) PPC_WEAK_FUNC(sub_837F6A48);
PPC_FUNC_IMPL(__imp__sub_837F6A48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837F6A50;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// li r30,4096
	ctx.r30.s64 = 4096;
loc_837F6A64:
	// and r11,r29,r28
	ctx.r11.u64 = ctx.r29.u64 & ctx.r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f6b94
	if (cr6.eq) goto loc_837F6B94;
	// addi r11,r30,-4096
	ctx.r11.s64 = ctx.r30.s64 + -4096;
	// cmplwi cr6,r11,22
	cr6.compare<uint32_t>(ctx.r11.u32, 22, xer);
	// bgt cr6,0x837f6b94
	if (cr6.gt) goto loc_837F6B94;
	// lis r12,-31873
	ctx.r12.s64 = -2088828928;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,27284
	ctx.r12.s64 = ctx.r12.s64 + 27284;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_837F6AFC;
	case 1:
		goto loc_837F6B04;
	case 2:
		goto loc_837F6B10;
	case 3:
		goto loc_837F6B1C;
	case 4:
		goto loc_837F6B24;
	case 5:
		goto loc_837F6B30;
	case 6:
		goto loc_837F6B3C;
	case 7:
		goto loc_837F6B48;
	case 8:
		goto loc_837F6B54;
	case 9:
		goto loc_837F6B60;
	case 10:
		goto loc_837F6B6C;
	case 11:
		goto loc_837F6B78;
	case 12:
		goto loc_837F6B94;
	case 13:
		goto loc_837F6B94;
	case 14:
		goto loc_837F6B94;
	case 15:
		goto loc_837F6B94;
	case 16:
		goto loc_837F6B94;
	case 17:
		goto loc_837F6B94;
	case 18:
		goto loc_837F6B94;
	case 19:
		goto loc_837F6B94;
	case 20:
		goto loc_837F6B94;
	case 21:
		goto loc_837F6B94;
	case 22:
		goto loc_837F6AF0;
	default:
		return;
	}
	// lwz r27,27388(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27388);
	// lwz r27,27396(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27396);
	// lwz r27,27408(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27408);
	// lwz r27,27420(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27420);
	// lwz r27,27428(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27428);
	// lwz r27,27440(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27440);
	// lwz r27,27452(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27452);
	// lwz r27,27464(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27464);
	// lwz r27,27476(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27476);
	// lwz r27,27488(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27488);
	// lwz r27,27500(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27500);
	// lwz r27,27512(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27512);
	// lwz r27,27540(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27540);
	// lwz r27,27540(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27540);
	// lwz r27,27540(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27540);
	// lwz r27,27540(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27540);
	// lwz r27,27540(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27540);
	// lwz r27,27540(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27540);
	// lwz r27,27540(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27540);
	// lwz r27,27540(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27540);
	// lwz r27,27540(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27540);
	// lwz r27,27540(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27540);
	// lwz r27,27376(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27376);
loc_837F6AF0:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2
	ctx.r6.s64 = 2;
	// b 0x837f6b80
	goto loc_837F6B80;
loc_837F6AFC:
	// li r6,2
	ctx.r6.s64 = 2;
	// b 0x837f6b7c
	goto loc_837F6B7C;
loc_837F6B04:
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x837f6b80
	goto loc_837F6B80;
loc_837F6B10:
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x837f6b80
	goto loc_837F6B80;
loc_837F6B1C:
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x837f6b7c
	goto loc_837F6B7C;
loc_837F6B24:
	// li r7,4
	ctx.r7.s64 = 4;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x837f6b80
	goto loc_837F6B80;
loc_837F6B30:
	// li r7,5
	ctx.r7.s64 = 5;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x837f6b80
	goto loc_837F6B80;
loc_837F6B3C:
	// li r7,6
	ctx.r7.s64 = 6;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x837f6b80
	goto loc_837F6B80;
loc_837F6B48:
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x837f6b80
	goto loc_837F6B80;
loc_837F6B54:
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x837f6b80
	goto loc_837F6B80;
loc_837F6B60:
	// li r7,7
	ctx.r7.s64 = 7;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x837f6b80
	goto loc_837F6B80;
loc_837F6B6C:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x837f6b80
	goto loc_837F6B80;
loc_837F6B78:
	// li r6,1
	ctx.r6.s64 = 1;
loc_837F6B7C:
	// li r7,3
	ctx.r7.s64 = 3;
loc_837F6B80:
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fe670
	ctx.lr = 0x837F6B94;
	sub_837FE670(ctx, base);
loc_837F6B94:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// rotlwi r29,r29,1
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r29.u32, 1);
	// addi r11,r30,-4096
	ctx.r11.s64 = ctx.r30.s64 + -4096;
	// cmplwi cr6,r11,27
	cr6.compare<uint32_t>(ctx.r11.u32, 27, xer);
	// blt cr6,0x837f6a64
	if (cr6.lt) goto loc_837F6A64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837F6BB0"))) PPC_WEAK_FUNC(sub_837F6BB0);
PPC_FUNC_IMPL(__imp__sub_837F6BB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837F6BB8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// li r30,5376
	ctx.r30.s64 = 5376;
loc_837F6BCC:
	// and r11,r29,r28
	ctx.r11.u64 = ctx.r29.u64 & ctx.r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f6c60
	if (cr6.eq) goto loc_837F6C60;
	// addi r11,r30,-5376
	ctx.r11.s64 = ctx.r30.s64 + -5376;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bgt cr6,0x837f6c60
	if (cr6.gt) goto loc_837F6C60;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x837f6c14
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837F6C14;
	// bdzf 4*cr6+eq,0x837f6c1c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837F6C1C;
	// bdzf 4*cr6+eq,0x837f6c24
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837F6C24;
	// bdzf 4*cr6+eq,0x837f6c2c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837F6C2C;
	// bdzf 4*cr6+eq,0x837f6c34
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837F6C34;
	// bdzf 4*cr6+eq,0x837f6c3c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837F6C3C;
	// bne cr6,0x837f6c44
	if (!cr6.eq) goto loc_837F6C44;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x837f6c4c
	goto loc_837F6C4C;
loc_837F6C14:
	// li r7,1
	ctx.r7.s64 = 1;
	// b 0x837f6c48
	goto loc_837F6C48;
loc_837F6C1C:
	// li r7,2
	ctx.r7.s64 = 2;
	// b 0x837f6c48
	goto loc_837F6C48;
loc_837F6C24:
	// li r7,3
	ctx.r7.s64 = 3;
	// b 0x837f6c48
	goto loc_837F6C48;
loc_837F6C2C:
	// li r7,4
	ctx.r7.s64 = 4;
	// b 0x837f6c48
	goto loc_837F6C48;
loc_837F6C34:
	// li r7,5
	ctx.r7.s64 = 5;
	// b 0x837f6c48
	goto loc_837F6C48;
loc_837F6C3C:
	// li r7,6
	ctx.r7.s64 = 6;
	// b 0x837f6c48
	goto loc_837F6C48;
loc_837F6C44:
	// li r7,7
	ctx.r7.s64 = 7;
loc_837F6C48:
	// li r6,0
	ctx.r6.s64 = 0;
loc_837F6C4C:
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fe670
	ctx.lr = 0x837F6C60;
	sub_837FE670(ctx, base);
loc_837F6C60:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// rotlwi r29,r29,1
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r29.u32, 1);
	// addi r11,r30,-5376
	ctx.r11.s64 = ctx.r30.s64 + -5376;
	// cmplwi cr6,r11,27
	cr6.compare<uint32_t>(ctx.r11.u32, 27, xer);
	// blt cr6,0x837f6bcc
	if (cr6.lt) goto loc_837F6BCC;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837F6C7C"))) PPC_WEAK_FUNC(sub_837F6C7C);
PPC_FUNC_IMPL(__imp__sub_837F6C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837F6C80"))) PPC_WEAK_FUNC(sub_837F6C80);
PPC_FUNC_IMPL(__imp__sub_837F6C80) {
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
	// lwz r31,468(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 468);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x837f6ca8
	if (cr6.eq) goto loc_837F6CA8;
	// bl 0x830ff290
	ctx.lr = 0x837F6CA0;
	sub_830FF290(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x830ff798
	ctx.lr = 0x837F6CA8;
	sub_830FF798(ctx, base);
loc_837F6CA8:
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

__attribute__((alias("__imp__sub_837F6CBC"))) PPC_WEAK_FUNC(sub_837F6CBC);
PPC_FUNC_IMPL(__imp__sub_837F6CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837F6CC0"))) PPC_WEAK_FUNC(sub_837F6CC0);
PPC_FUNC_IMPL(__imp__sub_837F6CC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmplwi cr6,r4,2
	cr6.compare<uint32_t>(ctx.r4.u32, 2, xer);
	// bne cr6,0x837f6cec
	if (!cr6.eq) goto loc_837F6CEC;
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,5
	ctx.r11.s64 = 5;
	// beq cr6,0x837f6cdc
	if (cr6.eq) goto loc_837F6CDC;
	// li r11,4
	ctx.r11.s64 = 4;
loc_837F6CDC:
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r11.u32);
	// blr 
	return;
loc_837F6CEC:
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// bne cr6,0x837f6d60
	if (!cr6.eq) goto loc_837F6D60;
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837f6d0c
	if (!cr6.eq) goto loc_837F6D0C;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_837F6D0C:
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lwz r11,52(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 52);
	// li r9,4
	ctx.r9.s64 = 4;
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// stw r9,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// lfs f0,21212(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21212);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// bne cr6,0x837f6d54
	if (!cr6.eq) goto loc_837F6D54;
	// rlwinm r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837f6d54
	if (!cr6.eq) goto loc_837F6D54;
	// rlwinm r11,r11,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r11.u32);
	// blr 
	return;
loc_837F6D54:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r11.u32);
	// blr 
	return;
loc_837F6D60:
	// cmplwi cr6,r4,5
	cr6.compare<uint32_t>(ctx.r4.u32, 5, xer);
	// bne cr6,0x837f6d88
	if (!cr6.eq) goto loc_837F6D88;
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f6d7c
	if (cr6.eq) goto loc_837F6D7C;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_837F6D7C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_837F6D88:
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// bne cr6,0x837f6dac
	if (!cr6.eq) goto loc_837F6DAC;
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f6d7c
	if (cr6.eq) goto loc_837F6D7C;
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x837f6dec
	if (cr6.eq) goto loc_837F6DEC;
	// b 0x837f6de4
	goto loc_837F6DE4;
loc_837F6DAC:
	// cmplwi cr6,r4,6
	cr6.compare<uint32_t>(ctx.r4.u32, 6, xer);
	// bne cr6,0x837f6dcc
	if (!cr6.eq) goto loc_837F6DCC;
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837f6dec
	if (!cr6.eq) goto loc_837F6DEC;
loc_837F6DC0:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_837F6DCC:
	// cmplwi cr6,r4,7
	cr6.compare<uint32_t>(ctx.r4.u32, 7, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f6dc0
	if (cr6.eq) goto loc_837F6DC0;
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
loc_837F6DE4:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_837F6DEC:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837F6DF8"))) PPC_WEAK_FUNC(sub_837F6DF8);
PPC_FUNC_IMPL(__imp__sub_837F6DF8) {
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
	// bl 0x837fc898
	ctx.lr = 0x837F6E08;
	sub_837FC898(ctx, base);
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// lis r7,-31743
	ctx.r7.s64 = -2080309248;
	// lis r6,-31743
	ctx.r6.s64 = -2080309248;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,-6748(r8)
	PPC_STORE_U32(ctx.r8.u32 + -6748, ctx.r11.u32);
	// stw r10,-6744(r7)
	PPC_STORE_U32(ctx.r7.u32 + -6744, ctx.r10.u32);
	// stw r9,-6740(r6)
	PPC_STORE_U32(ctx.r6.u32 + -6740, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837F6E3C"))) PPC_WEAK_FUNC(sub_837F6E3C);
PPC_FUNC_IMPL(__imp__sub_837F6E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837F6E40"))) PPC_WEAK_FUNC(sub_837F6E40);
PPC_FUNC_IMPL(__imp__sub_837F6E40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837F6E48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x837ffa08
	ctx.lr = 0x837F6E60;
	sub_837FFA08(ctx, base);
	// lis r10,-32211
	ctx.r10.s64 = -2110980096;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,5320
	ctx.r9.s64 = ctx.r10.s64 + 5320;
	// stb r11,464(r31)
	PPC_STORE_U8(ctx.r31.u32 + 464, ctx.r11.u8);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r11.u32);
	// stw r29,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r29.u32);
	// blt cr6,0x837f6ea0
	if (cr6.lt) goto loc_837F6EA0;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// bge cr6,0x837f6ea0
	if (!cr6.lt) goto loc_837F6EA0;
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_837F6EA0:
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837F6EB0"))) PPC_WEAK_FUNC(sub_837F6EB0);
PPC_FUNC_IMPL(__imp__sub_837F6EB0) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837F6ED4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x837F6EE8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,28(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x837F6EFC;
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

__attribute__((alias("__imp__sub_837F6F10"))) PPC_WEAK_FUNC(sub_837F6F10);
PPC_FUNC_IMPL(__imp__sub_837F6F10) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,345(r3)
	PPC_STORE_U8(ctx.r3.u32 + 345, ctx.r11.u8);
	// stb r11,63(r3)
	PPC_STORE_U8(ctx.r3.u32 + 63, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837F6F20"))) PPC_WEAK_FUNC(sub_837F6F20);
PPC_FUNC_IMPL(__imp__sub_837F6F20) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,345(r3)
	PPC_STORE_U8(ctx.r3.u32 + 345, ctx.r11.u8);
	// stb r11,64(r3)
	PPC_STORE_U8(ctx.r3.u32 + 64, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837F6F30"))) PPC_WEAK_FUNC(sub_837F6F30);
PPC_FUNC_IMPL(__imp__sub_837F6F30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837F6F38;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// lwz r30,468(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 468);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,5320
	ctx.r10.s64 = ctx.r11.s64 + 5320;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// beq cr6,0x837f6f68
	if (cr6.eq) goto loc_837F6F68;
	// bl 0x830ff290
	ctx.lr = 0x837F6F60;
	sub_830FF290(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x830ff798
	ctx.lr = 0x837F6F68;
	sub_830FF798(ctx, base);
loc_837F6F68:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83800020
	ctx.lr = 0x837F6F70;
	sub_83800020(ctx, base);
	// clrlwi r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f6f88
	if (cr6.eq) goto loc_837F6F88;
	// bl 0x82416268
	ctx.lr = 0x837F6F84;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_837F6F88:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837F6F90"))) PPC_WEAK_FUNC(sub_837F6F90);
PPC_FUNC_IMPL(__imp__sub_837F6F90) {
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
	// li r11,33
	ctx.r11.s64 = 33;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,472
	ctx.r4.s64 = 472;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x837F6FC4;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837f7024
	if (cr6.eq) goto loc_837F7024;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x837f6e40
	ctx.lr = 0x837F6FD8;
	sub_837F6E40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837f7024
	if (cr6.eq) goto loc_837F7024;
	// bl 0x837f9790
	ctx.lr = 0x837F6FE8;
	sub_837F9790(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837f702c
	if (!cr6.eq) goto loc_837F702C;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595150
	ctx.lr = 0x837F7004;
	sub_82595150(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x837F701C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595170
	ctx.lr = 0x837F7024;
	sub_82595170(ctx, base);
loc_837F7024:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x837f7030
	goto loc_837F7030;
loc_837F702C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_837F7030:
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

__attribute__((alias("__imp__sub_837F7048"))) PPC_WEAK_FUNC(sub_837F7048);
PPC_FUNC_IMPL(__imp__sub_837F7048) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac0
	ctx.lr = 0x837F7050;
	__savegprlr_18(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,7
	ctx.r10.s64 = 458752;
	// lis r9,7
	ctx.r9.s64 = 458752;
	// ori r8,r10,1
	ctx.r8.u64 = ctx.r10.u64 | 1;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// ori r31,r9,2
	ctx.r31.u64 = ctx.r9.u64 | 2;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// beq cr6,0x837f73c0
	if (cr6.eq) goto loc_837F73C0;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// beq cr6,0x837f73c0
	if (cr6.eq) goto loc_837F73C0;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// ori r9,r10,44
	ctx.r9.u64 = ctx.r10.u64 | 44;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x837f70ec
	if (!cr6.eq) goto loc_837F70EC;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x837da198
	ctx.lr = 0x837F70A4;
	sub_837DA198(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x837d8a88
	ctx.lr = 0x837F70AC;
	sub_837D8A88(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bge cr6,0x837f70c0
	if (!cr6.lt) goto loc_837F70C0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
loc_837F70C0:
	// bl 0x837da198
	ctx.lr = 0x837F70C4;
	sub_837DA198(ctx, base);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// stw r31,11356(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11356, ctx.r31.u32);
	// stb r30,11360(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11360, ctx.r30.u8);
	// blt cr6,0x837f70dc
	if (cr6.lt) goto loc_837F70DC;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// blt cr6,0x837f70e0
	if (cr6.lt) goto loc_837F70E0;
loc_837F70DC:
	// li r31,0
	ctx.r31.s64 = 0;
loc_837F70E0:
	// stw r31,36(r20)
	PPC_STORE_U32(ctx.r20.u32 + 36, ctx.r31.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_837F70EC:
	// lis r10,7
	ctx.r10.s64 = 458752;
	// ori r9,r10,45
	ctx.r9.u64 = ctx.r10.u64 | 45;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x837f7968
	if (!cr6.eq) goto loc_837F7968;
	// bl 0x837da198
	ctx.lr = 0x837F7100;
	sub_837DA198(ctx, base);
	// lwz r10,11308(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11308);
	// li r18,0
	ctx.r18.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// stw r18,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r18.u32);
	// li r19,255
	ctx.r19.s64 = 255;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x837f7134
	if (!cr6.eq) goto loc_837F7134;
	// li r18,1
	ctx.r18.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r18,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r18.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_837F7134:
	// li r22,0
	ctx.r22.s64 = 0;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// rlwinm r11,r22,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// li r21,-1
	ctx.r21.s64 = -1;
loc_837F7144:
	// lwzx r24,r11,r10
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r25,r21
	ctx.r25.u64 = ctx.r21.u64;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// bne cr6,0x837f71e0
	if (!cr6.eq) goto loc_837F71E0;
	// li r28,0
	ctx.r28.s64 = 0;
	// mulli r27,r24,5532
	ctx.r27.s64 = ctx.r24.s64 * 5532;
	// li r29,0
	ctx.r29.s64 = 0;
loc_837F7168:
	// add r11,r29,r27
	ctx.r11.u64 = ctx.r29.u64 + ctx.r27.u64;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// lbz r10,369(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 369);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837f71cc
	if (cr6.eq) goto loc_837F71CC;
	// addi r30,r11,204
	ctx.r30.s64 = ctx.r11.s64 + 204;
	// lbz r4,212(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 212);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8291a4c0
	ctx.lr = 0x837F718C;
	sub_8291A4C0(ctx, base);
	// ld r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// bgt cr6,0x837f71b8
	if (cr6.gt) goto loc_837F71B8;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x837f71cc
	if (!cr6.eq) goto loc_837F71CC;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r10,r25
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r25.u32, xer);
	// bge cr6,0x837f71cc
	if (!cr6.lt) goto loc_837F71CC;
loc_837F71B8:
	// ld r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// clrlwi r26,r28,24
	ctx.r26.u64 = ctx.r28.u32 & 0xFF;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lwz r25,84(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_837F71CC:
	// addi r29,r29,172
	ctx.r29.s64 = ctx.r29.s64 + 172;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplwi cr6,r29,5504
	cr6.compare<uint32_t>(ctx.r29.u32, 5504, xer);
	// blt cr6,0x837f7168
	if (cr6.lt) goto loc_837F7168;
	// b 0x837f7344
	goto loc_837F7344;
loc_837F71E0:
	// mulli r5,r24,5532
	ctx.r5.s64 = ctx.r24.s64 * 5532;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,2
	ctx.r7.s64 = 2;
loc_837F71EC:
	// add r11,r6,r5
	ctx.r11.u64 = ctx.r6.u64 + ctx.r5.u64;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// lbz r10,369(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 369);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837f7244
	if (cr6.eq) goto loc_837F7244;
	// ld r4,204(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 204);
	// clrlwi r8,r31,24
	ctx.r8.u64 = ctx.r31.u32 & 0xFF;
	// lbz r10,265(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 265);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// bgt cr6,0x837f722c
	if (cr6.gt) goto loc_837F722C;
	// bne cr6,0x837f7244
	if (!cr6.eq) goto loc_837F7244;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r9,r25
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r25.u32, xer);
	// bge cr6,0x837f7244
	if (!cr6.lt) goto loc_837F7244;
loc_837F722C:
	// ld r9,204(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 204);
	// addi r8,r7,254
	ctx.r8.s64 = ctx.r7.s64 + 254;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// clrlwi r26,r8,24
	ctx.r26.u64 = ctx.r8.u32 & 0xFF;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lwz r25,84(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_837F7244:
	// lbz r10,541(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 541);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837f7294
	if (cr6.eq) goto loc_837F7294;
	// ld r4,376(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 376);
	// clrlwi r8,r31,24
	ctx.r8.u64 = ctx.r31.u32 & 0xFF;
	// lbz r10,437(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 437);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// bgt cr6,0x837f727c
	if (cr6.gt) goto loc_837F727C;
	// bne cr6,0x837f7294
	if (!cr6.eq) goto loc_837F7294;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r9,r25
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r25.u32, xer);
	// bge cr6,0x837f7294
	if (!cr6.lt) goto loc_837F7294;
loc_837F727C:
	// ld r9,376(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 376);
	// addi r8,r7,255
	ctx.r8.s64 = ctx.r7.s64 + 255;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// clrlwi r26,r8,24
	ctx.r26.u64 = ctx.r8.u32 & 0xFF;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lwz r25,84(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_837F7294:
	// lbz r10,713(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 713);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837f72e0
	if (cr6.eq) goto loc_837F72E0;
	// ld r4,548(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 548);
	// clrlwi r8,r31,24
	ctx.r8.u64 = ctx.r31.u32 & 0xFF;
	// lbz r10,609(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 609);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// bgt cr6,0x837f72cc
	if (cr6.gt) goto loc_837F72CC;
	// bne cr6,0x837f72e0
	if (!cr6.eq) goto loc_837F72E0;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r9,r25
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r25.u32, xer);
	// bge cr6,0x837f72e0
	if (!cr6.lt) goto loc_837F72E0;
loc_837F72CC:
	// ld r9,548(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 548);
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// clrlwi r26,r7,24
	ctx.r26.u64 = ctx.r7.u32 & 0xFF;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lwz r25,84(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_837F72E0:
	// lbz r10,885(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 885);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837f7330
	if (cr6.eq) goto loc_837F7330;
	// ld r4,720(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 720);
	// clrlwi r8,r31,24
	ctx.r8.u64 = ctx.r31.u32 & 0xFF;
	// lbz r10,781(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 781);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// bgt cr6,0x837f7318
	if (cr6.gt) goto loc_837F7318;
	// bne cr6,0x837f7330
	if (!cr6.eq) goto loc_837F7330;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r9,r25
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r25.u32, xer);
	// bge cr6,0x837f7330
	if (!cr6.lt) goto loc_837F7330;
loc_837F7318:
	// ld r11,720(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 720);
	// addi r9,r7,1
	ctx.r9.s64 = ctx.r7.s64 + 1;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// clrlwi r26,r9,24
	ctx.r26.u64 = ctx.r9.u32 & 0xFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r25,84(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_837F7330:
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r6,r6,688
	ctx.r6.s64 = ctx.r6.s64 + 688;
	// addi r11,r7,-2
	ctx.r11.s64 = ctx.r7.s64 + -2;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// blt cr6,0x837f71ec
	if (cr6.lt) goto loc_837F71EC;
loc_837F7344:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837f7370
	if (!cr6.eq) goto loc_837F7370;
	// addi r11,r22,1
	ctx.r11.s64 = ctx.r22.s64 + 1;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r22,r11
	ctx.r22.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x837f7144
	if (cr6.lt) goto loc_837F7144;
	// b 0x837f7374
	goto loc_837F7374;
loc_837F7370:
	// mr r19,r26
	ctx.r19.u64 = ctx.r26.u64;
loc_837F7374:
	// clrlwi r11,r19,24
	ctx.r11.u64 = ctx.r19.u32 & 0xFF;
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// bne cr6,0x837f7394
	if (!cr6.eq) goto loc_837F7394;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mr r24,r18
	ctx.r24.u64 = ctx.r18.u64;
	// bl 0x837d86b8
	ctx.lr = 0x837F7390;
	sub_837D86B8(ctx, base);
	// clrlwi r19,r3,24
	ctx.r19.u64 = ctx.r3.u32 & 0xFF;
loc_837F7394:
	// stw r24,11356(r23)
	PPC_STORE_U32(ctx.r23.u32 + 11356, ctx.r24.u32);
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(ctx.r24.s32, 0, xer);
	// stb r19,11360(r23)
	PPC_STORE_U8(ctx.r23.u32 + 11360, ctx.r19.u8);
	// blt cr6,0x837f73b0
	if (cr6.lt) goto loc_837F73B0;
	// cmpwi cr6,r24,2
	cr6.compare<int32_t>(ctx.r24.s32, 2, xer);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// blt cr6,0x837f73b4
	if (cr6.lt) goto loc_837F73B4;
loc_837F73B0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_837F73B4:
	// stw r11,36(r20)
	PPC_STORE_U32(ctx.r20.u32 + 36, ctx.r11.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_837F73C0:
	// bl 0x837da198
	ctx.lr = 0x837F73C4;
	sub_837DA198(ctx, base);
	// lwz r11,11280(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11280);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,154
	cr6.compare<uint32_t>(ctx.r11.u32, 154, xer);
	// bgt cr6,0x837f7968
	if (cr6.gt) goto loc_837F7968;
	// lis r12,-31873
	ctx.r12.s64 = -2088828928;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,29676
	ctx.r12.s64 = ctx.r12.s64 + 29676;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_837F768C;
	case 1:
		goto loc_837F7968;
	case 2:
		goto loc_837F76F4;
	case 3:
		goto loc_837F7968;
	case 4:
		goto loc_837F7728;
	case 5:
		goto loc_837F7968;
	case 6:
		goto loc_837F768C;
	case 7:
		goto loc_837F768C;
	case 8:
		goto loc_837F768C;
	case 9:
		goto loc_837F768C;
	case 10:
		goto loc_837F768C;
	case 11:
		goto loc_837F768C;
	case 12:
		goto loc_837F768C;
	case 13:
		goto loc_837F7658;
	case 14:
		goto loc_837F7658;
	case 15:
		goto loc_837F7658;
	case 16:
		goto loc_837F7658;
	case 17:
		goto loc_837F7658;
	case 18:
		goto loc_837F7658;
	case 19:
		goto loc_837F7658;
	case 20:
		goto loc_837F76C0;
	case 21:
		goto loc_837F76F4;
	case 22:
		goto loc_837F76F4;
	case 23:
		goto loc_837F76F4;
	case 24:
		goto loc_837F76F4;
	case 25:
		goto loc_837F76F4;
	case 26:
		goto loc_837F76F4;
	case 27:
		goto loc_837F76F4;
	case 28:
		goto loc_837F76F4;
	case 29:
		goto loc_837F76F4;
	case 30:
		goto loc_837F7968;
	case 31:
		goto loc_837F7968;
	case 32:
		goto loc_837F7728;
	case 33:
		goto loc_837F7968;
	case 34:
		goto loc_837F7968;
	case 35:
		goto loc_837F7968;
	case 36:
		goto loc_837F7968;
	case 37:
		goto loc_837F7968;
	case 38:
		goto loc_837F78C8;
	case 39:
		goto loc_837F78C8;
	case 40:
		goto loc_837F7968;
	case 41:
		goto loc_837F7968;
	case 42:
		goto loc_837F78C8;
	case 43:
		goto loc_837F78C8;
	case 44:
		goto loc_837F7968;
	case 45:
		goto loc_837F7968;
	case 46:
		goto loc_837F78C8;
	case 47:
		goto loc_837F78C8;
	case 48:
		goto loc_837F7968;
	case 49:
		goto loc_837F7968;
	case 50:
		goto loc_837F78E0;
	case 51:
		goto loc_837F78F8;
	case 52:
		goto loc_837F7910;
	case 53:
		goto loc_837F78C8;
	case 54:
		goto loc_837F78C8;
	case 55:
		goto loc_837F78C8;
	case 56:
		goto loc_837F7928;
	case 57:
		goto loc_837F7940;
	case 58:
		goto loc_837F7968;
	case 59:
		goto loc_837F7940;
	case 60:
		goto loc_837F7940;
	case 61:
		goto loc_837F7940;
	case 62:
		goto loc_837F7940;
	case 63:
		goto loc_837F7940;
	case 64:
		goto loc_837F7940;
	case 65:
		goto loc_837F7968;
	case 66:
		goto loc_837F7968;
	case 67:
		goto loc_837F7968;
	case 68:
		goto loc_837F7968;
	case 69:
		goto loc_837F7968;
	case 70:
		goto loc_837F7968;
	case 71:
		goto loc_837F78C8;
	case 72:
		goto loc_837F7940;
	case 73:
		goto loc_837F7940;
	case 74:
		goto loc_837F7940;
	case 75:
		goto loc_837F78C8;
	case 76:
		goto loc_837F78C8;
	case 77:
		goto loc_837F78C8;
	case 78:
		goto loc_837F78C8;
	case 79:
		goto loc_837F78C8;
	case 80:
		goto loc_837F7958;
	case 81:
		goto loc_837F7958;
	case 82:
		goto loc_837F7968;
	case 83:
		goto loc_837F7968;
	case 84:
		goto loc_837F7968;
	case 85:
		goto loc_837F7968;
	case 86:
		goto loc_837F7968;
	case 87:
		goto loc_837F7968;
	case 88:
		goto loc_837F7968;
	case 89:
		goto loc_837F7968;
	case 90:
		goto loc_837F7968;
	case 91:
		goto loc_837F7968;
	case 92:
		goto loc_837F7968;
	case 93:
		goto loc_837F7968;
	case 94:
		goto loc_837F7968;
	case 95:
		goto loc_837F7968;
	case 96:
		goto loc_837F7968;
	case 97:
		goto loc_837F7968;
	case 98:
		goto loc_837F7968;
	case 99:
		goto loc_837F7968;
	case 100:
		goto loc_837F7968;
	case 101:
		goto loc_837F7968;
	case 102:
		goto loc_837F7968;
	case 103:
		goto loc_837F7968;
	case 104:
		goto loc_837F7968;
	case 105:
		goto loc_837F7968;
	case 106:
		goto loc_837F7968;
	case 107:
		goto loc_837F7968;
	case 108:
		goto loc_837F7968;
	case 109:
		goto loc_837F7968;
	case 110:
		goto loc_837F7968;
	case 111:
		goto loc_837F7968;
	case 112:
		goto loc_837F7968;
	case 113:
		goto loc_837F7968;
	case 114:
		goto loc_837F7968;
	case 115:
		goto loc_837F7968;
	case 116:
		goto loc_837F7968;
	case 117:
		goto loc_837F7968;
	case 118:
		goto loc_837F7968;
	case 119:
		goto loc_837F7860;
	case 120:
		goto loc_837F7968;
	case 121:
		goto loc_837F7968;
	case 122:
		goto loc_837F7968;
	case 123:
		goto loc_837F7968;
	case 124:
		goto loc_837F7968;
	case 125:
		goto loc_837F7968;
	case 126:
		goto loc_837F7968;
	case 127:
		goto loc_837F7968;
	case 128:
		goto loc_837F7968;
	case 129:
		goto loc_837F7968;
	case 130:
		goto loc_837F7968;
	case 131:
		goto loc_837F7968;
	case 132:
		goto loc_837F7968;
	case 133:
		goto loc_837F7968;
	case 134:
		goto loc_837F775C;
	case 135:
		goto loc_837F7968;
	case 136:
		goto loc_837F7968;
	case 137:
		goto loc_837F7968;
	case 138:
		goto loc_837F7790;
	case 139:
		goto loc_837F7968;
	case 140:
		goto loc_837F7968;
	case 141:
		goto loc_837F7968;
	case 142:
		goto loc_837F77F8;
	case 143:
		goto loc_837F782C;
	case 144:
		goto loc_837F77C4;
	case 145:
		goto loc_837F7968;
	case 146:
		goto loc_837F7968;
	case 147:
		goto loc_837F7968;
	case 148:
		goto loc_837F7968;
	case 149:
		goto loc_837F7968;
	case 150:
		goto loc_837F7968;
	case 151:
		goto loc_837F7968;
	case 152:
		goto loc_837F7968;
	case 153:
		goto loc_837F7968;
	case 154:
		goto loc_837F7894;
	default:
		return;
	}
	// lwz r27,30348(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30348);
	// lwz r27,31080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// lwz r27,30452(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30452);
	// lwz r27,31080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// lwz r27,30504(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30504);
	// lwz r27,31080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// lwz r27,30348(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30348);
	// lwz r27,30348(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30348);
	// lwz r27,30348(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30348);
	// lwz r27,30348(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30348);
	// lwz r27,30348(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30348);
	// lwz r27,30348(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30348);
	// lwz r27,30348(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30348);
	// lwz r27,30296(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30296);
	// lwz r27,30296(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30296);
	// lwz r27,30296(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30296);
	// lwz r27,30296(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30296);
	// lwz r27,30296(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30296);
	// lwz r27,30296(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30296);
	// lwz r27,30296(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30296);
	// lwz r27,30400(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30400);
	// lwz r27,30452(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30452);
	// lwz r27,30452(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30452);
	// lwz r27,30452(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30452);
	// lwz r27,30452(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30452);
	// lwz r27,30452(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30452);
	// lwz r27,30452(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30452);
	// lwz r27,30452(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30452);
	// lwz r27,30452(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30452);
	// lwz r27,30452(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30452);
	// lwz r27,31080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// lwz r27,31080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// lwz r27,30504(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30504);
	// lwz r27,31080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// lwz r27,31080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// lwz r27,31080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// lwz r27,31080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// lwz r27,31080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// lwz r27,30920(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30920);
	// lwz r27,30920(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30920);
	// lwz r27,31080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// lwz r27,31080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// lwz r27,30920(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30920);
	// lwz r27,30920(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30920);
	// lwz r27,31080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// lwz r27,31080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// lwz r27,30920(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30920);
	// lwz r27,30920(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30920);
	// lwz r27,31080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// lwz r27,31080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// lwz r27,30944(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30944);
	// lwz r27,30968(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30968);
	// lwz r27,30992(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30992);
	// lwz r27,30920(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30920);
	// lwz r27,30920(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30920);
	// lwz r27,30920(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30920);
	// lwz r27,31016(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31016);
	// lwz r27,31040(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31040);
	// lwz r27,31080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// lwz r27,31040(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31040);
	// lwz r27,31040(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31040);
	// lwz r27,31040(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31040);
	// lwz r27,31040(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31040);
	// lwz r27,31040(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31040);
	// lwz r27,31040(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31040);
	// lwz r27,31080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// lwz r27,31080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// lwz r27,31080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// lwz r27,31080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// lwz r27,31080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// lwz r27,31080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// lwz r27,30920(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30920);
	// lwz r27,31040(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31040);
	// lwz r27,31040(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31040);
	// lwz r27,31040(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31040);
	// lwz r27,30920(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30920);
	// lwz r27,30920(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30920);
	// lwz r27,30920(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30920);
	// lwz r27,30920(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30920);
	// lwz r27,30920(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30920);
	// lwz r27,31064(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31064);
	// lwz r27,31064(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31064);
	// lwz r27,31080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// lwz r27,31080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// lwz r27,31080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// lwz r27,31080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// lwz r27,31080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// lwz r27,31080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// lwz r27,31080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// lwz r27,31080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// lwz r27,31080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// lwz r27,31080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// lwz r27,31080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// lwz r27,31080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// lwz r27,31080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// lwz r27,31080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// lwz r27,31080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// lwz r27,31080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// lwz r27,31080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// lwz r27,31080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// lwz r27,31080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// lwz r27,31080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// lwz r27,31080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// lwz r27,31080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// lwz r27,31080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// lwz r27,31080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// lwz r27,31080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// lwz r27,31080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// lwz r27,31080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// lwz r27,31080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// lwz r27,31080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// lwz r27,31080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// lwz r27,31080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// lwz r27,31080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// lwz r27,31080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// lwz r27,31080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// lwz r27,31080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// lwz r27,31080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// lwz r27,31080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// lwz r27,30816(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30816);
	// lwz r27,31080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// lwz r27,31080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// lwz r27,31080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// lwz r27,31080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// lwz r27,31080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// lwz r27,31080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// lwz r27,31080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// lwz r27,31080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// lwz r27,31080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// lwz r27,31080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// lwz r27,31080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// lwz r27,31080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// lwz r27,31080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// lwz r27,31080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// lwz r27,30556(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30556);
	// lwz r27,31080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// lwz r27,31080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// lwz r27,31080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// lwz r27,30608(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30608);
	// lwz r27,31080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// lwz r27,31080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// lwz r27,31080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// lwz r27,30712(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30712);
	// lwz r27,30764(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30764);
	// lwz r27,30660(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30660);
	// lwz r27,31080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// lwz r27,31080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// lwz r27,31080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// lwz r27,31080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// lwz r27,31080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// lwz r27,31080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// lwz r27,31080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// lwz r27,31080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// lwz r27,31080(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// lwz r27,30868(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30868);
loc_837F7658:
	// lwz r11,4(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// lis r10,7
	ctx.r10.s64 = 458752;
	// bne cr6,0x837f767c
	if (!cr6.eq) goto loc_837F767C;
	// ori r9,r10,20
	ctx.r9.u64 = ctx.r10.u64 | 20;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_837F767C:
	// ori r9,r10,19
	ctx.r9.u64 = ctx.r10.u64 | 19;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_837F768C:
	// lwz r11,4(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// lis r10,7
	ctx.r10.s64 = 458752;
	// bne cr6,0x837f76b0
	if (!cr6.eq) goto loc_837F76B0;
	// ori r9,r10,18
	ctx.r9.u64 = ctx.r10.u64 | 18;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_837F76B0:
	// ori r9,r10,17
	ctx.r9.u64 = ctx.r10.u64 | 17;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_837F76C0:
	// lwz r11,4(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// lis r10,7
	ctx.r10.s64 = 458752;
	// bne cr6,0x837f76e4
	if (!cr6.eq) goto loc_837F76E4;
	// ori r9,r10,22
	ctx.r9.u64 = ctx.r10.u64 | 22;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_837F76E4:
	// ori r9,r10,21
	ctx.r9.u64 = ctx.r10.u64 | 21;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_837F76F4:
	// lwz r11,4(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// lis r10,7
	ctx.r10.s64 = 458752;
	// bne cr6,0x837f7718
	if (!cr6.eq) goto loc_837F7718;
	// ori r9,r10,24
	ctx.r9.u64 = ctx.r10.u64 | 24;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_837F7718:
	// ori r9,r10,23
	ctx.r9.u64 = ctx.r10.u64 | 23;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_837F7728:
	// lwz r11,4(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// lis r10,7
	ctx.r10.s64 = 458752;
	// bne cr6,0x837f774c
	if (!cr6.eq) goto loc_837F774C;
	// ori r9,r10,26
	ctx.r9.u64 = ctx.r10.u64 | 26;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_837F774C:
	// ori r9,r10,25
	ctx.r9.u64 = ctx.r10.u64 | 25;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_837F775C:
	// lwz r11,4(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// lis r10,7
	ctx.r10.s64 = 458752;
	// bne cr6,0x837f7780
	if (!cr6.eq) goto loc_837F7780;
	// ori r9,r10,4
	ctx.r9.u64 = ctx.r10.u64 | 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_837F7780:
	// ori r9,r10,3
	ctx.r9.u64 = ctx.r10.u64 | 3;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_837F7790:
	// lwz r11,4(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// lis r10,7
	ctx.r10.s64 = 458752;
	// bne cr6,0x837f77b4
	if (!cr6.eq) goto loc_837F77B4;
	// ori r9,r10,12
	ctx.r9.u64 = ctx.r10.u64 | 12;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_837F77B4:
	// ori r9,r10,11
	ctx.r9.u64 = ctx.r10.u64 | 11;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_837F77C4:
	// lwz r11,4(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// lis r10,7
	ctx.r10.s64 = 458752;
	// bne cr6,0x837f77e8
	if (!cr6.eq) goto loc_837F77E8;
	// ori r9,r10,8
	ctx.r9.u64 = ctx.r10.u64 | 8;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_837F77E8:
	// ori r9,r10,7
	ctx.r9.u64 = ctx.r10.u64 | 7;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_837F77F8:
	// lwz r11,4(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// lis r10,7
	ctx.r10.s64 = 458752;
	// bne cr6,0x837f781c
	if (!cr6.eq) goto loc_837F781C;
	// ori r9,r10,10
	ctx.r9.u64 = ctx.r10.u64 | 10;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_837F781C:
	// ori r9,r10,9
	ctx.r9.u64 = ctx.r10.u64 | 9;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_837F782C:
	// lwz r11,4(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// lis r10,7
	ctx.r10.s64 = 458752;
	// bne cr6,0x837f7850
	if (!cr6.eq) goto loc_837F7850;
	// ori r9,r10,6
	ctx.r9.u64 = ctx.r10.u64 | 6;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_837F7850:
	// ori r9,r10,5
	ctx.r9.u64 = ctx.r10.u64 | 5;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_837F7860:
	// lwz r11,4(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// lis r10,7
	ctx.r10.s64 = 458752;
	// bne cr6,0x837f7884
	if (!cr6.eq) goto loc_837F7884;
	// ori r9,r10,14
	ctx.r9.u64 = ctx.r10.u64 | 14;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_837F7884:
	// ori r9,r10,13
	ctx.r9.u64 = ctx.r10.u64 | 13;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_837F7894:
	// lwz r11,4(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// lis r10,7
	ctx.r10.s64 = 458752;
	// bne cr6,0x837f78b8
	if (!cr6.eq) goto loc_837F78B8;
	// ori r9,r10,16
	ctx.r9.u64 = ctx.r10.u64 | 16;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_837F78B8:
	// ori r9,r10,15
	ctx.r9.u64 = ctx.r10.u64 | 15;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_837F78C8:
	// lwz r11,4(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// lis r10,7
	ctx.r10.s64 = 458752;
	// ori r9,r10,27
	ctx.r9.u64 = ctx.r10.u64 | 27;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_837F78E0:
	// lwz r11,4(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// lis r10,7
	ctx.r10.s64 = 458752;
	// ori r9,r10,28
	ctx.r9.u64 = ctx.r10.u64 | 28;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_837F78F8:
	// lwz r11,4(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// lis r10,7
	ctx.r10.s64 = 458752;
	// ori r9,r10,29
	ctx.r9.u64 = ctx.r10.u64 | 29;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_837F7910:
	// lwz r11,4(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// lis r10,7
	ctx.r10.s64 = 458752;
	// ori r9,r10,30
	ctx.r9.u64 = ctx.r10.u64 | 30;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_837F7928:
	// lwz r11,4(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// lis r10,7
	ctx.r10.s64 = 458752;
	// ori r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 | 32;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_837F7940:
	// lwz r11,4(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// lis r10,7
	ctx.r10.s64 = 458752;
	// ori r9,r10,31
	ctx.r9.u64 = ctx.r10.u64 | 31;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_837F7958:
	// lwz r11,4(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// lis r10,7
	ctx.r10.s64 = 458752;
	// ori r9,r10,34
	ctx.r9.u64 = ctx.r10.u64 | 34;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_837F7968:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837F7970"))) PPC_WEAK_FUNC(sub_837F7970);
PPC_FUNC_IMPL(__imp__sub_837F7970) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,7
	ctx.r10.s64 = 458752;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stb r11,47(r3)
	PPC_STORE_U8(ctx.r3.u32 + 47, ctx.r11.u8);
	// stb r7,46(r3)
	PPC_STORE_U8(ctx.r3.u32 + 46, ctx.r7.u8);
	// stb r11,49(r3)
	PPC_STORE_U8(ctx.r3.u32 + 49, ctx.r11.u8);
	// stb r11,48(r3)
	PPC_STORE_U8(ctx.r3.u32 + 48, ctx.r11.u8);
	// stb r11,52(r3)
	PPC_STORE_U8(ctx.r3.u32 + 52, ctx.r11.u8);
	// stb r11,56(r3)
	PPC_STORE_U8(ctx.r3.u32 + 56, ctx.r11.u8);
	// stb r7,55(r3)
	PPC_STORE_U8(ctx.r3.u32 + 55, ctx.r7.u8);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// blt cr6,0x837f79b0
	if (cr6.lt) goto loc_837F79B0;
	// stb r7,51(r3)
	PPC_STORE_U8(ctx.r3.u32 + 51, ctx.r7.u8);
loc_837F79B0:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// blt cr6,0x837f79e0
	if (cr6.lt) goto loc_837F79E0;
	// lis r6,7
	ctx.r6.s64 = 458752;
	// ori r5,r6,35
	ctx.r5.u64 = ctx.r6.u64 | 35;
	// cmplw cr6,r8,r5
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, xer);
	// beq cr6,0x837f79e0
	if (cr6.eq) goto loc_837F79E0;
	// lis r6,7
	ctx.r6.s64 = 458752;
	// ori r5,r6,36
	ctx.r5.u64 = ctx.r6.u64 | 36;
	// cmplw cr6,r8,r5
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, xer);
	// beq cr6,0x837f79e0
	if (cr6.eq) goto loc_837F79E0;
	// stb r11,55(r3)
	PPC_STORE_U8(ctx.r3.u32 + 55, ctx.r11.u8);
loc_837F79E0:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x837f79f0
	if (cr6.lt) goto loc_837F79F0;
	// stb r7,52(r3)
	PPC_STORE_U8(ctx.r3.u32 + 52, ctx.r7.u8);
loc_837F79F0:
	// b 0x837f9ce0
	sub_837F9CE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837F79F4"))) PPC_WEAK_FUNC(sub_837F79F4);
PPC_FUNC_IMPL(__imp__sub_837F79F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837F79F8"))) PPC_WEAK_FUNC(sub_837F79F8);
PPC_FUNC_IMPL(__imp__sub_837F79F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x837F7A00;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,92(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// addi r30,r3,88
	ctx.r30.s64 = ctx.r3.s64 + 88;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x837f7a40
	if (!cr6.eq) goto loc_837F7A40;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x837fe588
	ctx.lr = 0x837F7A28;
	sub_837FE588(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,22
	ctx.r5.s64 = 22;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fe600
	ctx.lr = 0x837F7A40;
	sub_837FE600(ctx, base);
loc_837F7A40:
	// li r29,1
	ctx.r29.s64 = 1;
	// li r30,4352
	ctx.r30.s64 = 4352;
	// li r28,27
	ctx.r28.s64 = 27;
loc_837F7A4C:
	// and r11,r29,r27
	ctx.r11.u64 = ctx.r29.u64 & ctx.r27.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f7b58
	if (cr6.eq) goto loc_837F7B58;
	// addi r11,r30,-4353
	ctx.r11.s64 = ctx.r30.s64 + -4353;
	// cmplwi cr6,r11,21
	cr6.compare<uint32_t>(ctx.r11.u32, 21, xer);
	// bgt cr6,0x837f7b58
	if (cr6.gt) goto loc_837F7B58;
	// lis r12,-31873
	ctx.r12.s64 = -2088828928;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,31356
	ctx.r12.s64 = ctx.r12.s64 + 31356;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_837F7AE0;
	case 1:
		goto loc_837F7AEC;
	case 2:
		goto loc_837F7AF8;
	case 3:
		goto loc_837F7B04;
	case 4:
		goto loc_837F7B10;
	case 5:
		goto loc_837F7B58;
	case 6:
		goto loc_837F7B58;
	case 7:
		goto loc_837F7B58;
	case 8:
		goto loc_837F7B58;
	case 9:
		goto loc_837F7B58;
	case 10:
		goto loc_837F7B18;
	case 11:
		goto loc_837F7B24;
	case 12:
		goto loc_837F7B30;
	case 13:
		goto loc_837F7B3C;
	case 14:
		goto loc_837F7B58;
	case 15:
		goto loc_837F7B58;
	case 16:
		goto loc_837F7B58;
	case 17:
		goto loc_837F7B58;
	case 18:
		goto loc_837F7B58;
	case 19:
		goto loc_837F7B58;
	case 20:
		goto loc_837F7B58;
	case 21:
		goto loc_837F7AD4;
	default:
		return;
	}
	// lwz r27,31456(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31456);
	// lwz r27,31468(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31468);
	// lwz r27,31480(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31480);
	// lwz r27,31492(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31492);
	// lwz r27,31504(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31504);
	// lwz r27,31576(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31576);
	// lwz r27,31576(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31576);
	// lwz r27,31576(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31576);
	// lwz r27,31576(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31576);
	// lwz r27,31576(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31576);
	// lwz r27,31512(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31512);
	// lwz r27,31524(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31524);
	// lwz r27,31536(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31536);
	// lwz r27,31548(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31548);
	// lwz r27,31576(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31576);
	// lwz r27,31576(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31576);
	// lwz r27,31576(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31576);
	// lwz r27,31576(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31576);
	// lwz r27,31576(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31576);
	// lwz r27,31576(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31576);
	// lwz r27,31576(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31576);
	// lwz r27,31444(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31444);
loc_837F7AD4:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2
	ctx.r6.s64 = 2;
	// b 0x837f7b44
	goto loc_837F7B44;
loc_837F7AE0:
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x837f7b44
	goto loc_837F7B44;
loc_837F7AEC:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x837f7b44
	goto loc_837F7B44;
loc_837F7AF8:
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x837f7b44
	goto loc_837F7B44;
loc_837F7B04:
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x837f7b44
	goto loc_837F7B44;
loc_837F7B10:
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x837f7b40
	goto loc_837F7B40;
loc_837F7B18:
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x837f7b44
	goto loc_837F7B44;
loc_837F7B24:
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x837f7b44
	goto loc_837F7B44;
loc_837F7B30:
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x837f7b44
	goto loc_837F7B44;
loc_837F7B3C:
	// li r6,1
	ctx.r6.s64 = 1;
loc_837F7B40:
	// li r7,4
	ctx.r7.s64 = 4;
loc_837F7B44:
	// addi r4,r31,136
	ctx.r4.s64 = ctx.r31.s64 + 136;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fe670
	ctx.lr = 0x837F7B58;
	sub_837FE670(ctx, base);
loc_837F7B58:
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// rotlwi r29,r29,1
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r29.u32, 1);
	// bne 0x837f7a4c
	if (!cr0.eq) goto loc_837F7A4C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837F7B70"))) PPC_WEAK_FUNC(sub_837F7B70);
PPC_FUNC_IMPL(__imp__sub_837F7B70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x837F7B78;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,92(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// addi r22,r3,88
	ctx.r22.s64 = ctx.r3.s64 + 88;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x837f7ba0
	if (!cr6.eq) goto loc_837F7BA0;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x837fe588
	ctx.lr = 0x837F7BA0;
	sub_837FE588(ctx, base);
loc_837F7BA0:
	// li r27,0
	ctx.r27.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r28,1
	ctx.r28.s64 = 1;
	// li r30,4864
	ctx.r30.s64 = 4864;
loc_837F7BBC:
	// and r11,r28,r23
	ctx.r11.u64 = ctx.r28.u64 & ctx.r23.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f7f28
	if (cr6.eq) goto loc_837F7F28;
	// addi r11,r30,-4864
	ctx.r11.s64 = ctx.r30.s64 + -4864;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// bgt cr6,0x837f7f28
	if (cr6.gt) goto loc_837F7F28;
	// lis r12,-31873
	ctx.r12.s64 = -2088828928;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,31724
	ctx.r12.s64 = ctx.r12.s64 + 31724;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_837F7C50;
	case 1:
		goto loc_837F7C7C;
	case 2:
		goto loc_837F7C9C;
	case 3:
		goto loc_837F7CBC;
	case 4:
		goto loc_837F7CDC;
	case 5:
		goto loc_837F7CFC;
	case 6:
		goto loc_837F7D1C;
	case 7:
		goto loc_837F7D7C;
	case 8:
		goto loc_837F7DA0;
	case 9:
		goto loc_837F7D3C;
	case 10:
		goto loc_837F7D5C;
	case 11:
		goto loc_837F7DC4;
	case 12:
		goto loc_837F7DE4;
	case 13:
		goto loc_837F7E04;
	case 14:
		goto loc_837F7E24;
	case 15:
		goto loc_837F7E44;
	case 16:
		goto loc_837F7E64;
	case 17:
		goto loc_837F7E84;
	case 18:
		goto loc_837F7EA4;
	case 19:
		goto loc_837F7F28;
	case 20:
		goto loc_837F7F28;
	case 21:
		goto loc_837F7EC4;
	case 22:
		goto loc_837F7EE4;
	case 23:
		goto loc_837F7F08;
	case 24:
		goto loc_837F7C74;
	default:
		return;
	}
	// lwz r27,31824(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31824);
	// lwz r27,31868(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31868);
	// lwz r27,31900(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31900);
	// lwz r27,31932(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31932);
	// lwz r27,31964(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31964);
	// lwz r27,31996(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31996);
	// lwz r27,32028(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32028);
	// lwz r27,32124(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32124);
	// lwz r27,32160(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32160);
	// lwz r27,32060(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32060);
	// lwz r27,32092(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32092);
	// lwz r27,32196(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32196);
	// lwz r27,32228(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32228);
	// lwz r27,32260(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32260);
	// lwz r27,32292(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32292);
	// lwz r27,32324(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32324);
	// lwz r27,32356(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32356);
	// lwz r27,32388(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32388);
	// lwz r27,32420(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32420);
	// lwz r27,32552(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32552);
	// lwz r27,32552(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32552);
	// lwz r27,32452(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32452);
	// lwz r27,32484(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32484);
	// lwz r27,32520(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32520);
	// lwz r27,31860(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31860);
loc_837F7C50:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,10
	ctx.r7.s64 = 10;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r31,136
	ctx.r4.s64 = ctx.r31.s64 + 136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fe670
	ctx.lr = 0x837F7C6C;
	sub_837FE670(ctx, base);
	// li r24,1
	ctx.r24.s64 = 1;
	// b 0x837f7f28
	goto loc_837F7F28;
loc_837F7C74:
	// li r25,1
	ctx.r25.s64 = 1;
	// b 0x837f7f28
	goto loc_837F7F28;
loc_837F7C7C:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,9
	ctx.r7.s64 = 9;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r31,136
	ctx.r4.s64 = ctx.r31.s64 + 136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fe670
	ctx.lr = 0x837F7C98;
	sub_837FE670(ctx, base);
	// b 0x837f7f28
	goto loc_837F7F28;
loc_837F7C9C:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r31,136
	ctx.r4.s64 = ctx.r31.s64 + 136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fe670
	ctx.lr = 0x837F7CB8;
	sub_837FE670(ctx, base);
	// b 0x837f7f28
	goto loc_837F7F28;
loc_837F7CBC:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,7
	ctx.r7.s64 = 7;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r31,136
	ctx.r4.s64 = ctx.r31.s64 + 136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fe670
	ctx.lr = 0x837F7CD8;
	sub_837FE670(ctx, base);
	// b 0x837f7f28
	goto loc_837F7F28;
loc_837F7CDC:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,6
	ctx.r7.s64 = 6;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r31,136
	ctx.r4.s64 = ctx.r31.s64 + 136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fe670
	ctx.lr = 0x837F7CF8;
	sub_837FE670(ctx, base);
	// b 0x837f7f28
	goto loc_837F7F28;
loc_837F7CFC:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,5
	ctx.r7.s64 = 5;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r31,136
	ctx.r4.s64 = ctx.r31.s64 + 136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fe670
	ctx.lr = 0x837F7D18;
	sub_837FE670(ctx, base);
	// b 0x837f7f28
	goto loc_837F7F28;
loc_837F7D1C:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r31,136
	ctx.r4.s64 = ctx.r31.s64 + 136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fe670
	ctx.lr = 0x837F7D38;
	sub_837FE670(ctx, base);
	// b 0x837f7f28
	goto loc_837F7F28;
loc_837F7D3C:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r31,136
	ctx.r4.s64 = ctx.r31.s64 + 136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fe670
	ctx.lr = 0x837F7D58;
	sub_837FE670(ctx, base);
	// b 0x837f7f28
	goto loc_837F7F28;
loc_837F7D5C:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r31,136
	ctx.r4.s64 = ctx.r31.s64 + 136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fe670
	ctx.lr = 0x837F7D78;
	sub_837FE670(ctx, base);
	// b 0x837f7f28
	goto loc_837F7F28;
loc_837F7D7C:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,11
	ctx.r7.s64 = 11;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r31,136
	ctx.r4.s64 = ctx.r31.s64 + 136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fe670
	ctx.lr = 0x837F7D98;
	sub_837FE670(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x837f7f28
	goto loc_837F7F28;
loc_837F7DA0:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,12
	ctx.r7.s64 = 12;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r31,136
	ctx.r4.s64 = ctx.r31.s64 + 136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fe670
	ctx.lr = 0x837F7DBC;
	sub_837FE670(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x837f7f28
	goto loc_837F7F28;
loc_837F7DC4:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r31,136
	ctx.r4.s64 = ctx.r31.s64 + 136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fe670
	ctx.lr = 0x837F7DE0;
	sub_837FE670(ctx, base);
	// b 0x837f7f28
	goto loc_837F7F28;
loc_837F7DE4:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r31,136
	ctx.r4.s64 = ctx.r31.s64 + 136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fe670
	ctx.lr = 0x837F7E00;
	sub_837FE670(ctx, base);
	// b 0x837f7f28
	goto loc_837F7F28;
loc_837F7E04:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r31,136
	ctx.r4.s64 = ctx.r31.s64 + 136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fe670
	ctx.lr = 0x837F7E20;
	sub_837FE670(ctx, base);
	// b 0x837f7f28
	goto loc_837F7F28;
loc_837F7E24:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r31,136
	ctx.r4.s64 = ctx.r31.s64 + 136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fe670
	ctx.lr = 0x837F7E40;
	sub_837FE670(ctx, base);
	// b 0x837f7f28
	goto loc_837F7F28;
loc_837F7E44:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r31,136
	ctx.r4.s64 = ctx.r31.s64 + 136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fe670
	ctx.lr = 0x837F7E60;
	sub_837FE670(ctx, base);
	// b 0x837f7f28
	goto loc_837F7F28;
loc_837F7E64:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,5
	ctx.r7.s64 = 5;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r31,136
	ctx.r4.s64 = ctx.r31.s64 + 136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fe670
	ctx.lr = 0x837F7E80;
	sub_837FE670(ctx, base);
	// b 0x837f7f28
	goto loc_837F7F28;
loc_837F7E84:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,6
	ctx.r7.s64 = 6;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r31,136
	ctx.r4.s64 = ctx.r31.s64 + 136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fe670
	ctx.lr = 0x837F7EA0;
	sub_837FE670(ctx, base);
	// b 0x837f7f28
	goto loc_837F7F28;
loc_837F7EA4:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,7
	ctx.r7.s64 = 7;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r31,136
	ctx.r4.s64 = ctx.r31.s64 + 136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fe670
	ctx.lr = 0x837F7EC0;
	sub_837FE670(ctx, base);
	// b 0x837f7f28
	goto loc_837F7F28;
loc_837F7EC4:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r31,136
	ctx.r4.s64 = ctx.r31.s64 + 136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fe670
	ctx.lr = 0x837F7EE0;
	sub_837FE670(ctx, base);
	// b 0x837f7f28
	goto loc_837F7F28;
loc_837F7EE4:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r31,136
	ctx.r4.s64 = ctx.r31.s64 + 136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fe670
	ctx.lr = 0x837F7F00;
	sub_837FE670(ctx, base);
	// li r27,1
	ctx.r27.s64 = 1;
	// b 0x837f7f28
	goto loc_837F7F28;
loc_837F7F08:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r31,136
	ctx.r4.s64 = ctx.r31.s64 + 136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fe670
	ctx.lr = 0x837F7F24;
	sub_837FE670(ctx, base);
	// li r26,1
	ctx.r26.s64 = 1;
loc_837F7F28:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// rotlwi r28,r28,1
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r28.u32, 1);
	// addi r11,r30,-4864
	ctx.r11.s64 = ctx.r30.s64 + -4864;
	// cmplwi cr6,r11,27
	cr6.compare<uint32_t>(ctx.r11.u32, 27, xer);
	// blt cr6,0x837f7bbc
	if (cr6.lt) goto loc_837F7BBC;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f7f60
	if (cr6.eq) goto loc_837F7F60;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,22
	ctx.r5.s64 = 22;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fe600
	ctx.lr = 0x837F7F60;
	sub_837FE600(ctx, base);
loc_837F7F60:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f7f84
	if (cr6.eq) goto loc_837F7F84;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,23
	ctx.r5.s64 = 23;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fe600
	ctx.lr = 0x837F7F84;
	sub_837FE600(ctx, base);
loc_837F7F84:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f7fb0
	if (cr6.eq) goto loc_837F7FB0;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,12
	ctx.r7.s64 = 12;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// li r5,25
	ctx.r5.s64 = 25;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fe670
	ctx.lr = 0x837F7FB0;
	sub_837FE670(ctx, base);
loc_837F7FB0:
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f8084
	if (cr6.eq) goto loc_837F8084;
	// bl 0x837da198
	ctx.lr = 0x837F7FC0;
	sub_837DA198(ctx, base);
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// mulli r10,r10,5532
	ctx.r10.s64 = ctx.r10.s64 * 5532;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r10,r10,196
	ctx.r10.s64 = ctx.r10.s64 + 196;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
loc_837F7FDC:
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r7,40352
	cr6.compare<uint32_t>(ctx.r7.u32, 40352, xer);
	// beq cr6,0x837f8004
	if (cr6.eq) goto loc_837F8004;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,172
	ctx.r10.s64 = ctx.r10.s64 + 172;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// blt cr6,0x837f7fdc
	if (cr6.lt) goto loc_837F7FDC;
	// b 0x837f800c
	goto loc_837F800C;
loc_837F8004:
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// blt cr6,0x837f8010
	if (cr6.lt) goto loc_837F8010;
loc_837F800C:
	// li r11,10
	ctx.r11.s64 = 10;
loc_837F8010:
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r9,9
	ctx.r11.s64 = ctx.r9.s64 + 9;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// li r5,23
	ctx.r5.s64 = 23;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fe670
	ctx.lr = 0x837F8034;
	sub_837FE670(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r30,r31,136
	ctx.r30.s64 = ctx.r31.s64 + 136;
	// addi r10,r11,9
	ctx.r10.s64 = ctx.r11.s64 + 9;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r5,4888
	ctx.r5.s64 = 4888;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// bl 0x837fe670
	ctx.lr = 0x837F805C;
	sub_837FE670(ctx, base);
	// clrlwi r9,r24,24
	ctx.r9.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x837f8084
	if (!cr6.eq) goto loc_837F8084;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,10
	ctx.r7.s64 = 10;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,4864
	ctx.r5.s64 = 4864;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fe670
	ctx.lr = 0x837F8084;
	sub_837FE670(ctx, base);
loc_837F8084:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837F808C"))) PPC_WEAK_FUNC(sub_837F808C);
PPC_FUNC_IMPL(__imp__sub_837F808C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837F8090"))) PPC_WEAK_FUNC(sub_837F8090);
PPC_FUNC_IMPL(__imp__sub_837F8090) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837F8098;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,92(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r30,r3,88
	ctx.r30.s64 = ctx.r3.s64 + 88;
	// li r29,1
	ctx.r29.s64 = 1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x837f80e0
	if (!cr6.eq) goto loc_837F80E0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x837fe588
	ctx.lr = 0x837F80C4;
	sub_837FE588(ctx, base);
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,22
	ctx.r5.s64 = 22;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fe600
	ctx.lr = 0x837F80DC;
	sub_837FE600(ctx, base);
	// stb r29,464(r31)
	PPC_STORE_U8(ctx.r31.u32 + 464, ctx.r29.u8);
loc_837F80E0:
	// li r30,5632
	ctx.r30.s64 = 5632;
loc_837F80E4:
	// and r11,r29,r28
	ctx.r11.u64 = ctx.r29.u64 & ctx.r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f8268
	if (cr6.eq) goto loc_837F8268;
	// addi r11,r30,-5632
	ctx.r11.s64 = ctx.r30.s64 + -5632;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// bgt cr6,0x837f8268
	if (cr6.gt) goto loc_837F8268;
	// lis r12,-31872
	ctx.r12.s64 = -2088763392;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-32492
	ctx.r12.s64 = ctx.r12.s64 + -32492;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_837F819C;
	case 1:
		goto loc_837F81A8;
	case 2:
		goto loc_837F81B4;
	case 3:
		goto loc_837F81C0;
	case 4:
		goto loc_837F81CC;
	case 5:
		goto loc_837F81D8;
	case 6:
		goto loc_837F81E4;
	case 7:
		goto loc_837F81F0;
	case 8:
		goto loc_837F8268;
	case 9:
		goto loc_837F8268;
	case 10:
		goto loc_837F81F8;
	case 11:
		goto loc_837F8204;
	case 12:
		goto loc_837F8210;
	case 13:
		goto loc_837F821C;
	case 14:
		goto loc_837F8228;
	case 15:
		goto loc_837F8234;
	case 16:
		goto loc_837F8240;
	case 17:
		goto loc_837F824C;
	case 18:
		goto loc_837F8268;
	case 19:
		goto loc_837F8268;
	case 20:
		goto loc_837F8268;
	case 21:
		goto loc_837F8268;
	case 22:
		goto loc_837F8178;
	case 23:
		goto loc_837F8184;
	case 24:
		goto loc_837F8190;
	default:
		return;
	}
	// lwz r27,-32356(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32356);
	// lwz r27,-32344(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32344);
	// lwz r27,-32332(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32332);
	// lwz r27,-32320(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32320);
	// lwz r27,-32308(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32308);
	// lwz r27,-32296(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32296);
	// lwz r27,-32284(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32284);
	// lwz r27,-32272(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32272);
	// lwz r27,-32152(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32152);
	// lwz r27,-32152(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32152);
	// lwz r27,-32264(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32264);
	// lwz r27,-32252(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32252);
	// lwz r27,-32240(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32240);
	// lwz r27,-32228(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32228);
	// lwz r27,-32216(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32216);
	// lwz r27,-32204(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32204);
	// lwz r27,-32192(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32192);
	// lwz r27,-32180(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32180);
	// lwz r27,-32152(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32152);
	// lwz r27,-32152(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32152);
	// lwz r27,-32152(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32152);
	// lwz r27,-32152(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32152);
	// lwz r27,-32392(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32392);
	// lwz r27,-32380(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32380);
	// lwz r27,-32368(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32368);
loc_837F8178:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2
	ctx.r6.s64 = 2;
	// b 0x837f8254
	goto loc_837F8254;
loc_837F8184:
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,2
	ctx.r6.s64 = 2;
	// b 0x837f8254
	goto loc_837F8254;
loc_837F8190:
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,2
	ctx.r6.s64 = 2;
	// b 0x837f8254
	goto loc_837F8254;
loc_837F819C:
	// li r7,10
	ctx.r7.s64 = 10;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x837f8254
	goto loc_837F8254;
loc_837F81A8:
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x837f8254
	goto loc_837F8254;
loc_837F81B4:
	// li r7,4
	ctx.r7.s64 = 4;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x837f8254
	goto loc_837F8254;
loc_837F81C0:
	// li r7,5
	ctx.r7.s64 = 5;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x837f8254
	goto loc_837F8254;
loc_837F81CC:
	// li r7,6
	ctx.r7.s64 = 6;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x837f8254
	goto loc_837F8254;
loc_837F81D8:
	// li r7,7
	ctx.r7.s64 = 7;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x837f8254
	goto loc_837F8254;
loc_837F81E4:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x837f8254
	goto loc_837F8254;
loc_837F81F0:
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x837f8250
	goto loc_837F8250;
loc_837F81F8:
	// li r7,10
	ctx.r7.s64 = 10;
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x837f8254
	goto loc_837F8254;
loc_837F8204:
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x837f8254
	goto loc_837F8254;
loc_837F8210:
	// li r7,4
	ctx.r7.s64 = 4;
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x837f8254
	goto loc_837F8254;
loc_837F821C:
	// li r7,5
	ctx.r7.s64 = 5;
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x837f8254
	goto loc_837F8254;
loc_837F8228:
	// li r7,6
	ctx.r7.s64 = 6;
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x837f8254
	goto loc_837F8254;
loc_837F8234:
	// li r7,7
	ctx.r7.s64 = 7;
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x837f8254
	goto loc_837F8254;
loc_837F8240:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x837f8254
	goto loc_837F8254;
loc_837F824C:
	// li r6,1
	ctx.r6.s64 = 1;
loc_837F8250:
	// li r7,9
	ctx.r7.s64 = 9;
loc_837F8254:
	// addi r4,r31,136
	ctx.r4.s64 = ctx.r31.s64 + 136;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fe670
	ctx.lr = 0x837F8268;
	sub_837FE670(ctx, base);
loc_837F8268:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// rotlwi r29,r29,1
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r29.u32, 1);
	// addi r11,r30,-5632
	ctx.r11.s64 = ctx.r30.s64 + -5632;
	// cmplwi cr6,r11,27
	cr6.compare<uint32_t>(ctx.r11.u32, 27, xer);
	// blt cr6,0x837f80e4
	if (cr6.lt) goto loc_837F80E4;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837F8284"))) PPC_WEAK_FUNC(sub_837F8284);
PPC_FUNC_IMPL(__imp__sub_837F8284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837F8288"))) PPC_WEAK_FUNC(sub_837F8288);
PPC_FUNC_IMPL(__imp__sub_837F8288) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x837F8290;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837f8600
	if (!cr6.eq) goto loc_837F8600;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,5
	ctx.r10.s64 = 327680;
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x837f8600
	if (cr6.lt) goto loc_837F8600;
	// lis r10,5
	ctx.r10.s64 = 327680;
	// ori r9,r10,17
	ctx.r9.u64 = ctx.r10.u64 | 17;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x837f8600
	if (!cr6.lt) goto loc_837F8600;
	// bl 0x837da198
	ctx.lr = 0x837F82D4;
	sub_837DA198(ctx, base);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// li r24,0
	ctx.r24.s64 = 0;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// srawi. r6,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 3;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// beq 0x837f83e0
	if (cr0.eq) goto loc_837F83E0;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_837F8314:
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r8,5(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// addi r10,r9,-4097
	ctx.r10.s64 = ctx.r9.s64 + -4097;
	// cmplwi cr6,r10,7
	cr6.compare<uint32_t>(ctx.r10.u32, 7, xer);
	// bgt cr6,0x837f83d0
	if (cr6.gt) goto loc_837F83D0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bdzf 4*cr6+eq,0x837f8354
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837F8354;
	// bdzf 4*cr6+eq,0x837f8374
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837F8374;
	// bdzf 4*cr6+eq,0x837f8374
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837F8374;
	// bdzf 4*cr6+eq,0x837f8394
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837F8394;
	// bdzf 4*cr6+eq,0x837f8394
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837F8394;
	// bdzf 4*cr6+eq,0x837f83b4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837F83B4;
	// bne cr6,0x837f83b4
	if (!cr6.eq) goto loc_837F83B4;
loc_837F8354:
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r10,11
	cr6.compare<uint32_t>(ctx.r10.u32, 11, xer);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bge cr6,0x837f836c
	if (!cr6.lt) goto loc_837F836C;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x837f83d0
	goto loc_837F83D0;
loc_837F836C:
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x837f83d0
	goto loc_837F83D0;
loc_837F8374:
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r10,11
	cr6.compare<uint32_t>(ctx.r10.u32, 11, xer);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bge cr6,0x837f838c
	if (!cr6.lt) goto loc_837F838C;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x837f83d0
	goto loc_837F83D0;
loc_837F838C:
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x837f83d0
	goto loc_837F83D0;
loc_837F8394:
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r10,11
	cr6.compare<uint32_t>(ctx.r10.u32, 11, xer);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bge cr6,0x837f83ac
	if (!cr6.lt) goto loc_837F83AC;
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x837f83d0
	goto loc_837F83D0;
loc_837F83AC:
	// add r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x837f83d0
	goto loc_837F83D0;
loc_837F83B4:
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r10,11
	cr6.compare<uint32_t>(ctx.r10.u32, 11, xer);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bge cr6,0x837f83cc
	if (!cr6.lt) goto loc_837F83CC;
	// add r26,r10,r11
	ctx.r26.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x837f83d0
	goto loc_837F83D0;
loc_837F83CC:
	// add r25,r10,r11
	ctx.r25.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_837F83D0:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r5,r6
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, xer);
	// blt cr6,0x837f8314
	if (cr6.lt) goto loc_837F8314;
loc_837F83E0:
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x837f8418
	if (cr6.eq) goto loc_837F8418;
	// lbz r11,5(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 5);
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bge cr6,0x837f8414
	if (!cr6.lt) goto loc_837F8414;
	// lbz r9,4(r7)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r7.u32 + 4);
	// mulli r10,r11,172
	ctx.r10.s64 = ctx.r11.s64 * 172;
	// mulli r11,r9,5532
	ctx.r11.s64 = ctx.r9.s64 * 5532;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r9,r11,200
	ctx.r9.s64 = ctx.r11.s64 + 200;
	// b 0x837f8418
	goto loc_837F8418;
loc_837F8414:
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
loc_837F8418:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x837f8464
	if (cr6.eq) goto loc_837F8464;
	// lbz r11,5(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bge cr6,0x837f8464
	if (!cr6.lt) goto loc_837F8464;
	// lbz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// mulli r10,r11,172
	ctx.r10.s64 = ctx.r11.s64 * 172;
	// mulli r11,r8,5532
	ctx.r11.s64 = ctx.r8.s64 * 5532;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,200
	ctx.r11.s64 = ctx.r11.s64 + 200;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f8464
	if (cr6.eq) goto loc_837F8464;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x837f8460
	if (cr6.eq) goto loc_837F8460;
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// b 0x837f8464
	goto loc_837F8464;
loc_837F8460:
	// stb r24,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r24.u8);
loc_837F8464:
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x837f849c
	if (cr6.eq) goto loc_837F849C;
	// lbz r11,5(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bge cr6,0x837f8498
	if (!cr6.lt) goto loc_837F8498;
	// lbz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// mulli r10,r11,172
	ctx.r10.s64 = ctx.r11.s64 * 172;
	// mulli r11,r9,5532
	ctx.r11.s64 = ctx.r9.s64 * 5532;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r9,r11,200
	ctx.r9.s64 = ctx.r11.s64 + 200;
	// b 0x837f849c
	goto loc_837F849C;
loc_837F8498:
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
loc_837F849C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x837f84e8
	if (cr6.eq) goto loc_837F84E8;
	// lbz r11,5(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 5);
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bge cr6,0x837f84e8
	if (!cr6.lt) goto loc_837F84E8;
	// lbz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// mulli r10,r11,172
	ctx.r10.s64 = ctx.r11.s64 * 172;
	// mulli r11,r8,5532
	ctx.r11.s64 = ctx.r8.s64 * 5532;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,200
	ctx.r11.s64 = ctx.r11.s64 + 200;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f84e8
	if (cr6.eq) goto loc_837F84E8;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x837f84e4
	if (cr6.eq) goto loc_837F84E4;
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// b 0x837f84e8
	goto loc_837F84E8;
loc_837F84E4:
	// stb r24,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r24.u8);
loc_837F84E8:
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x837f8520
	if (cr6.eq) goto loc_837F8520;
	// lbz r11,5(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 5);
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bge cr6,0x837f851c
	if (!cr6.lt) goto loc_837F851C;
	// lbz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + 4);
	// mulli r10,r11,172
	ctx.r10.s64 = ctx.r11.s64 * 172;
	// mulli r11,r9,5532
	ctx.r11.s64 = ctx.r9.s64 * 5532;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r9,r11,200
	ctx.r9.s64 = ctx.r11.s64 + 200;
	// b 0x837f8520
	goto loc_837F8520;
loc_837F851C:
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
loc_837F8520:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x837f856c
	if (cr6.eq) goto loc_837F856C;
	// lbz r11,5(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 5);
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bge cr6,0x837f856c
	if (!cr6.lt) goto loc_837F856C;
	// lbz r8,4(r27)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r27.u32 + 4);
	// mulli r10,r11,172
	ctx.r10.s64 = ctx.r11.s64 * 172;
	// mulli r11,r8,5532
	ctx.r11.s64 = ctx.r8.s64 * 5532;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,200
	ctx.r11.s64 = ctx.r11.s64 + 200;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f856c
	if (cr6.eq) goto loc_837F856C;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x837f8568
	if (cr6.eq) goto loc_837F8568;
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// b 0x837f856c
	goto loc_837F856C;
loc_837F8568:
	// stb r24,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r24.u8);
loc_837F856C:
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x837f85a4
	if (cr6.eq) goto loc_837F85A4;
	// lbz r11,5(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 5);
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bge cr6,0x837f85a0
	if (!cr6.lt) goto loc_837F85A0;
	// lbz r9,4(r26)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r26.u32 + 4);
	// mulli r10,r11,172
	ctx.r10.s64 = ctx.r11.s64 * 172;
	// mulli r11,r9,5532
	ctx.r11.s64 = ctx.r9.s64 * 5532;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r9,r11,200
	ctx.r9.s64 = ctx.r11.s64 + 200;
	// b 0x837f85a4
	goto loc_837F85A4;
loc_837F85A0:
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
loc_837F85A4:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x837f8600
	if (cr6.eq) goto loc_837F8600;
	// lbz r11,5(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 5);
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bge cr6,0x837f8600
	if (!cr6.lt) goto loc_837F8600;
	// lbz r8,4(r25)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r25.u32 + 4);
	// mulli r10,r11,172
	ctx.r10.s64 = ctx.r11.s64 * 172;
	// mulli r11,r8,5532
	ctx.r11.s64 = ctx.r8.s64 * 5532;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,200
	ctx.r11.s64 = ctx.r11.s64 + 200;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f8600
	if (cr6.eq) goto loc_837F8600;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x837f85fc
	if (cr6.eq) goto loc_837F85FC;
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// bl 0x83800618
	ctx.lr = 0x837F85F4;
	sub_83800618(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_837F85FC:
	// stb r24,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r24.u8);
loc_837F8600:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83800618
	ctx.lr = 0x837F860C;
	sub_83800618(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837F8614"))) PPC_WEAK_FUNC(sub_837F8614);
PPC_FUNC_IMPL(__imp__sub_837F8614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837F8618"))) PPC_WEAK_FUNC(sub_837F8618);
PPC_FUNC_IMPL(__imp__sub_837F8618) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,7
	ctx.r10.s64 = 458752;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x837f86a0
	if (cr6.lt) goto loc_837F86A0;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// ori r9,r10,35
	ctx.r9.u64 = ctx.r10.u64 | 35;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x837f86a0
	if (cr6.eq) goto loc_837F86A0;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// ori r9,r10,36
	ctx.r9.u64 = ctx.r10.u64 | 36;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x837f86a0
	if (cr6.eq) goto loc_837F86A0;
	// bl 0x830ff290
	ctx.lr = 0x837F8668;
	sub_830FF290(ctx, base);
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// stw r11,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r11.u32);
	// bl 0x830ff290
	ctx.lr = 0x837F8674;
	sub_830FF290(ctx, base);
	// li r4,30
	ctx.r4.s64 = 30;
	// bl 0x830ff798
	ctx.lr = 0x837F867C;
	sub_830FF798(ctx, base);
	// bl 0x830ff290
	ctx.lr = 0x837F8680;
	sub_830FF290(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,36(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// bl 0x837f9838
	ctx.lr = 0x837F86A0;
	sub_837F9838(ctx, base);
loc_837F86A0:
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

__attribute__((alias("__imp__sub_837F86B4"))) PPC_WEAK_FUNC(sub_837F86B4);
PPC_FUNC_IMPL(__imp__sub_837F86B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837F86B8"))) PPC_WEAK_FUNC(sub_837F86B8);
PPC_FUNC_IMPL(__imp__sub_837F86B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x837f8714
	if (cr6.eq) goto loc_837F8714;
	// addi r10,r5,-4
	ctx.r10.s64 = ctx.r5.s64 + -4;
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
loc_837F86C8:
	// lwz r9,-16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// addi r5,r5,28
	ctx.r5.s64 = ctx.r5.s64 + 28;
	// lwz r8,-12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// lfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lfs f13,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,16(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,20(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,24(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// lbz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// stbu r7,28(r10)
	ea = 28 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r7.u8);
	ctx.r10.u32 = ea;
	// addi r6,r11,-16
	ctx.r6.s64 = ctx.r11.s64 + -16;
	// cmplw cr6,r6,r4
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, xer);
	// bne cr6,0x837f86c8
	if (!cr6.eq) goto loc_837F86C8;
loc_837F8714:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837F871C"))) PPC_WEAK_FUNC(sub_837F871C);
PPC_FUNC_IMPL(__imp__sub_837F871C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837F8720"))) PPC_WEAK_FUNC(sub_837F8720);
PPC_FUNC_IMPL(__imp__sub_837F8720) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x837F8728;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x837da198
	ctx.lr = 0x837F8738;
	sub_837DA198(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x837d8a88
	ctx.lr = 0x837F874C;
	sub_837D8A88(ctx, base);
	// addis r11,r30,-7
	ctx.r11.s64 = ctx.r30.s64 + -458752;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,-17
	ctx.r11.s64 = ctx.r11.s64 + -17;
	// cmplwi cr6,r11,28
	cr6.compare<uint32_t>(ctx.r11.u32, 28, xer);
	// bgt cr6,0x837f8ba8
	if (cr6.gt) goto loc_837F8BA8;
	// lis r12,-31872
	ctx.r12.s64 = -2088763392;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-30856
	ctx.r12.s64 = ctx.r12.s64 + -30856;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_837F89C0;
	case 1:
		goto loc_837F89C0;
	case 2:
		goto loc_837F8BA8;
	case 3:
		goto loc_837F8BA8;
	case 4:
		goto loc_837F8BA8;
	case 5:
		goto loc_837F8BA8;
	case 6:
		goto loc_837F8AB0;
	case 7:
		goto loc_837F8AB0;
	case 8:
		goto loc_837F8BA8;
	case 9:
		goto loc_837F8BA8;
	case 10:
		goto loc_837F8BA8;
	case 11:
		goto loc_837F8BA8;
	case 12:
		goto loc_837F8BA8;
	case 13:
		goto loc_837F8BA8;
	case 14:
		goto loc_837F8AB0;
	case 15:
		goto loc_837F8BA8;
	case 16:
		goto loc_837F8BA8;
	case 17:
		goto loc_837F8BA8;
	case 18:
		goto loc_837F87EC;
	case 19:
		goto loc_837F894C;
	case 20:
		goto loc_837F894C;
	case 21:
		goto loc_837F894C;
	case 22:
		goto loc_837F87EC;
	case 23:
		goto loc_837F87EC;
	case 24:
		goto loc_837F87EC;
	case 25:
		goto loc_837F894C;
	case 26:
		goto loc_837F87EC;
	case 27:
		goto loc_837F8868;
	case 28:
		goto loc_837F8868;
	default:
		return;
	}
	// lwz r27,-30272(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30272);
	// lwz r27,-30272(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30272);
	// lwz r27,-29784(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29784);
	// lwz r27,-29784(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29784);
	// lwz r27,-29784(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29784);
	// lwz r27,-29784(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29784);
	// lwz r27,-30032(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30032);
	// lwz r27,-30032(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30032);
	// lwz r27,-29784(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29784);
	// lwz r27,-29784(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29784);
	// lwz r27,-29784(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29784);
	// lwz r27,-29784(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29784);
	// lwz r27,-29784(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29784);
	// lwz r27,-29784(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29784);
	// lwz r27,-30032(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30032);
	// lwz r27,-29784(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29784);
	// lwz r27,-29784(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29784);
	// lwz r27,-29784(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29784);
	// lwz r27,-30740(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30740);
	// lwz r27,-30388(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30388);
	// lwz r27,-30388(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30388);
	// lwz r27,-30388(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30388);
	// lwz r27,-30740(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30740);
	// lwz r27,-30740(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30740);
	// lwz r27,-30740(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30740);
	// lwz r27,-30388(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30388);
	// lwz r27,-30740(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30740);
	// lwz r27,-30616(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30616);
	// lwz r27,-30616(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30616);
loc_837F87EC:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r30,r31,88
	ctx.r30.s64 = ctx.r31.s64 + 88;
	// li r8,11
	ctx.r8.s64 = 11;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x837fe670
	ctx.lr = 0x837F8810;
	sub_837FE670(ctx, base);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// li r8,6
	ctx.r8.s64 = 6;
	// cntlzw r6,r9
	ctx.r6.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r6,r6,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// bl 0x837fe670
	ctx.lr = 0x837F8838;
	sub_837FE670(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r8,5
	ctx.r8.s64 = 5;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// li r5,11
	ctx.r5.s64 = 11;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r6,r9,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fe670
	ctx.lr = 0x837F8860;
	sub_837FE670(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_837F8868:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r30,r31,88
	ctx.r30.s64 = ctx.r31.s64 + 88;
	// li r8,11
	ctx.r8.s64 = 11;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x837fe670
	ctx.lr = 0x837F888C;
	sub_837FE670(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r8,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 3;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x837f88ac
	if (!cr0.eq) goto loc_837F88AC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x837F88AC;
	sub_831CC188(ctx, base);
loc_837F88AC:
	// lbz r10,11360(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 11360);
	// stb r10,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r10.u8);
	// lbz r9,11360(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 11360);
	// cmplwi cr6,r9,11
	cr6.compare<uint32_t>(ctx.r9.u32, 11, xer);
	// bge cr6,0x837f88f4
	if (!cr6.lt) goto loc_837F88F4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lbz r10,11360(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 11360);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r7,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// bgt cr6,0x837f88e8
	if (cr6.gt) goto loc_837F88E8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x837F88E8;
	sub_831CC188(ctx, base);
loc_837F88E8:
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stb r27,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r27.u8);
loc_837F88F4:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r8,6
	ctx.r8.s64 = 6;
	// li r7,5
	ctx.r7.s64 = 5;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// li r5,16
	ctx.r5.s64 = 16;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r6,r9,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fe670
	ctx.lr = 0x837F891C;
	sub_837FE670(ctx, base);
	// lwz r6,36(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r8,5
	ctx.r8.s64 = 5;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// li r5,11
	ctx.r5.s64 = 11;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r6,r10,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fe670
	ctx.lr = 0x837F8944;
	sub_837FE670(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_837F894C:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r30,r31,88
	ctx.r30.s64 = ctx.r31.s64 + 88;
	// li r8,11
	ctx.r8.s64 = 11;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r6,r9,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x837fe670
	ctx.lr = 0x837F8978;
	sub_837FE670(ctx, base);
	// lwz r6,36(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r8,6
	ctx.r8.s64 = 6;
	// li r7,5
	ctx.r7.s64 = 5;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// bl 0x837fe670
	ctx.lr = 0x837F8998;
	sub_837FE670(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r8,5
	ctx.r8.s64 = 5;
	// li r5,11
	ctx.r5.s64 = 11;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fe670
	ctx.lr = 0x837F89B8;
	sub_837FE670(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_837F89C0:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r28,r31,88
	ctx.r28.s64 = ctx.r31.s64 + 88;
	// li r8,11
	ctx.r8.s64 = 11;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x837fe670
	ctx.lr = 0x837F89E4;
	sub_837FE670(ctx, base);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r29,r31,104
	ctx.r29.s64 = ctx.r31.s64 + 104;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,11
	ctx.r7.s64 = 11;
	// li r5,11
	ctx.r5.s64 = 11;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// bl 0x837fe670
	ctx.lr = 0x837F8A08;
	sub_837FE670(ctx, base);
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// clrlwi r6,r9,24
	ctx.r6.u64 = ctx.r9.u32 & 0xFF;
	// cmpw cr6,r30,r6
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r6.s32, xer);
	// bne cr6,0x837f8a30
	if (!cr6.eq) goto loc_837F8A30;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837f8a30
	if (cr6.lt) goto loc_837F8A30;
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r6,r30,24
	ctx.r6.u64 = ctx.r30.u32 & 0xFF;
	// b 0x837f8a34
	goto loc_837F8A34;
loc_837F8A30:
	// li r7,15
	ctx.r7.s64 = 15;
loc_837F8A34:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r5,15
	ctx.r5.s64 = 15;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fe670
	ctx.lr = 0x837F8A48;
	sub_837FE670(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r8,6
	ctx.r8.s64 = 6;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// li r7,5
	ctx.r7.s64 = 5;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// rlwinm r6,r9,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fe670
	ctx.lr = 0x837F8A70;
	sub_837FE670(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,7
	ctx.r6.s64 = 7;
	// li r5,25
	ctx.r5.s64 = 25;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fe670
	ctx.lr = 0x837F8A8C;
	sub_837FE670(ctx, base);
	// bl 0x837da198
	ctx.lr = 0x837F8A90;
	sub_837DA198(ctx, base);
	// lis r8,-31769
	ctx.r8.s64 = -2082013184;
	// addi r3,r3,11300
	ctx.r3.s64 = ctx.r3.s64 + 11300;
	// addi r4,r8,-432
	ctx.r4.s64 = ctx.r8.s64 + -432;
	// bl 0x825a2298
	ctx.lr = 0x837F8AA0;
	sub_825A2298(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x837f8cd4
	if (cr6.eq) goto loc_837F8CD4;
	// b 0x837f8cb8
	goto loc_837F8CB8;
loc_837F8AB0:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r28,r31,88
	ctx.r28.s64 = ctx.r31.s64 + 88;
	// li r8,11
	ctx.r8.s64 = 11;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x837fe670
	ctx.lr = 0x837F8AD4;
	sub_837FE670(ctx, base);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r29,r31,104
	ctx.r29.s64 = ctx.r31.s64 + 104;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,11
	ctx.r7.s64 = 11;
	// li r5,11
	ctx.r5.s64 = 11;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// bl 0x837fe670
	ctx.lr = 0x837F8AF8;
	sub_837FE670(ctx, base);
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// clrlwi r6,r9,24
	ctx.r6.u64 = ctx.r9.u32 & 0xFF;
	// cmpw cr6,r30,r6
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r6.s32, xer);
	// bne cr6,0x837f8b20
	if (!cr6.eq) goto loc_837F8B20;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837f8b20
	if (cr6.lt) goto loc_837F8B20;
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r6,r30,24
	ctx.r6.u64 = ctx.r30.u32 & 0xFF;
	// b 0x837f8b24
	goto loc_837F8B24;
loc_837F8B20:
	// li r7,15
	ctx.r7.s64 = 15;
loc_837F8B24:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r5,15
	ctx.r5.s64 = 15;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fe670
	ctx.lr = 0x837F8B38;
	sub_837FE670(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r8,6
	ctx.r8.s64 = 6;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// li r7,5
	ctx.r7.s64 = 5;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// rlwinm r6,r9,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fe670
	ctx.lr = 0x837F8B60;
	sub_837FE670(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r6,r11,3
	ctx.r6.s64 = ctx.r11.s64 + 3;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,25
	ctx.r5.s64 = 25;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// bl 0x837fe670
	ctx.lr = 0x837F8B84;
	sub_837FE670(ctx, base);
	// bl 0x837da198
	ctx.lr = 0x837F8B88;
	sub_837DA198(ctx, base);
	// lis r5,-31769
	ctx.r5.s64 = -2082013184;
	// addi r3,r3,11300
	ctx.r3.s64 = ctx.r3.s64 + 11300;
	// addi r4,r5,-432
	ctx.r4.s64 = ctx.r5.s64 + -432;
	// bl 0x825a2298
	ctx.lr = 0x837F8B98;
	sub_825A2298(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x837f8cd4
	if (cr6.eq) goto loc_837F8CD4;
	// b 0x837f8cb8
	goto loc_837F8CB8;
loc_837F8BA8:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r28,r31,88
	ctx.r28.s64 = ctx.r31.s64 + 88;
	// li r8,11
	ctx.r8.s64 = 11;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x837fe670
	ctx.lr = 0x837F8BCC;
	sub_837FE670(ctx, base);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r29,r31,104
	ctx.r29.s64 = ctx.r31.s64 + 104;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,11
	ctx.r7.s64 = 11;
	// li r5,11
	ctx.r5.s64 = 11;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// bl 0x837fe670
	ctx.lr = 0x837F8BF0;
	sub_837FE670(ctx, base);
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// clrlwi r6,r9,24
	ctx.r6.u64 = ctx.r9.u32 & 0xFF;
	// cmpw cr6,r30,r6
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r6.s32, xer);
	// bne cr6,0x837f8c18
	if (!cr6.eq) goto loc_837F8C18;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837f8c18
	if (cr6.lt) goto loc_837F8C18;
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r6,r30,24
	ctx.r6.u64 = ctx.r30.u32 & 0xFF;
	// b 0x837f8c1c
	goto loc_837F8C1C;
loc_837F8C18:
	// li r7,15
	ctx.r7.s64 = 15;
loc_837F8C1C:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r5,15
	ctx.r5.s64 = 15;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fe670
	ctx.lr = 0x837F8C30;
	sub_837FE670(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r8,6
	ctx.r8.s64 = 6;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// li r7,5
	ctx.r7.s64 = 5;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// rlwinm r6,r9,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fe670
	ctx.lr = 0x837F8C58;
	sub_837FE670(ctx, base);
	// bl 0x837da198
	ctx.lr = 0x837F8C5C;
	sub_837DA198(ctx, base);
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r10,r3,11300
	ctx.r10.s64 = ctx.r3.s64 + 11300;
	// addi r11,r11,-432
	ctx.r11.s64 = ctx.r11.s64 + -432;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x837f8c84
	if (!cr6.eq) goto loc_837F8C84;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x837f8cac
	goto loc_837F8CAC;
loc_837F8C84:
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x837f8ca4
	if (!cr6.eq) goto loc_837F8CA4;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x837f8ca8
	if (cr6.eq) goto loc_837F8CA8;
loc_837F8CA4:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_837F8CA8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_837F8CAC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837f8cd4
	if (!cr6.eq) goto loc_837F8CD4;
loc_837F8CB8:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,5
	ctx.r6.s64 = 5;
	// li r5,22
	ctx.r5.s64 = 22;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fe670
	ctx.lr = 0x837F8CD4;
	sub_837FE670(ctx, base);
loc_837F8CD4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837F8CDC"))) PPC_WEAK_FUNC(sub_837F8CDC);
PPC_FUNC_IMPL(__imp__sub_837F8CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837F8CE0"))) PPC_WEAK_FUNC(sub_837F8CE0);
PPC_FUNC_IMPL(__imp__sub_837F8CE0) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r10,464(r3)
	PPC_STORE_U8(ctx.r3.u32 + 464, ctx.r10.u8);
	// li r7,348
	ctx.r7.s64 = 348;
	// lwz r4,20(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// lwz r6,24(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// subf r3,r4,r6
	ctx.r3.s64 = ctx.r6.s64 - ctx.r4.s64;
	// lwz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// divw. r9,r3,r7
	ctx.r9.s32 = PPCDivide(ctx.r3.s32, ctx.r7.s32);
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// rlwinm r7,r4,16,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFF;
	// beq 0x837f8d48
	if (cr0.eq) goto loc_837F8D48;
loc_837F8D28:
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r10,r10,348
	ctx.r10.s64 = ctx.r10.s64 + 348;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// lwz r6,52(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	// or r5,r6,r5
	ctx.r5.u64 = ctx.r6.u64 | ctx.r5.u64;
	// blt cr6,0x837f8d28
	if (cr6.lt) goto loc_837F8D28;
loc_837F8D48:
	// cmpwi cr6,r7,5
	cr6.compare<int32_t>(ctx.r7.s32, 5, xer);
	// bne cr6,0x837f8d5c
	if (!cr6.eq) goto loc_837F8D5C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837f6a48
	ctx.lr = 0x837F8D58;
	sub_837F6A48(ctx, base);
	// b 0x837f8dcc
	goto loc_837F8DCC;
loc_837F8D5C:
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x837f8d70
	if (!cr6.eq) goto loc_837F8D70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837f79f8
	ctx.lr = 0x837F8D6C;
	sub_837F79F8(ctx, base);
	// b 0x837f8dcc
	goto loc_837F8DCC;
loc_837F8D70:
	// cmpwi cr6,r7,3
	cr6.compare<int32_t>(ctx.r7.s32, 3, xer);
	// bne cr6,0x837f8d84
	if (!cr6.eq) goto loc_837F8D84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837f7b70
	ctx.lr = 0x837F8D80;
	sub_837F7B70(ctx, base);
	// b 0x837f8dcc
	goto loc_837F8DCC;
loc_837F8D84:
	// cmpwi cr6,r7,4
	cr6.compare<int32_t>(ctx.r7.s32, 4, xer);
	// bne cr6,0x837f8d98
	if (!cr6.eq) goto loc_837F8D98;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837f6bb0
	ctx.lr = 0x837F8D94;
	sub_837F6BB0(ctx, base);
	// b 0x837f8dcc
	goto loc_837F8DCC;
loc_837F8D98:
	// cmpwi cr6,r7,6
	cr6.compare<int32_t>(ctx.r7.s32, 6, xer);
	// bne cr6,0x837f8dac
	if (!cr6.eq) goto loc_837F8DAC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837f8090
	ctx.lr = 0x837F8DA8;
	sub_837F8090(ctx, base);
	// b 0x837f8dcc
	goto loc_837F8DCC;
loc_837F8DAC:
	// cmpwi cr6,r7,7
	cr6.compare<int32_t>(ctx.r7.s32, 7, xer);
	// bne cr6,0x837f8dc0
	if (!cr6.eq) goto loc_837F8DC0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837f8720
	ctx.lr = 0x837F8DBC;
	sub_837F8720(ctx, base);
	// b 0x837f8dcc
	goto loc_837F8DCC;
loc_837F8DC0:
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fe588
	ctx.lr = 0x837F8DCC;
	sub_837FE588(ctx, base);
loc_837F8DCC:
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fd1d8
	ctx.lr = 0x837F8DD8;
	sub_837FD1D8(ctx, base);
	// addi r4,r31,136
	ctx.r4.s64 = ctx.r31.s64 + 136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fd1d8
	ctx.lr = 0x837F8DE4;
	sub_837FD1D8(ctx, base);
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

__attribute__((alias("__imp__sub_837F8DF8"))) PPC_WEAK_FUNC(sub_837F8DF8);
PPC_FUNC_IMPL(__imp__sub_837F8DF8) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82a4d1d8
	ctx.lr = 0x837F8E10;
	sub_82A4D1D8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r6,6
	ctx.r6.s64 = 6;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// bl 0x82a4d360
	ctx.lr = 0x837F8E4C;
	sub_82A4D360(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x82a4d290
	ctx.lr = 0x837F8E5C;
	sub_82A4D290(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,5
	ctx.r6.s64 = 5;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82a4d360
	ctx.lr = 0x837F8E70;
	sub_82A4D360(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82a4d290
	ctx.lr = 0x837F8E80;
	sub_82A4D290(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82a120f0
	ctx.lr = 0x837F8E8C;
	sub_82A120F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82a4d290
	ctx.lr = 0x837F8E9C;
	sub_82A4D290(ctx, base);
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a4d290
	ctx.lr = 0x837F8EAC;
	sub_82A4D290(ctx, base);
	// lis r31,-31743
	ctx.r31.s64 = -2080309248;
	// lwz r3,-6748(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -6748);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837f8ec8
	if (cr6.eq) goto loc_837F8EC8;
	// bl 0x837fd318
	ctx.lr = 0x837F8EC0;
	sub_837FD318(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,-6748(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6748, ctx.r30.u32);
loc_837F8EC8:
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// lhz r11,-6760(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + -6760);
	// srawi r7,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r6,16
	ctx.r11.u64 = ctx.r6.u32 & 0xFFFF;
	// sth r11,-6760(r10)
	PPC_STORE_U16(ctx.r10.u32 + -6760, ctx.r11.u16);
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// blt cr6,0x837f8efc
	if (cr6.lt) goto loc_837F8EFC;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// sth r30,-6760(r10)
	PPC_STORE_U16(ctx.r10.u32 + -6760, ctx.r30.u16);
loc_837F8EFC:
	// rlwinm r11,r11,2,14,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FFFC;
	// lwzx r3,r11,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stw r3,-6748(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6748, ctx.r3.u32);
	// bl 0x83800960
	ctx.lr = 0x837F8F0C;
	sub_83800960(ctx, base);
	// lis r31,-31743
	ctx.r31.s64 = -2080309248;
	// lwz r3,-6744(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -6744);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837f8f28
	if (cr6.eq) goto loc_837F8F28;
	// bl 0x837fd318
	ctx.lr = 0x837F8F20;
	sub_837FD318(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,-6744(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6744, ctx.r30.u32);
loc_837F8F28:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// subf r10,r8,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r8.s64;
	// srawi. r9,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x837f8f70
	if (cr0.eq) goto loc_837F8F70;
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lhz r11,-6756(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + -6756);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,-6756(r10)
	PPC_STORE_U16(ctx.r10.u32 + -6756, ctx.r11.u16);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x837f8f60
	if (cr6.lt) goto loc_837F8F60;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// sth r30,-6756(r10)
	PPC_STORE_U16(ctx.r10.u32 + -6756, ctx.r30.u16);
loc_837F8F60:
	// rlwinm r11,r11,2,14,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FFFC;
	// lwzx r3,r11,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// stw r3,-6744(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6744, ctx.r3.u32);
	// bl 0x83800960
	ctx.lr = 0x837F8F70;
	sub_83800960(ctx, base);
loc_837F8F70:
	// lis r31,-31743
	ctx.r31.s64 = -2080309248;
	// lwz r3,-6740(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -6740);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837f8f8c
	if (cr6.eq) goto loc_837F8F8C;
	// bl 0x837fd318
	ctx.lr = 0x837F8F84;
	sub_837FD318(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,-6740(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6740, ctx.r30.u32);
loc_837F8F8C:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// srawi. r9,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x837f8fd8
	if (cr0.eq) goto loc_837F8FD8;
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lhz r11,-6752(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + -6752);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,-6752(r10)
	PPC_STORE_U16(ctx.r10.u32 + -6752, ctx.r11.u16);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x837f8fc4
	if (cr6.lt) goto loc_837F8FC4;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// sth r30,-6752(r10)
	PPC_STORE_U16(ctx.r10.u32 + -6752, ctx.r30.u16);
loc_837F8FC4:
	// rlwinm r11,r11,2,14,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FFFC;
	// lwzx r3,r11,r4
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// stw r3,-6740(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6740, ctx.r3.u32);
	// bl 0x83800960
	ctx.lr = 0x837F8FD4;
	sub_83800960(ctx, base);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_837F8FD8:
	// li r31,2
	ctx.r31.s64 = 2;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x837f8ff0
	if (cr6.eq) goto loc_837F8FF0;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x837F8FF0;
	sub_825952B8(ctx, base);
loc_837F8FF0:
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// beq cr6,0x837f9014
	if (cr6.eq) goto loc_837F9014;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x837F9014;
	sub_825952B8(ctx, base);
loc_837F9014:
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// beq cr6,0x837f9038
	if (cr6.eq) goto loc_837F9038;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825952b8
	ctx.lr = 0x837F9038;
	sub_825952B8(ctx, base);
loc_837F9038:
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

__attribute__((alias("__imp__sub_837F9050"))) PPC_WEAK_FUNC(sub_837F9050);
PPC_FUNC_IMPL(__imp__sub_837F9050) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r3,3
	ctx.r3.s64 = 196608;
	// ori r3,r3,208
	ctx.r3.u64 = ctx.r3.u64 | 208;
	// bl 0x83800960
	ctx.lr = 0x837F9070;
	sub_83800960(ctx, base);
	// lis r3,3
	ctx.r3.s64 = 196608;
	// ori r3,r3,209
	ctx.r3.u64 = ctx.r3.u64 | 209;
	// bl 0x83800960
	ctx.lr = 0x837F907C;
	sub_83800960(ctx, base);
	// lis r3,3
	ctx.r3.s64 = 196608;
	// ori r3,r3,210
	ctx.r3.u64 = ctx.r3.u64 | 210;
	// bl 0x83800960
	ctx.lr = 0x837F9088;
	sub_83800960(ctx, base);
	// lis r3,3
	ctx.r3.s64 = 196608;
	// ori r3,r3,201
	ctx.r3.u64 = ctx.r3.u64 | 201;
	// bl 0x83800960
	ctx.lr = 0x837F9094;
	sub_83800960(ctx, base);
	// lis r3,3
	ctx.r3.s64 = 196608;
	// ori r3,r3,221
	ctx.r3.u64 = ctx.r3.u64 | 221;
	// bl 0x83800960
	ctx.lr = 0x837F90A0;
	sub_83800960(ctx, base);
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// lwz r3,2056(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2056);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x837F90B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x837f90d0
	if (cr6.eq) goto loc_837F90D0;
	// bl 0x837da198
	ctx.lr = 0x837F90C8;
	sub_837DA198(ctx, base);
	// li r3,1234
	ctx.r3.s64 = 1234;
	// bl 0x837d9420
	ctx.lr = 0x837F90D0;
	sub_837D9420(ctx, base);
loc_837F90D0:
	// bl 0x82a4d1d8
	ctx.lr = 0x837F90D4;
	sub_82A4D1D8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r6,6
	ctx.r6.s64 = 6;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// bl 0x82a4d360
	ctx.lr = 0x837F9110;
	sub_82A4D360(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x82a4d290
	ctx.lr = 0x837F9120;
	sub_82A4D290(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,5
	ctx.r6.s64 = 5;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82a4d360
	ctx.lr = 0x837F9134;
	sub_82A4D360(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82a4d290
	ctx.lr = 0x837F9144;
	sub_82A4D290(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82a120f0
	ctx.lr = 0x837F9150;
	sub_82A120F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82a4d290
	ctx.lr = 0x837F9160;
	sub_82A4D290(ctx, base);
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a4d290
	ctx.lr = 0x837F9170;
	sub_82A4D290(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r8,r9,0,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x837f91a8
	if (cr6.eq) goto loc_837F91A8;
	// bl 0x837da198
	ctx.lr = 0x837F918C;
	sub_837DA198(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r3,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 2;
	// bl 0x837d8680
	ctx.lr = 0x837F91A0;
	sub_837D8680(ctx, base);
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// sth r3,-6760(r8)
	PPC_STORE_U16(ctx.r8.u32 + -6760, ctx.r3.u16);
loc_837F91A8:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r8,r9,0,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x837f91e0
	if (cr6.eq) goto loc_837F91E0;
	// bl 0x837da198
	ctx.lr = 0x837F91C4;
	sub_837DA198(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r3,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 2;
	// bl 0x837d8680
	ctx.lr = 0x837F91D8;
	sub_837D8680(ctx, base);
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// sth r3,-6756(r8)
	PPC_STORE_U16(ctx.r8.u32 + -6756, ctx.r3.u16);
loc_837F91E0:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// rlwinm r9,r10,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x837f921c
	if (cr6.eq) goto loc_837F921C;
	// bl 0x837da198
	ctx.lr = 0x837F91FC;
	sub_837DA198(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r3,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 2;
	// bl 0x837d8680
	ctx.lr = 0x837F9210;
	sub_837D8680(ctx, base);
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// sth r3,-6752(r8)
	PPC_STORE_U16(ctx.r8.u32 + -6752, ctx.r3.u16);
loc_837F921C:
	// li r31,2
	ctx.r31.s64 = 2;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x837f9234
	if (cr6.eq) goto loc_837F9234;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x837F9234;
	sub_825952B8(ctx, base);
loc_837F9234:
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// beq cr6,0x837f9258
	if (cr6.eq) goto loc_837F9258;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x837F9258;
	sub_825952B8(ctx, base);
loc_837F9258:
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// beq cr6,0x837f927c
	if (cr6.eq) goto loc_837F927C;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825952b8
	ctx.lr = 0x837F927C;
	sub_825952B8(ctx, base);
loc_837F927C:
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// lis r7,-31743
	ctx.r7.s64 = -2080309248;
	// lis r6,-31743
	ctx.r6.s64 = -2080309248;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stw r30,-6748(r8)
	PPC_STORE_U32(ctx.r8.u32 + -6748, ctx.r30.u32);
	// stw r30,-6744(r7)
	PPC_STORE_U32(ctx.r7.u32 + -6744, ctx.r30.u32);
	// stw r30,-6740(r6)
	PPC_STORE_U32(ctx.r6.u32 + -6740, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_837F92B8"))) PPC_WEAK_FUNC(sub_837F92B8);
PPC_FUNC_IMPL(__imp__sub_837F92B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837F92C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x837f9470
	if (cr6.eq) goto loc_837F9470;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r30,28
	ctx.r30.s64 = 28;
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// divw. r11,r11,r30
	ctx.r11.s32 = PPCDivide(ctx.r11.s32, ctx.r30.s32);
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x837f931c
	if (!cr0.eq) goto loc_837F931C;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x837f9470
	if (cr6.eq) goto loc_837F9470;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x837f86b8
	ctx.lr = 0x837F9308;
	sub_837F86B8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_837F931C:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// subf r9,r5,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r5.s64;
	// divw r10,r9,r30
	ctx.r10.s32 = PPCDivide(ctx.r9.s32, ctx.r30.s32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x837f9364
	if (cr6.gt) goto loc_837F9364;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x837f86b8
	ctx.lr = 0x837F9338;
	sub_837F86B8(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw r7,r8,r30
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r30.s32);
	// mulli r10,r7,28
	ctx.r10.s64 = ctx.r7.s64 * 28;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r6,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r6.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_837F9364:
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// subf r8,r5,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r5.s64;
	// divw r7,r8,r30
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r30.s32);
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// bgt cr6,0x837f93e4
	if (cr6.gt) goto loc_837F93E4;
	// mulli r11,r10,28
	ctx.r11.s64 = ctx.r10.s64 * 28;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// add r30,r11,r3
	ctx.r30.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x837f86b8
	ctx.lr = 0x837F938C;
	sub_837F86B8(ctx, base);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r6
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r6.u32, xer);
	// beq cr6,0x837f93d4
	if (cr6.eq) goto loc_837F93D4;
loc_837F93A0:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837f93c4
	if (cr6.eq) goto loc_837F93C4;
	// li r7,7
	ctx.r7.s64 = 7;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
loc_837F93B8:
	// lwzu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x837f93b8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837F93B8;
loc_837F93C4:
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// addi r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 + 28;
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, xer);
	// bne cr6,0x837f93a0
	if (!cr6.eq) goto loc_837F93A0;
loc_837F93D4:
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_837F93E4:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x837f9400
	if (cr6.eq) goto loc_837F9400;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x837F9400;
	sub_825952B8(ctx, base);
loc_837F9400:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r4,r9,r30
	ctx.r4.s32 = PPCDivide(ctx.r9.s32, ctx.r30.s32);
	// bl 0x825adbd8
	ctx.lr = 0x837F9418;
	sub_825ADBD8(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x837f9470
	if (cr6.eq) goto loc_837F9470;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, xer);
	// beq cr6,0x837f946c
	if (cr6.eq) goto loc_837F946C;
loc_837F9438:
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x837f945c
	if (cr6.eq) goto loc_837F945C;
	// li r7,7
	ctx.r7.s64 = 7;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// addi r9,r8,-4
	ctx.r9.s64 = ctx.r8.s64 + -4;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
loc_837F9450:
	// lwzu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x837f9450
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837F9450;
loc_837F945C:
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// addi r8,r8,28
	ctx.r8.s64 = ctx.r8.s64 + 28;
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, xer);
	// bne cr6,0x837f9438
	if (!cr6.eq) goto loc_837F9438;
loc_837F946C:
	// stw r8,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r8.u32);
loc_837F9470:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837F947C"))) PPC_WEAK_FUNC(sub_837F947C);
PPC_FUNC_IMPL(__imp__sub_837F947C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837F9480"))) PPC_WEAK_FUNC(sub_837F9480);
PPC_FUNC_IMPL(__imp__sub_837F9480) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837F9488;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r4,360(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 360);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// stb r11,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r11.u8);
	// bl 0x838009f0
	ctx.lr = 0x837F94A8;
	sub_838009F0(ctx, base);
	// lwz r10,140(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x837f95b0
	if (cr6.eq) goto loc_837F95B0;
	// lwz r10,152(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// addi r29,r30,152
	ctx.r29.s64 = ctx.r30.s64 + 152;
	// lwz r9,156(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x837f95cc
	if (!cr6.eq) goto loc_837F95CC;
	// lwz r10,140(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x837f9594
	if (cr6.eq) goto loc_837F9594;
	// li r28,23
	ctx.r28.s64 = 23;
loc_837F94E4:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r9,0,16,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFF00;
	// cmplwi cr6,r11,5120
	cr6.compare<uint32_t>(ctx.r11.u32, 5120, xer);
	// bgt cr6,0x837f950c
	if (cr6.gt) goto loc_837F950C;
	// beq cr6,0x837f9514
	if (cr6.eq) goto loc_837F9514;
	// cmplwi cr6,r11,4352
	cr6.compare<uint32_t>(ctx.r11.u32, 4352, xer);
	// beq cr6,0x837f9514
	if (cr6.eq) goto loc_837F9514;
	// cmplwi cr6,r11,4864
	cr6.compare<uint32_t>(ctx.r11.u32, 4864, xer);
	// beq cr6,0x837f9514
	if (cr6.eq) goto loc_837F9514;
	// b 0x837f9584
	goto loc_837F9584;
loc_837F950C:
	// cmplwi cr6,r11,5632
	cr6.compare<uint32_t>(ctx.r11.u32, 5632, xer);
	// bne cr6,0x837f9584
	if (!cr6.eq) goto loc_837F9584;
loc_837F9514:
	// lbz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bne cr6,0x837f952c
	if (!cr6.eq) goto loc_837F952C;
	// lbz r11,5(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// addi r11,r11,22
	ctx.r11.s64 = ctx.r11.s64 + 22;
	// b 0x837f956c
	goto loc_837F956C;
loc_837F952C:
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// bne cr6,0x837f9540
	if (!cr6.eq) goto loc_837F9540;
	// lbz r11,5(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// stb r11,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r11.u8);
	// b 0x837f9570
	goto loc_837F9570;
loc_837F9540:
	// cmplwi cr6,r9,4888
	cr6.compare<uint32_t>(ctx.r9.u32, 4888, xer);
	// bne cr6,0x837f9550
	if (!cr6.eq) goto loc_837F9550;
	// stb r28,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r28.u8);
	// b 0x837f9570
	goto loc_837F9570;
loc_837F9550:
	// lbz r11,5(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// blt cr6,0x837f9564
	if (cr6.lt) goto loc_837F9564;
	// addi r11,r11,14
	ctx.r11.s64 = ctx.r11.s64 + 14;
	// b 0x837f956c
	goto loc_837F956C;
loc_837F9564:
	// mulli r10,r10,11
	ctx.r10.s64 = ctx.r10.s64 * 11;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_837F956C:
	// stb r11,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r11.u8);
loc_837F9570:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83546fd8
	ctx.lr = 0x837F9584;
	sub_83546FD8(ctx, base);
loc_837F9584:
	// lwz r11,140(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x837f94e4
	if (!cr6.eq) goto loc_837F94E4;
loc_837F9594:
	// lbz r11,464(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 464);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f95cc
	if (cr6.eq) goto loc_837F95CC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x837fecf8
	ctx.lr = 0x837F95A8;
	sub_837FECF8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_837F95B0:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x837f95cc
	if (cr6.eq) goto loc_837F95CC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x837fe968
	ctx.lr = 0x837F95C0;
	sub_837FE968(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x837fc3a0
	ctx.lr = 0x837F95CC;
	sub_837FC3A0(ctx, base);
loc_837F95CC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837F95D4"))) PPC_WEAK_FUNC(sub_837F95D4);
PPC_FUNC_IMPL(__imp__sub_837F95D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837F95D8"))) PPC_WEAK_FUNC(sub_837F95D8);
PPC_FUNC_IMPL(__imp__sub_837F95D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837F95E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x837ffa08
	ctx.lr = 0x837F95F8;
	sub_837FFA08(ctx, base);
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r10,r11,5320
	ctx.r10.s64 = ctx.r11.s64 + 5320;
	// stb r29,464(r31)
	PPC_STORE_U8(ctx.r31.u32 + 464, ctx.r29.u8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stw r29,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r29.u32);
	// bl 0x837f92b8
	ctx.lr = 0x837F961C;
	sub_837F92B8(ctx, base);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt cr6,0x837f963c
	if (cr6.lt) goto loc_837F963C;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// bge cr6,0x837f963c
	if (!cr6.lt) goto loc_837F963C;
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_837F963C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r29,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837F9650"))) PPC_WEAK_FUNC(sub_837F9650);
PPC_FUNC_IMPL(__imp__sub_837F9650) {
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
	// li r11,33
	ctx.r11.s64 = 33;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,472
	ctx.r4.s64 = 472;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x837F9684;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837f96e4
	if (cr6.eq) goto loc_837F96E4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x837f95d8
	ctx.lr = 0x837F9698;
	sub_837F95D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837f96e4
	if (cr6.eq) goto loc_837F96E4;
	// bl 0x837f9790
	ctx.lr = 0x837F96A8;
	sub_837F9790(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837f96ec
	if (!cr6.eq) goto loc_837F96EC;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595150
	ctx.lr = 0x837F96C4;
	sub_82595150(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x837F96DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595170
	ctx.lr = 0x837F96E4;
	sub_82595170(ctx, base);
loc_837F96E4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x837f96f0
	goto loc_837F96F0;
loc_837F96EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_837F96F0:
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

__attribute__((alias("__imp__sub_837F9708"))) PPC_WEAK_FUNC(sub_837F9708);
PPC_FUNC_IMPL(__imp__sub_837F9708) {
	PPC_FUNC_PROLOGUE();
	// li r5,2
	ctx.r5.s64 = 2;
	// b 0x82a5c5b0
	sub_82A5C5B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837F9710"))) PPC_WEAK_FUNC(sub_837F9710);
PPC_FUNC_IMPL(__imp__sub_837F9710) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// li r5,2
	ctx.r5.s64 = 2;
	// bne cr6,0x837f974c
	if (!cr6.eq) goto loc_837F974C;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// bl 0x82a5c5b0
	ctx.lr = 0x837F9744;
	sub_82A5C5B0(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// b 0x837f9768
	goto loc_837F9768;
loc_837F974C:
	// li r4,768
	ctx.r4.s64 = 768;
	// bl 0x82a5c5b0
	ctx.lr = 0x837F9754;
	sub_82A5C5B0(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r10,r11,256
	ctx.r10.s64 = ctx.r11.s64 + 256;
	// clrlwi r9,r10,22
	ctx.r9.u64 = ctx.r10.u32 & 0x3FF;
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
loc_837F9768:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mullw r10,r30,r11
	ctx.r10.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r11.s32);
	// rlwinm r3,r10,22,10,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x3FFFFF;
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

__attribute__((alias("__imp__sub_837F978C"))) PPC_WEAK_FUNC(sub_837F978C);
PPC_FUNC_IMPL(__imp__sub_837F978C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837F9790"))) PPC_WEAK_FUNC(sub_837F9790);
PPC_FUNC_IMPL(__imp__sub_837F9790) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837F97B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// clrlwi r30,r9,24
	ctx.r30.u64 = ctx.r9.u32 & 0xFF;
	// bl 0x837da198
	ctx.lr = 0x837F97C4;
	sub_837DA198(ctx, base);
	// stw r30,11340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11340, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x837F97DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,52(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 52);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x837F97F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,60(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x837F9804;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_837F9820"))) PPC_WEAK_FUNC(sub_837F9820);
PPC_FUNC_IMPL(__imp__sub_837F9820) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r11,184(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// stfs f1,188(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 188, temp.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// stfs f1,240(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 240, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837F9838"))) PPC_WEAK_FUNC(sub_837F9838);
PPC_FUNC_IMPL(__imp__sub_837F9838) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f1,192(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 192, temp.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f0,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x837f9868
	if (cr6.gt) goto loc_837F9868;
	// bl 0x83740868
	ctx.lr = 0x837F9864;
	sub_83740868(ctx, base);
	// stfs f1,192(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 192, temp.u32);
loc_837F9868:
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f987c
	if (cr6.eq) goto loc_837F987C;
	// lfs f0,192(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,244(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 244, temp.u32);
loc_837F987C:
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

__attribute__((alias("__imp__sub_837F9890"))) PPC_WEAK_FUNC(sub_837F9890);
PPC_FUNC_IMPL(__imp__sub_837F9890) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837F9898;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x838009f0
	ctx.lr = 0x837F98A8;
	sub_838009F0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837f9954
	if (cr6.eq) goto loc_837F9954;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// lbz r10,67(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 67);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// clrlwi r31,r9,24
	ctx.r31.u64 = ctx.r9.u32 & 0xFF;
	// beq cr6,0x837f9940
	if (cr6.eq) goto loc_837F9940;
	// clrlwi r29,r31,24
	ctx.r29.u64 = ctx.r31.u32 & 0xFF;
	// bl 0x83800a28
	ctx.lr = 0x837F98D8;
	sub_83800A28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// bge cr6,0x837f9954
	if (!cr6.lt) goto loc_837F9954;
loc_837F98E4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838009f0
	ctx.lr = 0x837F98F0;
	sub_838009F0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837f9908
	if (cr6.eq) goto loc_837F9908;
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// lwz r10,84(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x837f9934
	if (!cr6.eq) goto loc_837F9934;
loc_837F9908:
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// bl 0x83800a28
	ctx.lr = 0x837F991C;
	sub_83800A28(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// blt cr6,0x837f98e4
	if (cr6.lt) goto loc_837F98E4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_837F9934:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_837F9940:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x838009f0
	ctx.lr = 0x837F9948;
	sub_838009F0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x837f9958
	if (!cr6.eq) goto loc_837F9958;
loc_837F9954:
	// li r3,0
	ctx.r3.s64 = 0;
loc_837F9958:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837F9960"))) PPC_WEAK_FUNC(sub_837F9960);
PPC_FUNC_IMPL(__imp__sub_837F9960) {
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
	// lwz r11,184(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f9994
	if (cr6.eq) goto loc_837F9994;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837F9994;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_837F9994:
	// lbz r11,448(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 448);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837f99a8
	if (!cr6.eq) goto loc_837F99A8;
	// lwz r3,436(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 436);
	// bl 0x837a4d50
	ctx.lr = 0x837F99A8;
	sub_837A4D50(ctx, base);
loc_837F99A8:
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

__attribute__((alias("__imp__sub_837F99BC"))) PPC_WEAK_FUNC(sub_837F99BC);
PPC_FUNC_IMPL(__imp__sub_837F99BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837F99C0"))) PPC_WEAK_FUNC(sub_837F99C0);
PPC_FUNC_IMPL(__imp__sub_837F99C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,184(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x837e0c38
	sub_837E0C38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837F99D0"))) PPC_WEAK_FUNC(sub_837F99D0);
PPC_FUNC_IMPL(__imp__sub_837F99D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837F99D4"))) PPC_WEAK_FUNC(sub_837F99D4);
PPC_FUNC_IMPL(__imp__sub_837F99D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837F99D8"))) PPC_WEAK_FUNC(sub_837F99D8);
PPC_FUNC_IMPL(__imp__sub_837F99D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837F99E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837f9a74
	if (!cr6.eq) goto loc_837F9A74;
	// lbz r4,360(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 360);
	// bl 0x83800a58
	ctx.lr = 0x837F9A00;
	sub_83800A58(ctx, base);
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,360(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 360);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x837F9A1C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,96(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837F9A34;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x837da198
	ctx.lr = 0x837F9A38;
	sub_837DA198(ctx, base);
	// lbz r9,11368(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11368);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x837f9a74
	if (!cr6.eq) goto loc_837F9A74;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837F9A5C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x837f9a74
	if (!cr6.eq) goto loc_837F9A74;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_837F9A74:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x837f9a94
	if (cr6.eq) goto loc_837F9A94;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x837f48f0
	ctx.lr = 0x837F9A84;
	sub_837F48F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f9a98
	if (cr6.eq) goto loc_837F9A98;
loc_837F9A94:
	// li r3,1
	ctx.r3.s64 = 1;
loc_837F9A98:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837F9AA0"))) PPC_WEAK_FUNC(sub_837F9AA0);
PPC_FUNC_IMPL(__imp__sub_837F9AA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837F9AA8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,62(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 62);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f9b1c
	if (cr6.eq) goto loc_837F9B1C;
	// bl 0x83800a28
	ctx.lr = 0x837F9AC0;
	sub_83800A28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83800a58
	ctx.lr = 0x837F9ACC;
	sub_83800A58(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83800a28
	ctx.lr = 0x837F9ADC;
	sub_83800A28(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x837F9AF0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,96(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837F9B08;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r3,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_837F9B1C:
	// lwz r11,420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837f9bd8
	if (!cr6.eq) goto loc_837F9BD8;
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,68(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x837f9bd8
	if (!cr6.gt) goto loc_837F9BD8;
	// lbz r11,286(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 286);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837f9bd8
	if (!cr6.eq) goto loc_837F9BD8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83800a28
	ctx.lr = 0x837F9B54;
	sub_83800A28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83800a58
	ctx.lr = 0x837F9B60;
	sub_83800A58(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83800a28
	ctx.lr = 0x837F9B70;
	sub_83800A28(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x837F9B84;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq cr6,0x837f9bd8
	if (cr6.eq) goto loc_837F9BD8;
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// lfs f0,68(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// lfs f12,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blt cr6,0x837f9bd8
	if (cr6.lt) goto loc_837F9BD8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837F9BC0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x837f9bd8
	if (!cr6.eq) goto loc_837F9BD8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_837F9BD8:
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// addi r10,r11,-7
	ctx.r10.s64 = ctx.r11.s64 + -7;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837F9BF4"))) PPC_WEAK_FUNC(sub_837F9BF4);
PPC_FUNC_IMPL(__imp__sub_837F9BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837F9BF8"))) PPC_WEAK_FUNC(sub_837F9BF8);
PPC_FUNC_IMPL(__imp__sub_837F9BF8) {
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
	// lbz r11,55(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 55);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837f9ca0
	if (!cr6.eq) goto loc_837F9CA0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837F9C2C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x837f9ca0
	if (cr6.eq) goto loc_837F9CA0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_837F9C3C:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8353b168
	ctx.lr = 0x837F9C48;
	sub_8353B168(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837f9c94
	if (cr6.eq) goto loc_837F9C94;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837F9C64;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x837f9c94
	if (cr6.eq) goto loc_837F9C94;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837F9C88;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x837f9cbc
	if (!cr6.eq) goto loc_837F9CBC;
loc_837F9C94:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,7
	cr6.compare<int32_t>(ctx.r30.s32, 7, xer);
	// blt cr6,0x837f9c3c
	if (cr6.lt) goto loc_837F9C3C;
loc_837F9CA0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_837F9CA4:
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
loc_837F9CBC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x837f9ca4
	goto loc_837F9CA4;
}

__attribute__((alias("__imp__sub_837F9CC4"))) PPC_WEAK_FUNC(sub_837F9CC4);
PPC_FUNC_IMPL(__imp__sub_837F9CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837F9CC8"))) PPC_WEAK_FUNC(sub_837F9CC8);
PPC_FUNC_IMPL(__imp__sub_837F9CC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,58(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 58);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x833c8db0
	sub_833C8DB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837F9CDC"))) PPC_WEAK_FUNC(sub_837F9CDC);
PPC_FUNC_IMPL(__imp__sub_837F9CDC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837F9CE0"))) PPC_WEAK_FUNC(sub_837F9CE0);
PPC_FUNC_IMPL(__imp__sub_837F9CE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837F9CE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x837da198
	ctx.lr = 0x837F9CF4;
	sub_837DA198(ctx, base);
	// lwz r11,11364(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11364);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x837f9d20
	if (cr6.eq) goto loc_837F9D20;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x837f9d18
	if (cr6.eq) goto loc_837F9D18;
	// stb r29,45(r31)
	PPC_STORE_U8(ctx.r31.u32 + 45, ctx.r29.u8);
	// b 0x837f9d24
	goto loc_837F9D24;
loc_837F9D18:
	// stb r30,46(r31)
	PPC_STORE_U8(ctx.r31.u32 + 46, ctx.r30.u8);
	// stb r30,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r30.u8);
loc_837F9D20:
	// stb r30,45(r31)
	PPC_STORE_U8(ctx.r31.u32 + 45, ctx.r30.u8);
loc_837F9D24:
	// bl 0x837da198
	ctx.lr = 0x837F9D28;
	sub_837DA198(ctx, base);
	// lbz r11,11370(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11370);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f9d4c
	if (cr6.eq) goto loc_837F9D4C;
	// lbz r11,46(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 46);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f9d44
	if (cr6.eq) goto loc_837F9D44;
	// stb r30,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r30.u8);
loc_837F9D44:
	// stb r29,53(r31)
	PPC_STORE_U8(ctx.r31.u32 + 53, ctx.r29.u8);
	// stb r30,55(r31)
	PPC_STORE_U8(ctx.r31.u32 + 55, ctx.r30.u8);
loc_837F9D4C:
	// lbz r11,59(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 59);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f9d70
	if (cr6.eq) goto loc_837F9D70;
	// lbz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f9d70
	if (cr6.eq) goto loc_837F9D70;
	// stb r29,46(r31)
	PPC_STORE_U8(ctx.r31.u32 + 46, ctx.r29.u8);
	// stb r30,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r30.u8);
	// stb r29,51(r31)
	PPC_STORE_U8(ctx.r31.u32 + 51, ctx.r29.u8);
loc_837F9D70:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837F9D78"))) PPC_WEAK_FUNC(sub_837F9D78);
PPC_FUNC_IMPL(__imp__sub_837F9D78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x837F9D80;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// li r7,12
	ctx.r7.s64 = 12;
	// subfe r6,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// and r27,r6,r7
	ctx.r27.u64 = ctx.r6.u64 & ctx.r7.u64;
	// bne cr6,0x837f9dac
	if (!cr6.eq) goto loc_837F9DAC;
	// addi r27,r27,2
	ctx.r27.s64 = ctx.r27.s64 + 2;
loc_837F9DAC:
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f9dbc
	if (cr6.eq) goto loc_837F9DBC;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
loc_837F9DBC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// sth r10,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r10.u16);
	// addi r28,r31,80
	ctx.r28.s64 = ctx.r31.s64 + 80;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stb r30,72(r31)
	PPC_STORE_U8(ctx.r31.u32 + 72, ctx.r30.u8);
	// stb r30,73(r31)
	PPC_STORE_U8(ctx.r31.u32 + 73, ctx.r30.u8);
	// lfs f13,-25156(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -25156);
	ctx.f13.f64 = double(temp.f32);
	// stb r30,74(r31)
	PPC_STORE_U8(ctx.r31.u32 + 74, ctx.r30.u8);
	// stb r30,75(r31)
	PPC_STORE_U8(ctx.r31.u32 + 75, ctx.r30.u8);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// stb r30,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r30.u8);
	// stb r30,97(r31)
	PPC_STORE_U8(ctx.r31.u32 + 97, ctx.r30.u8);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// lbz r7,55(r29)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r29.u32 + 55);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// frsp f1,f12
	ctx.f1.f64 = double(float(ctx.f12.f64));
	// stfs f1,8(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lbz r4,56(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 56);
	// bl 0x833c7538
	ctx.lr = 0x837F9E68;
	sub_833C7538(ctx, base);
	// stfs f1,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// stb r27,72(r31)
	PPC_STORE_U8(ctx.r31.u32 + 72, ctx.r27.u8);
	// stb r30,97(r31)
	PPC_STORE_U8(ctx.r31.u32 + 97, ctx.r30.u8);
	// bl 0x837da198
	ctx.lr = 0x837F9E88;
	sub_837DA198(ctx, base);
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// stb r11,74(r31)
	PPC_STORE_U8(ctx.r31.u32 + 74, ctx.r11.u8);
	// bl 0x837da198
	ctx.lr = 0x837F9E94;
	sub_837DA198(ctx, base);
	// lwz r9,64(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// addi r5,r29,147
	ctx.r5.s64 = ctx.r29.s64 + 147;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r9,75(r31)
	PPC_STORE_U8(ctx.r31.u32 + 75, ctx.r9.u8);
	// lbz r7,126(r29)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r29.u32 + 126);
	// extsb r6,r7
	ctx.r6.s64 = ctx.r7.s8;
	// stw r6,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r6.u32);
	// bl 0x831ce7d8
	ctx.lr = 0x837F9EB8;
	sub_831CE7D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837F9EC4"))) PPC_WEAK_FUNC(sub_837F9EC4);
PPC_FUNC_IMPL(__imp__sub_837F9EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837F9EC8"))) PPC_WEAK_FUNC(sub_837F9EC8);
PPC_FUNC_IMPL(__imp__sub_837F9EC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,46(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 46);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x8378b870
	sub_8378B870(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837F9ED8"))) PPC_WEAK_FUNC(sub_837F9ED8);
PPC_FUNC_IMPL(__imp__sub_837F9ED8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837F9EDC"))) PPC_WEAK_FUNC(sub_837F9EDC);
PPC_FUNC_IMPL(__imp__sub_837F9EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837F9EE0"))) PPC_WEAK_FUNC(sub_837F9EE0);
PPC_FUNC_IMPL(__imp__sub_837F9EE0) {
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
	// lbz r11,46(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 46);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f9f14
	if (cr6.eq) goto loc_837F9F14;
	// bl 0x8378b870
	ctx.lr = 0x837F9F04;
	sub_8378B870(ctx, base);
	// lwz r11,1956(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1956);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// li r11,3
	ctx.r11.s64 = 3;
	// beq cr6,0x837f9f18
	if (cr6.eq) goto loc_837F9F18;
loc_837F9F14:
	// li r11,5
	ctx.r11.s64 = 5;
loc_837F9F18:
	// stw r11,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_837F9F30"))) PPC_WEAK_FUNC(sub_837F9F30);
PPC_FUNC_IMPL(__imp__sub_837F9F30) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8378b870
	ctx.lr = 0x837F9F50;
	sub_8378B870(ctx, base);
	// lwz r3,1956(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1956);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837f9f64
	if (cr6.eq) goto loc_837F9F64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x837a0a90
	ctx.lr = 0x837F9F64;
	sub_837A0A90(ctx, base);
loc_837F9F64:
	// clrlwi r31,r31,24
	ctx.r31.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x837f9f7c
	if (!cr6.eq) goto loc_837F9F7C;
	// bl 0x8378b870
	ctx.lr = 0x837F9F74;
	sub_8378B870(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8378a5f0
	ctx.lr = 0x837F9F7C;
	sub_8378A5F0(ctx, base);
loc_837F9F7C:
	// lbz r11,46(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 46);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837fa0b0
	if (cr6.eq) goto loc_837FA0B0;
	// bl 0x837da198
	ctx.lr = 0x837F9F8C;
	sub_837DA198(ctx, base);
	// lwz r11,11364(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11364);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x837fa0b0
	if (!cr6.eq) goto loc_837FA0B0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x837fa0b0
	if (cr6.eq) goto loc_837FA0B0;
	// lwz r11,416(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 416);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837fa0b0
	if (!cr6.eq) goto loc_837FA0B0;
	// lbz r11,346(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 346);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837fa0b0
	if (!cr6.eq) goto loc_837FA0B0;
	// bl 0x8291ce48
	ctx.lr = 0x837F9FBC;
	sub_8291CE48(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837f9ffc
	if (cr6.eq) goto loc_837F9FFC;
	// bl 0x8291ce38
	ctx.lr = 0x837F9FCC;
	sub_8291CE38(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8291d270
	ctx.lr = 0x837F9FD8;
	sub_8291D270(ctx, base);
	// bl 0x830ff290
	ctx.lr = 0x837F9FDC;
	sub_830FF290(ctx, base);
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// bl 0x8291ce38
	ctx.lr = 0x837F9FE8;
	sub_8291CE38(ctx, base);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// li r4,0
	ctx.r4.s64 = 0;
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// bl 0x8291d2d8
	ctx.lr = 0x837F9FFC;
	sub_8291D2D8(ctx, base);
loc_837F9FFC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8291bce0
	ctx.lr = 0x837FA004;
	sub_8291BCE0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825832f8
	ctx.lr = 0x837FA010;
	sub_825832F8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83131d70
	ctx.lr = 0x837FA01C;
	sub_83131D70(ctx, base);
	// li r31,-1
	ctx.r31.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8291bd18
	ctx.lr = 0x837FA030;
	sub_8291BD18(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8291bd18
	ctx.lr = 0x837FA040;
	sub_8291BD18(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8291bd18
	ctx.lr = 0x837FA050;
	sub_8291BD18(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8291bd18
	ctx.lr = 0x837FA060;
	sub_8291BD18(ctx, base);
	// li r11,33
	ctx.r11.s64 = 33;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,188
	ctx.r4.s64 = 188;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x837FA078;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837fa09c
	if (cr6.eq) goto loc_837FA09C;
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// ld r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// bl 0x82920380
	ctx.lr = 0x837FA098;
	sub_82920380(ctx, base);
	// b 0x837fa0a0
	goto loc_837FA0A0;
loc_837FA09C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_837FA0A0:
	// stw r3,416(r30)
	PPC_STORE_U32(ctx.r30.u32 + 416, ctx.r3.u32);
	// bl 0x82920760
	ctx.lr = 0x837FA0A8;
	sub_82920760(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83102db0
	ctx.lr = 0x837FA0B0;
	sub_83102DB0(ctx, base);
loc_837FA0B0:
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

__attribute__((alias("__imp__sub_837FA0C8"))) PPC_WEAK_FUNC(sub_837FA0C8);
PPC_FUNC_IMPL(__imp__sub_837FA0C8) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,46(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 46);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837fa148
	if (cr6.eq) goto loc_837FA148;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x837da198
	ctx.lr = 0x837FA0FC;
	sub_837DA198(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837fa118
	if (cr6.eq) goto loc_837FA118;
	// bl 0x837da198
	ctx.lr = 0x837FA108;
	sub_837DA198(ctx, base);
	// lbz r11,11368(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11368);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837fa118
	if (cr6.eq) goto loc_837FA118;
	// li r31,1
	ctx.r31.s64 = 1;
loc_837FA118:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x837a0aa8
	ctx.lr = 0x837FA124;
	sub_837A0AA8(ctx, base);
	// bl 0x837da198
	ctx.lr = 0x837FA128;
	sub_837DA198(ctx, base);
	// lwz r11,11364(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11364);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x837fa148
	if (!cr6.eq) goto loc_837FA148;
	// lwz r3,416(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 416);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837fa148
	if (cr6.eq) goto loc_837FA148;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82920578
	ctx.lr = 0x837FA148;
	sub_82920578(ctx, base);
loc_837FA148:
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

__attribute__((alias("__imp__sub_837FA164"))) PPC_WEAK_FUNC(sub_837FA164);
PPC_FUNC_IMPL(__imp__sub_837FA164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837FA168"))) PPC_WEAK_FUNC(sub_837FA168);
PPC_FUNC_IMPL(__imp__sub_837FA168) {
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
	// lbz r11,46(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 46);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837fa1bc
	if (cr6.eq) goto loc_837FA1BC;
	// bl 0x837da198
	ctx.lr = 0x837FA18C;
	sub_837DA198(ctx, base);
	// lwz r11,11364(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11364);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x837fa1bc
	if (!cr6.eq) goto loc_837FA1BC;
	// stb r11,444(r31)
	PPC_STORE_U8(ctx.r31.u32 + 444, ctx.r11.u8);
	// bl 0x82924d18
	ctx.lr = 0x837FA1A0;
	sub_82924D18(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x837fa1b8
	if (!cr6.eq) goto loc_837FA1B8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x829258d0
	ctx.lr = 0x837FA1B0;
	sub_829258D0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,444(r31)
	PPC_STORE_U8(ctx.r31.u32 + 444, ctx.r11.u8);
loc_837FA1B8:
	// bl 0x8379f958
	ctx.lr = 0x837FA1BC;
	sub_8379F958(ctx, base);
loc_837FA1BC:
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

__attribute__((alias("__imp__sub_837FA1D0"))) PPC_WEAK_FUNC(sub_837FA1D0);
PPC_FUNC_IMPL(__imp__sub_837FA1D0) {
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
	// lbz r11,46(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 46);
	// li r31,1
	ctx.r31.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837fa22c
	if (cr6.eq) goto loc_837FA22C;
	// bl 0x837da198
	ctx.lr = 0x837FA1F4;
	sub_837DA198(ctx, base);
	// lwz r11,11364(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11364);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x837fa22c
	if (!cr6.eq) goto loc_837FA22C;
	// bl 0x82924d18
	ctx.lr = 0x837FA204;
	sub_82924D18(ctx, base);
	// bl 0x82925558
	ctx.lr = 0x837FA208;
	sub_82925558(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r8,r31
	ctx.r3.u64 = ctx.r8.u64 & ctx.r31.u64;
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
loc_837FA22C:
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

__attribute__((alias("__imp__sub_837FA244"))) PPC_WEAK_FUNC(sub_837FA244);
PPC_FUNC_IMPL(__imp__sub_837FA244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837FA248"))) PPC_WEAK_FUNC(sub_837FA248);
PPC_FUNC_IMPL(__imp__sub_837FA248) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837FA250;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x837d59a0
	ctx.lr = 0x837FA260;
	sub_837D59A0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837fa2d0
	if (cr6.eq) goto loc_837FA2D0;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r28,2
	ctx.r28.s64 = 2;
loc_837FA284:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x837d5cf8
	ctx.lr = 0x837FA294;
	sub_837D5CF8(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x837fa2a4
	if (cr6.eq) goto loc_837FA2A4;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x837fa2c4
	if (!cr6.eq) goto loc_837FA2C4;
loc_837FA2A4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x837d5d50
	ctx.lr = 0x837FA2B0;
	sub_837D5D50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x837d5b28
	ctx.lr = 0x837FA2C4;
	sub_837D5B28(ctx, base);
loc_837FA2C4:
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x837fa284
	if (!cr0.eq) goto loc_837FA284;
loc_837FA2D0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837FA2DC"))) PPC_WEAK_FUNC(sub_837FA2DC);
PPC_FUNC_IMPL(__imp__sub_837FA2DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837FA2E0"))) PPC_WEAK_FUNC(sub_837FA2E0);
PPC_FUNC_IMPL(__imp__sub_837FA2E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister temp{};
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// li r8,20
	ctx.r8.s64 = 20;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r3,32
	ctx.r9.s64 = ctx.r3.s64 + 32;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lfs f0,-24912(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -24912);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
loc_837FA31C:
	// stbx r11,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x837fa31c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837FA31C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// li r9,27
	ctx.r9.s64 = 27;
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r9,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r9.u32);
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stfs f0,76(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// stb r11,80(r3)
	PPC_STORE_U8(ctx.r3.u32 + 80, ctx.r11.u8);
	// stfs f0,340(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 340, temp.u32);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// stfs f0,344(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 344, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837FA364"))) PPC_WEAK_FUNC(sub_837FA364);
PPC_FUNC_IMPL(__imp__sub_837FA364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837FA368"))) PPC_WEAK_FUNC(sub_837FA368);
PPC_FUNC_IMPL(__imp__sub_837FA368) {
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
	// lwz r11,184(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837fa3dc
	if (cr6.eq) goto loc_837FA3DC;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837FA39C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,196(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,9008(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x837fa3b4
	if (cr6.gt) goto loc_837FA3B4;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_837FA3B4:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// bl 0x833c8120
	ctx.lr = 0x837FA3BC;
	sub_833C8120(ctx, base);
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// lfs f1,200(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r11,5544
	ctx.r3.s64 = ctx.r11.s64 + 5544;
	// addi r4,r3,-12
	ctx.r4.s64 = ctx.r3.s64 + -12;
	// bl 0x833c7fc8
	ctx.lr = 0x837FA3D0;
	sub_833C7FC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,196(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x837fa0c8
	ctx.lr = 0x837FA3DC;
	sub_837FA0C8(ctx, base);
loc_837FA3DC:
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

__attribute__((alias("__imp__sub_837FA3F0"))) PPC_WEAK_FUNC(sub_837FA3F0);
PPC_FUNC_IMPL(__imp__sub_837FA3F0) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837fa47c
	if (cr6.eq) goto loc_837FA47C;
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,5620
	ctx.r3.s64 = ctx.r11.s64 + 5620;
	// addi r4,r3,-16
	ctx.r4.s64 = ctx.r3.s64 + -16;
	// bl 0x833c7f20
	ctx.lr = 0x837FA428;
	sub_833C7F20(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837fa478
	if (cr6.eq) goto loc_837FA478;
	// li r11,33
	ctx.r11.s64 = 33;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x837FA44C;
	sub_82595150(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837fa46c
	if (cr6.eq) goto loc_837FA46C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837FA46C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_837FA46C:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x837FA474;
	sub_82595170(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_837FA478:
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_837FA47C:
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

__attribute__((alias("__imp__sub_837FA494"))) PPC_WEAK_FUNC(sub_837FA494);
PPC_FUNC_IMPL(__imp__sub_837FA494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837FA498"))) PPC_WEAK_FUNC(sub_837FA498);
PPC_FUNC_IMPL(__imp__sub_837FA498) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x837fa504
	if (cr6.eq) goto loc_837FA504;
	// lwz r11,356(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 356);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// ble cr6,0x837fa504
	if (!cr6.gt) goto loc_837FA504;
	// bl 0x837da198
	ctx.lr = 0x837FA4CC;
	sub_837DA198(ctx, base);
	// lbz r11,11369(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11369);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837fa504
	if (!cr6.eq) goto loc_837FA504;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r10,6
	ctx.r10.s64 = 393216;
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r3,r9
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, xer);
	// blt cr6,0x837fa500
	if (cr6.lt) goto loc_837FA500;
	// lis r11,6
	ctx.r11.s64 = 393216;
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// blt cr6,0x837fa504
	if (cr6.lt) goto loc_837FA504;
loc_837FA500:
	// bl 0x837d9370
	ctx.lr = 0x837FA504;
	sub_837D9370(ctx, base);
loc_837FA504:
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

__attribute__((alias("__imp__sub_837FA518"))) PPC_WEAK_FUNC(sub_837FA518);
PPC_FUNC_IMPL(__imp__sub_837FA518) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lwz r11,152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// lwz r10,156(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// li r10,0
	ctx.r10.s64 = 0;
	// srawi. r8,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 3;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x837fa564
	if (cr0.eq) goto loc_837FA564;
	// li r11,0
	ctx.r11.s64 = 0;
loc_837FA53C:
	// lwz r9,152(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// lwzx r7,r11,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplw cr6,r7,r4
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, xer);
	// beq cr6,0x837fa560
	if (cr6.eq) goto loc_837FA560;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// blt cr6,0x837fa53c
	if (cr6.lt) goto loc_837FA53C;
	// b 0x837fa564
	goto loc_837FA564;
loc_837FA560:
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_837FA564:
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x837fa5a8
	if (cr6.eq) goto loc_837FA5A8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_837FA57C:
	// lwz r10,152(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r7,5(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// cmplw cr6,r7,r5
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, xer);
	// beq cr6,0x837fa5a4
	if (cr6.eq) goto loc_837FA5A4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// blt cr6,0x837fa57c
	if (cr6.lt) goto loc_837FA57C;
	// b 0x837fa5a8
	goto loc_837FA5A8;
loc_837FA5A4:
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
loc_837FA5A8:
	// lwz r11,152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// blt cr6,0x837fa5c4
	if (cr6.lt) goto loc_837FA5C4;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stb r5,5(r8)
	PPC_STORE_U8(ctx.r8.u32 + 5, ctx.r5.u8);
	// blr 
	return;
loc_837FA5C4:
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r9,r5,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lbz r7,5(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 5);
	// addi r9,r11,5
	ctx.r9.s64 = ctx.r11.s64 + 5;
	// lbz r6,5(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// stb r7,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r7.u8);
	// lwz r11,152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stb r6,5(r4)
	PPC_STORE_U8(ctx.r4.u32 + 5, ctx.r6.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837FA5F0"))) PPC_WEAK_FUNC(sub_837FA5F0);
PPC_FUNC_IMPL(__imp__sub_837FA5F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lbz r11,45(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 45);
	// li r6,0
	ctx.r6.s64 = 0;
	// stb r6,447(r3)
	PPC_STORE_U8(ctx.r3.u32 + 447, ctx.r6.u8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r6,446(r3)
	PPC_STORE_U8(ctx.r3.u32 + 446, ctx.r6.u8);
	// stb r6,445(r3)
	PPC_STORE_U8(ctx.r3.u32 + 445, ctx.r6.u8);
	// beq cr6,0x837fa6b4
	if (cr6.eq) goto loc_837FA6B4;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r10,r3,88
	ctx.r10.s64 = ctx.r3.s64 + 88;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r7,1
	ctx.r7.s64 = 1;
loc_837FA620:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi. r9,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 3;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x837fa694
	if (cr0.eq) goto loc_837FA694;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
loc_837FA640:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x837fa670
	if (cr6.lt) goto loc_837FA670;
	// beq cr6,0x837fa668
	if (cr6.eq) goto loc_837FA668;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x837fa674
	if (!cr6.lt) goto loc_837FA674;
	// stb r7,447(r3)
	PPC_STORE_U8(ctx.r3.u32 + 447, ctx.r7.u8);
	// b 0x837fa674
	goto loc_837FA674;
loc_837FA668:
	// stb r7,446(r3)
	PPC_STORE_U8(ctx.r3.u32 + 446, ctx.r7.u8);
	// b 0x837fa674
	goto loc_837FA674;
loc_837FA670:
	// stb r7,445(r3)
	PPC_STORE_U8(ctx.r3.u32 + 445, ctx.r7.u8);
loc_837FA674:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// srawi r11,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// blt cr6,0x837fa640
	if (cr6.lt) goto loc_837FA640;
loc_837FA694:
	// addic. r4,r4,-1
	xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bne 0x837fa620
	if (!cr0.eq) goto loc_837FA620;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837fa6b0
	if (!cr6.eq) goto loc_837FA6B0;
	// stb r6,45(r3)
	PPC_STORE_U8(ctx.r3.u32 + 45, ctx.r6.u8);
loc_837FA6B0:
	// stw r6,408(r3)
	PPC_STORE_U32(ctx.r3.u32 + 408, ctx.r6.u32);
loc_837FA6B4:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837FA6BC"))) PPC_WEAK_FUNC(sub_837FA6BC);
PPC_FUNC_IMPL(__imp__sub_837FA6BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837FA6C0"))) PPC_WEAK_FUNC(sub_837FA6C0);
PPC_FUNC_IMPL(__imp__sub_837FA6C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x837FA6C8;
	__savegprlr_26(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,45(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 45);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r26,1
	ctx.r26.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837fa918
	if (cr6.eq) goto loc_837FA918;
	// bl 0x837da198
	ctx.lr = 0x837FA6E4;
	sub_837DA198(ctx, base);
	// lwz r11,408(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 408);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x837fa918
	if (cr6.gt) goto loc_837FA918;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x837fa868
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837FA868;
	// bdzf 4*cr6+eq,0x837fa8b4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837FA8B4;
	// bne cr6,0x837fa914
	if (!cr6.eq) goto loc_837FA914;
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837fa834
	if (!cr6.eq) goto loc_837FA834;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r28,196(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// lwz r29,5728(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5728);
	// clrlwi r27,r11,16
	ctx.r27.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x837cb4c8
	ctx.lr = 0x837FA730;
	sub_837CB4C8(ctx, base);
	// lwz r10,11364(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11364);
	// clrlwi r11,r27,16
	ctx.r11.u64 = ctx.r27.u32 & 0xFFFF;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// rlwimi r10,r29,0,0,13
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r29.u32, 0) & 0xFFFC0000) | (ctx.r10.u64 & 0xFFFFFFFF0003FFFF);
	// rlwimi r10,r29,0,14,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r29.u32, 0) & 0x3FFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFC0000);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// bne cr6,0x837fa7c4
	if (!cr6.eq) goto loc_837FA7C4;
	// lbz r8,5712(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5712);
	// lbz r9,446(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 446);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// lbz r7,5713(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5713);
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// beq cr6,0x837fa78c
	if (cr6.eq) goto loc_837FA78C;
	// lbz r11,11244(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11244);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lbz r10,11245(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11245);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// b 0x837fa7a4
	goto loc_837FA7A4;
loc_837FA78C:
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r11,9
	ctx.r11.s64 = 9;
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
loc_837FA7A4:
	// lbz r11,447(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 447);
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r9,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r11,r11,0,29,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF07;
	// addi r8,r11,255
	ctx.r8.s64 = ctx.r11.s64 + 255;
	// stw r8,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r8.u32);
	// b 0x837fa800
	goto loc_837FA800;
loc_837FA7C4:
	// lbz r9,447(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 447);
	// lbz r5,5712(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5712);
	// subfic r8,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r9.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r10,r7,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r5,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// lbz r4,5713(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5713);
	// rlwinm r10,r10,0,29,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF07;
	// stw r4,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
	// lbz r3,11244(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11244);
	// addi r6,r10,255
	ctx.r6.s64 = ctx.r10.s64 + 255;
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// lbz r11,11245(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11245);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r6,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r6.u32);
loc_837FA800:
	// li r11,33
	ctx.r11.s64 = 33;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x837FA818;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837fa82c
	if (cr6.eq) goto loc_837FA82C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x837cea90
	ctx.lr = 0x837FA828;
	sub_837CEA90(ctx, base);
	// b 0x837fa830
	goto loc_837FA830;
loc_837FA82C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_837FA830:
	// stw r3,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r3.u32);
loc_837FA834:
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// bl 0x837cdf90
	ctx.lr = 0x837FA83C;
	sub_837CDF90(ctx, base);
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// bl 0x837cdfa8
	ctx.lr = 0x837FA844;
	sub_837CDFA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837fa918
	if (cr6.eq) goto loc_837FA918;
	// lwz r11,408(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 408);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,408(r30)
	PPC_STORE_U32(ctx.r30.u32 + 408, ctx.r11.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_837FA868:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8379f080
	ctx.lr = 0x837FA870;
	sub_8379F080(ctx, base);
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// bl 0x837ce028
	ctx.lr = 0x837FA878;
	sub_837CE028(ctx, base);
	// bl 0x8378cba8
	ctx.lr = 0x837FA87C;
	sub_8378CBA8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8378cbd0
	ctx.lr = 0x837FA884;
	sub_8378CBD0(ctx, base);
	// bl 0x8378cba8
	ctx.lr = 0x837FA888;
	sub_8378CBA8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8378cbd0
	ctx.lr = 0x837FA890;
	sub_8378CBD0(ctx, base);
	// bl 0x8378cba8
	ctx.lr = 0x837FA894;
	sub_8378CBA8(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8378cbd0
	ctx.lr = 0x837FA89C;
	sub_8378CBD0(ctx, base);
	// lwz r11,408(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 408);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,408(r30)
	PPC_STORE_U32(ctx.r30.u32 + 408, ctx.r11.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_837FA8B4:
	// bl 0x8378cba8
	ctx.lr = 0x837FA8B8;
	sub_8378CBA8(ctx, base);
	// bl 0x8378cce0
	ctx.lr = 0x837FA8BC;
	sub_8378CCE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837fa918
	if (cr6.eq) goto loc_837FA918;
	// bl 0x8378cba8
	ctx.lr = 0x837FA8CC;
	sub_8378CBA8(ctx, base);
	// bl 0x8378cd10
	ctx.lr = 0x837FA8D0;
	sub_8378CD10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837fa918
	if (cr6.eq) goto loc_837FA918;
	// bl 0x830fe928
	ctx.lr = 0x837FA8E0;
	sub_830FE928(ctx, base);
	// bl 0x830fe938
	ctx.lr = 0x837FA8E4;
	sub_830FE938(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837fa918
	if (!cr6.eq) goto loc_837FA918;
	// bl 0x8378cba8
	ctx.lr = 0x837FA8F4;
	sub_8378CBA8(ctx, base);
	// li r4,14
	ctx.r4.s64 = 14;
	// bl 0x8378cc08
	ctx.lr = 0x837FA8FC;
	sub_8378CC08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837fa918
	if (cr6.eq) goto loc_837FA918;
	// lwz r11,408(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 408);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,408(r30)
	PPC_STORE_U32(ctx.r30.u32 + 408, ctx.r11.u32);
loc_837FA914:
	// li r26,1
	ctx.r26.s64 = 1;
loc_837FA918:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837FA924"))) PPC_WEAK_FUNC(sub_837FA924);
PPC_FUNC_IMPL(__imp__sub_837FA924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837FA928"))) PPC_WEAK_FUNC(sub_837FA928);
PPC_FUNC_IMPL(__imp__sub_837FA928) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x837FA930;
	__savegprlr_27(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,408(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 408);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bgt cr6,0x837fadd8
	if (cr6.gt) goto loc_837FADD8;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x837fa9a4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837FA9A4;
	// bdzf 4*cr6+eq,0x837fa9e4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837FA9E4;
	// bdzf 4*cr6+eq,0x837faa14
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837FAA14;
	// bdzf 4*cr6+eq,0x837facf8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837FACF8;
	// bdzf 4*cr6+eq,0x837fad74
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837FAD74;
	// bdzf 4*cr6+eq,0x837fadb4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837FADB4;
	// bne cr6,0x837fadd4
	if (!cr6.eq) goto loc_837FADD4;
	// bl 0x83572958
	ctx.lr = 0x837FA970;
	sub_83572958(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x837fa980
	if (!cr6.eq) goto loc_837FA980;
	// bl 0x83102db0
	ctx.lr = 0x837FA97C;
	sub_83102DB0(ctx, base);
	// bl 0x83572958
	ctx.lr = 0x837FA980;
	sub_83572958(ctx, base);
loc_837FA980:
	// bl 0x83572958
	ctx.lr = 0x837FA984;
	sub_83572958(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837fadd8
	if (!cr6.eq) goto loc_837FADD8;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r11.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_837FA9A4:
	// bl 0x83572958
	ctx.lr = 0x837FA9A8;
	sub_83572958(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x837fa9c0
	if (!cr6.eq) goto loc_837FA9C0;
	// bl 0x83102db0
	ctx.lr = 0x837FA9B8;
	sub_83102DB0(ctx, base);
	// bl 0x83572958
	ctx.lr = 0x837FA9BC;
	sub_83572958(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_837FA9C0:
	// bl 0x837da198
	ctx.lr = 0x837FA9C4;
	sub_837DA198(ctx, base);
	// lwz r4,56(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83102db0
	ctx.lr = 0x837FA9D0;
	sub_83102DB0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r11.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_837FA9E4:
	// bl 0x83572958
	ctx.lr = 0x837FA9E8;
	sub_83572958(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837fadd8
	if (cr6.eq) goto loc_837FADD8;
	// bl 0x83572958
	ctx.lr = 0x837FA9F4;
	sub_83572958(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837fadd8
	if (!cr6.eq) goto loc_837FADD8;
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r11.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_837FAA14:
	// lbz r11,46(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 46);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837facf0
	if (cr6.eq) goto loc_837FACF0;
	// bl 0x8378b870
	ctx.lr = 0x837FAA24;
	sub_8378B870(ctx, base);
	// lwz r11,1956(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1956);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x837facf0
	if (!cr6.eq) goto loc_837FACF0;
	// bl 0x837da198
	ctx.lr = 0x837FAA34;
	sub_837DA198(ctx, base);
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x837da198
	ctx.lr = 0x837FAA40;
	sub_837DA198(ctx, base);
	// lwz r10,60(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// bl 0x837da198
	ctx.lr = 0x837FAA4C;
	sub_837DA198(ctx, base);
	// lwz r9,64(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// bl 0x837da198
	ctx.lr = 0x837FAA58;
	sub_837DA198(ctx, base);
	// lwz r8,68(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// bl 0x837da198
	ctx.lr = 0x837FAA64;
	sub_837DA198(ctx, base);
	// lwz r7,72(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// bl 0x837da198
	ctx.lr = 0x837FAA70;
	sub_837DA198(ctx, base);
	// lwz r6,76(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// stw r6,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r6.u32);
	// bl 0x837da198
	ctx.lr = 0x837FAA7C;
	sub_837DA198(ctx, base);
	// lwz r5,80(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// stw r5,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r5.u32);
	// bl 0x837da198
	ctx.lr = 0x837FAA88;
	sub_837DA198(ctx, base);
	// lwz r4,84(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// bl 0x837da198
	ctx.lr = 0x837FAA94;
	sub_837DA198(ctx, base);
	// lwz r3,88(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// bl 0x837da198
	ctx.lr = 0x837FAAA0;
	sub_837DA198(ctx, base);
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// bl 0x837da198
	ctx.lr = 0x837FAAAC;
	sub_837DA198(ctx, base);
	// lwz r10,96(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// bl 0x837da198
	ctx.lr = 0x837FAAB8;
	sub_837DA198(ctx, base);
	// lwz r9,100(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// stw r9,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// bl 0x837da198
	ctx.lr = 0x837FAAC4;
	sub_837DA198(ctx, base);
	// lwz r8,104(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// stw r8,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r8.u32);
	// bl 0x837da198
	ctx.lr = 0x837FAAD0;
	sub_837DA198(ctx, base);
	// lwz r7,108(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// stw r7,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r7.u32);
	// bl 0x837da198
	ctx.lr = 0x837FAADC;
	sub_837DA198(ctx, base);
	// lwz r6,112(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// stw r6,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r6.u32);
	// bl 0x837da198
	ctx.lr = 0x837FAAE8;
	sub_837DA198(ctx, base);
	// lwz r5,116(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// stw r5,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r5.u32);
	// bl 0x837da198
	ctx.lr = 0x837FAAF4;
	sub_837DA198(ctx, base);
	// lwz r4,120(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// stw r4,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r4.u32);
	// bl 0x837da198
	ctx.lr = 0x837FAB00;
	sub_837DA198(ctx, base);
	// lwz r3,124(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// stw r3,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r3.u32);
	// bl 0x837da198
	ctx.lr = 0x837FAB0C;
	sub_837DA198(ctx, base);
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// bl 0x837da198
	ctx.lr = 0x837FAB18;
	sub_837DA198(ctx, base);
	// lwz r10,132(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// stw r10,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r10.u32);
	// bl 0x837da198
	ctx.lr = 0x837FAB24;
	sub_837DA198(ctx, base);
	// lwz r9,136(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// stw r9,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r9.u32);
	// bl 0x837da198
	ctx.lr = 0x837FAB30;
	sub_837DA198(ctx, base);
	// lwz r8,140(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// stw r8,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r8.u32);
	// bl 0x837da198
	ctx.lr = 0x837FAB3C;
	sub_837DA198(ctx, base);
	// lwz r7,144(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// stw r7,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r7.u32);
	// bl 0x837da198
	ctx.lr = 0x837FAB48;
	sub_837DA198(ctx, base);
	// lwz r6,148(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// stw r6,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r6.u32);
	// bl 0x837da198
	ctx.lr = 0x837FAB54;
	sub_837DA198(ctx, base);
	// lwz r5,152(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// addic r4,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r4.s64 = ctx.r5.s64 + -1;
	// subfe r3,r4,r5
	temp.u8 = (~ctx.r4.u32 + ctx.r5.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// stb r3,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r3.u8);
	// bl 0x837da198
	ctx.lr = 0x837FAB68;
	sub_837DA198(ctx, base);
	// lwz r11,164(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// stw r11,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r11.u32);
	// bl 0x837da198
	ctx.lr = 0x837FAB74;
	sub_837DA198(ctx, base);
	// lwz r10,168(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// stw r10,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r10.u32);
	// bl 0x837da198
	ctx.lr = 0x837FAB80;
	sub_837DA198(ctx, base);
	// lwz r9,172(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	// stw r9,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r9.u32);
	// bl 0x837da198
	ctx.lr = 0x837FAB8C;
	sub_837DA198(ctx, base);
	// lwz r8,176(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// stw r8,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r8.u32);
	// bl 0x837da198
	ctx.lr = 0x837FAB98;
	sub_837DA198(ctx, base);
	// lwz r7,180(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// stw r7,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r7.u32);
	// bl 0x837da198
	ctx.lr = 0x837FABA4;
	sub_837DA198(ctx, base);
	// lbz r6,184(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 184);
	// stb r6,216(r1)
	PPC_STORE_U8(ctx.r1.u32 + 216, ctx.r6.u8);
	// bl 0x837da198
	ctx.lr = 0x837FABB0;
	sub_837DA198(ctx, base);
	// lbz r5,185(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 185);
	// stb r5,217(r1)
	PPC_STORE_U8(ctx.r1.u32 + 217, ctx.r5.u8);
	// bl 0x837da198
	ctx.lr = 0x837FABBC;
	sub_837DA198(ctx, base);
	// lbz r4,186(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 186);
	// stb r4,218(r1)
	PPC_STORE_U8(ctx.r1.u32 + 218, ctx.r4.u8);
	// bl 0x837da198
	ctx.lr = 0x837FABC8;
	sub_837DA198(ctx, base);
	// lwz r3,156(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r10,9
	ctx.r10.s64 = 589824;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// stw r3,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r3.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x837fac00
	if (cr6.lt) goto loc_837FAC00;
	// lis r10,9
	ctx.r10.s64 = 589824;
	// ori r9,r10,43
	ctx.r9.u64 = ctx.r10.u64 | 43;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// bge cr6,0x837fac00
	if (!cr6.lt) goto loc_837FAC00;
	// li r30,1
	ctx.r30.s64 = 1;
loc_837FAC00:
	// bl 0x837da198
	ctx.lr = 0x837FAC04;
	sub_837DA198(ctx, base);
	// li r11,33
	ctx.r11.s64 = 33;
	// lwz r29,188(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,528
	ctx.r4.s64 = 528;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x837FAC20;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837fac30
	if (cr6.eq) goto loc_837FAC30;
	// bl 0x837a1828
	ctx.lr = 0x837FAC2C;
	sub_837A1828(ctx, base);
	// b 0x837fac34
	goto loc_837FAC34;
loc_837FAC30:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_837FAC34:
	// stw r3,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r3.u32);
	// lwz r27,152(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// bl 0x82924d18
	ctx.lr = 0x837FAC40;
	sub_82924D18(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82924ed8
	ctx.lr = 0x837FAC48;
	sub_82924ED8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,412(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x837a3c58
	ctx.lr = 0x837FAC6C;
	sub_837A3C58(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,412(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// bl 0x837a0a90
	ctx.lr = 0x837FAC78;
	sub_837A0A90(ctx, base);
	// bl 0x8378cba8
	ctx.lr = 0x837FAC7C;
	sub_8378CBA8(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x8378cbd0
	ctx.lr = 0x837FAC84;
	sub_8378CBD0(ctx, base);
	// bl 0x8378cba8
	ctx.lr = 0x837FAC88;
	sub_8378CBA8(ctx, base);
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x8378cbd0
	ctx.lr = 0x837FAC90;
	sub_8378CBD0(ctx, base);
	// bl 0x8378cba8
	ctx.lr = 0x837FAC94;
	sub_8378CBA8(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x8378cbd0
	ctx.lr = 0x837FAC9C;
	sub_8378CBD0(ctx, base);
	// bl 0x8378cba8
	ctx.lr = 0x837FACA0;
	sub_8378CBA8(ctx, base);
	// li r4,13
	ctx.r4.s64 = 13;
	// bl 0x8378cbd0
	ctx.lr = 0x837FACA8;
	sub_8378CBD0(ctx, base);
	// bl 0x8378cba8
	ctx.lr = 0x837FACAC;
	sub_8378CBA8(ctx, base);
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x8378cbd0
	ctx.lr = 0x837FACB4;
	sub_8378CBD0(ctx, base);
	// bl 0x8378cba8
	ctx.lr = 0x837FACB8;
	sub_8378CBA8(ctx, base);
	// li r4,19
	ctx.r4.s64 = 19;
	// bl 0x8378cbd0
	ctx.lr = 0x837FACC0;
	sub_8378CBD0(ctx, base);
	// bl 0x8378cba8
	ctx.lr = 0x837FACC4;
	sub_8378CBA8(ctx, base);
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x8378cbd0
	ctx.lr = 0x837FACCC;
	sub_8378CBD0(ctx, base);
	// bl 0x8378cba8
	ctx.lr = 0x837FACD0;
	sub_8378CBA8(ctx, base);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x8378cbd0
	ctx.lr = 0x837FACD8;
	sub_8378CBD0(ctx, base);
	// bl 0x8378cba8
	ctx.lr = 0x837FACDC;
	sub_8378CBA8(ctx, base);
	// li r4,17
	ctx.r4.s64 = 17;
	// bl 0x8378cbd0
	ctx.lr = 0x837FACE4;
	sub_8378CBD0(ctx, base);
	// bl 0x8378cba8
	ctx.lr = 0x837FACE8;
	sub_8378CBA8(ctx, base);
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x8378cbd0
	ctx.lr = 0x837FACF0;
	sub_8378CBD0(ctx, base);
loc_837FACF0:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r11.u32);
loc_837FACF8:
	// lbz r11,46(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 46);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837fad6c
	if (cr6.eq) goto loc_837FAD6C;
	// bl 0x8378cba8
	ctx.lr = 0x837FAD08;
	sub_8378CBA8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837fadd8
	if (cr6.eq) goto loc_837FADD8;
	// bl 0x83b56b70
	ctx.lr = 0x837FAD18;
	sub_83B56B70(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837fadd8
	if (cr6.eq) goto loc_837FADD8;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8378cc08
	ctx.lr = 0x837FAD30;
	sub_8378CC08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837fadd8
	if (cr6.eq) goto loc_837FADD8;
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8378cc08
	ctx.lr = 0x837FAD48;
	sub_8378CC08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837fadd8
	if (cr6.eq) goto loc_837FADD8;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8378cc08
	ctx.lr = 0x837FAD60;
	sub_8378CC08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837fadd8
	if (cr6.eq) goto loc_837FADD8;
loc_837FAD6C:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r11.u32);
loc_837FAD74:
	// lbz r11,51(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 51);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837fadac
	if (cr6.eq) goto loc_837FADAC;
	// bl 0x8378b870
	ctx.lr = 0x837FAD84;
	sub_8378B870(ctx, base);
	// bl 0x8378a758
	ctx.lr = 0x837FAD88;
	sub_8378A758(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837fad98
	if (cr6.eq) goto loc_837FAD98;
	// stb r28,51(r31)
	PPC_STORE_U8(ctx.r31.u32 + 51, ctx.r28.u8);
	// b 0x837fadac
	goto loc_837FADAC;
loc_837FAD98:
	// bl 0x8378b870
	ctx.lr = 0x837FAD9C;
	sub_8378B870(ctx, base);
	// bl 0x8378b140
	ctx.lr = 0x837FADA0;
	sub_8378B140(ctx, base);
	// bl 0x8378cba8
	ctx.lr = 0x837FADA4;
	sub_8378CBA8(ctx, base);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x8378cbd0
	ctx.lr = 0x837FADAC;
	sub_8378CBD0(ctx, base);
loc_837FADAC:
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r11.u32);
loc_837FADB4:
	// bl 0x8378cba8
	ctx.lr = 0x837FADB8;
	sub_8378CBA8(ctx, base);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x8378cc08
	ctx.lr = 0x837FADC0;
	sub_8378CC08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837fadd8
	if (cr6.eq) goto loc_837FADD8;
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r11.u32);
loc_837FADD4:
	// li r28,1
	ctx.r28.s64 = 1;
loc_837FADD8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837FADE4"))) PPC_WEAK_FUNC(sub_837FADE4);
PPC_FUNC_IMPL(__imp__sub_837FADE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837FADE8"))) PPC_WEAK_FUNC(sub_837FADE8);
PPC_FUNC_IMPL(__imp__sub_837FADE8) {
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
	// lbz r11,346(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 346);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837fafa4
	if (!cr6.eq) goto loc_837FAFA4;
	// lwz r11,416(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 416);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// stb r10,346(r3)
	PPC_STORE_U8(ctx.r3.u32 + 346, ctx.r10.u8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837fae60
	if (cr6.eq) goto loc_837FAE60;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x837FAE34;
	sub_82595150(ctx, base);
	// lwz r3,416(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837fae54
	if (cr6.eq) goto loc_837FAE54;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837FAE54;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_837FAE54:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x837FAE5C;
	sub_82595170(ctx, base);
	// stw r30,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r30.u32);
loc_837FAE60:
	// lwz r11,412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837faeac
	if (cr6.eq) goto loc_837FAEAC;
	// li r11,33
	ctx.r11.s64 = 33;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x837FAE80;
	sub_82595150(ctx, base);
	// lwz r3,412(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837faea0
	if (cr6.eq) goto loc_837FAEA0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837FAEA0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_837FAEA0:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x837FAEA8;
	sub_82595170(ctx, base);
	// stw r30,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r30.u32);
loc_837FAEAC:
	// bl 0x8378cba8
	ctx.lr = 0x837FAEB0;
	sub_8378CBA8(ctx, base);
	// lbz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 48);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837faf68
	if (cr6.eq) goto loc_837FAF68;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837faf68
	if (cr6.eq) goto loc_837FAF68;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x8378d2e8
	ctx.lr = 0x837FAED4;
	sub_8378D2E8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8378d2e8
	ctx.lr = 0x837FAEE4;
	sub_8378D2E8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8378d2e8
	ctx.lr = 0x837FAEF4;
	sub_8378D2E8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8378d2e8
	ctx.lr = 0x837FAF04;
	sub_8378D2E8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8378d2e8
	ctx.lr = 0x837FAF14;
	sub_8378D2E8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8378d2e8
	ctx.lr = 0x837FAF24;
	sub_8378D2E8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8378d2e8
	ctx.lr = 0x837FAF34;
	sub_8378D2E8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8378d2e8
	ctx.lr = 0x837FAF44;
	sub_8378D2E8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8378d2e8
	ctx.lr = 0x837FAF54;
	sub_8378D2E8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8378d2e8
	ctx.lr = 0x837FAF64;
	sub_8378D2E8(ctx, base);
	// b 0x837faf90
	goto loc_837FAF90;
loc_837FAF68:
	// lbz r11,46(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 46);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837faf90
	if (cr6.eq) goto loc_837FAF90;
	// lbz r11,50(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 50);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837faf8c
	if (!cr6.eq) goto loc_837FAF8C;
	// li r4,1
	ctx.r4.s64 = 1;
loc_837FAF8C:
	// bl 0x837f9f30
	ctx.lr = 0x837FAF90;
	sub_837F9F30(ctx, base);
loc_837FAF90:
	// lbz r11,51(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 51);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837fafa4
	if (cr6.eq) goto loc_837FAFA4;
	// bl 0x8378b870
	ctx.lr = 0x837FAFA0;
	sub_8378B870(ctx, base);
	// bl 0x8378b660
	ctx.lr = 0x837FAFA4;
	sub_8378B660(ctx, base);
loc_837FAFA4:
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

__attribute__((alias("__imp__sub_837FAFBC"))) PPC_WEAK_FUNC(sub_837FAFBC);
PPC_FUNC_IMPL(__imp__sub_837FAFBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837FAFC0"))) PPC_WEAK_FUNC(sub_837FAFC0);
PPC_FUNC_IMPL(__imp__sub_837FAFC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x837FAFC8;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// bl 0x837d59a0
	ctx.lr = 0x837FAFE0;
	sub_837D59A0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x837faffc
	if (!cr6.eq) goto loc_837FAFFC;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_837FAFFC:
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// bne cr6,0x837fb00c
	if (!cr6.eq) goto loc_837FB00C;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f31,-20096(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -20096);
	ctx.f31.f64 = double(temp.f32);
loc_837FB00C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r25,2
	cr6.compare<int32_t>(ctx.r25.s32, 2, xer);
	// lfs f0,27608(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27608);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// beq cr6,0x837fb02c
	if (cr6.eq) goto loc_837FB02C;
	// cmpwi cr6,r25,4
	cr6.compare<int32_t>(ctx.r25.s32, 4, xer);
	// bne cr6,0x837fb030
	if (!cr6.eq) goto loc_837FB030;
loc_837FB02C:
	// li r29,0
	ctx.r29.s64 = 0;
loc_837FB030:
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x837d5cf8
	ctx.lr = 0x837FB048;
	sub_837D5CF8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x837d5cf8
	ctx.lr = 0x837FB058;
	sub_837D5CF8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// bne cr6,0x837fb080
	if (!cr6.eq) goto loc_837FB080;
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x837d60f8
	ctx.lr = 0x837FB07C;
	sub_837D60F8(ctx, base);
	// b 0x837fb094
	goto loc_837FB094;
loc_837FB080:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq cr6,0x837fb094
	if (cr6.eq) goto loc_837FB094;
	// cmpwi cr6,r31,3
	cr6.compare<int32_t>(ctx.r31.s32, 3, xer);
	// beq cr6,0x837fb094
	if (cr6.eq) goto loc_837FB094;
	// li r26,1
	ctx.r26.s64 = 1;
loc_837FB094:
	// cmpwi cr6,r27,2
	cr6.compare<int32_t>(ctx.r27.s32, 2, xer);
	// bne cr6,0x837fb0b4
	if (!cr6.eq) goto loc_837FB0B4;
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x837d60f8
	ctx.lr = 0x837FB0B0;
	sub_837D60F8(ctx, base);
	// b 0x837fb0c8
	goto loc_837FB0C8;
loc_837FB0B4:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// beq cr6,0x837fb0c8
	if (cr6.eq) goto loc_837FB0C8;
	// cmpwi cr6,r27,3
	cr6.compare<int32_t>(ctx.r27.s32, 3, xer);
	// beq cr6,0x837fb0c8
	if (cr6.eq) goto loc_837FB0C8;
	// li r26,1
	ctx.r26.s64 = 1;
loc_837FB0C8:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837fb0ec
	if (cr6.eq) goto loc_837FB0EC;
	// stfs f31,372(r24)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r24.u32 + 372, temp.u32);
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// stw r25,368(r24)
	PPC_STORE_U32(ctx.r24.u32 + 368, ctx.r25.u32);
	// bne cr6,0x837fb0ec
	if (!cr6.eq) goto loc_837FB0EC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,368(r24)
	PPC_STORE_U32(ctx.r24.u32 + 368, ctx.r11.u32);
loc_837FB0EC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x837d5c78
	ctx.lr = 0x837FB0F8;
	sub_837D5C78(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837FB104"))) PPC_WEAK_FUNC(sub_837FB104);
PPC_FUNC_IMPL(__imp__sub_837FB104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837FB108"))) PPC_WEAK_FUNC(sub_837FB108);
PPC_FUNC_IMPL(__imp__sub_837FB108) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x837FB110;
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
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x837d59a0
	ctx.lr = 0x837FB130;
	sub_837D59A0(ctx, base);
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r23,368(r24)
	PPC_STORE_U32(ctx.r24.u32 + 368, ctx.r23.u32);
	// bne cr6,0x837fb158
	if (!cr6.eq) goto loc_837FB158;
	// li r3,1
	ctx.r3.s64 = 1;
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
loc_837FB158:
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// beq cr6,0x837fb1c0
	if (cr6.eq) goto loc_837FB1C0;
	// addi r10,r26,-1
	ctx.r10.s64 = ctx.r26.s64 + -1;
	// li r11,6
	ctx.r11.s64 = 6;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// bgt cr6,0x837fb1a8
	if (cr6.gt) goto loc_837FB1A8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bdzf 4*cr6+eq,0x837fb18c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837FB18C;
	// bdzf 4*cr6+eq,0x837fb194
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837FB194;
	// bdzf 4*cr6+eq,0x837fb19c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837FB19C;
	// bne cr6,0x837fb1a4
	if (!cr6.eq) goto loc_837FB1A4;
loc_837FB18C:
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x837fb1a8
	goto loc_837FB1A8;
loc_837FB194:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x837fb1a8
	goto loc_837FB1A8;
loc_837FB19C:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x837fb1a8
	goto loc_837FB1A8;
loc_837FB1A4:
	// li r11,4
	ctx.r11.s64 = 4;
loc_837FB1A8:
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// li r31,1
	ctx.r31.s64 = 1;
	// cmpwi cr6,r26,2
	cr6.compare<int32_t>(ctx.r26.s32, 2, xer);
	// beq cr6,0x837fb1d8
	if (cr6.eq) goto loc_837FB1D8;
	// cmpwi cr6,r26,4
	cr6.compare<int32_t>(ctx.r26.s32, 4, xer);
	// b 0x837fb1d4
	goto loc_837FB1D4;
loc_837FB1C0:
	// lwz r11,364(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 364);
	// li r31,1
	ctx.r31.s64 = 1;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x837fb1d8
	if (cr6.eq) goto loc_837FB1D8;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
loc_837FB1D4:
	// bne cr6,0x837fb1dc
	if (!cr6.eq) goto loc_837FB1DC;
loc_837FB1D8:
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_837FB1DC:
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x837d5cf8
	ctx.lr = 0x837FB1F4;
	sub_837D5CF8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x837d5cf8
	ctx.lr = 0x837FB204;
	sub_837D5CF8(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// clrlwi r8,r29,24
	ctx.r8.u64 = ctx.r29.u32 & 0xFF;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// lfs f31,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x837fb270
	if (cr6.eq) goto loc_837FB270;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// beq cr6,0x837fb248
	if (cr6.eq) goto loc_837FB248;
	// lwz r11,364(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 364);
	// cmpw cr6,r26,r11
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, xer);
	// beq cr6,0x837fb248
	if (cr6.eq) goto loc_837FB248;
	// li r6,1
	ctx.r6.s64 = 1;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x837d60f8
	ctx.lr = 0x837FB244;
	sub_837D60F8(ctx, base);
	// fmr f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f31.f64;
loc_837FB248:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq cr6,0x837fb270
	if (cr6.eq) goto loc_837FB270;
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// beq cr6,0x837fb270
	if (cr6.eq) goto loc_837FB270;
	// li r6,1
	ctx.r6.s64 = 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x837d60f8
	ctx.lr = 0x837FB26C;
	sub_837D60F8(ctx, base);
	// li r23,1
	ctx.r23.s64 = 1;
loc_837FB270:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// beq cr6,0x837fb2bc
	if (cr6.eq) goto loc_837FB2BC;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bne cr6,0x837fb2bc
	if (!cr6.eq) goto loc_837FB2BC;
	// cmpwi cr6,r25,3
	cr6.compare<int32_t>(ctx.r25.s32, 3, xer);
	// beq cr6,0x837fb290
	if (cr6.eq) goto loc_837FB290;
	// cmpwi cr6,r25,2
	cr6.compare<int32_t>(ctx.r25.s32, 2, xer);
	// bne cr6,0x837fb294
	if (!cr6.eq) goto loc_837FB294;
loc_837FB290:
	// fmr f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f31.f64;
loc_837FB294:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lfs f0,27608(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27608);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// fmuls f1,f30,f0
	ctx.f1.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// bl 0x837d5ea0
	ctx.lr = 0x837FB2B8;
	sub_837D5EA0(ctx, base);
	// stw r26,364(r24)
	PPC_STORE_U32(ctx.r24.u32 + 364, ctx.r26.u32);
loc_837FB2BC:
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837fb2f0
	if (cr6.eq) goto loc_837FB2F0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x837d5cf8
	ctx.lr = 0x837FB2D4;
	sub_837D5CF8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x837fb2f0
	if (cr6.eq) goto loc_837FB2F0;
	// li r3,0
	ctx.r3.s64 = 0;
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
loc_837FB2F0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x837d5c78
	ctx.lr = 0x837FB2FC;
	sub_837D5C78(ctx, base);
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

__attribute__((alias("__imp__sub_837FB30C"))) PPC_WEAK_FUNC(sub_837FB30C);
PPC_FUNC_IMPL(__imp__sub_837FB30C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837FB310"))) PPC_WEAK_FUNC(sub_837FB310);
PPC_FUNC_IMPL(__imp__sub_837FB310) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837FB318;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x837d59a0
	ctx.lr = 0x837FB324;
	sub_837D59A0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x837fb33c
	if (!cr6.eq) goto loc_837FB33C;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_837FB33C:
	// li r31,1
	ctx.r31.s64 = 1;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// beq cr6,0x837fb350
	if (cr6.eq) goto loc_837FB350;
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(ctx.r30.s32, 4, xer);
	// bne cr6,0x837fb354
	if (!cr6.eq) goto loc_837FB354;
loc_837FB350:
	// li r31,0
	ctx.r31.s64 = 0;
loc_837FB354:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x837d5c78
	ctx.lr = 0x837FB360;
	sub_837D5C78(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837fb390
	if (cr6.eq) goto loc_837FB390;
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r4,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x837d5c78
	ctx.lr = 0x837FB380;
	sub_837D5C78(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x837fb394
	if (!cr6.eq) goto loc_837FB394;
loc_837FB390:
	// li r11,0
	ctx.r11.s64 = 0;
loc_837FB394:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837FB3A0"))) PPC_WEAK_FUNC(sub_837FB3A0);
PPC_FUNC_IMPL(__imp__sub_837FB3A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x837FB3A8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x837d59a0
	ctx.lr = 0x837FB3B4;
	sub_837D59A0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837fb48c
	if (cr6.eq) goto loc_837FB48C;
	// lwz r11,368(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 368);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x837fb48c
	if (cr6.eq) goto loc_837FB48C;
	// li r31,1
	ctx.r31.s64 = 1;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x837fb3e0
	if (cr6.eq) goto loc_837FB3E0;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x837fb3e4
	if (!cr6.eq) goto loc_837FB3E4;
loc_837FB3E0:
	// li r31,0
	ctx.r31.s64 = 0;
loc_837FB3E4:
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// subfe r28,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r28.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x837d5cf8
	ctx.lr = 0x837FB3FC;
	sub_837D5CF8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x837d5cf8
	ctx.lr = 0x837FB40C;
	sub_837D5CF8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// bne cr6,0x837fb434
	if (!cr6.eq) goto loc_837FB434;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f1,372(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 372);
	ctx.f1.f64 = double(temp.f32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x837d60f8
	ctx.lr = 0x837FB430;
	sub_837D60F8(ctx, base);
	// b 0x837fb448
	goto loc_837FB448;
loc_837FB434:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq cr6,0x837fb448
	if (cr6.eq) goto loc_837FB448;
	// cmpwi cr6,r30,3
	cr6.compare<int32_t>(ctx.r30.s32, 3, xer);
	// beq cr6,0x837fb448
	if (cr6.eq) goto loc_837FB448;
	// li r26,1
	ctx.r26.s64 = 1;
loc_837FB448:
	// cmpwi cr6,r27,2
	cr6.compare<int32_t>(ctx.r27.s32, 2, xer);
	// bne cr6,0x837fb468
	if (!cr6.eq) goto loc_837FB468;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f1,372(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 372);
	ctx.f1.f64 = double(temp.f32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x837d60f8
	ctx.lr = 0x837FB464;
	sub_837D60F8(ctx, base);
	// b 0x837fb47c
	goto loc_837FB47C;
loc_837FB468:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// beq cr6,0x837fb47c
	if (cr6.eq) goto loc_837FB47C;
	// cmpwi cr6,r27,3
	cr6.compare<int32_t>(ctx.r27.s32, 3, xer);
	// beq cr6,0x837fb47c
	if (cr6.eq) goto loc_837FB47C;
	// li r26,1
	ctx.r26.s64 = 1;
loc_837FB47C:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837fb48c
	if (!cr6.eq) goto loc_837FB48C;
	// stw r11,368(r25)
	PPC_STORE_U32(ctx.r25.u32 + 368, ctx.r11.u32);
loc_837FB48C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837FB494"))) PPC_WEAK_FUNC(sub_837FB494);
PPC_FUNC_IMPL(__imp__sub_837FB494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837FB498"))) PPC_WEAK_FUNC(sub_837FB498);
PPC_FUNC_IMPL(__imp__sub_837FB498) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x837FB4A0;
	__savegprlr_21(ctx, base);
	// stfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// bl 0x837da198
	ctx.lr = 0x837FB4B4;
	sub_837DA198(ctx, base);
	// lbz r29,360(r27)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r27.u32 + 360);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble cr6,0x837fb4c8
	if (!cr6.gt) goto loc_837FB4C8;
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
loc_837FB4C8:
	// clrlwi r4,r29,24
	ctx.r4.u64 = ctx.r29.u32 & 0xFF;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x838009f0
	ctx.lr = 0x837FB4D4;
	sub_838009F0(ctx, base);
	// lwz r11,352(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 352);
	// lwz r25,184(r27)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r27.u32 + 184);
	// li r21,1
	ctx.r21.s64 = 1;
	// li r28,2
	ctx.r28.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// li r22,0
	ctx.r22.s64 = 0;
	// bne cr6,0x837fb538
	if (!cr6.eq) goto loc_837FB538;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r22,11380(r23)
	PPC_STORE_U32(ctx.r23.u32 + 11380, ctx.r22.u32);
	// addi r11,r11,9008
	ctx.r11.s64 = ctx.r11.s64 + 9008;
	// stw r22,11384(r23)
	PPC_STORE_U32(ctx.r23.u32 + 11384, ctx.r22.u32);
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stw r22,11388(r23)
	PPC_STORE_U32(ctx.r23.u32 + 11388, ctx.r22.u32);
	// stw r22,11392(r23)
	PPC_STORE_U32(ctx.r23.u32 + 11392, ctx.r22.u32);
	// lfs f31,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// stw r22,11396(r23)
	PPC_STORE_U32(ctx.r23.u32 + 11396, ctx.r22.u32);
	// stfs f31,11400(r23)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r23.u32 + 11400, temp.u32);
	// stb r22,11416(r23)
	PPC_STORE_U8(ctx.r23.u32 + 11416, ctx.r22.u8);
	// stfs f31,11404(r23)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r23.u32 + 11404, temp.u32);
	// std r9,11408(r23)
	PPC_STORE_U64(ctx.r23.u32 + 11408, ctx.r9.u64);
	// b 0x837fb720
	goto loc_837FB720;
loc_837FB538:
	// lwz r11,356(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 356);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,9008
	ctx.r11.s64 = ctx.r11.s64 + 9008;
	// lfs f31,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// ble cr6,0x837fb6e8
	if (!cr6.gt) goto loc_837FB6E8;
	// stw r28,11380(r23)
	PPC_STORE_U32(ctx.r23.u32 + 11380, ctx.r28.u32);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x837fb6d8
	if (cr6.eq) goto loc_837FB6D8;
	// lwz r11,56(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 56);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// bne cr6,0x837fb6d8
	if (!cr6.eq) goto loc_837FB6D8;
	// lfs f0,192(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x837fb5a8
	if (cr6.eq) goto loc_837FB5A8;
	// lfs f12,64(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f11,68(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 68);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f11,f12
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// lfs f0,27608(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27608);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f10,11400(r23)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r23.u32 + 11400, temp.u32);
	// fcmpu cr6,f13,f31
	cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// ble cr6,0x837fb5a4
	if (!cr6.gt) goto loc_837FB5A4;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,11404(r23)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r23.u32 + 11404, temp.u32);
	// b 0x837fb5a8
	goto loc_837FB5A8;
loc_837FB5A4:
	// stfs f31,11404(r23)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r23.u32 + 11404, temp.u32);
loc_837FB5A8:
	// lwz r11,504(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 504);
	// lwz r10,508(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 508);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x837fb5e4
	if (cr0.eq) goto loc_837FB5E4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837fb5e4
	if (cr6.eq) goto loc_837FB5E4;
	// addi r4,r11,832
	ctx.r4.s64 = ctx.r11.s64 + 832;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,100
	ctx.r5.s64 = 100;
	// bl 0x831ce980
	ctx.lr = 0x837FB5D8;
	sub_831CE980(ctx, base);
	// ld r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r11,11408(r23)
	PPC_STORE_U64(ctx.r23.u32 + 11408, ctx.r11.u64);
	// b 0x837fb5f8
	goto loc_837FB5F8;
loc_837FB5E4:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,11408(r23)
	PPC_STORE_U64(ctx.r23.u32 + 11408, ctx.r10.u64);
loc_837FB5F8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x837fb6d8
	if (cr6.eq) goto loc_837FB6D8;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lbz r11,11416(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 11416);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x837fb66c
	if (cr6.eq) goto loc_837FB66C;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x837fb66c
	if (cr6.eq) goto loc_837FB66C;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// blt cr6,0x837fb63c
	if (cr6.lt) goto loc_837FB63C;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// b 0x837fb654
	goto loc_837FB654;
loc_837FB63C:
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f0,68(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
loc_837FB654:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x837fb66c
	if (cr6.lt) goto loc_837FB66C;
	// lfs f13,64(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x837fb66c
	if (cr6.lt) goto loc_837FB66C;
	// stb r10,11416(r23)
	PPC_STORE_U8(ctx.r23.u32 + 11416, ctx.r10.u8);
loc_837FB66C:
	// lbz r11,11416(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 11416);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837fb6d8
	if (cr6.eq) goto loc_837FB6D8;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x837fb6d8
	if (cr6.eq) goto loc_837FB6D8;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// blt cr6,0x837fb6a8
	if (cr6.lt) goto loc_837FB6A8;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// b 0x837fb6c0
	goto loc_837FB6C0;
loc_837FB6A8:
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfs f0,68(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
loc_837FB6C0:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x837fb6d8
	if (cr6.lt) goto loc_837FB6D8;
	// lfs f13,64(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x837fb6d8
	if (cr6.lt) goto loc_837FB6D8;
	// stb r22,11416(r23)
	PPC_STORE_U8(ctx.r23.u32 + 11416, ctx.r22.u8);
loc_837FB6D8:
	// lbz r11,64(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837fb724
	if (cr6.eq) goto loc_837FB724;
	// b 0x837fb720
	goto loc_837FB720;
loc_837FB6E8:
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// stfs f31,11400(r23)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r23.u32 + 11400, temp.u32);
	// stw r22,11380(r23)
	PPC_STORE_U32(ctx.r23.u32 + 11380, ctx.r22.u32);
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// stfs f31,11404(r23)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r23.u32 + 11404, temp.u32);
	// stw r22,11384(r23)
	PPC_STORE_U32(ctx.r23.u32 + 11384, ctx.r22.u32);
	// stw r22,11388(r23)
	PPC_STORE_U32(ctx.r23.u32 + 11388, ctx.r22.u32);
	// stw r22,11392(r23)
	PPC_STORE_U32(ctx.r23.u32 + 11392, ctx.r22.u32);
	// stw r22,11396(r23)
	PPC_STORE_U32(ctx.r23.u32 + 11396, ctx.r22.u32);
	// stb r22,11416(r23)
	PPC_STORE_U8(ctx.r23.u32 + 11416, ctx.r22.u8);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,11408(r23)
	PPC_STORE_U64(ctx.r23.u32 + 11408, ctx.r9.u64);
	// stw r21,11380(r23)
	PPC_STORE_U32(ctx.r23.u32 + 11380, ctx.r21.u32);
loc_837FB720:
	// stb r22,11416(r23)
	PPC_STORE_U8(ctx.r23.u32 + 11416, ctx.r22.u8);
loc_837FB724:
	// stw r29,11384(r23)
	PPC_STORE_U32(ctx.r23.u32 + 11384, ctx.r29.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83800a28
	ctx.lr = 0x837FB730;
	sub_83800A28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837fb750
	if (cr6.eq) goto loc_837FB750;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83800a28
	ctx.lr = 0x837FB744;
	sub_83800A28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x837fb754
	goto loc_837FB754;
loc_837FB750:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_837FB754:
	// stw r11,11388(r23)
	PPC_STORE_U32(ctx.r23.u32 + 11388, ctx.r11.u32);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x837fb770
	if (cr6.eq) goto loc_837FB770;
	// lwz r11,252(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 252);
	// stw r11,11392(r23)
	PPC_STORE_U32(ctx.r23.u32 + 11392, ctx.r11.u32);
	// lwz r10,256(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 256);
	// b 0x837fb784
	goto loc_837FB784;
loc_837FB770:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x837fb788
	if (cr6.eq) goto loc_837FB788;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// stw r11,11392(r23)
	PPC_STORE_U32(ctx.r23.u32 + 11392, ctx.r11.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_837FB784:
	// stw r10,11396(r23)
	PPC_STORE_U32(ctx.r23.u32 + 11396, ctx.r10.u32);
loc_837FB788:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x837fbc58
	if (cr6.eq) goto loc_837FBC58;
	// lwz r11,352(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 352);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x837fb7c0
	if (!cr6.eq) goto loc_837FB7C0;
	// bl 0x837da198
	ctx.lr = 0x837FB7A0;
	sub_837DA198(ctx, base);
	// lwz r11,11364(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11364);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x837fbc58
	if (cr6.eq) goto loc_837FBC58;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82a17bc0
	ctx.lr = 0x837FB7B4;
	sub_82A17BC0(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_837FB7C0:
	// lwz r11,356(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 356);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// ble cr6,0x837fb82c
	if (!cr6.gt) goto loc_837FB82C;
	// lbz r11,32(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837fb820
	if (!cr6.eq) goto loc_837FB820;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// addi r30,r24,1556
	ctx.r30.s64 = ctx.r24.s64 + 1556;
loc_837FB7E0:
	// clrlwi r4,r31,24
	ctx.r4.u64 = ctx.r31.u32 & 0xFF;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x838009f0
	ctx.lr = 0x837FB7EC;
	sub_838009F0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837fb814
	if (cr6.eq) goto loc_837FB814;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,40
	cr6.compare<int32_t>(ctx.r31.s32, 40, xer);
	// stwu r11,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r30.u32 = ea;
	// blt cr6,0x837fb7e0
	if (cr6.lt) goto loc_837FB7E0;
	// stb r21,32(r24)
	PPC_STORE_U8(ctx.r24.u32 + 32, ctx.r21.u8);
	// stb r22,33(r24)
	PPC_STORE_U8(ctx.r24.u32 + 33, ctx.r22.u8);
	// b 0x837fb834
	goto loc_837FB834;
loc_837FB814:
	// addi r11,r31,390
	ctx.r11.s64 = ctx.r31.s64 + 390;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r22,r10,r24
	PPC_STORE_U32(ctx.r10.u32 + ctx.r24.u32, ctx.r22.u32);
loc_837FB820:
	// stb r21,32(r24)
	PPC_STORE_U8(ctx.r24.u32 + 32, ctx.r21.u8);
	// stb r22,33(r24)
	PPC_STORE_U8(ctx.r24.u32 + 33, ctx.r22.u8);
	// b 0x837fb834
	goto loc_837FB834;
loc_837FB82C:
	// stb r22,32(r24)
	PPC_STORE_U8(ctx.r24.u32 + 32, ctx.r22.u8);
	// stb r21,33(r24)
	PPC_STORE_U8(ctx.r24.u32 + 33, ctx.r21.u8);
loc_837FB834:
	// stw r29,1556(r24)
	PPC_STORE_U32(ctx.r24.u32 + 1556, ctx.r29.u32);
	// lwz r11,11392(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 11392);
	// stw r11,64(r24)
	PPC_STORE_U32(ctx.r24.u32 + 64, ctx.r11.u32);
	// lwz r10,11396(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 11396);
	// stw r10,68(r24)
	PPC_STORE_U32(ctx.r24.u32 + 68, ctx.r10.u32);
	// lfs f0,11400(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 11400);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1768(r24)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r24.u32 + 1768, temp.u32);
	// lfs f13,11404(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 11404);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,1772(r24)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r24.u32 + 1772, temp.u32);
	// lbz r9,11416(r23)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r23.u32 + 11416);
	// stb r9,1762(r24)
	PPC_STORE_U8(ctx.r24.u32 + 1762, ctx.r9.u8);
	// lwz r8,36(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// stw r7,52(r24)
	PPC_STORE_U32(ctx.r24.u32 + 52, ctx.r7.u32);
	// lbz r6,63(r27)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r27.u32 + 63);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x837fb888
	if (!cr6.eq) goto loc_837FB888;
	// lbz r11,62(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 62);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// beq cr6,0x837fb88c
	if (cr6.eq) goto loc_837FB88C;
loc_837FB888:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_837FB88C:
	// stb r11,48(r24)
	PPC_STORE_U8(ctx.r24.u32 + 48, ctx.r11.u8);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// lbz r11,344(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 344);
	// stb r22,1761(r24)
	PPC_STORE_U8(ctx.r24.u32 + 1761, ctx.r22.u8);
	// stb r22,1764(r24)
	PPC_STORE_U8(ctx.r24.u32 + 1764, ctx.r22.u8);
	// stb r11,1760(r24)
	PPC_STORE_U8(ctx.r24.u32 + 1760, ctx.r11.u8);
	// beq cr6,0x837fb910
	if (cr6.eq) goto loc_837FB910;
	// lwz r11,56(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 56);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// bne cr6,0x837fb910
	if (!cr6.eq) goto loc_837FB910;
	// lbz r11,205(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 205);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837fb8cc
	if (!cr6.eq) goto loc_837FB8CC;
	// lbz r11,206(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 206);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837fb8d0
	if (cr6.eq) goto loc_837FB8D0;
loc_837FB8CC:
	// stb r28,1761(r24)
	PPC_STORE_U8(ctx.r24.u32 + 1761, ctx.r28.u8);
loc_837FB8D0:
	// lbz r11,223(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 223);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837fb8e4
	if (cr6.eq) goto loc_837FB8E4;
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r11,1761(r24)
	PPC_STORE_U8(ctx.r24.u32 + 1761, ctx.r11.u8);
loc_837FB8E4:
	// lbz r11,217(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 217);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837fb910
	if (cr6.eq) goto loc_837FB910;
	// lfs f0,68(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f13,64(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,-23848(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23848);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x837fb910
	if (!cr6.gt) goto loc_837FB910;
	// stb r21,1764(r24)
	PPC_STORE_U8(ctx.r24.u32 + 1764, ctx.r21.u8);
loc_837FB910:
	// lbz r11,1764(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 1764);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837fbc34
	if (cr6.eq) goto loc_837FBC34;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x837fbc34
	if (cr6.eq) goto loc_837FBC34;
	// lwz r11,1836(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1836);
	// lfs f0,64(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,5408(r24)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r24.u32 + 5408, temp.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bgt cr6,0x837fbc38
	if (cr6.gt) goto loc_837FBC38;
	// stfs f0,5404(r24)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r24.u32 + 5404, temp.u32);
	// lwz r11,252(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 252);
	// stw r11,1836(r24)
	PPC_STORE_U32(ctx.r24.u32 + 1836, ctx.r11.u32);
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// addi r26,r11,5488
	ctx.r26.s64 = ctx.r11.s64 + 5488;
	// lwz r10,256(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 256);
	// stw r10,1840(r24)
	PPC_STORE_U32(ctx.r24.u32 + 1840, ctx.r10.u32);
	// lfs f13,260(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 260);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,1844(r24)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r24.u32 + 1844, temp.u32);
	// lfs f12,264(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 264);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,1848(r24)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r24.u32 + 1848, temp.u32);
	// lfs f11,268(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 268);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,1852(r24)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r24.u32 + 1852, temp.u32);
	// lfs f0,272(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 272);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// lfs f13,5488(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5488);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,1856(r24)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r24.u32 + 1856, temp.u32);
	// bge cr6,0x837fb988
	if (!cr6.lt) goto loc_837FB988;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// b 0x837fb994
	goto loc_837FB994;
loc_837FB988:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x837fb998
	if (cr6.lt) goto loc_837FB998;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_837FB994:
	// stfs f0,1856(r24)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r24.u32 + 1856, temp.u32);
loc_837FB998:
	// lbz r11,276(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 276);
	// addi r28,r25,40
	ctx.r28.s64 = ctx.r25.s64 + 40;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// addi r29,r24,1868
	ctx.r29.s64 = ctx.r24.s64 + 1868;
	// stb r11,1860(r24)
	PPC_STORE_U8(ctx.r24.u32 + 1860, ctx.r11.u8);
	// lwz r10,36(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// li r27,28
	ctx.r27.s64 = 28;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// stw r9,1864(r24)
	PPC_STORE_U32(ctx.r24.u32 + 1864, ctx.r9.u32);
loc_837FB9C0:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r27
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	// cmplw cr6,r30,r8
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, xer);
	// bge cr6,0x837fb9f4
	if (!cr6.lt) goto loc_837FB9F4;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x837fb9ec
	if (cr6.lt) goto loc_837FB9EC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_837FB9EC:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// b 0x837fb9f8
	goto loc_837FB9F8;
loc_837FB9F4:
	// addi r5,r26,10
	ctx.r5.s64 = ctx.r26.s64 + 10;
loc_837FB9F8:
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ce7d8
	ctx.lr = 0x837FBA04;
	sub_831CE7D8(ctx, base);
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,64
	ctx.r29.s64 = ctx.r29.s64 + 64;
	// cmpwi cr6,r31,224
	cr6.compare<int32_t>(ctx.r31.s32, 224, xer);
	// blt cr6,0x837fb9c0
	if (cr6.lt) goto loc_837FB9C0;
	// addi r27,r25,504
	ctx.r27.s64 = ctx.r25.s64 + 504;
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// addi r31,r24,2480
	ctx.r31.s64 = ctx.r24.s64 + 2480;
	// li r25,9
	ctx.r25.s64 = 9;
loc_837FBA2C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r26,r8
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r8.u32, xer);
	// bge cr6,0x837fbab0
	if (!cr6.lt) goto loc_837FBAB0;
	// lwzx r30,r28,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x837fbab0
	if (cr6.eq) goto loc_837FBAB0;
	// stb r21,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r21.u8);
	// addi r4,r30,832
	ctx.r4.s64 = ctx.r30.s64 + 832;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,100
	ctx.r5.s64 = 100;
	// bl 0x831ce980
	ctx.lr = 0x837FBA64;
	sub_831CE980(ctx, base);
	// addi r3,r31,-100
	ctx.r3.s64 = ctx.r31.s64 + -100;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,100
	ctx.r5.s64 = 100;
	// bl 0x831ce980
	ctx.lr = 0x837FBA74;
	sub_831CE980(ctx, base);
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lbz r9,829(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 829);
	// stb r9,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r9.u8);
	// lbz r8,940(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 940);
	// stb r8,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r8.u8);
	// lwz r7,68(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// lbz r6,83(r7)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + 83);
	// stb r6,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r6.u8);
	// lbz r5,1056(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1056);
	// stb r5,7(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7, ctx.r5.u8);
	// lbz r4,1188(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1188);
	// stb r4,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r4.u8);
	// b 0x837fbab4
	goto loc_837FBAB4;
loc_837FBAB0:
	// stb r22,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r22.u8);
loc_837FBAB4:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r29,r26,2
	ctx.r29.s64 = ctx.r26.s64 + 2;
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r9,r29,-1
	ctx.r9.s64 = ctx.r29.s64 + -1;
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r7,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// bge cr6,0x837fbb44
	if (!cr6.lt) goto loc_837FBB44;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x837fbb44
	if (cr6.eq) goto loc_837FBB44;
	// stb r21,121(r31)
	PPC_STORE_U8(ctx.r31.u32 + 121, ctx.r21.u8);
	// addi r4,r30,832
	ctx.r4.s64 = ctx.r30.s64 + 832;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,100
	ctx.r5.s64 = 100;
	// bl 0x831ce980
	ctx.lr = 0x837FBAF8;
	sub_831CE980(ctx, base);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,100
	ctx.r5.s64 = 100;
	// bl 0x831ce980
	ctx.lr = 0x837FBB08;
	sub_831CE980(ctx, base);
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r10.u32);
	// lbz r9,829(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 829);
	// stb r9,116(r31)
	PPC_STORE_U8(ctx.r31.u32 + 116, ctx.r9.u8);
	// lbz r8,940(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 940);
	// stb r8,117(r31)
	PPC_STORE_U8(ctx.r31.u32 + 117, ctx.r8.u8);
	// lwz r7,68(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// lbz r6,83(r7)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + 83);
	// stb r6,118(r31)
	PPC_STORE_U8(ctx.r31.u32 + 118, ctx.r6.u8);
	// lbz r5,1056(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1056);
	// stb r5,119(r31)
	PPC_STORE_U8(ctx.r31.u32 + 119, ctx.r5.u8);
	// lbz r4,1188(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1188);
	// stb r4,120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 120, ctx.r4.u8);
	// b 0x837fbb48
	goto loc_837FBB48;
loc_837FBB44:
	// stb r22,121(r31)
	PPC_STORE_U8(ctx.r31.u32 + 121, ctx.r22.u8);
loc_837FBB48:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r29,r8
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r8.u32, xer);
	// bge cr6,0x837fbbd0
	if (!cr6.lt) goto loc_837FBBD0;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x837fbbd0
	if (cr6.eq) goto loc_837FBBD0;
	// stb r21,233(r31)
	PPC_STORE_U8(ctx.r31.u32 + 233, ctx.r21.u8);
	// addi r4,r30,832
	ctx.r4.s64 = ctx.r30.s64 + 832;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,100
	ctx.r5.s64 = 100;
	// bl 0x831ce980
	ctx.lr = 0x837FBB84;
	sub_831CE980(ctx, base);
	// addi r3,r31,124
	ctx.r3.s64 = ctx.r31.s64 + 124;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,100
	ctx.r5.s64 = 100;
	// bl 0x831ce980
	ctx.lr = 0x837FBB94;
	sub_831CE980(ctx, base);
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r10.u32);
	// lbz r9,829(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 829);
	// stb r9,228(r31)
	PPC_STORE_U8(ctx.r31.u32 + 228, ctx.r9.u8);
	// lbz r8,940(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 940);
	// stb r8,229(r31)
	PPC_STORE_U8(ctx.r31.u32 + 229, ctx.r8.u8);
	// lwz r7,68(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// lbz r6,83(r7)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + 83);
	// stb r6,230(r31)
	PPC_STORE_U8(ctx.r31.u32 + 230, ctx.r6.u8);
	// lbz r5,1056(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1056);
	// stb r5,231(r31)
	PPC_STORE_U8(ctx.r31.u32 + 231, ctx.r5.u8);
	// lbz r4,1188(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1188);
	// stb r4,232(r31)
	PPC_STORE_U8(ctx.r31.u32 + 232, ctx.r4.u8);
	// b 0x837fbbd4
	goto loc_837FBBD4;
loc_837FBBD0:
	// stb r22,233(r31)
	PPC_STORE_U8(ctx.r31.u32 + 233, ctx.r22.u8);
loc_837FBBD4:
	// addic. r25,r25,-1
	xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	cr0.compare<int32_t>(ctx.r25.s32, 0, xer);
	// addi r26,r26,3
	ctx.r26.s64 = ctx.r26.s64 + 3;
	// addi r28,r28,12
	ctx.r28.s64 = ctx.r28.s64 + 12;
	// addi r31,r31,336
	ctx.r31.s64 = ctx.r31.s64 + 336;
	// bne 0x837fba2c
	if (!cr0.eq) goto loc_837FBA2C;
	// bl 0x8291ce48
	ctx.lr = 0x837FBBEC;
	sub_8291CE48(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837fbc38
	if (cr6.eq) goto loc_837FBC38;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// addi r30,r24,5412
	ctx.r30.s64 = ctx.r24.s64 + 5412;
loc_837FBC00:
	// bl 0x8291ce38
	ctx.lr = 0x837FBC04;
	sub_8291CE38(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8291ce60
	ctx.lr = 0x837FBC10;
	sub_8291CE60(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ce7d8
	ctx.lr = 0x837FBC20;
	sub_831CE7D8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,64
	ctx.r30.s64 = ctx.r30.s64 + 64;
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// blt cr6,0x837fbc00
	if (cr6.lt) goto loc_837FBC00;
	// b 0x837fbc38
	goto loc_837FBC38;
loc_837FBC34:
	// stw r22,1836(r24)
	PPC_STORE_U32(ctx.r24.u32 + 1836, ctx.r22.u32);
loc_837FBC38:
	// bl 0x831156e8
	ctx.lr = 0x837FBC3C;
	sub_831156E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837fbc58
	if (cr6.eq) goto loc_837FBC58;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837fbc58
	if (cr6.eq) goto loc_837FBC58;
	// lbz r10,11416(r23)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r23.u32 + 11416);
	// stb r10,631(r11)
	PPC_STORE_U8(ctx.r11.u32 + 631, ctx.r10.u8);
loc_837FBC58:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837FBC64"))) PPC_WEAK_FUNC(sub_837FBC64);
PPC_FUNC_IMPL(__imp__sub_837FBC64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837FBC68"))) PPC_WEAK_FUNC(sub_837FBC68);
PPC_FUNC_IMPL(__imp__sub_837FBC68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837FBC70;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x837fade8
	ctx.lr = 0x837FBC7C;
	sub_837FADE8(ctx, base);
	// lbz r11,46(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 46);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837fbcb0
	if (cr6.eq) goto loc_837FBCB0;
	// bl 0x837da198
	ctx.lr = 0x837FBC90;
	sub_837DA198(ctx, base);
	// lwz r11,11364(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11364);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x837fbcb0
	if (!cr6.eq) goto loc_837FBCB0;
	// lbz r11,444(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 444);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837fbcb0
	if (cr6.eq) goto loc_837FBCB0;
	// bl 0x82925948
	ctx.lr = 0x837FBCAC;
	sub_82925948(ctx, base);
	// stb r28,444(r31)
	PPC_STORE_U8(ctx.r31.u32 + 444, ctx.r28.u8);
loc_837FBCB0:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// beq cr6,0x837fbd28
	if (cr6.eq) goto loc_837FBD28;
	// li r29,33
	ctx.r29.s64 = 33;
loc_837FBCC8:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837fbd10
	if (cr6.eq) goto loc_837FBD10;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595150
	ctx.lr = 0x837FBCE4;
	sub_82595150(ctx, base);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837fbd04
	if (cr6.eq) goto loc_837FBD04;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837FBD04;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_837FBD04:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595170
	ctx.lr = 0x837FBD0C;
	sub_82595170(ctx, base);
	// stw r28,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r28.u32);
loc_837FBD10:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8330ee50
	ctx.lr = 0x837FBD18;
	sub_8330EE50(ctx, base);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bne cr6,0x837fbcc8
	if (!cr6.eq) goto loc_837FBCC8;
loc_837FBD28:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82cd17d8
	ctx.lr = 0x837FBD38;
	sub_82CD17D8(ctx, base);
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r9,72(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stw r9,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r9.u32);
	// lwz r8,72(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stw r8,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r8.u32);
	// stw r28,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r28.u32);
	// lbz r7,45(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 45);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x837fbdb0
	if (cr6.eq) goto loc_837FBDB0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8379f080
	ctx.lr = 0x837FBD68;
	sub_8379F080(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837fbdb0
	if (cr6.eq) goto loc_837FBDB0;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595150
	ctx.lr = 0x837FBD84;
	sub_82595150(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837fbda4
	if (cr6.eq) goto loc_837FBDA4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837FBDA4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_837FBDA4:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595170
	ctx.lr = 0x837FBDAC;
	sub_82595170(ctx, base);
	// stw r28,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r28.u32);
loc_837FBDB0:
	// bl 0x837da198
	ctx.lr = 0x837FBDB4;
	sub_837DA198(ctx, base);
	// lwz r11,11364(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11364);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x837fbe24
	if (!cr6.eq) goto loc_837FBE24;
	// lwz r11,356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// blt cr6,0x837fbe24
	if (cr6.lt) goto loc_837FBE24;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// bge cr6,0x837fbe24
	if (!cr6.lt) goto loc_837FBE24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83800a28
	ctx.lr = 0x837FBDDC;
	sub_83800A28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83800a58
	ctx.lr = 0x837FBDE8;
	sub_83800A58(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83800a28
	ctx.lr = 0x837FBDF8;
	sub_83800A28(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x837FBE0C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,96(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837FBE24;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_837FBE24:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837FBE30"))) PPC_WEAK_FUNC(sub_837FBE30);
PPC_FUNC_IMPL(__imp__sub_837FBE30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x837FBE38;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,156(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x837fbf30
	if (cr6.eq) goto loc_837FBF30;
	// lwz r31,72(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x837fbf30
	if (cr6.eq) goto loc_837FBF30;
loc_837FBE70:
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r11,68(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 68);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837fbee0
	if (cr6.eq) goto loc_837FBEE0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// bgt cr6,0x837fbee0
	if (cr6.gt) goto loc_837FBEE0;
	// lis r12,-31872
	ctx.r12.s64 = -2088763392;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-16732
	ctx.r12.s64 = ctx.r12.s64 + -16732;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_837FBED0;
	case 1:
		goto loc_837FBED8;
	case 2:
		goto loc_837FBEE0;
	case 3:
		goto loc_837FBEE0;
	case 4:
		goto loc_837FBEE0;
	case 5:
		goto loc_837FBEE0;
	case 6:
		goto loc_837FBEE0;
	case 7:
		goto loc_837FBEE0;
	case 8:
		goto loc_837FBEE0;
	case 9:
		goto loc_837FBED0;
	case 10:
		goto loc_837FBED8;
	default:
		return;
	}
	// lwz r27,-16688(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16688);
	// lwz r27,-16680(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16680);
	// lwz r27,-16672(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16672);
	// lwz r27,-16672(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16672);
	// lwz r27,-16672(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16672);
	// lwz r27,-16672(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16672);
	// lwz r27,-16672(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16672);
	// lwz r27,-16672(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16672);
	// lwz r27,-16672(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16672);
	// lwz r27,-16688(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16688);
	// lwz r27,-16680(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16680);
loc_837FBED0:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x837fbee4
	goto loc_837FBEE4;
loc_837FBED8:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x837fbee4
	goto loc_837FBEE4;
loc_837FBEE0:
	// li r11,2
	ctx.r11.s64 = 2;
loc_837FBEE4:
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, xer);
	// bne cr6,0x837fbefc
	if (!cr6.eq) goto loc_837FBEFC;
	// lwz r11,68(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 68);
	// lbz r9,83(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 83);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x837fbf14
	if (!cr6.eq) goto loc_837FBF14;
loc_837FBEFC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8330ee50
	ctx.lr = 0x837FBF04;
	sub_8330EE50(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// bne cr6,0x837fbe70
	if (!cr6.eq) goto loc_837FBE70;
	// b 0x837fbf18
	goto loc_837FBF18;
loc_837FBF14:
	// lwz r29,12(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
loc_837FBF18:
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// beq cr6,0x837fbf30
	if (cr6.eq) goto loc_837FBF30;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x837fa518
	ctx.lr = 0x837FBF30;
	sub_837FA518(ctx, base);
loc_837FBF30:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837FBF38"))) PPC_WEAK_FUNC(sub_837FBF38);
PPC_FUNC_IMPL(__imp__sub_837FBF38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x837FBF40;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r10,156(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x837fc050
	if (cr6.eq) goto loc_837FC050;
	// bl 0x837da198
	ctx.lr = 0x837FBF64;
	sub_837DA198(ctx, base);
	// lwz r29,72(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r9,r29
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, xer);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// beq cr6,0x837fc050
	if (cr6.eq) goto loc_837FC050;
loc_837FBF80:
	// lwz r10,16(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r11,68(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837fbff0
	if (cr6.eq) goto loc_837FBFF0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// bgt cr6,0x837fbff0
	if (cr6.gt) goto loc_837FBFF0;
	// lis r12,-31872
	ctx.r12.s64 = -2088763392;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-16460
	ctx.r12.s64 = ctx.r12.s64 + -16460;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_837FBFE0;
	case 1:
		goto loc_837FBFE8;
	case 2:
		goto loc_837FBFF0;
	case 3:
		goto loc_837FBFF0;
	case 4:
		goto loc_837FBFF0;
	case 5:
		goto loc_837FBFF0;
	case 6:
		goto loc_837FBFF0;
	case 7:
		goto loc_837FBFF0;
	case 8:
		goto loc_837FBFF0;
	case 9:
		goto loc_837FBFE0;
	case 10:
		goto loc_837FBFE8;
	default:
		return;
	}
	// lwz r27,-16416(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16416);
	// lwz r27,-16408(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16408);
	// lwz r27,-16400(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16400);
	// lwz r27,-16400(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16400);
	// lwz r27,-16400(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16400);
	// lwz r27,-16400(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16400);
	// lwz r27,-16400(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16400);
	// lwz r27,-16400(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16400);
	// lwz r27,-16400(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16400);
	// lwz r27,-16416(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16416);
	// lwz r27,-16408(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16408);
loc_837FBFE0:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x837fbff4
	goto loc_837FBFF4;
loc_837FBFE8:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x837fbff4
	goto loc_837FBFF4;
loc_837FBFF0:
	// li r11,2
	ctx.r11.s64 = 2;
loc_837FBFF4:
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, xer);
	// bne cr6,0x837fc01c
	if (!cr6.eq) goto loc_837FC01C;
	// lbz r11,829(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 829);
	// mulli r10,r30,5532
	ctx.r10.s64 = ctx.r30.s64 * 5532;
	// mulli r11,r11,172
	ctx.r11.s64 = ctx.r11.s64 * 172;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r8,200(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 200);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x837fc034
	if (!cr6.eq) goto loc_837FC034;
loc_837FC01C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8330ee50
	ctx.lr = 0x837FC024;
	sub_8330EE50(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r9,r29
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, xer);
	// bne cr6,0x837fbf80
	if (!cr6.eq) goto loc_837FBF80;
	// b 0x837fc038
	goto loc_837FC038;
loc_837FC034:
	// lwz r27,12(r9)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
loc_837FC038:
	// cmplw cr6,r9,r29
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, xer);
	// beq cr6,0x837fc050
	if (cr6.eq) goto loc_837FC050;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x837fa518
	ctx.lr = 0x837FC050;
	sub_837FA518(ctx, base);
loc_837FC050:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837FC058"))) PPC_WEAK_FUNC(sub_837FC058);
PPC_FUNC_IMPL(__imp__sub_837FC058) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x837FC060;
	__savegprlr_26(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r10,156(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x837fc190
	if (cr6.eq) goto loc_837FC190;
	// bl 0x837da198
	ctx.lr = 0x837FC080;
	sub_837DA198(ctx, base);
	// lwz r30,72(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// beq cr6,0x837fc190
	if (cr6.eq) goto loc_837FC190;
loc_837FC09C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837fc15c
	if (cr6.eq) goto loc_837FC15C;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r10,10
	cr6.compare<uint32_t>(ctx.r10.u32, 10, xer);
	// bgt cr6,0x837fc15c
	if (cr6.gt) goto loc_837FC15C;
	// lis r12,-31872
	ctx.r12.s64 = -2088763392;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-16176
	ctx.r12.s64 = ctx.r12.s64 + -16176;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_837FC0FC;
	case 1:
		goto loc_837FC0FC;
	case 2:
		goto loc_837FC15C;
	case 3:
		goto loc_837FC15C;
	case 4:
		goto loc_837FC15C;
	case 5:
		goto loc_837FC15C;
	case 6:
		goto loc_837FC15C;
	case 7:
		goto loc_837FC15C;
	case 8:
		goto loc_837FC15C;
	case 9:
		goto loc_837FC0FC;
	case 10:
		goto loc_837FC0FC;
	default:
		return;
	}
	// lwz r27,-16132(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16132);
	// lwz r27,-16132(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16132);
	// lwz r27,-16036(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16036);
	// lwz r27,-16036(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16036);
	// lwz r27,-16036(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16036);
	// lwz r27,-16036(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16036);
	// lwz r27,-16036(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16036);
	// lwz r27,-16036(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16036);
	// lwz r27,-16036(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16036);
	// lwz r27,-16132(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16132);
	// lwz r27,-16132(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16132);
loc_837FC0FC:
	// addi r4,r11,832
	ctx.r4.s64 = ctx.r11.s64 + 832;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,100
	ctx.r5.s64 = 100;
	// bl 0x831ce980
	ctx.lr = 0x837FC10C;
	sub_831CE980(ctx, base);
	// lwz r11,11296(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11296);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837fc128
	if (!cr6.eq) goto loc_837FC128;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x837fc150
	goto loc_837FC150;
loc_837FC128:
	// lhz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// lhz r9,11292(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + 11292);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x837fc148
	if (!cr6.eq) goto loc_837FC148;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x837fc14c
	if (cr6.eq) goto loc_837FC14C;
loc_837FC148:
	// li r11,0
	ctx.r11.s64 = 0;
loc_837FC14C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_837FC150:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837fc174
	if (!cr6.eq) goto loc_837FC174;
loc_837FC15C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8330ee50
	ctx.lr = 0x837FC164;
	sub_8330EE50(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bne cr6,0x837fc09c
	if (!cr6.eq) goto loc_837FC09C;
	// b 0x837fc178
	goto loc_837FC178;
loc_837FC174:
	// lwz r27,12(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_837FC178:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// beq cr6,0x837fc190
	if (cr6.eq) goto loc_837FC190;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x837fa518
	ctx.lr = 0x837FC190;
	sub_837FA518(ctx, base);
loc_837FC190:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837FC198"))) PPC_WEAK_FUNC(sub_837FC198);
PPC_FUNC_IMPL(__imp__sub_837FC198) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x837FC1A0;
	__savegprlr_25(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r10,156(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x837fc274
	if (cr6.eq) goto loc_837FC274;
	// bl 0x837da198
	ctx.lr = 0x837FC1C0;
	sub_837DA198(ctx, base);
	// lwz r30,72(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 72);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// beq cr6,0x837fc274
	if (cr6.eq) goto loc_837FC274;
	// lwz r29,11304(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11304);
loc_837FC1E0:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,100
	ctx.r5.s64 = 100;
	// addi r4,r11,832
	ctx.r4.s64 = ctx.r11.s64 + 832;
	// bl 0x831ce980
	ctx.lr = 0x837FC1F4;
	sub_831CE980(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x837fc20c
	if (!cr6.eq) goto loc_837FC20C;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x837fc234
	goto loc_837FC234;
loc_837FC20C:
	// lhz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// lhz r10,11300(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 11300);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bne cr6,0x837fc22c
	if (!cr6.eq) goto loc_837FC22C;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x837fc230
	if (cr6.eq) goto loc_837FC230;
loc_837FC22C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_837FC230:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_837FC234:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837fc258
	if (!cr6.eq) goto loc_837FC258;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8330ee50
	ctx.lr = 0x837FC248;
	sub_8330EE50(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bne cr6,0x837fc1e0
	if (!cr6.eq) goto loc_837FC1E0;
	// b 0x837fc25c
	goto loc_837FC25C;
loc_837FC258:
	// lwz r26,12(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_837FC25C:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// beq cr6,0x837fc274
	if (cr6.eq) goto loc_837FC274;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x837fa518
	ctx.lr = 0x837FC274;
	sub_837FA518(ctx, base);
loc_837FC274:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837FC27C"))) PPC_WEAK_FUNC(sub_837FC27C);
PPC_FUNC_IMPL(__imp__sub_837FC27C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837FC280"))) PPC_WEAK_FUNC(sub_837FC280);
PPC_FUNC_IMPL(__imp__sub_837FC280) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x837FC288;
	__savegprlr_25(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r10,156(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x837fc394
	if (cr6.eq) goto loc_837FC394;
	// bl 0x837da198
	ctx.lr = 0x837FC2A8;
	sub_837DA198(ctx, base);
	// lwz r10,11356(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11356);
	// lbz r11,11360(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11360);
	// li r27,0
	ctx.r27.s64 = 0;
	// mulli r10,r10,5532
	ctx.r10.s64 = ctx.r10.s64 * 5532;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// addi r10,r10,196
	ctx.r10.s64 = ctx.r10.s64 + 196;
	// bge cr6,0x837fc2d8
	if (!cr6.lt) goto loc_837FC2D8;
	// mulli r11,r11,172
	ctx.r11.s64 = ctx.r11.s64 * 172;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x837fc2dc
	goto loc_837FC2DC;
loc_837FC2D8:
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
loc_837FC2DC:
	// lwz r30,72(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 72);
	// ld r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 4);
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// beq cr6,0x837fc394
	if (cr6.eq) goto loc_837FC394;
	// lwz r29,92(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lhz r28,88(r1)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
loc_837FC300:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,100
	ctx.r5.s64 = 100;
	// addi r4,r11,832
	ctx.r4.s64 = ctx.r11.s64 + 832;
	// bl 0x831ce980
	ctx.lr = 0x837FC314;
	sub_831CE980(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x837fc32c
	if (!cr6.eq) goto loc_837FC32C;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x837fc354
	goto loc_837FC354;
loc_837FC32C:
	// lhz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// clrlwi r10,r28,16
	ctx.r10.u64 = ctx.r28.u32 & 0xFFFF;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bne cr6,0x837fc34c
	if (!cr6.eq) goto loc_837FC34C;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x837fc350
	if (cr6.eq) goto loc_837FC350;
loc_837FC34C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_837FC350:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_837FC354:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837fc378
	if (!cr6.eq) goto loc_837FC378;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8330ee50
	ctx.lr = 0x837FC368;
	sub_8330EE50(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bne cr6,0x837fc300
	if (!cr6.eq) goto loc_837FC300;
	// b 0x837fc37c
	goto loc_837FC37C;
loc_837FC378:
	// lwz r27,12(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_837FC37C:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// beq cr6,0x837fc394
	if (cr6.eq) goto loc_837FC394;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x837fa518
	ctx.lr = 0x837FC394;
	sub_837FA518(ctx, base);
loc_837FC394:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837FC39C"))) PPC_WEAK_FUNC(sub_837FC39C);
PPC_FUNC_IMPL(__imp__sub_837FC39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837FC3A0"))) PPC_WEAK_FUNC(sub_837FC3A0);
PPC_FUNC_IMPL(__imp__sub_837FC3A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837FC3A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r4,33
	ctx.r30.s64 = ctx.r4.s64 + 33;
loc_837FC3B8:
	// lbz r11,-1(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + -1);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837fc4d8
	if (cr6.eq) goto loc_837FC4D8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgt cr6,0x837fc4c8
	if (cr6.gt) goto loc_837FC4C8;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x837fc408
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837FC408;
	// bdzf 4*cr6+eq,0x837fc448
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837FC448;
	// bdzf 4*cr6+eq,0x837fc45c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837FC45C;
	// bdzf 4*cr6+eq,0x837fc49c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837FC49C;
	// bdzf 4*cr6+eq,0x837fc4ac
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837FC4AC;
	// bne cr6,0x837fc4bc
	if (!cr6.eq) goto loc_837FC4BC;
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// lwz r5,36(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fbe30
	ctx.lr = 0x837FC404;
	sub_837FBE30(ctx, base);
	// b 0x837fc4c8
	goto loc_837FC4C8;
loc_837FC408:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x837fc430
	if (cr6.eq) goto loc_837FC430;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x837fc430
	if (cr6.eq) goto loc_837FC430;
	// li r5,0
	ctx.r5.s64 = 0;
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fbe30
	ctx.lr = 0x837FC42C;
	sub_837FBE30(ctx, base);
	// b 0x837fc4c8
	goto loc_837FC4C8;
loc_837FC430:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fbe30
	ctx.lr = 0x837FC444;
	sub_837FBE30(ctx, base);
	// b 0x837fc4c8
	goto loc_837FC4C8;
loc_837FC448:
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// lwz r5,36(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fbf38
	ctx.lr = 0x837FC458;
	sub_837FBF38(ctx, base);
	// b 0x837fc4c8
	goto loc_837FC4C8;
loc_837FC45C:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x837fc484
	if (cr6.eq) goto loc_837FC484;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x837fc484
	if (cr6.eq) goto loc_837FC484;
	// li r5,0
	ctx.r5.s64 = 0;
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fbf38
	ctx.lr = 0x837FC480;
	sub_837FBF38(ctx, base);
	// b 0x837fc4c8
	goto loc_837FC4C8;
loc_837FC484:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fbf38
	ctx.lr = 0x837FC498;
	sub_837FBF38(ctx, base);
	// b 0x837fc4c8
	goto loc_837FC4C8;
loc_837FC49C:
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fc058
	ctx.lr = 0x837FC4A8;
	sub_837FC058(ctx, base);
	// b 0x837fc4c8
	goto loc_837FC4C8;
loc_837FC4AC:
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fc198
	ctx.lr = 0x837FC4B8;
	sub_837FC198(ctx, base);
	// b 0x837fc4c8
	goto loc_837FC4C8;
loc_837FC4BC:
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fc280
	ctx.lr = 0x837FC4C8;
	sub_837FC280(ctx, base);
loc_837FC4C8:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// cmplwi cr6,r29,10
	cr6.compare<uint32_t>(ctx.r29.u32, 10, xer);
	// blt cr6,0x837fc3b8
	if (cr6.lt) goto loc_837FC3B8;
loc_837FC4D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837FC4E0"))) PPC_WEAK_FUNC(sub_837FC4E0);
PPC_FUNC_IMPL(__imp__sub_837FC4E0) {
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
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,1
	ctx.r31.s64 = 1;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x837fc544
	if (cr6.eq) goto loc_837FC544;
loc_837FC510:
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837fc520
	if (cr6.eq) goto loc_837FC520;
	// bl 0x83802918
	ctx.lr = 0x837FC520;
	sub_83802918(ctx, base);
loc_837FC520:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// and r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 & ctx.r10.u64;
	// bl 0x8330ee50
	ctx.lr = 0x837FC534;
	sub_8330EE50(ctx, base);
	// lwz r9,72(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x837fc510
	if (!cr6.eq) goto loc_837FC510;
loc_837FC544:
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

__attribute__((alias("__imp__sub_837FC560"))) PPC_WEAK_FUNC(sub_837FC560);
PPC_FUNC_IMPL(__imp__sub_837FC560) {
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
	// lwz r31,72(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x837fc598
	if (cr6.eq) goto loc_837FC598;
loc_837FC584:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8330ee50
	ctx.lr = 0x837FC58C;
	sub_8330EE50(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// bne cr6,0x837fc584
	if (!cr6.eq) goto loc_837FC584;
loc_837FC598:
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

__attribute__((alias("__imp__sub_837FC5AC"))) PPC_WEAK_FUNC(sub_837FC5AC);
PPC_FUNC_IMPL(__imp__sub_837FC5AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837FC5B0"))) PPC_WEAK_FUNC(sub_837FC5B0);
PPC_FUNC_IMPL(__imp__sub_837FC5B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837FC5B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x837da198
	ctx.lr = 0x837FC5C4;
	sub_837DA198(ctx, base);
	// lbz r11,11370(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11370);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837fc6f4
	if (cr6.eq) goto loc_837FC6F4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,456(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 456);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x837fc5f0
	if (!cr6.eq) goto loc_837FC5F0;
	// lfs f12,460(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 460);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// beq cr6,0x837fc6f4
	if (cr6.eq) goto loc_837FC6F4;
loc_837FC5F0:
	// lfs f12,460(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 460);
	ctx.f12.f64 = double(temp.f32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bne cr6,0x837fc610
	if (!cr6.eq) goto loc_837FC610;
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
loc_837FC610:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bne cr6,0x837fc61c
	if (!cr6.eq) goto loc_837FC61C;
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
loc_837FC61C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r10,72(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// stfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lfs f13,-25156(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -25156);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
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
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// lwz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x837fc6f4
	if (cr6.eq) goto loc_837FC6F4;
loc_837FC678:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837fc6d0
	if (cr6.eq) goto loc_837FC6D0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x83802228
	ctx.lr = 0x837FC68C;
	sub_83802228(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837fc6d0
	if (cr6.eq) goto loc_837FC6D0;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// srawi r9,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r6,r7,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r7.s64;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r5,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x838021e8
	ctx.lr = 0x837FC6C8;
	sub_838021E8(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x83804c80
	ctx.lr = 0x837FC6D0;
	sub_83804C80(ctx, base);
loc_837FC6D0:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x8330ee50
	ctx.lr = 0x837FC6E4;
	sub_8330EE50(ctx, base);
	// lwz r10,72(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x837fc678
	if (!cr6.eq) goto loc_837FC678;
loc_837FC6F4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837FC6FC"))) PPC_WEAK_FUNC(sub_837FC6FC);
PPC_FUNC_IMPL(__imp__sub_837FC6FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837FC700"))) PPC_WEAK_FUNC(sub_837FC700);
PPC_FUNC_IMPL(__imp__sub_837FC700) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837FC708;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x837fc77c
	if (cr6.eq) goto loc_837FC77C;
loc_837FC72C:
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837fc764
	if (cr6.eq) goto loc_837FC764;
	// lbz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 84);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837fc750
	if (cr6.eq) goto loc_837FC750;
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837fc764
	if (!cr6.eq) goto loc_837FC764;
loc_837FC750:
	// lwz r3,68(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837fc764
	if (cr6.eq) goto loc_837FC764;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x837b1748
	ctx.lr = 0x837FC764;
	sub_837B1748(ctx, base);
loc_837FC764:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8330ee50
	ctx.lr = 0x837FC76C;
	sub_8330EE50(ctx, base);
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x837fc72c
	if (!cr6.eq) goto loc_837FC72C;
loc_837FC77C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837FC784"))) PPC_WEAK_FUNC(sub_837FC784);
PPC_FUNC_IMPL(__imp__sub_837FC784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837FC788"))) PPC_WEAK_FUNC(sub_837FC788);
PPC_FUNC_IMPL(__imp__sub_837FC788) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x837FC790;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r31,r3,252
	ctx.r31.s64 = ctx.r3.s64 + 252;
	// li r30,7
	ctx.r30.s64 = 7;
	// li r26,2
	ctx.r26.s64 = 2;
	// li r28,15
	ctx.r28.s64 = 15;
	// li r29,0
	ctx.r29.s64 = 0;
loc_837FC7AC:
	// addi r31,r31,-28
	ctx.r31.s64 = ctx.r31.s64 + -28;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837fc7cc
	if (cr6.lt) goto loc_837FC7CC;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// bl 0x825952b8
	ctx.lr = 0x837FC7CC;
	sub_825952B8(ctx, base);
loc_837FC7CC:
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// stb r29,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r29.u8);
	// bge 0x837fc7ac
	if (!cr0.lt) goto loc_837FC7AC;
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837fc7fc
	if (cr6.lt) goto loc_837FC7FC;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x837FC7FC;
	sub_825952B8(ctx, base);
loc_837FC7FC:
	// stw r28,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r28.u32);
	// stw r29,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r29.u32);
	// stb r29,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r29.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837FC810"))) PPC_WEAK_FUNC(sub_837FC810);
PPC_FUNC_IMPL(__imp__sub_837FC810) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837FC818;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r28,r11,-6328
	ctx.r28.s64 = ctx.r11.s64 + -6328;
	// lwz r30,4(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// beq cr6,0x837fc888
	if (cr6.eq) goto loc_837FC888;
loc_837FC83C:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837fc874
	if (cr6.eq) goto loc_837FC874;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837FC858;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x837f48f0
	ctx.lr = 0x837FC860;
	sub_837F48F0(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// lwz r30,4(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// subfic r8,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r9.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r29,r6,r29
	ctx.r29.u64 = ctx.r6.u64 & ctx.r29.u64;
loc_837FC874:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8330ee50
	ctx.lr = 0x837FC87C;
	sub_8330EE50(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bne cr6,0x837fc83c
	if (!cr6.eq) goto loc_837FC83C;
loc_837FC888:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837FC894"))) PPC_WEAK_FUNC(sub_837FC894);
PPC_FUNC_IMPL(__imp__sub_837FC894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837FC898"))) PPC_WEAK_FUNC(sub_837FC898);
PPC_FUNC_IMPL(__imp__sub_837FC898) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x837FC8A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r31,r11,-6328
	ctx.r31.s64 = ctx.r11.s64 + -6328;
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r29,r30
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, xer);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// beq cr6,0x837fc928
	if (cr6.eq) goto loc_837FC928;
	// li r27,33
	ctx.r27.s64 = 33;
loc_837FC8C8:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837fc914
	if (cr6.eq) goto loc_837FC914;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595150
	ctx.lr = 0x837FC8E4;
	sub_82595150(ctx, base);
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837fc904
	if (cr6.eq) goto loc_837FC904;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837FC904;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_837FC904:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595170
	ctx.lr = 0x837FC90C;
	sub_82595170(ctx, base);
	// stw r28,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r28.u32);
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_837FC914:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8330ee50
	ctx.lr = 0x837FC91C;
	sub_8330EE50(ctx, base);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r29,r30
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, xer);
	// bne cr6,0x837fc8c8
	if (!cr6.eq) goto loc_837FC8C8;
loc_837FC928:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82cd17d8
	ctx.lr = 0x837FC934;
	sub_82CD17D8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837FC95C"))) PPC_WEAK_FUNC(sub_837FC95C);
PPC_FUNC_IMPL(__imp__sub_837FC95C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837FC960"))) PPC_WEAK_FUNC(sub_837FC960);
PPC_FUNC_IMPL(__imp__sub_837FC960) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x837FC994;
	sub_82595718(ctx, base);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// addic. r11,r3,12
	xer.ca = ctx.r3.u32 > 4294967283;
	ctx.r11.s64 = ctx.r3.s64 + 12;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// stb r10,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r10.u8);
	// stb r10,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r10.u8);
	// beq 0x837fc9d0
	if (cr0.eq) goto loc_837FC9D0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_837FC9D0:
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

__attribute__((alias("__imp__sub_837FC9E8"))) PPC_WEAK_FUNC(sub_837FC9E8);
PPC_FUNC_IMPL(__imp__sub_837FC9E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837FC9F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r3,376
	ctx.r31.s64 = ctx.r3.s64 + 376;
	// stw r11,400(r3)
	PPC_STORE_U32(ctx.r3.u32 + 400, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,404(r3)
	PPC_STORE_U32(ctx.r3.u32 + 404, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e62630
	ctx.lr = 0x837FCA10;
	sub_82E62630(ctx, base);
	// addi r29,r30,388
	ctx.r29.s64 = ctx.r30.s64 + 388;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e62630
	ctx.lr = 0x837FCA1C;
	sub_82E62630(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,376(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 376);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x837FCA34;
	sub_8378D870(ctx, base);
	// li r10,8
	ctx.r10.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,376(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 376);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x837FCA4C;
	sub_8378D870(ctx, base);
	// li r9,4
	ctx.r9.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,376(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 376);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x837FCA64;
	sub_8378D870(ctx, base);
	// li r8,2
	ctx.r8.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,376(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 376);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x837FCA7C;
	sub_8378D870(ctx, base);
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,376(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 376);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8378d870
	ctx.lr = 0x837FCA94;
	sub_8378D870(ctx, base);
	// lbz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 52);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x837fcaf0
	if (cr6.eq) goto loc_837FCAF0;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// li r11,32
	ctx.r11.s64 = 32;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x837fcae4
	if (cr6.eq) goto loc_837FCAE4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8378d870
	ctx.lr = 0x837FCAC0;
	sub_8378D870(ctx, base);
	// li r10,64
	ctx.r10.s64 = 64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8378d870
	ctx.lr = 0x837FCAD8;
	sub_8378D870(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x837fcb24
	goto loc_837FCB24;
loc_837FCAE4:
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x837fcb00
	goto loc_837FCB00;
loc_837FCAF0:
	// li r11,32
	ctx.r11.s64 = 32;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_837FCB00:
	// bl 0x8378d870
	ctx.lr = 0x837FCB04;
	sub_8378D870(ctx, base);
	// li r10,64
	ctx.r10.s64 = 64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8378d870
	ctx.lr = 0x837FCB1C;
	sub_8378D870(ctx, base);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_837FCB24:
	// li r9,128
	ctx.r9.s64 = 128;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x8378d870
	ctx.lr = 0x837FCB34;
	sub_8378D870(ctx, base);
	// bl 0x8379c158
	ctx.lr = 0x837FCB38;
	sub_8379C158(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837FCB40"))) PPC_WEAK_FUNC(sub_837FCB40);
PPC_FUNC_IMPL(__imp__sub_837FCB40) {
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
	// lwz r11,400(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 400);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837fcb6c
	if (!cr6.eq) goto loc_837FCB6C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x837fcd98
	goto loc_837FCD98;
loc_837FCB6C:
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837fcb8c
	if (cr6.eq) goto loc_837FCB8C;
	// lwz r10,404(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	// rlwinm r9,r11,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// ori r8,r10,1
	ctx.r8.u64 = ctx.r10.u64 | 1;
	// stw r9,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r9.u32);
	// stw r8,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r8.u32);
loc_837FCB8C:
	// lwz r11,400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837fcbc8
	if (cr6.eq) goto loc_837FCBC8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fa928
	ctx.lr = 0x837FCBA4;
	sub_837FA928(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837fcbc8
	if (cr6.eq) goto loc_837FCBC8;
	// lwz r11,400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// lwz r10,404(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	// rlwinm r9,r11,0,31,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// ori r8,r10,2
	ctx.r8.u64 = ctx.r10.u64 | 2;
	// stw r9,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r9.u32);
	// stw r8,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r8.u32);
loc_837FCBC8:
	// lwz r11,400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837fcc04
	if (cr6.eq) goto loc_837FCC04;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fa1d0
	ctx.lr = 0x837FCBE0;
	sub_837FA1D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837fcc04
	if (cr6.eq) goto loc_837FCC04;
	// lwz r11,400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// lwz r10,404(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	// rlwinm r9,r11,0,30,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// ori r8,r10,4
	ctx.r8.u64 = ctx.r10.u64 | 4;
	// stw r9,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r9.u32);
	// stw r8,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r8.u32);
loc_837FCC04:
	// lwz r11,400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837fcc28
	if (cr6.eq) goto loc_837FCC28;
	// lwz r10,404(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	// rlwinm r9,r11,0,29,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// ori r8,r10,8
	ctx.r8.u64 = ctx.r10.u64 | 8;
	// stw r9,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r9.u32);
	// stw r8,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r8.u32);
loc_837FCC28:
	// lwz r11,400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837fcc64
	if (cr6.eq) goto loc_837FCC64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fa6c0
	ctx.lr = 0x837FCC40;
	sub_837FA6C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837fcc64
	if (cr6.eq) goto loc_837FCC64;
	// lwz r11,400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// lwz r10,404(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	// rlwinm r9,r11,0,28,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// ori r8,r10,16
	ctx.r8.u64 = ctx.r10.u64 | 16;
	// stw r9,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r9.u32);
	// stw r8,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r8.u32);
loc_837FCC64:
	// lwz r11,400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837fccc4
	if (cr6.eq) goto loc_837FCCC4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fc4e0
	ctx.lr = 0x837FCC7C;
	sub_837FC4E0(ctx, base);
	// clrlwi r30,r3,24
	ctx.r30.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x837fccc4
	if (cr6.eq) goto loc_837FCCC4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fc560
	ctx.lr = 0x837FCC90;
	sub_837FC560(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837FCCA4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x837fccc4
	if (cr6.eq) goto loc_837FCCC4;
	// lwz r11,400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// lwz r10,404(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	// rlwinm r9,r11,0,27,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// ori r8,r10,32
	ctx.r8.u64 = ctx.r10.u64 | 32;
	// stw r9,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r9.u32);
	// stw r8,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r8.u32);
loc_837FCCC4:
	// lwz r11,400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837fcd24
	if (cr6.eq) goto loc_837FCD24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fc4e0
	ctx.lr = 0x837FCCDC;
	sub_837FC4E0(ctx, base);
	// clrlwi r30,r3,24
	ctx.r30.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x837fcd24
	if (cr6.eq) goto loc_837FCD24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fc560
	ctx.lr = 0x837FCCF0;
	sub_837FC560(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837FCD04;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x837fcd24
	if (cr6.eq) goto loc_837FCD24;
	// lwz r11,400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// lwz r10,404(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	// rlwinm r9,r11,0,26,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// ori r8,r10,64
	ctx.r8.u64 = ctx.r10.u64 | 64;
	// stw r9,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r9.u32);
	// stw r8,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r8.u32);
loc_837FCD24:
	// lwz r11,400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837fcd8c
	if (cr6.eq) goto loc_837FCD8C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fc4e0
	ctx.lr = 0x837FCD3C;
	sub_837FC4E0(ctx, base);
	// clrlwi r30,r3,24
	ctx.r30.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x837fcd8c
	if (cr6.eq) goto loc_837FCD8C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fc560
	ctx.lr = 0x837FCD50;
	sub_837FC560(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837FCD64;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fc5b0
	ctx.lr = 0x837FCD6C;
	sub_837FC5B0(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x837fcd8c
	if (cr6.eq) goto loc_837FCD8C;
	// lwz r11,400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// lwz r10,404(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	// rlwinm r9,r11,0,25,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// ori r8,r10,128
	ctx.r8.u64 = ctx.r10.u64 | 128;
	// stw r9,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r9.u32);
	// stw r8,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r8.u32);
loc_837FCD8C:
	// lwz r11,400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_837FCD98:
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

__attribute__((alias("__imp__sub_837FCDB0"))) PPC_WEAK_FUNC(sub_837FCDB0);
PPC_FUNC_IMPL(__imp__sub_837FCDB0) {
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
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// addi r31,r11,-6328
	ctx.r31.s64 = ctx.r11.s64 + -6328;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x833ecc50
	ctx.lr = 0x837FCDE0;
	sub_833ECC50(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// beq cr6,0x837fce58
	if (cr6.eq) goto loc_837FCE58;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837fce40
	if (cr6.eq) goto loc_837FCE40;
	// li r11,33
	ctx.r11.s64 = 33;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595150
	ctx.lr = 0x837FCE10;
	sub_82595150(ctx, base);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837fce30
	if (cr6.eq) goto loc_837FCE30;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837FCE30;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_837FCE30:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595170
	ctx.lr = 0x837FCE38;
	sub_82595170(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
loc_837FCE40:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d0e3c8
	ctx.lr = 0x837FCE50;
	sub_82D0E3C8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x837fce5c
	goto loc_837FCE5C;
loc_837FCE58:
	// li r3,0
	ctx.r3.s64 = 0;
loc_837FCE5C:
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

__attribute__((alias("__imp__sub_837FCE74"))) PPC_WEAK_FUNC(sub_837FCE74);
PPC_FUNC_IMPL(__imp__sub_837FCE74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837FCE78"))) PPC_WEAK_FUNC(sub_837FCE78);
PPC_FUNC_IMPL(__imp__sub_837FCE78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// addi r31,r11,-6328
	ctx.r31.s64 = ctx.r11.s64 + -6328;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x833ecc50
	ctx.lr = 0x837FCEA4;
	sub_833ECC50(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r3,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
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

__attribute__((alias("__imp__sub_837FCECC"))) PPC_WEAK_FUNC(sub_837FCECC);
PPC_FUNC_IMPL(__imp__sub_837FCECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837FCED0"))) PPC_WEAK_FUNC(sub_837FCED0);
PPC_FUNC_IMPL(__imp__sub_837FCED0) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// beq cr6,0x837fcf28
	if (cr6.eq) goto loc_837FCF28;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x825952b8
	ctx.lr = 0x837FCF1C;
	sub_825952B8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
loc_837FCF28:
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

__attribute__((alias("__imp__sub_837FCF3C"))) PPC_WEAK_FUNC(sub_837FCF3C);
PPC_FUNC_IMPL(__imp__sub_837FCF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837FCF40"))) PPC_WEAK_FUNC(sub_837FCF40);
PPC_FUNC_IMPL(__imp__sub_837FCF40) {
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
	// lwz r11,420(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 420);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837fcfb4
	if (cr6.eq) goto loc_837FCFB4;
	// lwz r11,256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r31,r10,-6328
	ctx.r31.s64 = ctx.r10.s64 + -6328;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x833ecc50
	ctx.lr = 0x837FCF7C;
	sub_833ECC50(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addic r7,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// subfe r11,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r7.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x837fd024
	if (cr6.eq) goto loc_837FD024;
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
loc_837FCFB4:
	// lwz r11,184(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837fcfec
	if (cr6.eq) goto loc_837FCFEC;
	// lwz r3,256(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	// bl 0x837fce78
	ctx.lr = 0x837FCFC8;
	sub_837FCE78(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837fd024
	if (cr6.eq) goto loc_837FD024;
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
loc_837FCFEC:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r10,348
	ctx.r10.s64 = 348;
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw. r7,r8,r10
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x837fd024
	if (cr0.eq) goto loc_837FD024;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837fd024
	if (cr6.eq) goto loc_837FD024;
	// bl 0x837fce78
	ctx.lr = 0x837FD014;
	sub_837FCE78(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837fd028
	if (!cr6.eq) goto loc_837FD028;
loc_837FD024:
	// li r3,0
	ctx.r3.s64 = 0;
loc_837FD028:
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

__attribute__((alias("__imp__sub_837FD03C"))) PPC_WEAK_FUNC(sub_837FD03C);
PPC_FUNC_IMPL(__imp__sub_837FD03C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837FD040"))) PPC_WEAK_FUNC(sub_837FD040);
PPC_FUNC_IMPL(__imp__sub_837FD040) {
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
	// lwz r11,400(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 400);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837fd1bc
	if (!cr6.eq) goto loc_837FD1BC;
	// lwz r11,380(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 380);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837fd07c
	if (cr6.eq) goto loc_837FD07C;
	// lwz r11,376(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 376);
	// addi r3,r3,376
	ctx.r3.s64 = ctx.r3.s64 + 376;
	// b 0x837fd0c4
	goto loc_837FD0C4;
loc_837FD07C:
	// lwz r11,392(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837fd1bc
	if (cr6.eq) goto loc_837FD1BC;
	// lbz r11,66(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 66);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837fd0a0
	if (cr6.eq) goto loc_837FD0A0;
	// lwz r11,356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// ble cr6,0x837fd1bc
	if (!cr6.gt) goto loc_837FD1BC;
loc_837FD0A0:
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837fd1bc
	if (cr6.eq) goto loc_837FD1BC;
	// bl 0x837f48f0
	ctx.lr = 0x837FD0B0;
	sub_837F48F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837fd1bc
	if (cr6.eq) goto loc_837FD1BC;
	// lwz r11,388(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	// addi r3,r31,388
	ctx.r3.s64 = ctx.r31.s64 + 388;
loc_837FD0C4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r30,8(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x837fced0
	ctx.lr = 0x837FD0D0;
	sub_837FCED0(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x837fd1bc
	if (cr6.eq) goto loc_837FD1BC;
	// lwz r11,404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	// lwz r10,400(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// or r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 | ctx.r10.u64;
	// andc r30,r30,r9
	ctx.r30.u64 = ctx.r30.u64 & ~ctx.r9.u64;
	// rlwinm r8,r30,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x837fd0fc
	if (cr6.eq) goto loc_837FD0FC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837f9ee0
	ctx.lr = 0x837FD0FC;
	sub_837F9EE0(ctx, base);
loc_837FD0FC:
	// rlwinm r11,r30,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837fd110
	if (cr6.eq) goto loc_837FD110;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fa168
	ctx.lr = 0x837FD110;
	sub_837FA168(ctx, base);
loc_837FD110:
	// rlwinm r11,r30,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837fd130
	if (cr6.eq) goto loc_837FD130;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837FD130;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_837FD130:
	// rlwinm r11,r30,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837fd144
	if (cr6.eq) goto loc_837FD144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fa5f0
	ctx.lr = 0x837FD144;
	sub_837FA5F0(ctx, base);
loc_837FD144:
	// rlwinm r11,r30,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837fd168
	if (cr6.eq) goto loc_837FD168;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837FD168;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_837FD168:
	// rlwinm r11,r30,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837fd18c
	if (cr6.eq) goto loc_837FD18C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837FD18C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_837FD18C:
	// rlwinm r11,r30,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837fd1b0
	if (cr6.eq) goto loc_837FD1B0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837FD1B0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_837FD1B0:
	// lwz r11,400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// or r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 | ctx.r11.u64;
	// stw r10,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r10.u32);
loc_837FD1BC:
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

__attribute__((alias("__imp__sub_837FD1D4"))) PPC_WEAK_FUNC(sub_837FD1D4);
PPC_FUNC_IMPL(__imp__sub_837FD1D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837FD1D8"))) PPC_WEAK_FUNC(sub_837FD1D8);
PPC_FUNC_IMPL(__imp__sub_837FD1D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r7,r11
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r6,r7,8
	ctx.r6.s64 = ctx.r7.s64 + 8;
loc_837FD1EC:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, xer);
	// beq cr6,0x837fd264
	if (cr6.eq) goto loc_837FD264;
loc_837FD1FC:
	// lbz r11,3(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 3);
	// lbz r10,3(r7)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + 3);
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi r5,r9,24
	ctx.r5.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x837fd254
	if (!cr6.eq) goto loc_837FD254;
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r11,r8,8
	ctx.r11.s64 = ctx.r8.s64 + 8;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x837fd244
	if (cr6.eq) goto loc_837FD244;
	// addi r10,r8,-8
	ctx.r10.s64 = ctx.r8.s64 + -8;
loc_837FD228:
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stwu r5,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r10.u32 = ea;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// stw r3,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// bne cr6,0x837fd228
	if (!cr6.eq) goto loc_837FD228;
loc_837FD244:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// b 0x837fd258
	goto loc_837FD258;
loc_837FD254:
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
loc_837FD258:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// bne cr6,0x837fd1fc
	if (!cr6.eq) goto loc_837FD1FC;
loc_837FD264:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// addi r6,r6,8
	ctx.r6.s64 = ctx.r6.s64 + 8;
	// cmplw cr6,r7,r11
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, xer);
	// bne cr6,0x837fd1ec
	if (!cr6.eq) goto loc_837FD1EC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837FD27C"))) PPC_WEAK_FUNC(sub_837FD27C);
PPC_FUNC_IMPL(__imp__sub_837FD27C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837FD280"))) PPC_WEAK_FUNC(sub_837FD280);
PPC_FUNC_IMPL(__imp__sub_837FD280) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// addi r9,r3,88
	ctx.r9.s64 = ctx.r3.s64 + 88;
	// lfs f0,9008(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r9,28
	ctx.r9.s64 = ctx.r9.s64 + 28;
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stfs f0,76(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// stw r10,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r10.u32);
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// stb r11,88(r3)
	PPC_STORE_U8(ctx.r3.u32 + 88, ctx.r11.u8);
	// stw r10,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r10.u32);
	// stw r11,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r11.u32);
	// stb r11,116(r3)
	PPC_STORE_U8(ctx.r3.u32 + 116, ctx.r11.u8);
	// stw r10,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r10.u32);
	// stw r11,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r11.u32);
	// stb r11,144(r3)
	PPC_STORE_U8(ctx.r3.u32 + 144, ctx.r11.u8);
	// stw r10,192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 192, ctx.r10.u32);
	// stw r11,188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 188, ctx.r11.u32);
	// stb r11,172(r3)
	PPC_STORE_U8(ctx.r3.u32 + 172, ctx.r11.u8);
	// stw r10,220(r3)
	PPC_STORE_U32(ctx.r3.u32 + 220, ctx.r10.u32);
	// stw r11,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r11.u32);
	// stb r11,200(r3)
	PPC_STORE_U8(ctx.r3.u32 + 200, ctx.r11.u8);
	// stw r10,248(r3)
	PPC_STORE_U32(ctx.r3.u32 + 248, ctx.r10.u32);
	// stw r11,244(r3)
	PPC_STORE_U32(ctx.r3.u32 + 244, ctx.r11.u32);
	// stb r11,228(r3)
	PPC_STORE_U8(ctx.r3.u32 + 228, ctx.r11.u8);
	// stw r10,276(r3)
	PPC_STORE_U32(ctx.r3.u32 + 276, ctx.r10.u32);
	// stw r11,272(r3)
	PPC_STORE_U32(ctx.r3.u32 + 272, ctx.r11.u32);
	// stb r11,256(r3)
	PPC_STORE_U8(ctx.r3.u32 + 256, ctx.r11.u8);
	// stw r10,304(r3)
	PPC_STORE_U32(ctx.r3.u32 + 304, ctx.r10.u32);
	// stw r11,300(r3)
	PPC_STORE_U32(ctx.r3.u32 + 300, ctx.r11.u32);
	// stb r11,284(r3)
	PPC_STORE_U8(ctx.r3.u32 + 284, ctx.r11.u8);
	// stw r10,332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 332, ctx.r10.u32);
	// stw r11,328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 328, ctx.r11.u32);
	// stb r11,312(r3)
	PPC_STORE_U8(ctx.r3.u32 + 312, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837FD318"))) PPC_WEAK_FUNC(sub_837FD318);
PPC_FUNC_IMPL(__imp__sub_837FD318) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837FD320;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// clrlwi r31,r3,16
	ctx.r31.u64 = ctx.r3.u32 & 0xFFFF;
	// bl 0x82a4d1d8
	ctx.lr = 0x837FD334;
	sub_82A4D1D8(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rlwinm r6,r30,16,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0xFF;
	// addi r7,r31,-1
	ctx.r7.s64 = ctx.r31.s64 + -1;
	// bl 0x82a4cdc0
	ctx.lr = 0x837FD348;
	sub_82A4CDC0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837fd398
	if (cr6.eq) goto loc_837FD398;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r31,0
	ctx.r31.s64 = 0;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
loc_837FD364:
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x837fcdb0
	ctx.lr = 0x837FD36C;
	sub_837FCDB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837fd37c
	if (cr6.eq) goto loc_837FD37C;
	// li r29,1
	ctx.r29.s64 = 1;
loc_837FD37C:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r31,r31,44
	ctx.r31.s64 = ctx.r31.s64 + 44;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// blt cr6,0x837fd364
	if (cr6.lt) goto loc_837FD364;
loc_837FD398:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837FD3A4"))) PPC_WEAK_FUNC(sub_837FD3A4);
PPC_FUNC_IMPL(__imp__sub_837FD3A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837FD3A8"))) PPC_WEAK_FUNC(sub_837FD3A8);
PPC_FUNC_IMPL(__imp__sub_837FD3A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x837FD3B0;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x837fd650
	if (cr6.eq) goto loc_837FD650;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmplw cr6,r9,r5
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, xer);
	// bge cr6,0x837fd3f0
	if (!cr6.lt) goto loc_837FD3F0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x837FD3F0;
	sub_831CC150(ctx, base);
loc_837FD3F0:
	// lwz r8,8(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// subf r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x837fd534
	if (!cr6.lt) goto loc_837FD534;
	// rlwinm r11,r10,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// li r26,0
	ctx.r26.s64 = 0;
	// subfic r8,r11,-1
	xer.ca = ctx.r11.u32 <= 4294967295;
	ctx.r8.s64 = -1 - ctx.r11.s64;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// blt cr6,0x837fd420
	if (cr6.lt) goto loc_837FD420;
	// add r26,r11,r10
	ctx.r26.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_837FD420:
	// cmplw cr6,r26,r9
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r9.u32, xer);
	// bge cr6,0x837fd42c
	if (!cr6.lt) goto loc_837FD42C;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
loc_837FD42C:
	// li r25,2
	ctx.r25.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x837FD444;
	sub_82595718(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// subf r8,r11,r31
	ctx.r8.s64 = ctx.r31.s64 - ctx.r11.s64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// add r9,r8,r3
	ctx.r9.u64 = ctx.r8.u64 + ctx.r3.u64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// beq cr6,0x837fd47c
	if (cr6.eq) goto loc_837FD47C;
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
loc_837FD464:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837fd474
	if (cr6.eq) goto loc_837FD474;
	// lbz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
loc_837FD474:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x837fd464
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837FD464;
loc_837FD47C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// beq cr6,0x837fd4b0
	if (cr6.eq) goto loc_837FD4B0;
	// subf r7,r11,r31
	ctx.r7.s64 = ctx.r31.s64 - ctx.r11.s64;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
loc_837FD494:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837fd4a4
	if (cr6.eq) goto loc_837FD4A4;
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r7,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
loc_837FD4A4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x837fd494
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837FD494;
loc_837FD4B0:
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// add r11,r9,r30
	ctx.r11.u64 = ctx.r9.u64 + ctx.r30.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x837fd4f4
	if (cr6.eq) goto loc_837FD4F4;
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// subf r8,r31,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r31.s64;
	// subf r7,r29,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r29.s64;
	// subf r10,r30,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r30.s64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_837FD4D8:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837fd4e8
	if (cr6.eq) goto loc_837FD4E8;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
loc_837FD4E8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x837fd4d8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837FD4D8;
loc_837FD4F4:
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// beq cr6,0x837fd518
	if (cr6.eq) goto loc_837FD518;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x837FD518;
	sub_825952B8(ctx, base);
loc_837FD518:
	// add r11,r26,r29
	ctx.r11.u64 = ctx.r26.u64 + ctx.r29.u64;
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// add r10,r29,r31
	ctx.r10.u64 = ctx.r29.u64 + ctx.r31.u64;
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_837FD534:
	// subf r10,r31,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r31.s64;
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, xer);
	// bge cr6,0x837fd5d8
	if (!cr6.lt) goto loc_837FD5D8;
	// lbz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// add r10,r31,r30
	ctx.r10.u64 = ctx.r31.u64 + ctx.r30.u64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x837fd578
	if (cr6.eq) goto loc_837FD578;
	// subf r8,r31,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r31.s64;
	// subf r11,r30,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r30.s64;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_837FD55C:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837fd56c
	if (cr6.eq) goto loc_837FD56C;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
loc_837FD56C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x837fd55c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837FD55C;
loc_837FD578:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// subf r10,r11,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r11.s64;
	// add. r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x837fd5a0
	if (cr0.eq) goto loc_837FD5A0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_837FD58C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837fd598
	if (cr6.eq) goto loc_837FD598;
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
loc_837FD598:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x837fd58c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837FD58C;
loc_837FD5A0:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// subf r10,r30,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r30.s64;
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x837fd650
	if (cr6.eq) goto loc_837FD650;
	// subf. r10,r31,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r31.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// beq 0x837fd650
	if (cr0.eq) goto loc_837FD650;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_837FD5C8:
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x837fd5c8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837FD5C8;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_837FD5D8:
	// subf r9,r30,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r30.s64;
	// lbz r29,0(r27)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// beq cr6,0x837fd610
	if (cr6.eq) goto loc_837FD610;
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_837FD5F4:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837fd604
	if (cr6.eq) goto loc_837FD604;
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
loc_837FD604:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x837fd5f4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837FD5F4;
loc_837FD610:
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
	// subf r10,r31,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r31.s64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// subf r9,r30,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r30.s64;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// subf r3,r9,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r9.s64;
	// bl 0x831ce420
	ctx.lr = 0x837FD62C;
	sub_831CE420(ctx, base);
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x837fd650
	if (cr6.eq) goto loc_837FD650;
	// subf. r10,r31,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r31.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// beq 0x837fd650
	if (cr0.eq) goto loc_837FD650;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_837FD648:
	// stbu r29,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r29.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x837fd648
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837FD648;
loc_837FD650:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837FD658"))) PPC_WEAK_FUNC(sub_837FD658);
PPC_FUNC_IMPL(__imp__sub_837FD658) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837FD660;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x825adbd8
	ctx.lr = 0x837FD674;
	sub_825ADBD8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837fd6d0
	if (cr6.eq) goto loc_837FD6D0;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// beq cr6,0x837fd6c4
	if (cr6.eq) goto loc_837FD6C4;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
loc_837FD694:
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x837fd6b8
	if (cr6.eq) goto loc_837FD6B8;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
	// addi r10,r8,-4
	ctx.r10.s64 = ctx.r8.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_837FD6AC:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x837fd6ac
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837FD6AC;
loc_837FD6B8:
	// addic. r7,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// addi r8,r8,28
	ctx.r8.s64 = ctx.r8.s64 + 28;
	// bne 0x837fd694
	if (!cr0.eq) goto loc_837FD694;
loc_837FD6C4:
	// mulli r11,r30,28
	ctx.r11.s64 = ctx.r30.s64 * 28;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
loc_837FD6D0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837FD6D8"))) PPC_WEAK_FUNC(sub_837FD6D8);
PPC_FUNC_IMPL(__imp__sub_837FD6D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x837FD6E0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r25,15
	ctx.r25.s64 = 15;
	// stw r28,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r28.u32);
	// li r26,-1
	ctx.r26.s64 = -1;
	// stw r25,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r25.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r28,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r28.u8);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x8259cb28
	ctx.lr = 0x837FD710;
	sub_8259CB28(ctx, base);
	// addi r31,r29,28
	ctx.r31.s64 = ctx.r29.s64 + 28;
	// li r30,7
	ctx.r30.s64 = 7;
	// subf r11,r31,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r31.s64;
	// addi r27,r11,28
	ctx.r27.s64 = ctx.r11.s64 + 28;
loc_837FD720:
	// stw r25,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r25.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// add r4,r27,r31
	ctx.r4.u64 = ctx.r27.u64 + ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cb28
	ctx.lr = 0x837FD740;
	sub_8259CB28(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// bge 0x837fd720
	if (!cr0.lt) goto loc_837FD720;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837FD758"))) PPC_WEAK_FUNC(sub_837FD758);
PPC_FUNC_IMPL(__imp__sub_837FD758) {
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
	// lwz r11,304(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837fd784
	if (!cr6.eq) goto loc_837FD784;
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
loc_837FD784:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r3,296
	ctx.r3.s64 = ctx.r3.s64 + 296;
	// bl 0x837e97d0
	ctx.lr = 0x837FD798;
	sub_837E97D0(ctx, base);
	// lbz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837FD7AC"))) PPC_WEAK_FUNC(sub_837FD7AC);
PPC_FUNC_IMPL(__imp__sub_837FD7AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837FD7B0"))) PPC_WEAK_FUNC(sub_837FD7B0);
PPC_FUNC_IMPL(__imp__sub_837FD7B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837FD7B8;
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x837fd8d4
	if (cr6.eq) goto loc_837FD8D4;
	// lbz r11,57(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 57);
	// stb r11,285(r4)
	PPC_STORE_U8(ctx.r4.u32 + 285, ctx.r11.u8);
	// lwz r11,452(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 452);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x837fd7ec
	if (cr6.lt) goto loc_837FD7EC;
	// stw r11,84(r4)
	PPC_STORE_U32(ctx.r4.u32 + 84, ctx.r11.u32);
	// b 0x837fd874
	goto loc_837FD874;
loc_837FD7EC:
	// li r4,100
	ctx.r4.s64 = 100;
	// addi r3,r30,260
	ctx.r3.s64 = ctx.r30.s64 + 260;
	// bl 0x837f9710
	ctx.lr = 0x837FD7F8;
	sub_837F9710(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x837fd758
	ctx.lr = 0x837FD804;
	sub_837FD758(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x837fd86c
	if (cr6.eq) goto loc_837FD86C;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x837fd870
	if (!cr6.eq) goto loc_837FD870;
	// lwz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// lwz r10,328(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 328);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bge cr6,0x837fd854
	if (!cr6.lt) goto loc_837FD854;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// blt cr6,0x837fd854
	if (cr6.lt) goto loc_837FD854;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// divwu r9,r31,r11
	ctx.r9.u32 = PPCDivide(ctx.r31.u32, ctx.r11.u32);
	// twllei r11,0
	// mullw r8,r9,r11
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// subf r31,r8,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r8.s64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// blt cr6,0x837fd864
	if (cr6.lt) goto loc_837FD864;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stw r31,328(r30)
	PPC_STORE_U32(ctx.r30.u32 + 328, ctx.r31.u32);
	// b 0x837fd870
	goto loc_837FD870;
loc_837FD854:
	// divwu r10,r31,r11
	ctx.r10.u32 = PPCDivide(ctx.r31.u32, ctx.r11.u32);
	// twllei r11,0
	// mullw r9,r10,r11
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// subf r31,r9,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r9.s64;
loc_837FD864:
	// stw r31,328(r30)
	PPC_STORE_U32(ctx.r30.u32 + 328, ctx.r31.u32);
	// b 0x837fd870
	goto loc_837FD870;
loc_837FD86C:
	// lwz r31,324(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 324);
loc_837FD870:
	// stw r31,84(r29)
	PPC_STORE_U32(ctx.r29.u32 + 84, ctx.r31.u32);
loc_837FD874:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x837f5580
	ctx.lr = 0x837FD87C;
	sub_837F5580(ctx, base);
	// lbz r11,59(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 59);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837fd8ac
	if (cr6.eq) goto loc_837FD8AC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83800a28
	ctx.lr = 0x837FD890;
	sub_83800A28(ctx, base);
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// blt cr6,0x837fd8ac
	if (cr6.lt) goto loc_837FD8AC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,286(r29)
	PPC_STORE_U8(ctx.r29.u32 + 286, ctx.r11.u8);
loc_837FD8AC:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837fd8d4
	if (!cr6.eq) goto loc_837FD8D4;
	// lwz r3,412(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 412);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837fd8d4
	if (cr6.eq) goto loc_837FD8D4;
	// lbz r11,49(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 49);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837fd8d4
	if (!cr6.eq) goto loc_837FD8D4;
	// bl 0x837a06d0
	ctx.lr = 0x837FD8D4;
	sub_837A06D0(ctx, base);
loc_837FD8D4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837FD8DC"))) PPC_WEAK_FUNC(sub_837FD8DC);
PPC_FUNC_IMPL(__imp__sub_837FD8DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837FD8E0"))) PPC_WEAK_FUNC(sub_837FD8E0);
PPC_FUNC_IMPL(__imp__sub_837FD8E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837FD8E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r5)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x837fd958
	if (!cr6.eq) goto loc_837FD958;
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x837fd99c
	if (cr6.eq) goto loc_837FD99C;
loc_837FD91C:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837fd938
	if (cr6.eq) goto loc_837FD938;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,504(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 504);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r10.u32);
loc_837FD938:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8330ee50
	ctx.lr = 0x837FD940;
	sub_8330EE50(ctx, base);
	// lwz r10,72(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x837fd91c
	if (!cr6.eq) goto loc_837FD91C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_837FD958:
	// addi r30,r30,68
	ctx.r30.s64 = ctx.r30.s64 + 68;
loc_837FD95C:
	// lbz r11,5(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x833e3748
	ctx.lr = 0x837FD970;
	sub_833E3748(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837fd98c
	if (cr6.eq) goto loc_837FD98C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,504(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 504);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r11.u32);
loc_837FD98C:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x837fd95c
	if (!cr6.eq) goto loc_837FD95C;
loc_837FD99C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837FD9A4"))) PPC_WEAK_FUNC(sub_837FD9A4);
PPC_FUNC_IMPL(__imp__sub_837FD9A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837FD9A8"))) PPC_WEAK_FUNC(sub_837FD9A8);
PPC_FUNC_IMPL(__imp__sub_837FD9A8) {
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
	// bl 0x837fd040
	ctx.lr = 0x837FD9C0;
	sub_837FD040(ctx, base);
	// lwz r11,400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837fda08
	if (cr6.eq) goto loc_837FDA08;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fcb40
	ctx.lr = 0x837FD9D4;
	sub_837FCB40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837fda08
	if (cr6.eq) goto loc_837FDA08;
loc_837FD9E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fd040
	ctx.lr = 0x837FD9E8;
	sub_837FD040(ctx, base);
	// lwz r11,400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837fda08
	if (cr6.eq) goto loc_837FDA08;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fcb40
	ctx.lr = 0x837FD9FC;
	sub_837FCB40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837fd9e0
	if (!cr6.eq) goto loc_837FD9E0;
loc_837FDA08:
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

__attribute__((alias("__imp__sub_837FDA1C"))) PPC_WEAK_FUNC(sub_837FDA1C);
PPC_FUNC_IMPL(__imp__sub_837FDA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837FDA20"))) PPC_WEAK_FUNC(sub_837FDA20);
PPC_FUNC_IMPL(__imp__sub_837FDA20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x837FDA28;
	__savegprlr_25(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x837fda54
	if (cr6.eq) goto loc_837FDA54;
	// cmpwi cr6,r5,10
	cr6.compare<int32_t>(ctx.r5.s32, 10, xer);
	// bne cr6,0x837fda58
	if (!cr6.eq) goto loc_837FDA58;
loc_837FDA54:
	// li r30,1
	ctx.r30.s64 = 1;
loc_837FDA58:
	// cmpwi cr6,r27,9
	cr6.compare<int32_t>(ctx.r27.s32, 9, xer);
	// beq cr6,0x837fda68
	if (cr6.eq) goto loc_837FDA68;
	// cmpwi cr6,r27,10
	cr6.compare<int32_t>(ctx.r27.s32, 10, xer);
	// bne cr6,0x837fda6c
	if (!cr6.eq) goto loc_837FDA6C;
loc_837FDA68:
	// li r28,1
	ctx.r28.s64 = 1;
loc_837FDA6C:
	// bl 0x837da198
	ctx.lr = 0x837FDA70;
	sub_837DA198(ctx, base);
	// mulli r11,r30,5532
	ctx.r11.s64 = ctx.r30.s64 * 5532;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// cmplwi cr6,r29,32
	cr6.compare<uint32_t>(ctx.r29.u32, 32, xer);
	// addi r11,r11,196
	ctx.r11.s64 = ctx.r11.s64 + 196;
	// bge cr6,0x837fda8c
	if (!cr6.lt) goto loc_837FDA8C;
	// mulli r10,r29,172
	ctx.r10.s64 = ctx.r29.s64 * 172;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_837FDA8C:
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// addi r7,r31,4
	ctx.r7.s64 = ctx.r31.s64 + 4;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lbz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837f9d78
	ctx.lr = 0x837FDAB0;
	sub_837F9D78(ctx, base);
	// li r11,33
	ctx.r11.s64 = 33;
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,1280
	ctx.r4.s64 = 1280;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x837FDAC8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837fdae0
	if (cr6.eq) goto loc_837FDAE0;
	// extsb r4,r25
	ctx.r4.s64 = ctx.r25.s8;
	// bl 0x83802450
	ctx.lr = 0x837FDAD8;
	sub_83802450(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x837fdae4
	goto loc_837FDAE4;
loc_837FDAE0:
	// li r30,0
	ctx.r30.s64 = 0;
loc_837FDAE4:
	// clrlwi r6,r29,24
	ctx.r6.u64 = ctx.r29.u32 & 0xFF;
	// lbz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83804bc8
	ctx.lr = 0x837FDAFC;
	sub_83804BC8(ctx, base);
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837fdb1c
	if (cr6.eq) goto loc_837FDB1C;
	// lwz r3,68(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837fdb1c
	if (cr6.eq) goto loc_837FDB1C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x837b11d8
	ctx.lr = 0x837FDB1C;
	sub_837B11D8(ctx, base);
loc_837FDB1C:
	// bl 0x837da198
	ctx.lr = 0x837FDB20;
	sub_837DA198(ctx, base);
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x837fdb40
	if (!cr6.eq) goto loc_837FDB40;
	// bl 0x837da198
	ctx.lr = 0x837FDB30;
	sub_837DA198(ctx, base);
	// lbz r11,192(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 192);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x837fdb44
	if (!cr6.eq) goto loc_837FDB44;
loc_837FDB40:
	// li r11,0
	ctx.r11.s64 = 0;
loc_837FDB44:
	// stb r11,1056(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1056, ctx.r11.u8);
	// bl 0x837da198
	ctx.lr = 0x837FDB4C;
	sub_837DA198(ctx, base);
	// bl 0x837d86e0
	ctx.lr = 0x837FDB50;
	sub_837D86E0(ctx, base);
	// stb r3,1188(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1188, ctx.r3.u8);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r26,68
	ctx.r3.s64 = ctx.r26.s64 + 68;
	// bl 0x833e3748
	ctx.lr = 0x837FDB64;
	sub_833E3748(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837FDB70"))) PPC_WEAK_FUNC(sub_837FDB70);
PPC_FUNC_IMPL(__imp__sub_837FDB70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x837FDB78;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,33
	ctx.r11.s64 = 33;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,1280
	ctx.r4.s64 = 1280;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// bl 0x82595718
	ctx.lr = 0x837FDBB4;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837fdbcc
	if (cr6.eq) goto loc_837FDBCC;
	// extsb r4,r25
	ctx.r4.s64 = ctx.r25.s8;
	// bl 0x83802450
	ctx.lr = 0x837FDBC4;
	sub_83802450(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x837fdbd0
	goto loc_837FDBD0;
loc_837FDBCC:
	// li r31,0
	ctx.r31.s64 = 0;
loc_837FDBD0:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// clrlwi r6,r28,24
	ctx.r6.u64 = ctx.r28.u32 & 0xFF;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83804bc8
	ctx.lr = 0x837FDBE8;
	sub_83804BC8(ctx, base);
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837fdc08
	if (cr6.eq) goto loc_837FDC08;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837fdc08
	if (cr6.eq) goto loc_837FDC08;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x837b11d8
	ctx.lr = 0x837FDC08;
	sub_837B11D8(ctx, base);
loc_837FDC08:
	// lbz r11,263(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 263);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stb r23,1056(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1056, ctx.r23.u8);
	// addi r3,r24,68
	ctx.r3.s64 = ctx.r24.s64 + 68;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// stb r11,1188(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1188, ctx.r11.u8);
	// bl 0x833e3748
	ctx.lr = 0x837FDC24;
	sub_833E3748(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837FDC30"))) PPC_WEAK_FUNC(sub_837FDC30);
PPC_FUNC_IMPL(__imp__sub_837FDC30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x837FDC38;
	__savegprlr_27(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x8379eed8
	ctx.lr = 0x837FDC5C;
	sub_8379EED8(ctx, base);
	// li r11,33
	ctx.r11.s64 = 33;
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,1280
	ctx.r4.s64 = 1280;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x837FDC74;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837fdc8c
	if (cr6.eq) goto loc_837FDC8C;
	// extsb r4,r28
	ctx.r4.s64 = ctx.r28.s8;
	// bl 0x83802450
	ctx.lr = 0x837FDC84;
	sub_83802450(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x837fdc90
	goto loc_837FDC90;
loc_837FDC8C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_837FDC90:
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r29,24
	ctx.r6.u64 = ctx.r29.u32 & 0xFF;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83804bc8
	ctx.lr = 0x837FDCA8;
	sub_83804BC8(ctx, base);
	// bl 0x837da198
	ctx.lr = 0x837FDCAC;
	sub_837DA198(ctx, base);
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x837fdccc
	if (!cr6.eq) goto loc_837FDCCC;
	// bl 0x837da198
	ctx.lr = 0x837FDCBC;
	sub_837DA198(ctx, base);
	// lbz r11,192(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 192);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x837fdcd0
	if (!cr6.eq) goto loc_837FDCD0;
loc_837FDCCC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_837FDCD0:
	// stb r11,1056(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1056, ctx.r11.u8);
	// bl 0x837da198
	ctx.lr = 0x837FDCD8;
	sub_837DA198(ctx, base);
	// bl 0x837d86e0
	ctx.lr = 0x837FDCDC;
	sub_837D86E0(ctx, base);
	// stb r3,1188(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1188, ctx.r3.u8);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r27,68
	ctx.r3.s64 = ctx.r27.s64 + 68;
	// bl 0x833e3748
	ctx.lr = 0x837FDCF0;
	sub_833E3748(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837FDCFC"))) PPC_WEAK_FUNC(sub_837FDCFC);
PPC_FUNC_IMPL(__imp__sub_837FDCFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837FDD00"))) PPC_WEAK_FUNC(sub_837FDD00);
PPC_FUNC_IMPL(__imp__sub_837FDD00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x837FDD08;
	__savegprlr_27(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x8379eed8
	ctx.lr = 0x837FDD2C;
	sub_8379EED8(ctx, base);
	// lbz r31,168(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 168);
	// bl 0x837da198
	ctx.lr = 0x837FDD34;
	sub_837DA198(ctx, base);
	// addi r11,r3,196
	ctx.r11.s64 = ctx.r3.s64 + 196;
	// cmplwi cr6,r30,32
	cr6.compare<uint32_t>(ctx.r30.u32, 32, xer);
	// bge cr6,0x837fdd48
	if (!cr6.lt) goto loc_837FDD48;
	// mulli r10,r30,172
	ctx.r10.s64 = ctx.r30.s64 * 172;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_837FDD48:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x837f9d78
	ctx.lr = 0x837FDD6C;
	sub_837F9D78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,100
	ctx.r5.s64 = 100;
	// bl 0x831ce980
	ctx.lr = 0x837FDD7C;
	sub_831CE980(ctx, base);
	// bl 0x837da198
	ctx.lr = 0x837FDD80;
	sub_837DA198(ctx, base);
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r9,r3,11300
	ctx.r9.s64 = ctx.r3.s64 + 11300;
	// addi r11,r11,-316
	ctx.r11.s64 = ctx.r11.s64 + -316;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837fdda8
	if (!cr6.eq) goto loc_837FDDA8;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x837fddd0
	goto loc_837FDDD0;
loc_837FDDA8:
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x837fddc8
	if (!cr6.eq) goto loc_837FDDC8;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x837fddcc
	if (cr6.eq) goto loc_837FDDCC;
loc_837FDDC8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_837FDDCC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_837FDDD0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837fdde8
	if (!cr6.eq) goto loc_837FDDE8;
	// bl 0x837da198
	ctx.lr = 0x837FDDE0;
	sub_837DA198(ctx, base);
	// ld r11,11300(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 11300);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
loc_837FDDE8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stb r31,168(r1)
	PPC_STORE_U8(ctx.r1.u32 + 168, ctx.r31.u8);
	// li r10,33
	ctx.r10.s64 = 33;
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r4,1280
	ctx.r4.s64 = 1280;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lfs f0,-25156(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -25156);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x82595718
	ctx.lr = 0x837FDE10;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837fde28
	if (cr6.eq) goto loc_837FDE28;
	// extsb r4,r27
	ctx.r4.s64 = ctx.r27.s8;
	// bl 0x83802450
	ctx.lr = 0x837FDE20;
	sub_83802450(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x837fde2c
	goto loc_837FDE2C;
loc_837FDE28:
	// li r31,0
	ctx.r31.s64 = 0;
loc_837FDE2C:
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r30,24
	ctx.r6.u64 = ctx.r30.u32 & 0xFF;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83804bc8
	ctx.lr = 0x837FDE44;
	sub_83804BC8(ctx, base);
	// bl 0x837da198
	ctx.lr = 0x837FDE48;
	sub_837DA198(ctx, base);
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x837fde68
	if (!cr6.eq) goto loc_837FDE68;
	// bl 0x837da198
	ctx.lr = 0x837FDE58;
	sub_837DA198(ctx, base);
	// lbz r11,192(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 192);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x837fde6c
	if (!cr6.eq) goto loc_837FDE6C;
loc_837FDE68:
	// li r11,0
	ctx.r11.s64 = 0;
loc_837FDE6C:
	// stb r11,1056(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1056, ctx.r11.u8);
	// bl 0x837da198
	ctx.lr = 0x837FDE74;
	sub_837DA198(ctx, base);
	// bl 0x837d86e0
	ctx.lr = 0x837FDE78;
	sub_837D86E0(ctx, base);
	// stb r3,1188(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1188, ctx.r3.u8);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r29,68
	ctx.r3.s64 = ctx.r29.s64 + 68;
	// bl 0x833e3748
	ctx.lr = 0x837FDE8C;
	sub_833E3748(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837FDE98"))) PPC_WEAK_FUNC(sub_837FDE98);
PPC_FUNC_IMPL(__imp__sub_837FDE98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x837FDEA0;
	__savegprlr_27(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x8379eed8
	ctx.lr = 0x837FDEC4;
	sub_8379EED8(ctx, base);
	// lbz r30,168(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 168);
	// bl 0x837da198
	ctx.lr = 0x837FDECC;
	sub_837DA198(ctx, base);
	// addi r11,r3,196
	ctx.r11.s64 = ctx.r3.s64 + 196;
	// cmplwi cr6,r31,32
	cr6.compare<uint32_t>(ctx.r31.u32, 32, xer);
	// bge cr6,0x837fdee0
	if (!cr6.lt) goto loc_837FDEE0;
	// mulli r10,r31,172
	ctx.r10.s64 = ctx.r31.s64 * 172;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_837FDEE0:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x837f9d78
	ctx.lr = 0x837FDF04;
	sub_837F9D78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,100
	ctx.r5.s64 = 100;
	// bl 0x831ce980
	ctx.lr = 0x837FDF14;
	sub_831CE980(ctx, base);
	// li r11,33
	ctx.r11.s64 = 33;
	// stb r30,168(r1)
	PPC_STORE_U8(ctx.r1.u32 + 168, ctx.r30.u8);
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r4,1280
	ctx.r4.s64 = 1280;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x837FDF30;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837fdf48
	if (cr6.eq) goto loc_837FDF48;
	// extsb r4,r27
	ctx.r4.s64 = ctx.r27.s8;
	// bl 0x83802450
	ctx.lr = 0x837FDF40;
	sub_83802450(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x837fdf4c
	goto loc_837FDF4C;
loc_837FDF48:
	// li r30,0
	ctx.r30.s64 = 0;
loc_837FDF4C:
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r31,24
	ctx.r6.u64 = ctx.r31.u32 & 0xFF;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83804bc8
	ctx.lr = 0x837FDF64;
	sub_83804BC8(ctx, base);
	// bl 0x837da198
	ctx.lr = 0x837FDF68;
	sub_837DA198(ctx, base);
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x837fdf88
	if (!cr6.eq) goto loc_837FDF88;
	// bl 0x837da198
	ctx.lr = 0x837FDF78;
	sub_837DA198(ctx, base);
	// lbz r11,192(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 192);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x837fdf8c
	if (!cr6.eq) goto loc_837FDF8C;
loc_837FDF88:
	// li r11,0
	ctx.r11.s64 = 0;
loc_837FDF8C:
	// stb r11,1056(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1056, ctx.r11.u8);
	// bl 0x837da198
	ctx.lr = 0x837FDF94;
	sub_837DA198(ctx, base);
	// bl 0x837d86e0
	ctx.lr = 0x837FDF98;
	sub_837D86E0(ctx, base);
	// stb r3,1188(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1188, ctx.r3.u8);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r29,68
	ctx.r3.s64 = ctx.r29.s64 + 68;
	// bl 0x833e3748
	ctx.lr = 0x837FDFAC;
	sub_833E3748(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837FDFB8"))) PPC_WEAK_FUNC(sub_837FDFB8);
PPC_FUNC_IMPL(__imp__sub_837FDFB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837FDFC0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r5,151(r1)
	PPC_STORE_U8(ctx.r1.u32 + 151, ctx.r5.u8);
	// subf r9,r10,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// ble cr6,0x837fdffc
	if (!cr6.gt) goto loc_837FDFFC;
	// subf r10,r4,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r4.s64;
	// addi r6,r1,151
	ctx.r6.s64 = ctx.r1.s64 + 151;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x837fd3a8
	ctx.lr = 0x837FDFF4;
	sub_837FD3A8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_837FDFFC:
	// bge cr6,0x837fe024
	if (!cr6.lt) goto loc_837FE024;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, xer);
	// beq cr6,0x837fe024
	if (cr6.eq) goto loc_837FE024;
	// subf r29,r4,r4
	ctx.r29.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x831ce420
	ctx.lr = 0x837FE01C;
	sub_831CE420(ctx, base);
	// add r11,r29,r30
	ctx.r11.u64 = ctx.r29.u64 + ctx.r30.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_837FE024:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837FE02C"))) PPC_WEAK_FUNC(sub_837FE02C);
PPC_FUNC_IMPL(__imp__sub_837FE02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837FE030"))) PPC_WEAK_FUNC(sub_837FE030);
PPC_FUNC_IMPL(__imp__sub_837FE030) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r4,28
	ctx.r11.s64 = ctx.r4.s64 + 28;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lwz r7,8(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// lwz r6,12(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// stw r6,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// lwz r5,16(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stw r5,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// lwz r4,20(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// stw r4,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// lwz r9,28(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
loc_837FE0A0:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x837fe0a0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837FE0A0;
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// addi r4,r30,88
	ctx.r4.s64 = ctx.r30.s64 + 88;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// lwz r9,60(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// stw r9,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r9.u32);
	// lwz r8,64(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// stw r8,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r8.u32);
	// lwz r7,68(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// stw r7,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r7.u32);
	// lwz r6,72(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// stw r6,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r6.u32);
	// lwz r5,76(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// stw r5,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r5.u32);
	// lbz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 80);
	// stb r11,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r11.u8);
	// lwz r10,84(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
	// bl 0x837fd6d8
	ctx.lr = 0x837FE100;
	sub_837FD6D8(ctx, base);
	// lfs f0,340(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 340);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,340(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 340, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f13,344(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 344);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,344(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 344, temp.u32);
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

__attribute__((alias("__imp__sub_837FE12C"))) PPC_WEAK_FUNC(sub_837FE12C);
PPC_FUNC_IMPL(__imp__sub_837FE12C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837FE130"))) PPC_WEAK_FUNC(sub_837FE130);
PPC_FUNC_IMPL(__imp__sub_837FE130) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x837FE138;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r4,360(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 360);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x838009f0
	ctx.lr = 0x837FE14C;
	sub_838009F0(ctx, base);
	// lwz r11,412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837fe174
	if (cr6.eq) goto loc_837FE174;
	// lbz r11,49(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 49);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837fe174
	if (!cr6.eq) goto loc_837FE174;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837f9f30
	ctx.lr = 0x837FE174;
	sub_837F9F30(ctx, base);
loc_837FE174:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837FE188;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r30,r31,152
	ctx.r30.s64 = ctx.r31.s64 + 152;
	// lwz r4,184(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x837fd8e0
	ctx.lr = 0x837FE19C;
	sub_837FD8E0(ctx, base);
	// lwz r9,184(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// lfs f0,188(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,240(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 240, temp.u32);
	// lwz r8,184(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// lfs f13,192(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,244(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 244, temp.u32);
	// lbz r4,360(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 360);
	// bl 0x83800bb0
	ctx.lr = 0x837FE1C0;
	sub_83800BB0(ctx, base);
	// lwz r7,184(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r5,280(r7)
	PPC_STORE_U32(ctx.r7.u32 + 280, ctx.r5.u32);
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// lfs f31,9008(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,260(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 260, temp.u32);
	// stfs f31,264(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 264, temp.u32);
	// stfs f31,268(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 268, temp.u32);
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// stfs f31,272(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 272, temp.u32);
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// stb r4,276(r11)
	PPC_STORE_U8(ctx.r11.u32 + 276, ctx.r4.u8);
	// lbz r4,360(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 360);
	// bl 0x83800b70
	ctx.lr = 0x837FE204;
	sub_83800B70(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// lis r10,-32211
	ctx.r10.s64 = -2110980096;
	// li r26,1
	ctx.r26.s64 = 1;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// addi r27,r10,5488
	ctx.r27.s64 = ctx.r10.s64 + 5488;
	// bgt cr6,0x837fe4bc
	if (cr6.gt) goto loc_837FE4BC;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x837fe290
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837FE290;
	// bdzf 4*cr6+eq,0x837fe42c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837FE42C;
	// bdzf 4*cr6+eq,0x837fe444
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837FE444;
	// bne cr6,0x837fe45c
	if (!cr6.eq) goto loc_837FE45C;
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// lfs f0,216(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,212(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,208(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,264(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 264, temp.u32);
	// stfs f0,268(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 268, temp.u32);
	// stfs f12,260(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 260, temp.u32);
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// lfs f0,220(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// lfs f13,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,272(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 272, temp.u32);
	// bge cr6,0x837fe278
	if (!cr6.lt) goto loc_837FE278;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,272(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 272, temp.u32);
	// lbz r10,224(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 224);
	// b 0x837fe4b4
	goto loc_837FE4B4;
loc_837FE278:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x837fe288
	if (cr6.lt) goto loc_837FE288;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,272(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 272, temp.u32);
loc_837FE288:
	// lbz r10,224(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 224);
	// b 0x837fe4b4
	goto loc_837FE4B4;
loc_837FE290:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x837fe328
	if (cr6.eq) goto loc_837FE328;
	// lfs f12,64(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f31
	cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// beq cr6,0x837fe328
	if (cr6.eq) goto loc_837FE328;
	// lfs f13,68(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f31
	cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// beq cr6,0x837fe328
	if (cr6.eq) goto loc_837FE328;
	// lfs f0,72(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x837fe328
	if (cr6.eq) goto loc_837FE328;
	// lfs f11,76(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f31
	cr6.compare(ctx.f11.f64, ctx.f31.f64);
	// beq cr6,0x837fe328
	if (cr6.eq) goto loc_837FE328;
	// lbz r11,80(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837fe328
	if (cr6.eq) goto loc_837FE328;
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// stfs f13,264(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 264, temp.u32);
	// stfs f12,260(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 260, temp.u32);
	// stfs f0,268(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 268, temp.u32);
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// lfs f0,76(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// lfs f13,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,272(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 272, temp.u32);
	// bge cr6,0x837fe304
	if (!cr6.lt) goto loc_837FE304;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// b 0x837fe310
	goto loc_837FE310;
loc_837FE304:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x837fe314
	if (cr6.lt) goto loc_837FE314;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_837FE310:
	// stfs f0,272(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 272, temp.u32);
loc_837FE314:
	// lbz r11,80(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 80);
	// lwz r10,184(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// stb r11,276(r10)
	PPC_STORE_U8(ctx.r10.u32 + 276, ctx.r11.u8);
	// stb r26,347(r31)
	PPC_STORE_U8(ctx.r31.u32 + 347, ctx.r26.u8);
	// b 0x837fe4bc
	goto loc_837FE4BC;
loc_837FE328:
	// lbz r11,347(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 347);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837fe394
	if (!cr6.eq) goto loc_837FE394;
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// lfs f0,216(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,212(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,208(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,264(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 264, temp.u32);
	// stfs f0,268(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 268, temp.u32);
	// stfs f12,260(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 260, temp.u32);
	// lfs f13,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,220(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// stfs f0,272(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 272, temp.u32);
	// bge cr6,0x837fe370
	if (!cr6.lt) goto loc_837FE370;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// b 0x837fe37c
	goto loc_837FE37C;
loc_837FE370:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x837fe380
	if (cr6.lt) goto loc_837FE380;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_837FE37C:
	// stfs f0,272(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 272, temp.u32);
loc_837FE380:
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// lbz r10,224(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 224);
	// stb r10,276(r11)
	PPC_STORE_U8(ctx.r11.u32 + 276, ctx.r10.u8);
	// stb r26,347(r31)
	PPC_STORE_U8(ctx.r31.u32 + 347, ctx.r26.u8);
	// b 0x837fe4bc
	goto loc_837FE4BC;
loc_837FE394:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x837fe3b0
	if (cr6.eq) goto loc_837FE3B0;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lbz r29,5(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
loc_837FE3B0:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r30,r31,68
	ctx.r30.s64 = ctx.r31.s64 + 68;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833e3748
	ctx.lr = 0x837FE3C4;
	sub_833E3748(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lfs f0,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,260(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 260, temp.u32);
	// stfs f13,264(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 264, temp.u32);
	// stfs f0,268(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 268, temp.u32);
	// bl 0x833e3748
	ctx.lr = 0x837FE3F8;
	sub_833E3748(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// lfs f13,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,272(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 272, temp.u32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x837fe278
	if (!cr6.lt) goto loc_837FE278;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,272(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 272, temp.u32);
	// lbz r10,224(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 224);
	// b 0x837fe4b4
	goto loc_837FE4B4;
loc_837FE42C:
	// lfs f0,208(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x837fe4bc
	if (!cr6.lt) goto loc_837FE4BC;
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// stb r26,276(r11)
	PPC_STORE_U8(ctx.r11.u32 + 276, ctx.r26.u8);
	// b 0x837fe4bc
	goto loc_837FE4BC;
loc_837FE444:
	// lfs f0,208(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x837fe4bc
	if (!cr6.gt) goto loc_837FE4BC;
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// stb r26,276(r11)
	PPC_STORE_U8(ctx.r11.u32 + 276, ctx.r26.u8);
	// b 0x837fe4bc
	goto loc_837FE4BC;
loc_837FE45C:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x837fe4bc
	if (cr6.eq) goto loc_837FE4BC;
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// lfs f0,72(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,68(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,64(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,264(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 264, temp.u32);
	// stfs f12,260(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 260, temp.u32);
	// stfs f0,268(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 268, temp.u32);
	// lfs f13,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// lfs f0,76(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// stfs f0,272(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 272, temp.u32);
	// bge cr6,0x837fe4a0
	if (!cr6.lt) goto loc_837FE4A0;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// b 0x837fe4ac
	goto loc_837FE4AC;
loc_837FE4A0:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x837fe4b0
	if (cr6.lt) goto loc_837FE4B0;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_837FE4AC:
	// stfs f0,272(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 272, temp.u32);
loc_837FE4B0:
	// lbz r10,80(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 80);
loc_837FE4B4:
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// stb r10,276(r11)
	PPC_STORE_U8(ctx.r11.u32 + 276, ctx.r10.u8);
loc_837FE4BC:
	// addi r4,r27,76
	ctx.r4.s64 = ctx.r27.s64 + 76;
	// addi r3,r27,92
	ctx.r3.s64 = ctx.r27.s64 + 92;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x833c7f20
	ctx.lr = 0x837FE4CC;
	sub_833C7F20(ctx, base);
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// bl 0x837f6628
	ctx.lr = 0x837FE4D4;
	sub_837F6628(ctx, base);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x837fe504
	if (cr6.eq) goto loc_837FE504;
	// lfs f0,340(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 340);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x837fe4f0
	if (!cr6.gt) goto loc_837FE4F0;
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// stfs f0,80(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 80, temp.u32);
loc_837FE4F0:
	// lfs f0,344(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 344);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x837fe504
	if (!cr6.gt) goto loc_837FE504;
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// stfs f0,68(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 68, temp.u32);
loc_837FE504:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,360(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 360);
	// bl 0x83800a58
	ctx.lr = 0x837FE510;
	sub_83800A58(ctx, base);
	// lbz r11,62(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 62);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837fe528
	if (cr6.eq) goto loc_837FE528;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x837fe544
	goto loc_837FE544;
loc_837FE528:
	// bl 0x837da198
	ctx.lr = 0x837FE52C;
	sub_837DA198(ctx, base);
	// lbz r11,11370(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11370);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837fe544
	if (cr6.eq) goto loc_837FE544;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne cr6,0x837fe544
	if (!cr6.eq) goto loc_837FE544;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_837FE544:
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,360(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 360);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x837FE55C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,92(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837FE570;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,360(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 360);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stb r9,360(r31)
	PPC_STORE_U8(ctx.r31.u32 + 360, ctx.r9.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837FE588"))) PPC_WEAK_FUNC(sub_837FE588);
PPC_FUNC_IMPL(__imp__sub_837FE588) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837FE590;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_837FE5A0:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r29,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r29.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r31,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r31.u8);
	// bl 0x83546fd8
	ctx.lr = 0x837FE5B8;
	sub_83546FD8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,11
	cr6.compare<int32_t>(ctx.r31.s32, 11, xer);
	// blt cr6,0x837fe5a0
	if (cr6.lt) goto loc_837FE5A0;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// li r29,1
	ctx.r29.s64 = 1;
loc_837FE5CC:
	// addi r11,r31,11
	ctx.r11.s64 = ctx.r31.s64 + 11;
	// stb r29,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r29.u8);
	// stb r31,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r31.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83546fd8
	ctx.lr = 0x837FE5E8;
	sub_83546FD8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,11
	cr6.compare<int32_t>(ctx.r31.s32, 11, xer);
	// blt cr6,0x837fe5cc
	if (cr6.lt) goto loc_837FE5CC;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837FE5FC"))) PPC_WEAK_FUNC(sub_837FE5FC);
PPC_FUNC_IMPL(__imp__sub_837FE5FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837FE600"))) PPC_WEAK_FUNC(sub_837FE600);
PPC_FUNC_IMPL(__imp__sub_837FE600) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x837FE608;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// clrlwi r30,r7,24
	ctx.r30.u64 = ctx.r7.u32 & 0xFF;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stb r31,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r31.u8);
	// stb r31,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r31.u8);
	// ble cr6,0x837fe664
	if (!cr6.gt) goto loc_837FE664;
	// addi r29,r5,256
	ctx.r29.s64 = ctx.r5.s64 + 256;
	// clrlwi r28,r6,24
	ctx.r28.u64 = ctx.r6.u32 & 0xFF;
	// li r26,2
	ctx.r26.s64 = 2;
loc_837FE638:
	// add r11,r28,r31
	ctx.r11.u64 = ctx.r28.u64 + ctx.r31.u64;
	// stb r26,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r26.u8);
	// add r10,r29,r31
	ctx.r10.u64 = ctx.r29.u64 + ctx.r31.u64;
	// stb r11,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r11.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83546fd8
	ctx.lr = 0x837FE658;
	sub_83546FD8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r30
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, xer);
	// blt cr6,0x837fe638
	if (cr6.lt) goto loc_837FE638;
loc_837FE664:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837FE66C"))) PPC_WEAK_FUNC(sub_837FE66C);
PPC_FUNC_IMPL(__imp__sub_837FE66C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837FE670"))) PPC_WEAK_FUNC(sub_837FE670);
PPC_FUNC_IMPL(__imp__sub_837FE670) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x837FE678;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// clrlwi r30,r8,24
	ctx.r30.u64 = ctx.r8.u32 & 0xFF;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stb r31,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r31.u8);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// stb r31,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r31.u8);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble cr6,0x837fe6d4
	if (!cr6.gt) goto loc_837FE6D4;
	// clrlwi r26,r7,24
	ctx.r26.u64 = ctx.r7.u32 & 0xFF;
loc_837FE6A8:
	// add r11,r26,r31
	ctx.r11.u64 = ctx.r26.u64 + ctx.r31.u64;
	// stb r27,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r27.u8);
	// add r10,r31,r28
	ctx.r10.u64 = ctx.r31.u64 + ctx.r28.u64;
	// stb r11,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r11.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83546fd8
	ctx.lr = 0x837FE6C8;
	sub_83546FD8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r30
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, xer);
	// blt cr6,0x837fe6a8
	if (cr6.lt) goto loc_837FE6A8;
loc_837FE6D4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837FE6DC"))) PPC_WEAK_FUNC(sub_837FE6DC);
PPC_FUNC_IMPL(__imp__sub_837FE6DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837FE6E0"))) PPC_WEAK_FUNC(sub_837FE6E0);
PPC_FUNC_IMPL(__imp__sub_837FE6E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x837FE6E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,168(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,172(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// addi r31,r3,168
	ctx.r31.s64 = ctx.r3.s64 + 168;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x837fe784
	if (!cr6.eq) goto loc_837FE784;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fdfb8
	ctx.lr = 0x837FE720;
	sub_837FDFB8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
loc_837FE724:
	// rlwinm r11,r7,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,88(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 88);
	// lwz r11,92(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 92);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x837fe770
	if (cr6.eq) goto loc_837FE770;
loc_837FE73C:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// subf r5,r9,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r9.s64;
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, xer);
	// bge cr6,0x837fe760
	if (!cr6.lt) goto loc_837FE760;
	// addi r6,r7,1
	ctx.r6.s64 = ctx.r7.s64 + 1;
	// stbx r6,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r6.u8);
loc_837FE760:
	// lwz r11,92(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 92);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x837fe73c
	if (!cr6.eq) goto loc_837FE73C;
loc_837FE770:
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// blt cr6,0x837fe724
	if (cr6.lt) goto loc_837FE724;
loc_837FE784:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837fe7bc
	if (cr6.eq) goto loc_837FE7BC;
	// lwz r11,152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// lwz r10,156(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x837fe7bc
	if (cr6.eq) goto loc_837FE7BC;
loc_837FE7A0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r29
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, xer);
	// bne cr6,0x837fe7b0
	if (!cr6.eq) goto loc_837FE7B0;
	// lbz r29,5(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
loc_837FE7B0:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x837fe7a0
	if (!cr6.eq) goto loc_837FE7A0;
loc_837FE7BC:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lbzx r8,r29,r10
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r10.u32);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r3,r6,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837FE7E0"))) PPC_WEAK_FUNC(sub_837FE7E0);
PPC_FUNC_IMPL(__imp__sub_837FE7E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837FE7E8;
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
	// bl 0x82a4d1d8
	ctx.lr = 0x837FE7FC;
	sub_82A4D1D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82a4cea0
	ctx.lr = 0x837FE808;
	sub_82A4CEA0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837fe95c
	if (cr6.eq) goto loc_837FE95C;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_837FE818:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837fe95c
	if (cr6.eq) goto loc_837FE95C;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// lbz r5,1(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// li r6,11
	ctx.r6.s64 = 11;
	// li r7,-1
	ctx.r7.s64 = -1;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x837fe8a0
	if (cr6.gt) goto loc_837FE8A0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x837fe860
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837FE860;
	// bdzf 4*cr6+eq,0x837fe868
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837FE868;
	// bdzf 4*cr6+eq,0x837fe870
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837FE870;
	// bdzf 4*cr6+eq,0x837fe878
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837FE878;
	// bne cr6,0x837fe88c
	if (!cr6.eq) goto loc_837FE88C;
	// li r6,5
	ctx.r6.s64 = 5;
	// b 0x837fe8a0
	goto loc_837FE8A0;
loc_837FE860:
	// li r6,6
	ctx.r6.s64 = 6;
	// b 0x837fe8a0
	goto loc_837FE8A0;
loc_837FE868:
	// li r6,8
	ctx.r6.s64 = 8;
	// b 0x837fe8a0
	goto loc_837FE8A0;
loc_837FE870:
	// li r6,7
	ctx.r6.s64 = 7;
	// b 0x837fe89c
	goto loc_837FE89C;
loc_837FE878:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// b 0x837fe898
	goto loc_837FE898;
loc_837FE88C:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_837FE898:
	// addi r6,r11,3
	ctx.r6.s64 = ctx.r11.s64 + 3;
loc_837FE89C:
	// li r7,0
	ctx.r7.s64 = 0;
loc_837FE8A0:
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// beq cr6,0x837fe94c
	if (cr6.eq) goto loc_837FE94C;
	// li r8,0
	ctx.r8.s64 = 0;
loc_837FE8B0:
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,88(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// lwz r10,92(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x837fe904
	if (cr6.eq) goto loc_837FE904;
	// clrlwi r9,r5,24
	ctx.r9.u64 = ctx.r5.u32 & 0xFF;
loc_837FE8CC:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r3,r4,24
	ctx.r3.u64 = ctx.r4.u32 & 0xFF;
	// cmplw cr6,r3,r9
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, xer);
	// beq cr6,0x837fe8ec
	if (cr6.eq) goto loc_837FE8EC;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x837fe8cc
	if (!cr6.eq) goto loc_837FE8CC;
	// b 0x837fe904
	goto loc_837FE904;
loc_837FE8EC:
	// extsb r10,r7
	ctx.r10.s64 = ctx.r7.s8;
	// stb r6,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r6.u8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x837fe900
	if (cr6.lt) goto loc_837FE900;
	// stb r7,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r7.u8);
loc_837FE900:
	// li r6,11
	ctx.r6.s64 = 11;
loc_837FE904:
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r10,11
	cr6.compare<uint32_t>(ctx.r10.u32, 11, xer);
	// beq cr6,0x837fe94c
	if (cr6.eq) goto loc_837FE94C;
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// blt cr6,0x837fe8b0
	if (cr6.lt) goto loc_837FE8B0;
	// cmplwi cr6,r10,11
	cr6.compare<uint32_t>(ctx.r10.u32, 11, xer);
	// beq cr6,0x837fe94c
	if (cr6.eq) goto loc_837FE94C;
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// li r8,1
	ctx.r8.s64 = 1;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r5,r5,24
	ctx.r5.u64 = ctx.r5.u32 & 0xFF;
	// addi r4,r11,88
	ctx.r4.s64 = ctx.r11.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fe670
	ctx.lr = 0x837FE94C;
	sub_837FE670(ctx, base);
loc_837FE94C:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// cmplwi cr6,r28,10
	cr6.compare<uint32_t>(ctx.r28.u32, 10, xer);
	// blt cr6,0x837fe818
	if (cr6.lt) goto loc_837FE818;
loc_837FE95C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837FE964"))) PPC_WEAK_FUNC(sub_837FE964);
PPC_FUNC_IMPL(__imp__sub_837FE964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837FE968"))) PPC_WEAK_FUNC(sub_837FE968);
PPC_FUNC_IMPL(__imp__sub_837FE968) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837FE970;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,152(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r9,156(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// addi r31,r3,152
	ctx.r31.s64 = ctx.r3.s64 + 152;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x837fe9bc
	if (cr6.eq) goto loc_837FE9BC;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplw cr6,r9,r9
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r9.u32, xer);
	// beq cr6,0x837fe9b8
	if (cr6.eq) goto loc_837FE9B8;
loc_837FE998:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x837fe998
	if (!cr6.eq) goto loc_837FE998;
loc_837FE9B8:
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_837FE9BC:
	// lwz r10,72(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x837fea08
	if (cr6.eq) goto loc_837FEA08;
	// li r30,0
	ctx.r30.s64 = 0;
loc_837FE9D4:
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stb r30,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,93(r1)
	PPC_STORE_U8(ctx.r1.u32 + 93, ctx.r11.u8);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x83546fd8
	ctx.lr = 0x837FE9F0;
	sub_83546FD8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8330ee50
	ctx.lr = 0x837FE9F8;
	sub_8330EE50(ctx, base);
	// lwz r9,72(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x837fe9d4
	if (!cr6.eq) goto loc_837FE9D4;
loc_837FEA08:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837FEA10"))) PPC_WEAK_FUNC(sub_837FEA10);
PPC_FUNC_IMPL(__imp__sub_837FEA10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837FEA18;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r29,r3,116
	ctx.r29.s64 = ctx.r3.s64 + 116;
loc_837FEA28:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// ble cr6,0x837fea40
	if (!cr6.gt) goto loc_837FEA40;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837feb00
	if (cr6.eq) goto loc_837FEB00;
loc_837FEA40:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x837fea64
	if (!cr6.lt) goto loc_837FEA64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x837fea68
	if (!cr6.gt) goto loc_837FEA68;
loc_837FEA64:
	// li r11,0
	ctx.r11.s64 = 0;
loc_837FEA68:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837feabc
	if (cr6.eq) goto loc_837FEABC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r7,r11,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r11.s64;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// srawi r30,r7,2
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r30.s64 = ctx.r7.s32 >> 2;
	// bne cr6,0x837fea9c
	if (!cr6.eq) goto loc_837FEA9C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cfd460
	ctx.lr = 0x837FEA9C;
	sub_82CFD460(ctx, base);
loc_837FEA9C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837feae4
	if (cr6.eq) goto loc_837FEAE4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// b 0x837feae4
	goto loc_837FEAE4;
loc_837FEABC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x837fead4
	if (!cr6.eq) goto loc_837FEAD4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cfd460
	ctx.lr = 0x837FEAD4;
	sub_82CFD460(ctx, base);
loc_837FEAD4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837feae4
	if (cr6.eq) goto loc_837FEAE4;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
loc_837FEAE4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r28,8
	cr6.compare<int32_t>(ctx.r28.s32, 8, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// blt cr6,0x837fea28
	if (cr6.lt) goto loc_837FEA28;
loc_837FEB00:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837FEB08"))) PPC_WEAK_FUNC(sub_837FEB08);
PPC_FUNC_IMPL(__imp__sub_837FEB08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837FEB10;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// clrlwi r28,r4,24
	ctx.r28.u64 = ctx.r4.u32 & 0xFF;
	// bl 0x83800a28
	ctx.lr = 0x837FEB28;
	sub_83800A28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// blt cr6,0x837feb40
	if (cr6.lt) goto loc_837FEB40;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_837FEB40:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x838009f0
	ctx.lr = 0x837FEB4C;
	sub_838009F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837febe4
	if (cr6.eq) goto loc_837FEBE4;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// bl 0x837fea10
	ctx.lr = 0x837FEB6C;
	sub_837FEA10(ctx, base);
	// li r11,33
	ctx.r11.s64 = 33;
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,532
	ctx.r4.s64 = 532;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x837FEB84;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837feba0
	if (cr6.eq) goto loc_837FEBA0;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r31,88
	ctx.r5.s64 = ctx.r31.s64 + 88;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x837f5300
	ctx.lr = 0x837FEB9C;
	sub_837F5300(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_837FEBA0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// stw r11,256(r30)
	PPC_STORE_U32(ctx.r30.u32 + 256, ctx.r11.u32);
	// stw r10,252(r30)
	PPC_STORE_U32(ctx.r30.u32 + 252, ctx.r10.u32);
	// bne cr6,0x837febdc
	if (!cr6.eq) goto loc_837FEBDC;
	// lbz r11,47(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 47);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837febd0
	if (!cr6.eq) goto loc_837FEBD0;
	// lbz r11,52(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837febdc
	if (cr6.eq) goto loc_837FEBDC;
loc_837FEBD0:
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// lfs f0,6036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6036);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,248(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 248, temp.u32);
loc_837FEBDC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f73d60
	ctx.lr = 0x837FEBE4;
	sub_82F73D60(ctx, base);
loc_837FEBE4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837FEBF8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837FEC04"))) PPC_WEAK_FUNC(sub_837FEC04);
PPC_FUNC_IMPL(__imp__sub_837FEC04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837FEC08"))) PPC_WEAK_FUNC(sub_837FEC08);
PPC_FUNC_IMPL(__imp__sub_837FEC08) {
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
	// addi r30,r3,88
	ctx.r30.s64 = ctx.r3.s64 + 88;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x837fe588
	ctx.lr = 0x837FEC2C;
	sub_837FE588(ctx, base);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,22
	ctx.r5.s64 = 22;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fe600
	ctx.lr = 0x837FEC44;
	sub_837FE600(ctx, base);
	// lwz r9,140(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// lwz r10,136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// addi r8,r31,136
	ctx.r8.s64 = ctx.r31.s64 + 136;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x837fec88
	if (cr6.eq) goto loc_837FEC88;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplw cr6,r9,r9
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r9.u32, xer);
	// beq cr6,0x837fec84
	if (cr6.eq) goto loc_837FEC84;
loc_837FEC64:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x837fec64
	if (!cr6.eq) goto loc_837FEC64;
loc_837FEC84:
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
loc_837FEC88:
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

__attribute__((alias("__imp__sub_837FECA0"))) PPC_WEAK_FUNC(sub_837FECA0);
PPC_FUNC_IMPL(__imp__sub_837FECA0) {
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
	// lbz r4,360(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 360);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x838009f0
	ctx.lr = 0x837FECC0;
	sub_838009F0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837fece0
	if (cr6.eq) goto loc_837FECE0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fe968
	ctx.lr = 0x837FECD4;
	sub_837FE968(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fc3a0
	ctx.lr = 0x837FECE0;
	sub_837FC3A0(ctx, base);
loc_837FECE0:
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

__attribute__((alias("__imp__sub_837FECF8"))) PPC_WEAK_FUNC(sub_837FECF8);
PPC_FUNC_IMPL(__imp__sub_837FECF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x837FED00;
	__savegprlr_25(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r10,156(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// addi r28,r3,152
	ctx.r28.s64 = ctx.r3.s64 + 152;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x837fee94
	if (cr6.eq) goto loc_837FEE94;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// li r25,255
	ctx.r25.s64 = 255;
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
loc_837FED38:
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r25,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r25.u8);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,50
	cr6.compare<uint32_t>(ctx.r10.u32, 50, xer);
	// blt cr6,0x837fed38
	if (cr6.lt) goto loc_837FED38;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r9,156(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 156);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x837fed88
	if (cr6.eq) goto loc_837FED88;
loc_837FED60:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,50
	cr6.compare<uint32_t>(ctx.r10.u32, 50, xer);
	// bge cr6,0x837fed7c
	if (!cr6.lt) goto loc_837FED7C;
	// lbz r8,5(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// stbx r8,r10,r7
	PPC_STORE_U8(ctx.r10.u32 + ctx.r7.u32, ctx.r8.u8);
loc_837FED7C:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x837fed60
	if (!cr6.eq) goto loc_837FED60;
loc_837FED88:
	// li r11,27
	ctx.r11.s64 = 27;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
loc_837FED98:
	// lbzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,255
	cr6.compare<uint32_t>(ctx.r10.u32, 255, xer);
	// bne cr6,0x837fedb4
	if (!cr6.eq) goto loc_837FEDB4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x833eab80
	ctx.lr = 0x837FEDB0;
	sub_833EAB80(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
loc_837FEDB4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// cmplwi cr6,r11,50
	cr6.compare<uint32_t>(ctx.r11.u32, 50, xer);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// blt cr6,0x837fed98
	if (cr6.lt) goto loc_837FED98;
	// lwz r11,72(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 72);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// lwz r30,96(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// beq cr6,0x837fee78
	if (cr6.eq) goto loc_837FEE78;
	// lwz r29,100(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
loc_837FEDF4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r9,156(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 156);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x837fee24
	if (cr6.eq) goto loc_837FEE24;
loc_837FEE08:
	// lbz r8,5(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bne cr6,0x837fee18
	if (!cr6.eq) goto loc_837FEE18;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_837FEE18:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x837fee08
	if (!cr6.eq) goto loc_837FEE08;
loc_837FEE24:
	// cmplwi cr6,r10,255
	cr6.compare<uint32_t>(ctx.r10.u32, 255, xer);
	// beq cr6,0x837fee60
	if (cr6.eq) goto loc_837FEE60;
	// clrlwi r31,r31,24
	ctx.r31.u64 = ctx.r31.u32 & 0xFF;
	// subf r11,r30,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r30.s64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bge cr6,0x837fee78
	if (!cr6.lt) goto loc_837FEE78;
	// lbzx r11,r31,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r30.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stb r26,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r26.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r10,101(r1)
	PPC_STORE_U8(ctx.r1.u32 + 101, ctx.r10.u8);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x83546fd8
	ctx.lr = 0x837FEE58;
	sub_83546FD8(ctx, base);
	// addi r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 1;
	// clrlwi r31,r9,24
	ctx.r31.u64 = ctx.r9.u32 & 0xFF;
loc_837FEE60:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8330ee50
	ctx.lr = 0x837FEE68;
	sub_8330EE50(ctx, base);
	// lwz r11,72(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 72);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x837fedf4
	if (!cr6.eq) goto loc_837FEDF4;
loc_837FEE78:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x837fee94
	if (cr6.eq) goto loc_837FEE94;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825952b8
	ctx.lr = 0x837FEE94;
	sub_825952B8(ctx, base);
loc_837FEE94:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837FEE9C"))) PPC_WEAK_FUNC(sub_837FEE9C);
PPC_FUNC_IMPL(__imp__sub_837FEE9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837FEEA0"))) PPC_WEAK_FUNC(sub_837FEEA0);
PPC_FUNC_IMPL(__imp__sub_837FEEA0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x837feed8
	if (cr6.eq) goto loc_837FEED8;
loc_837FEEC4:
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x837fc788
	ctx.lr = 0x837FEECC;
	sub_837FC788(ctx, base);
	// addi r31,r31,348
	ctx.r31.s64 = ctx.r31.s64 + 348;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bne cr6,0x837feec4
	if (!cr6.eq) goto loc_837FEEC4;
loc_837FEED8:
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

__attribute__((alias("__imp__sub_837FEEF0"))) PPC_WEAK_FUNC(sub_837FEEF0);
PPC_FUNC_IMPL(__imp__sub_837FEEF0) {
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
	ctx.lr = 0x837FEEF8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x837ff034
	if (cr6.eq) goto loc_837FF034;
	// addi r30,r5,72
	ctx.r30.s64 = ctx.r5.s64 + 72;
	// addi r31,r3,72
	ctx.r31.s64 = ctx.r3.s64 + 72;
	// li r26,-1
	ctx.r26.s64 = -1;
loc_837FEF18:
	// lwz r7,-72(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -72);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r31,-40
	ctx.r9.s64 = ctx.r31.s64 + -40;
	// addi r8,r30,-40
	ctx.r8.s64 = ctx.r30.s64 + -40;
	// stw r7,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r7.u32);
	// lfs f0,-68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -68);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-68(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + -68, temp.u32);
	// lwz r6,-64(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -64);
	// stw r6,-64(r30)
	PPC_STORE_U32(ctx.r30.u32 + -64, ctx.r6.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lwz r5,-60(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -60);
	// stw r5,-60(r30)
	PPC_STORE_U32(ctx.r30.u32 + -60, ctx.r5.u32);
	// lwz r4,-56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -56);
	// stw r4,-56(r30)
	PPC_STORE_U32(ctx.r30.u32 + -56, ctx.r4.u32);
	// lwz r3,-52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -52);
	// stw r3,-52(r30)
	PPC_STORE_U32(ctx.r30.u32 + -52, ctx.r3.u32);
	// lwz r10,-48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -48);
	// stw r10,-48(r30)
	PPC_STORE_U32(ctx.r30.u32 + -48, ctx.r10.u32);
	// lwz r7,-44(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -44);
	// stw r7,-44(r30)
	PPC_STORE_U32(ctx.r30.u32 + -44, ctx.r7.u32);
loc_837FEF6C:
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x837fef6c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837FEF6C;
	// lwz r11,-20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// addi r28,r31,16
	ctx.r28.s64 = ctx.r31.s64 + 16;
	// addi r27,r30,16
	ctx.r27.s64 = ctx.r30.s64 + 16;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r11,-20(r30)
	PPC_STORE_U32(ctx.r30.u32 + -20, ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,-16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// stw r10,-16(r30)
	PPC_STORE_U32(ctx.r30.u32 + -16, ctx.r10.u32);
	// lwz r9,-12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// stw r9,-12(r30)
	PPC_STORE_U32(ctx.r30.u32 + -12, ctx.r9.u32);
	// lfs f0,-8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + -8, temp.u32);
	// lfs f13,-4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,-4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + -4, temp.u32);
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,0(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,4(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lbz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// stb r8,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r8.u8);
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r7,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r7.u32);
	// bl 0x8259cb28
	ctx.lr = 0x837FEFE0;
	sub_8259CB28(ctx, base);
	// subf r27,r27,r28
	ctx.r27.s64 = ctx.r28.s64 - ctx.r27.s64;
	// addi r29,r30,44
	ctx.r29.s64 = ctx.r30.s64 + 44;
	// li r28,8
	ctx.r28.s64 = 8;
loc_837FEFEC:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r4,r27,r29
	ctx.r4.u64 = ctx.r27.u64 + ctx.r29.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8259cb28
	ctx.lr = 0x837FF000;
	sub_8259CB28(ctx, base);
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// bne 0x837fefec
	if (!cr0.eq) goto loc_837FEFEC;
	// lfs f0,268(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	ctx.f0.f64 = double(temp.f32);
	// addi r25,r25,348
	ctx.r25.s64 = ctx.r25.s64 + 348;
	// stfs f0,268(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 268, temp.u32);
	// lfs f13,272(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	ctx.f13.f64 = double(temp.f32);
	// addi r31,r31,348
	ctx.r31.s64 = ctx.r31.s64 + 348;
	// stfs f13,272(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 272, temp.u32);
	// addi r30,r30,348
	ctx.r30.s64 = ctx.r30.s64 + 348;
	// addi r11,r31,-72
	ctx.r11.s64 = ctx.r31.s64 + -72;
	// cmplw cr6,r11,r24
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, xer);
	// bne cr6,0x837fef18
	if (!cr6.eq) goto loc_837FEF18;
loc_837FF034:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837FF040"))) PPC_WEAK_FUNC(sub_837FF040);
PPC_FUNC_IMPL(__imp__sub_837FF040) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837FF048;
	__savegprlr_28(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,356(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 356);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,4
	ctx.r28.s64 = 4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bgt cr6,0x837ff24c
	if (cr6.gt) goto loc_837FF24C;
	// li r29,0
	ctx.r29.s64 = 0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x837ff124
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837FF124;
	// bdzf 4*cr6+eq,0x837ff1ac
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837FF1AC;
	// bdzf 4*cr6+eq,0x837ff1cc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837FF1CC;
	// bdzf 4*cr6+eq,0x837ff3f4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837FF3F4;
	// bdzf 4*cr6+eq,0x837ff4e4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837FF4E4;
	// bdzf 4*cr6+eq,0x837ff6c4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837FF6C4;
	// bne cr6,0x837ff6e4
	if (!cr6.eq) goto loc_837FF6E4;
	// lbz r11,62(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 62);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x837ff244
	if (cr6.eq) goto loc_837FF244;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,360(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 360);
	// bl 0x837feb08
	ctx.lr = 0x837FF0A4;
	sub_837FEB08(ctx, base);
	// stw r3,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837ff24c
	if (cr6.eq) goto loc_837FF24C;
	// lbz r11,67(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 67);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837ff11c
	if (cr6.eq) goto loc_837FF11C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,360(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 360);
	// bl 0x837f9890
	ctx.lr = 0x837FF0C8;
	sub_837F9890(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837ff0ec
	if (cr6.eq) goto loc_837FF0EC;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837feb08
	ctx.lr = 0x837FF0E4;
	sub_837FEB08(ctx, base);
	// stw r3,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r3.u32);
	// stb r30,429(r31)
	PPC_STORE_U8(ctx.r31.u32 + 429, ctx.r30.u8);
loc_837FF0EC:
	// lbz r11,360(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 360);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r11,429(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 429);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x837ff11c
	if (!cr6.eq) goto loc_837FF11C;
	// lwz r10,424(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// li r29,0
	ctx.r29.s64 = 0;
	// stb r11,428(r31)
	PPC_STORE_U8(ctx.r31.u32 + 428, ctx.r11.u8);
	// stb r29,429(r31)
	PPC_STORE_U8(ctx.r31.u32 + 429, ctx.r29.u8);
	// stw r29,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r29.u32);
	// stw r10,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r10.u32);
loc_837FF11C:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r11.u32);
loc_837FF124:
	// lbz r11,62(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 62);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x837ff244
	if (cr6.eq) goto loc_837FF244;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,184(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837f99d8
	ctx.lr = 0x837FF140;
	sub_837F99D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837ff24c
	if (cr6.eq) goto loc_837FF24C;
	// lwz r4,420(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x837ff170
	if (cr6.eq) goto loc_837FF170;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837f99d8
	ctx.lr = 0x837FF164;
	sub_837F99D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837ff24c
	if (cr6.eq) goto loc_837FF24C;
loc_837FF170:
	// lwz r4,424(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x837ff194
	if (cr6.eq) goto loc_837FF194;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837f99d8
	ctx.lr = 0x837FF188;
	sub_837F99D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837ff24c
	if (cr6.eq) goto loc_837FF24C;
loc_837FF194:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r5,360(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 360);
	// lwz r4,184(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// bl 0x837fd7b0
	ctx.lr = 0x837FF1A4;
	sub_837FD7B0(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r11.u32);
loc_837FF1AC:
	// lbz r11,62(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 62);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x837ff244
	if (cr6.eq) goto loc_837FF244;
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmpwi cr6,r10,5
	cr6.compare<int32_t>(ctx.r10.s32, 5, xer);
	// bne cr6,0x837ff24c
	if (!cr6.eq) goto loc_837FF24C;
	// stw r28,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r28.u32);
loc_837FF1CC:
	// lbz r11,62(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 62);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x837ff318
	if (!cr6.eq) goto loc_837FF318;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83800a28
	ctx.lr = 0x837FF1E0;
	sub_83800A28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83800a58
	ctx.lr = 0x837FF1EC;
	sub_83800A58(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83800a28
	ctx.lr = 0x837FF1FC;
	sub_83800A28(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x837FF210;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,96(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837FF228;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x837ff244
	if (!cr6.eq) goto loc_837FF244;
	// bl 0x837da198
	ctx.lr = 0x837FF238;
	sub_837DA198(ctx, base);
	// lbz r11,11368(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11368);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837ff24c
	if (cr6.eq) goto loc_837FF24C;
loc_837FF244:
	// li r11,8
	ctx.r11.s64 = 8;
loc_837FF248:
	// stw r11,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r11.u32);
loc_837FF24C:
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837ff268
	if (cr6.eq) goto loc_837FF268;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837FF268;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_837FF268:
	// lwz r3,420(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837ff284
	if (cr6.eq) goto loc_837FF284;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837FF284;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_837FF284:
	// lwz r3,424(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837ff2a0
	if (cr6.eq) goto loc_837FF2A0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837FF2A0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_837FF2A0:
	// lwz r11,356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x837ff30c
	if (!cr6.eq) goto loc_837FF30C;
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x837ff30c
	if (cr6.eq) goto loc_837FF30C;
loc_837FF2C0:
	// lwz r30,16(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,100
	ctx.r5.s64 = 100;
	// addi r4,r30,832
	ctx.r4.s64 = ctx.r30.s64 + 832;
	// bl 0x831ce980
	ctx.lr = 0x837FF2D4;
	sub_831CE980(ctx, base);
	// lbz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 168);
	// cmplwi cr6,r10,5
	cr6.compare<uint32_t>(ctx.r10.u32, 5, xer);
	// bne cr6,0x837ff2f4
	if (!cr6.eq) goto loc_837FF2F4;
	// lwz r3,68(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837ff2f4
	if (cr6.eq) goto loc_837FF2F4;
	// bl 0x837b1508
	ctx.lr = 0x837FF2F0;
	sub_837B1508(ctx, base);
	// stb r28,976(r30)
	PPC_STORE_U8(ctx.r30.u32 + 976, ctx.r28.u8);
loc_837FF2F4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8330ee50
	ctx.lr = 0x837FF2FC;
	sub_8330EE50(ctx, base);
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x837ff2c0
	if (!cr6.eq) goto loc_837FF2C0;
loc_837FF30C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_837FF318:
	// lbz r11,348(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 348);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837ff330
	if (!cr6.eq) goto loc_837FF330;
	// lbz r11,345(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 345);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837ff3ac
	if (cr6.eq) goto loc_837FF3AC;
loc_837FF330:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,360(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 360);
	// bl 0x83800a58
	ctx.lr = 0x837FF33C;
	sub_83800A58(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x837ff3ac
	if (cr6.eq) goto loc_837FF3AC;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,360(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 360);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x837FF360;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,96(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837FF378;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x837da198
	ctx.lr = 0x837FF37C;
	sub_837DA198(ctx, base);
	// lbz r9,11368(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11368);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x837ff3ac
	if (!cr6.eq) goto loc_837FF3AC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837FF3A0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x837ff24c
	if (cr6.eq) goto loc_837FF24C;
loc_837FF3AC:
	// lbz r11,345(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 345);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837ff24c
	if (cr6.eq) goto loc_837FF24C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,116(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837FF3CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,84(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 84);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x837FF3E0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fe130
	ctx.lr = 0x837FF3E8;
	sub_837FE130(ctx, base);
	// li r7,5
	ctx.r7.s64 = 5;
	// stw r7,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r7.u32);
	// b 0x837ff24c
	goto loc_837FF24C;
loc_837FF3F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83800a28
	ctx.lr = 0x837FF3FC;
	sub_83800A28(ctx, base);
	// lbz r11,360(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 360);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x837ff41c
	if (cr6.lt) goto loc_837FF41C;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837ff41c
	if (cr6.eq) goto loc_837FF41C;
	// stb r29,360(r31)
	PPC_STORE_U8(ctx.r31.u32 + 360, ctx.r29.u8);
loc_837FF41C:
	// lwz r11,424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837ff464
	if (!cr6.eq) goto loc_837FF464;
	// lbz r11,360(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 360);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x837f9890
	ctx.lr = 0x837FF43C;
	sub_837F9890(ctx, base);
	// lbz r10,360(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 360);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// ble cr6,0x837ff464
	if (!cr6.gt) goto loc_837FF464;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837feb08
	ctx.lr = 0x837FF45C;
	sub_837FEB08(ctx, base);
	// stw r3,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r3.u32);
	// stb r30,429(r31)
	PPC_STORE_U8(ctx.r31.u32 + 429, ctx.r30.u8);
loc_837FF464:
	// lwz r10,424(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837ff4a0
	if (cr6.eq) goto loc_837FF4A0;
	// lbz r11,429(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 429);
	// lbz r9,360(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 360);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bne cr6,0x837ff4a0
	if (!cr6.eq) goto loc_837FF4A0;
	// lwz r9,420(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x837ff4a0
	if (!cr6.eq) goto loc_837FF4A0;
	// stw r10,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r10.u32);
	// stb r11,428(r31)
	PPC_STORE_U8(ctx.r31.u32 + 428, ctx.r11.u8);
	// stw r29,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r29.u32);
	// stb r29,429(r31)
	PPC_STORE_U8(ctx.r31.u32 + 429, ctx.r29.u8);
loc_837FF4A0:
	// lwz r11,420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837ff4c4
	if (!cr6.eq) goto loc_837FF4C4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,360(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 360);
	// bl 0x837feb08
	ctx.lr = 0x837FF4B8;
	sub_837FEB08(ctx, base);
	// lbz r11,360(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 360);
	// stw r3,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r3.u32);
	// stb r11,428(r31)
	PPC_STORE_U8(ctx.r31.u32 + 428, ctx.r11.u8);
loc_837FF4C4:
	// lwz r11,420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837ff4dc
	if (cr6.eq) goto loc_837FF4DC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,432(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 432, temp.u32);
loc_837FF4DC:
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r11.u32);
loc_837FF4E4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837FF4F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x837ff518
	if (cr6.eq) goto loc_837FF518;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837FF518;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_837FF518:
	// lbz r11,63(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 63);
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837ff558
	if (cr6.eq) goto loc_837FF558;
	// lbz r11,407(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 407);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// bne cr6,0x837ff548
	if (!cr6.eq) goto loc_837FF548;
	// lbz r11,65(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 65);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837ff548
	if (cr6.eq) goto loc_837FF548;
	// stb r30,62(r31)
	PPC_STORE_U8(ctx.r31.u32 + 62, ctx.r30.u8);
	// b 0x837ff558
	goto loc_837FF558;
loc_837FF548:
	// lbz r11,344(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 344);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837ff558
	if (!cr6.eq) goto loc_837FF558;
	// stb r30,344(r31)
	PPC_STORE_U8(ctx.r31.u32 + 344, ctx.r30.u8);
loc_837FF558:
	// lbz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837ff594
	if (cr6.eq) goto loc_837FF594;
	// lwz r11,424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837ff584
	if (!cr6.eq) goto loc_837FF584;
	// lwz r11,420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837ff584
	if (!cr6.eq) goto loc_837FF584;
	// stb r30,62(r31)
	PPC_STORE_U8(ctx.r31.u32 + 62, ctx.r30.u8);
	// b 0x837ff590
	goto loc_837FF590;
loc_837FF584:
	// lbz r11,62(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 62);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837ff594
	if (cr6.eq) goto loc_837FF594;
loc_837FF590:
	// stb r29,64(r31)
	PPC_STORE_U8(ctx.r31.u32 + 64, ctx.r29.u8);
loc_837FF594:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837f9aa0
	ctx.lr = 0x837FF59C;
	sub_837F9AA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837ff5b4
	if (!cr6.eq) goto loc_837FF5B4;
	// lbz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837ff24c
	if (cr6.eq) goto loc_837FF24C;
loc_837FF5B4:
	// lwz r8,420(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x837ff244
	if (cr6.eq) goto loc_837FF244;
	// lbz r11,62(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 62);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x837ff244
	if (cr6.eq) goto loc_837FF244;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f13,432(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32211
	ctx.r10.s64 = -2110980096;
	// lfs f0,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f0,5488(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5488);
	ctx.f0.f64 = double(temp.f32);
	// stfs f12,432(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 432, temp.u32);
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x837ff5f8
	if (!cr6.gt) goto loc_837FF5F8;
	// stb r30,62(r31)
	PPC_STORE_U8(ctx.r31.u32 + 62, ctx.r30.u8);
	// b 0x837ff24c
	goto loc_837FF24C;
loc_837FF5F8:
	// lwz r9,424(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// addi r30,r31,424
	ctx.r30.s64 = ctx.r31.s64 + 424;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x837ff63c
	if (cr6.eq) goto loc_837FF63C;
	// lbz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837ff63c
	if (cr6.eq) goto loc_837FF63C;
	// lbz r10,429(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 429);
	// lbz r11,428(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 428);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// ble cr6,0x837ff63c
	if (!cr6.gt) goto loc_837FF63C;
	// stw r9,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r9.u32);
	// stb r10,428(r31)
	PPC_STORE_U8(ctx.r31.u32 + 428, ctx.r10.u8);
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// stb r11,429(r31)
	PPC_STORE_U8(ctx.r31.u32 + 429, ctx.r11.u8);
loc_837FF63C:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,420(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837f99d8
	ctx.lr = 0x837FF64C;
	sub_837F99D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837ff24c
	if (cr6.eq) goto loc_837FF24C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837ff684
	if (cr6.eq) goto loc_837FF684;
	// lbz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837ff684
	if (cr6.eq) goto loc_837FF684;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fa3f0
	ctx.lr = 0x837FF67C;
	sub_837FA3F0(ctx, base);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// stb r29,429(r31)
	PPC_STORE_U8(ctx.r31.u32 + 429, ctx.r29.u8);
loc_837FF684:
	// stb r29,64(r31)
	PPC_STORE_U8(ctx.r31.u32 + 64, ctx.r29.u8);
	// addi r4,r31,184
	ctx.r4.s64 = ctx.r31.s64 + 184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fa3f0
	ctx.lr = 0x837FF694;
	sub_837FA3F0(ctx, base);
	// lwz r11,420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// lbz r10,428(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 428);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r29.u32);
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stb r29,428(r31)
	PPC_STORE_U8(ctx.r31.u32 + 428, ctx.r29.u8);
	// clrlwi r5,r10,24
	ctx.r5.u64 = ctx.r10.u32 & 0xFF;
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// stb r10,360(r31)
	PPC_STORE_U8(ctx.r31.u32 + 360, ctx.r10.u8);
	// bl 0x837fd7b0
	ctx.lr = 0x837FF6BC;
	sub_837FD7B0(ctx, base);
	// li r9,7
	ctx.r9.s64 = 7;
	// stw r9,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r9.u32);
loc_837FF6C4:
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmpwi cr6,r10,5
	cr6.compare<int32_t>(ctx.r10.s32, 5, xer);
	// bne cr6,0x837ff24c
	if (!cr6.eq) goto loc_837FF24C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fe130
	ctx.lr = 0x837FF6DC;
	sub_837FE130(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x837ff248
	goto loc_837FF248;
loc_837FF6E4:
	// addi r4,r31,424
	ctx.r4.s64 = ctx.r31.s64 + 424;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fa3f0
	ctx.lr = 0x837FF6F0;
	sub_837FA3F0(ctx, base);
	// addi r4,r31,420
	ctx.r4.s64 = ctx.r31.s64 + 420;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fa3f0
	ctx.lr = 0x837FF6FC;
	sub_837FA3F0(ctx, base);
	// addi r4,r31,184
	ctx.r4.s64 = ctx.r31.s64 + 184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fa3f0
	ctx.lr = 0x837FF708;
	sub_837FA3F0(ctx, base);
	// lbz r11,53(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 53);
	// li r4,0
	ctx.r4.s64 = 0;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r5,r10,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x837fc700
	ctx.lr = 0x837FF720;
	sub_837FC700(ctx, base);
	// lbz r9,344(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 344);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x837ff734
	if (cr6.eq) goto loc_837FF734;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,344(r31)
	PPC_STORE_U8(ctx.r31.u32 + 344, ctx.r11.u8);
loc_837FF734:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837FF740"))) PPC_WEAK_FUNC(sub_837FF740);
PPC_FUNC_IMPL(__imp__sub_837FF740) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x837FF748;
	__savegprlr_27(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,336(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r29,r5,1
	ctx.r29.s64 = ctx.r5.s64 + 1;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x837ff7d0
	if (cr6.eq) goto loc_837FF7D0;
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837ff77c
	if (!cr6.eq) goto loc_837FF77C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a9e30
	ctx.lr = 0x837FF77C;
	sub_825A9E30(ctx, base);
loc_837FF77C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837ff798
	if (!cr6.eq) goto loc_837FF798;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_837FF798:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837ff7b8
	if (cr6.eq) goto loc_837FF7B8;
	// cmplwi cr6,r30,5
	cr6.compare<uint32_t>(ctx.r30.u32, 5, xer);
	// bge cr6,0x837ff7b8
	if (!cr6.lt) goto loc_837FF7B8;
	// addi r10,r30,11
	ctx.r10.s64 = ctx.r30.s64 + 11;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r9,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
loc_837FF7B8:
	// lwz r11,336(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 336);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837ff7d0
	if (cr6.eq) goto loc_837FF7D0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_837FF7D0:
	// bl 0x837da198
	ctx.lr = 0x837FF7D4;
	sub_837DA198(ctx, base);
	// lwz r31,68(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// bl 0x837da198
	ctx.lr = 0x837FF7DC;
	sub_837DA198(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r6,64(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// bl 0x8379eda8
	ctx.lr = 0x837FF7F8;
	sub_8379EDA8(ctx, base);
	// li r10,33
	ctx.r10.s64 = 33;
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r4,1280
	ctx.r4.s64 = 1280;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x837FF810;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837ff828
	if (cr6.eq) goto loc_837FF828;
	// extsb r4,r27
	ctx.r4.s64 = ctx.r27.s8;
	// bl 0x83802450
	ctx.lr = 0x837FF820;
	sub_83802450(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x837ff82c
	goto loc_837FF82C;
loc_837FF828:
	// li r31,0
	ctx.r31.s64 = 0;
loc_837FF82C:
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r30,24
	ctx.r6.u64 = ctx.r30.u32 & 0xFF;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83804bc8
	ctx.lr = 0x837FF844;
	sub_83804BC8(ctx, base);
	// bl 0x837da198
	ctx.lr = 0x837FF848;
	sub_837DA198(ctx, base);
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x837ff868
	if (!cr6.eq) goto loc_837FF868;
	// bl 0x837da198
	ctx.lr = 0x837FF858;
	sub_837DA198(ctx, base);
	// lbz r11,192(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 192);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x837ff86c
	if (!cr6.eq) goto loc_837FF86C;
loc_837FF868:
	// li r11,0
	ctx.r11.s64 = 0;
loc_837FF86C:
	// stb r11,1056(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1056, ctx.r11.u8);
	// bl 0x837da198
	ctx.lr = 0x837FF874;
	sub_837DA198(ctx, base);
	// bl 0x837d86e0
	ctx.lr = 0x837FF878;
	sub_837D86E0(ctx, base);
	// stb r3,1188(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1188, ctx.r3.u8);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r28,68
	ctx.r3.s64 = ctx.r28.s64 + 68;
	// bl 0x833e3748
	ctx.lr = 0x837FF88C;
	sub_833E3748(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837FF898"))) PPC_WEAK_FUNC(sub_837FF898);
PPC_FUNC_IMPL(__imp__sub_837FF898) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,6040
	ctx.r9.s64 = ctx.r11.s64 + 6040;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r8,27
	ctx.r8.s64 = 27;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stb r30,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r30.u8);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x837fd658
	ctx.lr = 0x837FF904;
	sub_837FD658(ctx, base);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_837FF92C"))) PPC_WEAK_FUNC(sub_837FF92C);
PPC_FUNC_IMPL(__imp__sub_837FF92C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837FF930"))) PPC_WEAK_FUNC(sub_837FF930);
PPC_FUNC_IMPL(__imp__sub_837FF930) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837FF938;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r11,6040
	ctx.r10.s64 = ctx.r11.s64 + 6040;
	// addi r31,r3,20
	ctx.r31.s64 = ctx.r3.s64 + 20;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r28,2
	ctx.r28.s64 = 2;
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837ff97c
	if (cr6.eq) goto loc_837FF97C;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x837feea0
	ctx.lr = 0x837FF96C;
	sub_837FEEA0(ctx, base);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x837FF97C;
	sub_825952B8(ctx, base);
loc_837FF97C:
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x837ff9a4
	if (cr6.eq) goto loc_837FF9A4;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x837FF9A4;
	sub_825952B8(ctx, base);
loc_837FF9A4:
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// stw r29,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837FF9B8"))) PPC_WEAK_FUNC(sub_837FF9B8);
PPC_FUNC_IMPL(__imp__sub_837FF9B8) {
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
	// bl 0x837ff930
	ctx.lr = 0x837FF9D8;
	sub_837FF930(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837ff9f0
	if (cr6.eq) goto loc_837FF9F0;
	// bl 0x82416268
	ctx.lr = 0x837FF9EC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_837FF9F0:
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

__attribute__((alias("__imp__sub_837FFA08"))) PPC_WEAK_FUNC(sub_837FFA08);
PPC_FUNC_IMPL(__imp__sub_837FFA08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac0
	ctx.lr = 0x837FFA10;
	__savegprlr_18(ctx, base);
	// stfd f31,-128(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// bl 0x837ff898
	ctx.lr = 0x837FFA24;
	sub_837FF898(ctx, base);
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r10,r11,6064
	ctx.r10.s64 = ctx.r11.s64 + 6064;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x8381b9d0
	ctx.lr = 0x837FFA40;
	sub_8381B9D0(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r28,r31,228
	ctx.r28.s64 = ctx.r31.s64 + 228;
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// addi r22,r31,208
	ctx.r22.s64 = ctx.r31.s64 + 208;
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// lfs f31,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stfs f31,208(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 208, temp.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// stfs f31,212(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 212, temp.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stfs f31,216(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 216, temp.u32);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// stfs f31,220(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 220, temp.u32);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// stw r30,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r30.u32);
	// stw r30,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r30.u32);
	// bl 0x82a5c280
	ctx.lr = 0x837FFAB4;
	sub_82A5C280(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// li r29,-1
	ctx.r29.s64 = -1;
	// li r18,1
	ctx.r18.s64 = 1;
	// addi r24,r11,-25508
	ctx.r24.s64 = ctx.r11.s64 + -25508;
	// stw r29,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r29.u32);
	// addi r25,r31,260
	ctx.r25.s64 = ctx.r31.s64 + 260;
	// stw r24,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r24.u32);
	// mr r26,r18
	ctx.r26.u64 = ctx.r18.u64;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
loc_837FFAD8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a5c280
	ctx.lr = 0x837FFAE0;
	sub_82A5C280(ctx, base);
	// stw r24,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r24.u32);
	// stw r29,28(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28, ctx.r29.u32);
	// addic. r26,r26,-1
	xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	cr0.compare<int32_t>(ctx.r26.s32, 0, xer);
	// addi r27,r27,32
	ctx.r27.s64 = ctx.r27.s64 + 32;
	// bge 0x837ffad8
	if (!cr0.lt) goto loc_837FFAD8;
	// li r20,2
	ctx.r20.s64 = 2;
	// stw r30,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r30.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r27,r31,376
	ctx.r27.s64 = ctx.r31.s64 + 376;
	// bl 0x82595718
	ctx.lr = 0x837FFB14;
	sub_82595718(ctx, base);
	// stw r3,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r3.u32);
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	// li r4,12
	ctx.r4.s64 = 12;
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r20,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r20.u32);
	// addi r23,r31,388
	ctx.r23.s64 = ctx.r31.s64 + 388;
	// stw r30,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r30.u32);
	// bl 0x82595718
	ctx.lr = 0x837FFB40;
	sub_82595718(ctx, base);
	// stw r3,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r3.u32);
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r9,388(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r3,r10,-6352
	ctx.r3.s64 = ctx.r10.s64 + -6352;
	// stw r9,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// bl 0x833d9058
	ctx.lr = 0x837FFB64;
	sub_833D9058(ctx, base);
	// bl 0x837da198
	ctx.lr = 0x837FFB68;
	sub_837DA198(ctx, base);
	// li r4,1000
	ctx.r4.s64 = 1000;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// bl 0x837d8690
	ctx.lr = 0x837FFB74;
	sub_837D8690(ctx, base);
	// addi r5,r3,1
	ctx.r5.s64 = ctx.r3.s64 + 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826501d8
	ctx.lr = 0x837FFB84;
	sub_826501D8(ctx, base);
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// stw r29,28(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28, ctx.r29.u32);
	// mr r24,r20
	ctx.r24.u64 = ctx.r20.u64;
loc_837FFB90:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1000
	ctx.r4.s64 = 1000;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a5c5b0
	ctx.lr = 0x837FFBA0;
	sub_82A5C5B0(ctx, base);
	// addi r5,r3,1
	ctx.r5.s64 = ctx.r3.s64 + 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x826501d8
	ctx.lr = 0x837FFBB0;
	sub_826501D8(ctx, base);
	// stw r29,28(r26)
	PPC_STORE_U32(ctx.r26.u32 + 28, ctx.r29.u32);
	// addic. r24,r24,-1
	xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	cr0.compare<int32_t>(ctx.r24.s32, 0, xer);
	// addi r26,r26,32
	ctx.r26.s64 = ctx.r26.s64 + 32;
	// bne 0x837ffb90
	if (!cr0.eq) goto loc_837FFB90;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// stw r19,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r19.u32);
	// lfs f0,-26260(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// stfs f31,372(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 372, temp.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stfs f0,188(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 188, temp.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r30,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r30.u32);
	// stw r30,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r30.u32);
	// stb r30,360(r31)
	PPC_STORE_U8(ctx.r31.u32 + 360, ctx.r30.u8);
	// stw r30,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r30.u32);
	// stw r30,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r30.u32);
	// bl 0x83740868
	ctx.lr = 0x837FFBF8;
	sub_83740868(ctx, base);
	// stfs f1,192(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 192, temp.u32);
	// stfs f31,196(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 196, temp.u32);
	// stfs f31,200(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 200, temp.u32);
	// stfs f31,204(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 204, temp.u32);
	// lwz r9,11364(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + 11364);
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// beq cr6,0x837ffc3c
	if (cr6.eq) goto loc_837FFC3C;
	// bl 0x830ff290
	ctx.lr = 0x837FFC18;
	sub_830FF290(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837ffc3c
	if (cr6.eq) goto loc_837FFC3C;
	// bl 0x830ff290
	ctx.lr = 0x837FFC24;
	sub_830FF290(ctx, base);
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,192(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 192, temp.u32);
loc_837FFC3C:
	// stfs f31,0(r22)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r22.u32 + 0, temp.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stfs f31,4(r22)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r22.u32 + 4, temp.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stfs f31,8(r22)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r22.u32 + 8, temp.u32);
	// stfs f31,220(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 220, temp.u32);
	// stb r30,224(r31)
	PPC_STORE_U8(ctx.r31.u32 + 224, ctx.r30.u8);
	// lwz r11,28(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// bne cr6,0x837ffc74
	if (!cr6.eq) goto loc_837FFC74;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// bl 0x82a5c5b0
	ctx.lr = 0x837FFC6C;
	sub_82A5C5B0(ctx, base);
	// stw r3,28(r25)
	PPC_STORE_U32(ctx.r25.u32 + 28, ctx.r3.u32);
	// b 0x837ffc90
	goto loc_837FFC90;
loc_837FFC74:
	// li r4,768
	ctx.r4.s64 = 768;
	// bl 0x82a5c5b0
	ctx.lr = 0x837FFC7C;
	sub_82A5C5B0(ctx, base);
	// lwz r11,28(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r10,r11,256
	ctx.r10.s64 = ctx.r11.s64 + 256;
	// clrlwi r9,r10,22
	ctx.r9.u64 = ctx.r10.u32 & 0x3FF;
	// stw r9,28(r25)
	PPC_STORE_U32(ctx.r25.u32 + 28, ctx.r9.u32);
loc_837FFC90:
	// lwz r11,28(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mulli r10,r11,100
	ctx.r10.s64 = ctx.r11.s64 * 100;
	// rlwinm r9,r10,22,10,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x3FFFFF;
	// stw r9,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r9.u32);
	// lwz r8,28(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28);
	// cmpwi cr6,r8,-1
	cr6.compare<int32_t>(ctx.r8.s32, -1, xer);
	// bne cr6,0x837ffcc4
	if (!cr6.eq) goto loc_837FFCC4;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// bl 0x82a5c5b0
	ctx.lr = 0x837FFCBC;
	sub_82A5C5B0(ctx, base);
	// stw r3,28(r25)
	PPC_STORE_U32(ctx.r25.u32 + 28, ctx.r3.u32);
	// b 0x837ffce0
	goto loc_837FFCE0;
loc_837FFCC4:
	// li r4,768
	ctx.r4.s64 = 768;
	// bl 0x82a5c5b0
	ctx.lr = 0x837FFCCC;
	sub_82A5C5B0(ctx, base);
	// lwz r11,28(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r10,r11,256
	ctx.r10.s64 = ctx.r11.s64 + 256;
	// clrlwi r9,r10,22
	ctx.r9.u64 = ctx.r10.u32 & 0x3FF;
	// stw r9,28(r25)
	PPC_STORE_U32(ctx.r25.u32 + 28, ctx.r9.u32);
loc_837FFCE0:
	// lwz r11,28(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28);
	// stb r30,62(r31)
	PPC_STORE_U8(ctx.r31.u32 + 62, ctx.r30.u8);
	// mulli r10,r11,100
	ctx.r10.s64 = ctx.r11.s64 * 100;
	// stb r30,63(r31)
	PPC_STORE_U8(ctx.r31.u32 + 63, ctx.r30.u8);
	// stb r30,344(r31)
	PPC_STORE_U8(ctx.r31.u32 + 344, ctx.r30.u8);
	// stb r30,64(r31)
	PPC_STORE_U8(ctx.r31.u32 + 64, ctx.r30.u8);
	// stb r18,65(r31)
	PPC_STORE_U8(ctx.r31.u32 + 65, ctx.r18.u8);
	// stb r30,66(r31)
	PPC_STORE_U8(ctx.r31.u32 + 66, ctx.r30.u8);
	// stb r30,67(r31)
	PPC_STORE_U8(ctx.r31.u32 + 67, ctx.r30.u8);
	// stb r30,345(r31)
	PPC_STORE_U8(ctx.r31.u32 + 345, ctx.r30.u8);
	// stb r30,348(r31)
	PPC_STORE_U8(ctx.r31.u32 + 348, ctx.r30.u8);
	// rlwinm r9,r10,22,10,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x3FFFFF;
	// stw r9,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r9.u32);
	// stb r30,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r30.u8);
	// stb r30,58(r31)
	PPC_STORE_U8(ctx.r31.u32 + 58, ctx.r30.u8);
	// stb r30,59(r31)
	PPC_STORE_U8(ctx.r31.u32 + 59, ctx.r30.u8);
	// stb r18,61(r31)
	PPC_STORE_U8(ctx.r31.u32 + 61, ctx.r18.u8);
	// stb r30,346(r31)
	PPC_STORE_U8(ctx.r31.u32 + 346, ctx.r30.u8);
	// stb r30,347(r31)
	PPC_STORE_U8(ctx.r31.u32 + 347, ctx.r30.u8);
	// stb r18,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r18.u8);
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
	// stb r18,50(r31)
	PPC_STORE_U8(ctx.r31.u32 + 50, ctx.r18.u8);
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
	// lwz r8,0(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r8,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r8.u32);
	// lwz r7,0(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stw r7,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r7.u32);
	// lwz r6,0(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplw cr6,r4,r6
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r6.u32, xer);
	// stw r30,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r30.u32);
	// beq cr6,0x837ffda8
	if (cr6.eq) goto loc_837FFDA8;
loc_837FFD88:
	// lwz r29,0(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stw r20,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r20.u32);
	// bl 0x825952b8
	ctx.lr = 0x837FFD98;
	sub_825952B8(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// bne cr6,0x837ffd88
	if (!cr6.eq) goto loc_837FFD88;
loc_837FFDA8:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r9,0(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// stw r30,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r30.u32);
	// beq cr6,0x837ffdec
	if (cr6.eq) goto loc_837FFDEC;
loc_837FFDCC:
	// lwz r29,0(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// stw r20,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r20.u32);
	// bl 0x825952b8
	ctx.lr = 0x837FFDDC;
	sub_825952B8(ctx, base);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// bne cr6,0x837ffdcc
	if (!cr6.eq) goto loc_837FFDCC;
loc_837FFDEC:
	// li r28,33
	ctx.r28.s64 = 33;
	// stfs f31,432(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 432, temp.u32);
	// stw r30,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r30.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r30,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r30.u32);
	// li r4,24
	ctx.r4.s64 = 24;
	// stw r30,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r30.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// stw r30,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r30.u32);
	// stw r30,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r30.u32);
	// stb r30,428(r31)
	PPC_STORE_U8(ctx.r31.u32 + 428, ctx.r30.u8);
	// stb r30,429(r31)
	PPC_STORE_U8(ctx.r31.u32 + 429, ctx.r30.u8);
	// stw r30,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r30.u32);
	// stw r30,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r30.u32);
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// bl 0x82595718
	ctx.lr = 0x837FFE34;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837ffe44
	if (cr6.eq) goto loc_837FFE44;
	// bl 0x837a47a0
	ctx.lr = 0x837FFE40;
	sub_837A47A0(ctx, base);
	// b 0x837ffe48
	goto loc_837FFE48;
loc_837FFE44:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_837FFE48:
	// stw r3,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837ffe58
	if (cr6.eq) goto loc_837FFE58;
	// bl 0x837a4840
	ctx.lr = 0x837FFE58;
	sub_837A4840(ctx, base);
loc_837FFE58:
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x82595718
	ctx.lr = 0x837FFE6C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837ffe88
	if (cr6.eq) goto loc_837FFE88;
	// lis r10,-32211
	ctx.r10.s64 = -2110980096;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r10,6004
	ctx.r9.s64 = ctx.r10.s64 + 6004;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// b 0x837ffe8c
	goto loc_837FFE8C;
loc_837FFE88:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_837FFE8C:
	// li r10,-1
	ctx.r10.s64 = -1;
	// stfs f31,460(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 460, temp.u32);
	// stfs f31,456(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 456, temp.u32);
	// stw r11,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r11.u32);
	// stb r30,444(r31)
	PPC_STORE_U8(ctx.r31.u32 + 444, ctx.r30.u8);
	// stb r30,445(r31)
	PPC_STORE_U8(ctx.r31.u32 + 445, ctx.r30.u8);
	// stb r30,446(r31)
	PPC_STORE_U8(ctx.r31.u32 + 446, ctx.r30.u8);
	// stb r30,447(r31)
	PPC_STORE_U8(ctx.r31.u32 + 447, ctx.r30.u8);
	// stb r30,448(r31)
	PPC_STORE_U8(ctx.r31.u32 + 448, ctx.r30.u8);
	// stw r10,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r10.u32);
	// bl 0x82a0c6f8
	ctx.lr = 0x837FFEB8;
	sub_82A0C6F8(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83800000
	if (cr6.eq) goto loc_83800000;
	// stb r18,332(r31)
	PPC_STORE_U8(ctx.r31.u32 + 332, ctx.r18.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82595718
	ctx.lr = 0x837FFEDC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837fff08
	if (cr6.eq) goto loc_837FFF08;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stb r30,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r30.u8);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r10,r11,-24672
	ctx.r10.s64 = ctx.r11.s64 + -24672;
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x837fff0c
	goto loc_837FFF0C;
loc_837FFF08:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_837FFF0C:
	// stw r29,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r29.u32);
	// lbz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837fff5c
	if (!cr6.eq) goto loc_837FFF5C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837FFF30;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x837FFF48;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x825a9570
	ctx.lr = 0x837FFF58;
	sub_825A9570(ctx, base);
	// stb r18,4(r29)
	PPC_STORE_U8(ctx.r29.u32 + 4, ctx.r18.u8);
loc_837FFF5C:
	// stw r28,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r28.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x82595718
	ctx.lr = 0x837FFF70;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837fff9c
	if (cr6.eq) goto loc_837FFF9C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stb r30,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r30.u8);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r10,r11,-24692
	ctx.r10.s64 = ctx.r11.s64 + -24692;
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x837fffa0
	goto loc_837FFFA0;
loc_837FFF9C:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_837FFFA0:
	// stw r29,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r29.u32);
	// lbz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8380000c
	if (!cr6.eq) goto loc_8380000C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837FFFC4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x837FFFDC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x825aa838
	ctx.lr = 0x837FFFEC;
	sub_825AA838(ctx, base);
	// stb r18,4(r29)
	PPC_STORE_U8(ctx.r29.u32 + 4, ctx.r18.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_83800000:
	// stb r30,332(r31)
	PPC_STORE_U8(ctx.r31.u32 + 332, ctx.r30.u8);
	// stw r30,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r30.u32);
	// stw r30,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r30.u32);
loc_8380000C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8380001C"))) PPC_WEAK_FUNC(sub_8380001C);
PPC_FUNC_IMPL(__imp__sub_8380001C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83800020"))) PPC_WEAK_FUNC(sub_83800020);
PPC_FUNC_IMPL(__imp__sub_83800020) {
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
	ctx.lr = 0x83800028;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// addi r4,r3,424
	ctx.r4.s64 = ctx.r3.s64 + 424;
	// addi r10,r11,6064
	ctx.r10.s64 = ctx.r11.s64 + 6064;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x837fa3f0
	ctx.lr = 0x83800044;
	sub_837FA3F0(ctx, base);
	// addi r4,r31,420
	ctx.r4.s64 = ctx.r31.s64 + 420;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fa3f0
	ctx.lr = 0x83800050;
	sub_837FA3F0(ctx, base);
	// addi r4,r31,184
	ctx.r4.s64 = ctx.r31.s64 + 184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fa3f0
	ctx.lr = 0x8380005C;
	sub_837FA3F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fa498
	ctx.lr = 0x83800064;
	sub_837FA498(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fbc68
	ctx.lr = 0x8380006C;
	sub_837FBC68(ctx, base);
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r11,r11,-6352
	ctx.r11.s64 = ctx.r11.s64 + -6352;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x838000bc
	if (cr6.eq) goto loc_838000BC;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bgt cr6,0x838000a8
	if (cr6.gt) goto loc_838000A8;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// stw r28,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r28.u32);
loc_838000A8:
	// addic. r10,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r10.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// bne 0x838000bc
	if (!cr0.eq) goto loc_838000BC;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// stw r28,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r28.u32);
loc_838000BC:
	// lwz r11,436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 436);
	// li r29,33
	ctx.r29.s64 = 33;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83800110
	if (cr6.eq) goto loc_83800110;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595150
	ctx.lr = 0x838000DC;
	sub_82595150(ctx, base);
	// lwz r30,436(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 436);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83800104
	if (cr6.eq) goto loc_83800104;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x837a5140
	ctx.lr = 0x838000F0;
	sub_837A5140(ctx, base);
	// bl 0x82595188
	ctx.lr = 0x838000F4;
	sub_82595188(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x83800104;
	sub_825952B8(ctx, base);
loc_83800104:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595170
	ctx.lr = 0x8380010C;
	sub_82595170(ctx, base);
	// stw r28,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r28.u32);
loc_83800110:
	// lwz r11,440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83800158
	if (cr6.eq) goto loc_83800158;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595150
	ctx.lr = 0x8380012C;
	sub_82595150(ctx, base);
	// lwz r3,440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8380014c
	if (cr6.eq) goto loc_8380014C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8380014C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8380014C:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595170
	ctx.lr = 0x83800154;
	sub_82595170(ctx, base);
	// stw r28,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r28.u32);
loc_83800158:
	// lwz r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838001a0
	if (cr6.eq) goto loc_838001A0;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595150
	ctx.lr = 0x83800174;
	sub_82595150(ctx, base);
	// lwz r3,336(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83800194
	if (cr6.eq) goto loc_83800194;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83800194;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83800194:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595170
	ctx.lr = 0x8380019C;
	sub_82595170(ctx, base);
	// stw r28,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r28.u32);
loc_838001A0:
	// lwz r11,340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838001e8
	if (cr6.eq) goto loc_838001E8;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595150
	ctx.lr = 0x838001BC;
	sub_82595150(ctx, base);
	// lwz r3,340(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838001dc
	if (cr6.eq) goto loc_838001DC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x838001DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_838001DC:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595170
	ctx.lr = 0x838001E4;
	sub_82595170(ctx, base);
	// stw r28,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r28.u32);
loc_838001E8:
	// bl 0x837da198
	ctx.lr = 0x838001EC;
	sub_837DA198(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r3,11380
	ctx.r10.s64 = ctx.r3.s64 + 11380;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// sth r9,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r9.u16);
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// ld r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stfs f0,20(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// stw r28,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r28.u32);
	// stfs f0,24(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// stw r28,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r28.u32);
	// stw r28,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r28.u32);
	// stw r28,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r28.u32);
	// stw r28,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r28.u32);
	// stb r28,36(r10)
	PPC_STORE_U8(ctx.r10.u32 + 36, ctx.r28.u8);
	// std r8,28(r10)
	PPC_STORE_U64(ctx.r10.u32 + 28, ctx.r8.u64);
	// bl 0x831156e8
	ctx.lr = 0x83800230;
	sub_831156E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83800248
	if (cr6.eq) goto loc_83800248;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83800248
	if (cr6.eq) goto loc_83800248;
	// stb r28,631(r11)
	PPC_STORE_U8(ctx.r11.u32 + 631, ctx.r28.u8);
loc_83800248:
	// addi r3,r31,388
	ctx.r3.s64 = ctx.r31.s64 + 388;
	// bl 0x82e62630
	ctx.lr = 0x83800250;
	sub_82E62630(ctx, base);
	// li r26,2
	ctx.r26.s64 = 2;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// lwz r4,388(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	// stw r26,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// bl 0x825952b8
	ctx.lr = 0x83800264;
	sub_825952B8(ctx, base);
	// addi r3,r31,376
	ctx.r3.s64 = ctx.r31.s64 + 376;
	// bl 0x82e62630
	ctx.lr = 0x8380026C;
	sub_82E62630(ctx, base);
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,376(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	// bl 0x825952b8
	ctx.lr = 0x8380027C;
	sub_825952B8(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r30,r31,324
	ctx.r30.s64 = ctx.r31.s64 + 324;
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r27,r11,-25508
	ctx.r27.s64 = ctx.r11.s64 + -25508;
loc_8380028C:
	// stwu r27,-32(r30)
	ea = -32 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r27.u32);
	ctx.r30.u32 = ea;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a5c688
	ctx.lr = 0x83800298;
	sub_82A5C688(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bge 0x8380028c
	if (!cr0.lt) goto loc_8380028C;
	// stw r27,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r27.u32);
	// addi r3,r31,228
	ctx.r3.s64 = ctx.r31.s64 + 228;
	// bl 0x82a5c688
	ctx.lr = 0x838002AC;
	sub_82A5C688(ctx, base);
	// lwz r4,168(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x838002c4
	if (cr6.eq) goto loc_838002C4;
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x825952b8
	ctx.lr = 0x838002C4;
	sub_825952B8(ctx, base);
loc_838002C4:
	// stw r28,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r28.u32);
	// stw r28,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r28.u32);
	// stw r28,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r28.u32);
	// lwz r4,152(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x838002e8
	if (cr6.eq) goto loc_838002E8;
	// stw r26,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r26.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825952b8
	ctx.lr = 0x838002E8;
	sub_825952B8(ctx, base);
loc_838002E8:
	// stw r28,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r28.u32);
	// stw r28,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r28.u32);
	// stw r28,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r28.u32);
	// lwz r4,136(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8380030c
	if (cr6.eq) goto loc_8380030C;
	// stw r26,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r26.u32);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x825952b8
	ctx.lr = 0x8380030C;
	sub_825952B8(ctx, base);
loc_8380030C:
	// stw r28,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r28.u32);
	// addi r30,r31,136
	ctx.r30.s64 = ctx.r31.s64 + 136;
	// stw r28,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r28.u32);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// stw r28,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r28.u32);
loc_83800320:
	// lwzu r4,-16(r30)
	ea = -16 + ctx.r30.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83800338
	if (cr6.eq) goto loc_83800338;
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825952b8
	ctx.lr = 0x83800338;
	sub_825952B8(ctx, base);
loc_83800338:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// stw r28,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r28.u32);
	// bge 0x83800320
	if (!cr0.lt) goto loc_83800320;
	// lwz r6,72(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r4,r31,68
	ctx.r4.s64 = ctx.r31.s64 + 68;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82d0e798
	ctx.lr = 0x83800360;
	sub_82D0E798(ctx, base);
	// stw r26,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r26.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x825952b8
	ctx.lr = 0x83800370;
	sub_825952B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837ff930
	ctx.lr = 0x83800378;
	sub_837FF930(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83800380"))) PPC_WEAK_FUNC(sub_83800380);
PPC_FUNC_IMPL(__imp__sub_83800380) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83800388;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x837da198
	ctx.lr = 0x83800398;
	sub_837DA198(ctx, base);
	// lbz r11,11372(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11372);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// beq cr6,0x83800404
	if (cr6.eq) goto loc_83800404;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x838003c8
	if (cr6.eq) goto loc_838003C8;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x83800610
	if (cr6.eq) goto loc_83800610;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r11.u32);
	// stw r10,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r10.u32);
loc_838003C8:
	// lwz r11,356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// li r10,4
	ctx.r10.s64 = 4;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x838003e4
	if (cr6.eq) goto loc_838003E4;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// beq cr6,0x838003f8
	if (cr6.eq) goto loc_838003F8;
	// stw r10,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r10.u32);
loc_838003E4:
	// lbz r11,345(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 345);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83800610
	if (cr6.eq) goto loc_83800610;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r11.u32);
loc_838003F8:
	// stw r10,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83800404:
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x83800578
	if (cr6.gt) goto loc_83800578;
	// li r29,1
	ctx.r29.s64 = 1;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x838004a4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_838004A4;
	// bdzf 4*cr6+eq,0x838004ac
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_838004AC;
	// bne cr6,0x83800554
	if (!cr6.eq) goto loc_83800554;
	// lbz r11,62(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 62);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x83800570
	if (cr6.eq) goto loc_83800570;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r10,r11,-6352
	ctx.r10.s64 = ctx.r11.s64 + -6352;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83800578
	if (!cr6.eq) goto loc_83800578;
	// lwz r3,340(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8380048c
	if (cr6.eq) goto loc_8380048C;
	// bl 0x825ab748
	ctx.lr = 0x83800458;
	sub_825AB748(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83800474
	if (cr6.eq) goto loc_83800474;
	// bl 0x82a1aaa8
	ctx.lr = 0x83800464;
	sub_82A1AAA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83800474
	if (cr6.eq) goto loc_83800474;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_83800474:
	// lwz r11,340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8380048c
	if (cr6.eq) goto loc_8380048C;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_8380048C:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83800578
	if (!cr6.eq) goto loc_83800578;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fc9e8
	ctx.lr = 0x838004A0;
	sub_837FC9E8(ctx, base);
	// stw r29,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r29.u32);
loc_838004A4:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r11.u32);
loc_838004AC:
	// lbz r11,62(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 62);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x83800570
	if (cr6.eq) goto loc_83800570;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fd9a8
	ctx.lr = 0x838004C0;
	sub_837FD9A8(ctx, base);
	// lbz r11,47(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 47);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lbz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 52);
	// beq cr6,0x83800508
	if (cr6.eq) goto loc_83800508;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x838004f4
	if (cr6.eq) goto loc_838004F4;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x83800548
	if (cr6.eq) goto loc_83800548;
	// lwz r11,404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	// li r12,233
	ctx.r12.s64 = 233;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmplwi cr6,r10,233
	cr6.compare<uint32_t>(ctx.r10.u32, 233, xer);
	// b 0x83800544
	goto loc_83800544;
loc_838004F4:
	// lwz r11,404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	// li r12,41
	ctx.r12.s64 = 41;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmplwi cr6,r10,41
	cr6.compare<uint32_t>(ctx.r10.u32, 41, xer);
	// b 0x83800544
	goto loc_83800544;
loc_83800508:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x83800534
	if (cr6.eq) goto loc_83800534;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x83800524
	if (cr6.eq) goto loc_83800524;
	// lbz r11,407(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 407);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// b 0x83800544
	goto loc_83800544;
loc_83800524:
	// lwz r11,404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// cmplwi cr6,r10,15
	cr6.compare<uint32_t>(ctx.r10.u32, 15, xer);
	// b 0x83800544
	goto loc_83800544;
loc_83800534:
	// lwz r11,404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	// clrlwi r10,r11,26
	ctx.r10.u64 = ctx.r11.u32 & 0x3F;
	// rlwinm r10,r10,0,28,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// cmplwi cr6,r10,47
	cr6.compare<uint32_t>(ctx.r10.u32, 47, xer);
loc_83800544:
	// bne cr6,0x83800610
	if (!cr6.eq) goto loc_83800610;
loc_83800548:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r29,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r29.u32);
	// stw r11,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r11.u32);
loc_83800554:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837fd9a8
	ctx.lr = 0x8380055C;
	sub_837FD9A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837ff040
	ctx.lr = 0x83800564;
	sub_837FF040(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83800578
	if (cr6.eq) goto loc_83800578;
loc_83800570:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r11.u32);
loc_83800578:
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838005d8
	if (cr6.eq) goto loc_838005D8;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,72(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,196(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 196, temp.u32);
	// lfs f12,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bne cr6,0x838005b8
	if (!cr6.eq) goto loc_838005B8;
	// stfs f13,200(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 200, temp.u32);
	// lfs f0,204(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,196(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,204(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 204, temp.u32);
	// b 0x838005e4
	goto loc_838005E4;
loc_838005B8:
	// lfs f13,200(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f0,204(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,196(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// stfs f12,200(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 200, temp.u32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,204(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 204, temp.u32);
	// b 0x838005e4
	goto loc_838005E4;
loc_838005D8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,196(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 196, temp.u32);
loc_838005E4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x838005F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,88(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83800610;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83800610:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83800618"))) PPC_WEAK_FUNC(sub_83800618);
PPC_FUNC_IMPL(__imp__sub_83800618) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83800620;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x83800768
	if (!cr6.lt) goto loc_83800768;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83800648
	if (!cr6.eq) goto loc_83800648;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// stw r9,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r9.u32);
loc_83800648:
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// li r28,0
	ctx.r28.s64 = 0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r30,r11,88
	ctx.r30.s64 = ctx.r11.s64 + 88;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r9,92(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// srawi. r11,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 3;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x83800754
	if (cr0.eq) goto loc_83800754;
	// li r29,0
	ctx.r29.s64 = 0;
loc_83800670:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lbz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// addi r10,r5,-2
	ctx.r10.s64 = ctx.r5.s64 + -2;
	// cmplwi cr6,r10,6
	cr6.compare<uint32_t>(ctx.r10.u32, 6, xer);
	// bgt cr6,0x83800720
	if (cr6.gt) goto loc_83800720;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bdzf 4*cr6+eq,0x838006c0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_838006C0;
	// bdzf 4*cr6+eq,0x838006c0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_838006C0;
	// bdzf 4*cr6+eq,0x838006d8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_838006D8;
	// bdzf 4*cr6+eq,0x838006f0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_838006F0;
	// bdzf 4*cr6+eq,0x83800708
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83800708;
	// bne cr6,0x838006f0
	if (!cr6.eq) goto loc_838006F0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r5,5(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// bl 0x837ff740
	ctx.lr = 0x838006BC;
	sub_837FF740(ctx, base);
	// b 0x83800734
	goto loc_83800734;
loc_838006C0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r6,5(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// bl 0x837fdc30
	ctx.lr = 0x838006D4;
	sub_837FDC30(ctx, base);
	// b 0x83800734
	goto loc_83800734;
loc_838006D8:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r6,5(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// bl 0x837fdd00
	ctx.lr = 0x838006EC;
	sub_837FDD00(ctx, base);
	// b 0x83800734
	goto loc_83800734;
loc_838006F0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r6,5(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// bl 0x837fde98
	ctx.lr = 0x83800704;
	sub_837FDE98(ctx, base);
	// b 0x83800734
	goto loc_83800734;
loc_83800708:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r6,5(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// bl 0x837fdc30
	ctx.lr = 0x8380071C;
	sub_837FDC30(ctx, base);
	// b 0x83800734
	goto loc_83800734;
loc_83800720:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r6,5(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// bl 0x837fda20
	ctx.lr = 0x83800734;
	sub_837FDA20(ctx, base);
loc_83800734:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 3;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// blt cr6,0x83800670
	if (cr6.lt) goto loc_83800670;
loc_83800754:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83800768
	if (cr6.eq) goto loc_83800768;
	// bl 0x8378cba8
	ctx.lr = 0x83800760;
	sub_8378CBA8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8378cbd0
	ctx.lr = 0x83800768;
	sub_8378CBD0(ctx, base);
loc_83800768:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83800770"))) PPC_WEAK_FUNC(sub_83800770);
PPC_FUNC_IMPL(__imp__sub_83800770) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83800778;
	__savegprlr_26(ctx, base);
	// stwu r1,-560(r1)
	ea = -560 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r3,580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 580, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83800908
	if (cr6.eq) goto loc_83800908;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x837fd280
	ctx.lr = 0x83800794;
	sub_837FD280(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r5,r1,580
	ctx.r5.s64 = ctx.r1.s64 + 580;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r27,r11,-6328
	ctx.r27.s64 = ctx.r11.s64 + -6328;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x833ecc50
	ctx.lr = 0x838007BC;
	sub_833ECC50(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x838007e4
	if (cr6.eq) goto loc_838007E4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f73d60
	ctx.lr = 0x838007D4;
	sub_82F73D60(ctx, base);
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// bl 0x837fc788
	ctx.lr = 0x838007DC;
	sub_837FC788(ctx, base);
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_838007E4:
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// bl 0x838013c8
	ctx.lr = 0x83800800;
	sub_838013C8(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r28,28
	ctx.r28.s64 = 28;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw. r8,r9,r28
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r28.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x83800854
	if (cr0.eq) goto loc_83800854;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_83800820:
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x835977d8
	ctx.lr = 0x83800834;
	sub_835977D8(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,28
	ctx.r30.s64 = ctx.r30.s64 + 28;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r28
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r28.s32);
	// cmplw cr6,r31,r8
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r8.u32, xer);
	// blt cr6,0x83800820
	if (cr6.lt) goto loc_83800820;
loc_83800854:
	// li r11,33
	ctx.r11.s64 = 33;
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// li r4,532
	ctx.r4.s64 = 532;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x82595718
	ctx.lr = 0x8380086C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83800890
	if (cr6.eq) goto loc_83800890;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,232
	ctx.r5.s64 = ctx.r1.s64 + 232;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x837f5300
	ctx.lr = 0x83800884;
	sub_837F5300(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x838008b4
	if (!cr6.eq) goto loc_838008B4;
loc_83800890:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x838ae2a8
	ctx.lr = 0x83800898;
	sub_838AE2A8(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x838008f4
	if (cr6.eq) goto loc_838008F4;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// b 0x838008f0
	goto loc_838008F0;
loc_838008B4:
	// stw r26,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r26.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r29,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r29.u32);
	// addi r4,r1,580
	ctx.r4.s64 = ctx.r1.s64 + 580;
	// bl 0x833e3748
	ctx.lr = 0x838008C8;
	sub_833E3748(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// bl 0x838ae2a8
	ctx.lr = 0x838008D8;
	sub_838AE2A8(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x838008f4
	if (cr6.eq) goto loc_838008F4;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
loc_838008F0:
	// bl 0x825952b8
	ctx.lr = 0x838008F4;
	sub_825952B8(ctx, base);
loc_838008F4:
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// bl 0x837fc788
	ctx.lr = 0x83800908;
	sub_837FC788(ctx, base);
loc_83800908:
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83800910"))) PPC_WEAK_FUNC(sub_83800910);
PPC_FUNC_IMPL(__imp__sub_83800910) {
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
	// bl 0x83800020
	ctx.lr = 0x83800930;
	sub_83800020(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83800948
	if (cr6.eq) goto loc_83800948;
	// bl 0x82416268
	ctx.lr = 0x83800944;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83800948:
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

__attribute__((alias("__imp__sub_83800960"))) PPC_WEAK_FUNC(sub_83800960);
PPC_FUNC_IMPL(__imp__sub_83800960) {
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
	// clrlwi r31,r3,16
	ctx.r31.u64 = ctx.r3.u32 & 0xFFFF;
	// bl 0x82a4d1d8
	ctx.lr = 0x83800980;
	sub_82A4D1D8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// rlwinm r6,r30,16,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0xFF;
	// addi r7,r31,-1
	ctx.r7.s64 = ctx.r31.s64 + -1;
	// bl 0x82a4cdc0
	ctx.lr = 0x83800994;
	sub_82A4CDC0(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838009d4
	if (cr6.eq) goto loc_838009D4;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r31,0
	ctx.r31.s64 = 0;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
loc_838009B0:
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x83800770
	ctx.lr = 0x838009B8;
	sub_83800770(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r31,r31,44
	ctx.r31.s64 = ctx.r31.s64 + 44;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// blt cr6,0x838009b0
	if (cr6.lt) goto loc_838009B0;
loc_838009D4:
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

__attribute__((alias("__imp__sub_838009EC"))) PPC_WEAK_FUNC(sub_838009EC);
PPC_FUNC_IMPL(__imp__sub_838009EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838009F0"))) PPC_WEAK_FUNC(sub_838009F0);
PPC_FUNC_IMPL(__imp__sub_838009F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r9,348
	ctx.r9.s64 = 348;
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// subf r7,r8,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r8.s64;
	// divw r6,r7,r9
	ctx.r6.s32 = PPCDivide(ctx.r7.s32, ctx.r9.s32);
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, xer);
	// bgt cr6,0x83800a18
	if (cr6.gt) goto loc_83800A18;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83800A18:
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mulli r11,r11,348
	ctx.r11.s64 = ctx.r11.s64 * 348;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83800A28"))) PPC_WEAK_FUNC(sub_83800A28);
PPC_FUNC_IMPL(__imp__sub_83800A28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r10,348
	ctx.r10.s64 = 348;
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw r7,r8,r10
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	// clrlwi r3,r7,24
	ctx.r3.u64 = ctx.r7.u32 & 0xFF;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83800A58"))) PPC_WEAK_FUNC(sub_83800A58);
PPC_FUNC_IMPL(__imp__sub_83800A58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r8,348
	ctx.r8.s64 = 348;
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// subf r6,r7,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r7.s64;
	// li r3,0
	ctx.r3.s64 = 0;
	// divw r5,r6,r8
	ctx.r5.s32 = PPCDivide(ctx.r6.s32, ctx.r8.s32);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mulli r10,r10,348
	ctx.r10.s64 = ctx.r10.s64 * 348;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83800A98"))) PPC_WEAK_FUNC(sub_83800A98);
PPC_FUNC_IMPL(__imp__sub_83800A98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r7,348
	ctx.r7.s64 = 348;
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// subf r6,r8,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r8.s64;
	// divw r5,r6,r7
	ctx.r5.s32 = PPCDivide(ctx.r6.s32, ctx.r7.s32);
	// lfs f0,-24912(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -24912);
	ctx.f0.f64 = double(temp.f32);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// ble cr6,0x83800ae4
	if (!cr6.gt) goto loc_83800AE4;
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// mulli r10,r10,348
	ctx.r10.s64 = ctx.r10.s64 * 348;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x83800ae4
	if (cr0.eq) goto loc_83800AE4;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,24504(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24504);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// blr 
	return;
loc_83800AE4:
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lfs f13,24504(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24504);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83800AF4"))) PPC_WEAK_FUNC(sub_83800AF4);
PPC_FUNC_IMPL(__imp__sub_83800AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83800AF8"))) PPC_WEAK_FUNC(sub_83800AF8);
PPC_FUNC_IMPL(__imp__sub_83800AF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r7,348
	ctx.r7.s64 = 348;
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// subf r6,r8,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r8.s64;
	// divw r5,r6,r7
	ctx.r5.s32 = PPCDivide(ctx.r6.s32, ctx.r7.s32);
	// lfs f13,-24912(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -24912);
	ctx.f13.f64 = double(temp.f32);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// ble cr6,0x83800b50
	if (!cr6.gt) goto loc_83800B50;
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// mulli r10,r10,348
	ctx.r10.s64 = ctx.r10.s64 * 348;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x83800b50
	if (cr0.eq) goto loc_83800B50;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// beq cr6,0x83800b60
	if (cr6.eq) goto loc_83800B60;
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// beq cr6,0x83800b60
	if (cr6.eq) goto loc_83800B60;
	// cmpwi cr6,r10,5
	cr6.compare<int32_t>(ctx.r10.s32, 5, xer);
	// beq cr6,0x83800b60
	if (cr6.eq) goto loc_83800B60;
loc_83800B50:
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lfs f0,24504(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24504);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// blr 
	return;
loc_83800B60:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83800B6C"))) PPC_WEAK_FUNC(sub_83800B6C);
PPC_FUNC_IMPL(__imp__sub_83800B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83800B70"))) PPC_WEAK_FUNC(sub_83800B70);
PPC_FUNC_IMPL(__imp__sub_83800B70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r8,348
	ctx.r8.s64 = 348;
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// subf r6,r7,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r7.s64;
	// li r3,0
	ctx.r3.s64 = 0;
	// divw r5,r6,r8
	ctx.r5.s32 = PPCDivide(ctx.r6.s32, ctx.r8.s32);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mulli r10,r10,348
	ctx.r10.s64 = ctx.r10.s64 * 348;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83800BB0"))) PPC_WEAK_FUNC(sub_83800BB0);
PPC_FUNC_IMPL(__imp__sub_83800BB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r8,348
	ctx.r8.s64 = 348;
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// subf r6,r7,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r7.s64;
	// li r3,27
	ctx.r3.s64 = 27;
	// divw r5,r6,r8
	ctx.r5.s32 = PPCDivide(ctx.r6.s32, ctx.r8.s32);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mulli r10,r10,348
	ctx.r10.s64 = ctx.r10.s64 * 348;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// blr 
	return;
}

