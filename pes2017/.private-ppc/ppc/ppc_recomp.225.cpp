#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82EB03D0"))) PPC_WEAK_FUNC(sub_82EB03D0);
PPC_FUNC_IMPL(__imp__sub_82EB03D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// addi r11,r3,44
	ctx.r11.s64 = ctx.r3.s64 + 44;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82eb03e4
	if (cr6.lt) goto loc_82EB03E4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82EB03E4:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x82eb01b8
	sub_82EB01B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB03EC"))) PPC_WEAK_FUNC(sub_82EB03EC);
PPC_FUNC_IMPL(__imp__sub_82EB03EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB03F0"))) PPC_WEAK_FUNC(sub_82EB03F0);
PPC_FUNC_IMPL(__imp__sub_82EB03F0) {
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
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// addi r31,r3,72
	ctx.r31.s64 = ctx.r3.s64 + 72;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82eb0418
	if (cr6.lt) goto loc_82EB0418;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82EB0418:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831d88a0
	ctx.lr = 0x82EB0420;
	sub_831D88A0(ctx, base);
	// mulli r30,r3,100
	ctx.r30.s64 = ctx.r3.s64 * 100;
	// li r4,46
	ctx.r4.s64 = 46;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ceeb0
	ctx.lr = 0x82EB0430;
	sub_831CEEB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82eb0448
	if (cr6.eq) goto loc_82EB0448;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bl 0x831d88a0
	ctx.lr = 0x82EB0440;
	sub_831D88A0(ctx, base);
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + ctx.r30.u64;
	// b 0x82eb044c
	goto loc_82EB044C;
loc_82EB0448:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82EB044C:
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

__attribute__((alias("__imp__sub_82EB0464"))) PPC_WEAK_FUNC(sub_82EB0464);
PPC_FUNC_IMPL(__imp__sub_82EB0464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB0468"))) PPC_WEAK_FUNC(sub_82EB0468);
PPC_FUNC_IMPL(__imp__sub_82EB0468) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82EB0470;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r3,6804
	ctx.r11.s64 = ctx.r3.s64 + 6804;
	// li r29,99
	ctx.r29.s64 = 99;
	// addi r31,r11,56
	ctx.r31.s64 = ctx.r11.s64 + 56;
	// li r28,15
	ctx.r28.s64 = 15;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82EB0488:
	// lwzu r11,-68(r31)
	ea = -68 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82eb049c
	if (cr6.lt) goto loc_82EB049C;
	// lwz r3,-20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// bl 0x82416268
	ctx.lr = 0x82EB049C;
	sub_82416268(ctx, base);
loc_82EB049C:
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// stw r30,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r30.u32);
	// stb r30,-20(r31)
	PPC_STORE_U8(ctx.r31.u32 + -20, ctx.r30.u8);
	// lwz r11,-28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82eb04bc
	if (cr6.lt) goto loc_82EB04BC;
	// lwz r3,-48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -48);
	// bl 0x82416268
	ctx.lr = 0x82EB04BC;
	sub_82416268(ctx, base);
loc_82EB04BC:
	// stw r28,-28(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28, ctx.r28.u32);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// stw r30,-32(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32, ctx.r30.u32);
	// stb r30,-48(r31)
	PPC_STORE_U8(ctx.r31.u32 + -48, ctx.r30.u8);
	// bge 0x82eb0488
	if (!cr0.lt) goto loc_82EB0488;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB04D8"))) PPC_WEAK_FUNC(sub_82EB04D8);
PPC_FUNC_IMPL(__imp__sub_82EB04D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82EB04E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r3,28
	ctx.r30.s64 = ctx.r3.s64 + 28;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82eb0500
	if (cr6.lt) goto loc_82EB0500;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82416268
	ctx.lr = 0x82EB0500;
	sub_82416268(ctx, base);
loc_82EB0500:
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
	// blt cr6,0x82eb0528
	if (cr6.lt) goto loc_82EB0528;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82416268
	ctx.lr = 0x82EB0528;
	sub_82416268(ctx, base);
loc_82EB0528:
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

__attribute__((alias("__imp__sub_82EB053C"))) PPC_WEAK_FUNC(sub_82EB053C);
PPC_FUNC_IMPL(__imp__sub_82EB053C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB0540"))) PPC_WEAK_FUNC(sub_82EB0540);
PPC_FUNC_IMPL(__imp__sub_82EB0540) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82EB0548;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,60(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r29,r3,28
	ctx.r29.s64 = ctx.r3.s64 + 28;
	// subfc r8,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// eqv r7,r10,r11
	ctx.r7.u64 = ~(ctx.r10.u64 ^ ctx.r11.u64);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// rlwinm r6,r7,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// clrlwi r26,r5,31
	ctx.r26.u64 = ctx.r5.u32 & 0x1;
	// blt cr6,0x82eb0588
	if (cr6.lt) goto loc_82EB0588;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82416268
	ctx.lr = 0x82EB0588;
	sub_82416268(ctx, base);
loc_82EB0588:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// stb r30,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r30.u8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82eb05b0
	if (cr6.lt) goto loc_82EB05B0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82416268
	ctx.lr = 0x82EB05B0;
	sub_82416268(ctx, base);
loc_82EB05B0:
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// addi r29,r28,28
	ctx.r29.s64 = ctx.r28.s64 + 28;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// lwz r11,48(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82eb05d4
	if (cr6.lt) goto loc_82EB05D4;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82416268
	ctx.lr = 0x82EB05D4;
	sub_82416268(ctx, base);
loc_82EB05D4:
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// stb r30,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r30.u8);
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82eb05f4
	if (cr6.lt) goto loc_82EB05F4;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82416268
	ctx.lr = 0x82EB05F4;
	sub_82416268(ctx, base);
loc_82EB05F4:
	// stw r27,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r27.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r30,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r30.u32);
	// stb r30,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r30.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB060C"))) PPC_WEAK_FUNC(sub_82EB060C);
PPC_FUNC_IMPL(__imp__sub_82EB060C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB0610"))) PPC_WEAK_FUNC(sub_82EB0610);
PPC_FUNC_IMPL(__imp__sub_82EB0610) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82EB0618;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,296(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 296);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,300(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x82eb0688
	if (cr6.eq) goto loc_82EB0688;
loc_82EB0638:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82EB063C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82eb063c
	if (!cr6.eq) goto loc_82EB063C;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x82EB066C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82eb0678
	if (!cr6.eq) goto loc_82EB0678;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_82EB0678:
	// lwz r11,300(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 300);
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x82eb0638
	if (!cr6.eq) goto loc_82EB0638;
loc_82EB0688:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB0694"))) PPC_WEAK_FUNC(sub_82EB0694);
PPC_FUNC_IMPL(__imp__sub_82EB0694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB0698"))) PPC_WEAK_FUNC(sub_82EB0698);
PPC_FUNC_IMPL(__imp__sub_82EB0698) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82EB06A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,296(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 296);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,300(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x82eb071c
	if (cr6.eq) goto loc_82EB071C;
loc_82EB06C4:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82EB06C8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82eb06c8
	if (!cr6.eq) goto loc_82EB06C8;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x82EB06F8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82eb070c
	if (!cr6.eq) goto loc_82EB070C;
	// cmplw cr6,r28,r27
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, xer);
	// beq cr6,0x82eb0728
	if (cr6.eq) goto loc_82EB0728;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_82EB070C:
	// lwz r11,300(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 300);
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x82eb06c4
	if (!cr6.eq) goto loc_82EB06C4;
loc_82EB071C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82EB0728:
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 + 28;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82eb073c
	if (cr6.lt) goto loc_82EB073C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82EB073C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB0748"))) PPC_WEAK_FUNC(sub_82EB0748);
PPC_FUNC_IMPL(__imp__sub_82EB0748) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82EB0750;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,296(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 296);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,300(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x82eb07cc
	if (cr6.eq) goto loc_82EB07CC;
loc_82EB0774:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82EB0778:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82eb0778
	if (!cr6.eq) goto loc_82EB0778;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x82EB07A8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82eb07bc
	if (!cr6.eq) goto loc_82EB07BC;
	// cmplw cr6,r28,r27
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, xer);
	// beq cr6,0x82eb07d8
	if (cr6.eq) goto loc_82EB07D8;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_82EB07BC:
	// lwz r11,300(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 300);
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x82eb0774
	if (!cr6.eq) goto loc_82EB0774;
loc_82EB07CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82EB07D8:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB07E4"))) PPC_WEAK_FUNC(sub_82EB07E4);
PPC_FUNC_IMPL(__imp__sub_82EB07E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB07E8"))) PPC_WEAK_FUNC(sub_82EB07E8);
PPC_FUNC_IMPL(__imp__sub_82EB07E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r9,20
	ctx.r9.s64 = 20;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r3,4
	ctx.r7.s64 = ctx.r3.s64 + 4;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r8,15
	ctx.r8.s64 = 15;
	// addi r11,r7,28
	ctx.r11.s64 = ctx.r7.s64 + 28;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82EB0804:
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// stw r10,-24(r11)
	PPC_STORE_U32(ctx.r11.u32 + -24, ctx.r10.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r10,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r10.u32);
	// stb r10,-20(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20, ctx.r10.u8);
	// stw r8,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r8.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stb r10,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r10.u8);
	// stb r10,36(r11)
	PPC_STORE_U8(ctx.r11.u32 + 36, ctx.r10.u8);
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// stw r8,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r8.u32);
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// lwz r9,68(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82eb084c
	if (cr6.lt) goto loc_82EB084C;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// b 0x82eb0850
	goto loc_82EB0850;
loc_82EB084C:
	// addi r9,r11,48
	ctx.r9.s64 = ctx.r11.s64 + 48;
loc_82EB0850:
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// stw r8,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r8.u32);
	// stw r10,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r10.u32);
	// lwz r9,96(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82eb0870
	if (cr6.lt) goto loc_82EB0870;
	// lwz r9,76(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// b 0x82eb0874
	goto loc_82EB0874;
loc_82EB0870:
	// addi r9,r11,76
	ctx.r9.s64 = ctx.r11.s64 + 76;
loc_82EB0874:
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// stb r10,104(r11)
	PPC_STORE_U8(ctx.r11.u32 + 104, ctx.r10.u8);
	// stw r10,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r10.u32);
	// stw r10,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r10.u32);
	// stw r8,136(r11)
	PPC_STORE_U32(ctx.r11.u32 + 136, ctx.r8.u32);
	// stw r10,132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 132, ctx.r10.u32);
	// lwz r9,136(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82eb08a0
	if (cr6.lt) goto loc_82EB08A0;
	// lwz r9,116(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// b 0x82eb08a4
	goto loc_82EB08A4;
loc_82EB08A0:
	// addi r9,r11,116
	ctx.r9.s64 = ctx.r11.s64 + 116;
loc_82EB08A4:
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// stw r8,164(r11)
	PPC_STORE_U32(ctx.r11.u32 + 164, ctx.r8.u32);
	// stw r10,160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 160, ctx.r10.u32);
	// lwz r9,164(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82eb08c4
	if (cr6.lt) goto loc_82EB08C4;
	// lwz r9,144(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// b 0x82eb08c8
	goto loc_82EB08C8;
loc_82EB08C4:
	// addi r9,r11,144
	ctx.r9.s64 = ctx.r11.s64 + 144;
loc_82EB08C8:
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// stb r10,172(r11)
	PPC_STORE_U8(ctx.r11.u32 + 172, ctx.r10.u8);
	// stw r10,176(r11)
	PPC_STORE_U32(ctx.r11.u32 + 176, ctx.r10.u32);
	// stw r10,180(r11)
	PPC_STORE_U32(ctx.r11.u32 + 180, ctx.r10.u32);
	// stw r8,204(r11)
	PPC_STORE_U32(ctx.r11.u32 + 204, ctx.r8.u32);
	// stw r10,200(r11)
	PPC_STORE_U32(ctx.r11.u32 + 200, ctx.r10.u32);
	// lwz r9,204(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82eb08f4
	if (cr6.lt) goto loc_82EB08F4;
	// lwz r9,184(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// b 0x82eb08f8
	goto loc_82EB08F8;
loc_82EB08F4:
	// addi r9,r11,184
	ctx.r9.s64 = ctx.r11.s64 + 184;
loc_82EB08F8:
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// stw r8,232(r11)
	PPC_STORE_U32(ctx.r11.u32 + 232, ctx.r8.u32);
	// stw r10,228(r11)
	PPC_STORE_U32(ctx.r11.u32 + 228, ctx.r10.u32);
	// lwz r9,232(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82eb0918
	if (cr6.lt) goto loc_82EB0918;
	// lwz r9,212(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// b 0x82eb091c
	goto loc_82EB091C;
loc_82EB0918:
	// addi r9,r11,212
	ctx.r9.s64 = ctx.r11.s64 + 212;
loc_82EB091C:
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// stb r10,240(r11)
	PPC_STORE_U8(ctx.r11.u32 + 240, ctx.r10.u8);
	// stw r10,244(r11)
	PPC_STORE_U32(ctx.r11.u32 + 244, ctx.r10.u32);
	// stw r10,248(r11)
	PPC_STORE_U32(ctx.r11.u32 + 248, ctx.r10.u32);
	// stw r8,272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 272, ctx.r8.u32);
	// stw r10,268(r11)
	PPC_STORE_U32(ctx.r11.u32 + 268, ctx.r10.u32);
	// lwz r9,272(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82eb0948
	if (cr6.lt) goto loc_82EB0948;
	// lwz r9,252(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	// b 0x82eb094c
	goto loc_82EB094C;
loc_82EB0948:
	// addi r9,r11,252
	ctx.r9.s64 = ctx.r11.s64 + 252;
loc_82EB094C:
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// stw r8,300(r11)
	PPC_STORE_U32(ctx.r11.u32 + 300, ctx.r8.u32);
	// stw r10,296(r11)
	PPC_STORE_U32(ctx.r11.u32 + 296, ctx.r10.u32);
	// lwz r9,300(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82eb096c
	if (cr6.lt) goto loc_82EB096C;
	// lwz r9,280(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// b 0x82eb0970
	goto loc_82EB0970;
loc_82EB096C:
	// addi r9,r11,280
	ctx.r9.s64 = ctx.r11.s64 + 280;
loc_82EB0970:
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// addi r7,r7,340
	ctx.r7.s64 = ctx.r7.s64 + 340;
	// stb r10,308(r11)
	PPC_STORE_U8(ctx.r11.u32 + 308, ctx.r10.u8);
	// addi r11,r11,340
	ctx.r11.s64 = ctx.r11.s64 + 340;
	// bdnz 0x82eb0804
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82EB0804;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB0988"))) PPC_WEAK_FUNC(sub_82EB0988);
PPC_FUNC_IMPL(__imp__sub_82EB0988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82EB0990;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r29,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r29.u32);
	// li r28,-1
	ctx.r28.s64 = -1;
	// stw r27,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r27.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r29,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r29.u8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82470e60
	ctx.lr = 0x82EB09C0;
	sub_82470E60(ctx, base);
	// stw r27,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r27.u32);
	// stw r29,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r29.u32);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// stb r29,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r29.u8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,28
	ctx.r4.s64 = ctx.r30.s64 + 28;
	// bl 0x82470e60
	ctx.lr = 0x82EB09E0;
	sub_82470E60(ctx, base);
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// lwz r10,60(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB09FC"))) PPC_WEAK_FUNC(sub_82EB09FC);
PPC_FUNC_IMPL(__imp__sub_82EB09FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB0A00"))) PPC_WEAK_FUNC(sub_82EB0A00);
PPC_FUNC_IMPL(__imp__sub_82EB0A00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82EB0A08;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eb0988
	ctx.lr = 0x82EB0A20;
	sub_82EB0988(ctx, base);
	// li r29,-1
	ctx.r29.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82470e60
	ctx.lr = 0x82EB0A38;
	sub_82470E60(ctx, base);
	// addi r28,r31,28
	ctx.r28.s64 = ctx.r31.s64 + 28;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 28;
	// bl 0x82470e60
	ctx.lr = 0x82EB0A50;
	sub_82470E60(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r11.u32);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r10,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r10.u32);
	// bl 0x82470e60
	ctx.lr = 0x82EB0A74;
	sub_82470E60(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82470e60
	ctx.lr = 0x82EB0A88;
	sub_82470E60(ctx, base);
	// lwz r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r8,140(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r7,128(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// stw r9,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r9.u32);
	// stw r8,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r8.u32);
	// blt cr6,0x82eb0aac
	if (cr6.lt) goto loc_82EB0AAC;
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x82416268
	ctx.lr = 0x82EB0AAC;
	sub_82416268(ctx, base);
loc_82EB0AAC:
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// stb r11,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r11.u8);
	// blt cr6,0x82eb0ad4
	if (cr6.lt) goto loc_82EB0AD4;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82416268
	ctx.lr = 0x82EB0AD4;
	sub_82416268(ctx, base);
loc_82EB0AD4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB0ADC"))) PPC_WEAK_FUNC(sub_82EB0ADC);
PPC_FUNC_IMPL(__imp__sub_82EB0ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB0AE0"))) PPC_WEAK_FUNC(sub_82EB0AE0);
PPC_FUNC_IMPL(__imp__sub_82EB0AE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x82EB0AE8;
	__savegprlr_19(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// li r29,-1
	ctx.r29.s64 = -1;
	// cmpw cr6,r5,r4
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, xer);
	// addze r27,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r27.s64 = temp.s64;
	// bge cr6,0x82eb0c44
	if (!cr6.lt) goto loc_82EB0C44;
	// addi r19,r6,28
	ctx.r19.s64 = ctx.r6.s64 + 28;
	// li r25,15
	ctx.r25.s64 = 15;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82EB0B24:
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82470e60
	ctx.lr = 0x82EB0B44;
	sub_82470E60(ctx, base);
	// stw r25,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r25.u32);
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stb r30,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r30.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82470e60
	ctx.lr = 0x82EB0B64;
	sub_82470E60(ctx, base);
	// rlwinm r11,r27,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r10,60(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 60);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// add r31,r11,r22
	ctx.r31.u64 = ctx.r11.u64 + ctx.r22.u64;
	// stw r25,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r25.u32);
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r10,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// lwz r11,56(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 56);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// bl 0x82470e60
	ctx.lr = 0x82EB0B9C;
	sub_82470E60(ctx, base);
	// stw r25,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r25.u32);
	// stw r30,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r30.u32);
	// addi r24,r31,28
	ctx.r24.s64 = ctx.r31.s64 + 28;
	// stb r30,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, ctx.r30.u8);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// bl 0x82470e60
	ctx.lr = 0x82EB0BC0;
	sub_82470E60(ctx, base);
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r8,60(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mtctr r21
	ctr.u64 = ctx.r21.u64;
	// stw r9,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r9.u32);
	// stw r8,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r8.u32);
	// bctrl 
	ctx.lr = 0x82EB0BE0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82eb0c44
	if (cr6.eq) goto loc_82EB0C44;
	// rlwinm r11,r23,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 6) & 0xFFFFFFC0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// add r28,r11,r22
	ctx.r28.u64 = ctx.r11.u64 + ctx.r22.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82470e60
	ctx.lr = 0x82EB0C08;
	sub_82470E60(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r28,28
	ctx.r3.s64 = ctx.r28.s64 + 28;
	// bl 0x82470e60
	ctx.lr = 0x82EB0C1C;
	sub_82470E60(ctx, base);
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r11,r27,-1
	ctx.r11.s64 = ctx.r27.s64 + -1;
	// mr r23,r27
	ctx.r23.u64 = ctx.r27.u64;
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// cmpw cr6,r20,r27
	cr6.compare<int32_t>(ctx.r20.s32, ctx.r27.s32, xer);
	// stw r9,56(r28)
	PPC_STORE_U32(ctx.r28.u32 + 56, ctx.r9.u32);
	// addze r27,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r27.s64 = temp.s64;
	// lwz r8,60(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r8,60(r28)
	PPC_STORE_U32(ctx.r28.u32 + 60, ctx.r8.u32);
	// blt cr6,0x82eb0b24
	if (cr6.lt) goto loc_82EB0B24;
loc_82EB0C44:
	// rlwinm r11,r23,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 6) & 0xFFFFFFC0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// add r31,r11,r22
	ctx.r31.u64 = ctx.r11.u64 + ctx.r22.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82470e60
	ctx.lr = 0x82EB0C60;
	sub_82470E60(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r26,28
	ctx.r4.s64 = ctx.r26.s64 + 28;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x82470e60
	ctx.lr = 0x82EB0C74;
	sub_82470E60(ctx, base);
	// lwz r11,56(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 56);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// lwz r10,60(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 60);
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB0C8C"))) PPC_WEAK_FUNC(sub_82EB0C8C);
PPC_FUNC_IMPL(__imp__sub_82EB0C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB0C90"))) PPC_WEAK_FUNC(sub_82EB0C90);
PPC_FUNC_IMPL(__imp__sub_82EB0C90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82EB0C98;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82eb0d00
	if (cr6.eq) goto loc_82EB0D00;
	// addi r31,r4,56
	ctx.r31.s64 = ctx.r4.s64 + 56;
	// li r29,-1
	ctx.r29.s64 = -1;
loc_82EB0CB4:
	// addi r31,r31,-64
	ctx.r31.s64 = ctx.r31.s64 + -64;
	// addi r30,r30,-64
	ctx.r30.s64 = ctx.r30.s64 + -64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,-56
	ctx.r4.s64 = ctx.r31.s64 + -56;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82470e60
	ctx.lr = 0x82EB0CD0;
	sub_82470E60(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,-28
	ctx.r4.s64 = ctx.r31.s64 + -28;
	// addi r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 28;
	// bl 0x82470e60
	ctx.lr = 0x82EB0CE4;
	sub_82470E60(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r31,-56
	ctx.r11.s64 = ctx.r31.s64 + -56;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// stw r10,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r10.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r9,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r9.u32);
	// bne cr6,0x82eb0cb4
	if (!cr6.eq) goto loc_82EB0CB4;
loc_82EB0D00:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB0D0C"))) PPC_WEAK_FUNC(sub_82EB0D0C);
PPC_FUNC_IMPL(__imp__sub_82EB0D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB0D10"))) PPC_WEAK_FUNC(sub_82EB0D10);
PPC_FUNC_IMPL(__imp__sub_82EB0D10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82EB0D18;
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
	// beq cr6,0x82eb0d80
	if (cr6.eq) goto loc_82EB0D80;
	// addi r31,r3,56
	ctx.r31.s64 = ctx.r3.s64 + 56;
	// li r29,-1
	ctx.r29.s64 = -1;
loc_82EB0D34:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,-56
	ctx.r4.s64 = ctx.r31.s64 + -56;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82470e60
	ctx.lr = 0x82EB0D48;
	sub_82470E60(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,-28
	ctx.r4.s64 = ctx.r31.s64 + -28;
	// addi r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 28;
	// bl 0x82470e60
	ctx.lr = 0x82EB0D5C;
	sub_82470E60(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r11.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// stw r10,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r10.u32);
	// addi r30,r30,64
	ctx.r30.s64 = ctx.r30.s64 + 64;
	// addi r9,r31,-56
	ctx.r9.s64 = ctx.r31.s64 + -56;
	// cmplw cr6,r9,r28
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r28.u32, xer);
	// bne cr6,0x82eb0d34
	if (!cr6.eq) goto loc_82EB0D34;
loc_82EB0D80:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB0D8C"))) PPC_WEAK_FUNC(sub_82EB0D8C);
PPC_FUNC_IMPL(__imp__sub_82EB0D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB0D90"))) PPC_WEAK_FUNC(sub_82EB0D90);
PPC_FUNC_IMPL(__imp__sub_82EB0D90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82EB0D98;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82eb0e04
	if (cr6.eq) goto loc_82EB0E04;
	// addi r31,r3,28
	ctx.r31.s64 = ctx.r3.s64 + 28;
	// li r29,15
	ctx.r29.s64 = 15;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82EB0DB4:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82eb0dc8
	if (cr6.lt) goto loc_82EB0DC8;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82416268
	ctx.lr = 0x82EB0DC8;
	sub_82416268(ctx, base);
loc_82EB0DC8:
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82eb0de8
	if (cr6.lt) goto loc_82EB0DE8;
	// lwz r3,-28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// bl 0x82416268
	ctx.lr = 0x82EB0DE8;
	sub_82416268(ctx, base);
loc_82EB0DE8:
	// stw r29,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r29.u32);
	// stw r30,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r30.u32);
	// stb r30,-28(r31)
	PPC_STORE_U8(ctx.r31.u32 + -28, ctx.r30.u8);
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// addi r11,r31,-28
	ctx.r11.s64 = ctx.r31.s64 + -28;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// bne cr6,0x82eb0db4
	if (!cr6.eq) goto loc_82EB0DB4;
loc_82EB0E04:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB0E0C"))) PPC_WEAK_FUNC(sub_82EB0E0C);
PPC_FUNC_IMPL(__imp__sub_82EB0E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB0E10"))) PPC_WEAK_FUNC(sub_82EB0E10);
PPC_FUNC_IMPL(__imp__sub_82EB0E10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82EB0E18;
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
	// beq cr6,0x82eb0eb0
	if (cr6.eq) goto loc_82EB0EB0;
	// addi r30,r3,56
	ctx.r30.s64 = ctx.r3.s64 + 56;
	// addi r31,r5,48
	ctx.r31.s64 = ctx.r5.s64 + 48;
	// li r26,15
	ctx.r26.s64 = 15;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,-1
	ctx.r27.s64 = -1;
loc_82EB0E40:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82eb0e98
	if (cr6.eq) goto loc_82EB0E98;
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
	// addi r4,r30,-56
	ctx.r4.s64 = ctx.r30.s64 + -56;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82470e60
	ctx.lr = 0x82EB0E68;
	sub_82470E60(ctx, base);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// stw r28,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r28.u32);
	// addi r3,r31,-20
	ctx.r3.s64 = ctx.r31.s64 + -20;
	// stb r28,-20(r31)
	PPC_STORE_U8(ctx.r31.u32 + -20, ctx.r28.u8);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,-28
	ctx.r4.s64 = ctx.r30.s64 + -28;
	// bl 0x82470e60
	ctx.lr = 0x82EB0E88;
	sub_82470E60(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_82EB0E98:
	// addi r30,r30,64
	ctx.r30.s64 = ctx.r30.s64 + 64;
	// addi r29,r29,64
	ctx.r29.s64 = ctx.r29.s64 + 64;
	// addi r11,r30,-56
	ctx.r11.s64 = ctx.r30.s64 + -56;
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// cmplw cr6,r11,r25
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, xer);
	// bne cr6,0x82eb0e40
	if (!cr6.eq) goto loc_82EB0E40;
loc_82EB0EB0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB0EBC"))) PPC_WEAK_FUNC(sub_82EB0EBC);
PPC_FUNC_IMPL(__imp__sub_82EB0EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB0EC0"))) PPC_WEAK_FUNC(sub_82EB0EC0);
PPC_FUNC_IMPL(__imp__sub_82EB0EC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82EB0EC8;
	__savegprlr_27(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82eb0988
	ctx.lr = 0x82EB0EE8;
	sub_82EB0988(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82eb0988
	ctx.lr = 0x82EB0EF8;
	sub_82EB0988(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x82EB0F04;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82eb0f1c
	if (cr6.eq) goto loc_82EB0F1C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eb0a00
	ctx.lr = 0x82EB0F1C;
	sub_82EB0A00(ctx, base);
loc_82EB0F1C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82eb0988
	ctx.lr = 0x82EB0F28;
	sub_82EB0988(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eb0988
	ctx.lr = 0x82EB0F38;
	sub_82EB0988(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x82EB0F44;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82eb0f5c
	if (cr6.eq) goto loc_82EB0F5C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82eb0a00
	ctx.lr = 0x82EB0F5C;
	sub_82EB0A00(ctx, base);
loc_82EB0F5C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82eb0988
	ctx.lr = 0x82EB0F68;
	sub_82EB0988(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eb0988
	ctx.lr = 0x82EB0F78;
	sub_82EB0988(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x82EB0F84;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82eb0f9c
	if (cr6.eq) goto loc_82EB0F9C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eb0a00
	ctx.lr = 0x82EB0F9C;
	sub_82EB0A00(ctx, base);
loc_82EB0F9C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB0FA4"))) PPC_WEAK_FUNC(sub_82EB0FA4);
PPC_FUNC_IMPL(__imp__sub_82EB0FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB0FA8"))) PPC_WEAK_FUNC(sub_82EB0FA8);
PPC_FUNC_IMPL(__imp__sub_82EB0FA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x82EB0FB0;
	__savegprlr_20(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// li r28,-1
	ctx.r28.s64 = -1;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// cmpw cr6,r30,r5
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r5.s32, xer);
	// bge cr6,0x82eb1114
	if (!cr6.lt) goto loc_82EB1114;
	// li r24,15
	ctx.r24.s64 = 15;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82EB0FE8:
	// stw r24,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// rlwinm r11,r30,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 6) & 0xFFFFFFC0;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// add r31,r11,r26
	ctx.r31.u64 = ctx.r11.u64 + ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r27,r31,-64
	ctx.r27.s64 = ctx.r31.s64 + -64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82470e60
	ctx.lr = 0x82EB1014;
	sub_82470E60(ctx, base);
	// stw r24,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r24.u32);
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stb r29,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r29.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r27,28
	ctx.r4.s64 = ctx.r27.s64 + 28;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82470e60
	ctx.lr = 0x82EB1034;
	sub_82470E60(ctx, base);
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r10,-4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r24,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r24.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r29.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r29,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r29.u8);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// stw r10,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// bl 0x82470e60
	ctx.lr = 0x82EB1064;
	sub_82470E60(ctx, base);
	// stw r24,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r24.u32);
	// stw r29,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r29.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stb r29,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, ctx.r29.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,28
	ctx.r4.s64 = ctx.r31.s64 + 28;
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// bl 0x82470e60
	ctx.lr = 0x82EB1084;
	sub_82470E60(ctx, base);
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r8,60(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mtctr r22
	ctr.u64 = ctx.r22.u64;
	// stw r9,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r9.u32);
	// stw r8,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r8.u32);
	// bctrl 
	ctx.lr = 0x82EB10A4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82eb10b4
	if (cr6.eq) goto loc_82EB10B4;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
loc_82EB10B4:
	// rlwinm r10,r30,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r11,r25,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 6) & 0xFFFFFFC0;
	// add r31,r10,r26
	ctx.r31.u64 = ctx.r10.u64 + ctx.r26.u64;
	// add r27,r11,r26
	ctx.r27.u64 = ctx.r11.u64 + ctx.r26.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82470e60
	ctx.lr = 0x82EB10D8;
	sub_82470E60(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,28
	ctx.r4.s64 = ctx.r31.s64 + 28;
	// addi r3,r27,28
	ctx.r3.s64 = ctx.r27.s64 + 28;
	// bl 0x82470e60
	ctx.lr = 0x82EB10EC;
	sub_82470E60(ctx, base);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,56(r27)
	PPC_STORE_U32(ctx.r27.u32 + 56, ctx.r10.u32);
	// cmpw cr6,r30,r23
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r23.s32, xer);
	// lwz r9,60(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r9,60(r27)
	PPC_STORE_U32(ctx.r27.u32 + 60, ctx.r9.u32);
	// blt cr6,0x82eb0fe8
	if (cr6.lt) goto loc_82EB0FE8;
	// cmpw cr6,r30,r23
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r23.s32, xer);
loc_82EB1114:
	// bne cr6,0x82eb1168
	if (!cr6.eq) goto loc_82EB1168;
	// rlwinm r10,r23,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r11,r25,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 6) & 0xFFFFFFC0;
	// add r30,r10,r26
	ctx.r30.u64 = ctx.r10.u64 + ctx.r26.u64;
	// add r31,r11,r26
	ctx.r31.u64 = ctx.r11.u64 + ctx.r26.u64;
	// addi r29,r30,-64
	ctx.r29.s64 = ctx.r30.s64 + -64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82470e60
	ctx.lr = 0x82EB1140;
	sub_82470E60(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r29,28
	ctx.r4.s64 = ctx.r29.s64 + 28;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x82470e60
	ctx.lr = 0x82EB1154;
	sub_82470E60(ctx, base);
	// lwz r11,-8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// addi r25,r23,-1
	ctx.r25.s64 = ctx.r23.s64 + -1;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// lwz r10,-4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
loc_82EB1168:
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82eb0ae0
	ctx.lr = 0x82EB1180;
	sub_82EB0AE0(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB1188"))) PPC_WEAK_FUNC(sub_82EB1188);
PPC_FUNC_IMPL(__imp__sub_82EB1188) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82EB1190;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r3.s64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// srawi r11,r11,6
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,40
	cr6.compare<int32_t>(ctx.r11.s32, 40, xer);
	// ble cr6,0x82eb121c
	if (!cr6.gt) goto loc_82EB121C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srawi r10,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r29,r11,6,0,25
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r26,r11,7,0,24
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// add r27,r29,r3
	ctx.r27.u64 = ctx.r29.u64 + ctx.r3.u64;
	// add r5,r26,r3
	ctx.r5.u64 = ctx.r26.u64 + ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82eb0ec0
	ctx.lr = 0x82EB11D4;
	sub_82EB0EC0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// add r5,r29,r31
	ctx.r5.u64 = ctx.r29.u64 + ctx.r31.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// subf r3,r29,r31
	ctx.r3.s64 = ctx.r31.s64 - ctx.r29.s64;
	// bl 0x82eb0ec0
	ctx.lr = 0x82EB11E8;
	sub_82EB0EC0(ctx, base);
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
	// bl 0x82eb0ec0
	ctx.lr = 0x82EB1200;
	sub_82EB0EC0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82eb0ec0
	ctx.lr = 0x82EB1214;
	sub_82EB0EC0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82EB121C:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82eb0ec0
	ctx.lr = 0x82EB1228;
	sub_82EB0EC0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB1230"))) PPC_WEAK_FUNC(sub_82EB1230);
PPC_FUNC_IMPL(__imp__sub_82EB1230) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82EB1238;
	__savegprlr_24(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// srawi r25,r11,6
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r25.s64 = ctx.r11.s32 >> 6;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// srawi r10,r25,1
	xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r25.s32 >> 1;
	// addze. r29,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r29.s64 = temp.s64;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble 0x82eb1328
	if (!cr0.gt) goto loc_82EB1328;
	// rlwinm r11,r29,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 6) & 0xFFFFFFC0;
	// li r28,15
	ctx.r28.s64 = 15;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,56
	ctx.r31.s64 = ctx.r11.s64 + 56;
	// li r27,-1
	ctx.r27.s64 = -1;
loc_82EB1270:
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// addi r31,r31,-64
	ctx.r31.s64 = ctx.r31.s64 + -64;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,-56
	ctx.r4.s64 = ctx.r31.s64 + -56;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// bl 0x82470e60
	ctx.lr = 0x82EB1298;
	sub_82470E60(ctx, base);
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stb r30,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r30.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,-28
	ctx.r4.s64 = ctx.r31.s64 + -28;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82470e60
	ctx.lr = 0x82EB12B8;
	sub_82470E60(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r10,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// bl 0x82eb0fa8
	ctx.lr = 0x82EB12E0;
	sub_82EB0FA8(ctx, base);
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82eb12f4
	if (cr6.lt) goto loc_82EB12F4;
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x82416268
	ctx.lr = 0x82EB12F4;
	sub_82416268(ctx, base);
loc_82EB12F4:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r30,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r30.u8);
	// blt cr6,0x82eb1314
	if (cr6.lt) goto loc_82EB1314;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82416268
	ctx.lr = 0x82EB1314;
	sub_82416268(ctx, base);
loc_82EB1314:
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// bgt cr6,0x82eb1270
	if (cr6.gt) goto loc_82EB1270;
loc_82EB1328:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB1330"))) PPC_WEAK_FUNC(sub_82EB1330);
PPC_FUNC_IMPL(__imp__sub_82EB1330) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x82EB1338;
	__savegprlr_19(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82eb1654
	if (cr6.eq) goto loc_82EB1654;
	// addi r24,r3,64
	ctx.r24.s64 = ctx.r3.s64 + 64;
	// cmplw cr6,r24,r4
	cr6.compare<uint32_t>(ctx.r24.u32, ctx.r4.u32, xer);
	// beq cr6,0x82eb1654
	if (cr6.eq) goto loc_82EB1654;
	// lbz r20,80(r1)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r21,r3,28
	ctx.r21.s64 = ctx.r3.s64 + 28;
	// li r28,15
	ctx.r28.s64 = 15;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,-1
	ctx.r30.s64 = -1;
loc_82EB1370:
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// bl 0x82470e60
	ctx.lr = 0x82EB1394;
	sub_82470E60(ctx, base);
	// stw r28,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r28.u32);
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stb r31,124(r1)
	PPC_STORE_U8(ctx.r1.u32 + 124, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r24,28
	ctx.r4.s64 = ctx.r24.s64 + 28;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x82470e60
	ctx.lr = 0x82EB13B4;
	sub_82470E60(ctx, base);
	// lwz r11,56(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 56);
	// lwz r10,60(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 60);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r28,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r28.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// addi r29,r24,56
	ctx.r29.s64 = ctx.r24.s64 + 56;
	// stw r10,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r10.u32);
	// bl 0x82470e60
	ctx.lr = 0x82EB13E8;
	sub_82470E60(ctx, base);
	// stw r28,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r28.u32);
	// stw r31,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r31.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stb r31,188(r1)
	PPC_STORE_U8(ctx.r1.u32 + 188, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// bl 0x82470e60
	ctx.lr = 0x82EB1408;
	sub_82470E60(ctx, base);
	// lwz r9,56(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 56);
	// lwz r8,60(r23)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r23.u32 + 60);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r28,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r28.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stw r9,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r9.u32);
	// stw r8,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r8.u32);
	// bl 0x82470e60
	ctx.lr = 0x82EB1438;
	sub_82470E60(ctx, base);
	// stw r28,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r28.u32);
	// stw r31,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r31.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stb r31,252(r1)
	PPC_STORE_U8(ctx.r1.u32 + 252, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// addi r3,r1,252
	ctx.r3.s64 = ctx.r1.s64 + 252;
	// bl 0x82470e60
	ctx.lr = 0x82EB1458;
	sub_82470E60(ctx, base);
	// lwz r7,152(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r6,156(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// mtctr r22
	ctr.u64 = ctx.r22.u64;
	// stw r7,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r7.u32);
	// stw r6,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r6.u32);
	// bctrl 
	ctx.lr = 0x82EB1478;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82eb14d4
	if (cr6.eq) goto loc_82EB14D4;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// addi r5,r24,64
	ctx.r5.s64 = ctx.r24.s64 + 64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82eb0c90
	ctx.lr = 0x82EB1498;
	sub_82EB0C90(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82470e60
	ctx.lr = 0x82EB14AC;
	sub_82470E60(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82470e60
	ctx.lr = 0x82EB14C0;
	sub_82470E60(ctx, base);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r10,156(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// stw r11,56(r23)
	PPC_STORE_U32(ctx.r23.u32 + 56, ctx.r11.u32);
	// stw r10,60(r23)
	PPC_STORE_U32(ctx.r23.u32 + 60, ctx.r10.u32);
	// b 0x82eb1608
	goto loc_82EB1608;
loc_82EB14D4:
	// stw r28,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r28.u32);
	// addi r29,r29,-64
	ctx.r29.s64 = ctx.r29.s64 + -64;
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// addi r26,r29,-56
	ctx.r26.s64 = ctx.r29.s64 + -56;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82470e60
	ctx.lr = 0x82EB14FC;
	sub_82470E60(ctx, base);
	// stw r28,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r28.u32);
	// stw r31,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r31.u32);
	// addi r25,r29,-28
	ctx.r25.s64 = ctx.r29.s64 + -28;
	// stb r31,252(r1)
	PPC_STORE_U8(ctx.r1.u32 + 252, ctx.r31.u8);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,252
	ctx.r3.s64 = ctx.r1.s64 + 252;
	// bl 0x82470e60
	ctx.lr = 0x82EB1520;
	sub_82470E60(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r28,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r28.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r11,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r11.u32);
	// stw r10,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r10.u32);
	// bl 0x82470e60
	ctx.lr = 0x82EB1550;
	sub_82470E60(ctx, base);
	// stw r28,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r28.u32);
	// stw r31,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r31.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stb r31,188(r1)
	PPC_STORE_U8(ctx.r1.u32 + 188, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// bl 0x82470e60
	ctx.lr = 0x82EB1570;
	sub_82470E60(ctx, base);
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r8,156(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mtctr r22
	ctr.u64 = ctx.r22.u64;
	// stw r9,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r9.u32);
	// stw r8,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r8.u32);
	// bctrl 
	ctx.lr = 0x82EB1590;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// beq cr6,0x82eb15dc
	if (cr6.eq) goto loc_82EB15DC;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82470e60
	ctx.lr = 0x82EB15B0;
	sub_82470E60(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r27,28
	ctx.r3.s64 = ctx.r27.s64 + 28;
	// bl 0x82470e60
	ctx.lr = 0x82EB15C4;
	sub_82470E60(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,56(r27)
	PPC_STORE_U32(ctx.r27.u32 + 56, ctx.r11.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r10,60(r27)
	PPC_STORE_U32(ctx.r27.u32 + 60, ctx.r10.u32);
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// b 0x82eb14d4
	goto loc_82EB14D4;
loc_82EB15DC:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82470e60
	ctx.lr = 0x82EB15E4;
	sub_82470E60(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// addi r3,r27,28
	ctx.r3.s64 = ctx.r27.s64 + 28;
	// bl 0x82470e60
	ctx.lr = 0x82EB15F8;
	sub_82470E60(ctx, base);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r10,156(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// stw r11,56(r27)
	PPC_STORE_U32(ctx.r27.u32 + 56, ctx.r11.u32);
	// stw r10,60(r27)
	PPC_STORE_U32(ctx.r27.u32 + 60, ctx.r10.u32);
loc_82EB1608:
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82eb161c
	if (cr6.lt) goto loc_82EB161C;
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// bl 0x82416268
	ctx.lr = 0x82EB161C;
	sub_82416268(ctx, base);
loc_82EB161C:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r28,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r28.u32);
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,124(r1)
	PPC_STORE_U8(ctx.r1.u32 + 124, ctx.r31.u8);
	// blt cr6,0x82eb163c
	if (cr6.lt) goto loc_82EB163C;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x82EB163C;
	sub_82416268(ctx, base);
loc_82EB163C:
	// addi r24,r24,64
	ctx.r24.s64 = ctx.r24.s64 + 64;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// cmplw cr6,r24,r19
	cr6.compare<uint32_t>(ctx.r24.u32, ctx.r19.u32, xer);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// bne cr6,0x82eb1370
	if (!cr6.eq) goto loc_82EB1370;
loc_82EB1654:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB165C"))) PPC_WEAK_FUNC(sub_82EB165C);
PPC_FUNC_IMPL(__imp__sub_82EB165C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB1660"))) PPC_WEAK_FUNC(sub_82EB1660);
PPC_FUNC_IMPL(__imp__sub_82EB1660) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82EB1668;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r4,-64
	ctx.r29.s64 = ctx.r4.s64 + -64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x82eb0988
	ctx.lr = 0x82EB1688;
	sub_82EB0988(ctx, base);
	// li r28,-1
	ctx.r28.s64 = -1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82470e60
	ctx.lr = 0x82EB16A0;
	sub_82470E60(ctx, base);
	// addi r4,r31,28
	ctx.r4.s64 = ctx.r31.s64 + 28;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r29,28
	ctx.r3.s64 = ctx.r29.s64 + 28;
	// bl 0x82470e60
	ctx.lr = 0x82EB16B4;
	sub_82470E60(ctx, base);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// subf r11,r31,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r31.s64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// addi r11,r11,-64
	ctx.r11.s64 = ctx.r11.s64 + -64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r10,-8(r30)
	PPC_STORE_U32(ctx.r30.u32 + -8, ctx.r10.u32);
	// srawi r5,r11,6
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 6;
	// lwz r9,60(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r9,-4(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eb0fa8
	ctx.lr = 0x82EB16E4;
	sub_82EB0FA8(ctx, base);
	// lwz r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x82eb16f8
	if (cr6.lt) goto loc_82EB16F8;
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x82416268
	ctx.lr = 0x82EB16F8;
	sub_82416268(ctx, base);
loc_82EB16F8:
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// stb r11,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r11.u8);
	// blt cr6,0x82eb1720
	if (cr6.lt) goto loc_82EB1720;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82416268
	ctx.lr = 0x82EB1720;
	sub_82416268(ctx, base);
loc_82EB1720:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB1728"))) PPC_WEAK_FUNC(sub_82EB1728);
PPC_FUNC_IMPL(__imp__sub_82EB1728) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdabc
	ctx.lr = 0x82EB1730;
	__savegprlr_17(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r4,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r4.s64;
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// srawi r10,r11,6
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 6;
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// srawi r9,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// mr r18,r5
	ctx.r18.u64 = ctx.r5.u64;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// rlwinm r11,r8,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r5,r5,-64
	ctx.r5.s64 = ctx.r5.s64 + -64;
	// add r28,r11,r4
	ctx.r28.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82eb1188
	ctx.lr = 0x82EB176C;
	sub_82EB1188(ctx, base);
	// li r29,15
	ctx.r29.s64 = 15;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r21,r28,64
	ctx.r21.s64 = ctx.r28.s64 + 64;
	// li r30,-1
	ctx.r30.s64 = -1;
	// cmplw cr6,r19,r28
	cr6.compare<uint32_t>(ctx.r19.u32, ctx.r28.u32, xer);
	// bge cr6,0x82eb191c
	if (!cr6.lt) goto loc_82EB191C;
	// addi r27,r28,-8
	ctx.r27.s64 = ctx.r28.s64 + -8;
loc_82EB1788:
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82470e60
	ctx.lr = 0x82EB17A8;
	sub_82470E60(ctx, base);
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// addi r26,r27,36
	ctx.r26.s64 = ctx.r27.s64 + 36;
	// stb r31,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r31.u8);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82470e60
	ctx.lr = 0x82EB17CC;
	sub_82470E60(ctx, base);
	// lwz r11,64(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 64);
	// lwz r10,68(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 68);
	// addi r25,r27,-56
	ctx.r25.s64 = ctx.r27.s64 + -56;
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r10,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// bl 0x82470e60
	ctx.lr = 0x82EB1800;
	sub_82470E60(ctx, base);
	// stw r29,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r29.u32);
	// stw r31,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r31.u32);
	// addi r23,r27,-28
	ctx.r23.s64 = ctx.r27.s64 + -28;
	// stb r31,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, ctx.r31.u8);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// bl 0x82470e60
	ctx.lr = 0x82EB1824;
	sub_82470E60(ctx, base);
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r8,4(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mtctr r24
	ctr.u64 = ctx.r24.u64;
	// stw r9,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r9.u32);
	// stw r8,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r8.u32);
	// bctrl 
	ctx.lr = 0x82EB1844;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82eb191c
	if (!cr6.eq) goto loc_82EB191C;
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82470e60
	ctx.lr = 0x82EB1870;
	sub_82470E60(ctx, base);
	// stw r29,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r29.u32);
	// stw r31,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r31.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stb r31,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// bl 0x82470e60
	ctx.lr = 0x82EB1890;
	sub_82470E60(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// stw r10,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r10.u32);
	// bl 0x82470e60
	ctx.lr = 0x82EB18C0;
	sub_82470E60(ctx, base);
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stb r31,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82470e60
	ctx.lr = 0x82EB18E0;
	sub_82470E60(ctx, base);
	// lwz r9,64(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 64);
	// lwz r8,68(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 68);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r24
	ctr.u64 = ctx.r24.u64;
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// stw r8,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// bctrl 
	ctx.lr = 0x82EB1900;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82eb191c
	if (!cr6.eq) goto loc_82EB191C;
	// addi r28,r28,-64
	ctx.r28.s64 = ctx.r28.s64 + -64;
	// addi r27,r27,-64
	ctx.r27.s64 = ctx.r27.s64 + -64;
	// cmplw cr6,r19,r28
	cr6.compare<uint32_t>(ctx.r19.u32, ctx.r28.u32, xer);
	// blt cr6,0x82eb1788
	if (cr6.lt) goto loc_82EB1788;
loc_82EB191C:
	// cmplw cr6,r21,r18
	cr6.compare<uint32_t>(ctx.r21.u32, ctx.r18.u32, xer);
	// bge cr6,0x82eb1ab0
	if (!cr6.lt) goto loc_82EB1AB0;
	// addi r26,r28,28
	ctx.r26.s64 = ctx.r28.s64 + 28;
loc_82EB1928:
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82470e60
	ctx.lr = 0x82EB1948;
	sub_82470E60(ctx, base);
	// stw r29,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r29.u32);
	// stw r31,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r31.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stb r31,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// bl 0x82470e60
	ctx.lr = 0x82EB1968;
	sub_82470E60(ctx, base);
	// lwz r11,56(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// lwz r10,60(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// stw r10,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r10.u32);
	// bl 0x82470e60
	ctx.lr = 0x82EB1998;
	sub_82470E60(ctx, base);
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// addi r27,r21,28
	ctx.r27.s64 = ctx.r21.s64 + 28;
	// stb r31,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r31.u8);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82470e60
	ctx.lr = 0x82EB19BC;
	sub_82470E60(ctx, base);
	// lwz r9,56(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + 56);
	// lwz r8,60(r21)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r21.u32 + 60);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r24
	ctr.u64 = ctx.r24.u64;
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// stw r8,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// bctrl 
	ctx.lr = 0x82EB19DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82eb1ab0
	if (!cr6.eq) goto loc_82EB1AB0;
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82470e60
	ctx.lr = 0x82EB1A08;
	sub_82470E60(ctx, base);
	// stw r29,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r29.u32);
	// stw r31,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r31.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stb r31,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// bl 0x82470e60
	ctx.lr = 0x82EB1A28;
	sub_82470E60(ctx, base);
	// lwz r11,56(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 56);
	// lwz r10,60(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 60);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// stw r10,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r10.u32);
	// bl 0x82470e60
	ctx.lr = 0x82EB1A58;
	sub_82470E60(ctx, base);
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stb r31,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82470e60
	ctx.lr = 0x82EB1A78;
	sub_82470E60(ctx, base);
	// lwz r9,56(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// lwz r8,60(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r24
	ctr.u64 = ctx.r24.u64;
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// stw r8,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// bctrl 
	ctx.lr = 0x82EB1A98;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82eb1ab0
	if (!cr6.eq) goto loc_82EB1AB0;
	// addi r21,r21,64
	ctx.r21.s64 = ctx.r21.s64 + 64;
	// cmplw cr6,r21,r18
	cr6.compare<uint32_t>(ctx.r21.u32, ctx.r18.u32, xer);
	// blt cr6,0x82eb1928
	if (cr6.lt) goto loc_82EB1928;
loc_82EB1AB0:
	// mr r26,r21
	ctx.r26.u64 = ctx.r21.u64;
	// mr r20,r28
	ctx.r20.u64 = ctx.r28.u64;
loc_82EB1AB8:
	// cmplw cr6,r26,r18
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r18.u32, xer);
	// bge cr6,0x82eb1c5c
	if (!cr6.lt) goto loc_82EB1C5C;
	// addi r25,r28,28
	ctx.r25.s64 = ctx.r28.s64 + 28;
loc_82EB1AC4:
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82470e60
	ctx.lr = 0x82EB1AE4;
	sub_82470E60(ctx, base);
	// stw r29,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r29.u32);
	// stw r31,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r31.u32);
	// addi r27,r26,28
	ctx.r27.s64 = ctx.r26.s64 + 28;
	// stb r31,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, ctx.r31.u8);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// bl 0x82470e60
	ctx.lr = 0x82EB1B08;
	sub_82470E60(ctx, base);
	// lwz r11,56(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 56);
	// lwz r10,60(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 60);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// stw r10,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r10.u32);
	// bl 0x82470e60
	ctx.lr = 0x82EB1B38;
	sub_82470E60(ctx, base);
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stb r31,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82470e60
	ctx.lr = 0x82EB1B58;
	sub_82470E60(ctx, base);
	// lwz r9,56(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// lwz r8,60(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r24
	ctr.u64 = ctx.r24.u64;
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// stw r8,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// bctrl 
	ctx.lr = 0x82EB1B78;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82eb1c50
	if (!cr6.eq) goto loc_82EB1C50;
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82470e60
	ctx.lr = 0x82EB1BA4;
	sub_82470E60(ctx, base);
	// stw r29,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r29.u32);
	// stw r31,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r31.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stb r31,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// bl 0x82470e60
	ctx.lr = 0x82EB1BC4;
	sub_82470E60(ctx, base);
	// lwz r11,56(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// lwz r10,60(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// stw r10,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r10.u32);
	// bl 0x82470e60
	ctx.lr = 0x82EB1BF4;
	sub_82470E60(ctx, base);
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stb r31,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82470e60
	ctx.lr = 0x82EB1C14;
	sub_82470E60(ctx, base);
	// lwz r9,56(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 56);
	// lwz r8,60(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 60);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r24
	ctr.u64 = ctx.r24.u64;
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// stw r8,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// bctrl 
	ctx.lr = 0x82EB1C34;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82eb1c5c
	if (!cr6.eq) goto loc_82EB1C5C;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r21,r21,64
	ctx.r21.s64 = ctx.r21.s64 + 64;
	// bl 0x82eb0a00
	ctx.lr = 0x82EB1C50;
	sub_82EB0A00(ctx, base);
loc_82EB1C50:
	// addi r26,r26,64
	ctx.r26.s64 = ctx.r26.s64 + 64;
	// cmplw cr6,r26,r18
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r18.u32, xer);
	// blt cr6,0x82eb1ac4
	if (cr6.lt) goto loc_82EB1AC4;
loc_82EB1C5C:
	// cmplw cr6,r20,r19
	cr6.compare<uint32_t>(ctx.r20.u32, ctx.r19.u32, xer);
	// ble cr6,0x82eb1e10
	if (!cr6.gt) goto loc_82EB1E10;
	// addi r27,r20,-8
	ctx.r27.s64 = ctx.r20.s64 + -8;
loc_82EB1C68:
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82470e60
	ctx.lr = 0x82EB1C88;
	sub_82470E60(ctx, base);
	// stw r29,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r29.u32);
	// stw r31,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r31.u32);
	// addi r23,r28,28
	ctx.r23.s64 = ctx.r28.s64 + 28;
	// stb r31,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, ctx.r31.u8);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// bl 0x82470e60
	ctx.lr = 0x82EB1CAC;
	sub_82470E60(ctx, base);
	// lwz r11,56(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// lwz r10,60(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// addi r25,r27,-56
	ctx.r25.s64 = ctx.r27.s64 + -56;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r10.u32);
	// bl 0x82470e60
	ctx.lr = 0x82EB1CE0;
	sub_82470E60(ctx, base);
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// addi r22,r27,-28
	ctx.r22.s64 = ctx.r27.s64 + -28;
	// stb r31,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r31.u8);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82470e60
	ctx.lr = 0x82EB1D04;
	sub_82470E60(ctx, base);
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r8,4(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r24
	ctr.u64 = ctx.r24.u64;
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// stw r8,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// bctrl 
	ctx.lr = 0x82EB1D24;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82eb1dfc
	if (!cr6.eq) goto loc_82EB1DFC;
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82470e60
	ctx.lr = 0x82EB1D50;
	sub_82470E60(ctx, base);
	// stw r29,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r29.u32);
	// stw r31,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r31.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stb r31,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// bl 0x82470e60
	ctx.lr = 0x82EB1D70;
	sub_82470E60(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// stw r10,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r10.u32);
	// bl 0x82470e60
	ctx.lr = 0x82EB1DA0;
	sub_82470E60(ctx, base);
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stb r31,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82470e60
	ctx.lr = 0x82EB1DC0;
	sub_82470E60(ctx, base);
	// lwz r9,56(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// lwz r8,60(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r24
	ctr.u64 = ctx.r24.u64;
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// stw r8,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// bctrl 
	ctx.lr = 0x82EB1DE0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82eb1e0c
	if (!cr6.eq) goto loc_82EB1E0C;
	// addi r28,r28,-64
	ctx.r28.s64 = ctx.r28.s64 + -64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82eb0a00
	ctx.lr = 0x82EB1DFC;
	sub_82EB0A00(ctx, base);
loc_82EB1DFC:
	// addi r20,r20,-64
	ctx.r20.s64 = ctx.r20.s64 + -64;
	// addi r27,r27,-64
	ctx.r27.s64 = ctx.r27.s64 + -64;
	// cmplw cr6,r19,r20
	cr6.compare<uint32_t>(ctx.r19.u32, ctx.r20.u32, xer);
	// blt cr6,0x82eb1c68
	if (cr6.lt) goto loc_82EB1C68;
loc_82EB1E0C:
	// cmplw cr6,r20,r19
	cr6.compare<uint32_t>(ctx.r20.u32, ctx.r19.u32, xer);
loc_82EB1E10:
	// bne cr6,0x82eb1e4c
	if (!cr6.eq) goto loc_82EB1E4C;
	// cmplw cr6,r26,r18
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r18.u32, xer);
	// beq cr6,0x82eb1e98
	if (cr6.eq) goto loc_82EB1E98;
	// cmplw cr6,r21,r26
	cr6.compare<uint32_t>(ctx.r21.u32, ctx.r26.u32, xer);
	// beq cr6,0x82eb1e30
	if (cr6.eq) goto loc_82EB1E30;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82eb0a00
	ctx.lr = 0x82EB1E30;
	sub_82EB0A00(ctx, base);
loc_82EB1E30:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r21,r21,64
	ctx.r21.s64 = ctx.r21.s64 + 64;
	// addi r28,r28,64
	ctx.r28.s64 = ctx.r28.s64 + 64;
	// addi r26,r26,64
	ctx.r26.s64 = ctx.r26.s64 + 64;
	// bl 0x82eb0a00
	ctx.lr = 0x82EB1E48;
	sub_82EB0A00(ctx, base);
	// b 0x82eb1ab8
	goto loc_82EB1AB8;
loc_82EB1E4C:
	// cmplw cr6,r26,r18
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r18.u32, xer);
	// addi r20,r20,-64
	ctx.r20.s64 = ctx.r20.s64 + -64;
	// bne cr6,0x82eb1e84
	if (!cr6.eq) goto loc_82EB1E84;
	// addi r28,r28,-64
	ctx.r28.s64 = ctx.r28.s64 + -64;
	// cmplw cr6,r20,r28
	cr6.compare<uint32_t>(ctx.r20.u32, ctx.r28.u32, xer);
	// beq cr6,0x82eb1e70
	if (cr6.eq) goto loc_82EB1E70;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82eb0a00
	ctx.lr = 0x82EB1E70;
	sub_82EB0A00(ctx, base);
loc_82EB1E70:
	// addi r21,r21,-64
	ctx.r21.s64 = ctx.r21.s64 + -64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x82eb0a00
	ctx.lr = 0x82EB1E80;
	sub_82EB0A00(ctx, base);
	// b 0x82eb1ab8
	goto loc_82EB1AB8;
loc_82EB1E84:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// bl 0x82eb0a00
	ctx.lr = 0x82EB1E90;
	sub_82EB0A00(ctx, base);
	// addi r26,r26,64
	ctx.r26.s64 = ctx.r26.s64 + 64;
	// b 0x82eb1ab8
	goto loc_82EB1AB8;
loc_82EB1E98:
	// stw r28,0(r17)
	PPC_STORE_U32(ctx.r17.u32 + 0, ctx.r28.u32);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// stw r21,4(r17)
	PPC_STORE_U32(ctx.r17.u32 + 4, ctx.r21.u32);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB1EAC"))) PPC_WEAK_FUNC(sub_82EB1EAC);
PPC_FUNC_IMPL(__imp__sub_82EB1EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB1EB0"))) PPC_WEAK_FUNC(sub_82EB1EB0);
PPC_FUNC_IMPL(__imp__sub_82EB1EB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82EB1EB8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,1023
	ctx.r11.s64 = 67043328;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82eb1ee0
	if (!cr6.gt) goto loc_82EB1EE0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x82EB1EE0;
	sub_831CC150(ctx, base);
loc_82EB1EE0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,6
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3F) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 6;
	// cmplw cr6,r8,r28
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r28.u32, xer);
	// bge cr6,0x82eb1f70
	if (!cr6.lt) goto loc_82EB1F70;
	// addi r30,r31,12
	ctx.r30.s64 = ctx.r31.s64 + 12;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82eb0268
	ctx.lr = 0x82EB1F08;
	sub_82EB0268(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82eb0e10
	ctx.lr = 0x82EB1F28;
	sub_82EB0E10(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// srawi r27,r11,6
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r27.s64 = ctx.r11.s32 >> 6;
	// beq cr6,0x82eb1f54
	if (cr6.eq) goto loc_82EB1F54;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82eb0d90
	ctx.lr = 0x82EB1F4C;
	sub_82EB0D90(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82416268
	ctx.lr = 0x82EB1F54;
	sub_82416268(ctx, base);
loc_82EB1F54:
	// rlwinm r10,r28,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 6) & 0xFFFFFFC0;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// rlwinm r11,r27,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 6) & 0xFFFFFFC0;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
loc_82EB1F70:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB1F78"))) PPC_WEAK_FUNC(sub_82EB1F78);
PPC_FUNC_IMPL(__imp__sub_82EB1F78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82EB1F80;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r30,r3,r4
	ctx.r30.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm r11,r30,0,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFC0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,64
	cr6.compare<int32_t>(ctx.r11.s32, 64, xer);
	// ble cr6,0x82eb1fc8
	if (!cr6.gt) goto loc_82EB1FC8;
loc_82EB1FA0:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82eb1660
	ctx.lr = 0x82EB1FB4;
	sub_82EB1660(ctx, base);
	// addi r30,r30,-64
	ctx.r30.s64 = ctx.r30.s64 + -64;
	// addi r31,r31,-64
	ctx.r31.s64 = ctx.r31.s64 + -64;
	// rlwinm r11,r30,0,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFC0;
	// cmpwi cr6,r11,64
	cr6.compare<int32_t>(ctx.r11.s32, 64, xer);
	// bgt cr6,0x82eb1fa0
	if (cr6.gt) goto loc_82EB1FA0;
loc_82EB1FC8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB1FD0"))) PPC_WEAK_FUNC(sub_82EB1FD0);
PPC_FUNC_IMPL(__imp__sub_82EB1FD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82EB1FD8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,13956(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13956);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r28,r3,13936
	ctx.r28.s64 = ctx.r3.s64 + 13936;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82eb1ff8
	if (cr6.lt) goto loc_82EB1FF8;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82416268
	ctx.lr = 0x82EB1FF8;
	sub_82416268(ctx, base);
loc_82EB1FF8:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stw r29,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r29.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// lwz r3,13920(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13920);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82eb201c
	if (cr6.eq) goto loc_82EB201C;
	// bl 0x82416268
	ctx.lr = 0x82EB201C;
	sub_82416268(ctx, base);
loc_82EB201C:
	// stw r31,13920(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13920, ctx.r31.u32);
	// addi r3,r30,7116
	ctx.r3.s64 = ctx.r30.s64 + 7116;
	// stw r31,13924(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13924, ctx.r31.u32);
	// stw r31,13928(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13928, ctx.r31.u32);
	// bl 0x82eb0468
	ctx.lr = 0x82EB2030;
	sub_82EB0468(ctx, base);
	// addi r3,r30,312
	ctx.r3.s64 = ctx.r30.s64 + 312;
	// bl 0x82eb0468
	ctx.lr = 0x82EB2038;
	sub_82EB0468(ctx, base);
	// lwz r3,296(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 296);
	// addi r28,r30,296
	ctx.r28.s64 = ctx.r30.s64 + 296;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82eb2060
	if (cr6.eq) goto loc_82EB2060;
	// addi r5,r28,12
	ctx.r5.s64 = ctx.r28.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x82eb0d90
	ctx.lr = 0x82EB2058;
	sub_82EB0D90(ctx, base);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82416268
	ctx.lr = 0x82EB2060;
	sub_82416268(ctx, base);
loc_82EB2060:
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// addi r26,r30,268
	ctx.r26.s64 = ctx.r30.s64 + 268;
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// lwz r11,288(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 288);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82eb2084
	if (cr6.lt) goto loc_82EB2084;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x82416268
	ctx.lr = 0x82EB2084;
	sub_82416268(ctx, base);
loc_82EB2084:
	// stw r29,20(r26)
	PPC_STORE_U32(ctx.r26.u32 + 20, ctx.r29.u32);
	// addi r27,r30,240
	ctx.r27.s64 = ctx.r30.s64 + 240;
	// stw r31,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r31.u32);
	// stb r31,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r31.u8);
	// lwz r11,260(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82eb20a8
	if (cr6.lt) goto loc_82EB20A8;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x82416268
	ctx.lr = 0x82EB20A8;
	sub_82416268(ctx, base);
loc_82EB20A8:
	// stw r29,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r29.u32);
	// addi r28,r30,212
	ctx.r28.s64 = ctx.r30.s64 + 212;
	// stw r31,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r31.u32);
	// stb r31,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r31.u8);
	// lwz r11,232(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82eb20cc
	if (cr6.lt) goto loc_82EB20CC;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82416268
	ctx.lr = 0x82EB20CC;
	sub_82416268(ctx, base);
loc_82EB20CC:
	// stw r29,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r29.u32);
	// addi r27,r30,184
	ctx.r27.s64 = ctx.r30.s64 + 184;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// lwz r11,204(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 204);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82eb20f0
	if (cr6.lt) goto loc_82EB20F0;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x82416268
	ctx.lr = 0x82EB20F0;
	sub_82416268(ctx, base);
loc_82EB20F0:
	// stw r29,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r29.u32);
	// addi r28,r30,156
	ctx.r28.s64 = ctx.r30.s64 + 156;
	// stw r31,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r31.u32);
	// stb r31,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r31.u8);
	// lwz r11,176(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82eb2114
	if (cr6.lt) goto loc_82EB2114;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82416268
	ctx.lr = 0x82EB2114;
	sub_82416268(ctx, base);
loc_82EB2114:
	// stw r29,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r29.u32);
	// addi r27,r30,128
	ctx.r27.s64 = ctx.r30.s64 + 128;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// lwz r11,148(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82eb2138
	if (cr6.lt) goto loc_82EB2138;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x82416268
	ctx.lr = 0x82EB2138;
	sub_82416268(ctx, base);
loc_82EB2138:
	// stw r29,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r29.u32);
	// addi r28,r30,100
	ctx.r28.s64 = ctx.r30.s64 + 100;
	// stw r31,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r31.u32);
	// stb r31,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r31.u8);
	// lwz r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82eb215c
	if (cr6.lt) goto loc_82EB215C;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82416268
	ctx.lr = 0x82EB215C;
	sub_82416268(ctx, base);
loc_82EB215C:
	// stw r29,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r29.u32);
	// addi r27,r30,72
	ctx.r27.s64 = ctx.r30.s64 + 72;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// lwz r11,92(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82eb2180
	if (cr6.lt) goto loc_82EB2180;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x82416268
	ctx.lr = 0x82EB2180;
	sub_82416268(ctx, base);
loc_82EB2180:
	// stw r29,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r29.u32);
	// addi r28,r30,44
	ctx.r28.s64 = ctx.r30.s64 + 44;
	// stw r31,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r31.u32);
	// stb r31,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r31.u8);
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82eb21a4
	if (cr6.lt) goto loc_82EB21A4;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82416268
	ctx.lr = 0x82EB21A4;
	sub_82416268(ctx, base);
loc_82EB21A4:
	// stw r29,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r29.u32);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82eb21c8
	if (cr6.lt) goto loc_82EB21C8;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82416268
	ctx.lr = 0x82EB21C8;
	sub_82416268(ctx, base);
loc_82EB21C8:
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB21DC"))) PPC_WEAK_FUNC(sub_82EB21DC);
PPC_FUNC_IMPL(__imp__sub_82EB21DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB21E0"))) PPC_WEAK_FUNC(sub_82EB21E0);
PPC_FUNC_IMPL(__imp__sub_82EB21E0) {
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
	// beq cr6,0x82eb222c
	if (cr6.eq) goto loc_82EB222C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82eb0d10
	ctx.lr = 0x82EB2214;
	sub_82EB0D10(ctx, base);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82eb0d90
	ctx.lr = 0x82EB2228;
	sub_82EB0D90(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_82EB222C:
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

__attribute__((alias("__imp__sub_82EB2244"))) PPC_WEAK_FUNC(sub_82EB2244);
PPC_FUNC_IMPL(__imp__sub_82EB2244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB2248"))) PPC_WEAK_FUNC(sub_82EB2248);
PPC_FUNC_IMPL(__imp__sub_82EB2248) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,1023
	ctx.r10.s64 = 67043328;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// subf r6,r4,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r4.s64;
	// srawi r10,r7,6
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 6;
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// bge cr6,0x82eb2278
	if (!cr6.lt) goto loc_82EB2278;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// b 0x831cc150
	sub_831CC150(ctx, base);
	return;
loc_82EB2278:
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 + ctx.r4.u64;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// srawi r11,r6,6
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 6;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// blt cr6,0x82eb22a8
	if (cr6.lt) goto loc_82EB22A8;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82EB22A8:
	// cmplw cr6,r4,r8
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, xer);
	// bge cr6,0x82eb22b4
	if (!cr6.lt) goto loc_82EB22B4;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
loc_82EB22B4:
	// b 0x82eb1eb0
	sub_82EB1EB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB22B8"))) PPC_WEAK_FUNC(sub_82EB22B8);
PPC_FUNC_IMPL(__imp__sub_82EB22B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB22BC"))) PPC_WEAK_FUNC(sub_82EB22BC);
PPC_FUNC_IMPL(__imp__sub_82EB22BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB22C0"))) PPC_WEAK_FUNC(sub_82EB22C0);
PPC_FUNC_IMPL(__imp__sub_82EB22C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82EB22C8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82eb22e8
	if (cr6.eq) goto loc_82EB22E8;
	// addi r3,r3,296
	ctx.r3.s64 = ctx.r3.s64 + 296;
	// bl 0x82eb21e0
	ctx.lr = 0x82EB22E4;
	sub_82EB21E0(ctx, base);
	// b 0x82eb2374
	goto loc_82EB2374;
loc_82EB22E8:
	// lwz r30,296(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 296);
	// addi r31,r27,296
	ctx.r31.s64 = ctx.r27.s64 + 296;
	// lwz r11,300(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 300);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// beq cr6,0x82eb2374
	if (cr6.eq) goto loc_82EB2374;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lbz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r26,r11,-13880
	ctx.r26.s64 = ctx.r11.s64 + -13880;
loc_82EB230C:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827a8810
	ctx.lr = 0x82EB2324;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82eb2364
	if (cr6.eq) goto loc_82EB2364;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r30,64
	ctx.r3.s64 = ctx.r30.s64 + 64;
	// bl 0x82eb0d10
	ctx.lr = 0x82EB2340;
	sub_82EB0D10(ctx, base);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// addi r3,r4,-64
	ctx.r3.s64 = ctx.r4.s64 + -64;
	// bl 0x82eb0d90
	ctx.lr = 0x82EB2354;
	sub_82EB0D90(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,-64
	ctx.r11.s64 = ctx.r11.s64 + -64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x82eb2368
	goto loc_82EB2368;
loc_82EB2364:
	// addi r30,r30,64
	ctx.r30.s64 = ctx.r30.s64 + 64;
loc_82EB2368:
	// lwz r11,300(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 300);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bne cr6,0x82eb230c
	if (!cr6.eq) goto loc_82EB230C;
loc_82EB2374:
	// lwz r31,13920(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13920);
	// addi r29,r27,13920
	ctx.r29.s64 = ctx.r27.s64 + 13920;
	// lwz r4,13924(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13924);
	// cmplw cr6,r31,r4
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, xer);
	// beq cr6,0x82eb23a8
	if (cr6.eq) goto loc_82EB23A8;
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
	ctx.lr = 0x82EB23A0;
	sub_831CE420(ctx, base);
	// add r10,r30,r31
	ctx.r10.u64 = ctx.r30.u64 + ctx.r31.u64;
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
loc_82EB23A8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB23B0"))) PPC_WEAK_FUNC(sub_82EB23B0);
PPC_FUNC_IMPL(__imp__sub_82EB23B0) {
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
	// bge cr6,0x82eb23e8
	if (!cr6.lt) goto loc_82EB23E8;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x82eb23ec
	if (!cr6.gt) goto loc_82EB23EC;
loc_82EB23E8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82EB23EC:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82eb2438
	if (cr6.eq) goto loc_82EB2438;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r8,r10,r30
	ctx.r8.s64 = ctx.r30.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// srawi r30,r8,6
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3F) != 0);
	ctx.r30.s64 = ctx.r8.s32 >> 6;
	// bne cr6,0x82eb241c
	if (!cr6.eq) goto loc_82EB241C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eb2248
	ctx.lr = 0x82EB241C;
	sub_82EB2248(ctx, base);
loc_82EB241C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82eb2464
	if (cr6.eq) goto loc_82EB2464;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r30,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 6) & 0xFFFFFFC0;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82eb2460
	goto loc_82EB2460;
loc_82EB2438:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82eb2450
	if (!cr6.eq) goto loc_82EB2450;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eb2248
	ctx.lr = 0x82EB2450;
	sub_82EB2248(ctx, base);
loc_82EB2450:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82eb2464
	if (cr6.eq) goto loc_82EB2464;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82EB2460:
	// bl 0x82eb0988
	ctx.lr = 0x82EB2464;
	sub_82EB0988(ctx, base);
loc_82EB2464:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
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

__attribute__((alias("__imp__sub_82EB2488"))) PPC_WEAK_FUNC(sub_82EB2488);
PPC_FUNC_IMPL(__imp__sub_82EB2488) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82EB2490;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// srawi r11,r11,6
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// ble cr6,0x82eb2540
	if (!cr6.gt) goto loc_82EB2540;
loc_82EB24B4:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble cr6,0x82eb2564
	if (!cr6.gt) goto loc_82EB2564;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eb1728
	ctx.lr = 0x82EB24D0;
	sub_82EB1728(ctx, base);
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
	// rlwinm r7,r9,0,0,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFC0;
	// rlwinm r6,r8,0,0,25
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFC0;
	// cmpw cr6,r6,r7
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, xer);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bge cr6,0x82eb2520
	if (!cr6.lt) goto loc_82EB2520;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82eb2488
	ctx.lr = 0x82EB2518;
	sub_82EB2488(ctx, base);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// b 0x82eb2530
	goto loc_82EB2530;
loc_82EB2520:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82eb2488
	ctx.lr = 0x82EB252C;
	sub_82EB2488(ctx, base);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_82EB2530:
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// srawi r11,r11,6
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// bgt cr6,0x82eb24b4
	if (cr6.gt) goto loc_82EB24B4;
loc_82EB2540:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// ble cr6,0x82eb255c
	if (!cr6.gt) goto loc_82EB255C;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82eb1330
	ctx.lr = 0x82EB255C;
	sub_82EB1330(ctx, base);
loc_82EB255C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82EB2564:
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// ble cr6,0x82eb2540
	if (!cr6.gt) goto loc_82EB2540;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// ble cr6,0x82eb258c
	if (!cr6.gt) goto loc_82EB258C;
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
	// bl 0x82eb1230
	ctx.lr = 0x82EB258C;
	sub_82EB1230(ctx, base);
loc_82EB258C:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82eb1f78
	ctx.lr = 0x82EB259C;
	sub_82EB1F78(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB25A4"))) PPC_WEAK_FUNC(sub_82EB25A4);
PPC_FUNC_IMPL(__imp__sub_82EB25A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB25A8"))) PPC_WEAK_FUNC(sub_82EB25A8);
PPC_FUNC_IMPL(__imp__sub_82EB25A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82EB25B0;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// stw r31,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82eb25d8
	if (cr6.lt) goto loc_82EB25D8;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82eb25dc
	goto loc_82EB25DC;
loc_82EB25D8:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82EB25DC:
	// stb r31,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r22,r29,44
	ctx.r22.s64 = ctx.r29.s64 + 44;
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stw r31,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r31.u32);
	// blt cr6,0x82eb25fc
	if (cr6.lt) goto loc_82EB25FC;
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// b 0x82eb2600
	goto loc_82EB2600;
loc_82EB25FC:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82EB2600:
	// stb r31,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r23,r29,72
	ctx.r23.s64 = ctx.r29.s64 + 72;
	// lwz r11,92(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stw r31,88(r29)
	PPC_STORE_U32(ctx.r29.u32 + 88, ctx.r31.u32);
	// blt cr6,0x82eb2620
	if (cr6.lt) goto loc_82EB2620;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// b 0x82eb2624
	goto loc_82EB2624;
loc_82EB2620:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82EB2624:
	// stb r31,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r24,r29,100
	ctx.r24.s64 = ctx.r29.s64 + 100;
	// stw r31,116(r29)
	PPC_STORE_U32(ctx.r29.u32 + 116, ctx.r31.u32);
	// lwz r11,120(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 120);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82eb2644
	if (cr6.lt) goto loc_82EB2644;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// b 0x82eb2648
	goto loc_82EB2648;
loc_82EB2644:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82EB2648:
	// stb r31,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r25,r29,128
	ctx.r25.s64 = ctx.r29.s64 + 128;
	// stw r31,144(r29)
	PPC_STORE_U32(ctx.r29.u32 + 144, ctx.r31.u32);
	// lwz r11,148(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82eb2668
	if (cr6.lt) goto loc_82EB2668;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// b 0x82eb266c
	goto loc_82EB266C;
loc_82EB2668:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82EB266C:
	// stb r31,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r26,r29,156
	ctx.r26.s64 = ctx.r29.s64 + 156;
	// stw r31,172(r29)
	PPC_STORE_U32(ctx.r29.u32 + 172, ctx.r31.u32);
	// lwz r11,176(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 176);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82eb268c
	if (cr6.lt) goto loc_82EB268C;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// b 0x82eb2690
	goto loc_82EB2690;
loc_82EB268C:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82EB2690:
	// stb r31,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r27,r29,184
	ctx.r27.s64 = ctx.r29.s64 + 184;
	// stw r31,200(r29)
	PPC_STORE_U32(ctx.r29.u32 + 200, ctx.r31.u32);
	// lwz r11,204(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 204);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82eb26b0
	if (cr6.lt) goto loc_82EB26B0;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// b 0x82eb26b4
	goto loc_82EB26B4;
loc_82EB26B0:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82EB26B4:
	// stb r31,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r28,r29,212
	ctx.r28.s64 = ctx.r29.s64 + 212;
	// stw r31,228(r29)
	PPC_STORE_U32(ctx.r29.u32 + 228, ctx.r31.u32);
	// lwz r11,232(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 232);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82eb26d4
	if (cr6.lt) goto loc_82EB26D4;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// b 0x82eb26d8
	goto loc_82EB26D8;
loc_82EB26D4:
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
loc_82EB26D8:
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// addi r11,r29,240
	ctx.r11.s64 = ctx.r29.s64 + 240;
	// stw r31,256(r29)
	PPC_STORE_U32(ctx.r29.u32 + 256, ctx.r31.u32);
	// lwz r9,260(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 260);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82eb26f8
	if (cr6.lt) goto loc_82EB26F8;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82eb26fc
	goto loc_82EB26FC;
loc_82EB26F8:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_82EB26FC:
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// addi r11,r29,268
	ctx.r11.s64 = ctx.r29.s64 + 268;
	// stw r31,284(r29)
	PPC_STORE_U32(ctx.r29.u32 + 284, ctx.r31.u32);
	// lwz r9,288(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 288);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82eb2718
	if (cr6.lt) goto loc_82EB2718;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82EB2718:
	// stb r31,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stw r31,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r31.u32);
	// blt cr6,0x82eb2730
	if (cr6.lt) goto loc_82EB2730;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82EB2730:
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// addi r11,r29,13936
	ctx.r11.s64 = ctx.r29.s64 + 13936;
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// lwz r10,13956(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13956);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stw r31,13952(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13952, ctx.r31.u32);
	// blt cr6,0x82eb275c
	if (cr6.lt) goto loc_82EB275C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82EB275C:
	// stb r31,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,7116(r29)
	PPC_STORE_U32(ctx.r29.u32 + 7116, ctx.r31.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,312(r29)
	PPC_STORE_U32(ctx.r29.u32 + 312, ctx.r31.u32);
	// bl 0x82eb22c0
	ctx.lr = 0x82EB2774;
	sub_82EB22C0(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r30,r11,-13888
	ctx.r30.s64 = ctx.r11.s64 + -13888;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r4,r30,-48
	ctx.r4.s64 = ctx.r30.s64 + -48;
	// bl 0x82472fc0
	ctx.lr = 0x82EB278C;
	sub_82472FC0(ctx, base);
	// addi r4,r30,-40
	ctx.r4.s64 = ctx.r30.s64 + -40;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82472fc0
	ctx.lr = 0x82EB279C;
	sub_82472FC0(ctx, base);
	// addi r4,r30,-32
	ctx.r4.s64 = ctx.r30.s64 + -32;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82472fc0
	ctx.lr = 0x82EB27AC;
	sub_82472FC0(ctx, base);
	// addi r4,r30,-24
	ctx.r4.s64 = ctx.r30.s64 + -24;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82472fc0
	ctx.lr = 0x82EB27BC;
	sub_82472FC0(ctx, base);
	// addi r4,r30,-16
	ctx.r4.s64 = ctx.r30.s64 + -16;
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82472fc0
	ctx.lr = 0x82EB27CC;
	sub_82472FC0(ctx, base);
	// addi r4,r30,-8
	ctx.r4.s64 = ctx.r30.s64 + -8;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82472fc0
	ctx.lr = 0x82EB27DC;
	sub_82472FC0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82472fc0
	ctx.lr = 0x82EB27EC;
	sub_82472FC0(ctx, base);
	// stw r31,13964(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13964, ctx.r31.u32);
	// stb r31,13968(r29)
	PPC_STORE_U8(ctx.r29.u32 + 13968, ctx.r31.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB27FC"))) PPC_WEAK_FUNC(sub_82EB27FC);
PPC_FUNC_IMPL(__imp__sub_82EB27FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB2800"))) PPC_WEAK_FUNC(sub_82EB2800);
PPC_FUNC_IMPL(__imp__sub_82EB2800) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82EB2808;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r6,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r6.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82eb2914
	if (cr6.eq) goto loc_82EB2914;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82eb2914
	if (cr6.eq) goto loc_82EB2914;
	// li r10,15
	ctx.r10.s64 = 15;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stb r11,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r11.u8);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
loc_82EB2860:
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb2860
	if (!cr6.eq) goto loc_82EB2860;
	// subf r11,r31,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r31.s64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x82EB2888;
	sub_82472FC0(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82EB288C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82eb288c
	if (!cr6.eq) goto loc_82EB288C;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x82EB28B4;
	sub_82472FC0(ctx, base);
	// stw r29,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r29.u32);
	// stw r28,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r27,296
	ctx.r3.s64 = ctx.r27.s64 + 296;
	// bl 0x82eb23b0
	ctx.lr = 0x82EB28C8;
	sub_82EB23B0(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// addi r11,r11,-13872
	ctx.r11.s64 = ctx.r11.s64 + -13872;
loc_82EB28D4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82eb28f8
	if (cr6.eq) goto loc_82EB28F8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82eb28d4
	if (cr6.eq) goto loc_82EB28D4;
loc_82EB28F8:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82eb290c
	if (!cr6.eq) goto loc_82EB290C;
	// addi r4,r1,236
	ctx.r4.s64 = ctx.r1.s64 + 236;
	// addi r3,r27,13920
	ctx.r3.s64 = ctx.r27.s64 + 13920;
	// bl 0x82ab5f20
	ctx.lr = 0x82EB290C;
	sub_82AB5F20(ctx, base);
loc_82EB290C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eb04d8
	ctx.lr = 0x82EB2914;
	sub_82EB04D8(ctx, base);
loc_82EB2914:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB291C"))) PPC_WEAK_FUNC(sub_82EB291C);
PPC_FUNC_IMPL(__imp__sub_82EB291C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB2920"))) PPC_WEAK_FUNC(sub_82EB2920);
PPC_FUNC_IMPL(__imp__sub_82EB2920) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82EB2928;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// addi r3,r3,312
	ctx.r3.s64 = ctx.r3.s64 + 312;
	// stw r29,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r29.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stb r30,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r30.u8);
	// stw r29,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r29.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// stb r30,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r30.u8);
	// stw r29,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r29.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stb r30,72(r31)
	PPC_STORE_U8(ctx.r31.u32 + 72, ctx.r30.u8);
	// stw r29,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r29.u32);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// stb r30,100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 100, ctx.r30.u8);
	// stw r29,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r29.u32);
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// stb r30,128(r31)
	PPC_STORE_U8(ctx.r31.u32 + 128, ctx.r30.u8);
	// stw r29,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r29.u32);
	// stw r30,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r30.u32);
	// stb r30,156(r31)
	PPC_STORE_U8(ctx.r31.u32 + 156, ctx.r30.u8);
	// stw r29,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r29.u32);
	// stw r30,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r30.u32);
	// stb r30,184(r31)
	PPC_STORE_U8(ctx.r31.u32 + 184, ctx.r30.u8);
	// stw r29,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r29.u32);
	// stw r30,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r30.u32);
	// stb r30,212(r31)
	PPC_STORE_U8(ctx.r31.u32 + 212, ctx.r30.u8);
	// stw r29,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r29.u32);
	// stw r30,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r30.u32);
	// stb r30,240(r31)
	PPC_STORE_U8(ctx.r31.u32 + 240, ctx.r30.u8);
	// stw r29,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r29.u32);
	// stw r30,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r30.u32);
	// stb r30,268(r31)
	PPC_STORE_U8(ctx.r31.u32 + 268, ctx.r30.u8);
	// stw r30,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r30.u32);
	// stw r30,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r30.u32);
	// stw r30,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r30.u32);
	// bl 0x82eb07e8
	ctx.lr = 0x82EB29C8;
	sub_82EB07E8(ctx, base);
	// addi r3,r31,7116
	ctx.r3.s64 = ctx.r31.s64 + 7116;
	// bl 0x82eb07e8
	ctx.lr = 0x82EB29D0;
	sub_82EB07E8(ctx, base);
	// stw r30,13920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13920, ctx.r30.u32);
	// stw r30,13924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13924, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,13928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13928, ctx.r30.u32);
	// stw r29,13956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13956, ctx.r29.u32);
	// stw r30,13952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13952, ctx.r30.u32);
	// stb r30,13936(r31)
	PPC_STORE_U8(ctx.r31.u32 + 13936, ctx.r30.u8);
	// bl 0x82eb25a8
	ctx.lr = 0x82EB29F0;
	sub_82EB25A8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eb22c0
	ctx.lr = 0x82EB29FC;
	sub_82EB22C0(ctx, base);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// bl 0x82e8b998
	ctx.lr = 0x82EB2A10;
	sub_82E8B998(ctx, base);
	// bl 0x82e8ba28
	ctx.lr = 0x82EB2A14;
	sub_82E8BA28(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82eb2a28
	if (!cr6.lt) goto loc_82EB2A28;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
loc_82EB2A28:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// clrlwi r6,r3,16
	ctx.r6.u64 = ctx.r3.u32 & 0xFFFF;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-13944
	ctx.r4.s64 = ctx.r11.s64 + -13944;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eb2800
	ctx.lr = 0x82EB2A40;
	sub_82EB2800(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82eb2a60
	if (cr6.lt) goto loc_82EB2A60;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82EB2A60;
	sub_825952B8(ctx, base);
loc_82EB2A60:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB2A6C"))) PPC_WEAK_FUNC(sub_82EB2A6C);
PPC_FUNC_IMPL(__imp__sub_82EB2A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB2A70"))) PPC_WEAK_FUNC(sub_82EB2A70);
PPC_FUNC_IMPL(__imp__sub_82EB2A70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	// lwz r4,300(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// lwz r3,296(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 296);
	// addi r6,r11,1344
	ctx.r6.s64 = ctx.r11.s64 + 1344;
	// subf r10,r3,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r3.s64;
	// srawi r5,r10,6
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3F) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 6;
	// b 0x82eb2488
	sub_82EB2488(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB2A8C"))) PPC_WEAK_FUNC(sub_82EB2A8C);
PPC_FUNC_IMPL(__imp__sub_82EB2A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB2A90"))) PPC_WEAK_FUNC(sub_82EB2A90);
PPC_FUNC_IMPL(__imp__sub_82EB2A90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// lwz r3,28184(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28184);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB2A9C"))) PPC_WEAK_FUNC(sub_82EB2A9C);
PPC_FUNC_IMPL(__imp__sub_82EB2A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB2AA0"))) PPC_WEAK_FUNC(sub_82EB2AA0);
PPC_FUNC_IMPL(__imp__sub_82EB2AA0) {
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
	// std r4,4(r3)
	PPC_STORE_U64(ctx.r3.u32 + 4, ctx.r4.u64);
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r10,-13644
	ctx.r8.s64 = ctx.r10.s64 + -13644;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// cmplwi cr6,r6,256
	cr6.compare<uint32_t>(ctx.r6.u32, 256, xer);
	// ble cr6,0x82eb2aec
	if (!cr6.gt) goto loc_82EB2AEC;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82eb2b04
	goto loc_82EB2B04;
loc_82EB2AEC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82eb2b04
	if (cr6.eq) goto loc_82EB2B04;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82eb2b04
	if (cr6.eq) goto loc_82EB2B04;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_82EB2B04:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x832dec60
	ctx.lr = 0x82EB2B14;
	sub_832DEC60(ctx, base);
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

__attribute__((alias("__imp__sub_82EB2B2C"))) PPC_WEAK_FUNC(sub_82EB2B2C);
PPC_FUNC_IMPL(__imp__sub_82EB2B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB2B30"))) PPC_WEAK_FUNC(sub_82EB2B30);
PPC_FUNC_IMPL(__imp__sub_82EB2B30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r5,256
	cr6.compare<uint32_t>(ctx.r5.u32, 256, xer);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// ble cr6,0x82eb2b4c
	if (!cr6.gt) goto loc_82EB2B4C;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82eb2b64
	goto loc_82EB2B64;
loc_82EB2B4C:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82eb2b64
	if (cr6.eq) goto loc_82EB2B64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82eb2b64
	if (cr6.eq) goto loc_82EB2B64;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
loc_82EB2B64:
	// lwz r7,12(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x832dec60
	sub_832DEC60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB2B74"))) PPC_WEAK_FUNC(sub_82EB2B74);
PPC_FUNC_IMPL(__imp__sub_82EB2B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB2B78"))) PPC_WEAK_FUNC(sub_82EB2B78);
PPC_FUNC_IMPL(__imp__sub_82EB2B78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82EB2B80;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31757
	ctx.r31.s64 = -2081226752;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r3,28184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28184);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82eb2be4
	if (!cr6.eq) goto loc_82EB2BE4;
	// li r11,29
	ctx.r11.s64 = 29;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82EB2BB8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82eb2bdc
	if (cr6.eq) goto loc_82EB2BDC;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82eb2aa0
	ctx.lr = 0x82EB2BD0;
	sub_82EB2AA0(ctx, base);
	// stw r3,28184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28184, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82EB2BDC:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r3,28184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28184, ctx.r3.u32);
loc_82EB2BE4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB2BEC"))) PPC_WEAK_FUNC(sub_82EB2BEC);
PPC_FUNC_IMPL(__imp__sub_82EB2BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB2BF0"))) PPC_WEAK_FUNC(sub_82EB2BF0);
PPC_FUNC_IMPL(__imp__sub_82EB2BF0) {
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
	// lis r31,-31757
	ctx.r31.s64 = -2081226752;
	// lwz r11,28184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28184);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82eb2c54
	if (cr6.eq) goto loc_82EB2C54;
	// li r11,29
	ctx.r11.s64 = 29;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82EB2C24;
	sub_82595150(ctx, base);
	// lwz r3,28184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28184);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82eb2c44
	if (cr6.eq) goto loc_82EB2C44;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82EB2C44;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EB2C44:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82EB2C4C;
	sub_82595170(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,28184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28184, ctx.r11.u32);
loc_82EB2C54:
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

__attribute__((alias("__imp__sub_82EB2C68"))) PPC_WEAK_FUNC(sub_82EB2C68);
PPC_FUNC_IMPL(__imp__sub_82EB2C68) {
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
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r9,r11,-13644
	ctx.r9.s64 = ctx.r11.s64 + -13644;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x832dec60
	ctx.lr = 0x82EB2CB0;
	sub_832DEC60(ctx, base);
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,28184(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28184, ctx.r11.u32);
	// beq cr6,0x82eb2cd4
	if (cr6.eq) goto loc_82EB2CD4;
	// bl 0x82416268
	ctx.lr = 0x82EB2CD0;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82EB2CD4:
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

__attribute__((alias("__imp__sub_82EB2CEC"))) PPC_WEAK_FUNC(sub_82EB2CEC);
PPC_FUNC_IMPL(__imp__sub_82EB2CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB2CF0"))) PPC_WEAK_FUNC(sub_82EB2CF0);
PPC_FUNC_IMPL(__imp__sub_82EB2CF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// lbz r10,28192(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 28192);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,28192(r11)
	PPC_STORE_U8(ctx.r11.u32 + 28192, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB2D0C"))) PPC_WEAK_FUNC(sub_82EB2D0C);
PPC_FUNC_IMPL(__imp__sub_82EB2D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB2D10"))) PPC_WEAK_FUNC(sub_82EB2D10);
PPC_FUNC_IMPL(__imp__sub_82EB2D10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// lbz r10,28192(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 28192);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,28192(r11)
	PPC_STORE_U8(ctx.r11.u32 + 28192, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB2D2C"))) PPC_WEAK_FUNC(sub_82EB2D2C);
PPC_FUNC_IMPL(__imp__sub_82EB2D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB2D30"))) PPC_WEAK_FUNC(sub_82EB2D30);
PPC_FUNC_IMPL(__imp__sub_82EB2D30) {
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
	// li r11,29
	ctx.r11.s64 = 29;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,92
	ctx.r4.s64 = 92;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82EB2D58;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82eb2db4
	if (cr6.eq) goto loc_82EB2DB4;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r4,r11,-13324
	ctx.r4.s64 = ctx.r11.s64 + -13324;
	// bl 0x83103328
	ctx.lr = 0x82EB2D70;
	sub_83103328(ctx, base);
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-13104
	ctx.r9.s64 = ctx.r10.s64 + -13104;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x83a7d958
	ctx.lr = 0x82EB2D98;
	sub_83A7D958(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
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
loc_82EB2DB4:
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

__attribute__((alias("__imp__sub_82EB2DCC"))) PPC_WEAK_FUNC(sub_82EB2DCC);
PPC_FUNC_IMPL(__imp__sub_82EB2DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB2DD0"))) PPC_WEAK_FUNC(sub_82EB2DD0);
PPC_FUNC_IMPL(__imp__sub_82EB2DD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82EB2DD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82eb2e70
	if (cr6.lt) goto loc_82EB2E70;
	// bne cr6,0x82eb2e8c
	if (!cr6.eq) goto loc_82EB2E8C;
	// lwz r3,88(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82EB2E08;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82eb2e90
	if (cr6.eq) goto loc_82EB2E90;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r30,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r30.u64);
	// std r30,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r30.u64);
	// std r30,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r30.u64);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82EB2E38;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// rlwinm r7,r8,0,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	// subfic r6,r7,0
	xer.ca = ctx.r7.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r7.s64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r5,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x2;
	// addi r29,r11,-1
	ctx.r29.s64 = ctx.r11.s64 + -1;
	// bl 0x82e86fd0
	ctx.lr = 0x82EB2E54;
	sub_82E86FD0(ctx, base);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// bl 0x82e86ef0
	ctx.lr = 0x82EB2E64;
	sub_82E86EF0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82EB2E70:
	// bl 0x82e86f40
	ctx.lr = 0x82EB2E74;
	sub_82E86F40(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82eb2e98
	if (cr6.eq) goto loc_82EB2E98;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
loc_82EB2E8C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82EB2E90:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82EB2E98:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB2EA4"))) PPC_WEAK_FUNC(sub_82EB2EA4);
PPC_FUNC_IMPL(__imp__sub_82EB2EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB2EA8"))) PPC_WEAK_FUNC(sub_82EB2EA8);
PPC_FUNC_IMPL(__imp__sub_82EB2EA8) {
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
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lwz r10,88(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,-13104
	ctx.r9.s64 = ctx.r11.s64 + -13104;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82eb2ee0
	if (cr6.eq) goto loc_82EB2EE0;
	// bl 0x82e86fd0
	ctx.lr = 0x82EB2EE0;
	sub_82E86FD0(ctx, base);
loc_82EB2EE0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831032a0
	ctx.lr = 0x82EB2EE8;
	sub_831032A0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82eb2f00
	if (cr6.eq) goto loc_82EB2F00;
	// bl 0x82416268
	ctx.lr = 0x82EB2EFC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82EB2F00:
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

__attribute__((alias("__imp__sub_82EB2F18"))) PPC_WEAK_FUNC(sub_82EB2F18);
PPC_FUNC_IMPL(__imp__sub_82EB2F18) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b80848
	ctx.lr = 0x82EB2F34;
	sub_82B80848(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82eb2f48
	if (!cr6.eq) goto loc_82EB2F48;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x82eb2f50
	goto loc_82EB2F50;
loc_82EB2F48:
	// bl 0x82e78fa8
	ctx.lr = 0x82EB2F4C;
	sub_82E78FA8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82EB2F50:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82eb2f60
	if (cr6.eq) goto loc_82EB2F60;
	// bl 0x8259b510
	ctx.lr = 0x82EB2F60;
	sub_8259B510(ctx, base);
loc_82EB2F60:
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

__attribute__((alias("__imp__sub_82EB2F78"))) PPC_WEAK_FUNC(sub_82EB2F78);
PPC_FUNC_IMPL(__imp__sub_82EB2F78) {
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
	// bl 0x83a7d958
	ctx.lr = 0x82EB2F90;
	sub_83A7D958(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// bl 0x83524138
	ctx.lr = 0x82EB2F9C;
	sub_83524138(ctx, base);
	// cmpldi cr6,r3,500
	cr6.compare<uint64_t>(ctx.r3.u64, 500, xer);
	// blt cr6,0x82eb2fc8
	if (cr6.lt) goto loc_82EB2FC8;
	// bl 0x83a7d958
	ctx.lr = 0x82EB2FA8;
	sub_83A7D958(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// bl 0x82e6f960
	ctx.lr = 0x82EB2FB0;
	sub_82E6F960(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82eb2fc8
	if (cr6.eq) goto loc_82EB2FC8;
	// bl 0x82eb2f18
	ctx.lr = 0x82EB2FBC;
	sub_82EB2F18(ctx, base);
	// cmplwi cr6,r3,2000
	cr6.compare<uint32_t>(ctx.r3.u32, 2000, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bgt cr6,0x82eb2fcc
	if (cr6.gt) goto loc_82EB2FCC;
loc_82EB2FC8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EB2FCC:
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

__attribute__((alias("__imp__sub_82EB2FE0"))) PPC_WEAK_FUNC(sub_82EB2FE0);
PPC_FUNC_IMPL(__imp__sub_82EB2FE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82EB2FE8;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82eb309c
	if (cr6.lt) goto loc_82EB309C;
	// bne cr6,0x82eb30f0
	if (!cr6.eq) goto loc_82EB30F0;
	// bl 0x82eb2dd0
	ctx.lr = 0x82EB3004;
	sub_82EB2DD0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82eb30f0
	if (cr6.eq) goto loc_82EB30F0;
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// lbz r9,28192(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 28192);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82eb30f0
	if (cr6.eq) goto loc_82EB30F0;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x82eb30f0
	if (!cr6.eq) goto loc_82EB30F0;
	// bl 0x82e6f960
	ctx.lr = 0x82EB3030;
	sub_82E6F960(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82eb30f0
	if (cr6.eq) goto loc_82EB30F0;
	// bl 0x82e7e2f8
	ctx.lr = 0x82EB3040;
	sub_82E7E2F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82eb3084
	if (cr6.eq) goto loc_82EB3084;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,-13590
	ctx.r31.s64 = ctx.r11.s64 + -13590;
	// addi r4,r31,286
	ctx.r4.s64 = ctx.r31.s64 + 286;
	// bl 0x837b0c10
	ctx.lr = 0x82EB3060;
	sub_837B0C10(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x837b0c10
	ctx.lr = 0x82EB3070;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r6,322
	ctx.r6.s64 = 322;
	// bl 0x82e7eb70
	ctx.lr = 0x82EB3084;
	sub_82E7EB70(ctx, base);
loc_82EB3084:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e6fe00
	ctx.lr = 0x82EB3094;
	sub_82E6FE00(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82EB309C:
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// lbz r10,28192(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 28192);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82eb30f0
	if (cr6.eq) goto loc_82EB30F0;
	// bl 0x83a7d958
	ctx.lr = 0x82EB30B0;
	sub_83A7D958(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// bl 0x83524138
	ctx.lr = 0x82EB30BC;
	sub_83524138(ctx, base);
	// cmpldi cr6,r3,10000
	cr6.compare<uint64_t>(ctx.r3.u64, 10000, xer);
	// blt cr6,0x82eb30f0
	if (cr6.lt) goto loc_82EB30F0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eb2f78
	ctx.lr = 0x82EB30CC;
	sub_82EB2F78(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82eb30f0
	if (cr6.eq) goto loc_82EB30F0;
	// bl 0x83a7d958
	ctx.lr = 0x82EB30DC;
	sub_83A7D958(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
loc_82EB30F0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB30F8"))) PPC_WEAK_FUNC(sub_82EB30F8);
PPC_FUNC_IMPL(__imp__sub_82EB30F8) {
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
	// bl 0x832ded18
	ctx.lr = 0x82EB3108;
	sub_832DED18(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82eb3124
	if (!cr6.eq) goto loc_82EB3124;
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82EB3124:
	// rlwinm r11,r3,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82eb3144
	if (cr6.eq) goto loc_82EB3144;
	// li r3,7
	ctx.r3.s64 = 7;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82EB3144:
	// rlwinm r11,r3,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82eb3190
	if (cr6.eq) goto loc_82EB3190;
	// rlwinm r11,r3,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82eb3170
	if (cr6.eq) goto loc_82EB3170;
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
loc_82EB3170:
	// rlwinm r11,r3,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82eb31cc
	if (cr6.eq) goto loc_82EB31CC;
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
loc_82EB3190:
	// rlwinm r11,r3,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82eb31cc
	if (cr6.eq) goto loc_82EB31CC;
	// rlwinm r11,r3,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82eb31bc
	if (cr6.eq) goto loc_82EB31BC;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82EB31BC:
	// rlwinm r11,r3,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8;
	// li r3,3
	ctx.r3.s64 = 3;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb31d0
	if (!cr6.eq) goto loc_82EB31D0;
loc_82EB31CC:
	// li r3,9
	ctx.r3.s64 = 9;
loc_82EB31D0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB31E0"))) PPC_WEAK_FUNC(sub_82EB31E0);
PPC_FUNC_IMPL(__imp__sub_82EB31E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,34464
	ctx.r11.u64 = ctx.r11.u64 | 34464;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
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
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3244"))) PPC_WEAK_FUNC(sub_82EB3244);
PPC_FUNC_IMPL(__imp__sub_82EB3244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3248"))) PPC_WEAK_FUNC(sub_82EB3248);
PPC_FUNC_IMPL(__imp__sub_82EB3248) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb325c
	if (!cr6.eq) goto loc_82EB325C;
	// li r3,255
	ctx.r3.s64 = 255;
	// blr 
	return;
loc_82EB325C:
	// lbz r3,129(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 129);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3264"))) PPC_WEAK_FUNC(sub_82EB3264);
PPC_FUNC_IMPL(__imp__sub_82EB3264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3268"))) PPC_WEAK_FUNC(sub_82EB3268);
PPC_FUNC_IMPL(__imp__sub_82EB3268) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,130(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 130);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb327c
	if (!cr6.eq) goto loc_82EB327C;
	// li r3,255
	ctx.r3.s64 = 255;
	// blr 
	return;
loc_82EB327C:
	// lbz r3,131(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 131);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3284"))) PPC_WEAK_FUNC(sub_82EB3284);
PPC_FUNC_IMPL(__imp__sub_82EB3284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3288"))) PPC_WEAK_FUNC(sub_82EB3288);
PPC_FUNC_IMPL(__imp__sub_82EB3288) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 132);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb329c
	if (!cr6.eq) goto loc_82EB329C;
	// li r3,255
	ctx.r3.s64 = 255;
	// blr 
	return;
loc_82EB329C:
	// lbz r3,133(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 133);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB32A4"))) PPC_WEAK_FUNC(sub_82EB32A4);
PPC_FUNC_IMPL(__imp__sub_82EB32A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB32A8"))) PPC_WEAK_FUNC(sub_82EB32A8);
PPC_FUNC_IMPL(__imp__sub_82EB32A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,134(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 134);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb32bc
	if (!cr6.eq) goto loc_82EB32BC;
	// li r3,255
	ctx.r3.s64 = 255;
	// blr 
	return;
loc_82EB32BC:
	// lbz r3,135(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 135);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB32C4"))) PPC_WEAK_FUNC(sub_82EB32C4);
PPC_FUNC_IMPL(__imp__sub_82EB32C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB32C8"))) PPC_WEAK_FUNC(sub_82EB32C8);
PPC_FUNC_IMPL(__imp__sub_82EB32C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 136);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb32dc
	if (!cr6.eq) goto loc_82EB32DC;
	// li r3,255
	ctx.r3.s64 = 255;
	// blr 
	return;
loc_82EB32DC:
	// lbz r3,137(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 137);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB32E4"))) PPC_WEAK_FUNC(sub_82EB32E4);
PPC_FUNC_IMPL(__imp__sub_82EB32E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB32E8"))) PPC_WEAK_FUNC(sub_82EB32E8);
PPC_FUNC_IMPL(__imp__sub_82EB32E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,138(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 138);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb32fc
	if (!cr6.eq) goto loc_82EB32FC;
	// li r3,255
	ctx.r3.s64 = 255;
	// blr 
	return;
loc_82EB32FC:
	// lbz r3,139(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 139);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3304"))) PPC_WEAK_FUNC(sub_82EB3304);
PPC_FUNC_IMPL(__imp__sub_82EB3304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3308"))) PPC_WEAK_FUNC(sub_82EB3308);
PPC_FUNC_IMPL(__imp__sub_82EB3308) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb331c
	if (!cr6.eq) goto loc_82EB331C;
	// li r3,255
	ctx.r3.s64 = 255;
	// blr 
	return;
loc_82EB331C:
	// lbz r3,141(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 141);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3324"))) PPC_WEAK_FUNC(sub_82EB3324);
PPC_FUNC_IMPL(__imp__sub_82EB3324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3328"))) PPC_WEAK_FUNC(sub_82EB3328);
PPC_FUNC_IMPL(__imp__sub_82EB3328) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,142(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 142);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb333c
	if (!cr6.eq) goto loc_82EB333C;
	// li r3,255
	ctx.r3.s64 = 255;
	// blr 
	return;
loc_82EB333C:
	// lbz r3,143(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 143);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3344"))) PPC_WEAK_FUNC(sub_82EB3344);
PPC_FUNC_IMPL(__imp__sub_82EB3344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3348"))) PPC_WEAK_FUNC(sub_82EB3348);
PPC_FUNC_IMPL(__imp__sub_82EB3348) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 144);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb335c
	if (!cr6.eq) goto loc_82EB335C;
	// li r3,255
	ctx.r3.s64 = 255;
	// blr 
	return;
loc_82EB335C:
	// lbz r3,145(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 145);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3364"))) PPC_WEAK_FUNC(sub_82EB3364);
PPC_FUNC_IMPL(__imp__sub_82EB3364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3368"))) PPC_WEAK_FUNC(sub_82EB3368);
PPC_FUNC_IMPL(__imp__sub_82EB3368) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,146(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 146);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb337c
	if (!cr6.eq) goto loc_82EB337C;
	// li r3,255
	ctx.r3.s64 = 255;
	// blr 
	return;
loc_82EB337C:
	// lbz r3,147(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 147);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3384"))) PPC_WEAK_FUNC(sub_82EB3384);
PPC_FUNC_IMPL(__imp__sub_82EB3384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3388"))) PPC_WEAK_FUNC(sub_82EB3388);
PPC_FUNC_IMPL(__imp__sub_82EB3388) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,148(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 148);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb339c
	if (!cr6.eq) goto loc_82EB339C;
	// li r3,255
	ctx.r3.s64 = 255;
	// blr 
	return;
loc_82EB339C:
	// lbz r3,149(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 149);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB33A4"))) PPC_WEAK_FUNC(sub_82EB33A4);
PPC_FUNC_IMPL(__imp__sub_82EB33A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB33A8"))) PPC_WEAK_FUNC(sub_82EB33A8);
PPC_FUNC_IMPL(__imp__sub_82EB33A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,150(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 150);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb33bc
	if (!cr6.eq) goto loc_82EB33BC;
	// li r3,255
	ctx.r3.s64 = 255;
	// blr 
	return;
loc_82EB33BC:
	// lbz r3,151(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 151);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB33C4"))) PPC_WEAK_FUNC(sub_82EB33C4);
PPC_FUNC_IMPL(__imp__sub_82EB33C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB33C8"))) PPC_WEAK_FUNC(sub_82EB33C8);
PPC_FUNC_IMPL(__imp__sub_82EB33C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,152(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 152);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb33dc
	if (!cr6.eq) goto loc_82EB33DC;
	// li r3,255
	ctx.r3.s64 = 255;
	// blr 
	return;
loc_82EB33DC:
	// lbz r3,153(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 153);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB33E4"))) PPC_WEAK_FUNC(sub_82EB33E4);
PPC_FUNC_IMPL(__imp__sub_82EB33E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB33E8"))) PPC_WEAK_FUNC(sub_82EB33E8);
PPC_FUNC_IMPL(__imp__sub_82EB33E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,154(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 154);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb33fc
	if (!cr6.eq) goto loc_82EB33FC;
	// li r3,255
	ctx.r3.s64 = 255;
	// blr 
	return;
loc_82EB33FC:
	// lbz r3,155(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 155);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3404"))) PPC_WEAK_FUNC(sub_82EB3404);
PPC_FUNC_IMPL(__imp__sub_82EB3404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3408"))) PPC_WEAK_FUNC(sub_82EB3408);
PPC_FUNC_IMPL(__imp__sub_82EB3408) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,156(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb341c
	if (!cr6.eq) goto loc_82EB341C;
	// li r3,255
	ctx.r3.s64 = 255;
	// blr 
	return;
loc_82EB341C:
	// lbz r3,157(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 157);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3424"))) PPC_WEAK_FUNC(sub_82EB3424);
PPC_FUNC_IMPL(__imp__sub_82EB3424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3428"))) PPC_WEAK_FUNC(sub_82EB3428);
PPC_FUNC_IMPL(__imp__sub_82EB3428) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,158(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 158);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb343c
	if (!cr6.eq) goto loc_82EB343C;
	// li r3,255
	ctx.r3.s64 = 255;
	// blr 
	return;
loc_82EB343C:
	// lbz r3,159(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 159);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3444"))) PPC_WEAK_FUNC(sub_82EB3444);
PPC_FUNC_IMPL(__imp__sub_82EB3444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3448"))) PPC_WEAK_FUNC(sub_82EB3448);
PPC_FUNC_IMPL(__imp__sub_82EB3448) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,160(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 160);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb345c
	if (!cr6.eq) goto loc_82EB345C;
	// li r3,255
	ctx.r3.s64 = 255;
	// blr 
	return;
loc_82EB345C:
	// lbz r3,161(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 161);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3464"))) PPC_WEAK_FUNC(sub_82EB3464);
PPC_FUNC_IMPL(__imp__sub_82EB3464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3468"))) PPC_WEAK_FUNC(sub_82EB3468);
PPC_FUNC_IMPL(__imp__sub_82EB3468) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,162(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 162);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb347c
	if (!cr6.eq) goto loc_82EB347C;
	// li r3,255
	ctx.r3.s64 = 255;
	// blr 
	return;
loc_82EB347C:
	// lbz r3,163(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 163);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3484"))) PPC_WEAK_FUNC(sub_82EB3484);
PPC_FUNC_IMPL(__imp__sub_82EB3484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3488"))) PPC_WEAK_FUNC(sub_82EB3488);
PPC_FUNC_IMPL(__imp__sub_82EB3488) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,164(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 164);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb349c
	if (!cr6.eq) goto loc_82EB349C;
	// li r3,255
	ctx.r3.s64 = 255;
	// blr 
	return;
loc_82EB349C:
	// lbz r3,165(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 165);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB34A4"))) PPC_WEAK_FUNC(sub_82EB34A4);
PPC_FUNC_IMPL(__imp__sub_82EB34A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB34A8"))) PPC_WEAK_FUNC(sub_82EB34A8);
PPC_FUNC_IMPL(__imp__sub_82EB34A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,166(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 166);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb34bc
	if (!cr6.eq) goto loc_82EB34BC;
	// li r3,255
	ctx.r3.s64 = 255;
	// blr 
	return;
loc_82EB34BC:
	// lbz r3,167(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 167);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB34C4"))) PPC_WEAK_FUNC(sub_82EB34C4);
PPC_FUNC_IMPL(__imp__sub_82EB34C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB34C8"))) PPC_WEAK_FUNC(sub_82EB34C8);
PPC_FUNC_IMPL(__imp__sub_82EB34C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,168(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 168);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb34dc
	if (!cr6.eq) goto loc_82EB34DC;
	// li r3,255
	ctx.r3.s64 = 255;
	// blr 
	return;
loc_82EB34DC:
	// lbz r3,169(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 169);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB34E4"))) PPC_WEAK_FUNC(sub_82EB34E4);
PPC_FUNC_IMPL(__imp__sub_82EB34E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB34E8"))) PPC_WEAK_FUNC(sub_82EB34E8);
PPC_FUNC_IMPL(__imp__sub_82EB34E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,170(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 170);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb34fc
	if (!cr6.eq) goto loc_82EB34FC;
	// li r3,255
	ctx.r3.s64 = 255;
	// blr 
	return;
loc_82EB34FC:
	// lbz r3,171(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 171);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3504"))) PPC_WEAK_FUNC(sub_82EB3504);
PPC_FUNC_IMPL(__imp__sub_82EB3504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3508"))) PPC_WEAK_FUNC(sub_82EB3508);
PPC_FUNC_IMPL(__imp__sub_82EB3508) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,172(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 172);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb351c
	if (!cr6.eq) goto loc_82EB351C;
	// li r3,255
	ctx.r3.s64 = 255;
	// blr 
	return;
loc_82EB351C:
	// lbz r3,173(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 173);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3524"))) PPC_WEAK_FUNC(sub_82EB3524);
PPC_FUNC_IMPL(__imp__sub_82EB3524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3528"))) PPC_WEAK_FUNC(sub_82EB3528);
PPC_FUNC_IMPL(__imp__sub_82EB3528) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,174(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 174);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb353c
	if (!cr6.eq) goto loc_82EB353C;
	// li r3,9
	ctx.r3.s64 = 9;
	// blr 
	return;
loc_82EB353C:
	// lbz r3,175(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 175);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3544"))) PPC_WEAK_FUNC(sub_82EB3544);
PPC_FUNC_IMPL(__imp__sub_82EB3544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3548"))) PPC_WEAK_FUNC(sub_82EB3548);
PPC_FUNC_IMPL(__imp__sub_82EB3548) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,176(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 176);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb355c
	if (!cr6.eq) goto loc_82EB355C;
	// li r3,255
	ctx.r3.s64 = 255;
	// blr 
	return;
loc_82EB355C:
	// lbz r3,177(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 177);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3564"))) PPC_WEAK_FUNC(sub_82EB3564);
PPC_FUNC_IMPL(__imp__sub_82EB3564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3568"))) PPC_WEAK_FUNC(sub_82EB3568);
PPC_FUNC_IMPL(__imp__sub_82EB3568) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,178(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 178);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb357c
	if (!cr6.eq) goto loc_82EB357C;
	// li r3,255
	ctx.r3.s64 = 255;
	// blr 
	return;
loc_82EB357C:
	// lbz r3,179(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 179);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3584"))) PPC_WEAK_FUNC(sub_82EB3584);
PPC_FUNC_IMPL(__imp__sub_82EB3584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3588"))) PPC_WEAK_FUNC(sub_82EB3588);
PPC_FUNC_IMPL(__imp__sub_82EB3588) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,180(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 180);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb359c
	if (!cr6.eq) goto loc_82EB359C;
	// li r3,255
	ctx.r3.s64 = 255;
	// blr 
	return;
loc_82EB359C:
	// lbz r3,181(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 181);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB35A4"))) PPC_WEAK_FUNC(sub_82EB35A4);
PPC_FUNC_IMPL(__imp__sub_82EB35A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB35A8"))) PPC_WEAK_FUNC(sub_82EB35A8);
PPC_FUNC_IMPL(__imp__sub_82EB35A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,182(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 182);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb35bc
	if (!cr6.eq) goto loc_82EB35BC;
	// li r3,255
	ctx.r3.s64 = 255;
	// blr 
	return;
loc_82EB35BC:
	// lbz r3,183(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 183);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB35C4"))) PPC_WEAK_FUNC(sub_82EB35C4);
PPC_FUNC_IMPL(__imp__sub_82EB35C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB35C8"))) PPC_WEAK_FUNC(sub_82EB35C8);
PPC_FUNC_IMPL(__imp__sub_82EB35C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,184(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 184);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb35dc
	if (!cr6.eq) goto loc_82EB35DC;
	// li r3,255
	ctx.r3.s64 = 255;
	// blr 
	return;
loc_82EB35DC:
	// lbz r3,185(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 185);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB35E4"))) PPC_WEAK_FUNC(sub_82EB35E4);
PPC_FUNC_IMPL(__imp__sub_82EB35E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB35E8"))) PPC_WEAK_FUNC(sub_82EB35E8);
PPC_FUNC_IMPL(__imp__sub_82EB35E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,186(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 186);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb35fc
	if (!cr6.eq) goto loc_82EB35FC;
	// li r3,255
	ctx.r3.s64 = 255;
	// blr 
	return;
loc_82EB35FC:
	// lbz r3,187(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 187);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3604"))) PPC_WEAK_FUNC(sub_82EB3604);
PPC_FUNC_IMPL(__imp__sub_82EB3604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3608"))) PPC_WEAK_FUNC(sub_82EB3608);
PPC_FUNC_IMPL(__imp__sub_82EB3608) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,188(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 188);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb361c
	if (!cr6.eq) goto loc_82EB361C;
	// li r3,255
	ctx.r3.s64 = 255;
	// blr 
	return;
loc_82EB361C:
	// lbz r3,189(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 189);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3624"))) PPC_WEAK_FUNC(sub_82EB3624);
PPC_FUNC_IMPL(__imp__sub_82EB3624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3628"))) PPC_WEAK_FUNC(sub_82EB3628);
PPC_FUNC_IMPL(__imp__sub_82EB3628) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,190(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 190);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb363c
	if (!cr6.eq) goto loc_82EB363C;
	// li r3,255
	ctx.r3.s64 = 255;
	// blr 
	return;
loc_82EB363C:
	// lbz r3,191(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 191);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3644"))) PPC_WEAK_FUNC(sub_82EB3644);
PPC_FUNC_IMPL(__imp__sub_82EB3644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3648"))) PPC_WEAK_FUNC(sub_82EB3648);
PPC_FUNC_IMPL(__imp__sub_82EB3648) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,192(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 192);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb365c
	if (!cr6.eq) goto loc_82EB365C;
	// li r3,32767
	ctx.r3.s64 = 32767;
	// blr 
	return;
loc_82EB365C:
	// lhz r3,194(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 194);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3664"))) PPC_WEAK_FUNC(sub_82EB3664);
PPC_FUNC_IMPL(__imp__sub_82EB3664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3668"))) PPC_WEAK_FUNC(sub_82EB3668);
PPC_FUNC_IMPL(__imp__sub_82EB3668) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,196(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 196);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb367c
	if (!cr6.eq) goto loc_82EB367C;
	// li r3,32767
	ctx.r3.s64 = 32767;
	// blr 
	return;
loc_82EB367C:
	// lhz r3,198(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 198);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3684"))) PPC_WEAK_FUNC(sub_82EB3684);
PPC_FUNC_IMPL(__imp__sub_82EB3684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3688"))) PPC_WEAK_FUNC(sub_82EB3688);
PPC_FUNC_IMPL(__imp__sub_82EB3688) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,200(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 200);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb369c
	if (!cr6.eq) goto loc_82EB369C;
	// li r3,32767
	ctx.r3.s64 = 32767;
	// blr 
	return;
loc_82EB369C:
	// lhz r3,202(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 202);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB36A4"))) PPC_WEAK_FUNC(sub_82EB36A4);
PPC_FUNC_IMPL(__imp__sub_82EB36A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB36A8"))) PPC_WEAK_FUNC(sub_82EB36A8);
PPC_FUNC_IMPL(__imp__sub_82EB36A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,204(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 204);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb36bc
	if (!cr6.eq) goto loc_82EB36BC;
	// li r3,32767
	ctx.r3.s64 = 32767;
	// blr 
	return;
loc_82EB36BC:
	// lhz r3,206(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 206);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB36C4"))) PPC_WEAK_FUNC(sub_82EB36C4);
PPC_FUNC_IMPL(__imp__sub_82EB36C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB36C8"))) PPC_WEAK_FUNC(sub_82EB36C8);
PPC_FUNC_IMPL(__imp__sub_82EB36C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,208(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 208);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb36dc
	if (!cr6.eq) goto loc_82EB36DC;
	// li r3,32767
	ctx.r3.s64 = 32767;
	// blr 
	return;
loc_82EB36DC:
	// lhz r3,210(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 210);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB36E4"))) PPC_WEAK_FUNC(sub_82EB36E4);
PPC_FUNC_IMPL(__imp__sub_82EB36E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB36E8"))) PPC_WEAK_FUNC(sub_82EB36E8);
PPC_FUNC_IMPL(__imp__sub_82EB36E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,212(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 212);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb36fc
	if (!cr6.eq) goto loc_82EB36FC;
	// li r3,32767
	ctx.r3.s64 = 32767;
	// blr 
	return;
loc_82EB36FC:
	// lhz r3,214(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 214);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3704"))) PPC_WEAK_FUNC(sub_82EB3704);
PPC_FUNC_IMPL(__imp__sub_82EB3704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3708"))) PPC_WEAK_FUNC(sub_82EB3708);
PPC_FUNC_IMPL(__imp__sub_82EB3708) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,216(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 216);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb371c
	if (!cr6.eq) goto loc_82EB371C;
	// li r3,32767
	ctx.r3.s64 = 32767;
	// blr 
	return;
loc_82EB371C:
	// lhz r3,218(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 218);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3724"))) PPC_WEAK_FUNC(sub_82EB3724);
PPC_FUNC_IMPL(__imp__sub_82EB3724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3728"))) PPC_WEAK_FUNC(sub_82EB3728);
PPC_FUNC_IMPL(__imp__sub_82EB3728) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,220(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 220);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb373c
	if (!cr6.eq) goto loc_82EB373C;
	// li r3,32767
	ctx.r3.s64 = 32767;
	// blr 
	return;
loc_82EB373C:
	// lhz r3,222(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 222);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3744"))) PPC_WEAK_FUNC(sub_82EB3744);
PPC_FUNC_IMPL(__imp__sub_82EB3744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3748"))) PPC_WEAK_FUNC(sub_82EB3748);
PPC_FUNC_IMPL(__imp__sub_82EB3748) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,224(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 224);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb375c
	if (!cr6.eq) goto loc_82EB375C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB375C:
	// lhz r3,226(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 226);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3764"))) PPC_WEAK_FUNC(sub_82EB3764);
PPC_FUNC_IMPL(__imp__sub_82EB3764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3768"))) PPC_WEAK_FUNC(sub_82EB3768);
PPC_FUNC_IMPL(__imp__sub_82EB3768) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,228(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 228);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb377c
	if (!cr6.eq) goto loc_82EB377C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB377C:
	// lhz r3,230(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 230);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3784"))) PPC_WEAK_FUNC(sub_82EB3784);
PPC_FUNC_IMPL(__imp__sub_82EB3784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3788"))) PPC_WEAK_FUNC(sub_82EB3788);
PPC_FUNC_IMPL(__imp__sub_82EB3788) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,232(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 232);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb379c
	if (!cr6.eq) goto loc_82EB379C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB379C:
	// lhz r3,234(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 234);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB37A4"))) PPC_WEAK_FUNC(sub_82EB37A4);
PPC_FUNC_IMPL(__imp__sub_82EB37A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB37A8"))) PPC_WEAK_FUNC(sub_82EB37A8);
PPC_FUNC_IMPL(__imp__sub_82EB37A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,236(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 236);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb37bc
	if (!cr6.eq) goto loc_82EB37BC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB37BC:
	// lhz r3,238(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 238);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB37C4"))) PPC_WEAK_FUNC(sub_82EB37C4);
PPC_FUNC_IMPL(__imp__sub_82EB37C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB37C8"))) PPC_WEAK_FUNC(sub_82EB37C8);
PPC_FUNC_IMPL(__imp__sub_82EB37C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,240(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 240);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb37dc
	if (!cr6.eq) goto loc_82EB37DC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB37DC:
	// lhz r3,242(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 242);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB37E4"))) PPC_WEAK_FUNC(sub_82EB37E4);
PPC_FUNC_IMPL(__imp__sub_82EB37E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB37E8"))) PPC_WEAK_FUNC(sub_82EB37E8);
PPC_FUNC_IMPL(__imp__sub_82EB37E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,244(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 244);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb37fc
	if (!cr6.eq) goto loc_82EB37FC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB37FC:
	// lhz r3,246(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 246);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3804"))) PPC_WEAK_FUNC(sub_82EB3804);
PPC_FUNC_IMPL(__imp__sub_82EB3804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3808"))) PPC_WEAK_FUNC(sub_82EB3808);
PPC_FUNC_IMPL(__imp__sub_82EB3808) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,248(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 248);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb381c
	if (!cr6.eq) goto loc_82EB381C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB381C:
	// lhz r3,250(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 250);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3824"))) PPC_WEAK_FUNC(sub_82EB3824);
PPC_FUNC_IMPL(__imp__sub_82EB3824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3828"))) PPC_WEAK_FUNC(sub_82EB3828);
PPC_FUNC_IMPL(__imp__sub_82EB3828) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,252(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 252);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb383c
	if (!cr6.eq) goto loc_82EB383C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB383C:
	// lhz r3,254(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 254);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3844"))) PPC_WEAK_FUNC(sub_82EB3844);
PPC_FUNC_IMPL(__imp__sub_82EB3844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3848"))) PPC_WEAK_FUNC(sub_82EB3848);
PPC_FUNC_IMPL(__imp__sub_82EB3848) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,256(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 256);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb385c
	if (!cr6.eq) goto loc_82EB385C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB385C:
	// lhz r3,258(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 258);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3864"))) PPC_WEAK_FUNC(sub_82EB3864);
PPC_FUNC_IMPL(__imp__sub_82EB3864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3868"))) PPC_WEAK_FUNC(sub_82EB3868);
PPC_FUNC_IMPL(__imp__sub_82EB3868) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,260(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 260);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb387c
	if (!cr6.eq) goto loc_82EB387C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB387C:
	// lhz r3,262(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 262);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3884"))) PPC_WEAK_FUNC(sub_82EB3884);
PPC_FUNC_IMPL(__imp__sub_82EB3884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3888"))) PPC_WEAK_FUNC(sub_82EB3888);
PPC_FUNC_IMPL(__imp__sub_82EB3888) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 264);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb389c
	if (!cr6.eq) goto loc_82EB389C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB389C:
	// lhz r3,266(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 266);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB38A4"))) PPC_WEAK_FUNC(sub_82EB38A4);
PPC_FUNC_IMPL(__imp__sub_82EB38A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB38A8"))) PPC_WEAK_FUNC(sub_82EB38A8);
PPC_FUNC_IMPL(__imp__sub_82EB38A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,268(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 268);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb38bc
	if (!cr6.eq) goto loc_82EB38BC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB38BC:
	// lhz r3,270(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 270);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB38C4"))) PPC_WEAK_FUNC(sub_82EB38C4);
PPC_FUNC_IMPL(__imp__sub_82EB38C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB38C8"))) PPC_WEAK_FUNC(sub_82EB38C8);
PPC_FUNC_IMPL(__imp__sub_82EB38C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,272(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 272);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb38dc
	if (!cr6.eq) goto loc_82EB38DC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB38DC:
	// lhz r3,274(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 274);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB38E4"))) PPC_WEAK_FUNC(sub_82EB38E4);
PPC_FUNC_IMPL(__imp__sub_82EB38E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB38E8"))) PPC_WEAK_FUNC(sub_82EB38E8);
PPC_FUNC_IMPL(__imp__sub_82EB38E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,276(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 276);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb38fc
	if (!cr6.eq) goto loc_82EB38FC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB38FC:
	// lhz r3,278(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 278);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3904"))) PPC_WEAK_FUNC(sub_82EB3904);
PPC_FUNC_IMPL(__imp__sub_82EB3904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3908"))) PPC_WEAK_FUNC(sub_82EB3908);
PPC_FUNC_IMPL(__imp__sub_82EB3908) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,280(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 280);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb391c
	if (!cr6.eq) goto loc_82EB391C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB391C:
	// lhz r3,282(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 282);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3924"))) PPC_WEAK_FUNC(sub_82EB3924);
PPC_FUNC_IMPL(__imp__sub_82EB3924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3928"))) PPC_WEAK_FUNC(sub_82EB3928);
PPC_FUNC_IMPL(__imp__sub_82EB3928) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,284(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 284);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb393c
	if (!cr6.eq) goto loc_82EB393C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB393C:
	// lhz r3,286(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 286);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3944"))) PPC_WEAK_FUNC(sub_82EB3944);
PPC_FUNC_IMPL(__imp__sub_82EB3944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3948"))) PPC_WEAK_FUNC(sub_82EB3948);
PPC_FUNC_IMPL(__imp__sub_82EB3948) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,288(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 288);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb395c
	if (!cr6.eq) goto loc_82EB395C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB395C:
	// lhz r3,290(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 290);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3964"))) PPC_WEAK_FUNC(sub_82EB3964);
PPC_FUNC_IMPL(__imp__sub_82EB3964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3968"))) PPC_WEAK_FUNC(sub_82EB3968);
PPC_FUNC_IMPL(__imp__sub_82EB3968) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,292(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 292);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb397c
	if (!cr6.eq) goto loc_82EB397C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB397C:
	// lhz r3,294(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 294);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3984"))) PPC_WEAK_FUNC(sub_82EB3984);
PPC_FUNC_IMPL(__imp__sub_82EB3984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3988"))) PPC_WEAK_FUNC(sub_82EB3988);
PPC_FUNC_IMPL(__imp__sub_82EB3988) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,296(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 296);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb399c
	if (!cr6.eq) goto loc_82EB399C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB399C:
	// lhz r3,298(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 298);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB39A4"))) PPC_WEAK_FUNC(sub_82EB39A4);
PPC_FUNC_IMPL(__imp__sub_82EB39A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB39A8"))) PPC_WEAK_FUNC(sub_82EB39A8);
PPC_FUNC_IMPL(__imp__sub_82EB39A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,300(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 300);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb39bc
	if (!cr6.eq) goto loc_82EB39BC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB39BC:
	// lhz r3,302(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 302);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB39C4"))) PPC_WEAK_FUNC(sub_82EB39C4);
PPC_FUNC_IMPL(__imp__sub_82EB39C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB39C8"))) PPC_WEAK_FUNC(sub_82EB39C8);
PPC_FUNC_IMPL(__imp__sub_82EB39C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,304(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 304);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb39dc
	if (!cr6.eq) goto loc_82EB39DC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB39DC:
	// lhz r3,306(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 306);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB39E4"))) PPC_WEAK_FUNC(sub_82EB39E4);
PPC_FUNC_IMPL(__imp__sub_82EB39E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB39E8"))) PPC_WEAK_FUNC(sub_82EB39E8);
PPC_FUNC_IMPL(__imp__sub_82EB39E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,308(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 308);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb39fc
	if (!cr6.eq) goto loc_82EB39FC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB39FC:
	// lhz r3,310(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 310);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3A04"))) PPC_WEAK_FUNC(sub_82EB3A04);
PPC_FUNC_IMPL(__imp__sub_82EB3A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3A08"))) PPC_WEAK_FUNC(sub_82EB3A08);
PPC_FUNC_IMPL(__imp__sub_82EB3A08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,312(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 312);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb3a1c
	if (!cr6.eq) goto loc_82EB3A1C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB3A1C:
	// lhz r3,314(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 314);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3A24"))) PPC_WEAK_FUNC(sub_82EB3A24);
PPC_FUNC_IMPL(__imp__sub_82EB3A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3A28"))) PPC_WEAK_FUNC(sub_82EB3A28);
PPC_FUNC_IMPL(__imp__sub_82EB3A28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,316(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 316);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb3a3c
	if (!cr6.eq) goto loc_82EB3A3C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB3A3C:
	// lhz r3,318(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 318);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3A44"))) PPC_WEAK_FUNC(sub_82EB3A44);
PPC_FUNC_IMPL(__imp__sub_82EB3A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3A48"))) PPC_WEAK_FUNC(sub_82EB3A48);
PPC_FUNC_IMPL(__imp__sub_82EB3A48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,320(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 320);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb3a5c
	if (!cr6.eq) goto loc_82EB3A5C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB3A5C:
	// lhz r3,322(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 322);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3A64"))) PPC_WEAK_FUNC(sub_82EB3A64);
PPC_FUNC_IMPL(__imp__sub_82EB3A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3A68"))) PPC_WEAK_FUNC(sub_82EB3A68);
PPC_FUNC_IMPL(__imp__sub_82EB3A68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,324(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 324);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb3a7c
	if (!cr6.eq) goto loc_82EB3A7C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB3A7C:
	// lhz r3,326(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 326);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3A84"))) PPC_WEAK_FUNC(sub_82EB3A84);
PPC_FUNC_IMPL(__imp__sub_82EB3A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3A88"))) PPC_WEAK_FUNC(sub_82EB3A88);
PPC_FUNC_IMPL(__imp__sub_82EB3A88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,328(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 328);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb3a9c
	if (!cr6.eq) goto loc_82EB3A9C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB3A9C:
	// lhz r3,330(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 330);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3AA4"))) PPC_WEAK_FUNC(sub_82EB3AA4);
PPC_FUNC_IMPL(__imp__sub_82EB3AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3AA8"))) PPC_WEAK_FUNC(sub_82EB3AA8);
PPC_FUNC_IMPL(__imp__sub_82EB3AA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,332(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 332);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb3abc
	if (!cr6.eq) goto loc_82EB3ABC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB3ABC:
	// lhz r3,334(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 334);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3AC4"))) PPC_WEAK_FUNC(sub_82EB3AC4);
PPC_FUNC_IMPL(__imp__sub_82EB3AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3AC8"))) PPC_WEAK_FUNC(sub_82EB3AC8);
PPC_FUNC_IMPL(__imp__sub_82EB3AC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,336(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 336);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb3adc
	if (!cr6.eq) goto loc_82EB3ADC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB3ADC:
	// lhz r3,338(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 338);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3AE4"))) PPC_WEAK_FUNC(sub_82EB3AE4);
PPC_FUNC_IMPL(__imp__sub_82EB3AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3AE8"))) PPC_WEAK_FUNC(sub_82EB3AE8);
PPC_FUNC_IMPL(__imp__sub_82EB3AE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,340(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 340);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb3afc
	if (!cr6.eq) goto loc_82EB3AFC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB3AFC:
	// lhz r3,342(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 342);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3B04"))) PPC_WEAK_FUNC(sub_82EB3B04);
PPC_FUNC_IMPL(__imp__sub_82EB3B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3B08"))) PPC_WEAK_FUNC(sub_82EB3B08);
PPC_FUNC_IMPL(__imp__sub_82EB3B08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,344(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 344);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb3b1c
	if (!cr6.eq) goto loc_82EB3B1C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB3B1C:
	// lhz r3,346(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 346);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3B24"))) PPC_WEAK_FUNC(sub_82EB3B24);
PPC_FUNC_IMPL(__imp__sub_82EB3B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3B28"))) PPC_WEAK_FUNC(sub_82EB3B28);
PPC_FUNC_IMPL(__imp__sub_82EB3B28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,348(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 348);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb3b3c
	if (!cr6.eq) goto loc_82EB3B3C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB3B3C:
	// lhz r3,350(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 350);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3B44"))) PPC_WEAK_FUNC(sub_82EB3B44);
PPC_FUNC_IMPL(__imp__sub_82EB3B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3B48"))) PPC_WEAK_FUNC(sub_82EB3B48);
PPC_FUNC_IMPL(__imp__sub_82EB3B48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,352(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 352);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb3b5c
	if (!cr6.eq) goto loc_82EB3B5C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB3B5C:
	// lhz r3,354(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 354);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3B64"))) PPC_WEAK_FUNC(sub_82EB3B64);
PPC_FUNC_IMPL(__imp__sub_82EB3B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3B68"))) PPC_WEAK_FUNC(sub_82EB3B68);
PPC_FUNC_IMPL(__imp__sub_82EB3B68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,356(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 356);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb3b7c
	if (!cr6.eq) goto loc_82EB3B7C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB3B7C:
	// lhz r3,358(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 358);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3B84"))) PPC_WEAK_FUNC(sub_82EB3B84);
PPC_FUNC_IMPL(__imp__sub_82EB3B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3B88"))) PPC_WEAK_FUNC(sub_82EB3B88);
PPC_FUNC_IMPL(__imp__sub_82EB3B88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,360(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 360);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb3b9c
	if (!cr6.eq) goto loc_82EB3B9C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB3B9C:
	// lhz r3,362(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 362);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3BA4"))) PPC_WEAK_FUNC(sub_82EB3BA4);
PPC_FUNC_IMPL(__imp__sub_82EB3BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3BA8"))) PPC_WEAK_FUNC(sub_82EB3BA8);
PPC_FUNC_IMPL(__imp__sub_82EB3BA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,364(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 364);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb3bbc
	if (!cr6.eq) goto loc_82EB3BBC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB3BBC:
	// lhz r3,366(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 366);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3BC4"))) PPC_WEAK_FUNC(sub_82EB3BC4);
PPC_FUNC_IMPL(__imp__sub_82EB3BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3BC8"))) PPC_WEAK_FUNC(sub_82EB3BC8);
PPC_FUNC_IMPL(__imp__sub_82EB3BC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,368(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 368);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb3bdc
	if (!cr6.eq) goto loc_82EB3BDC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB3BDC:
	// lhz r3,370(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 370);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3BE4"))) PPC_WEAK_FUNC(sub_82EB3BE4);
PPC_FUNC_IMPL(__imp__sub_82EB3BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3BE8"))) PPC_WEAK_FUNC(sub_82EB3BE8);
PPC_FUNC_IMPL(__imp__sub_82EB3BE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,372(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 372);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb3bfc
	if (!cr6.eq) goto loc_82EB3BFC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB3BFC:
	// lhz r3,374(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 374);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3C04"))) PPC_WEAK_FUNC(sub_82EB3C04);
PPC_FUNC_IMPL(__imp__sub_82EB3C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3C08"))) PPC_WEAK_FUNC(sub_82EB3C08);
PPC_FUNC_IMPL(__imp__sub_82EB3C08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,376(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 376);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb3c1c
	if (!cr6.eq) goto loc_82EB3C1C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB3C1C:
	// lhz r3,378(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 378);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3C24"))) PPC_WEAK_FUNC(sub_82EB3C24);
PPC_FUNC_IMPL(__imp__sub_82EB3C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3C28"))) PPC_WEAK_FUNC(sub_82EB3C28);
PPC_FUNC_IMPL(__imp__sub_82EB3C28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,380(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 380);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb3c3c
	if (!cr6.eq) goto loc_82EB3C3C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB3C3C:
	// lhz r3,382(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 382);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3C44"))) PPC_WEAK_FUNC(sub_82EB3C44);
PPC_FUNC_IMPL(__imp__sub_82EB3C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3C48"))) PPC_WEAK_FUNC(sub_82EB3C48);
PPC_FUNC_IMPL(__imp__sub_82EB3C48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,384(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 384);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb3c5c
	if (!cr6.eq) goto loc_82EB3C5C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB3C5C:
	// lhz r3,386(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 386);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3C64"))) PPC_WEAK_FUNC(sub_82EB3C64);
PPC_FUNC_IMPL(__imp__sub_82EB3C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3C68"))) PPC_WEAK_FUNC(sub_82EB3C68);
PPC_FUNC_IMPL(__imp__sub_82EB3C68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,388(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 388);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb3c7c
	if (!cr6.eq) goto loc_82EB3C7C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB3C7C:
	// lhz r3,390(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 390);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3C84"))) PPC_WEAK_FUNC(sub_82EB3C84);
PPC_FUNC_IMPL(__imp__sub_82EB3C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3C88"))) PPC_WEAK_FUNC(sub_82EB3C88);
PPC_FUNC_IMPL(__imp__sub_82EB3C88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,392(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 392);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb3c9c
	if (!cr6.eq) goto loc_82EB3C9C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB3C9C:
	// lhz r3,394(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 394);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3CA4"))) PPC_WEAK_FUNC(sub_82EB3CA4);
PPC_FUNC_IMPL(__imp__sub_82EB3CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3CA8"))) PPC_WEAK_FUNC(sub_82EB3CA8);
PPC_FUNC_IMPL(__imp__sub_82EB3CA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,396(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 396);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb3cbc
	if (!cr6.eq) goto loc_82EB3CBC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB3CBC:
	// lhz r3,398(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 398);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3CC4"))) PPC_WEAK_FUNC(sub_82EB3CC4);
PPC_FUNC_IMPL(__imp__sub_82EB3CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3CC8"))) PPC_WEAK_FUNC(sub_82EB3CC8);
PPC_FUNC_IMPL(__imp__sub_82EB3CC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,400(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 400);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb3cdc
	if (!cr6.eq) goto loc_82EB3CDC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB3CDC:
	// lhz r3,402(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 402);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3CE4"))) PPC_WEAK_FUNC(sub_82EB3CE4);
PPC_FUNC_IMPL(__imp__sub_82EB3CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

