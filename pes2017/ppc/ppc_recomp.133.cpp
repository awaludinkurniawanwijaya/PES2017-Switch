#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82B5A0EC"))) PPC_WEAK_FUNC(sub_82B5A0EC);
PPC_FUNC_IMPL(__imp__sub_82B5A0EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B5A0F0"))) PPC_WEAK_FUNC(sub_82B5A0F0);
PPC_FUNC_IMPL(__imp__sub_82B5A0F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82c30978
	sub_82C30978(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B5A0F4"))) PPC_WEAK_FUNC(sub_82B5A0F4);
PPC_FUNC_IMPL(__imp__sub_82B5A0F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B5A0F8"))) PPC_WEAK_FUNC(sub_82B5A0F8);
PPC_FUNC_IMPL(__imp__sub_82B5A0F8) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x83a7d958
	ctx.lr = 0x82B5A110;
	sub_83A7D958(ctx, base);
	// bl 0x83524138
	ctx.lr = 0x82B5A114;
	sub_83524138(ctx, base);
	// ld r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 248);
	// rotlwi r10,r3,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lis r8,-32208
	ctx.r8.s64 = -2110783488;
	// subf r7,r9,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r9.s64;
	// clrldi r6,r7,32
	ctx.r6.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,23372(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 23372);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
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

__attribute__((alias("__imp__sub_82B5A158"))) PPC_WEAK_FUNC(sub_82B5A158);
PPC_FUNC_IMPL(__imp__sub_82B5A158) {
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
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,13448
	ctx.r9.s64 = ctx.r11.s64 + 13448;
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
	// bl 0x82c2fdf8
	ctx.lr = 0x82B5A190;
	sub_82C2FDF8(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82b5a1a8
	if (cr6.eq) goto loc_82B5A1A8;
	// bl 0x82416268
	ctx.lr = 0x82B5A1A4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B5A1A8:
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

__attribute__((alias("__imp__sub_82B5A1C0"))) PPC_WEAK_FUNC(sub_82B5A1C0);
PPC_FUNC_IMPL(__imp__sub_82B5A1C0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d95ee0
	ctx.lr = 0x82B5A1D8;
	sub_82D95EE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b5a22c
	if (cr6.eq) goto loc_82B5A22C;
	// ld r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 248);
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// ble cr6,0x82b5a22c
	if (!cr6.gt) goto loc_82B5A22C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b5a0f8
	ctx.lr = 0x82B5A1F8;
	sub_82B5A0F8(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f0,13316(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13316);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82b5a22c
	if (!cr6.gt) goto loc_82B5A22C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,340(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 340);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B5A21C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82B5A22C;
	sub_82D20DA8(ctx, base);
loc_82B5A22C:
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

__attribute__((alias("__imp__sub_82B5A244"))) PPC_WEAK_FUNC(sub_82B5A244);
PPC_FUNC_IMPL(__imp__sub_82B5A244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B5A248"))) PPC_WEAK_FUNC(sub_82B5A248);
PPC_FUNC_IMPL(__imp__sub_82B5A248) {
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
	// bl 0x82d86078
	ctx.lr = 0x82B5A258;
	sub_82D86078(ctx, base);
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832f0
	ctx.lr = 0x82B5A260;
	sub_825832F0(ctx, base);
	// bl 0x82da75f0
	ctx.lr = 0x82B5A264;
	sub_82DA75F0(ctx, base);
	// lwz r10,156(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// lwz r9,152(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// li r11,148
	ctx.r11.s64 = 148;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw. r7,r8,r11
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r11.s32);
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x82b5a2e4
	if (!cr0.eq) goto loc_82B5A2E4;
	// lwz r10,172(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	// lwz r9,168(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw. r7,r8,r11
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r11.s32);
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x82b5a2e4
	if (!cr0.eq) goto loc_82B5A2E4;
	// bl 0x82d8a820
	ctx.lr = 0x82B5A294;
	sub_82D8A820(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b5a2c8
	if (!cr6.eq) goto loc_82B5A2C8;
	// bl 0x82d8a900
	ctx.lr = 0x82B5A2A4;
	sub_82D8A900(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b5a2c8
	if (!cr6.eq) goto loc_82B5A2C8;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,13356
	ctx.r3.s64 = ctx.r11.s64 + 13356;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82B5A2C8:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r11,r11,13356
	ctx.r11.s64 = ctx.r11.s64 + 13356;
	// addi r3,r11,-20
	ctx.r3.s64 = ctx.r11.s64 + -20;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82B5A2E4:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r11,r11,13356
	ctx.r11.s64 = ctx.r11.s64 + 13356;
	// addi r3,r11,-36
	ctx.r3.s64 = ctx.r11.s64 + -36;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B5A300"))) PPC_WEAK_FUNC(sub_82B5A300);
PPC_FUNC_IMPL(__imp__sub_82B5A300) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B5A308;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,27
	ctx.r11.s64 = 27;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B5A32C;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b5a37c
	if (cr6.eq) goto loc_82B5A37C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c30658
	ctx.lr = 0x82B5A344;
	sub_82C30658(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,13448
	ctx.r9.s64 = ctx.r11.s64 + 13448;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// std r7,248(r31)
	PPC_STORE_U64(ctx.r31.u32 + 248, ctx.r7.u64);
	// bl 0x83a7d958
	ctx.lr = 0x82B5A368;
	sub_83A7D958(ctx, base);
	// bl 0x83524138
	ctx.lr = 0x82B5A36C;
	sub_83524138(ctx, base);
	// std r3,248(r31)
	PPC_STORE_U64(ctx.r31.u32 + 248, ctx.r3.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82B5A37C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B5A388"))) PPC_WEAK_FUNC(sub_82B5A388);
PPC_FUNC_IMPL(__imp__sub_82B5A388) {
	PPC_FUNC_PROLOGUE();
	// b 0x82b5a248
	sub_82B5A248(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B5A38C"))) PPC_WEAK_FUNC(sub_82B5A38C);
PPC_FUNC_IMPL(__imp__sub_82B5A38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B5A390"))) PPC_WEAK_FUNC(sub_82B5A390);
PPC_FUNC_IMPL(__imp__sub_82B5A390) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b5a3a0
	if (cr6.lt) goto loc_82B5A3A0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82B5A3A0:
	// lbz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// b 0x82b5a300
	sub_82B5A300(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B5A3A8"))) PPC_WEAK_FUNC(sub_82B5A3A8);
PPC_FUNC_IMPL(__imp__sub_82B5A3A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B5A3B0;
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
	// beq cr6,0x82b5a490
	if (cr6.eq) goto loc_82B5A490;
	// addi r31,r3,32
	ctx.r31.s64 = ctx.r3.s64 + 32;
	// li r29,-1
	ctx.r29.s64 = -1;
loc_82B5A3CC:
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,-28
	ctx.r4.s64 = ctx.r31.s64 + -28;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82B5A3E8;
	sub_8259CB28(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// bl 0x8259cb28
	ctx.lr = 0x82B5A3FC;
	sub_8259CB28(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,28
	ctx.r4.s64 = ctx.r31.s64 + 28;
	// addi r3,r30,60
	ctx.r3.s64 = ctx.r30.s64 + 60;
	// bl 0x8259cb28
	ctx.lr = 0x82B5A410;
	sub_8259CB28(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r31,92
	ctx.r11.s64 = ctx.r31.s64 + 92;
	// addi r10,r30,124
	ctx.r10.s64 = ctx.r30.s64 + 124;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// lwz r8,60(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r8,92(r30)
	PPC_STORE_U32(ctx.r30.u32 + 92, ctx.r8.u32);
	// lwz r7,64(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// stw r7,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r7.u32);
	// lwz r6,68(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stw r6,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r6.u32);
	// lwz r5,72(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stw r5,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r5.u32);
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// stw r4,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r4.u32);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r3,112(r30)
	PPC_STORE_U32(ctx.r30.u32 + 112, ctx.r3.u32);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// stw r9,116(r30)
	PPC_STORE_U32(ctx.r30.u32 + 116, ctx.r9.u32);
	// lwz r8,88(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// stw r8,120(r30)
	PPC_STORE_U32(ctx.r30.u32 + 120, ctx.r8.u32);
	// lwz r7,92(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// stw r7,124(r30)
	PPC_STORE_U32(ctx.r30.u32 + 124, ctx.r7.u32);
loc_82B5A470:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82b5a470
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B5A470;
	// addi r31,r31,148
	ctx.r31.s64 = ctx.r31.s64 + 148;
	// addi r30,r30,148
	ctx.r30.s64 = ctx.r30.s64 + 148;
	// addi r11,r31,-32
	ctx.r11.s64 = ctx.r31.s64 + -32;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// bne cr6,0x82b5a3cc
	if (!cr6.eq) goto loc_82B5A3CC;
loc_82B5A490:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B5A49C"))) PPC_WEAK_FUNC(sub_82B5A49C);
PPC_FUNC_IMPL(__imp__sub_82B5A49C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B5A4A0"))) PPC_WEAK_FUNC(sub_82B5A4A0);
PPC_FUNC_IMPL(__imp__sub_82B5A4A0) {
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
	// bl 0x82d86078
	ctx.lr = 0x82B5A4BC;
	sub_82D86078(ctx, base);
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832f0
	ctx.lr = 0x82B5A4C4;
	sub_825832F0(ctx, base);
	// bl 0x82da75f0
	ctx.lr = 0x82B5A4C8;
	sub_82DA75F0(ctx, base);
	// lwz r11,156(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// lwz r4,152(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// li r10,148
	ctx.r10.s64 = 148;
	// addi r31,r3,152
	ctx.r31.s64 = ctx.r3.s64 + 152;
	// subf r9,r4,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r4.s64;
	// divw. r11,r9,r10
	ctx.r11.s32 = PPCDivide(ctx.r9.s32, ctx.r10.s32);
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82b5a54c
	if (cr0.eq) goto loc_82B5A54C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b5a4f8
	if (!cr6.eq) goto loc_82B5A4F8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B5A4F8;
	sub_831CC188(ctx, base);
loc_82B5A4F8:
	// addi r3,r30,100
	ctx.r3.s64 = ctx.r30.s64 + 100;
	// bl 0x82b57f88
	ctx.lr = 0x82B5A500;
	sub_82B57F88(ctx, base);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r3,r5,148
	ctx.r3.s64 = ctx.r5.s64 + 148;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82b5a3a8
	ctx.lr = 0x82B5A514;
	sub_82B5A3A8(ctx, base);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// addi r3,r4,-148
	ctx.r3.s64 = ctx.r4.s64 + -148;
	// bl 0x82d9f568
	ctx.lr = 0x82B5A524;
	sub_82D9F568(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// addi r11,r11,-148
	ctx.r11.s64 = ctx.r11.s64 + -148;
	// ori r4,r4,551
	ctx.r4.u64 = ctx.r4.u64 | 551;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r3,r30,132
	ctx.r3.s64 = ctx.r30.s64 + 132;
	// bl 0x82d04220
	ctx.lr = 0x82B5A540;
	sub_82D04220(ctx, base);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// ori r4,r4,430
	ctx.r4.u64 = ctx.r4.u64 | 430;
	// b 0x82b5a5c8
	goto loc_82B5A5C8;
loc_82B5A54C:
	// lwz r11,172(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	// addi r31,r3,168
	ctx.r31.s64 = ctx.r3.s64 + 168;
	// lwz r4,168(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// subf r9,r4,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r4.s64;
	// divw. r11,r9,r10
	ctx.r11.s32 = PPCDivide(ctx.r9.s32, ctx.r10.s32);
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82b5a5d0
	if (cr0.eq) goto loc_82B5A5D0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b5a578
	if (!cr6.eq) goto loc_82B5A578;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B5A578;
	sub_831CC188(ctx, base);
loc_82B5A578:
	// addi r3,r30,100
	ctx.r3.s64 = ctx.r30.s64 + 100;
	// bl 0x82b57f88
	ctx.lr = 0x82B5A580;
	sub_82B57F88(ctx, base);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r3,r5,148
	ctx.r3.s64 = ctx.r5.s64 + 148;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82b5a3a8
	ctx.lr = 0x82B5A594;
	sub_82B5A3A8(ctx, base);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// addi r3,r4,-148
	ctx.r3.s64 = ctx.r4.s64 + -148;
	// bl 0x82d9f568
	ctx.lr = 0x82B5A5A4;
	sub_82D9F568(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// addi r11,r11,-148
	ctx.r11.s64 = ctx.r11.s64 + -148;
	// ori r4,r4,630
	ctx.r4.u64 = ctx.r4.u64 | 630;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r3,r30,132
	ctx.r3.s64 = ctx.r30.s64 + 132;
	// bl 0x82d04220
	ctx.lr = 0x82B5A5C0;
	sub_82D04220(ctx, base);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// ori r4,r4,499
	ctx.r4.u64 = ctx.r4.u64 | 499;
loc_82B5A5C8:
	// addi r3,r30,160
	ctx.r3.s64 = ctx.r30.s64 + 160;
	// bl 0x82d04220
	ctx.lr = 0x82B5A5D0;
	sub_82D04220(ctx, base);
loc_82B5A5D0:
	// lwz r11,208(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// bne cr6,0x82b5a618
	if (!cr6.eq) goto loc_82B5A618;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82B5A5E4;
	sub_82D19A68(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d2aec8
	ctx.lr = 0x82B5A5F0;
	sub_82D2AEC8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B5A600;
	sub_82D19788(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B5A610;
	sub_82D19788(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82b5a61c
	goto loc_82B5A61C;
loc_82B5A618:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82B5A61C:
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

__attribute__((alias("__imp__sub_82B5A634"))) PPC_WEAK_FUNC(sub_82B5A634);
PPC_FUNC_IMPL(__imp__sub_82B5A634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B5A638"))) PPC_WEAK_FUNC(sub_82B5A638);
PPC_FUNC_IMPL(__imp__sub_82B5A638) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,368(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 368);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r10,360(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 360);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B5A64C"))) PPC_WEAK_FUNC(sub_82B5A64C);
PPC_FUNC_IMPL(__imp__sub_82B5A64C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B5A650"))) PPC_WEAK_FUNC(sub_82B5A650);
PPC_FUNC_IMPL(__imp__sub_82B5A650) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x83a7d958
	ctx.lr = 0x82B5A668;
	sub_83A7D958(ctx, base);
	// bl 0x83524138
	ctx.lr = 0x82B5A66C;
	sub_83524138(ctx, base);
	// ld r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 104);
	// rotlwi r10,r3,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lis r8,-32208
	ctx.r8.s64 = -2110783488;
	// subf r7,r9,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r9.s64;
	// clrldi r6,r7,32
	ctx.r6.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,23372(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 23372);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
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

__attribute__((alias("__imp__sub_82B5A6B0"))) PPC_WEAK_FUNC(sub_82B5A6B0);
PPC_FUNC_IMPL(__imp__sub_82B5A6B0) {
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
	// bl 0x82d95ee0
	ctx.lr = 0x82B5A6C8;
	sub_82D95EE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b5a708
	if (cr6.eq) goto loc_82B5A708;
	// ld r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 104);
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// ble cr6,0x82b5a708
	if (!cr6.gt) goto loc_82B5A708;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b5a650
	ctx.lr = 0x82B5A6E8;
	sub_82B5A650(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r11,14076
	ctx.r5.s64 = ctx.r11.s64 + 14076;
	// lfs f0,-4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82b5a708
	if (!cr6.gt) goto loc_82B5A708;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82B5A708;
	sub_82D20DA8(ctx, base);
loc_82B5A708:
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

__attribute__((alias("__imp__sub_82B5A720"))) PPC_WEAK_FUNC(sub_82B5A720);
PPC_FUNC_IMPL(__imp__sub_82B5A720) {
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
	ctx.lr = 0x82B5A730;
	sub_82D86078(ctx, base);
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832f0
	ctx.lr = 0x82B5A738;
	sub_825832F0(ctx, base);
	// bl 0x82da75f0
	ctx.lr = 0x82B5A73C;
	sub_82DA75F0(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// beq cr6,0x82b5a764
	if (cr6.eq) goto loc_82B5A764;
	// addi r11,r11,14100
	ctx.r11.s64 = ctx.r11.s64 + 14100;
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82B5A764:
	// addi r3,r11,14100
	ctx.r3.s64 = ctx.r11.s64 + 14100;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B5A778"))) PPC_WEAK_FUNC(sub_82B5A778);
PPC_FUNC_IMPL(__imp__sub_82B5A778) {
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
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// li r10,15
	ctx.r10.s64 = 15;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,-13652(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13652);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// bne cr6,0x82b5a7c0
	if (!cr6.eq) goto loc_82B5A7C0;
	// addi r4,r4,32
	ctx.r4.s64 = ctx.r4.s64 + 32;
	// b 0x82b5a7c4
	goto loc_82B5A7C4;
loc_82B5A7C0:
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
loc_82B5A7C4:
	// bl 0x8259cb28
	ctx.lr = 0x82B5A7C8;
	sub_8259CB28(ctx, base);
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

__attribute__((alias("__imp__sub_82B5A7E0"))) PPC_WEAK_FUNC(sub_82B5A7E0);
PPC_FUNC_IMPL(__imp__sub_82B5A7E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B5A7E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// stw r29,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r29.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// addi r28,r11,-22544
	ctx.r28.s64 = ctx.r11.s64 + -22544;
	// stb r30,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r30.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8259cc28
	ctx.lr = 0x82B5A820;
	sub_8259CC28(ctx, base);
	// stw r29,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r29.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stb r30,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r30.u8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8259cc28
	ctx.lr = 0x82B5A83C;
	sub_8259CC28(ctx, base);
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r9,84
	ctx.r9.s64 = 84;
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// ori r7,r10,65535
	ctx.r7.u64 = ctx.r10.u64 | 65535;
	// stw r9,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r9.u32);
	// stw r8,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stw r7,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r7.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B5A884"))) PPC_WEAK_FUNC(sub_82B5A884);
PPC_FUNC_IMPL(__imp__sub_82B5A884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B5A888"))) PPC_WEAK_FUNC(sub_82B5A888);
PPC_FUNC_IMPL(__imp__sub_82B5A888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B5A890;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,-1
	ctx.r29.s64 = -1;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// bl 0x8259cb28
	ctx.lr = 0x82B5A8BC;
	sub_8259CB28(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// bl 0x8259cb28
	ctx.lr = 0x82B5A8D0;
	sub_8259CB28(ctx, base);
	// lwz r10,60(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// lwz r9,64(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// stw r9,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r9.u32);
	// lwz r8,68(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// stw r8,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r8.u32);
	// lwz r7,72(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// lwz r6,76(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// stw r6,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r6.u32);
	// lwz r5,80(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// stw r5,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r5.u32);
	// lwz r4,84(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// stw r4,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r4.u32);
	// lwz r3,88(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,92(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// lwz r10,96(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// lwz r9,100(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B5A934"))) PPC_WEAK_FUNC(sub_82B5A934);
PPC_FUNC_IMPL(__imp__sub_82B5A934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B5A938"))) PPC_WEAK_FUNC(sub_82B5A938);
PPC_FUNC_IMPL(__imp__sub_82B5A938) {
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
	ctx.lr = 0x82B5A954;
	sub_82D86078(ctx, base);
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832f0
	ctx.lr = 0x82B5A95C;
	sub_825832F0(ctx, base);
	// bl 0x82da75f0
	ctx.lr = 0x82B5A960;
	sub_82DA75F0(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r31,r3,48
	ctx.r31.s64 = ctx.r3.s64 + 48;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b5a984
	if (cr6.eq) goto loc_82B5A984;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,296
	ctx.r3.s64 = ctx.r30.s64 + 296;
	// bl 0x82b5a888
	ctx.lr = 0x82B5A97C;
	sub_82B5A888(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82B5A984:
	// lwz r11,296(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 296);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b5a9cc
	if (!cr6.eq) goto loc_82B5A9CC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82B5A998;
	sub_82D19A68(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d2aec8
	ctx.lr = 0x82B5A9A4;
	sub_82D2AEC8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B5A9B4;
	sub_82D19788(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B5A9C4;
	sub_82D19788(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82b5a9d0
	goto loc_82B5A9D0;
loc_82B5A9CC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82B5A9D0:
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

__attribute__((alias("__imp__sub_82B5A9E8"))) PPC_WEAK_FUNC(sub_82B5A9E8);
PPC_FUNC_IMPL(__imp__sub_82B5A9E8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r9,13850
	ctx.r4.s64 = ctx.r9.s64 + 13850;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8259cc28
	ctx.lr = 0x82B5AA28;
	sub_8259CC28(ctx, base);
	// lbz r8,100(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 100);
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82b5aa44
	if (cr6.eq) goto loc_82B5AA44;
	// ori r4,r4,551
	ctx.r4.u64 = ctx.r4.u64 | 551;
	// b 0x82b5aa48
	goto loc_82B5AA48;
loc_82B5AA44:
	// ori r4,r4,155
	ctx.r4.u64 = ctx.r4.u64 | 155;
loc_82B5AA48:
	// bl 0x82d04220
	ctx.lr = 0x82B5AA4C;
	sub_82D04220(ctx, base);
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

__attribute__((alias("__imp__sub_82B5AA68"))) PPC_WEAK_FUNC(sub_82B5AA68);
PPC_FUNC_IMPL(__imp__sub_82B5AA68) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r9,13851
	ctx.r4.s64 = ctx.r9.s64 + 13851;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8259cc28
	ctx.lr = 0x82B5AAA8;
	sub_8259CC28(ctx, base);
	// lwz r8,368(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 368);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x82b5aac8
	if (!cr6.eq) goto loc_82B5AAC8;
	// lis r4,640
	ctx.r4.s64 = 41943040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// bl 0x82d04220
	ctx.lr = 0x82B5AAC4;
	sub_82D04220(ctx, base);
	// b 0x82b5ab30
	goto loc_82B5AB30;
loc_82B5AAC8:
	// addi r4,r30,296
	ctx.r4.s64 = ctx.r30.s64 + 296;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82b5a778
	ctx.lr = 0x82B5AAD4;
	sub_82B5A778(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b5aae8
	if (cr6.lt) goto loc_82B5AAE8;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82B5AAE8:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82B5AAEC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b5aaec
	if (!cr6.eq) goto loc_82B5AAEC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82B5AB10;
	sub_8259CC28(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82b5ab30
	if (cr6.lt) goto loc_82B5AB30;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B5AB30;
	sub_825952B8(ctx, base);
loc_82B5AB30:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82B5AB4C"))) PPC_WEAK_FUNC(sub_82B5AB4C);
PPC_FUNC_IMPL(__imp__sub_82B5AB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B5AB50"))) PPC_WEAK_FUNC(sub_82B5AB50);
PPC_FUNC_IMPL(__imp__sub_82B5AB50) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// addi r4,r9,13882
	ctx.r4.s64 = ctx.r9.s64 + 13882;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8259cc28
	ctx.lr = 0x82B5AB88;
	sub_8259CC28(ctx, base);
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

__attribute__((alias("__imp__sub_82B5ABA0"))) PPC_WEAK_FUNC(sub_82B5ABA0);
PPC_FUNC_IMPL(__imp__sub_82B5ABA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B5ABA8;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stb r10,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
	// addi r29,r11,13913
	ctx.r29.s64 = ctx.r11.s64 + 13913;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r29,-30
	ctx.r4.s64 = ctx.r29.s64 + -30;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8259cc28
	ctx.lr = 0x82B5ABDC;
	sub_8259CC28(ctx, base);
	// lwz r8,368(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 368);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x82b5ac04
	if (!cr6.eq) goto loc_82B5AC04;
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,442
	ctx.r4.u64 = ctx.r4.u64 | 442;
	// bl 0x82d04220
	ctx.lr = 0x82B5ABF8;
	sub_82D04220(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82B5AC04:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82B5AC10;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r30,356
	ctx.r3.s64 = ctx.r30.s64 + 356;
	// lwz r6,388(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 388);
	// lwz r5,384(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 384);
	// bl 0x82d8e6a0
	ctx.lr = 0x82B5AC24;
	sub_82D8E6A0(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82b5ac38
	if (!cr6.lt) goto loc_82B5AC38;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
loc_82B5AC38:
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,202
	ctx.r4.u64 = ctx.r4.u64 | 202;
	// bl 0x82d042a8
	ctx.lr = 0x82B5AC48;
	sub_82D042A8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b5ac68
	if (cr6.lt) goto loc_82B5AC68;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B5AC68;
	sub_825952B8(ctx, base);
loc_82B5AC68:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B5AC74"))) PPC_WEAK_FUNC(sub_82B5AC74);
PPC_FUNC_IMPL(__imp__sub_82B5AC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B5AC78"))) PPC_WEAK_FUNC(sub_82B5AC78);
PPC_FUNC_IMPL(__imp__sub_82B5AC78) {
	PPC_FUNC_PROLOGUE();
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B5AC80"))) PPC_WEAK_FUNC(sub_82B5AC80);
PPC_FUNC_IMPL(__imp__sub_82B5AC80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82B5AC88;
	__savegprlr_27(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,6
	ctx.r11.s64 = 6;
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// addi r27,r3,48
	ctx.r27.s64 = ctx.r3.s64 + 48;
	// lfs f0,-26260(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r30,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r30.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stb r30,44(r3)
	PPC_STORE_U8(ctx.r3.u32 + 44, ctx.r30.u8);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stb r30,45(r3)
	PPC_STORE_U8(ctx.r3.u32 + 45, ctx.r30.u8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82b5a7e0
	ctx.lr = 0x82B5ACE4;
	sub_82B5A7E0(ctx, base);
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// addi r29,r31,152
	ctx.r29.s64 = ctx.r31.s64 + 152;
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// addi r28,r31,168
	ctx.r28.s64 = ctx.r31.s64 + 168;
	// stw r30,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r30.u32);
	// stw r30,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r30.u32);
	// bl 0x82b5a7e0
	ctx.lr = 0x82B5AD0C;
	sub_82B5A7E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82b5a888
	ctx.lr = 0x82B5AD18;
	sub_82B5A888(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8378e240
	ctx.lr = 0x82B5AD20;
	sub_8378E240(ctx, base);
	// lwz r4,156(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// lwz r5,152(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82b5ad50
	if (cr6.eq) goto loc_82B5AD50;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82b5a3a8
	ctx.lr = 0x82B5AD3C;
	sub_82B5A3A8(ctx, base);
	// addi r5,r29,12
	ctx.r5.s64 = ctx.r29.s64 + 12;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d9f568
	ctx.lr = 0x82B5AD4C;
	sub_82D9F568(ctx, base);
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
loc_82B5AD50:
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82b5ad80
	if (cr6.eq) goto loc_82B5AD80;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82b5a3a8
	ctx.lr = 0x82B5AD6C;
	sub_82B5A3A8(ctx, base);
	// addi r5,r28,12
	ctx.r5.s64 = ctx.r28.s64 + 12;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d9f568
	ctx.lr = 0x82B5AD7C;
	sub_82D9F568(ctx, base);
	// stw r30,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r30.u32);
loc_82B5AD80:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B5AD8C"))) PPC_WEAK_FUNC(sub_82B5AD8C);
PPC_FUNC_IMPL(__imp__sub_82B5AD8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B5AD90"))) PPC_WEAK_FUNC(sub_82B5AD90);
PPC_FUNC_IMPL(__imp__sub_82B5AD90) {
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
	// bl 0x82c30760
	ctx.lr = 0x82B5ADA8;
	sub_82C30760(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,14192
	ctx.r8.s64 = ctx.r10.s64 + 14192;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stb r11,100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 100, ctx.r11.u8);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// std r11,104(r31)
	PPC_STORE_U64(ctx.r31.u32 + 104, ctx.r11.u64);
	// bl 0x82b5ac80
	ctx.lr = 0x82B5ADD4;
	sub_82B5AC80(ctx, base);
	// addi r3,r31,296
	ctx.r3.s64 = ctx.r31.s64 + 296;
	// bl 0x82b5a7e0
	ctx.lr = 0x82B5ADDC;
	sub_82B5A7E0(ctx, base);
	// bl 0x83a7d958
	ctx.lr = 0x82B5ADE0;
	sub_83A7D958(ctx, base);
	// bl 0x83524138
	ctx.lr = 0x82B5ADE4;
	sub_83524138(ctx, base);
	// std r3,104(r31)
	PPC_STORE_U64(ctx.r31.u32 + 104, ctx.r3.u64);
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

__attribute__((alias("__imp__sub_82B5AE00"))) PPC_WEAK_FUNC(sub_82B5AE00);
PPC_FUNC_IMPL(__imp__sub_82B5AE00) {
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
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,14192
	ctx.r9.s64 = ctx.r11.s64 + 14192;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,296
	ctx.r3.s64 = ctx.r3.s64 + 296;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8378e240
	ctx.lr = 0x82B5AE3C;
	sub_8378E240(ctx, base);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x82b59618
	ctx.lr = 0x82B5AE44;
	sub_82B59618(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c30838
	ctx.lr = 0x82B5AE4C;
	sub_82C30838(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82b5ae64
	if (cr6.eq) goto loc_82B5AE64;
	// bl 0x82416268
	ctx.lr = 0x82B5AE60;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B5AE64:
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

__attribute__((alias("__imp__sub_82B5AE7C"))) PPC_WEAK_FUNC(sub_82B5AE7C);
PPC_FUNC_IMPL(__imp__sub_82B5AE7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B5AE80"))) PPC_WEAK_FUNC(sub_82B5AE80);
PPC_FUNC_IMPL(__imp__sub_82B5AE80) {
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
	// blt cr6,0x82b5aea8
	if (cr6.lt) goto loc_82B5AEA8;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b5aeac
	goto loc_82B5AEAC;
loc_82B5AEA8:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82B5AEAC:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,400
	ctx.r4.s64 = 400;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B5AEC8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b5aee0
	if (cr6.eq) goto loc_82B5AEE0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82b5ad90
	ctx.lr = 0x82B5AEDC;
	sub_82B5AD90(ctx, base);
	// b 0x82b5aee4
	goto loc_82B5AEE4;
loc_82B5AEE0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B5AEE4:
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

__attribute__((alias("__imp__sub_82B5AEFC"))) PPC_WEAK_FUNC(sub_82B5AEFC);
PPC_FUNC_IMPL(__imp__sub_82B5AEFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B5AF00"))) PPC_WEAK_FUNC(sub_82B5AF00);
PPC_FUNC_IMPL(__imp__sub_82B5AF00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B5AF08;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8308e078
	ctx.lr = 0x82B5AF1C;
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
	ctx.lr = 0x82B5AF34;
	sub_82D253F8(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,15152
	ctx.r9.s64 = ctx.r11.s64 + 15152;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// lis r6,-31777
	ctx.r6.s64 = -2082537472;
	// std r7,96(r31)
	PPC_STORE_U64(ctx.r31.u32 + 96, ctx.r7.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r6,6304
	ctx.r30.s64 = ctx.r6.s64 + 6304;
	// lwz r4,6304(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 6304);
	// bl 0x82d20ae0
	ctx.lr = 0x82B5AF68;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82d23390
	ctx.lr = 0x82B5AF78;
	sub_82D23390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82d20ae0
	ctx.lr = 0x82B5AF84;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d19788
	ctx.lr = 0x82B5AF94;
	sub_82D19788(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B5AFA0"))) PPC_WEAK_FUNC(sub_82B5AFA0);
PPC_FUNC_IMPL(__imp__sub_82B5AFA0) {
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
	// bl 0x82d19a78
	ctx.lr = 0x82B5AFB4;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b5affc
	if (cr6.eq) goto loc_82B5AFFC;
	// lwz r10,100(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r31,r11,14956
	ctx.r31.s64 = ctx.r11.s64 + 14956;
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B5AFDC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b5affc
	if (cr6.eq) goto loc_82B5AFFC;
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
	ctx.lr = 0x82B5AFFC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B5AFFC:
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

__attribute__((alias("__imp__sub_82B5B010"))) PPC_WEAK_FUNC(sub_82B5B010);
PPC_FUNC_IMPL(__imp__sub_82B5B010) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x83a7d958
	ctx.lr = 0x82B5B028;
	sub_83A7D958(ctx, base);
	// bl 0x83524138
	ctx.lr = 0x82B5B02C;
	sub_83524138(ctx, base);
	// ld r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// rotlwi r10,r3,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lis r8,-32208
	ctx.r8.s64 = -2110783488;
	// subf r7,r9,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r9.s64;
	// clrldi r6,r7,32
	ctx.r6.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,23372(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 23372);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
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

__attribute__((alias("__imp__sub_82B5B070"))) PPC_WEAK_FUNC(sub_82B5B070);
PPC_FUNC_IMPL(__imp__sub_82B5B070) {
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
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,15152
	ctx.r9.s64 = ctx.r11.s64 + 15152;
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
	ctx.lr = 0x82B5B0A8;
	sub_82D25548(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82b5b0c0
	if (cr6.eq) goto loc_82B5B0C0;
	// bl 0x82416268
	ctx.lr = 0x82B5B0BC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B5B0C0:
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

__attribute__((alias("__imp__sub_82B5B0D8"))) PPC_WEAK_FUNC(sub_82B5B0D8);
PPC_FUNC_IMPL(__imp__sub_82B5B0D8) {
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
	// bl 0x82d95ee0
	ctx.lr = 0x82B5B0F0;
	sub_82D95EE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b5b130
	if (cr6.eq) goto loc_82B5B130;
	// ld r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// ble cr6,0x82b5b130
	if (!cr6.gt) goto loc_82B5B130;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b5b010
	ctx.lr = 0x82B5B110;
	sub_82B5B010(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r11,14936
	ctx.r5.s64 = ctx.r11.s64 + 14936;
	// lfs f0,-120(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -120);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82b5b130
	if (!cr6.gt) goto loc_82B5B130;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82B5B130;
	sub_82D20DA8(ctx, base);
loc_82B5B130:
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

__attribute__((alias("__imp__sub_82B5B148"))) PPC_WEAK_FUNC(sub_82B5B148);
PPC_FUNC_IMPL(__imp__sub_82B5B148) {
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
	// blt cr6,0x82b5b170
	if (cr6.lt) goto loc_82B5B170;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b5b174
	goto loc_82B5B174;
loc_82B5B170:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82B5B174:
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
	ctx.lr = 0x82B5B190;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b5b1a8
	if (cr6.eq) goto loc_82B5B1A8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82b5af00
	ctx.lr = 0x82B5B1A4;
	sub_82B5AF00(ctx, base);
	// b 0x82b5b1ac
	goto loc_82B5B1AC;
loc_82B5B1A8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B5B1AC:
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

__attribute__((alias("__imp__sub_82B5B1C4"))) PPC_WEAK_FUNC(sub_82B5B1C4);
PPC_FUNC_IMPL(__imp__sub_82B5B1C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B5B1C8"))) PPC_WEAK_FUNC(sub_82B5B1C8);
PPC_FUNC_IMPL(__imp__sub_82B5B1C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac0
	ctx.lr = 0x82B5B1D0;
	__savegprlr_18(ctx, base);
	// stfd f29,-144(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f29.u64);
	// stfd f30,-136(r1)
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f30.u64);
	// stfd f31,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f31.u64);
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B5B1E8;
	sub_82D19A78(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b5b6c8
	if (cr6.eq) goto loc_82B5B6C8;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r28,r11,15016
	ctx.r28.s64 = ctx.r11.s64 + 15016;
	// addi r4,r28,-422
	ctx.r4.s64 = ctx.r28.s64 + -422;
	// bl 0x837b0c10
	ctx.lr = 0x82B5B208;
	sub_837B0C10(ctx, base);
	// addi r4,r28,-52
	ctx.r4.s64 = ctx.r28.s64 + -52;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r20,r31,100
	ctx.r20.s64 = ctx.r31.s64 + 100;
	// bl 0x837b0c10
	ctx.lr = 0x82B5B218;
	sub_837B0C10(ctx, base);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// ori r5,r5,155
	ctx.r5.u64 = ctx.r5.u64 | 155;
	// bl 0x82a69a28
	ctx.lr = 0x82B5B22C;
	sub_82A69A28(ctx, base);
	// lis r11,641
	ctx.r11.s64 = 42008576;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lwz r5,8(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// ori r18,r11,222
	ctx.r18.u64 = ctx.r11.u64 | 222;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// bl 0x82d042a8
	ctx.lr = 0x82B5B244;
	sub_82D042A8(ctx, base);
	// lwz r10,244(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82b5b258
	if (!cr6.lt) goto loc_82B5B258;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
loc_82B5B258:
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x837b0c10
	ctx.lr = 0x82B5B260;
	sub_837B0C10(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r28,-44
	ctx.r4.s64 = ctx.r28.s64 + -44;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x837b0c10
	ctx.lr = 0x82B5B270;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82B5B280;
	sub_82A69AD0(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r9,505
	ctx.r9.s64 = 33095680;
	// lis r8,505
	ctx.r8.s64 = 33095680;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// lis r7,701
	ctx.r7.s64 = 45940736;
	// lfs f30,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f30.f64 = double(temp.f32);
	// lis r6,560
	ctx.r6.s64 = 36700160;
	// lfs f29,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f29.f64 = double(temp.f32);
	// mr r21,r29
	ctx.r21.u64 = ctx.r29.u64;
	// li r27,15
	ctx.r27.s64 = 15;
	// ori r22,r9,69
	ctx.r22.u64 = ctx.r9.u64 | 69;
	// ori r23,r8,127
	ctx.r23.u64 = ctx.r8.u64 | 127;
	// ori r26,r7,58
	ctx.r26.u64 = ctx.r7.u64 | 58;
	// ori r25,r6,352
	ctx.r25.u64 = ctx.r6.u64 | 352;
	// li r19,2
	ctx.r19.s64 = 2;
loc_82B5B2C4:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// fmr f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f29.f64;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmplwi cr6,r21,5
	cr6.compare<uint32_t>(ctx.r21.u32, 5, xer);
	// bgt cr6,0x82b5b324
	if (cr6.gt) goto loc_82B5B324;
	// mtctr r21
	ctr.u64 = ctx.r21.u64;
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(ctx.r21.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82b5b2fc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B5B2FC;
	// bdzf 4*cr6+eq,0x82b5b304
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B5B304;
	// bdzf 4*cr6+eq,0x82b5b30c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B5B30C;
	// bdzf 4*cr6+eq,0x82b5b314
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B5B314;
	// bne cr6,0x82b5b31c
	if (!cr6.eq) goto loc_82B5B31C;
	// lwz r30,4(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// b 0x82b5b328
	goto loc_82B5B328;
loc_82B5B2FC:
	// lfs f31,12(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// b 0x82b5b328
	goto loc_82B5B328;
loc_82B5B304:
	// lfs f31,16(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	ctx.f31.f64 = double(temp.f32);
	// b 0x82b5b328
	goto loc_82B5B328;
loc_82B5B30C:
	// lfs f31,24(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	ctx.f31.f64 = double(temp.f32);
	// b 0x82b5b328
	goto loc_82B5B328;
loc_82B5B314:
	// lfs f31,20(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	ctx.f31.f64 = double(temp.f32);
	// b 0x82b5b328
	goto loc_82B5B328;
loc_82B5B31C:
	// lfs f31,28(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 28);
	ctx.f31.f64 = double(temp.f32);
	// b 0x82b5b328
	goto loc_82B5B328;
loc_82B5B324:
	// li r31,1
	ctx.r31.s64 = 1;
loc_82B5B328:
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// addi r4,r28,-421
	ctx.r4.s64 = ctx.r28.s64 + -421;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r29.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x82B5B344;
	sub_8259CC28(ctx, base);
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r27.u32);
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// addi r4,r28,-390
	ctx.r4.s64 = ctx.r28.s64 + -390;
	// stb r29,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r29.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cc28
	ctx.lr = 0x82B5B360;
	sub_8259CC28(ctx, base);
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b5b650
	if (!cr6.eq) goto loc_82B5B650;
	// cmplwi cr6,r21,5
	cr6.compare<uint32_t>(ctx.r21.u32, 5, xer);
	// bgt cr6,0x82b5b548
	if (cr6.gt) goto loc_82B5B548;
	// mtctr r21
	ctr.u64 = ctx.r21.u64;
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(ctx.r21.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82b5b41c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B5B41C;
	// bdzf 4*cr6+eq,0x82b5b448
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B5B448;
	// bdzf 4*cr6+eq,0x82b5b474
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B5B474;
	// bdzf 4*cr6+eq,0x82b5b4bc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B5B4BC;
	// bne cr6,0x82b5b504
	if (!cr6.eq) goto loc_82B5B504;
	// addi r4,r28,-389
	ctx.r4.s64 = ctx.r28.s64 + -389;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x837b0c10
	ctx.lr = 0x82B5B39C;
	sub_837B0C10(ctx, base);
	// lbz r11,44(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 44);
	// stw r22,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r22.u32);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// stw r23,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r23.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r26,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r26.u32);
	// stw r26,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r26.u32);
	// beq cr6,0x82b5b3c8
	if (cr6.eq) goto loc_82B5B3C8;
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// ori r4,r4,455
	ctx.r4.u64 = ctx.r4.u64 | 455;
	// b 0x82b5b3d8
	goto loc_82B5B3D8;
loc_82B5B3C8:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r10,r1,320
	ctx.r10.s64 = ctx.r1.s64 + 320;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r9,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
loc_82B5B3D8:
	// bl 0x82d042a8
	ctx.lr = 0x82B5B3DC;
	sub_82D042A8(ctx, base);
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r5,288(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82b5b3f0
	if (!cr6.lt) goto loc_82B5B3F0;
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
loc_82B5B3F0:
	// lis r4,26
	ctx.r4.s64 = 1703936;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,7
	ctx.r4.u64 = ctx.r4.u64 | 7;
	// bl 0x82d042a8
	ctx.lr = 0x82B5B400;
	sub_82D042A8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82d042a8
	ctx.lr = 0x82B5B410;
	sub_82D042A8(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x8387e8e0
	ctx.lr = 0x82B5B418;
	sub_8387E8E0(ctx, base);
	// b 0x82b5b548
	goto loc_82B5B548;
loc_82B5B41C:
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,156
	ctx.r4.u64 = ctx.r4.u64 | 156;
	// bl 0x82d042a8
	ctx.lr = 0x82B5B42C;
	sub_82D042A8(ctx, base);
	// stfd f31,32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f31.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82d042a8
	ctx.lr = 0x82B5B444;
	sub_82D042A8(ctx, base);
	// b 0x82b5b548
	goto loc_82B5B548;
loc_82B5B448:
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,157
	ctx.r4.u64 = ctx.r4.u64 | 157;
	// bl 0x82d042a8
	ctx.lr = 0x82B5B458;
	sub_82D042A8(ctx, base);
	// stfd f31,32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f31.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82d042a8
	ctx.lr = 0x82B5B470;
	sub_82D042A8(ctx, base);
	// b 0x82b5b548
	goto loc_82B5B548;
loc_82B5B474:
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// bgt cr6,0x82b5b490
	if (cr6.gt) goto loc_82B5B490;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82B5B484;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82B5B48C;
	sub_8387E8E0(ctx, base);
	// b 0x82b5b6a0
	goto loc_82B5B6A0;
loc_82B5B490:
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,158
	ctx.r4.u64 = ctx.r4.u64 | 158;
	// bl 0x82d042a8
	ctx.lr = 0x82B5B4A0;
	sub_82D042A8(ctx, base);
	// stfd f31,32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f31.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82d042a8
	ctx.lr = 0x82B5B4B8;
	sub_82D042A8(ctx, base);
	// b 0x82b5b548
	goto loc_82B5B548;
loc_82B5B4BC:
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// bgt cr6,0x82b5b4d8
	if (cr6.gt) goto loc_82B5B4D8;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82B5B4CC;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82B5B4D4;
	sub_8387E8E0(ctx, base);
	// b 0x82b5b6a0
	goto loc_82B5B6A0;
loc_82B5B4D8:
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,549
	ctx.r4.u64 = ctx.r4.u64 | 549;
	// bl 0x82d042a8
	ctx.lr = 0x82B5B4E8;
	sub_82D042A8(ctx, base);
	// stfd f31,32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f31.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82d042a8
	ctx.lr = 0x82B5B500;
	sub_82D042A8(ctx, base);
	// b 0x82b5b548
	goto loc_82B5B548;
loc_82B5B504:
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// bgt cr6,0x82b5b520
	if (cr6.gt) goto loc_82B5B520;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82B5B514;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82B5B51C;
	sub_8387E8E0(ctx, base);
	// b 0x82b5b6a0
	goto loc_82B5B6A0;
loc_82B5B520:
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,550
	ctx.r4.u64 = ctx.r4.u64 | 550;
	// bl 0x82d042a8
	ctx.lr = 0x82B5B530;
	sub_82D042A8(ctx, base);
	// stfd f31,32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f31.u64);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x82d042a8
	ctx.lr = 0x82B5B548;
	sub_82D042A8(ctx, base);
loc_82B5B548:
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// addi r4,r28,-28
	ctx.r4.s64 = ctx.r28.s64 + -28;
	// stw r27,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r27.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r29,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r29.u32);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// stb r29,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r29.u8);
	// bl 0x8259cc28
	ctx.lr = 0x82B5B568;
	sub_8259CC28(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x83165d78
	ctx.lr = 0x82B5B57C;
	sub_83165D78(ctx, base);
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82b5b590
	if (!cr6.lt) goto loc_82B5B590;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
loc_82B5B590:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82d2e228
	ctx.lr = 0x82B5B598;
	sub_82D2E228(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b5b6dc
	if (cr6.eq) goto loc_82B5B6DC;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82b5b5b8
	if (!cr6.lt) goto loc_82B5B5B8;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82B5B5B8:
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x837b0c10
	ctx.lr = 0x82B5B5C0;
	sub_837B0C10(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r28,-16
	ctx.r4.s64 = ctx.r28.s64 + -16;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x837b0c10
	ctx.lr = 0x82B5B5D0;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82B5B5E0;
	sub_82A69AD0(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82b5b5f4
	if (!cr6.lt) goto loc_82B5B5F4;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
loc_82B5B5F4:
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x837b0c10
	ctx.lr = 0x82B5B5FC;
	sub_837B0C10(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x837b0c10
	ctx.lr = 0x82B5B60C;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82B5B61C;
	sub_82A69AD0(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// blt cr6,0x82b5b644
	if (cr6.lt) goto loc_82B5B644;
	// stw r19,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r19.u32);
	// addi r3,r1,212
	ctx.r3.s64 = ctx.r1.s64 + 212;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x825952b8
	ctx.lr = 0x82B5B644;
	sub_825952B8(ctx, base);
loc_82B5B644:
	// stw r27,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r27.u32);
	// stw r29,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r29.u32);
	// stb r29,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r29.u8);
loc_82B5B650:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b5b66c
	if (cr6.lt) goto loc_82B5B66C;
	// stw r19,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r19.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82B5B66C;
	sub_825952B8(ctx, base);
loc_82B5B66C:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r27.u32);
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r29,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r29.u8);
	// blt cr6,0x82b5b694
	if (cr6.lt) goto loc_82B5B694;
	// stw r19,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r19.u32);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82B5B694;
	sub_825952B8(ctx, base);
loc_82B5B694:
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r29.u8);
loc_82B5B6A0:
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// cmplwi cr6,r21,6
	cr6.compare<uint32_t>(ctx.r21.u32, 6, xer);
	// blt cr6,0x82b5b2c4
	if (cr6.lt) goto loc_82B5B2C4;
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b5b6c8
	if (cr6.lt) goto loc_82B5B6C8;
	// stw r19,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r19.u32);
	// addi r3,r1,204
	ctx.r3.s64 = ctx.r1.s64 + 204;
loc_82B5B6C0:
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x825952b8
	ctx.lr = 0x82B5B6C8;
	sub_825952B8(ctx, base);
loc_82B5B6C8:
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// lfd f29,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f30,-136(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f31,-128(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_82B5B6DC:
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b5b6f8
	if (cr6.lt) goto loc_82B5B6F8;
	// stw r19,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r19.u32);
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x825952b8
	ctx.lr = 0x82B5B6F8;
	sub_825952B8(ctx, base);
loc_82B5B6F8:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r27,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r27.u32);
	// stw r29,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r29.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r29,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r29.u8);
	// blt cr6,0x82b5b720
	if (cr6.lt) goto loc_82B5B720;
	// stw r19,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r19.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82B5B720;
	sub_825952B8(ctx, base);
loc_82B5B720:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r27.u32);
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r29,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r29.u8);
	// blt cr6,0x82b5b748
	if (cr6.lt) goto loc_82B5B748;
	// stw r19,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r19.u32);
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82B5B748;
	sub_825952B8(ctx, base);
loc_82B5B748:
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r29.u8);
	// blt cr6,0x82b5b6c8
	if (cr6.lt) goto loc_82B5B6C8;
	// stw r19,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r19.u32);
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// b 0x82b5b6c0
	goto loc_82B5B6C0;
}

__attribute__((alias("__imp__sub_82B5B76C"))) PPC_WEAK_FUNC(sub_82B5B76C);
PPC_FUNC_IMPL(__imp__sub_82B5B76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B5B770"))) PPC_WEAK_FUNC(sub_82B5B770);
PPC_FUNC_IMPL(__imp__sub_82B5B770) {
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
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82B5B788;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b5b83c
	if (cr6.eq) goto loc_82B5B83C;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832f0
	ctx.lr = 0x82B5B798;
	sub_825832F0(ctx, base);
	// bl 0x82da75f0
	ctx.lr = 0x82B5B79C;
	sub_82DA75F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b59740
	ctx.lr = 0x82B5B7A8;
	sub_82B59740(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b5b820
	if (!cr6.eq) goto loc_82B5B820;
	// lwz r10,236(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// li r11,148
	ctx.r11.s64 = 148;
	// lwz r9,232(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw. r7,r8,r11
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r11.s32);
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x82b5b820
	if (!cr0.eq) goto loc_82B5B820;
	// lwz r10,252(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// lwz r9,248(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw. r7,r8,r11
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r11.s32);
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x82b5b820
	if (!cr0.eq) goto loc_82B5B820;
	// bl 0x82d8a820
	ctx.lr = 0x82B5B7E4;
	sub_82D8A820(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b5b810
	if (!cr6.eq) goto loc_82B5B810;
	// bl 0x82d8a900
	ctx.lr = 0x82B5B7F4;
	sub_82D8A900(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b5b810
	if (!cr6.eq) goto loc_82B5B810;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r11,r11,15060
	ctx.r11.s64 = ctx.r11.s64 + 15060;
	// addi r5,r11,-8
	ctx.r5.s64 = ctx.r11.s64 + -8;
	// b 0x82b5b828
	goto loc_82B5B828;
loc_82B5B810:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r11,r11,15060
	ctx.r11.s64 = ctx.r11.s64 + 15060;
	// addi r5,r11,-28
	ctx.r5.s64 = ctx.r11.s64 + -28;
	// b 0x82b5b828
	goto loc_82B5B828;
loc_82B5B820:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r11,15060
	ctx.r5.s64 = ctx.r11.s64 + 15060;
loc_82B5B828:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82B5B834;
	sub_82D20DA8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b59618
	ctx.lr = 0x82B5B83C;
	sub_82B59618(ctx, base);
loc_82B5B83C:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B5B850"))) PPC_WEAK_FUNC(sub_82B5B850);
PPC_FUNC_IMPL(__imp__sub_82B5B850) {
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
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B5B868;
	sub_82D19A78(ctx, base);
	// bl 0x82d2b0f8
	ctx.lr = 0x82B5B86C;
	sub_82D2B0F8(ctx, base);
	// bl 0x82d390c0
	ctx.lr = 0x82B5B870;
	sub_82D390C0(ctx, base);
	// bl 0x82d86078
	ctx.lr = 0x82B5B874;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b5b988
	if (cr6.eq) goto loc_82B5B988;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832f0
	ctx.lr = 0x82B5B884;
	sub_825832F0(ctx, base);
	// bl 0x82da75f0
	ctx.lr = 0x82B5B888;
	sub_82DA75F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82b59740
	ctx.lr = 0x82B5B894;
	sub_82B59740(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,14920
	ctx.r4.s64 = ctx.r11.s64 + 14920;
	// bl 0x837b0c10
	ctx.lr = 0x82B5B8A4;
	sub_837B0C10(ctx, base);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfs f13,152(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// li r11,3
	ctx.r11.s64 = 3;
	// lfs f0,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82b5b8c0
	if (!cr6.gt) goto loc_82B5B8C0;
	// li r11,4
	ctx.r11.s64 = 4;
loc_82B5B8C0:
	// lfs f13,148(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82b5b8d0
	if (!cr6.gt) goto loc_82B5B8D0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82B5B8D0:
	// lfs f13,156(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82b5b8e0
	if (!cr6.gt) goto loc_82B5B8E0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82B5B8E0:
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// bl 0x82b142a0
	ctx.lr = 0x82B5B8F0;
	sub_82B142A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B5B8F8;
	sub_82D19A78(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82b5b90c
	if (!cr6.lt) goto loc_82B5B90C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82B5B90C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B5B920;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b5afa0
	ctx.lr = 0x82B5B928;
	sub_82B5AFA0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b5b1c8
	ctx.lr = 0x82B5B934;
	sub_82B5B1C8(ctx, base);
	// li r4,72
	ctx.r4.s64 = 72;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d17da0
	ctx.lr = 0x82B5B940;
	sub_82D17DA0(ctx, base);
	// bl 0x83a7d958
	ctx.lr = 0x82B5B944;
	sub_83A7D958(ctx, base);
	// bl 0x83524138
	ctx.lr = 0x82B5B948;
	sub_83524138(ctx, base);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// std r3,96(r31)
	PPC_STORE_U64(ctx.r31.u32 + 96, ctx.r3.u64);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82b5b96c
	if (cr6.lt) goto loc_82B5B96C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B5B96C;
	sub_825952B8(ctx, base);
loc_82B5B96C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// bl 0x82b59618
	ctx.lr = 0x82B5B988;
	sub_82B59618(ctx, base);
loc_82B5B988:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B5B9A0"))) PPC_WEAK_FUNC(sub_82B5B9A0);
PPC_FUNC_IMPL(__imp__sub_82B5B9A0) {
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
	// bl 0x82c33e58
	ctx.lr = 0x82B5B9B8;
	sub_82C33E58(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,16128
	ctx.r8.s64 = ctx.r10.s64 + 16128;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// bl 0x830fe8a0
	ctx.lr = 0x82B5B9F4;
	sub_830FE8A0(ctx, base);
	// std r3,104(r31)
	PPC_STORE_U64(ctx.r31.u32 + 104, ctx.r3.u64);
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

__attribute__((alias("__imp__sub_82B5BA10"))) PPC_WEAK_FUNC(sub_82B5BA10);
PPC_FUNC_IMPL(__imp__sub_82B5BA10) {
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
	// lwz r11,124(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b5ba78
	if (!cr6.eq) goto loc_82B5BA78;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d17d80
	ctx.lr = 0x82B5BA38;
	sub_82D17D80(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r3,r11,15792
	ctx.r3.s64 = ctx.r11.s64 + 15792;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2f6d8
	ctx.lr = 0x82B5BA54;
	sub_82D2F6D8(ctx, base);
	// stw r3,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b5ba78
	if (cr6.eq) goto loc_82B5BA78;
	// lis r4,515
	ctx.r4.s64 = 33751040;
	// ori r4,r4,37
	ctx.r4.u64 = ctx.r4.u64 | 37;
	// bl 0x82d2ada8
	ctx.lr = 0x82B5BA6C;
	sub_82D2ADA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,124(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// bl 0x83103100
	ctx.lr = 0x82B5BA78;
	sub_83103100(ctx, base);
loc_82B5BA78:
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

__attribute__((alias("__imp__sub_82B5BA8C"))) PPC_WEAK_FUNC(sub_82B5BA8C);
PPC_FUNC_IMPL(__imp__sub_82B5BA8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B5BA90"))) PPC_WEAK_FUNC(sub_82B5BA90);
PPC_FUNC_IMPL(__imp__sub_82B5BA90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,124(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// stw r11,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B5BAD0"))) PPC_WEAK_FUNC(sub_82B5BAD0);
PPC_FUNC_IMPL(__imp__sub_82B5BAD0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// beq cr6,0x82b5bb70
	if (cr6.eq) goto loc_82B5BB70;
	// addi r11,r4,29
	ctx.r11.s64 = ctx.r4.s64 + 29;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b5bb70
	if (cr6.eq) goto loc_82B5BB70;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r31,r11,15992
	ctx.r31.s64 = ctx.r11.s64 + 15992;
	// addi r4,r31,-48
	ctx.r4.s64 = ctx.r31.s64 + -48;
	// bl 0x82d2f098
	ctx.lr = 0x82B5BB10;
	sub_82D2F098(ctx, base);
	// addi r30,r3,100
	ctx.r30.s64 = ctx.r3.s64 + 100;
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2e228
	ctx.lr = 0x82B5BB20;
	sub_82D2E228(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2e228
	ctx.lr = 0x82B5BB30;
	sub_82D2E228(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2e228
	ctx.lr = 0x82B5BB40;
	sub_82D2E228(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// li r30,3
	ctx.r30.s64 = 3;
loc_82B5BB4C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b5bb64
	if (cr6.eq) goto loc_82B5BB64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82B5BB64;
	sub_82D2AEC8(ctx, base);
loc_82B5BB64:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82b5bb4c
	if (!cr0.eq) goto loc_82B5BB4C;
loc_82B5BB70:
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

__attribute__((alias("__imp__sub_82B5BB88"))) PPC_WEAK_FUNC(sub_82B5BB88);
PPC_FUNC_IMPL(__imp__sub_82B5BB88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B5BB90;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x830fe8c8
	ctx.lr = 0x82B5BBA0;
	sub_830FE8C8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x830fe8a0
	ctx.lr = 0x82B5BBA8;
	sub_830FE8A0(ctx, base);
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// tdllei r29,0
	// ld r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// subf r9,r11,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r11.s64;
	// mulli r8,r9,1000
	ctx.r8.s64 = ctx.r9.s64 * 1000;
	// divdu r7,r8,r29
	ctx.r7.u64 = PPCDivide(ctx.r8.u64, ctx.r29.u64);
	// cmpld cr6,r7,r10
	cr6.compare<uint64_t>(ctx.r7.u64, ctx.r10.u64, xer);
	// bge cr6,0x82b5bbd4
	if (!cr6.lt) goto loc_82B5BBD4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82B5BBD4:
	// bl 0x830fe8a0
	ctx.lr = 0x82B5BBD8;
	sub_830FE8A0(ctx, base);
	// std r3,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r3.u64);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B5BBE8"))) PPC_WEAK_FUNC(sub_82B5BBE8);
PPC_FUNC_IMPL(__imp__sub_82B5BBE8) {
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
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,16128
	ctx.r9.s64 = ctx.r11.s64 + 16128;
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
	// bl 0x82c33f40
	ctx.lr = 0x82B5BC20;
	sub_82C33F40(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82b5bc38
	if (cr6.eq) goto loc_82B5BC38;
	// bl 0x82416268
	ctx.lr = 0x82B5BC34;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B5BC38:
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

__attribute__((alias("__imp__sub_82B5BC50"))) PPC_WEAK_FUNC(sub_82B5BC50);
PPC_FUNC_IMPL(__imp__sub_82B5BC50) {
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
	// li r4,144
	ctx.r4.s64 = 144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B5BC84;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b5bcb8
	if (cr6.eq) goto loc_82B5BCB8;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b5bca8
	if (cr6.lt) goto loc_82B5BCA8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// bl 0x82b5b9a0
	ctx.lr = 0x82B5BCA4;
	sub_82B5B9A0(ctx, base);
	// b 0x82b5bcbc
	goto loc_82B5BCBC;
loc_82B5BCA8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lbz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// bl 0x82b5b9a0
	ctx.lr = 0x82B5BCB4;
	sub_82B5B9A0(ctx, base);
	// b 0x82b5bcbc
	goto loc_82B5BCBC;
loc_82B5BCB8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B5BCBC:
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

__attribute__((alias("__imp__sub_82B5BCD4"))) PPC_WEAK_FUNC(sub_82B5BCD4);
PPC_FUNC_IMPL(__imp__sub_82B5BCD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B5BCD8"))) PPC_WEAK_FUNC(sub_82B5BCD8);
PPC_FUNC_IMPL(__imp__sub_82B5BCD8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b5bd00
	if (cr6.lt) goto loc_82B5BD00;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b5bd04
	goto loc_82B5BD04;
loc_82B5BD00:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82B5BD04:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// stb r10,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r10.u8);
loc_82B5BD1C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b5bd1c
	if (!cr6.eq) goto loc_82B5BD1C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82B5BD40;
	sub_8259CC28(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82b5bc50
	ctx.lr = 0x82B5BD4C;
	sub_82B5BC50(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82b5bd70
	if (cr6.lt) goto loc_82B5BD70;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B5BD70;
	sub_825952B8(ctx, base);
loc_82B5BD70:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82B5BD88"))) PPC_WEAK_FUNC(sub_82B5BD88);
PPC_FUNC_IMPL(__imp__sub_82B5BD88) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82B5BDA4;
	sub_82D19A68(ctx, base);
	// bl 0x82d2ec40
	ctx.lr = 0x82B5BDA8;
	sub_82D2EC40(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
	// beq cr6,0x82b5bec4
	if (cr6.eq) goto loc_82B5BEC4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82B5BDBC;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r3.u32);
	// beq cr6,0x82b5bec4
	if (cr6.eq) goto loc_82B5BEC4;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x82d33db0
	ctx.lr = 0x82B5BDD4;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r3.u32);
	// beq cr6,0x82b5bec4
	if (cr6.eq) goto loc_82B5BEC4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B5BDF0;
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
	ctx.lr = 0x82B5BE10;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83102db0
	ctx.lr = 0x82B5BE1C;
	sub_83102DB0(ctx, base);
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r30,r11,15780
	ctx.r30.s64 = ctx.r11.s64 + 15780;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,-36
	ctx.r4.s64 = ctx.r30.s64 + -36;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B5BE40;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// addi r4,r30,-72
	ctx.r4.s64 = ctx.r30.s64 + -72;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,72(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 72);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82B5BE5C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// addi r4,r30,-20
	ctx.r4.s64 = ctx.r30.s64 + -20;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B5BE78;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b5bad0
	ctx.lr = 0x82B5BE84;
	sub_82B5BAD0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b5bad0
	ctx.lr = 0x82B5BE90;
	sub_82B5BAD0(ctx, base);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r31,r11,100
	ctx.r31.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x82b5bea4
	if (!cr6.eq) goto loc_82B5BEA4;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82B5BEA4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82B5BEB0;
	sub_837B0C10(ctx, base);
	// lis r5,515
	ctx.r5.s64 = 33751040;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r5,r5,61
	ctx.r5.u64 = ctx.r5.u64 | 61;
	// bl 0x82a69a28
	ctx.lr = 0x82B5BEC4;
	sub_82A69A28(ctx, base);
loc_82B5BEC4:
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_82B5BEE0"))) PPC_WEAK_FUNC(sub_82B5BEE0);
PPC_FUNC_IMPL(__imp__sub_82B5BEE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82B5BEE8;
	__savegprlr_25(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// beq cr6,0x82b5c0c8
	if (cr6.eq) goto loc_82B5C0C8;
	// addi r11,r4,29
	ctx.r11.s64 = ctx.r4.s64 + 29;
	// rlwinm r25,r11,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r25,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r3.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b5c0c8
	if (cr6.eq) goto loc_82B5C0C8;
	// bl 0x830ff290
	ctx.lr = 0x82B5BF14;
	sub_830FF290(ctx, base);
	// lwz r9,132(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 132);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpw cr6,r26,r9
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r9.s32, xer);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// bne cr6,0x82b5bf2c
	if (!cr6.eq) goto loc_82B5BF2C;
	// li r10,1
	ctx.r10.s64 = 1;
loc_82B5BF2C:
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// li r30,-1
	ctx.r30.s64 = -1;
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b5bfa8
	if (cr6.eq) goto loc_82B5BFA8;
	// stw r9,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r9.u32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// stb r11,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r11.u8);
	// bl 0x82d86078
	ctx.lr = 0x82B5BF6C;
	sub_82D86078(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// bl 0x82da90b8
	ctx.lr = 0x82B5BF78;
	sub_82DA90B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b5bf9c
	if (cr6.eq) goto loc_82B5BF9C;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82B5BF98;
	sub_8259CB28(ctx, base);
	// lwz r31,128(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
loc_82B5BF9C:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x838760e0
	ctx.lr = 0x82B5BFA4;
	sub_838760E0(ctx, base);
	// b 0x82b5c000
	goto loc_82B5C000;
loc_82B5BFA8:
	// bl 0x82d86078
	ctx.lr = 0x82B5BFAC;
	sub_82D86078(ctx, base);
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832f0
	ctx.lr = 0x82B5BFB4;
	sub_825832F0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82da75d8
	ctx.lr = 0x82B5BFBC;
	sub_82DA75D8(ctx, base);
	// addi r4,r3,2800
	ctx.r4.s64 = ctx.r3.s64 + 2800;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82da8fd0
	ctx.lr = 0x82B5BFC8;
	sub_82DA8FD0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,164
	ctx.r4.s64 = ctx.r1.s64 + 164;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82B5BFDC;
	sub_8259CB28(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r31,192(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82da75d8
	ctx.lr = 0x82B5BFE8;
	sub_82DA75D8(ctx, base);
	// lwz r29,72(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82da75d8
	ctx.lr = 0x82B5BFF4;
	sub_82DA75D8(ctx, base);
	// lwz r28,4(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82da8c38
	ctx.lr = 0x82B5C000;
	sub_82DA8C38(ctx, base);
loc_82B5C000:
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(ctx.r31.s32, -1, xer);
	// beq cr6,0x82b5c034
	if (cr6.eq) goto loc_82B5C034;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e73938
	ctx.lr = 0x82B5C010;
	sub_82E73938(ctx, base);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c342e8
	ctx.lr = 0x82B5C030;
	sub_82C342E8(ctx, base);
	// b 0x82b5c064
	goto loc_82B5C064;
loc_82B5C034:
	// lis r11,3
	ctx.r11.s64 = 196608;
	// clrlwi r10,r29,14
	ctx.r10.u64 = ctx.r29.u32 & 0x3FFFF;
	// ori r9,r11,65535
	ctx.r9.u64 = ctx.r11.u64 | 65535;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// cmplw cr6,r29,r9
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r9.u32, xer);
	// ble cr6,0x82b5c050
	if (!cr6.gt) goto loc_82B5C050;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
loc_82B5C050:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c340c0
	ctx.lr = 0x82B5C064;
	sub_82C340C0(ctx, base);
loc_82B5C064:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d8bb28
	ctx.lr = 0x82B5C06C;
	sub_82D8BB28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b5c0a0
	if (!cr6.eq) goto loc_82B5C0A0;
	// bl 0x82d8a798
	ctx.lr = 0x82B5C07C;
	sub_82D8A798(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b5c0a0
	if (!cr6.eq) goto loc_82B5C0A0;
	// cmpwi cr6,r28,-1
	cr6.compare<int32_t>(ctx.r28.s32, -1, xer);
	// beq cr6,0x82b5c0a0
	if (cr6.eq) goto loc_82B5C0A0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c34430
	ctx.lr = 0x82B5C0A0;
	sub_82C34430(ctx, base);
loc_82B5C0A0:
	// lwzx r3,r25,r27
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r27.u32);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,16024
	ctx.r4.s64 = ctx.r11.s64 + 16024;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B5C0C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82B5C0C8;
	sub_8387E8E0(ctx, base);
loc_82B5C0C8:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B5C0D0"))) PPC_WEAK_FUNC(sub_82B5C0D0);
PPC_FUNC_IMPL(__imp__sub_82B5C0D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82B5C0D8;
	__savegprlr_27(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bgt cr6,0x82b5c498
	if (cr6.gt) goto loc_82B5C498;
	// lis r12,-32074
	ctx.r12.s64 = -2102001664;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-16116
	ctx.r12.s64 = ctx.r12.s64 + -16116;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82B5C13C;
	case 1:
		goto loc_82B5C1BC;
	case 2:
		goto loc_82B5C234;
	case 3:
		goto loc_82B5C27C;
	case 4:
		goto loc_82B5C37C;
	case 5:
		goto loc_82B5C388;
	case 6:
		goto loc_82B5C3F4;
	case 7:
		goto loc_82B5C424;
	case 8:
		goto loc_82B5C438;
	case 9:
		goto loc_82B5C44C;
	case 10:
		goto loc_82B5C460;
	case 11:
		goto loc_82B5C47C;
	default:
		return;
	}
	// lwz r21,-16068(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + -16068);
	// lwz r21,-15940(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + -15940);
	// lwz r21,-15820(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + -15820);
	// lwz r21,-15748(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + -15748);
	// lwz r21,-15492(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + -15492);
	// lwz r21,-15480(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + -15480);
	// lwz r21,-15372(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + -15372);
	// lwz r21,-15324(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + -15324);
	// lwz r21,-15304(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + -15304);
	// lwz r21,-15284(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + -15284);
	// lwz r21,-15264(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + -15264);
	// lwz r21,-15236(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + -15236);
loc_82B5C13C:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r29,r11,100
	ctx.r29.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x82b5c150
	if (!cr6.eq) goto loc_82B5C150;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_82B5C150:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r30,r11,16008
	ctx.r30.s64 = ctx.r11.s64 + 16008;
	// addi r4,r30,-196
	ctx.r4.s64 = ctx.r30.s64 + -196;
	// bl 0x837b0c10
	ctx.lr = 0x82B5C164;
	sub_837B0C10(ctx, base);
	// lis r5,515
	ctx.r5.s64 = 33751040;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r5,r5,61
	ctx.r5.u64 = ctx.r5.u64 | 61;
	// bl 0x82a69a28
	ctx.lr = 0x82B5C178;
	sub_82A69A28(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b5bee0
	ctx.lr = 0x82B5C184;
	sub_82B5BEE0(ctx, base);
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b5c1b0
	if (cr6.eq) goto loc_82B5C1B0;
	// bl 0x830ff290
	ctx.lr = 0x82B5C194;
	sub_830FF290(ctx, base);
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B5C1B0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B5C1B0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// b 0x82b5c4b4
	goto loc_82B5C4B4;
loc_82B5C1BC:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r4,r31,104
	ctx.r4.s64 = ctx.r31.s64 + 104;
	// addi r29,r11,16008
	ctx.r29.s64 = ctx.r11.s64 + 16008;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r29,-280
	ctx.r5.s64 = ctx.r29.s64 + -280;
	// bl 0x82b5bb88
	ctx.lr = 0x82B5C1D4;
	sub_82B5BB88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b5c4b4
	if (cr6.eq) goto loc_82B5C4B4;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r30,r11,100
	ctx.r30.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x82b5c1f4
	if (!cr6.eq) goto loc_82B5C1F4;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_82B5C1F4:
	// addi r4,r29,-184
	ctx.r4.s64 = ctx.r29.s64 + -184;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x837b0c10
	ctx.lr = 0x82B5C200;
	sub_837B0C10(ctx, base);
	// lis r5,515
	ctx.r5.s64 = 33751040;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r5,r5,62
	ctx.r5.u64 = ctx.r5.u64 | 62;
	// bl 0x82a69a28
	ctx.lr = 0x82B5C214;
	sub_82A69A28(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B5C22C;
	sub_82D19788(ctx, base);
	// li r28,1
	ctx.r28.s64 = 1;
	// b 0x82b5c4b4
	goto loc_82B5C4B4;
loc_82B5C234:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,16008
	ctx.r11.s64 = ctx.r11.s64 + 16008;
	// addi r4,r11,-172
	ctx.r4.s64 = ctx.r11.s64 + -172;
	// bl 0x837b0c10
	ctx.lr = 0x82B5C248;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x82B5C254;
	sub_82D894E0(ctx, base);
	// stw r3,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82B5C260;
	sub_8387E8E0(ctx, base);
	// lwz r10,136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r8,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r7,r11,11
	ctx.r7.s64 = ctx.r11.s64 + 11;
	// stw r7,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r7.u32);
	// b 0x82b5c4b4
	goto loc_82B5C4B4;
loc_82B5C27C:
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// bl 0x82ddcec8
	ctx.lr = 0x82B5C284;
	sub_82DDCEC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82b5c4b4
	if (cr6.eq) goto loc_82B5C4B4;
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b5c2b0
	if (cr6.eq) goto loc_82B5C2B0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B5C2AC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r27,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r27.u32);
loc_82B5C2B0:
	// li r28,1
	ctx.r28.s64 = 1;
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x82b5c2ec
	if (!cr6.eq) goto loc_82B5C2EC;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// bl 0x82d86078
	ctx.lr = 0x82B5C2C8;
	sub_82D86078(ctx, base);
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832f0
	ctx.lr = 0x82B5C2D0;
	sub_825832F0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82da75d8
	ctx.lr = 0x82B5C2D8;
	sub_82DA75D8(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subfic r9,r10,1
	xer.ca = ctx.r10.u32 <= 1;
	ctx.r9.s64 = 1 - ctx.r10.s64;
	// stw r9,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r9.u32);
	// stb r28,5776(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5776, ctx.r28.u8);
	// b 0x82b5c2f4
	goto loc_82B5C2F4;
loc_82B5C2EC:
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
loc_82B5C2F4:
	// bl 0x82d26ed8
	ctx.lr = 0x82B5C2F8;
	sub_82D26ED8(ctx, base);
	// li r4,59
	ctx.r4.s64 = 59;
	// bl 0x82d26b18
	ctx.lr = 0x82B5C300;
	sub_82D26B18(ctx, base);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r29,r11,100
	ctx.r29.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x82b5c314
	if (!cr6.eq) goto loc_82B5C314;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_82B5C314:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r30,r11,16008
	ctx.r30.s64 = ctx.r11.s64 + 16008;
	// addi r4,r30,-144
	ctx.r4.s64 = ctx.r30.s64 + -144;
	// bl 0x837b0c10
	ctx.lr = 0x82B5C328;
	sub_837B0C10(ctx, base);
	// lis r5,510
	ctx.r5.s64 = 33423360;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r5,r5,3
	ctx.r5.u64 = ctx.r5.u64 | 3;
	// bl 0x82a69a28
	ctx.lr = 0x82B5C33C;
	sub_82A69A28(ctx, base);
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b5c360
	if (cr6.eq) goto loc_82B5C360;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,-132
	ctx.r4.s64 = ctx.r30.s64 + -132;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B5C360;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B5C360:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b5bee0
	ctx.lr = 0x82B5C36C;
	sub_82B5BEE0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b5bee0
	ctx.lr = 0x82B5C378;
	sub_82B5BEE0(ctx, base);
	// b 0x82b5c4b4
	goto loc_82B5C4B4;
loc_82B5C37C:
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// b 0x82b5c4b4
	goto loc_82B5C4B4;
loc_82B5C388:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r4,r31,104
	ctx.r4.s64 = ctx.r31.s64 + 104;
	// addi r11,r11,16008
	ctx.r11.s64 = ctx.r11.s64 + 16008;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-280
	ctx.r5.s64 = ctx.r11.s64 + -280;
	// bl 0x82b5bb88
	ctx.lr = 0x82B5C3A0;
	sub_82B5BB88(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b5c4b4
	if (cr6.eq) goto loc_82B5C4B4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c340b0
	ctx.lr = 0x82B5C3B8;
	sub_82C340B0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b5c3e8
	if (!cr6.eq) goto loc_82B5C3E8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c340b0
	ctx.lr = 0x82B5C3D0;
	sub_82C340B0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b5c3e8
	if (!cr6.eq) goto loc_82B5C3E8;
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// b 0x82b5c4b4
	goto loc_82B5C4B4;
loc_82B5C3E8:
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// b 0x82b5c4b4
	goto loc_82B5C4B4;
loc_82B5C3F4:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r4,r31,104
	ctx.r4.s64 = ctx.r31.s64 + 104;
	// addi r11,r11,16008
	ctx.r11.s64 = ctx.r11.s64 + 16008;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-272
	ctx.r5.s64 = ctx.r11.s64 + -272;
	// bl 0x82b5bb88
	ctx.lr = 0x82B5C40C;
	sub_82B5BB88(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b5c4b4
	if (cr6.eq) goto loc_82B5C4B4;
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// b 0x82b5c4b4
	goto loc_82B5C4B4;
loc_82B5C424:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,16008
	ctx.r11.s64 = ctx.r11.s64 + 16008;
	// addi r5,r11,-112
	ctx.r5.s64 = ctx.r11.s64 + -112;
	// b 0x82b5c4a8
	goto loc_82B5C4A8;
loc_82B5C438:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r11,r11,16008
	ctx.r11.s64 = ctx.r11.s64 + 16008;
	// addi r5,r11,-104
	ctx.r5.s64 = ctx.r11.s64 + -104;
	// b 0x82b5c4ac
	goto loc_82B5C4AC;
loc_82B5C44C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r11,r11,16008
	ctx.r11.s64 = ctx.r11.s64 + 16008;
	// addi r5,r11,-96
	ctx.r5.s64 = ctx.r11.s64 + -96;
	// b 0x82b5c4ac
	goto loc_82B5C4AC;
loc_82B5C460:
	// bl 0x82d26ed8
	ctx.lr = 0x82B5C464;
	sub_82D26ED8(ctx, base);
	// li r4,60
	ctx.r4.s64 = 60;
	// bl 0x82d26b18
	ctx.lr = 0x82B5C46C;
	sub_82D26B18(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r11,r11,16008
	ctx.r11.s64 = ctx.r11.s64 + 16008;
	// addi r5,r11,-88
	ctx.r5.s64 = ctx.r11.s64 + -88;
	// b 0x82b5c4a4
	goto loc_82B5C4A4;
loc_82B5C47C:
	// bl 0x82d26ed8
	ctx.lr = 0x82B5C480;
	sub_82D26ED8(ctx, base);
	// li r4,60
	ctx.r4.s64 = 60;
	// bl 0x82d26b18
	ctx.lr = 0x82B5C488;
	sub_82D26B18(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r11,r11,16008
	ctx.r11.s64 = ctx.r11.s64 + 16008;
	// addi r5,r11,-80
	ctx.r5.s64 = ctx.r11.s64 + -80;
	// b 0x82b5c4a4
	goto loc_82B5C4A4;
loc_82B5C498:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r11,r11,16008
	ctx.r11.s64 = ctx.r11.s64 + 16008;
	// addi r5,r11,-72
	ctx.r5.s64 = ctx.r11.s64 + -72;
loc_82B5C4A4:
	// li r4,1
	ctx.r4.s64 = 1;
loc_82B5C4A8:
	// li r28,1
	ctx.r28.s64 = 1;
loc_82B5C4AC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82B5C4B4;
	sub_82D20DA8(ctx, base);
loc_82B5C4B4:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b5c4d4
	if (cr6.eq) goto loc_82B5C4D4;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b5c4d4
	if (cr6.eq) goto loc_82B5C4D4;
	// bl 0x82d29e18
	ctx.lr = 0x82B5C4D0;
	sub_82D29E18(ctx, base);
	// stw r27,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r27.u32);
loc_82B5C4D4:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B5C4DC"))) PPC_WEAK_FUNC(sub_82B5C4DC);
PPC_FUNC_IMPL(__imp__sub_82B5C4DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B5C4E0"))) PPC_WEAK_FUNC(sub_82B5C4E0);
PPC_FUNC_IMPL(__imp__sub_82B5C4E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab8
	ctx.lr = 0x82B5C4E8;
	__savegprlr_16(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// bl 0x82d253f8
	ctx.lr = 0x82B5C508;
	sub_82D253F8(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// stb r30,112(r31)
	PPC_STORE_U8(ctx.r31.u32 + 112, ctx.r30.u8);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r9,r11,17104
	ctx.r9.s64 = ctx.r11.s64 + 17104;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stb r26,113(r31)
	PPC_STORE_U8(ctx.r31.u32 + 113, ctx.r26.u8);
	// li r18,1
	ctx.r18.s64 = 1;
	// stb r26,115(r31)
	PPC_STORE_U8(ctx.r31.u32 + 115, ctx.r26.u8);
	// stb r26,116(r31)
	PPC_STORE_U8(ctx.r31.u32 + 116, ctx.r26.u8);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// stb r26,117(r31)
	PPC_STORE_U8(ctx.r31.u32 + 117, ctx.r26.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r27,r11,6572
	ctx.r27.s64 = ctx.r11.s64 + 6572;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// stb r18,114(r31)
	PPC_STORE_U8(ctx.r31.u32 + 114, ctx.r18.u8);
	// lwz r4,8(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// bl 0x82d20ae0
	ctx.lr = 0x82B5C554;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x82d20ae0
	ctx.lr = 0x82B5C560;
	sub_82D20AE0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// bl 0x82d23390
	ctx.lr = 0x82B5C570;
	sub_82D23390(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// addi r16,r31,122
	ctx.r16.s64 = ctx.r31.s64 + 122;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// li r10,32
	ctx.r10.s64 = 32;
loc_82B5C584:
	// stbx r10,r16,r11
	PPC_STORE_U8(ctx.r16.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82b5c584
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B5C584;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// li r19,4
	ctx.r19.s64 = 4;
	// li r20,4
	ctx.r20.s64 = 4;
	// bl 0x831156e8
	ctx.lr = 0x82B5C5A0;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r17,0(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8308e078
	ctx.lr = 0x82B5C5AC;
	sub_8308E078(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// bl 0x830ff290
	ctx.lr = 0x82B5C5B4;
	sub_830FF290(ctx, base);
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r10,11
	cr6.compare<uint32_t>(ctx.r10.u32, 11, xer);
	// bne cr6,0x82b5c5fc
	if (!cr6.eq) goto loc_82B5C5FC;
	// stb r18,116(r31)
	PPC_STORE_U8(ctx.r31.u32 + 116, ctx.r18.u8);
	// bl 0x831156e8
	ctx.lr = 0x82B5C5C8;
	sub_831156E8(ctx, base);
	// lbz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 112);
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// addis r11,r10,5
	ctx.r11.s64 = ctx.r10.s64 + 327680;
	// addi r11,r11,14904
	ctx.r11.s64 = ctx.r11.s64 + 14904;
	// bne cr6,0x82b5c5e8
	if (!cr6.eq) goto loc_82B5C5E8;
	// stb r18,20163(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20163, ctx.r18.u8);
	// b 0x82b5c5fc
	goto loc_82B5C5FC;
loc_82B5C5E8:
	// lbz r11,20163(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20163);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r9,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// stb r9,117(r31)
	PPC_STORE_U8(ctx.r31.u32 + 117, ctx.r9.u8);
loc_82B5C5FC:
	// bl 0x831156e8
	ctx.lr = 0x82B5C600;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// addis r24,r11,6
	ctx.r24.s64 = ctx.r11.s64 + 393216;
	// addi r25,r31,118
	ctx.r25.s64 = ctx.r31.s64 + 118;
	// addi r28,r31,92
	ctx.r28.s64 = ctx.r31.s64 + 92;
	// addi r24,r24,-30316
	ctx.r24.s64 = ctx.r24.s64 + -30316;
loc_82B5C618:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// add r10,r11,r24
	ctx.r10.u64 = ctx.r11.u64 + ctx.r24.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r30,r21
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r21.u32, xer);
	// lbz r11,45(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 45);
	// stbx r11,r25,r30
	PPC_STORE_U8(ctx.r25.u32 + ctx.r30.u32, ctx.r11.u8);
	// bne cr6,0x82b5c644
	if (!cr6.eq) goto loc_82B5C644;
	// mr r7,r17
	ctx.r7.u64 = ctx.r17.u64;
	// b 0x82b5c650
	goto loc_82B5C650;
loc_82B5C644:
	// cmplw cr6,r7,r17
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r17.u32, xer);
	// bne cr6,0x82b5c650
	if (!cr6.eq) goto loc_82B5C650;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_82B5C650:
	// lbz r5,112(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 112);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82b5c6c8
	if (!cr6.eq) goto loc_82B5C6C8;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82b5c680
	if (!cr6.eq) goto loc_82B5C680;
	// cmplwi cr6,r19,4
	cr6.compare<uint32_t>(ctx.r19.u32, 4, xer);
	// bne cr6,0x82b5c698
	if (!cr6.eq) goto loc_82B5C698;
	// mr r19,r30
	ctx.r19.u64 = ctx.r30.u64;
	// mr r8,r18
	ctx.r8.u64 = ctx.r18.u64;
	// b 0x82b5c698
	goto loc_82B5C698;
loc_82B5C680:
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x82b5c698
	if (!cr6.eq) goto loc_82B5C698;
	// cmplwi cr6,r20,4
	cr6.compare<uint32_t>(ctx.r20.u32, 4, xer);
	// bne cr6,0x82b5c698
	if (!cr6.eq) goto loc_82B5C698;
	// mr r20,r30
	ctx.r20.u64 = ctx.r30.u64;
	// li r8,2
	ctx.r8.s64 = 2;
loc_82B5C698:
	// lbz r9,116(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 116);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x82b5c6c8
	if (!cr6.eq) goto loc_82B5C6C8;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82b5c6b8
	if (!cr6.eq) goto loc_82B5C6B8;
	// lbz r11,69(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 69);
	// stb r11,0(r16)
	PPC_STORE_U8(ctx.r16.u32 + 0, ctx.r11.u8);
	// b 0x82b5c6c8
	goto loc_82B5C6C8;
loc_82B5C6B8:
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x82b5c6c8
	if (!cr6.eq) goto loc_82B5C6C8;
	// lbz r11,69(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 69);
	// stb r11,123(r31)
	PPC_STORE_U8(ctx.r31.u32 + 123, ctx.r11.u8);
loc_82B5C6C8:
	// lbz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 116);
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82b5c6f0
	if (!cr6.eq) goto loc_82B5C6F0;
	// addi r11,r6,-1
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// subfic r11,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r4,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 & ctx.r9.u64;
loc_82B5C6F0:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82c35a80
	ctx.lr = 0x82B5C700;
	sub_82C35A80(ctx, base);
	// stwu r3,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r28.u32 = ea;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r4,4(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d238b8
	ctx.lr = 0x82B5C718;
	sub_82D238B8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(ctx.r30.s32, 4, xer);
	// blt cr6,0x82b5c618
	if (cr6.lt) goto loc_82B5C618;
	// lbz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 116);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b5c748
	if (!cr6.eq) goto loc_82B5C748;
	// bl 0x831156e8
	ctx.lr = 0x82B5C734;
	sub_831156E8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,52(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bl 0x8312ae08
	ctx.lr = 0x82B5C740;
	sub_8312AE08(ctx, base);
	// stb r3,115(r31)
	PPC_STORE_U8(ctx.r31.u32 + 115, ctx.r3.u8);
	// b 0x82b5c74c
	goto loc_82B5C74C;
loc_82B5C748:
	// stb r26,115(r31)
	PPC_STORE_U8(ctx.r31.u32 + 115, ctx.r26.u8);
loc_82B5C74C:
	// lbz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 112);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b5c768
	if (cr6.eq) goto loc_82B5C768;
	// li r4,17
	ctx.r4.s64 = 17;
	// bl 0x82d17da0
	ctx.lr = 0x82B5C764;
	sub_82D17DA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B5C768:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B5C770"))) PPC_WEAK_FUNC(sub_82B5C770);
PPC_FUNC_IMPL(__imp__sub_82B5C770) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82B5C778;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d273d8
	ctx.lr = 0x82B5C784;
	sub_82D273D8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b5c9ac
	if (cr6.eq) goto loc_82B5C9AC;
	// bl 0x82d27440
	ctx.lr = 0x82B5C790;
	sub_82D27440(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r31,r30,96
	ctx.r31.s64 = ctx.r30.s64 + 96;
	// li r29,4
	ctx.r29.s64 = 4;
loc_82B5C7AC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r28,r3
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r3.u32, xer);
	// bne cr6,0x82b5c7bc
	if (!cr6.eq) goto loc_82B5C7BC;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82B5C7BC:
	// lbz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b5c80c
	if (cr6.eq) goto loc_82B5C80C;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82d19840
	ctx.lr = 0x82B5C7D0;
	sub_82D19840(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x82b5c7f4
	if (!cr6.eq) goto loc_82B5C7F4;
	// lbz r11,116(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 116);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b5c7f0
	if (cr6.eq) goto loc_82B5C7F0;
	// lbz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b5c7f4
	if (!cr6.eq) goto loc_82B5C7F4;
loc_82B5C7F0:
	// li r26,1
	ctx.r26.s64 = 1;
loc_82B5C7F4:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82d19840
	ctx.lr = 0x82B5C800;
	sub_82D19840(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x82b5c80c
	if (!cr6.eq) goto loc_82B5C80C;
	// li r25,1
	ctx.r25.s64 = 1;
loc_82B5C80C:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82b5c7ac
	if (!cr0.eq) goto loc_82B5C7AC;
	// lbz r11,114(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 114);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b5c834
	if (!cr6.eq) goto loc_82B5C834;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b5c834
	if (cr6.eq) goto loc_82B5C834;
	// li r24,1
	ctx.r24.s64 = 1;
loc_82B5C834:
	// clrlwi r31,r26,24
	ctx.r31.u64 = ctx.r26.u32 & 0xFF;
	// stb r27,114(r30)
	PPC_STORE_U8(ctx.r30.u32 + 114, ctx.r27.u8);
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// bne cr6,0x82b5c8e4
	if (!cr6.eq) goto loc_82B5C8E4;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19840
	ctx.lr = 0x82B5C850;
	sub_82D19840(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82b5c864
	if (cr6.eq) goto loc_82B5C864;
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b5c8e4
	if (cr6.eq) goto loc_82B5C8E4;
loc_82B5C864:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B5C874;
	sub_82D19788(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r5,69
	ctx.r5.s64 = 4521984;
	// li r4,2
	ctx.r4.s64 = 2;
	// ori r5,r5,32
	ctx.r5.u64 = ctx.r5.u64 | 32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B5C894;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r9,116(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 116);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82b5c920
	if (!cr6.eq) goto loc_82B5C920;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d19788
	ctx.lr = 0x82B5C8B0;
	sub_82D19788(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B5C8C0;
	sub_82D19788(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r5,69
	ctx.r5.s64 = 4521984;
	// li r4,15
	ctx.r4.s64 = 15;
	// ori r5,r5,9
	ctx.r5.u64 = ctx.r5.u64 | 9;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B5C8E0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82b5c930
	goto loc_82B5C930;
loc_82B5C8E4:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x82b5c930
	if (!cr6.eq) goto loc_82B5C930;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19840
	ctx.lr = 0x82B5C8F8;
	sub_82D19840(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x82b5c90c
	if (cr6.eq) goto loc_82B5C90C;
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b5c930
	if (cr6.eq) goto loc_82B5C930;
loc_82B5C90C:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d198e0
	ctx.lr = 0x82B5C918;
	sub_82D198E0(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82B5C920:
	// bl 0x82d198e0
	ctx.lr = 0x82B5C924;
	sub_82D198E0(ctx, base);
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d198e0
	ctx.lr = 0x82B5C930;
	sub_82D198E0(ctx, base);
loc_82B5C930:
	// clrlwi r31,r25,24
	ctx.r31.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// bne cr6,0x82b5c974
	if (!cr6.eq) goto loc_82B5C974;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19840
	ctx.lr = 0x82B5C948;
	sub_82D19840(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82b5c95c
	if (cr6.eq) goto loc_82B5C95C;
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b5c974
	if (cr6.eq) goto loc_82B5C974;
loc_82B5C95C:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B5C96C;
	sub_82D19788(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82B5C974:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x82b5c9ac
	if (!cr6.eq) goto loc_82B5C9AC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19840
	ctx.lr = 0x82B5C988;
	sub_82D19840(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x82b5c99c
	if (cr6.eq) goto loc_82B5C99C;
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b5c9ac
	if (cr6.eq) goto loc_82B5C9AC;
loc_82B5C99C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B5C9AC;
	sub_82D19788(ctx, base);
loc_82B5C9AC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B5C9B4"))) PPC_WEAK_FUNC(sub_82B5C9B4);
PPC_FUNC_IMPL(__imp__sub_82B5C9B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B5C9B8"))) PPC_WEAK_FUNC(sub_82B5C9B8);
PPC_FUNC_IMPL(__imp__sub_82B5C9B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82B5C9C0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r31,r3,96
	ctx.r31.s64 = ctx.r3.s64 + 96;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// li r30,4
	ctx.r30.s64 = 4;
loc_82B5C9DC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82c35348
	ctx.lr = 0x82B5C9E4;
	sub_82C35348(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b5c9f4
	if (cr6.eq) goto loc_82B5C9F4;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82B5C9F4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82c353d0
	ctx.lr = 0x82B5C9FC;
	sub_82C353D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b5ca0c
	if (cr6.eq) goto loc_82B5CA0C;
	// li r28,1
	ctx.r28.s64 = 1;
loc_82B5CA0C:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82b5c9dc
	if (!cr0.eq) goto loc_82B5C9DC;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b5ca38
	if (cr6.eq) goto loc_82B5CA38;
	// bl 0x831156e8
	ctx.lr = 0x82B5CA28;
	sub_831156E8(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// ori r9,r11,30360
	ctx.r9.u64 = ctx.r11.u64 | 30360;
	// stbx r26,r10,r9
	PPC_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r26.u8);
loc_82B5CA38:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b5ca60
	if (cr6.eq) goto loc_82B5CA60;
	// lbz r11,112(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b5ca60
	if (!cr6.eq) goto loc_82B5CA60;
	// bl 0x831156e8
	ctx.lr = 0x82B5CA54;
	sub_831156E8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// bl 0x8312b9a8
	ctx.lr = 0x82B5CA60;
	sub_8312B9A8(ctx, base);
loc_82B5CA60:
	// bl 0x831156e8
	ctx.lr = 0x82B5CA64;
	sub_831156E8(ctx, base);
	// lbz r11,117(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 117);
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// addis r11,r10,5
	ctx.r11.s64 = ctx.r10.s64 + 327680;
	// addi r11,r11,14904
	ctx.r11.s64 = ctx.r11.s64 + 14904;
	// bne cr6,0x82b5ca88
	if (!cr6.eq) goto loc_82B5CA88;
	// stb r26,20163(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20163, ctx.r26.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82B5CA88:
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,20163(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20163, ctx.r10.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B5CA98"))) PPC_WEAK_FUNC(sub_82B5CA98);
PPC_FUNC_IMPL(__imp__sub_82B5CA98) {
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
	// addi r31,r3,96
	ctx.r31.s64 = ctx.r3.s64 + 96;
loc_82B5CAB4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82c34db0
	ctx.lr = 0x82B5CABC;
	sub_82C34DB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b5cad8
	if (cr6.eq) goto loc_82B5CAD8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 96);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b5cb04
	if (cr6.eq) goto loc_82B5CB04;
loc_82B5CAD8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(ctx.r30.s32, 4, xer);
	// blt cr6,0x82b5cab4
	if (cr6.lt) goto loc_82B5CAB4;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82B5CAEC:
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
loc_82B5CB04:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82b5caec
	goto loc_82B5CAEC;
}

__attribute__((alias("__imp__sub_82B5CB0C"))) PPC_WEAK_FUNC(sub_82B5CB0C);
PPC_FUNC_IMPL(__imp__sub_82B5CB0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B5CB10"))) PPC_WEAK_FUNC(sub_82B5CB10);
PPC_FUNC_IMPL(__imp__sub_82B5CB10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B5CB18;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,115(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 115);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b5cb38
	if (!cr6.eq) goto loc_82B5CB38;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82B5CB38:
	// li r29,3
	ctx.r29.s64 = 3;
	// addi r31,r3,96
	ctx.r31.s64 = ctx.r3.s64 + 96;
	// li r30,4
	ctx.r30.s64 = 4;
loc_82B5CB44:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82c35320
	ctx.lr = 0x82B5CB4C;
	sub_82C35320(ctx, base);
	// cmpw cr6,r3,r28
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r28.s32, xer);
	// bne cr6,0x82b5cb58
	if (!cr6.eq) goto loc_82B5CB58;
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
loc_82B5CB58:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82b5cb44
	if (!cr0.eq) goto loc_82B5CB44;
	// neg r11,r29
	ctx.r11.s64 = -ctx.r29.s64;
	// andc r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 & ~ctx.r29.u64;
	// rlwinm r3,r10,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B5CB78"))) PPC_WEAK_FUNC(sub_82B5CB78);
PPC_FUNC_IMPL(__imp__sub_82B5CB78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B5CB80;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 116);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b5cba0
	if (!cr6.eq) goto loc_82B5CBA0;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82B5CBA0:
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r31,r3,96
	ctx.r31.s64 = ctx.r3.s64 + 96;
	// li r30,4
	ctx.r30.s64 = 4;
loc_82B5CBAC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82c35320
	ctx.lr = 0x82B5CBB4;
	sub_82C35320(ctx, base);
	// cmpw cr6,r3,r28
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r28.s32, xer);
	// bne cr6,0x82b5cbc0
	if (!cr6.eq) goto loc_82B5CBC0;
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
loc_82B5CBC0:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82b5cbac
	if (!cr0.eq) goto loc_82B5CBAC;
	// neg r11,r29
	ctx.r11.s64 = -ctx.r29.s64;
	// andc r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 & ~ctx.r29.u64;
	// rlwinm r3,r10,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B5CBE0"))) PPC_WEAK_FUNC(sub_82B5CBE0);
PPC_FUNC_IMPL(__imp__sub_82B5CBE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82B5CBE8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,2
	cr6.compare<uint32_t>(ctx.r4.u32, 2, xer);
	// blt cr6,0x82b5cc08
	if (cr6.lt) goto loc_82B5CC08;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82B5CC08:
	// lbz r11,115(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 115);
	// li r26,4
	ctx.r26.s64 = 4;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82b5cc1c
	if (!cr6.eq) goto loc_82B5CC1C;
	// li r26,3
	ctx.r26.s64 = 3;
loc_82B5CC1C:
	// lbz r11,116(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 116);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82b5cca8
	if (!cr6.eq) goto loc_82B5CCA8;
	// cmplwi cr6,r26,1
	cr6.compare<uint32_t>(ctx.r26.u32, 1, xer);
	// ble cr6,0x82b5cca8
	if (!cr6.gt) goto loc_82B5CCA8;
	// li r26,1
	ctx.r26.s64 = 1;
loc_82B5CC34:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r31,r30,96
	ctx.r31.s64 = ctx.r30.s64 + 96;
	// li r29,4
	ctx.r29.s64 = 4;
	// addi r28,r11,17392
	ctx.r28.s64 = ctx.r11.s64 + 17392;
loc_82B5CC48:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82c35320
	ctx.lr = 0x82B5CC50;
	sub_82C35320(ctx, base);
	// lbz r10,116(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 116);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b5cc68
	if (!cr6.eq) goto loc_82B5CC68;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 96);
loc_82B5CC68:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82b5cc88
	if (!cr6.eq) goto loc_82B5CC88;
	// rlwinm r11,r25,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// cmpw cr6,r10,r3
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, xer);
	// bne cr6,0x82b5cc88
	if (!cr6.eq) goto loc_82B5CC88;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
loc_82B5CC88:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82b5cc48
	if (!cr0.eq) goto loc_82B5CC48;
	// li r10,-1
	ctx.r10.s64 = -1;
	// subfc r11,r26,r27
	xer.ca = ctx.r27.u32 >= ctx.r26.u32;
	ctx.r11.s64 = ctx.r27.s64 - ctx.r26.s64;
	// subfze r3,r10
	temp.u8 = ~ctx.r10.u32 + xer.ca < xer.ca;
	ctx.r3.u64 = ~ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82B5CCA8:
	// cmplwi cr6,r26,4
	cr6.compare<uint32_t>(ctx.r26.u32, 4, xer);
	// bne cr6,0x82b5cc34
	if (!cr6.eq) goto loc_82B5CC34;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B5CCBC"))) PPC_WEAK_FUNC(sub_82B5CCBC);
PPC_FUNC_IMPL(__imp__sub_82B5CCBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B5CCC0"))) PPC_WEAK_FUNC(sub_82B5CCC0);
PPC_FUNC_IMPL(__imp__sub_82B5CCC0) {
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
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r3,r11,16972
	ctx.r3.s64 = ctx.r11.s64 + 16972;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2ee48
	ctx.lr = 0x82B5CCF0;
	sub_82D2EE48(ctx, base);
	// lis r4,202
	ctx.r4.s64 = 13238272;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r4,r4,173
	ctx.r4.u64 = ctx.r4.u64 | 173;
	// bl 0x82d2ada8
	ctx.lr = 0x82B5CD00;
	sub_82D2ADA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83103100
	ctx.lr = 0x82B5CD0C;
	sub_83103100(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d199b0
	ctx.lr = 0x82B5CD18;
	sub_82D199B0(ctx, base);
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

__attribute__((alias("__imp__sub_82B5CD30"))) PPC_WEAK_FUNC(sub_82B5CD30);
PPC_FUNC_IMPL(__imp__sub_82B5CD30) {
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
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r3,r11,16996
	ctx.r3.s64 = ctx.r11.s64 + 16996;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2f6d8
	ctx.lr = 0x82B5CD64;
	sub_82D2F6D8(ctx, base);
	// lis r4,275
	ctx.r4.s64 = 18022400;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r4,r4,98
	ctx.r4.u64 = ctx.r4.u64 | 98;
	// bl 0x82d2ada8
	ctx.lr = 0x82B5CD74;
	sub_82D2ADA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83103100
	ctx.lr = 0x82B5CD80;
	sub_83103100(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d199b0
	ctx.lr = 0x82B5CD8C;
	sub_82D199B0(ctx, base);
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

__attribute__((alias("__imp__sub_82B5CDA4"))) PPC_WEAK_FUNC(sub_82B5CDA4);
PPC_FUNC_IMPL(__imp__sub_82B5CDA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B5CDA8"))) PPC_WEAK_FUNC(sub_82B5CDA8);
PPC_FUNC_IMPL(__imp__sub_82B5CDA8) {
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
	// lbz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 116);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82b5cdd0
	if (!cr6.eq) goto loc_82B5CDD0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82b5ced0
	goto loc_82B5CED0;
loc_82B5CDD0:
	// bl 0x830ff290
	ctx.lr = 0x82B5CDD4;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82B5CDD8;
	sub_830FFAA8(ctx, base);
	// addi r11,r3,-7
	ctx.r11.s64 = ctx.r3.s64 + -7;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bgt cr6,0x82b5ceb4
	if (cr6.gt) goto loc_82B5CEB4;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82b5ce14
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B5CE14;
	// bdzf 4*cr6+eq,0x82b5ceb4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B5CEB4;
	// bdzf 4*cr6+eq,0x82b5ce0c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B5CE0C;
	// bdzf 4*cr6+eq,0x82b5ce14
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B5CE14;
	// bdzf 4*cr6+eq,0x82b5ce14
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B5CE14;
	// bdzf 4*cr6+eq,0x82b5ce0c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B5CE0C;
	// bdzf 4*cr6+eq,0x82b5ce0c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B5CE0C;
	// bne cr6,0x82b5ce0c
	if (!cr6.eq) goto loc_82B5CE0C;
loc_82B5CE0C:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x82b5ceb8
	goto loc_82B5CEB8;
loc_82B5CE14:
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x831156e8
	ctx.lr = 0x82B5CE1C;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b5ce40
	if (cr6.eq) goto loc_82B5CE40;
	// bl 0x83115808
	ctx.lr = 0x82B5CE30;
	sub_83115808(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82b5ce44
	if (!cr6.eq) goto loc_82B5CE44;
loc_82B5CE40:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82B5CE44:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82b5ce6c
	if (!cr6.eq) goto loc_82B5CE6C;
	// bl 0x831bc900
	ctx.lr = 0x82B5CE54;
	sub_831BC900(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r31,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r31.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x82b5ceb8
	goto loc_82B5CEB8;
loc_82B5CE6C:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b5cea0
	if (cr6.eq) goto loc_82B5CEA0;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addis r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 393216;
	// addi r11,r11,-30316
	ctx.r11.s64 = ctx.r11.s64 + -30316;
	// lbz r10,169(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 169);
	// cmplwi cr6,r10,255
	cr6.compare<uint32_t>(ctx.r10.u32, 255, xer);
	// bne cr6,0x82b5ce9c
	if (!cr6.eq) goto loc_82B5CE9C;
	// lbz r11,170(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 170);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// beq cr6,0x82b5cea0
	if (cr6.eq) goto loc_82B5CEA0;
loc_82B5CE9C:
	// li r30,1
	ctx.r30.s64 = 1;
loc_82B5CEA0:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r31,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r31.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x82b5ceb8
	goto loc_82B5CEB8;
loc_82B5CEB4:
	// li r31,1
	ctx.r31.s64 = 1;
loc_82B5CEB8:
	// bl 0x830ff290
	ctx.lr = 0x82B5CEBC;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r11,r11,-58
	ctx.r11.s64 = ctx.r11.s64 + -58;
	// subfic r11,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r9,r31
	ctx.r3.u64 = ctx.r9.u64 & ctx.r31.u64;
loc_82B5CED0:
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

__attribute__((alias("__imp__sub_82B5CEE8"))) PPC_WEAK_FUNC(sub_82B5CEE8);
PPC_FUNC_IMPL(__imp__sub_82B5CEE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,3
	ctx.r3.s64 = 3;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_82B5CF00:
	// lbzx r11,r10,r4
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82b5cf14
	if (!cr6.eq) goto loc_82B5CF14;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// b 0x82b5cf20
	goto loc_82B5CF20;
loc_82B5CF14:
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x82b5cf20
	if (!cr6.eq) goto loc_82B5CF20;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_82B5CF20:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x82b5cf00
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B5CF00;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82b5cf40
	if (!cr6.eq) goto loc_82B5CF40;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82b5cf54
	if (!cr6.eq) goto loc_82B5CF54;
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_82B5CF40:
	// subfic r11,r8,0
	xer.ca = ctx.r8.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r8.s64;
	// li r9,2
	ctx.r9.s64 = 2;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 & ctx.r9.u64;
	// blr 
	return;
loc_82B5CF54:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B5CF5C"))) PPC_WEAK_FUNC(sub_82B5CF5C);
PPC_FUNC_IMPL(__imp__sub_82B5CF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B5CF60"))) PPC_WEAK_FUNC(sub_82B5CF60);
PPC_FUNC_IMPL(__imp__sub_82B5CF60) {
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
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,17104
	ctx.r9.s64 = ctx.r11.s64 + 17104;
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
	ctx.lr = 0x82B5CF98;
	sub_82D25548(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82b5cfb0
	if (cr6.eq) goto loc_82B5CFB0;
	// bl 0x82416268
	ctx.lr = 0x82B5CFAC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B5CFB0:
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

__attribute__((alias("__imp__sub_82B5CFC8"))) PPC_WEAK_FUNC(sub_82B5CFC8);
PPC_FUNC_IMPL(__imp__sub_82B5CFC8) {
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
	// bl 0x82d19a68
	ctx.lr = 0x82B5CFE4;
	sub_82D19A68(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b5d074
	if (cr6.eq) goto loc_82B5D074;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b5cda8
	ctx.lr = 0x82B5CFF8;
	sub_82B5CDA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b5d02c
	if (!cr6.eq) goto loc_82B5D02C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r9,16924
	ctx.r11.s64 = ctx.r9.s64 + 16924;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-20
	ctx.r4.s64 = ctx.r11.s64 + -20;
	// lwz r8,72(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B5D028;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82b5d074
	goto loc_82B5D074;
loc_82B5D02C:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// addi r4,r10,16924
	ctx.r4.s64 = ctx.r10.s64 + 16924;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B5D048;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b5d074
	if (cr6.eq) goto loc_82B5D074;
	// lbz r11,115(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 115);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82b5d068
	if (!cr6.eq) goto loc_82B5D068;
	// lis r4,930
	ctx.r4.s64 = 60948480;
	// ori r4,r4,122
	ctx.r4.u64 = ctx.r4.u64 | 122;
	// b 0x82b5d070
	goto loc_82B5D070;
loc_82B5D068:
	// lis r4,14
	ctx.r4.s64 = 917504;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
loc_82B5D070:
	// bl 0x82d29598
	ctx.lr = 0x82B5D074;
	sub_82D29598(ctx, base);
loc_82B5D074:
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

__attribute__((alias("__imp__sub_82B5D08C"))) PPC_WEAK_FUNC(sub_82B5D08C);
PPC_FUNC_IMPL(__imp__sub_82B5D08C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B5D090"))) PPC_WEAK_FUNC(sub_82B5D090);
PPC_FUNC_IMPL(__imp__sub_82B5D090) {
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
	// blt cr6,0x82b5d0b8
	if (cr6.lt) goto loc_82B5D0B8;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b5d0bc
	goto loc_82B5D0BC;
loc_82B5D0B8:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82B5D0BC:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,124
	ctx.r4.s64 = 124;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B5D0D8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b5d0f8
	if (cr6.eq) goto loc_82B5D0F8;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82b5c4e0
	ctx.lr = 0x82B5D0F0;
	sub_82B5C4E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b5d0fc
	if (!cr6.eq) goto loc_82B5D0FC;
loc_82B5D0F8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B5D0FC:
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

__attribute__((alias("__imp__sub_82B5D114"))) PPC_WEAK_FUNC(sub_82B5D114);
PPC_FUNC_IMPL(__imp__sub_82B5D114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B5D118"))) PPC_WEAK_FUNC(sub_82B5D118);
PPC_FUNC_IMPL(__imp__sub_82B5D118) {
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
	// blt cr6,0x82b5d140
	if (cr6.lt) goto loc_82B5D140;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b5d144
	goto loc_82B5D144;
loc_82B5D140:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82B5D144:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,124
	ctx.r4.s64 = 124;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B5D160;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b5d180
	if (cr6.eq) goto loc_82B5D180;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82b5c4e0
	ctx.lr = 0x82B5D178;
	sub_82B5C4E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b5d184
	if (!cr6.eq) goto loc_82B5D184;
loc_82B5D180:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B5D184:
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

__attribute__((alias("__imp__sub_82B5D19C"))) PPC_WEAK_FUNC(sub_82B5D19C);
PPC_FUNC_IMPL(__imp__sub_82B5D19C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B5D1A0"))) PPC_WEAK_FUNC(sub_82B5D1A0);
PPC_FUNC_IMPL(__imp__sub_82B5D1A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac0
	ctx.lr = 0x82B5D1A8;
	__savegprlr_18(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r19,r3,108
	ctx.r19.s64 = ctx.r3.s64 + 108;
	// stb r24,117(r11)
	PPC_STORE_U8(ctx.r11.u32 + 117, ctx.r24.u8);
	// lwz r10,100(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// stb r24,117(r10)
	PPC_STORE_U8(ctx.r10.u32 + 117, ctx.r24.u8);
	// lwz r9,104(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// stb r24,117(r9)
	PPC_STORE_U8(ctx.r9.u32 + 117, ctx.r24.u8);
	// lwz r8,108(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// stb r24,117(r8)
	PPC_STORE_U8(ctx.r8.u32 + 117, ctx.r24.u8);
	// lbz r7,115(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 115);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82b5d1f0
	if (!cr6.eq) goto loc_82B5D1F0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_82B5D1F0:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r20,r24
	ctx.r20.u64 = ctx.r24.u64;
	// addi r22,r11,17392
	ctx.r22.s64 = ctx.r11.s64 + 17392;
	// li r18,1
	ctx.r18.s64 = 1;
	// mr r23,r22
	ctx.r23.u64 = ctx.r22.u64;
	// li r21,2
	ctx.r21.s64 = 2;
loc_82B5D208:
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r24.u32);
	// stw r24,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// stw r24,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r24.u32);
loc_82B5D21C:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r31,r27
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// bl 0x82c35320
	ctx.lr = 0x82B5D22C;
	sub_82C35320(ctx, base);
	// lwzx r10,r31,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// lbz r9,96(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 96);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x82b5d258
	if (!cr6.eq) goto loc_82B5D258;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, xer);
	// bne cr6,0x82b5d258
	if (!cr6.eq) goto loc_82B5D258;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x835977d8
	ctx.lr = 0x82B5D254;
	sub_835977D8(ctx, base);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82B5D258:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmplwi cr6,r30,4
	cr6.compare<uint32_t>(ctx.r30.u32, 4, xer);
	// blt cr6,0x82b5d21c
	if (cr6.lt) goto loc_82B5D21C;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r25,96(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// subf r10,r25,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r25.s64;
	// srawi r26,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r26.s64 = ctx.r10.s32 >> 2;
	// cmplwi cr6,r26,3
	cr6.compare<uint32_t>(ctx.r26.u32, 3, xer);
	// ble cr6,0x82b5d2e0
	if (!cr6.gt) goto loc_82B5D2E0;
	// addic. r30,r26,-1
	xer.ca = ctx.r26.u32 > 0;
	ctx.r30.s64 = ctx.r26.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// mr r20,r18
	ctx.r20.u64 = ctx.r18.u64;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// blt 0x82b5d2e0
	if (cr0.lt) goto loc_82B5D2E0;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r25
	ctx.r29.u64 = ctx.r11.u64 + ctx.r25.u64;
loc_82B5D298:
	// cmplw cr6,r26,r30
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r30.u32, xer);
	// ble cr6,0x82b5d3d8
	if (!cr6.gt) goto loc_82B5D3D8;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r31,r27
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// bl 0x82c34db0
	ctx.lr = 0x82B5D2B4;
	sub_82C34DB0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x82b5d2d4
	if (cr6.eq) goto loc_82B5D2D4;
	// lwzx r3,r31,r27
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// bl 0x82c35720
	ctx.lr = 0x82B5D2C8;
	sub_82C35720(ctx, base);
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// cmplwi cr6,r28,3
	cr6.compare<uint32_t>(ctx.r28.u32, 3, xer);
	// ble cr6,0x82b5d2e0
	if (!cr6.gt) goto loc_82B5D2E0;
loc_82B5D2D4:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
	// bge 0x82b5d298
	if (!cr0.lt) goto loc_82B5D298;
loc_82B5D2E0:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x82b5d2f8
	if (cr6.eq) goto loc_82B5D2F8;
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82B5D2F8;
	sub_825952B8(ctx, base);
loc_82B5D2F8:
	// addi r23,r23,4
	ctx.r23.s64 = ctx.r23.s64 + 4;
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r24.u32);
	// addi r11,r22,8
	ctx.r11.s64 = ctx.r22.s64 + 8;
	// stw r24,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// stw r24,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r24.u32);
	// cmpw cr6,r23,r11
	cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, xer);
	// blt cr6,0x82b5d208
	if (cr6.lt) goto loc_82B5D208;
	// lwz r11,96(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 96);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// lbz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 96);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82b5d32c
	if (!cr6.eq) goto loc_82B5D32C;
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
loc_82B5D32C:
	// lwz r11,100(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 100);
	// lbz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 96);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82b5d340
	if (!cr6.eq) goto loc_82B5D340;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_82B5D340:
	// lwz r11,104(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 104);
	// lbz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 96);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82b5d354
	if (!cr6.eq) goto loc_82B5D354;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_82B5D354:
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// lbz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 96);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82b5d368
	if (!cr6.eq) goto loc_82B5D368;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_82B5D368:
	// cmplwi cr6,r30,6
	cr6.compare<uint32_t>(ctx.r30.u32, 6, xer);
	// ble cr6,0x82b5d3cc
	if (!cr6.gt) goto loc_82B5D3CC;
	// mr r20,r18
	ctx.r20.u64 = ctx.r18.u64;
	// li r29,3
	ctx.r29.s64 = 3;
	// mr r31,r19
	ctx.r31.u64 = ctx.r19.u64;
loc_82B5D37C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b5d3c0
	if (cr6.eq) goto loc_82B5D3C0;
	// bl 0x82c34db0
	ctx.lr = 0x82B5D390;
	sub_82C34DB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x82b5d3c0
	if (cr6.eq) goto loc_82B5D3C0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82c35320
	ctx.lr = 0x82B5D3A4;
	sub_82C35320(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82b5d3c0
	if (!cr6.eq) goto loc_82B5D3C0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// cmplwi cr6,r30,6
	cr6.compare<uint32_t>(ctx.r30.u32, 6, xer);
	// stb r18,117(r11)
	PPC_STORE_U8(ctx.r11.u32 + 117, ctx.r18.u8);
	// ble cr6,0x82b5d3cc
	if (!cr6.gt) goto loc_82B5D3CC;
loc_82B5D3C0:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// bge 0x82b5d37c
	if (!cr0.lt) goto loc_82B5D37C;
loc_82B5D3CC:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_82B5D3D8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B5D3E4;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82B5D3E4"))) PPC_WEAK_FUNC(sub_82B5D3E4);
PPC_FUNC_IMPL(__imp__sub_82B5D3E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B5D3E8"))) PPC_WEAK_FUNC(sub_82B5D3E8);
PPC_FUNC_IMPL(__imp__sub_82B5D3E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B5D3F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,96
	ctx.r28.s64 = ctx.r3.s64 + 96;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_82B5D404:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r8,119(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 119);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82b5d48c
	if (cr6.eq) goto loc_82B5D48C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// blt cr6,0x82b5d404
	if (cr6.lt) goto loc_82B5D404;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82B5D42C;
	sub_82D19A68(ctx, base);
	// lbz r11,112(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 112);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b5d448
	if (!cr6.eq) goto loc_82B5D448;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d198d0
	ctx.lr = 0x82B5D448;
	sub_82D198D0(ctx, base);
loc_82B5D448:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// addi r30,r11,16972
	ctx.r30.s64 = ctx.r11.s64 + 16972;
	// beq cr6,0x82b5d4b8
	if (cr6.eq) goto loc_82B5D4B8;
	// lbz r11,116(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 116);
	// li r5,1
	ctx.r5.s64 = 1;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82b5d4a0
	if (!cr6.eq) goto loc_82B5D4A0;
	// lbz r11,112(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 112);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bne cr6,0x82b5d498
	if (!cr6.eq) goto loc_82B5D498;
	// addi r4,r30,-172
	ctx.r4.s64 = ctx.r30.s64 + -172;
	// b 0x82b5d4b4
	goto loc_82B5D4B4;
loc_82B5D48C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82B5D498:
	// addi r4,r30,-164
	ctx.r4.s64 = ctx.r30.s64 + -164;
	// b 0x82b5d4b4
	goto loc_82B5D4B4;
loc_82B5D4A0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r30,-148
	ctx.r4.s64 = ctx.r30.s64 + -148;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82B5D4B4:
	// bctrl 
	ctx.lr = 0x82B5D4B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B5D4B8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d199b0
	ctx.lr = 0x82B5D4C4;
	sub_82D199B0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b5cda8
	ctx.lr = 0x82B5D4CC;
	sub_82B5CDA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82b5d51c
	if (!cr6.eq) goto loc_82B5D51C;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B5D4E8;
	sub_82D19788(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B5D4F8;
	sub_82D19788(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82b5d51c
	if (cr6.eq) goto loc_82B5D51C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r30,-132
	ctx.r4.s64 = ctx.r30.s64 + -132;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B5D51C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B5D51C:
	// lbz r11,112(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b5d568
	if (cr6.eq) goto loc_82B5D568;
	// bl 0x830ff290
	ctx.lr = 0x82B5D52C;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,57
	cr6.compare<uint32_t>(ctx.r11.u32, 57, xer);
	// beq cr6,0x82b5d558
	if (cr6.eq) goto loc_82B5D558;
	// bl 0x830ff290
	ctx.lr = 0x82B5D53C;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,58
	cr6.compare<uint32_t>(ctx.r11.u32, 58, xer);
	// beq cr6,0x82b5d558
	if (cr6.eq) goto loc_82B5D558;
	// bl 0x830ff290
	ctx.lr = 0x82B5D54C;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,59
	cr6.compare<uint32_t>(ctx.r11.u32, 59, xer);
	// bne cr6,0x82b5d568
	if (!cr6.eq) goto loc_82B5D568;
loc_82B5D558:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B5D568;
	sub_82D19788(ctx, base);
loc_82B5D568:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b5d1a0
	ctx.lr = 0x82B5D570;
	sub_82B5D1A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82b5d5b8
	if (!cr6.eq) goto loc_82B5D5B8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2ee48
	ctx.lr = 0x82B5D590;
	sub_82D2EE48(ctx, base);
	// lis r4,202
	ctx.r4.s64 = 13238272;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r4,r4,173
	ctx.r4.u64 = ctx.r4.u64 | 173;
	// bl 0x82d2ada8
	ctx.lr = 0x82B5D5A0;
	sub_82D2ADA8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83103100
	ctx.lr = 0x82B5D5AC;
	sub_83103100(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d199b0
	ctx.lr = 0x82B5D5B8;
	sub_82D199B0(ctx, base);
loc_82B5D5B8:
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r11,r28,-4
	ctx.r11.s64 = ctx.r28.s64 + -4;
	// li r9,1
	ctx.r9.s64 = 1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82B5D5C8:
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stb r9,118(r10)
	PPC_STORE_U8(ctx.r10.u32 + 118, ctx.r9.u8);
	// bdnz 0x82b5d5c8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B5D5C8;
	// bl 0x82d26640
	ctx.lr = 0x82B5D5D8;
	sub_82D26640(ctx, base);
	// bl 0x82d25ab8
	ctx.lr = 0x82B5D5DC;
	sub_82D25AB8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b5cfc8
	ctx.lr = 0x82B5D5E4;
	sub_82B5CFC8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B5D5F0"))) PPC_WEAK_FUNC(sub_82B5D5F0);
PPC_FUNC_IMPL(__imp__sub_82B5D5F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab8
	ctx.lr = 0x82B5D5F8;
	__savegprlr_16(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B5D604;
	sub_831156E8(ctx, base);
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r16,0
	ctx.r16.s64 = 0;
	// lbz r9,112(r17)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r17.u32 + 112);
	// addis r20,r10,6
	ctx.r20.s64 = ctx.r10.s64 + 393216;
	// stw r16,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r16.u32);
	// mr r18,r16
	ctx.r18.u64 = ctx.r16.u64;
	// addi r20,r20,-30316
	ctx.r20.s64 = ctx.r20.s64 + -30316;
	// stw r16,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r16.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// li r19,255
	ctx.r19.s64 = 255;
	// beq cr6,0x82b5d640
	if (cr6.eq) goto loc_82B5D640;
	// stb r19,169(r20)
	PPC_STORE_U8(ctx.r20.u32 + 169, ctx.r19.u8);
	// stb r19,170(r20)
	PPC_STORE_U8(ctx.r20.u32 + 170, ctx.r19.u8);
	// b 0x82b5d6b4
	goto loc_82B5D6B4;
loc_82B5D640:
	// lbz r11,169(r20)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r20.u32 + 169);
	// li r31,3
	ctx.r31.s64 = 3;
	// lbz r10,170(r20)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r20.u32 + 170);
	// addi r29,r17,108
	ctx.r29.s64 = ctx.r17.s64 + 108;
	// stb r19,169(r20)
	PPC_STORE_U8(ctx.r20.u32 + 169, ctx.r19.u8);
	// stb r19,170(r20)
	PPC_STORE_U8(ctx.r20.u32 + 170, ctx.r19.u8);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
loc_82B5D660:
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_82B5D668:
	// lbzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// bne cr6,0x82b5d698
	if (!cr6.eq) goto loc_82B5D698;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82c35320
	ctx.lr = 0x82B5D67C;
	sub_82C35320(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82b5d68c
	if (!cr6.eq) goto loc_82B5D68C;
	// stb r31,169(r20)
	PPC_STORE_U8(ctx.r20.u32 + 169, ctx.r31.u8);
	// b 0x82b5d698
	goto loc_82B5D698;
loc_82B5D68C:
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x82b5d698
	if (!cr6.eq) goto loc_82B5D698;
	// stb r31,170(r20)
	PPC_STORE_U8(ctx.r20.u32 + 170, ctx.r31.u8);
loc_82B5D698:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// blt cr6,0x82b5d668
	if (cr6.lt) goto loc_82B5D668;
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
	// bge 0x82b5d660
	if (!cr0.lt) goto loc_82B5D660;
loc_82B5D6B4:
	// lis r11,21845
	ctx.r11.s64 = 1431633920;
	// lwz r22,92(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r21,88(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r25,r16
	ctx.r25.u64 = ctx.r16.u64;
	// addi r27,r17,96
	ctx.r27.s64 = ctx.r17.s64 + 96;
	// lis r23,-31751
	ctx.r23.s64 = -2080833536;
	// ori r24,r11,21846
	ctx.r24.u64 = ctx.r11.u64 | 21846;
loc_82B5D6D0:
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r26,32
	ctx.r26.s64 = 32;
	// mr r28,r19
	ctx.r28.u64 = ctx.r19.u64;
	// bl 0x82c35320
	ctx.lr = 0x82B5D6E0;
	sub_82C35320(ctx, base);
	// lwz r11,25360(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 25360);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(ctx.r11.u32, 15, xer);
	// bne cr6,0x82b5d7d0
	if (!cr6.eq) goto loc_82B5D7D0;
	// lbz r11,112(r17)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r17.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b5d7d0
	if (cr6.eq) goto loc_82B5D7D0;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lbz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 96);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b5d7d0
	if (cr6.eq) goto loc_82B5D7D0;
	// cmplwi cr6,r18,0
	cr6.compare<uint32_t>(ctx.r18.u32, 0, xer);
	// bne cr6,0x82b5d764
	if (!cr6.eq) goto loc_82B5D764;
	// bl 0x831d4788
	ctx.lr = 0x82B5D718;
	sub_831D4788(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831d4788
	ctx.lr = 0x82B5D720;
	sub_831D4788(ctx, base);
	// mullw r11,r31,r3
	ctx.r11.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r3.s32);
	// srawi r9,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// cntlzw r5,r6
	ctx.r5.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// rlwinm r11,r5,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// addi r4,r8,1
	ctx.r4.s64 = ctx.r8.s64 + 1;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// stwx r4,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r4.u32);
	// lwz r22,92(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r21,88(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// b 0x82b5d7d0
	goto loc_82B5D7D0;
loc_82B5D764:
	// bl 0x831d4788
	ctx.lr = 0x82B5D768;
	sub_831D4788(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831d4788
	ctx.lr = 0x82B5D770;
	sub_831D4788(ctx, base);
	// mullw r9,r31,r3
	ctx.r9.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r3.s32);
	// mulhw r11,r9,r24
	ctx.r11.s64 = (int64_t(ctx.r9.s32) * int64_t(ctx.r24.s32)) >> 32;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r31,r8,r9
	ctx.r31.s64 = ctx.r9.s64 - ctx.r8.s64;
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(ctx.r31.s32, 1, xer);
	// bne cr6,0x82b5d7b0
	if (!cr6.eq) goto loc_82B5D7B0;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// beq cr6,0x82b5d7a4
	if (cr6.eq) goto loc_82B5D7A4;
	// mr r31,r16
	ctx.r31.u64 = ctx.r16.u64;
	// b 0x82b5d7d0
	goto loc_82B5D7D0;
loc_82B5D7A4:
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// stw r21,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r21.u32);
	// b 0x82b5d7d0
	goto loc_82B5D7D0;
loc_82B5D7B0:
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// bne cr6,0x82b5d7d0
	if (!cr6.eq) goto loc_82B5D7D0;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// beq cr6,0x82b5d7c8
	if (cr6.eq) goto loc_82B5D7C8;
	// mr r31,r16
	ctx.r31.u64 = ctx.r16.u64;
	// b 0x82b5d7d0
	goto loc_82B5D7D0;
loc_82B5D7C8:
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// stw r22,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r22.u32);
loc_82B5D7D0:
	// clrlwi r29,r25,24
	ctx.r29.u64 = ctx.r25.u32 & 0xFF;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// add r30,r29,r20
	ctx.r30.u64 = ctx.r29.u64 + ctx.r20.u64;
	// stb r31,45(r30)
	PPC_STORE_U8(ctx.r30.u32 + 45, ctx.r31.u8);
	// beq cr6,0x82b5d840
	if (cr6.eq) goto loc_82B5D840;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x835d3188
	ctx.lr = 0x82B5D7EC;
	sub_835D3188(ctx, base);
	// lbz r11,116(r17)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r17.u32 + 116);
	// clrlwi r26,r3,24
	ctx.r26.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82b5d838
	if (!cr6.eq) goto loc_82B5D838;
	// lbz r11,112(r17)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r17.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b5d838
	if (!cr6.eq) goto loc_82B5D838;
	// li r11,32
	ctx.r11.s64 = 32;
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(ctx.r31.s32, 1, xer);
	// bne cr6,0x82b5d81c
	if (!cr6.eq) goto loc_82B5D81C;
	// lbz r11,122(r17)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r17.u32 + 122);
	// b 0x82b5d828
	goto loc_82B5D828;
loc_82B5D81C:
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// bne cr6,0x82b5d828
	if (!cr6.eq) goto loc_82B5D828;
	// lbz r11,123(r17)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r17.u32 + 123);
loc_82B5D828:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,32
	cr6.compare<uint32_t>(ctx.r10.u32, 32, xer);
	// beq cr6,0x82b5d838
	if (cr6.eq) goto loc_82B5D838;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
loc_82B5D838:
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
loc_82B5D840:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// stb r26,69(r30)
	PPC_STORE_U8(ctx.r30.u32 + 69, ctx.r26.u8);
	// stb r28,117(r30)
	PPC_STORE_U8(ctx.r30.u32 + 117, ctx.r28.u8);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmplwi cr6,r25,4
	cr6.compare<uint32_t>(ctx.r25.u32, 4, xer);
	// blt cr6,0x82b5d6d0
	if (cr6.lt) goto loc_82B5D6D0;
	// cmplwi cr6,r18,1
	cr6.compare<uint32_t>(ctx.r18.u32, 1, xer);
	// stb r18,44(r20)
	PPC_STORE_U8(ctx.r20.u32 + 44, ctx.r18.u8);
	// ble cr6,0x82b5da34
	if (!cr6.gt) goto loc_82B5DA34;
	// bl 0x831156e8
	ctx.lr = 0x82B5D868;
	sub_831156E8(ctx, base);
	// lis r11,5
	ctx.r11.s64 = 327680;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// ori r9,r11,37448
	ctx.r9.u64 = ctx.r11.u64 | 37448;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bge cr6,0x82b5d890
	if (!cr6.lt) goto loc_82B5D890;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82B5D890:
	// addis r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 65536;
	// addi r11,r11,24120
	ctx.r11.s64 = ctx.r11.s64 + 24120;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,10
	cr6.compare<uint32_t>(ctx.r10.u32, 10, xer);
	// bne cr6,0x82b5da34
	if (!cr6.eq) goto loc_82B5DA34;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r8,r10,-24672
	ctx.r8.s64 = ctx.r10.s64 + -24672;
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// stb r16,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r16.u8);
	// stw r16,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r16.u32);
	// stw r16,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r16.u32);
	// stw r16,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r16.u32);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82B5D8D8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82B5D8F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x825a9570
	ctx.lr = 0x82B5D900;
	sub_825A9570(ctx, base);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stb r11,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r11.u8);
	// bne cr6,0x82b5d924
	if (!cr6.eq) goto loc_82B5D924;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r10,r10,140
	ctx.r10.s64 = ctx.r10.s64 + 140;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
loc_82B5D924:
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// stb r11,64(r10)
	PPC_STORE_U8(ctx.r10.u32 + 64, ctx.r11.u8);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stb r16,65(r10)
	PPC_STORE_U8(ctx.r10.u32 + 65, ctx.r16.u8);
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// stb r11,80(r10)
	PPC_STORE_U8(ctx.r10.u32 + 80, ctx.r11.u8);
	// lfs f12,-3400(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -3400);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,76(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 76, temp.u32);
	// lfs f0,21712(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21712);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-26260(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -26260);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,68(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 68, temp.u32);
	// stfs f13,72(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 72, temp.u32);
	// lwz r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82b5d9b8
	if (cr6.eq) goto loc_82B5D9B8;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r31,r10,12
	ctx.r31.s64 = ctx.r10.s64 + 12;
loc_82B5D968:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r31
	ea = ctx.r31.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r11,0,r31
	ea = ctx.r31.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82b5d968
	if (!cr0.eq) goto loc_82B5D968;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82b5d9b4
	if (!cr6.eq) goto loc_82B5D9B4;
	// lwz r30,8(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x8353f380
	ctx.lr = 0x82B5D994;
	sub_8353F380(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,19664
	ctx.r5.s64 = ctx.r11.s64 + 19664;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B5D9B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B5D9B4:
	// stw r16,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r16.u32);
loc_82B5D9B8:
	// bl 0x831021a0
	ctx.lr = 0x82B5D9BC;
	sub_831021A0(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r4,261
	ctx.r4.s64 = 17104896;
	// addi r5,r11,16474
	ctx.r5.s64 = ctx.r11.s64 + 16474;
	// ori r4,r4,55
	ctx.r4.u64 = ctx.r4.u64 | 55;
	// bl 0x83102a08
	ctx.lr = 0x82B5D9D0;
	sub_83102A08(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lbz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 100);
	// addi r9,r10,-24712
	ctx.r9.s64 = ctx.r10.s64 + -24712;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// beq cr6,0x82b5da10
	if (cr6.eq) goto loc_82B5DA10;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82b5da10
	if (cr6.eq) goto loc_82B5DA10;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x82B5DA08;
	sub_8353F3B8(ctx, base);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// stw r16,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r16.u32);
loc_82B5DA10:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stb r16,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r16.u8);
	// beq cr6,0x82b5da34
	if (cr6.eq) goto loc_82B5DA34;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x82B5DA30;
	sub_8353F3B8(ctx, base);
	// stw r16,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r16.u32);
loc_82B5DA34:
	// bl 0x831156e8
	ctx.lr = 0x82B5DA38;
	sub_831156E8(ctx, base);
	// lbz r4,115(r17)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r17.u32 + 115);
	// lwz r3,52(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bl 0x8312adb0
	ctx.lr = 0x82B5DA44;
	sub_8312ADB0(ctx, base);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82b5c9b8
	ctx.lr = 0x82B5DA4C;
	sub_82B5C9B8(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B5DA54"))) PPC_WEAK_FUNC(sub_82B5DA54);
PPC_FUNC_IMPL(__imp__sub_82B5DA54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B5DA58"))) PPC_WEAK_FUNC(sub_82B5DA58);
PPC_FUNC_IMPL(__imp__sub_82B5DA58) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82d199b0
	ctx.lr = 0x82B5DA7C;
	sub_82D199B0(ctx, base);
	// lbz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 116);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82b5dab0
	if (!cr6.eq) goto loc_82B5DAB0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x82b5dab0
	if (!cr6.eq) goto loc_82B5DAB0;
	// stb r11,117(r31)
	PPC_STORE_U8(ctx.r31.u32 + 117, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b5d5f0
	ctx.lr = 0x82B5DA9C;
	sub_82B5D5F0(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r10,16856
	ctx.r5.s64 = ctx.r10.s64 + 16856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82B5DAB0;
	sub_82D20DA8(ctx, base);
loc_82B5DAB0:
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

__attribute__((alias("__imp__sub_82B5DAC8"))) PPC_WEAK_FUNC(sub_82B5DAC8);
PPC_FUNC_IMPL(__imp__sub_82B5DAC8) {
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
	ctx.lr = 0x82B5DAD0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r27,8(r4)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8);
	// addis r11,r11,-264
	ctx.r11.s64 = ctx.r11.s64 + -17301504;
	// addi r11,r11,-4097
	ctx.r11.s64 = ctx.r11.s64 + -4097;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x82b5dd74
	if (cr6.gt) goto loc_82B5DD74;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82b5db6c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B5DB6C;
	// bdzf 4*cr6+eq,0x82b5dc88
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B5DC88;
	// bdzf 4*cr6+eq,0x82b5dd0c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B5DD0C;
	// bne cr6,0x82b5dd6c
	if (!cr6.eq) goto loc_82B5DD6C;
	// lbz r11,112(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 112);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82b5db34
	if (!cr6.eq) goto loc_82B5DB34;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b5d5f0
	ctx.lr = 0x82B5DB1C;
	sub_82B5D5F0(ctx, base);
	// li r31,3
	ctx.r31.s64 = 3;
	// addi r30,r29,112
	ctx.r30.s64 = ctx.r29.s64 + 112;
loc_82B5DB24:
	// lwzu r3,-4(r30)
	ea = -4 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x82c36bd0
	ctx.lr = 0x82B5DB2C;
	sub_82C36BD0(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bge 0x82b5db24
	if (!cr0.lt) goto loc_82B5DB24;
loc_82B5DB34:
	// bl 0x830ff290
	ctx.lr = 0x82B5DB38;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r11,r11,16892
	ctx.r11.s64 = ctx.r11.s64 + 16892;
	// addi r5,r11,-28
	ctx.r5.s64 = ctx.r11.s64 + -28;
	// beq cr6,0x82b5db54
	if (cr6.eq) goto loc_82B5DB54;
	// addi r5,r11,-16
	ctx.r5.s64 = ctx.r11.s64 + -16;
loc_82B5DB54:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82B5DB60;
	sub_82D20DA8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82B5DB6C:
	// lbz r11,112(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b5dc38
	if (!cr6.eq) goto loc_82B5DC38;
	// lbz r11,116(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 116);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82b5dbf8
	if (!cr6.eq) goto loc_82B5DBF8;
	// lbz r11,117(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 117);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b5dbf8
	if (!cr6.eq) goto loc_82B5DBF8;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r30,r29,92
	ctx.r30.s64 = ctx.r29.s64 + 92;
	// stb r31,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// stb r31,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r31.u8);
	// stb r31,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r31.u8);
	// stb r31,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r31.u8);
loc_82B5DBB0:
	// lwzu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x82c35320
	ctx.lr = 0x82B5DBB8;
	sub_82C35320(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// stbx r10,r31,r11
	PPC_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,4
	cr6.compare<uint32_t>(ctx.r31.u32, 4, xer);
	// blt cr6,0x82b5dbb0
	if (cr6.lt) goto loc_82B5DBB0;
	// addi r4,r29,118
	ctx.r4.s64 = ctx.r29.s64 + 118;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b5cee8
	ctx.lr = 0x82B5DBDC;
	sub_82B5CEE8(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b5cee8
	ctx.lr = 0x82B5DBEC;
	sub_82B5CEE8(ctx, base);
	// cmplw cr6,r3,r7
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r7.u32, xer);
	// beq cr6,0x82b5dbf8
	if (cr6.eq) goto loc_82B5DBF8;
	// li r28,1
	ctx.r28.s64 = 1;
loc_82B5DBF8:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b5dc10
	if (!cr6.eq) goto loc_82B5DC10;
	// bl 0x82b5d5f0
	ctx.lr = 0x82B5DC0C;
	sub_82B5D5F0(ctx, base);
	// b 0x82b5dc64
	goto loc_82B5DC64;
loc_82B5DC10:
	// bl 0x82b5cd30
	ctx.lr = 0x82B5DC14;
	sub_82B5CD30(ctx, base);
	// addi r30,r29,92
	ctx.r30.s64 = ctx.r29.s64 + 92;
	// li r31,4
	ctx.r31.s64 = 4;
loc_82B5DC1C:
	// lwzu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x82c35710
	ctx.lr = 0x82B5DC24;
	sub_82C35710(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x82b5dc1c
	if (!cr0.eq) goto loc_82B5DC1C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82B5DC38:
	// bl 0x830ff290
	ctx.lr = 0x82B5DC3C;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82B5DC40;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,8
	cr6.compare<uint32_t>(ctx.r3.u32, 8, xer);
	// beq cr6,0x82b5dc60
	if (cr6.eq) goto loc_82B5DC60;
	// cmplwi cr6,r3,11
	cr6.compare<uint32_t>(ctx.r3.u32, 11, xer);
	// beq cr6,0x82b5dc60
	if (cr6.eq) goto loc_82B5DC60;
	// cmplwi cr6,r3,12
	cr6.compare<uint32_t>(ctx.r3.u32, 12, xer);
	// beq cr6,0x82b5dc60
	if (cr6.eq) goto loc_82B5DC60;
	// cmplwi cr6,r3,13
	cr6.compare<uint32_t>(ctx.r3.u32, 13, xer);
	// bne cr6,0x82b5dc64
	if (!cr6.eq) goto loc_82B5DC64;
loc_82B5DC60:
	// bl 0x831bcf10
	ctx.lr = 0x82B5DC64;
	sub_831BCF10(ctx, base);
loc_82B5DC64:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,16892
	ctx.r11.s64 = ctx.r11.s64 + 16892;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r5,r11,-8
	ctx.r5.s64 = ctx.r11.s64 + -8;
	// bl 0x82d20da8
	ctx.lr = 0x82B5DC7C;
	sub_82D20DA8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82B5DC88:
	// lbz r11,112(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b5dc9c
	if (!cr6.eq) goto loc_82B5DC9C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b5c9b8
	ctx.lr = 0x82B5DC9C;
	sub_82B5C9B8(ctx, base);
loc_82B5DC9C:
	// bl 0x831156e8
	ctx.lr = 0x82B5DCA0;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r31,3
	ctx.r31.s64 = 3;
	// addis r28,r11,6
	ctx.r28.s64 = ctx.r11.s64 + 393216;
	// addi r30,r29,112
	ctx.r30.s64 = ctx.r29.s64 + 112;
	// addi r28,r28,-30316
	ctx.r28.s64 = ctx.r28.s64 + -30316;
loc_82B5DCB4:
	// lwz r3,-4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// bl 0x82c36bd0
	ctx.lr = 0x82B5DCBC;
	sub_82C36BD0(ctx, base);
	// lwzu r3,-4(r30)
	ea = -4 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x835d3188
	ctx.lr = 0x82B5DCC4;
	sub_835D3188(ctx, base);
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// add r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// stb r10,69(r9)
	PPC_STORE_U8(ctx.r9.u32 + 69, ctx.r10.u8);
	// bge 0x82b5dcb4
	if (!cr0.lt) goto loc_82B5DCB4;
	// bl 0x831156e8
	ctx.lr = 0x82B5DCE0;
	sub_831156E8(ctx, base);
	// lbz r4,115(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 115);
	// lwz r3,52(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bl 0x8312adb0
	ctx.lr = 0x82B5DCEC;
	sub_8312ADB0(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,16892
	ctx.r5.s64 = ctx.r11.s64 + 16892;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82B5DD00;
	sub_82D20DA8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82B5DD0C:
	// lbz r11,115(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 115);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r9,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// stb r9,115(r29)
	PPC_STORE_U8(ctx.r29.u32 + 115, ctx.r9.u8);
	// bl 0x82b5cfc8
	ctx.lr = 0x82B5DD28;
	sub_82B5CFC8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b5d1a0
	ctx.lr = 0x82B5DD30;
	sub_82B5D1A0(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x82b5dd44
	if (!cr6.eq) goto loc_82B5DD44;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b5ccc0
	ctx.lr = 0x82B5DD44;
	sub_82B5CCC0(ctx, base);
loc_82B5DD44:
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r11,r29,92
	ctx.r11.s64 = ctx.r29.s64 + 92;
	// li r9,1
	ctx.r9.s64 = 1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82B5DD54:
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stb r9,118(r10)
	PPC_STORE_U8(ctx.r10.u32 + 118, ctx.r9.u8);
	// bdnz 0x82b5dd54
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B5DD54;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82B5DD6C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b5cfc8
	ctx.lr = 0x82B5DD74;
	sub_82B5CFC8(ctx, base);
loc_82B5DD74:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B5DD80"))) PPC_WEAK_FUNC(sub_82B5DD80);
PPC_FUNC_IMPL(__imp__sub_82B5DD80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B5DD88;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r5,16(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r29,r11,16960
	ctx.r29.s64 = ctx.r11.s64 + 16960;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r7,7
	ctx.r7.s64 = 7;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r6,r29,-16
	ctx.r6.s64 = ctx.r29.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x82B5DDB4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82b5ddf0
	if (!cr6.eq) goto loc_82B5DDF0;
	// lbz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 112);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82b5de5c
	if (!cr6.eq) goto loc_82B5DE5C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b5d5f0
	ctx.lr = 0x82B5DDD0;
	sub_82B5D5F0(ctx, base);
	// li r31,3
	ctx.r31.s64 = 3;
	// addi r30,r30,112
	ctx.r30.s64 = ctx.r30.s64 + 112;
loc_82B5DDD8:
	// lwzu r3,-4(r30)
	ea = -4 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x82c36bd0
	ctx.lr = 0x82B5DDE0;
	sub_82C36BD0(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bge 0x82b5ddd8
	if (!cr0.lt) goto loc_82B5DDD8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82B5DDF0:
	// addi r6,r29,-8
	ctx.r6.s64 = ctx.r29.s64 + -8;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x82B5DE08;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82b5de2c
	if (!cr6.eq) goto loc_82B5DE2C;
	// lbz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b5de5c
	if (!cr6.eq) goto loc_82B5DE5C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b5d5f0
	ctx.lr = 0x82B5DE24;
	sub_82B5D5F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82B5DE2C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82450880
	ctx.lr = 0x82B5DE38;
	sub_82450880(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b5de5c
	if (cr6.eq) goto loc_82B5DE5C;
	// li r31,3
	ctx.r31.s64 = 3;
	// addi r30,r30,112
	ctx.r30.s64 = ctx.r30.s64 + 112;
loc_82B5DE4C:
	// lwzu r3,-4(r30)
	ea = -4 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x82c36bd0
	ctx.lr = 0x82B5DE54;
	sub_82C36BD0(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bge 0x82b5de4c
	if (!cr0.lt) goto loc_82B5DE4C;
loc_82B5DE5C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B5DE64"))) PPC_WEAK_FUNC(sub_82B5DE64);
PPC_FUNC_IMPL(__imp__sub_82B5DE64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B5DE68"))) PPC_WEAK_FUNC(sub_82B5DE68);
PPC_FUNC_IMPL(__imp__sub_82B5DE68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,30
	cr6.compare<uint32_t>(ctx.r4.u32, 30, xer);
	// bgt cr6,0x82b5df94
	if (cr6.gt) goto loc_82B5DF94;
	// lis r12,-32074
	ctx.r12.s64 = -2102001664;
	// rlwinm r0,r4,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-8568
	ctx.r12.s64 = ctx.r12.s64 + -8568;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r4.u32) {
	case 0:
		goto loc_82B5DF94;
	case 1:
		goto loc_82B5DF04;
	case 2:
		goto loc_82B5DF24;
	case 3:
		goto loc_82B5DF88;
	case 4:
		goto loc_82B5DF04;
	case 5:
		goto loc_82B5DF44;
	case 6:
		goto loc_82B5DF64;
	case 7:
		goto loc_82B5DF64;
	case 8:
		goto loc_82B5DF64;
	case 9:
		goto loc_82B5DF64;
	case 10:
		goto loc_82B5DF88;
	case 11:
		goto loc_82B5DF88;
	case 12:
		goto loc_82B5DF88;
	case 13:
		goto loc_82B5DF88;
	case 14:
		goto loc_82B5DF88;
	case 15:
		goto loc_82B5DF88;
	case 16:
		goto loc_82B5DF88;
	case 17:
		goto loc_82B5DF88;
	case 18:
		goto loc_82B5DF88;
	case 19:
		goto loc_82B5DF88;
	case 20:
		goto loc_82B5DF88;
	case 21:
		goto loc_82B5DF88;
	case 22:
		goto loc_82B5DF88;
	case 23:
		goto loc_82B5DF88;
	case 24:
		goto loc_82B5DF88;
	case 25:
		goto loc_82B5DF88;
	case 26:
		goto loc_82B5DF88;
	case 27:
		goto loc_82B5DF88;
	case 28:
		goto loc_82B5DF88;
	case 29:
		goto loc_82B5DF88;
	case 30:
		goto loc_82B5DF04;
	default:
		return;
	}
	// lwz r21,-8300(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + -8300);
	// lwz r21,-8444(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + -8444);
	// lwz r21,-8412(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + -8412);
	// lwz r21,-8312(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + -8312);
	// lwz r21,-8444(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + -8444);
	// lwz r21,-8380(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + -8380);
	// lwz r21,-8348(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + -8348);
	// lwz r21,-8348(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + -8348);
	// lwz r21,-8348(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + -8348);
	// lwz r21,-8348(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + -8348);
	// lwz r21,-8312(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + -8312);
	// lwz r21,-8312(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + -8312);
	// lwz r21,-8312(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + -8312);
	// lwz r21,-8312(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + -8312);
	// lwz r21,-8312(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + -8312);
	// lwz r21,-8312(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + -8312);
	// lwz r21,-8312(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + -8312);
	// lwz r21,-8312(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + -8312);
	// lwz r21,-8312(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + -8312);
	// lwz r21,-8312(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + -8312);
	// lwz r21,-8312(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + -8312);
	// lwz r21,-8312(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + -8312);
	// lwz r21,-8312(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + -8312);
	// lwz r21,-8312(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + -8312);
	// lwz r21,-8312(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + -8312);
	// lwz r21,-8312(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + -8312);
	// lwz r21,-8312(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + -8312);
	// lwz r21,-8312(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + -8312);
	// lwz r21,-8312(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + -8312);
	// lwz r21,-8312(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + -8312);
	// lwz r21,-8444(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + -8444);
loc_82B5DF04:
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// lis r3,510
	ctx.r3.s64 = 33423360;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b5df1c
	if (cr6.eq) goto loc_82B5DF1C;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// blr 
	return;
loc_82B5DF1C:
	// ori r3,r3,15
	ctx.r3.u64 = ctx.r3.u64 | 15;
	// blr 
	return;
loc_82B5DF24:
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// lis r3,510
	ctx.r3.s64 = 33423360;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b5df3c
	if (cr6.eq) goto loc_82B5DF3C;
	// ori r3,r3,16
	ctx.r3.u64 = ctx.r3.u64 | 16;
	// blr 
	return;
loc_82B5DF3C:
	// ori r3,r3,17
	ctx.r3.u64 = ctx.r3.u64 | 17;
	// blr 
	return;
loc_82B5DF44:
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// lis r3,510
	ctx.r3.s64 = 33423360;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b5df5c
	if (cr6.eq) goto loc_82B5DF5C;
	// ori r3,r3,18
	ctx.r3.u64 = ctx.r3.u64 | 18;
	// blr 
	return;
loc_82B5DF5C:
	// ori r3,r3,19
	ctx.r3.u64 = ctx.r3.u64 | 19;
	// blr 
	return;
loc_82B5DF64:
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b5df7c
	if (cr6.eq) goto loc_82B5DF7C;
	// lis r3,515
	ctx.r3.s64 = 33751040;
	// ori r3,r3,64
	ctx.r3.u64 = ctx.r3.u64 | 64;
	// blr 
	return;
loc_82B5DF7C:
	// lis r3,510
	ctx.r3.s64 = 33423360;
	// ori r3,r3,12
	ctx.r3.u64 = ctx.r3.u64 | 12;
	// blr 
	return;
loc_82B5DF88:
	// lis r3,510
	ctx.r3.s64 = 33423360;
	// ori r3,r3,13
	ctx.r3.u64 = ctx.r3.u64 | 13;
	// blr 
	return;
loc_82B5DF94:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B5DF9C"))) PPC_WEAK_FUNC(sub_82B5DF9C);
PPC_FUNC_IMPL(__imp__sub_82B5DF9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B5DFA0"))) PPC_WEAK_FUNC(sub_82B5DFA0);
PPC_FUNC_IMPL(__imp__sub_82B5DFA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,18200
	ctx.r5.s64 = ctx.r11.s64 + 18200;
	// b 0x82d20da8
	sub_82D20DA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B5DFB0"))) PPC_WEAK_FUNC(sub_82B5DFB0);
PPC_FUNC_IMPL(__imp__sub_82B5DFB0) {
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
	// lwz r11,240(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82b5e02c
	if (!cr6.eq) goto loc_82B5E02C;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d19788
	ctx.lr = 0x82B5DFDC;
	sub_82D19788(ctx, base);
	// bl 0x82d95ee0
	ctx.lr = 0x82B5DFE0;
	sub_82D95EE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b5e034
	if (cr6.eq) goto loc_82B5E034;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82d96368
	ctx.lr = 0x82B5DFFC;
	sub_82D96368(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b5e034
	if (cr6.eq) goto loc_82B5E034;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(ctx.r11.u32, 30, xer);
	// bge cr6,0x82b5e034
	if (!cr6.lt) goto loc_82B5E034;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B5E024;
	sub_82D19788(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B5E02C:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d19788
	ctx.lr = 0x82B5E034;
	sub_82D19788(ctx, base);
loc_82B5E034:
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

__attribute__((alias("__imp__sub_82B5E048"))) PPC_WEAK_FUNC(sub_82B5E048);
PPC_FUNC_IMPL(__imp__sub_82B5E048) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x83a7d958
	ctx.lr = 0x82B5E060;
	sub_83A7D958(ctx, base);
	// bl 0x83524138
	ctx.lr = 0x82B5E064;
	sub_83524138(ctx, base);
	// ld r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 256);
	// rotlwi r10,r3,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lis r8,-32208
	ctx.r8.s64 = -2110783488;
	// subf r7,r9,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r9.s64;
	// clrldi r6,r7,32
	ctx.r6.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,23372(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 23372);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
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

__attribute__((alias("__imp__sub_82B5E0A8"))) PPC_WEAK_FUNC(sub_82B5E0A8);
PPC_FUNC_IMPL(__imp__sub_82B5E0A8) {
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
	// bl 0x82da8d18
	ctx.lr = 0x82B5E0C0;
	sub_82DA8D18(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B5E0D4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r9,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
	// stw r8,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r7,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r7.u32);
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

__attribute__((alias("__imp__sub_82B5E114"))) PPC_WEAK_FUNC(sub_82B5E114);
PPC_FUNC_IMPL(__imp__sub_82B5E114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B5E118"))) PPC_WEAK_FUNC(sub_82B5E118);
PPC_FUNC_IMPL(__imp__sub_82B5E118) {
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
	// bl 0x82da8d18
	ctx.lr = 0x82B5E130;
	sub_82DA8D18(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B5E144;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r11.u8);
	// stb r11,49(r31)
	PPC_STORE_U8(ctx.r31.u32 + 49, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82B5E168"))) PPC_WEAK_FUNC(sub_82B5E168);
PPC_FUNC_IMPL(__imp__sub_82B5E168) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B5E170;
	__savegprlr_29(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82d86078
	ctx.lr = 0x82B5E178;
	sub_82D86078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b5e290
	if (cr6.eq) goto loc_82B5E290;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x82daa560
	ctx.lr = 0x82B5E18C;
	sub_82DAA560(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r31,52(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x82da9f18
	ctx.lr = 0x82B5E19C;
	sub_82DA9F18(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r6,200
	ctx.r6.s64 = 200;
	// bl 0x82da9890
	ctx.lr = 0x82B5E1B0;
	sub_82DA9890(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82da8d18
	ctx.lr = 0x82B5E1B8;
	sub_82DA8D18(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B5E1CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stb r30,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r30.u8);
	// stb r30,193(r1)
	PPC_STORE_U8(ctx.r1.u32 + 193, ctx.r30.u8);
	// bl 0x82b5e0a8
	ctx.lr = 0x82B5E1E0;
	sub_82B5E0A8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// bl 0x82da9b98
	ctx.lr = 0x82B5E1EC;
	sub_82DA9B98(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82da8e68
	ctx.lr = 0x82B5E1F8;
	sub_82DA8E68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x82da9740
	ctx.lr = 0x82B5E204;
	sub_82DA9740(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82da8c38
	ctx.lr = 0x82B5E20C;
	sub_82DA8C38(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82da8c38
	ctx.lr = 0x82B5E214;
	sub_82DA8C38(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82da8d18
	ctx.lr = 0x82B5E21C;
	sub_82DA8D18(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B5E230;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stb r30,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r30.u8);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// stb r30,129(r1)
	PPC_STORE_U8(ctx.r1.u32 + 129, ctx.r30.u8);
	// bl 0x82b5e0a8
	ctx.lr = 0x82B5E240;
	sub_82B5E0A8(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82da9c78
	ctx.lr = 0x82B5E24C;
	sub_82DA9C78(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82da8e68
	ctx.lr = 0x82B5E258;
	sub_82DA8E68(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da9740
	ctx.lr = 0x82B5E264;
	sub_82DA9740(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82da8c38
	ctx.lr = 0x82B5E26C;
	sub_82DA8C38(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82da8c38
	ctx.lr = 0x82B5E274;
	sub_82DA8C38(ctx, base);
	// bl 0x82d95ee0
	ctx.lr = 0x82B5E278;
	sub_82D95EE0(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82b5e290
	if (cr6.eq) goto loc_82B5E290;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da91b0
	ctx.lr = 0x82B5E290;
	sub_82DA91B0(ctx, base);
loc_82B5E290:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B5E298"))) PPC_WEAK_FUNC(sub_82B5E298);
PPC_FUNC_IMPL(__imp__sub_82B5E298) {
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
	// lwz r11,240(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82b5e2e0
	if (!cr6.eq) goto loc_82B5E2E0;
	// bl 0x82b5e168
	ctx.lr = 0x82B5E2BC;
	sub_82B5E168(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82da9f18
	ctx.lr = 0x82B5E2C4;
	sub_82DA9F18(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82B5E2D4;
	sub_82D20DA8(ctx, base);
	// li r4,29
	ctx.r4.s64 = 29;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d17da0
	ctx.lr = 0x82B5E2E0;
	sub_82D17DA0(ctx, base);
loc_82B5E2E0:
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

__attribute__((alias("__imp__sub_82B5E2F4"))) PPC_WEAK_FUNC(sub_82B5E2F4);
PPC_FUNC_IMPL(__imp__sub_82B5E2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B5E2F8"))) PPC_WEAK_FUNC(sub_82B5E2F8);
PPC_FUNC_IMPL(__imp__sub_82B5E2F8) {
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
	// bl 0x82d95ee0
	ctx.lr = 0x82B5E310;
	sub_82D95EE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b5e350
	if (cr6.eq) goto loc_82B5E350;
	// ld r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 256);
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// ble cr6,0x82b5e350
	if (!cr6.gt) goto loc_82B5E350;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b5e048
	ctx.lr = 0x82B5E330;
	sub_82B5E048(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r11,18208
	ctx.r5.s64 = ctx.r11.s64 + 18208;
	// lfs f0,-228(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -228);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82b5e350
	if (!cr6.gt) goto loc_82B5E350;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82B5E350;
	sub_82D20DA8(ctx, base);
loc_82B5E350:
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

__attribute__((alias("__imp__sub_82B5E368"))) PPC_WEAK_FUNC(sub_82B5E368);
PPC_FUNC_IMPL(__imp__sub_82B5E368) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82d95ee0
	ctx.lr = 0x82B5E37C;
	sub_82D95EE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82b5e390
	if (!cr6.eq) goto loc_82B5E390;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82b5e3a4
	goto loc_82B5E3A4;
loc_82B5E390:
	// bl 0x830ff290
	ctx.lr = 0x82B5E394;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r11,r11,-58
	ctx.r11.s64 = ctx.r11.s64 + -58;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_82B5E3A4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b5e3c8
	if (!cr6.eq) goto loc_82B5E3C8;
loc_82B5E3B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82B5E3C8:
	// bl 0x82d86078
	ctx.lr = 0x82B5E3CC;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b5e3b0
	if (cr6.eq) goto loc_82B5E3B0;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x82daa560
	ctx.lr = 0x82B5E3DC;
	sub_82DAA560(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b5e0a8
	ctx.lr = 0x82B5E3E8;
	sub_82B5E0A8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da9c78
	ctx.lr = 0x82B5E3F4;
	sub_82DA9C78(ctx, base);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82daa370
	ctx.lr = 0x82B5E3FC;
	sub_82DAA370(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82da8c38
	ctx.lr = 0x82B5E408;
	sub_82DA8C38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B5E420"))) PPC_WEAK_FUNC(sub_82B5E420);
PPC_FUNC_IMPL(__imp__sub_82B5E420) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r5,108
	ctx.r5.s64 = 7077888;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,140
	ctx.r5.u64 = ctx.r5.u64 | 140;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B5E450;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B5E460;
	sub_82D19788(ctx, base);
	// lbz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82b5e4a0
	if (cr6.eq) goto loc_82B5E4A0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B5E478:
	// bl 0x82d19788
	ctx.lr = 0x82B5E47C;
	sub_82D19788(ctx, base);
loc_82B5E47C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82B5E480:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B5E48C;
	sub_82D19788(ctx, base);
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
loc_82B5E4A0:
	// bl 0x830ff290
	ctx.lr = 0x82B5E4A4;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r4,2
	ctx.r4.s64 = 2;
	// cmplwi cr6,r11,58
	cr6.compare<uint32_t>(ctx.r11.u32, 58, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82b5e4c0
	if (!cr6.eq) goto loc_82B5E4C0;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82b5e478
	goto loc_82B5E478;
loc_82B5E4C0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,108
	ctx.r5.s64 = 7077888;
	// ori r5,r5,211
	ctx.r5.u64 = ctx.r5.u64 | 211;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B5E4D8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B5E4E8;
	sub_82D19788(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b5e368
	ctx.lr = 0x82B5E4F0;
	sub_82B5E368(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82b5e47c
	if (cr6.eq) goto loc_82B5E47C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,506
	ctx.r5.s64 = 33161216;
	// li r4,3
	ctx.r4.s64 = 3;
	// ori r5,r5,160
	ctx.r5.u64 = ctx.r5.u64 | 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B5E51C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// b 0x82b5e480
	goto loc_82B5E480;
}

__attribute__((alias("__imp__sub_82B5E524"))) PPC_WEAK_FUNC(sub_82B5E524);
PPC_FUNC_IMPL(__imp__sub_82B5E524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B5E528"))) PPC_WEAK_FUNC(sub_82B5E528);
PPC_FUNC_IMPL(__imp__sub_82B5E528) {
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
	// lwz r11,240(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82b5e564
	if (!cr6.eq) goto loc_82B5E564;
	// bl 0x82d86078
	ctx.lr = 0x82B5E54C;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b5e56c
	if (cr6.eq) goto loc_82B5E56C;
	// lwz r3,52(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bl 0x82da9678
	ctx.lr = 0x82B5E55C;
	sub_82DA9678(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r11.u32);
loc_82B5E564:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b5e420
	ctx.lr = 0x82B5E56C;
	sub_82B5E420(ctx, base);
loc_82B5E56C:
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

__attribute__((alias("__imp__sub_82B5E580"))) PPC_WEAK_FUNC(sub_82B5E580);
PPC_FUNC_IMPL(__imp__sub_82B5E580) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82B5E588;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,18320
	ctx.r9.s64 = ctx.r11.s64 + 18320;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r31,r3,224
	ctx.r31.s64 = ctx.r3.s64 + 224;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// li r30,1
	ctx.r30.s64 = 1;
	// li r26,2
	ctx.r26.s64 = 2;
	// li r28,15
	ctx.r28.s64 = 15;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82B5E5BC:
	// addi r31,r31,-64
	ctx.r31.s64 = ctx.r31.s64 + -64;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b5e5dc
	if (cr6.lt) goto loc_82B5E5DC;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B5E5DC;
	sub_825952B8(ctx, base);
loc_82B5E5DC:
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
	// bge 0x82b5e5bc
	if (!cr0.lt) goto loc_82B5E5BC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d25548
	ctx.lr = 0x82B5E5F8;
	sub_82D25548(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B5E600"))) PPC_WEAK_FUNC(sub_82B5E600);
PPC_FUNC_IMPL(__imp__sub_82B5E600) {
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
	// bl 0x82b5e580
	ctx.lr = 0x82B5E620;
	sub_82B5E580(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b5e638
	if (cr6.eq) goto loc_82B5E638;
	// bl 0x82416268
	ctx.lr = 0x82B5E634;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B5E638:
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

__attribute__((alias("__imp__sub_82B5E650"))) PPC_WEAK_FUNC(sub_82B5E650);
PPC_FUNC_IMPL(__imp__sub_82B5E650) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82B5E690;
	sub_8259CB28(ctx, base);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r9,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r9.u32);
	// lwz r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stw r8,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r8.u32);
	// lwz r7,56(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// stw r7,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r7.u32);
	// lwz r6,60(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r6,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r6.u32);
	// lwz r5,64(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// stw r5,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r5.u32);
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stw r4,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r4.u32);
	// ld r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// std r3,56(r30)
	PPC_STORE_U64(ctx.r30.u32 + 56, ctx.r3.u64);
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

__attribute__((alias("__imp__sub_82B5E6E4"))) PPC_WEAK_FUNC(sub_82B5E6E4);
PPC_FUNC_IMPL(__imp__sub_82B5E6E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B5E6E8"))) PPC_WEAK_FUNC(sub_82B5E6E8);
PPC_FUNC_IMPL(__imp__sub_82B5E6E8) {
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
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82B5E710;
	sub_8259CB28(ctx, base);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// lwz r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r9,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// lwz r8,36(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stw r8,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r8.u32);
	// lwz r7,44(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// stw r7,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r7.u32);
	// lwz r6,48(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// stw r6,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r6.u32);
	// ld r5,56(r30)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r30.u32 + 56);
	// std r5,56(r31)
	PPC_STORE_U64(ctx.r31.u32 + 56, ctx.r5.u64);
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

__attribute__((alias("__imp__sub_82B5E764"))) PPC_WEAK_FUNC(sub_82B5E764);
PPC_FUNC_IMPL(__imp__sub_82B5E764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B5E768"))) PPC_WEAK_FUNC(sub_82B5E768);
PPC_FUNC_IMPL(__imp__sub_82B5E768) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82B5E770;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8308e078
	ctx.lr = 0x82B5E784;
	sub_8308E078(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d253f8
	ctx.lr = 0x82B5E79C;
	sub_82D253F8(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,18320
	ctx.r9.s64 = ctx.r11.s64 + 18320;
	// li r25,1
	ctx.r25.s64 = 1;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// addi r31,r29,96
	ctx.r31.s64 = ctx.r29.s64 + 96;
	// stw r8,72(r29)
	PPC_STORE_U32(ctx.r29.u32 + 72, ctx.r8.u32);
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// li r24,15
	ctx.r24.s64 = 15;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r27,2
	ctx.r27.s64 = 2;
	// addi r26,r11,-22544
	ctx.r26.s64 = ctx.r11.s64 + -22544;
loc_82B5E7D4:
	// stw r24,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r24.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cc28
	ctx.lr = 0x82B5E7F0;
	sub_8259CC28(ctx, base);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r27,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r27.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r25,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r25.u32);
	// std r30,56(r31)
	PPC_STORE_U64(ctx.r31.u32 + 56, ctx.r30.u64);
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// bge 0x82b5e7d4
	if (!cr0.lt) goto loc_82B5E7D4;
	// li r11,31
	ctx.r11.s64 = 31;
	// stw r27,228(r29)
	PPC_STORE_U32(ctx.r29.u32 + 228, ctx.r27.u32);
	// stw r27,232(r29)
	PPC_STORE_U32(ctx.r29.u32 + 232, ctx.r27.u32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stw r11,224(r29)
	PPC_STORE_U32(ctx.r29.u32 + 224, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r30,236(r29)
	PPC_STORE_U8(ctx.r29.u32 + 236, ctx.r30.u8);
	// addi r31,r10,17732
	ctx.r31.s64 = ctx.r10.s64 + 17732;
	// stw r30,240(r29)
	PPC_STORE_U32(ctx.r29.u32 + 240, ctx.r30.u32);
	// stb r25,244(r29)
	PPC_STORE_U8(ctx.r29.u32 + 244, ctx.r25.u8);
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// std r30,256(r29)
	PPC_STORE_U64(ctx.r29.u32 + 256, ctx.r30.u64);
	// stb r30,264(r29)
	PPC_STORE_U8(ctx.r29.u32 + 264, ctx.r30.u8);
	// bl 0x82d20ae0
	ctx.lr = 0x82B5E850;
	sub_82D20AE0(ctx, base);
	// addi r4,r31,64
	ctx.r4.s64 = ctx.r31.s64 + 64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d20ae0
	ctx.lr = 0x82B5E85C;
	sub_82D20AE0(ctx, base);
	// addi r4,r31,116
	ctx.r4.s64 = ctx.r31.s64 + 116;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d20ae0
	ctx.lr = 0x82B5E868;
	sub_82D20AE0(ctx, base);
	// addi r4,r31,168
	ctx.r4.s64 = ctx.r31.s64 + 168;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d20ae0
	ctx.lr = 0x82B5E874;
	sub_82D20AE0(ctx, base);
	// addi r4,r31,-44
	ctx.r4.s64 = ctx.r31.s64 + -44;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d20ae0
	ctx.lr = 0x82B5E880;
	sub_82D20AE0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d23390
	ctx.lr = 0x82B5E890;
	sub_82D23390(ctx, base);
	// addi r31,r29,248
	ctx.r31.s64 = ctx.r29.s64 + 248;
	// li r28,27
	ctx.r28.s64 = 27;
loc_82B5E898:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B5E8AC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b5e8c0
	if (cr6.eq) goto loc_82B5E8C0;
	// bl 0x82c2f748
	ctx.lr = 0x82B5E8B8;
	sub_82C2F748(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82b5e8c4
	goto loc_82B5E8C4;
loc_82B5E8C0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82B5E8C4:
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82b5e8d8
	if (cr6.eq) goto loc_82B5E8D8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83103100
	ctx.lr = 0x82B5E8D8;
	sub_83103100(ctx, base);
loc_82B5E8D8:
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82b5e898
	if (!cr0.eq) goto loc_82B5E898;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B5E8F0"))) PPC_WEAK_FUNC(sub_82B5E8F0);
PPC_FUNC_IMPL(__imp__sub_82B5E8F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B5E8F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x830ff290
	ctx.lr = 0x82B5E904;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,58
	cr6.compare<uint32_t>(ctx.r11.u32, 58, xer);
	// bne cr6,0x82b5e918
	if (!cr6.eq) goto loc_82B5E918;
	// stb r28,244(r31)
	PPC_STORE_U8(ctx.r31.u32 + 244, ctx.r28.u8);
loc_82B5E918:
	// bl 0x82d86078
	ctx.lr = 0x82B5E91C;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b5eab4
	if (cr6.eq) goto loc_82B5EAB4;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x82daa560
	ctx.lr = 0x82B5E92C;
	sub_82DAA560(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82b5e0a8
	ctx.lr = 0x82B5E938;
	sub_82B5E0A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// bl 0x82da9b98
	ctx.lr = 0x82B5E944;
	sub_82DA9B98(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82b5e650
	ctx.lr = 0x82B5E950;
	sub_82B5E650(ctx, base);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82b5e0a8
	ctx.lr = 0x82B5E958;
	sub_82B5E0A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// bl 0x82da9c78
	ctx.lr = 0x82B5E964;
	sub_82DA9C78(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82b5e650
	ctx.lr = 0x82B5E970;
	sub_82B5E650(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832e8
	ctx.lr = 0x82B5E978;
	sub_825832E8(ctx, base);
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r10,296(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	// li r29,1
	ctx.r29.s64 = 1;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// stw r3,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r3.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stb r8,236(r31)
	PPC_STORE_U8(ctx.r31.u32 + 236, ctx.r8.u8);
	// stw r10,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r10.u32);
	// beq cr6,0x82b5e9ac
	if (cr6.eq) goto loc_82B5E9AC;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// beq cr6,0x82b5e9ac
	if (cr6.eq) goto loc_82B5E9AC;
	// stb r29,264(r31)
	PPC_STORE_U8(ctx.r31.u32 + 264, ctx.r29.u8);
loc_82B5E9AC:
	// lbz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 244);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b5e9c0
	if (cr6.eq) goto loc_82B5E9C0;
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// b 0x82b5e9cc
	goto loc_82B5E9CC;
loc_82B5E9C0:
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
loc_82B5E9CC:
	// stw r11,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r11.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82b5e9e4
	if (cr6.eq) goto loc_82B5E9E4;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x82b5e9e4
	if (cr6.eq) goto loc_82B5E9E4;
	// stb r29,264(r31)
	PPC_STORE_U8(ctx.r31.u32 + 264, ctx.r29.u8);
loc_82B5E9E4:
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// bne cr6,0x82b5e9f0
	if (!cr6.eq) goto loc_82B5E9F0;
	// stb r29,264(r31)
	PPC_STORE_U8(ctx.r31.u32 + 264, ctx.r29.u8);
loc_82B5E9F0:
	// lbz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 264);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b5ea68
	if (cr6.eq) goto loc_82B5EA68;
	// stw r28,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r28.u32);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// stw r29,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,17984
	ctx.r4.s64 = ctx.r11.s64 + 17984;
	// bl 0x837b0c10
	ctx.lr = 0x82B5EA14;
	sub_837B0C10(ctx, base);
	// li r30,-1
	ctx.r30.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82B5EA2C;
	sub_8259CB28(ctx, base);
	// stw r28,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r28.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x8259cb28
	ctx.lr = 0x82B5EA44;
	sub_8259CB28(ctx, base);
	// stw r29,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r29.u32);
	// lis r4,527
	ctx.r4.s64 = 34537472;
	// li r5,1
	ctx.r5.s64 = 1;
	// ori r4,r4,158
	ctx.r4.u64 = ctx.r4.u64 | 158;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d21730
	ctx.lr = 0x82B5EA5C;
	sub_82D21730(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82B5EA64;
	sub_8387E8E0(ctx, base);
	// b 0x82b5ea94
	goto loc_82B5EA94;
loc_82B5EA68:
	// rlwinm r11,r10,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// bl 0x82b5e6e8
	ctx.lr = 0x82B5EA7C;
	sub_82B5E6E8(ctx, base);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// bl 0x82b5e6e8
	ctx.lr = 0x82B5EA94;
	sub_82B5E6E8(ctx, base);
loc_82B5EA94:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x82B5EA9C;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82da8c38
	ctx.lr = 0x82B5EAA4;
	sub_82DA8C38(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8387e8e0
	ctx.lr = 0x82B5EAAC;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82da8c38
	ctx.lr = 0x82B5EAB4;
	sub_82DA8C38(ctx, base);
loc_82B5EAB4:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B5EABC"))) PPC_WEAK_FUNC(sub_82B5EABC);
PPC_FUNC_IMPL(__imp__sub_82B5EABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B5EAC0"))) PPC_WEAK_FUNC(sub_82B5EAC0);
PPC_FUNC_IMPL(__imp__sub_82B5EAC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82B5EAC8;
	__savegprlr_23(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r10,224(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// add r25,r11,r3
	ctx.r25.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,232(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 232);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// subfe r7,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// lwz r8,136(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 136);
	// subf r6,r8,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r8.s64;
	// cntlzw r5,r6
	ctx.r5.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r31,r5,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// and r30,r7,r31
	ctx.r30.u64 = ctx.r7.u64 & ctx.r31.u64;
	// bl 0x82d19a88
	ctx.lr = 0x82B5EB04;
	sub_82D19A88(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b5ee24
	if (cr6.eq) goto loc_82B5EE24;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// li r23,0
	ctx.r23.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// bne cr6,0x82b5eb3c
	if (!cr6.eq) goto loc_82B5EB3C;
	// lbz r10,244(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 244);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b5eb40
	if (!cr6.eq) goto loc_82B5EB40;
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b5eb40
	if (cr6.eq) goto loc_82B5EB40;
loc_82B5EB3C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82B5EB40:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// addi r31,r11,17968
	ctx.r31.s64 = ctx.r11.s64 + 17968;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// beq cr6,0x82b5ec04
	if (cr6.eq) goto loc_82B5EC04;
	// addi r4,r31,20
	ctx.r4.s64 = ctx.r31.s64 + 20;
	// bctrl 
	ctx.lr = 0x82B5EB70;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r31,36
	ctx.r4.s64 = ctx.r31.s64 + 36;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r7,72(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 72);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82B5EB8C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x830ff290
	ctx.lr = 0x82B5EB90;
	sub_830FF290(ctx, base);
	// lwz r6,32(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r6,58
	cr6.compare<uint32_t>(ctx.r6.u32, 58, xer);
	// bne cr6,0x82b5ebc8
	if (!cr6.eq) goto loc_82B5EBC8;
	// addi r4,r31,48
	ctx.r4.s64 = ctx.r31.s64 + 48;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r31,r29,100
	ctx.r31.s64 = ctx.r29.s64 + 100;
	// bl 0x837b0c10
	ctx.lr = 0x82B5EBAC;
	sub_837B0C10(ctx, base);
	// lis r5,550
	ctx.r5.s64 = 36044800;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r5,r5,421
	ctx.r5.u64 = ctx.r5.u64 | 421;
	// bl 0x82a69a28
	ctx.lr = 0x82B5EBC0;
	sub_82A69A28(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82B5EBC8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lbz r5,236(r28)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r28.u32 + 236);
	// lwz r4,224(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 224);
	// bl 0x82b5de68
	ctx.lr = 0x82B5EBD8;
	sub_82B5DE68(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r31,60
	ctx.r4.s64 = ctx.r31.s64 + 60;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r31,r29,100
	ctx.r31.s64 = ctx.r29.s64 + 100;
	// bl 0x837b0c10
	ctx.lr = 0x82B5EBEC;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82a69a28
	ctx.lr = 0x82B5EBFC;
	sub_82A69A28(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82B5EC04:
	// addi r4,r31,72
	ctx.r4.s64 = ctx.r31.s64 + 72;
	// bctrl 
	ctx.lr = 0x82B5EC0C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r31,92
	ctx.r4.s64 = ctx.r31.s64 + 92;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r7,72(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 72);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82B5EC28;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,100(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// addi r30,r29,100
	ctx.r30.s64 = ctx.r29.s64 + 100;
	// addi r4,r31,104
	ctx.r4.s64 = ctx.r31.s64 + 104;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82B5EC44;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b5ee24
	if (cr6.eq) goto loc_82B5EE24;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b5ee24
	if (cr6.eq) goto loc_82B5EE24;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// addi r27,r11,100
	ctx.r27.s64 = ctx.r11.s64 + 100;
	// addi r4,r31,116
	ctx.r4.s64 = ctx.r31.s64 + 116;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B5EC74;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b5ee24
	if (cr6.eq) goto loc_82B5EE24;
	// addi r26,r25,96
	ctx.r26.s64 = ctx.r25.s64 + 96;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82B5EC90;
	sub_82D291E0(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B5ECA8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b5ecd4
	if (cr6.eq) goto loc_82B5ECD4;
	// addi r11,r24,62
	ctx.r11.s64 = ctx.r24.s64 + 62;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b5ecd4
	if (cr6.eq) goto loc_82B5ECD4;
	// ld r6,152(r25)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r25.u32 + 152);
	// lwz r5,124(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 124);
	// bl 0x82c2f918
	ctx.lr = 0x82B5ECD4;
	sub_82C2F918(ctx, base);
loc_82B5ECD4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r31,128
	ctx.r4.s64 = ctx.r31.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B5ECEC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b5ee24
	if (cr6.eq) goto loc_82B5EE24;
	// lwz r5,32(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32);
	// lwz r4,36(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 36);
	// bl 0x82c36c58
	ctx.lr = 0x82B5ED00;
	sub_82C36C58(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r31,144
	ctx.r4.s64 = ctx.r31.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B5ED18;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r31,152
	ctx.r4.s64 = ctx.r31.s64 + 152;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B5ED34;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r4,r31,164
	ctx.r4.s64 = ctx.r31.s64 + 164;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82B5ED50;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x82b5ee24
	if (cr6.eq) goto loc_82B5EE24;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x82b5ee24
	if (cr6.eq) goto loc_82B5EE24;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b5ee24
	if (cr6.eq) goto loc_82B5EE24;
	// lwz r11,140(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 140);
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r23,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r23.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// stb r23,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r23.u8);
	// beq cr6,0x82b5edb8
	if (cr6.eq) goto loc_82B5EDB8;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x82b5ee1c
	if (!cr6.eq) goto loc_82B5EE1C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r31,192
	ctx.r4.s64 = ctx.r31.s64 + 192;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B5EDAC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r4,514
	ctx.r4.s64 = 33685504;
	// ori r4,r4,38
	ctx.r4.u64 = ctx.r4.u64 | 38;
	// b 0x82b5eddc
	goto loc_82B5EDDC;
loc_82B5EDB8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r31,180
	ctx.r4.s64 = ctx.r31.s64 + 180;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B5EDD4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r4,514
	ctx.r4.s64 = 33685504;
	// ori r4,r4,37
	ctx.r4.u64 = ctx.r4.u64 | 37;
loc_82B5EDDC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d29598
	ctx.lr = 0x82B5EDE4;
	sub_82D29598(ctx, base);
	// lis r4,505
	ctx.r4.s64 = 33095680;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ori r4,r4,204
	ctx.r4.u64 = ctx.r4.u64 | 204;
	// bl 0x82d29598
	ctx.lr = 0x82B5EDF4;
	sub_82D29598(ctx, base);
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,144(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 144);
	// ori r4,r4,548
	ctx.r4.u64 = ctx.r4.u64 | 548;
	// bl 0x82d042a8
	ctx.lr = 0x82B5EE08;
	sub_82D042A8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82B5EE1C;
	sub_82D291E0(ctx, base);
loc_82B5EE1C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82B5EE24;
	sub_8387E8E0(ctx, base);
loc_82B5EE24:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B5EE2C"))) PPC_WEAK_FUNC(sub_82B5EE2C);
PPC_FUNC_IMPL(__imp__sub_82B5EE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B5EE30"))) PPC_WEAK_FUNC(sub_82B5EE30);
PPC_FUNC_IMPL(__imp__sub_82B5EE30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B5EE38;
	__savegprlr_28(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82B5EE44;
	sub_82D86078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b5ef44
	if (cr6.eq) goto loc_82B5EF44;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x82daa560
	ctx.lr = 0x82B5EE58;
	sub_82DAA560(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r28,52(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x82da9f18
	ctx.lr = 0x82B5EE68;
	sub_82DA9F18(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r6,200
	ctx.r6.s64 = 200;
	// bl 0x82da9890
	ctx.lr = 0x82B5EE7C;
	sub_82DA9890(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82da8d18
	ctx.lr = 0x82B5EE84;
	sub_82DA8D18(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B5EE98;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// stb r31,177(r1)
	PPC_STORE_U8(ctx.r1.u32 + 177, ctx.r31.u8);
	// bl 0x82b5e0a8
	ctx.lr = 0x82B5EEAC;
	sub_82B5E0A8(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da9c78
	ctx.lr = 0x82B5EEB8;
	sub_82DA9C78(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82da8e68
	ctx.lr = 0x82B5EEC4;
	sub_82DA8E68(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82da9740
	ctx.lr = 0x82B5EED0;
	sub_82DA9740(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82da8c38
	ctx.lr = 0x82B5EED8;
	sub_82DA8C38(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82da8c38
	ctx.lr = 0x82B5EEE0;
	sub_82DA8C38(ctx, base);
	// stw r31,88(r28)
	PPC_STORE_U32(ctx.r28.u32 + 88, ctx.r31.u32);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r9,18172
	ctx.r4.s64 = ctx.r9.s64 + 18172;
	// bl 0x837b0c10
	ctx.lr = 0x82B5EEF4;
	sub_837B0C10(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82b7c920
	ctx.lr = 0x82B5EEFC;
	sub_82B7C920(ctx, base);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x82b5ef20
	if (cr6.lt) goto loc_82B5EF20;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B5EF20;
	sub_825952B8(ctx, base);
loc_82B5EF20:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// beq cr6,0x82b5ef44
	if (cr6.eq) goto loc_82B5EF44;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83103100
	ctx.lr = 0x82B5EF44;
	sub_83103100(ctx, base);
loc_82B5EF44:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B5EF4C"))) PPC_WEAK_FUNC(sub_82B5EF4C);
PPC_FUNC_IMPL(__imp__sub_82B5EF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B5EF50"))) PPC_WEAK_FUNC(sub_82B5EF50);
PPC_FUNC_IMPL(__imp__sub_82B5EF50) {
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
	// lwz r11,240(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82b5ef88
	if (!cr6.eq) goto loc_82B5EF88;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,240(r3)
	PPC_STORE_U32(ctx.r3.u32 + 240, ctx.r11.u32);
	// bl 0x82b5ee30
	ctx.lr = 0x82B5EF7C;
	sub_82B5EE30(ctx, base);
	// li r4,27
	ctx.r4.s64 = 27;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d17da0
	ctx.lr = 0x82B5EF88;
	sub_82D17DA0(ctx, base);
loc_82B5EF88:
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

__attribute__((alias("__imp__sub_82B5EF9C"))) PPC_WEAK_FUNC(sub_82B5EF9C);
PPC_FUNC_IMPL(__imp__sub_82B5EF9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B5EFA0"))) PPC_WEAK_FUNC(sub_82B5EFA0);
PPC_FUNC_IMPL(__imp__sub_82B5EFA0) {
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
	// blt cr6,0x82b5efc8
	if (cr6.lt) goto loc_82B5EFC8;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b5efcc
	goto loc_82B5EFCC;
loc_82B5EFC8:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82B5EFCC:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,272
	ctx.r4.s64 = 272;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B5EFE8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b5f004
	if (cr6.eq) goto loc_82B5F004;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82b5e768
	ctx.lr = 0x82B5EFFC;
	sub_82B5E768(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b5f008
	if (!cr6.eq) goto loc_82B5F008;
loc_82B5F004:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B5F008:
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

__attribute__((alias("__imp__sub_82B5F020"))) PPC_WEAK_FUNC(sub_82B5F020);
PPC_FUNC_IMPL(__imp__sub_82B5F020) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83102db0
	ctx.lr = 0x82B5F03C;
	sub_83102DB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b5e420
	ctx.lr = 0x82B5F044;
	sub_82B5E420(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b5e8f0
	ctx.lr = 0x82B5F04C;
	sub_82B5E8F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82b5eac0
	ctx.lr = 0x82B5F058;
	sub_82B5EAC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82b5eac0
	ctx.lr = 0x82B5F064;
	sub_82B5EAC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d199f0
	ctx.lr = 0x82B5F06C;
	sub_82D199F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b5f084
	if (!cr6.eq) goto loc_82B5F084;
	// li r4,74
	ctx.r4.s64 = 74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d17da0
	ctx.lr = 0x82B5F084;
	sub_82D17DA0(ctx, base);
loc_82B5F084:
	// bl 0x83a7d958
	ctx.lr = 0x82B5F088;
	sub_83A7D958(ctx, base);
	// bl 0x83524138
	ctx.lr = 0x82B5F08C;
	sub_83524138(ctx, base);
	// std r3,256(r31)
	PPC_STORE_U64(ctx.r31.u32 + 256, ctx.r3.u64);
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

__attribute__((alias("__imp__sub_82B5F0A8"))) PPC_WEAK_FUNC(sub_82B5F0A8);
PPC_FUNC_IMPL(__imp__sub_82B5F0A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B5F0B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82b5f148
	if (cr6.eq) goto loc_82B5F148;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82B5F0D4;
	sub_82D2D510(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b5f148
	if (cr6.eq) goto loc_82B5F148;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r31,2
	ctx.r31.s64 = 2;
	// addi r11,r11,19432
	ctx.r11.s64 = ctx.r11.s64 + 19432;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
loc_82B5F0F0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzu r4,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x82d3b620
	ctx.lr = 0x82B5F0FC;
	sub_82D3B620(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x82b5f0f0
	if (!cr0.eq) goto loc_82B5F0F0;
	// lwz r3,120(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 120);
	// bl 0x82daa4f8
	ctx.lr = 0x82B5F10C;
	sub_82DAA4F8(ctx, base);
	// bl 0x831f8200
	ctx.lr = 0x82B5F110;
	sub_831F8200(ctx, base);
	// cmplwi cr6,r3,4
	cr6.compare<uint32_t>(ctx.r3.u32, 4, xer);
	// blt cr6,0x82b5f124
	if (cr6.lt) goto loc_82B5F124;
	// bne cr6,0x82b5f148
	if (!cr6.eq) goto loc_82B5F148;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82b5f128
	goto loc_82B5F128;
loc_82B5F124:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82B5F128:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d3b298
	ctx.lr = 0x82B5F130;
	sub_82D3B298(ctx, base);
	// lbz r11,128(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b5f148
	if (cr6.eq) goto loc_82B5F148;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d3b298
	ctx.lr = 0x82B5F148;
	sub_82D3B298(ctx, base);
loc_82B5F148:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B5F150"))) PPC_WEAK_FUNC(sub_82B5F150);
PPC_FUNC_IMPL(__imp__sub_82B5F150) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B5F158;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82b5f200
	if (cr6.eq) goto loc_82B5F200;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82B5F17C;
	sub_82D2D510(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b5f200
	if (cr6.eq) goto loc_82B5F200;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r31,3
	ctx.r31.s64 = 3;
	// addi r11,r11,19440
	ctx.r11.s64 = ctx.r11.s64 + 19440;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
loc_82B5F198:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzu r4,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x82d3b620
	ctx.lr = 0x82B5F1A4;
	sub_82D3B620(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x82b5f198
	if (!cr0.eq) goto loc_82B5F198;
	// lwz r3,120(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 120);
	// bl 0x82daa4f8
	ctx.lr = 0x82B5F1B4;
	sub_82DAA4F8(ctx, base);
	// bl 0x825832e8
	ctx.lr = 0x82B5F1B8;
	sub_825832E8(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x82b5f1f4
	if (cr6.lt) goto loc_82B5F1F4;
	// beq cr6,0x82b5f1e0
	if (cr6.eq) goto loc_82B5F1E0;
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// bge cr6,0x82b5f200
	if (!cr6.lt) goto loc_82B5F200;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d3b298
	ctx.lr = 0x82B5F1D8;
	sub_82D3B298(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82B5F1E0:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d3b298
	ctx.lr = 0x82B5F1EC;
	sub_82D3B298(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82B5F1F4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d3b298
	ctx.lr = 0x82B5F200;
	sub_82D3B298(ctx, base);
loc_82B5F200:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B5F208"))) PPC_WEAK_FUNC(sub_82B5F208);
PPC_FUNC_IMPL(__imp__sub_82B5F208) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82b5f2b8
	if (cr6.eq) goto loc_82B5F2B8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,18
	ctx.r4.s64 = 18;
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82B5F23C;
	sub_82D2D510(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b5f2b8
	if (cr6.eq) goto loc_82B5F2B8;
	// lwz r3,120(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// bl 0x82daa4f8
	ctx.lr = 0x82B5F250;
	sub_82DAA4F8(ctx, base);
	// bl 0x825832f0
	ctx.lr = 0x82B5F254;
	sub_825832F0(ctx, base);
	// cmplwi cr6,r3,4
	cr6.compare<uint32_t>(ctx.r3.u32, 4, xer);
	// bgt cr6,0x82b5f2a8
	if (cr6.gt) goto loc_82B5F2A8;
	// mtctr r3
	ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82b5f2a8
	if (cr6.eq) goto loc_82B5F2A8;
	// bdz 0x82b5f278
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82B5F278;
	// bdz 0x82b5f284
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82B5F284;
	// bdz 0x82b5f290
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82B5F290;
	// b 0x82b5f29c
	goto loc_82B5F29C;
loc_82B5F278:
	// lis r4,521
	ctx.r4.s64 = 34144256;
	// ori r4,r4,25
	ctx.r4.u64 = ctx.r4.u64 | 25;
	// b 0x82b5f2b0
	goto loc_82B5F2B0;
loc_82B5F284:
	// lis r4,521
	ctx.r4.s64 = 34144256;
	// ori r4,r4,26
	ctx.r4.u64 = ctx.r4.u64 | 26;
	// b 0x82b5f2b0
	goto loc_82B5F2B0;
loc_82B5F290:
	// lis r4,521
	ctx.r4.s64 = 34144256;
	// ori r4,r4,27
	ctx.r4.u64 = ctx.r4.u64 | 27;
	// b 0x82b5f2b0
	goto loc_82B5F2B0;
loc_82B5F29C:
	// lis r4,521
	ctx.r4.s64 = 34144256;
	// ori r4,r4,28
	ctx.r4.u64 = ctx.r4.u64 | 28;
	// b 0x82b5f2b0
	goto loc_82B5F2B0;
loc_82B5F2A8:
	// lis r4,521
	ctx.r4.s64 = 34144256;
	// ori r4,r4,24
	ctx.r4.u64 = ctx.r4.u64 | 24;
loc_82B5F2B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d29598
	ctx.lr = 0x82B5F2B8;
	sub_82D29598(ctx, base);
loc_82B5F2B8:
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

__attribute__((alias("__imp__sub_82B5F2D0"))) PPC_WEAK_FUNC(sub_82B5F2D0);
PPC_FUNC_IMPL(__imp__sub_82B5F2D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B5F2D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82b5f354
	if (cr6.eq) goto loc_82B5F354;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82B5F2FC;
	sub_82D2D510(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b5f354
	if (cr6.eq) goto loc_82B5F354;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r31,2
	ctx.r31.s64 = 2;
	// addi r11,r11,19452
	ctx.r11.s64 = ctx.r11.s64 + 19452;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
loc_82B5F318:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzu r4,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x82d3b620
	ctx.lr = 0x82B5F324;
	sub_82D3B620(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x82b5f318
	if (!cr0.eq) goto loc_82B5F318;
	// lwz r3,120(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 120);
	// bl 0x82daa4f8
	ctx.lr = 0x82B5F334;
	sub_82DAA4F8(ctx, base);
	// bl 0x82daa8b8
	ctx.lr = 0x82B5F338;
	sub_82DAA8B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// bne cr6,0x82b5f350
	if (!cr6.eq) goto loc_82B5F350;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82B5F350:
	// bl 0x82d3b298
	ctx.lr = 0x82B5F354;
	sub_82D3B298(ctx, base);
loc_82B5F354:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B5F35C"))) PPC_WEAK_FUNC(sub_82B5F35C);
PPC_FUNC_IMPL(__imp__sub_82B5F35C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B5F360"))) PPC_WEAK_FUNC(sub_82B5F360);
PPC_FUNC_IMPL(__imp__sub_82B5F360) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B5F368;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82b5f45c
	if (cr6.eq) goto loc_82B5F45C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82B5F38C;
	sub_82D2D510(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b5f45c
	if (cr6.eq) goto loc_82B5F45C;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r31,6
	ctx.r31.s64 = 6;
	// addi r11,r11,19460
	ctx.r11.s64 = ctx.r11.s64 + 19460;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
loc_82B5F3A8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzu r4,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x82d3b620
	ctx.lr = 0x82B5F3B4;
	sub_82D3B620(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x82b5f3a8
	if (!cr0.eq) goto loc_82B5F3A8;
	// lwz r3,120(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 120);
	// bl 0x82daa4f8
	ctx.lr = 0x82B5F3C4;
	sub_82DAA4F8(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x82b5f450
	if (cr6.gt) goto loc_82B5F450;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82b5f400
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B5F400;
	// bdzf 4*cr6+eq,0x82b5f414
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B5F414;
	// bdzf 4*cr6+eq,0x82b5f428
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B5F428;
	// bne cr6,0x82b5f43c
	if (!cr6.eq) goto loc_82B5F43C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d3b298
	ctx.lr = 0x82B5F3F8;
	sub_82D3B298(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82B5F400:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d3b298
	ctx.lr = 0x82B5F40C;
	sub_82D3B298(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82B5F414:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d3b298
	ctx.lr = 0x82B5F420;
	sub_82D3B298(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82B5F428:
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d3b298
	ctx.lr = 0x82B5F434;
	sub_82D3B298(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82B5F43C:
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d3b298
	ctx.lr = 0x82B5F448;
	sub_82D3B298(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82B5F450:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d3b298
	ctx.lr = 0x82B5F45C;
	sub_82D3B298(ctx, base);
loc_82B5F45C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B5F464"))) PPC_WEAK_FUNC(sub_82B5F464);
PPC_FUNC_IMPL(__imp__sub_82B5F464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B5F468"))) PPC_WEAK_FUNC(sub_82B5F468);
PPC_FUNC_IMPL(__imp__sub_82B5F468) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B5F470;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82b5f4f4
	if (cr6.eq) goto loc_82B5F4F4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82B5F494;
	sub_82D2D510(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b5f4f4
	if (cr6.eq) goto loc_82B5F4F4;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r31,2
	ctx.r31.s64 = 2;
	// addi r11,r11,19452
	ctx.r11.s64 = ctx.r11.s64 + 19452;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
loc_82B5F4B0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzu r4,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x82d3b620
	ctx.lr = 0x82B5F4BC;
	sub_82D3B620(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x82b5f4b0
	if (!cr0.eq) goto loc_82B5F4B0;
	// lwz r3,120(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 120);
	// bl 0x82daa4f8
	ctx.lr = 0x82B5F4CC;
	sub_82DAA4F8(ctx, base);
	// bl 0x82dfa5c8
	ctx.lr = 0x82B5F4D0;
	sub_82DFA5C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lbz r10,128(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 128);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addic r8,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r4,r6,r11
	ctx.r4.u64 = ctx.r6.u64 & ctx.r11.u64;
	// bl 0x82d3b298
	ctx.lr = 0x82B5F4F4;
	sub_82D3B298(ctx, base);
loc_82B5F4F4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B5F4FC"))) PPC_WEAK_FUNC(sub_82B5F4FC);
PPC_FUNC_IMPL(__imp__sub_82B5F4FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B5F500"))) PPC_WEAK_FUNC(sub_82B5F500);
PPC_FUNC_IMPL(__imp__sub_82B5F500) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82b5f580
	if (cr6.eq) goto loc_82B5F580;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,18
	ctx.r4.s64 = 18;
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82B5F534;
	sub_82D2D510(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b5f580
	if (cr6.eq) goto loc_82B5F580;
	// bl 0x82d86078
	ctx.lr = 0x82B5F544;
	sub_82D86078(ctx, base);
	// bl 0x82d5ee78
	ctx.lr = 0x82B5F548;
	sub_82D5EE78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b5f56c
	if (cr6.eq) goto loc_82B5F56C;
	// bl 0x82a47e40
	ctx.lr = 0x82B5F554;
	sub_82A47E40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b5f56c
	if (cr6.eq) goto loc_82B5F56C;
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// ori r4,r4,10
	ctx.r4.u64 = ctx.r4.u64 | 10;
	// b 0x82b5f574
	goto loc_82B5F574;
loc_82B5F56C:
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// ori r4,r4,11
	ctx.r4.u64 = ctx.r4.u64 | 11;
loc_82B5F574:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d29598
	ctx.lr = 0x82B5F57C;
	sub_82D29598(ctx, base);
	// stw r31,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r31.u32);
loc_82B5F580:
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

__attribute__((alias("__imp__sub_82B5F598"))) PPC_WEAK_FUNC(sub_82B5F598);
PPC_FUNC_IMPL(__imp__sub_82B5F598) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82b5f608
	if (!cr6.eq) goto loc_82B5F608;
	// lwz r9,108(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// subf r7,r11,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi. r9,r7,2
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82b5f608
	if (cr0.eq) goto loc_82B5F608;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82b5f5d4
	if (cr6.gt) goto loc_82B5F5D4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// b 0x831cc188
	sub_831CC188(ctx, base);
	return;
loc_82B5F5D4:
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// addi r9,r6,19048
	ctx.r9.s64 = ctx.r6.s64 + 19048;
	// lwzx r11,r7,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// addi r4,r9,12
	ctx.r4.s64 = ctx.r9.s64 + 12;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r4
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	// cmpwi cr6,r7,255
	cr6.compare<int32_t>(ctx.r7.s32, 255, xer);
	// bne cr6,0x82b5f608
	if (!cr6.eq) goto loc_82B5F608;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
loc_82B5F608:
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// b 0x82d1eac0
	sub_82D1EAC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B5F610"))) PPC_WEAK_FUNC(sub_82B5F610);
PPC_FUNC_IMPL(__imp__sub_82B5F610) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r8,104(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// li r3,-1
	ctx.r3.s64 = -1;
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// li r11,0
	ctx.r11.s64 = 0;
	// subf r9,r8,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r8.s64;
	// srawi r9,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// ble cr6,0x82b5f664
	if (!cr6.gt) goto loc_82B5F664;
loc_82B5F640:
	// lwzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpw cr6,r7,r6
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, xer);
	// beq cr6,0x82b5f670
	if (cr6.eq) goto loc_82B5F670;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82b5f640
	if (cr6.gt) goto loc_82B5F640;
	// blr 
	return;
loc_82B5F664:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// b 0x831cc188
	sub_831CC188(ctx, base);
	return;
loc_82B5F670:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B5F678"))) PPC_WEAK_FUNC(sub_82B5F678);
PPC_FUNC_IMPL(__imp__sub_82B5F678) {
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
	// lwz r11,124(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82b5f71c
	if (!cr6.eq) goto loc_82B5F71C;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82b5f610
	ctx.lr = 0x82B5F6A8;
	sub_82B5F610(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82d33db0
	ctx.lr = 0x82B5F6B4;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b5f75c
	if (cr6.eq) goto loc_82B5F75C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82B5F6CC;
	sub_82D2D510(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b5f75c
	if (cr6.eq) goto loc_82B5F75C;
	// bl 0x83a970c8
	ctx.lr = 0x82B5F6D8;
	sub_83A970C8(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b5f610
	ctx.lr = 0x82B5F6F0;
	sub_82B5F610(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82d33db0
	ctx.lr = 0x82B5F6FC;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b5f75c
	if (cr6.eq) goto loc_82B5F75C;
	// addi r11,r30,-2
	ctx.r11.s64 = ctx.r30.s64 + -2;
	// li r6,2
	ctx.r6.s64 = 2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// rlwinm r4,r10,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x82d2b608
	ctx.lr = 0x82B5F71C;
	sub_82D2B608(ctx, base);
loc_82B5F71C:
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b5f75c
	if (cr6.eq) goto loc_82B5F75C;
	// bl 0x82daa938
	ctx.lr = 0x82B5F72C;
	sub_82DAA938(ctx, base);
	// lbz r11,129(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 129);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b5f758
	if (cr6.eq) goto loc_82B5F758;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b5f758
	if (!cr6.eq) goto loc_82B5F758;
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// ori r4,r4,11
	ctx.r4.u64 = ctx.r4.u64 | 11;
	// bl 0x82d29598
	ctx.lr = 0x82B5F758;
	sub_82D29598(ctx, base);
loc_82B5F758:
	// stb r30,129(r31)
	PPC_STORE_U8(ctx.r31.u32 + 129, ctx.r30.u8);
loc_82B5F75C:
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

__attribute__((alias("__imp__sub_82B5F774"))) PPC_WEAK_FUNC(sub_82B5F774);
PPC_FUNC_IMPL(__imp__sub_82B5F774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B5F778"))) PPC_WEAK_FUNC(sub_82B5F778);
PPC_FUNC_IMPL(__imp__sub_82B5F778) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x82B5F780;
	__savegprlr_19(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r10,108(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r21,r3,104
	ctx.r21.s64 = ctx.r3.s64 + 104;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// srawi. r19,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r19.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r19.s32, 0, xer);
	// beq 0x82b5fa98
	if (cr0.eq) goto loc_82B5FA98;
	// lis r11,-21846
	ctx.r11.s64 = -1431699456;
	// mr r20,r28
	ctx.r20.u64 = ctx.r28.u64;
	// li r24,4
	ctx.r24.s64 = 4;
	// li r26,1
	ctx.r26.s64 = 1;
	// li r25,2
	ctx.r25.s64 = 2;
	// ori r27,r11,43691
	ctx.r27.u64 = ctx.r11.u64 | 43691;
	// li r22,3
	ctx.r22.s64 = 3;
	// li r23,5
	ctx.r23.s64 = 5;
loc_82B5F7C8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82d33db0
	ctx.lr = 0x82B5F7D4;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b5fa88
	if (cr6.eq) goto loc_82B5FA88;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lwz r10,4(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r8,r30
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, xer);
	// ble cr6,0x82b5faa4
	if (!cr6.gt) goto loc_82B5FAA4;
	// lwzx r11,r20,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82b5f868
	if (!cr6.eq) goto loc_82B5F868;
	// lbz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b5f868
	if (!cr6.eq) goto loc_82B5F868;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1c318
	ctx.lr = 0x82B5F824;
	sub_82D1C318(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// rlwinm r9,r11,2,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x4;
	// lwzx r29,r9,r10
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82daa4f8
	ctx.lr = 0x82B5F83C;
	sub_82DAA4F8(ctx, base);
	// bl 0x831f8200
	ctx.lr = 0x82B5F840;
	sub_831F8200(ctx, base);
	// cmpw cr6,r3,r29
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r29.s32, xer);
	// beq cr6,0x82b5f868
	if (cr6.eq) goto loc_82B5F868;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x82daa4f8
	ctx.lr = 0x82B5F850;
	sub_82DAA4F8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83131d70
	ctx.lr = 0x82B5F858;
	sub_83131D70(ctx, base);
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x82daa4f8
	ctx.lr = 0x82B5F860;
	sub_82DAA4F8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82daa8d0
	ctx.lr = 0x82B5F868;
	sub_82DAA8D0(ctx, base);
loc_82B5F868:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lwz r10,4(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r8,r30
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, xer);
	// ble cr6,0x82b5fab0
	if (!cr6.gt) goto loc_82B5FAB0;
	// lwzx r11,r20,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x82b5fa08
	if (cr6.eq) goto loc_82B5FA08;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// beq cr6,0x82b5fa08
	if (cr6.eq) goto loc_82B5FA08;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82b5f944
	if (!cr6.eq) goto loc_82B5F944;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r25,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r25.u32);
	// bl 0x82d1c318
	ctx.lr = 0x82B5F8B8;
	sub_82D1C318(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// mulhwu r7,r9,r27
	ctx.r7.u64 = (uint64_t(ctx.r9.u32) * uint64_t(ctx.r27.u32)) >> 32;
	// rlwinm r11,r7,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r5,r6,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r6.s64;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r4,r8
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// bl 0x82daa4f8
	ctx.lr = 0x82B5F8E4;
	sub_82DAA4F8(ctx, base);
	// bl 0x825832e8
	ctx.lr = 0x82B5F8E8;
	sub_825832E8(ctx, base);
	// cmpw cr6,r3,r29
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r29.s32, xer);
	// beq cr6,0x82b5fa88
	if (cr6.eq) goto loc_82B5FA88;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// bne cr6,0x82b5f930
	if (!cr6.eq) goto loc_82B5F930;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x82daa4f8
	ctx.lr = 0x82B5F900;
	sub_82DAA4F8(ctx, base);
	// bl 0x825832f0
	ctx.lr = 0x82B5F904;
	sub_825832F0(ctx, base);
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// beq cr6,0x82b5f920
	if (cr6.eq) goto loc_82B5F920;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x82daa4f8
	ctx.lr = 0x82B5F914;
	sub_82DAA4F8(ctx, base);
	// bl 0x825832f0
	ctx.lr = 0x82B5F918;
	sub_825832F0(ctx, base);
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// bne cr6,0x82b5f930
	if (!cr6.eq) goto loc_82B5F930;
loc_82B5F920:
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x82daa4f8
	ctx.lr = 0x82B5F928;
	sub_82DAA4F8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82daa870
	ctx.lr = 0x82B5F930;
	sub_82DAA870(ctx, base);
loc_82B5F930:
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x82daa4f8
	ctx.lr = 0x82B5F938;
	sub_82DAA4F8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82daa848
	ctx.lr = 0x82B5F940;
	sub_82DAA848(ctx, base);
	// b 0x82b5fa78
	goto loc_82B5FA78;
loc_82B5F944:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x82b5f9a0
	if (!cr6.eq) goto loc_82B5F9A0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r26,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r26.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1c318
	ctx.lr = 0x82B5F964;
	sub_82D1C318(ctx, base);
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lbzx r29,r11,r10
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82daa4f8
	ctx.lr = 0x82B5F978;
	sub_82DAA4F8(ctx, base);
	// bl 0x82daa8b8
	ctx.lr = 0x82B5F97C;
	sub_82DAA8B8(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// cmplw cr6,r9,r29
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, xer);
	// beq cr6,0x82b5fa88
	if (cr6.eq) goto loc_82B5FA88;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x82daa4f8
	ctx.lr = 0x82B5F994;
	sub_82DAA4F8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82daa8c0
	ctx.lr = 0x82B5F99C;
	sub_82DAA8C0(ctx, base);
	// b 0x82b5fa78
	goto loc_82B5FA78;
loc_82B5F9A0:
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// bne cr6,0x82b5fa88
	if (!cr6.eq) goto loc_82B5FA88;
	// lbz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b5fa88
	if (!cr6.eq) goto loc_82B5FA88;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stb r28,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r28.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r26,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r26.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1c318
	ctx.lr = 0x82B5F9CC;
	sub_82D1C318(ctx, base);
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lbzx r29,r11,r10
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82daa4f8
	ctx.lr = 0x82B5F9E0;
	sub_82DAA4F8(ctx, base);
	// bl 0x82dfa5c8
	ctx.lr = 0x82B5F9E4;
	sub_82DFA5C8(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// cmplw cr6,r9,r29
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, xer);
	// beq cr6,0x82b5fa88
	if (cr6.eq) goto loc_82B5FA88;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x82daa4f8
	ctx.lr = 0x82B5F9FC;
	sub_82DAA4F8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83b476e0
	ctx.lr = 0x82B5FA04;
	sub_83B476E0(ctx, base);
	// b 0x82b5fa78
	goto loc_82B5FA78;
loc_82B5FA08:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r25,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r25.u32);
	// stw r22,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r22.u32);
	// stw r24,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r24.u32);
	// stw r23,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r23.u32);
	// bl 0x82d1c318
	ctx.lr = 0x82B5FA30;
	sub_82D1C318(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// mulhwu r8,r9,r27
	ctx.r8.u64 = (uint64_t(ctx.r9.u32) * uint64_t(ctx.r27.u32)) >> 32;
	// rlwinm r11,r8,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r29,r6,r9
	ctx.r29.s64 = ctx.r9.s64 - ctx.r6.s64;
	// bl 0x82daa4f8
	ctx.lr = 0x82B5FA54;
	sub_82DAA4F8(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r5,r29,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwzx r29,r5,r3
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r3.u32);
	// cmpw cr6,r4,r29
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r29.s32, xer);
	// beq cr6,0x82b5fa88
	if (cr6.eq) goto loc_82B5FA88;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x82daa4f8
	ctx.lr = 0x82B5FA74;
	sub_82DAA4F8(ctx, base);
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
loc_82B5FA78:
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x82daa4f8
	ctx.lr = 0x82B5FA80;
	sub_82DAA4F8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82daa8d0
	ctx.lr = 0x82B5FA88;
	sub_82DAA8D0(ctx, base);
loc_82B5FA88:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r20,r20,4
	ctx.r20.s64 = ctx.r20.s64 + 4;
	// cmplw cr6,r30,r19
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r19.u32, xer);
	// blt cr6,0x82b5f7c8
	if (cr6.lt) goto loc_82B5F7C8;
loc_82B5FA98:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_82B5FAA4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B5FAB0;
	sub_831CC188(ctx, base);
loc_82B5FAB0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B5FABC;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82B5FABC"))) PPC_WEAK_FUNC(sub_82B5FABC);
PPC_FUNC_IMPL(__imp__sub_82B5FABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B5FAC0"))) PPC_WEAK_FUNC(sub_82B5FAC0);
PPC_FUNC_IMPL(__imp__sub_82B5FAC0) {
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
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,19488
	ctx.r9.s64 = ctx.r11.s64 + 19488;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// lwz r4,104(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82b5fb08
	if (cr6.eq) goto loc_82B5FB08;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B5FB08;
	sub_825952B8(ctx, base);
loc_82B5FB08:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// bl 0x82d25548
	ctx.lr = 0x82B5FB20;
	sub_82D25548(ctx, base);
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

__attribute__((alias("__imp__sub_82B5FB34"))) PPC_WEAK_FUNC(sub_82B5FB34);
PPC_FUNC_IMPL(__imp__sub_82B5FB34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B5FB38"))) PPC_WEAK_FUNC(sub_82B5FB38);
PPC_FUNC_IMPL(__imp__sub_82B5FB38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82B5FB40;
	__savegprlr_27(ctx, base);
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
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x8308e078
	ctx.lr = 0x82B5FB5C;
	sub_8308E078(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d253f8
	ctx.lr = 0x82B5FB74;
	sub_82D253F8(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r9,r11,19488
	ctx.r9.s64 = ctx.r11.s64 + 19488;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r31,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r31.u32);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// stw r8,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r8.u32);
	// stw r31,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r31.u32);
	// stw r31,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r31.u32);
	// stw r31,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r31.u32);
	// stw r31,112(r30)
	PPC_STORE_U32(ctx.r30.u32 + 112, ctx.r31.u32);
	// bl 0x82d86078
	ctx.lr = 0x82B5FBA8;
	sub_82D86078(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lis r6,-31777
	ctx.r6.s64 = -2082537472;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,12(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// stw r28,124(r30)
	PPC_STORE_U32(ctx.r30.u32 + 124, ctx.r28.u32);
	// stb r27,128(r30)
	PPC_STORE_U8(ctx.r30.u32 + 128, ctx.r27.u8);
	// stb r31,129(r30)
	PPC_STORE_U8(ctx.r30.u32 + 129, ctx.r31.u8);
	// stw r31,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r31.u32);
	// stw r5,120(r30)
	PPC_STORE_U32(ctx.r30.u32 + 120, ctx.r5.u32);
	// lwz r4,6840(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 6840);
	// bl 0x82d20ae0
	ctx.lr = 0x82B5FBD4;
	sub_82D20AE0(ctx, base);
	// lis r4,-31777
	ctx.r4.s64 = -2082537472;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,6844(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 6844);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82d23390
	ctx.lr = 0x82B5FBE8;
	sub_82D23390(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B5FBF4"))) PPC_WEAK_FUNC(sub_82B5FBF4);
PPC_FUNC_IMPL(__imp__sub_82B5FBF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B5FBF8"))) PPC_WEAK_FUNC(sub_82B5FBF8);
PPC_FUNC_IMPL(__imp__sub_82B5FBF8) {
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
	// bl 0x82b5fac0
	ctx.lr = 0x82B5FC18;
	sub_82B5FAC0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b5fc30
	if (cr6.eq) goto loc_82B5FC30;
	// bl 0x82416268
	ctx.lr = 0x82B5FC2C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B5FC30:
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

__attribute__((alias("__imp__sub_82B5FC48"))) PPC_WEAK_FUNC(sub_82B5FC48);
PPC_FUNC_IMPL(__imp__sub_82B5FC48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B5FC50;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x830ff290
	ctx.lr = 0x82B5FC60;
	sub_830FF290(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b5fd54
	if (cr6.eq) goto loc_82B5FD54;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,44
	cr6.compare<uint32_t>(ctx.r11.u32, 44, xer);
	// bne cr6,0x82b5fcb0
	if (!cr6.eq) goto loc_82B5FCB0;
	// li r11,27
	ctx.r11.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,136
	ctx.r4.s64 = 136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B5FC8C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b5fd54
	if (cr6.eq) goto loc_82B5FD54;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82b5fb38
	ctx.lr = 0x82B5FCA8;
	sub_82B5FB38(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82B5FCB0:
	// cmplwi cr6,r11,45
	cr6.compare<uint32_t>(ctx.r11.u32, 45, xer);
	// beq cr6,0x82b5fd18
	if (cr6.eq) goto loc_82B5FD18;
	// cmplwi cr6,r11,51
	cr6.compare<uint32_t>(ctx.r11.u32, 51, xer);
	// beq cr6,0x82b5fd18
	if (cr6.eq) goto loc_82B5FD18;
	// li r31,1
	ctx.r31.s64 = 1;
	// bl 0x82d86078
	ctx.lr = 0x82B5FCC8;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b5fcdc
	if (cr6.eq) goto loc_82B5FCDC;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832f0
	ctx.lr = 0x82B5FCD8;
	sub_825832F0(ctx, base);
	// lbz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
loc_82B5FCDC:
	// li r11,27
	ctx.r11.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r4,136
	ctx.r4.s64 = 136;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82B5FCF4;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b5fd54
	if (cr6.eq) goto loc_82B5FD54;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82b5fb38
	ctx.lr = 0x82B5FD10;
	sub_82B5FB38(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82B5FD18:
	// li r11,27
	ctx.r11.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r4,136
	ctx.r4.s64 = 136;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595718
	ctx.lr = 0x82B5FD30;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b5fd54
	if (cr6.eq) goto loc_82B5FD54;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82b5fb38
	ctx.lr = 0x82B5FD4C;
	sub_82B5FB38(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82B5FD54:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B5FD60"))) PPC_WEAK_FUNC(sub_82B5FD60);
PPC_FUNC_IMPL(__imp__sub_82B5FD60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b5fd70
	if (cr6.lt) goto loc_82B5FD70;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82B5FD70:
	// lbz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// b 0x82b5fc48
	sub_82B5FC48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B5FD78"))) PPC_WEAK_FUNC(sub_82B5FD78);
PPC_FUNC_IMPL(__imp__sub_82B5FD78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82B5FD80;
	__savegprlr_23(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r3,100(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B5FD98;
	sub_82D33DB0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b60084
	if (cr6.eq) goto loc_82B60084;
	// lwz r11,104(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 104);
	// addi r31,r25,104
	ctx.r31.s64 = ctx.r25.s64 + 104;
	// lwz r10,108(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 108);
	// addi r27,r3,100
	ctx.r27.s64 = ctx.r3.s64 + 100;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r8,r30
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, xer);
	// bgt cr6,0x82b5fdd0
	if (cr6.gt) goto loc_82B5FDD0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B5FDD0;
	sub_831CC188(ctx, base);
loc_82B5FDD0:
	// rlwinm r28,r30,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r29,r10,19048
	ctx.r29.s64 = ctx.r10.s64 + 19048;
	// addi r4,r9,19340
	ctx.r4.s64 = ctx.r9.s64 + 19340;
	// lwzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r23,r7,r29
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r29.u32);
	// bl 0x837b0c10
	ctx.lr = 0x82B5FE00;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// bl 0x82a69a28
	ctx.lr = 0x82B5FE10;
	sub_82A69A28(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r5,r11,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r11.s64;
	// srawi r4,r5,2
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 2;
	// cmplw cr6,r4,r30
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r30.u32, xer);
	// bgt cr6,0x82b5fe34
	if (cr6.gt) goto loc_82B5FE34;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B5FE34;
	sub_831CC188(ctx, base);
loc_82B5FE34:
	// lwzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// addi r9,r29,12
	ctx.r9.s64 = ctx.r29.s64 + 12;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r7,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// bl 0x82d21408
	ctx.lr = 0x82B5FE5C;
	sub_82D21408(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r5,r11,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r11.s64;
	// srawi r4,r5,2
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 2;
	// cmplw cr6,r4,r30
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r30.u32, xer);
	// bgt cr6,0x82b5fe80
	if (cr6.gt) goto loc_82B5FE80;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B5FE80;
	sub_831CC188(ctx, base);
loc_82B5FE80:
	// lwzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// addi r9,r29,8
	ctx.r9.s64 = ctx.r29.s64 + 8;
	// lwz r8,0(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r6,72(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 72);
	// rlwinm r4,r7,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r4,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r9.u32);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82B5FEB0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r7,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r7,r30
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r30.u32, xer);
	// bgt cr6,0x82b5fef0
	if (cr6.gt) goto loc_82B5FEF0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B5FEF0;
	sub_831CC188(ctx, base);
loc_82B5FEF0:
	// lwzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// addi r9,r29,4
	ctx.r9.s64 = ctx.r29.s64 + 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// bl 0x830f6558
	ctx.lr = 0x82B5FF18;
	sub_830F6558(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r4,r11,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r11.s64;
	// srawi r3,r4,2
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 2;
	// cmplw cr6,r3,r30
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, xer);
	// bgt cr6,0x82b5ff3c
	if (cr6.gt) goto loc_82B5FF3C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B5FF3C;
	sub_831CC188(ctx, base);
loc_82B5FF3C:
	// lwzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// addi r9,r29,12
	ctx.r9.s64 = ctx.r29.s64 + 12;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r11,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r7,255
	cr6.compare<int32_t>(ctx.r7.s32, 255, xer);
	// bne cr6,0x82b5ff74
	if (!cr6.eq) goto loc_82B5FF74;
	// addi r10,r29,16
	ctx.r10.s64 = ctx.r29.s64 + 16;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82d233b0
	ctx.lr = 0x82B5FF74;
	sub_82D233B0(ctx, base);
loc_82B5FF74:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r8,r30
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, xer);
	// bgt cr6,0x82b5ff98
	if (cr6.gt) goto loc_82B5FF98;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B5FF98;
	sub_831CC188(ctx, base);
loc_82B5FF98:
	// lwzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bgt cr6,0x82b6007c
	if (cr6.gt) goto loc_82B6007C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82b5ffe4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B5FFE4;
	// bdzf 4*cr6+eq,0x82b60000
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B60000;
	// bdzf 4*cr6+eq,0x82b6001c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B6001C;
	// bdzf 4*cr6+eq,0x82b60038
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B60038;
	// bdzf 4*cr6+eq,0x82b60038
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B60038;
	// bdzf 4*cr6+eq,0x82b60054
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B60054;
	// bne cr6,0x82b60070
	if (!cr6.eq) goto loc_82B60070;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82b5f0a8
	ctx.lr = 0x82B5FFD4;
	sub_82B5F0A8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x838760e0
	ctx.lr = 0x82B5FFDC;
	sub_838760E0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82B5FFE4:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82b5f150
	ctx.lr = 0x82B5FFF0;
	sub_82B5F150(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x838760e0
	ctx.lr = 0x82B5FFF8;
	sub_838760E0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82B60000:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82b5f208
	ctx.lr = 0x82B6000C;
	sub_82B5F208(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x838760e0
	ctx.lr = 0x82B60014;
	sub_838760E0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82B6001C:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82b5f2d0
	ctx.lr = 0x82B60028;
	sub_82B5F2D0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x838760e0
	ctx.lr = 0x82B60030;
	sub_838760E0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82B60038:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82b5f360
	ctx.lr = 0x82B60044;
	sub_82B5F360(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x838760e0
	ctx.lr = 0x82B6004C;
	sub_838760E0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82B60054:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82b5f468
	ctx.lr = 0x82B60060;
	sub_82B5F468(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x838760e0
	ctx.lr = 0x82B60068;
	sub_838760E0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82B60070:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82b5f500
	ctx.lr = 0x82B6007C;
	sub_82B5F500(ctx, base);
loc_82B6007C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x838760e0
	ctx.lr = 0x82B60084;
	sub_838760E0(ctx, base);
loc_82B60084:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B6008C"))) PPC_WEAK_FUNC(sub_82B6008C);
PPC_FUNC_IMPL(__imp__sub_82B6008C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B60090"))) PPC_WEAK_FUNC(sub_82B60090);
PPC_FUNC_IMPL(__imp__sub_82B60090) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82B60098;
	__savegprlr_25(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,124(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// addi r31,r3,104
	ctx.r31.s64 = ctx.r3.s64 + 104;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r25,2
	ctx.r25.s64 = 2;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82b60198
	if (!cr6.eq) goto loc_82B60198;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// bl 0x835977d8
	ctx.lr = 0x82B600C8;
	sub_835977D8(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x835977d8
	ctx.lr = 0x82B600DC;
	sub_835977D8(ctx, base);
	// li r10,4
	ctx.r10.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x835977d8
	ctx.lr = 0x82B600F0;
	sub_835977D8(ctx, base);
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835977d8
	ctx.lr = 0x82B60104;
	sub_835977D8(ctx, base);
	// lwz r3,100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r8,19324
	ctx.r11.s64 = ctx.r8.s64 + 19324;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,-64
	ctx.r4.s64 = ctx.r11.s64 + -64;
	// lwz r6,72(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 72);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82B60128;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r5,128(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 128);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82b602c0
	if (cr6.eq) goto loc_82B602C0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi. r27,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r27.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// beq 0x82b602c0
	if (cr0.eq) goto loc_82B602C0;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
loc_82B60150:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwzx r10,r28,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// beq cr6,0x82b60184
	if (cr6.eq) goto loc_82B60184;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// bl 0x82d33db0
	ctx.lr = 0x82B6016C;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b603f0
	if (cr6.eq) goto loc_82B603F0;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2b608
	ctx.lr = 0x82B60184;
	sub_82D2B608(ctx, base);
loc_82B60184:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r29,r27
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, xer);
	// blt cr6,0x82b60150
	if (cr6.lt) goto loc_82B60150;
	// b 0x82b602c0
	goto loc_82B602C0;
loc_82B60198:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82b60230
	if (!cr6.eq) goto loc_82B60230;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x835977d8
	ctx.lr = 0x82B601A8;
	sub_835977D8(ctx, base);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x835977d8
	ctx.lr = 0x82B601B8;
	sub_835977D8(ctx, base);
	// li r10,5
	ctx.r10.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x835977d8
	ctx.lr = 0x82B601CC;
	sub_835977D8(ctx, base);
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835977d8
	ctx.lr = 0x82B601E0;
	sub_835977D8(ctx, base);
	// bl 0x82aa87f0
	ctx.lr = 0x82B601E4;
	sub_82AA87F0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82b6020c
	if (!cr6.eq) goto loc_82B6020C;
	// lwz r3,100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// addi r4,r11,-48
	ctx.r4.s64 = ctx.r11.s64 + -48;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// b 0x82b602b8
	goto loc_82B602B8;
loc_82B6020C:
	// li r11,7
	ctx.r11.s64 = 7;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835977d8
	ctx.lr = 0x82B60220;
	sub_835977D8(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r11,r10,19324
	ctx.r11.s64 = ctx.r10.s64 + 19324;
	// addi r4,r11,-32
	ctx.r4.s64 = ctx.r11.s64 + -32;
	// b 0x82b602a8
	goto loc_82B602A8;
loc_82B60230:
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// bl 0x835977d8
	ctx.lr = 0x82B60238;
	sub_835977D8(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x835977d8
	ctx.lr = 0x82B6024C;
	sub_835977D8(ctx, base);
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835977d8
	ctx.lr = 0x82B60260;
	sub_835977D8(ctx, base);
	// bl 0x82aa87f0
	ctx.lr = 0x82B60264;
	sub_82AA87F0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82b6028c
	if (!cr6.eq) goto loc_82B6028C;
	// lwz r3,100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// b 0x82b602b8
	goto loc_82B602B8;
loc_82B6028C:
	// li r11,7
	ctx.r11.s64 = 7;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835977d8
	ctx.lr = 0x82B602A0;
	sub_835977D8(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r4,r10,19324
	ctx.r4.s64 = ctx.r10.s64 + 19324;
loc_82B602A8:
	// lwz r3,100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_82B602B8:
	// li r5,1
	ctx.r5.s64 = 1;
	// bctrl 
	ctx.lr = 0x82B602C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B602C0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r4,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 2;
	// bl 0x82d1ed60
	ctx.lr = 0x82B602DC;
	sub_82D1ED60(ctx, base);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// subf r6,r7,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r7.s64;
	// stw r26,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r26.u32);
	// stw r26,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r26.u32);
	// srawi. r31,r6,2
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r6.s32 >> 2;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq 0x82b6031c
	if (cr0.eq) goto loc_82B6031C;
loc_82B60300:
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b5fd78
	ctx.lr = 0x82B60310;
	sub_82B5FD78(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r31
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, xer);
	// blt cr6,0x82b60300
	if (cr6.lt) goto loc_82B60300;
loc_82B6031C:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d24c38
	ctx.lr = 0x82B6032C;
	sub_82D24C38(ctx, base);
	// lis r11,510
	ctx.r11.s64 = 33423360;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// ori r9,r11,41
	ctx.r9.u64 = ctx.r11.u64 | 41;
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// stw r26,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r26.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r10,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r10.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r26,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r26.u32);
	// stb r26,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r26.u8);
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// bl 0x830f6558
	ctx.lr = 0x82B60360;
	sub_830F6558(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d24c38
	ctx.lr = 0x82B60370;
	sub_82D24C38(ctx, base);
	// lwz r8,168(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x82b6038c
	if (cr6.lt) goto loc_82B6038C;
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x825952b8
	ctx.lr = 0x82B6038C;
	sub_825952B8(ctx, base);
loc_82B6038C:
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b603b8
	if (cr6.eq) goto loc_82B603B8;
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x830f6290
	ctx.lr = 0x82B603A8;
	sub_830F6290(ctx, base);
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x82B603B8;
	sub_825952B8(ctx, base);
loc_82B603B8:
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r26,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r26.u32);
	// beq cr6,0x82b603f0
	if (cr6.eq) goto loc_82B603F0;
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x830f6290
	ctx.lr = 0x82B603E0;
	sub_830F6290(ctx, base);
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82B603F0;
	sub_825952B8(ctx, base);
loc_82B603F0:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B603F8"))) PPC_WEAK_FUNC(sub_82B603F8);
PPC_FUNC_IMPL(__imp__sub_82B603F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B60400;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82B6040C;
	sub_82D19A68(ctx, base);
	// bl 0x82d2ec40
	ctx.lr = 0x82B60410;
	sub_82D2EC40(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82B6041C;
	sub_82D33DB0(ctx, base);
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// addi r3,r10,100
	ctx.r3.s64 = ctx.r10.s64 + 100;
	// addi r30,r11,19240
	ctx.r30.s64 = ctx.r11.s64 + 19240;
	// lwz r11,100(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// addi r4,r30,-32
	ctx.r4.s64 = ctx.r30.s64 + -32;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B60444;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r4,521
	ctx.r4.s64 = 34144256;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,39
	ctx.r4.u64 = ctx.r4.u64 | 39;
	// bl 0x82d30340
	ctx.lr = 0x82B60454;
	sub_82D30340(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r29,r11,100
	ctx.r29.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x82b6046c
	if (!cr6.eq) goto loc_82B6046C;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
loc_82B6046C:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// addi r4,r30,-20
	ctx.r4.s64 = ctx.r30.s64 + -20;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259cc28
	ctx.lr = 0x82B6048C;
	sub_8259CC28(ctx, base);
	// lis r5,514
	ctx.r5.s64 = 33685504;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r5,r5,32
	ctx.r5.u64 = ctx.r5.u64 | 32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a69a28
	ctx.lr = 0x82B604A0;
	sub_82A69A28(ctx, base);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r4,r30,-12
	ctx.r4.s64 = ctx.r30.s64 + -12;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B604BC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,72(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 72);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82B604D8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b60090
	ctx.lr = 0x82B604E0;
	sub_82B60090(ctx, base);
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82b60500
	if (cr6.eq) goto loc_82B60500;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x82b6051c
	if (!cr6.eq) goto loc_82B6051C;
	// lbz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b6051c
	if (!cr6.eq) goto loc_82B6051C;
loc_82B60500:
	// li r4,211
	ctx.r4.s64 = 211;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1a998
	ctx.lr = 0x82B6050C;
	sub_82D1A998(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B6051C;
	sub_82D19788(ctx, base);
loc_82B6051C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B60528"))) PPC_WEAK_FUNC(sub_82B60528);
PPC_FUNC_IMPL(__imp__sub_82B60528) {
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
	ctx.lr = 0x82B60538;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,44
	cr6.compare<uint32_t>(ctx.r11.u32, 44, xer);
	// bne cr6,0x82b60558
	if (!cr6.eq) goto loc_82B60558;
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
loc_82B60558:
	// cmplwi cr6,r11,53
	cr6.compare<uint32_t>(ctx.r11.u32, 53, xer);
	// bne cr6,0x82b60584
	if (!cr6.eq) goto loc_82B60584;
	// bl 0x82d8a750
	ctx.lr = 0x82B60564;
	sub_82D8A750(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 2;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82B60584:
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

__attribute__((alias("__imp__sub_82B60598"))) PPC_WEAK_FUNC(sub_82B60598);
PPC_FUNC_IMPL(__imp__sub_82B60598) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82c33e58
	ctx.lr = 0x82B605B4;
	sub_82C33E58(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,20976
	ctx.r9.s64 = ctx.r11.s64 + 20976;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// stb r30,104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 104, ctx.r30.u8);
	// bl 0x82d86078
	ctx.lr = 0x82B605D8;
	sub_82D86078(ctx, base);
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x82daa490
	ctx.lr = 0x82B605E0;
	sub_82DAA490(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stw r3,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r3.u32);
	// addi r11,r31,132
	ctx.r11.s64 = ctx.r31.s64 + 132;
	// std r30,112(r31)
	PPC_STORE_U64(ctx.r31.u32 + 112, ctx.r30.u64);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// addi r9,r9,21716
	ctx.r9.s64 = ctx.r9.s64 + 21716;
loc_82B605FC:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// stw r30,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r30.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bge 0x82b605fc
	if (!cr0.lt) goto loc_82B605FC;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r30.u32);
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// stw r30,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
	// std r30,184(r31)
	PPC_STORE_U64(ctx.r31.u32 + 184, ctx.r30.u64);
	// stw r30,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r30.u32);
	// stw r30,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r30.u32);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82B60664"))) PPC_WEAK_FUNC(sub_82B60664);
PPC_FUNC_IMPL(__imp__sub_82B60664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B60668"))) PPC_WEAK_FUNC(sub_82B60668);
PPC_FUNC_IMPL(__imp__sub_82B60668) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// lwz r3,30272(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30272);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b60698
	if (cr6.eq) goto loc_82B60698;
	// bl 0x82dab430
	ctx.lr = 0x82B60688;
	sub_82DAB430(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b6069c
	if (cr6.eq) goto loc_82B6069C;
loc_82B60698:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82B6069C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B606AC"))) PPC_WEAK_FUNC(sub_82B606AC);
PPC_FUNC_IMPL(__imp__sub_82B606AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B606B0"))) PPC_WEAK_FUNC(sub_82B606B0);
PPC_FUNC_IMPL(__imp__sub_82B606B0) {
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
	// lwz r11,164(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b60718
	if (!cr6.eq) goto loc_82B60718;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d17d80
	ctx.lr = 0x82B606D8;
	sub_82D17D80(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r3,r11,20488
	ctx.r3.s64 = ctx.r11.s64 + 20488;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2f6d8
	ctx.lr = 0x82B606F4;
	sub_82D2F6D8(ctx, base);
	// stw r3,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b60718
	if (cr6.eq) goto loc_82B60718;
	// lis r4,515
	ctx.r4.s64 = 33751040;
	// ori r4,r4,37
	ctx.r4.u64 = ctx.r4.u64 | 37;
	// bl 0x82d2ada8
	ctx.lr = 0x82B6070C;
	sub_82D2ADA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,164(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// bl 0x83103100
	ctx.lr = 0x82B60718;
	sub_83103100(ctx, base);
loc_82B60718:
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

__attribute__((alias("__imp__sub_82B6072C"))) PPC_WEAK_FUNC(sub_82B6072C);
PPC_FUNC_IMPL(__imp__sub_82B6072C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B60730"))) PPC_WEAK_FUNC(sub_82B60730);
PPC_FUNC_IMPL(__imp__sub_82B60730) {
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
	// lbz r31,8(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x830ff290
	ctx.lr = 0x82B60750;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,53
	cr6.compare<uint32_t>(ctx.r11.u32, 53, xer);
	// beq cr6,0x82b6076c
	if (cr6.eq) goto loc_82B6076C;
	// bl 0x830ff290
	ctx.lr = 0x82B60760;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,61
	cr6.compare<uint32_t>(ctx.r11.u32, 61, xer);
	// bne cr6,0x82b607a0
	if (!cr6.eq) goto loc_82B607A0;
loc_82B6076C:
	// bl 0x82d86078
	ctx.lr = 0x82B60770;
	sub_82D86078(ctx, base);
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832f0
	ctx.lr = 0x82B60778;
	sub_825832F0(ctx, base);
	// lbz r11,5777(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5777);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b607a0
	if (cr6.eq) goto loc_82B607A0;
	// lwz r11,180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82b607a4
	if (!cr6.eq) goto loc_82B607A4;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 180, ctx.r11.u32);
	// b 0x82b607a4
	goto loc_82B607A4;
loc_82B607A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B607A4:
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

__attribute__((alias("__imp__sub_82B607BC"))) PPC_WEAK_FUNC(sub_82B607BC);
PPC_FUNC_IMPL(__imp__sub_82B607BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B607C0"))) PPC_WEAK_FUNC(sub_82B607C0);
PPC_FUNC_IMPL(__imp__sub_82B607C0) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d19788
	ctx.lr = 0x82B607D8;
	sub_82D19788(ctx, base);
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

__attribute__((alias("__imp__sub_82B607EC"))) PPC_WEAK_FUNC(sub_82B607EC);
PPC_FUNC_IMPL(__imp__sub_82B607EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B607F0"))) PPC_WEAK_FUNC(sub_82B607F0);
PPC_FUNC_IMPL(__imp__sub_82B607F0) {
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
	// lwz r3,108(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// bl 0x82dab620
	ctx.lr = 0x82B6080C;
	sub_82DAB620(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b60830
	if (cr6.eq) goto loc_82B60830;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d199e0
	ctx.lr = 0x82B60820;
	sub_82D199E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r5,2
	ctx.r5.s64 = 2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b60834
	if (cr6.eq) goto loc_82B60834;
loc_82B60830:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82B60834:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B60840;
	sub_82D19788(ctx, base);
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

__attribute__((alias("__imp__sub_82B60854"))) PPC_WEAK_FUNC(sub_82B60854);
PPC_FUNC_IMPL(__imp__sub_82B60854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B60858"))) PPC_WEAK_FUNC(sub_82B60858);
PPC_FUNC_IMPL(__imp__sub_82B60858) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,30272(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30272);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b60894
	if (!cr6.eq) goto loc_82B60894;
loc_82B6087C:
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
loc_82B60894:
	// bl 0x82dab520
	ctx.lr = 0x82B60898;
	sub_82DAB520(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b6087c
	if (cr6.eq) goto loc_82B6087C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d199d0
	ctx.lr = 0x82B608B0;
	sub_82D199D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b607f0
	ctx.lr = 0x82B608B8;
	sub_82B607F0(ctx, base);
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

__attribute__((alias("__imp__sub_82B608D0"))) PPC_WEAK_FUNC(sub_82B608D0);
PPC_FUNC_IMPL(__imp__sub_82B608D0) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x83a7d958
	ctx.lr = 0x82B608E8;
	sub_83A7D958(ctx, base);
	// bl 0x83524138
	ctx.lr = 0x82B608EC;
	sub_83524138(ctx, base);
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// rotlwi r10,r31,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// lis r9,-32208
	ctx.r9.s64 = -2110783488;
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// clrldi r7,r8,32
	ctx.r7.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
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
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
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

__attribute__((alias("__imp__sub_82B6092C"))) PPC_WEAK_FUNC(sub_82B6092C);
PPC_FUNC_IMPL(__imp__sub_82B6092C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B60930"))) PPC_WEAK_FUNC(sub_82B60930);
PPC_FUNC_IMPL(__imp__sub_82B60930) {
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
	// li r10,2
	ctx.r10.s64 = 2;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r8,r11,20976
	ctx.r8.s64 = ctx.r11.s64 + 20976;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r7,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r7.u32);
	// addi r11,r3,164
	ctx.r11.s64 = ctx.r3.s64 + 164;
	// addi r10,r10,21716
	ctx.r10.s64 = ctx.r10.s64 + 21716;
loc_82B60978:
	// stwu r10,-16(r11)
	ea = -16 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82b60978
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B60978;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c33f40
	ctx.lr = 0x82B60988;
	sub_82C33F40(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b609a0
	if (cr6.eq) goto loc_82B609A0;
	// bl 0x82416268
	ctx.lr = 0x82B6099C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B609A0:
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

__attribute__((alias("__imp__sub_82B609B8"))) PPC_WEAK_FUNC(sub_82B609B8);
PPC_FUNC_IMPL(__imp__sub_82B609B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// stw r11,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r11.u32);
	// bnelr cr6
	if (!cr6.eq) return;
	// b 0x82b60858
	sub_82B60858(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B609CC"))) PPC_WEAK_FUNC(sub_82B609CC);
PPC_FUNC_IMPL(__imp__sub_82B609CC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B609D0"))) PPC_WEAK_FUNC(sub_82B609D0);
PPC_FUNC_IMPL(__imp__sub_82B609D0) {
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
	// li r4,200
	ctx.r4.s64 = 200;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B60A04;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b60a38
	if (cr6.eq) goto loc_82B60A38;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b60a28
	if (cr6.lt) goto loc_82B60A28;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// bl 0x82b60598
	ctx.lr = 0x82B60A24;
	sub_82B60598(ctx, base);
	// b 0x82b60a3c
	goto loc_82B60A3C;
loc_82B60A28:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lbz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// bl 0x82b60598
	ctx.lr = 0x82B60A34;
	sub_82B60598(ctx, base);
	// b 0x82b60a3c
	goto loc_82B60A3C;
loc_82B60A38:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B60A3C:
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

__attribute__((alias("__imp__sub_82B60A54"))) PPC_WEAK_FUNC(sub_82B60A54);
PPC_FUNC_IMPL(__imp__sub_82B60A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B60A58"))) PPC_WEAK_FUNC(sub_82B60A58);
PPC_FUNC_IMPL(__imp__sub_82B60A58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B60A60;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,372(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 372);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,2
	ctx.r28.s64 = 2;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82b60a84
	if (cr6.eq) goto loc_82B60A84;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x82B60A84;
	sub_825952B8(ctx, base);
loc_82B60A84:
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r3,r31,312
	ctx.r3.s64 = ctx.r31.s64 + 312;
	// stw r29,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r29.u32);
	// stw r29,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r29.u32);
	// stw r29,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r29.u32);
	// bl 0x8378e240
	ctx.lr = 0x82B60A9C;
	sub_8378E240(ctx, base);
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// addi r30,r31,128
	ctx.r30.s64 = ctx.r31.s64 + 128;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b60abc
	if (cr6.lt) goto loc_82B60ABC;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82B60ABC;
	sub_825952B8(ctx, base);
loc_82B60ABC:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// stb r29,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r29.u8);
	// bl 0x82da8c38
	ctx.lr = 0x82B60AD4;
	sub_82DA8C38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da8c38
	ctx.lr = 0x82B60ADC;
	sub_82DA8C38(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B60AE4"))) PPC_WEAK_FUNC(sub_82B60AE4);
PPC_FUNC_IMPL(__imp__sub_82B60AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B60AE8"))) PPC_WEAK_FUNC(sub_82B60AE8);
PPC_FUNC_IMPL(__imp__sub_82B60AE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B60AF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,104(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,2
	ctx.r29.s64 = 2;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82b60b14
	if (cr6.eq) goto loc_82B60B14;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x82B60B14;
	sub_825952B8(ctx, base);
loc_82B60B14:
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// bl 0x8378e240
	ctx.lr = 0x82B60B2C;
	sub_8378E240(ctx, base);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b60b4c
	if (cr6.lt) goto loc_82B60B4C;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82B60B4C;
	sub_825952B8(ctx, base);
loc_82B60B4C:
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
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B60B64"))) PPC_WEAK_FUNC(sub_82B60B64);
PPC_FUNC_IMPL(__imp__sub_82B60B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B60B68"))) PPC_WEAK_FUNC(sub_82B60B68);
PPC_FUNC_IMPL(__imp__sub_82B60B68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B60B70;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B60B88;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r31,56
	ctx.r29.s64 = ctx.r31.s64 + 56;
	// stb r30,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r30.u8);
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B60BA8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82da87d0
	ctx.lr = 0x82B60BB0;
	sub_82DA87D0(ctx, base);
	// stb r30,104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 104, ctx.r30.u8);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// addi r11,r31,128
	ctx.r11.s64 = ctx.r31.s64 + 128;
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// lwz r7,148(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// blt cr6,0x82b60bdc
	if (cr6.lt) goto loc_82B60BDC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82B60BDC:
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// lwz r9,156(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r7,1
	ctx.r7.s64 = 1;
	// lis r6,-32203
	ctx.r6.s64 = -2110455808;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,7056(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7056);
	// rlwimi r9,r11,0,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// stw r9,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r9.u32);
	// addi r29,r6,-22544
	ctx.r29.s64 = ctx.r6.s64 + -22544;
	// lwz r11,7056(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7056);
	// rlwimi r9,r11,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// stw r9,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r9.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// stb r30,164(r31)
	PPC_STORE_U8(ctx.r31.u32 + 164, ctx.r30.u8);
	// stw r8,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r8.u32);
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
	// std r30,192(r31)
	PPC_STORE_U64(ctx.r31.u32 + 192, ctx.r30.u64);
	// std r30,200(r31)
	PPC_STORE_U64(ctx.r31.u32 + 200, ctx.r30.u64);
	// stw r30,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r30.u32);
	// stw r7,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r7.u32);
	// bl 0x8259cc28
	ctx.lr = 0x82B60C50;
	sub_8259CC28(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// bl 0x8259cc28
	ctx.lr = 0x82B60C60;
	sub_8259CC28(ctx, base);
	// stw r30,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r30.u32);
	// lwz r10,376(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	// addi r8,r31,372
	ctx.r8.s64 = ctx.r31.s64 + 372;
	// lwz r9,372(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x82b60ca8
	if (cr6.eq) goto loc_82B60CA8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r10
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r10.u32, xer);
	// beq cr6,0x82b60ca4
	if (cr6.eq) goto loc_82B60CA4;
loc_82B60C84:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r6,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r6.u32);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82b60c84
	if (!cr6.eq) goto loc_82B60C84;
loc_82B60CA4:
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
loc_82B60CA8:
	// li r9,7
	ctx.r9.s64 = 7;
	// li r10,100
	ctx.r10.s64 = 100;
	// addi r11,r31,208
	ctx.r11.s64 = ctx.r31.s64 + 208;
	// stw r10,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r10.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82B60CC0:
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x82b60cc0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B60CC0;
	// li r9,9
	ctx.r9.s64 = 9;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// addi r11,r31,272
	ctx.r11.s64 = ctx.r31.s64 + 272;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82B60CD8:
	// stwu r30,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82b60cd8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B60CD8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B60CE8"))) PPC_WEAK_FUNC(sub_82B60CE8);
PPC_FUNC_IMPL(__imp__sub_82B60CE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B60CF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,-1
	ctx.r29.s64 = -1;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// bl 0x8259cb28
	ctx.lr = 0x82B60D1C;
	sub_8259CB28(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// bl 0x8259cb28
	ctx.lr = 0x82B60D30;
	sub_8259CB28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B60D3C"))) PPC_WEAK_FUNC(sub_82B60D3C);
PPC_FUNC_IMPL(__imp__sub_82B60D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B60D40"))) PPC_WEAK_FUNC(sub_82B60D40);
PPC_FUNC_IMPL(__imp__sub_82B60D40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82B60D48;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwzx r11,r29,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b60e30
	if (cr6.eq) goto loc_82B60E30;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bne cr6,0x82b60dec
	if (!cr6.eq) goto loc_82B60DEC;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,20248
	ctx.r31.s64 = ctx.r11.s64 + 20248;
	// addi r4,r31,-44
	ctx.r4.s64 = ctx.r31.s64 + -44;
	// bl 0x837b0c10
	ctx.lr = 0x82B60D84;
	sub_837B0C10(ctx, base);
	// addi r11,r28,48
	ctx.r11.s64 = ctx.r28.s64 + 48;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// bl 0x82b142a0
	ctx.lr = 0x82B60D94;
	sub_82B142A0(ctx, base);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82b60da8
	if (!cr6.lt) goto loc_82B60DA8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_82B60DA8:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B60DC0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r4,r31,-28
	ctx.r4.s64 = ctx.r31.s64 + -28;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B60DDC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82B60DE4;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82B60DEC:
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r31,r10,20248
	ctx.r31.s64 = ctx.r10.s64 + 20248;
	// addi r27,r11,100
	ctx.r27.s64 = ctx.r11.s64 + 100;
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x82B60E04;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82a6a1b8
	ctx.lr = 0x82B60E14;
	sub_82A6A1B8(ctx, base);
	// lwzx r3,r29,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B60E30;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B60E30:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B60E38"))) PPC_WEAK_FUNC(sub_82B60E38);
PPC_FUNC_IMPL(__imp__sub_82B60E38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B60E40;
	__savegprlr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b60e98
	if (!cr6.eq) goto loc_82B60E98;
	// lwz r11,20(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b60e7c
	if (cr6.lt) goto loc_82B60E7C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B60E7C;
	sub_825952B8(ctx, base);
loc_82B60E7C:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82B60E98:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r29,r11,100
	ctx.r29.s64 = ctx.r11.s64 + 100;
	// bl 0x8259cb28
	ctx.lr = 0x82B60EC4;
	sub_8259CB28(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,20352
	ctx.r4.s64 = ctx.r11.s64 + 20352;
	// bl 0x837b0c10
	ctx.lr = 0x82B60ED4;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x82a69ad0
	ctx.lr = 0x82B60EE4;
	sub_82A69AD0(ctx, base);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82b60f04
	if (cr6.lt) goto loc_82B60F04;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B60F04;
	sub_825952B8(ctx, base);
loc_82B60F04:
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B60F18"))) PPC_WEAK_FUNC(sub_82B60F18);
PPC_FUNC_IMPL(__imp__sub_82B60F18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B60F20;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31761
	ctx.r10.s64 = -2081488896;
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,-14040
	ctx.r31.s64 = ctx.r11.s64 + -14040;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,-13900(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13900);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82b60fa0
	if (!cr6.eq) goto loc_82B60FA0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// stw r11,-13900(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13900, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r9,20420
	ctx.r30.s64 = ctx.r9.s64 + 20420;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// bl 0x837b0c10
	ctx.lr = 0x82B60F64;
	sub_837B0C10(ctx, base);
	// addi r4,r30,12
	ctx.r4.s64 = ctx.r30.s64 + 12;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x837b0c10
	ctx.lr = 0x82B60F70;
	sub_837B0C10(ctx, base);
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x837b0c10
	ctx.lr = 0x82B60F7C;
	sub_837B0C10(ctx, base);
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x837b0c10
	ctx.lr = 0x82B60F88;
	sub_837B0C10(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x837b0c10
	ctx.lr = 0x82B60F94;
	sub_837B0C10(ctx, base);
	// lis r8,-31791
	ctx.r8.s64 = -2083454976;
	// addi r3,r8,2504
	ctx.r3.s64 = ctx.r8.s64 + 2504;
	// bl 0x831cdcc8
	ctx.lr = 0x82B60FA0;
	sub_831CDCC8(ctx, base);
loc_82B60FA0:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r10,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r10.u32);
	// mulli r11,r28,28
	ctx.r11.s64 = ctx.r28.s64 * 28;
	// stw r9,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r9.u32);
	// stb r10,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r10.u8);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82B60FCC;
	sub_8259CB28(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B60FD8"))) PPC_WEAK_FUNC(sub_82B60FD8);
PPC_FUNC_IMPL(__imp__sub_82B60FD8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b61000
	if (cr6.lt) goto loc_82B61000;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b61004
	goto loc_82B61004;
loc_82B61000:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82B61004:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// stb r10,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r10.u8);
loc_82B6101C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b6101c
	if (!cr6.eq) goto loc_82B6101C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82B61040;
	sub_8259CC28(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82b609d0
	ctx.lr = 0x82B6104C;
	sub_82B609D0(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82b61070
	if (cr6.lt) goto loc_82B61070;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B61070;
	sub_825952B8(ctx, base);
loc_82B61070:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82B61088"))) PPC_WEAK_FUNC(sub_82B61088);
PPC_FUNC_IMPL(__imp__sub_82B61088) {
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
	// bl 0x82da8d18
	ctx.lr = 0x82B610A4;
	sub_82DA8D18(ctx, base);
	// addi r30,r31,56
	ctx.r30.s64 = ctx.r31.s64 + 56;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da8d18
	ctx.lr = 0x82B610B0;
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
	ctx.lr = 0x82B610C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da87d0
	ctx.lr = 0x82B610CC;
	sub_82DA87D0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r11,104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 104, ctx.r11.u8);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
	// stb r11,128(r31)
	PPC_STORE_U8(ctx.r31.u32 + 128, ctx.r11.u8);
	// stw r9,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r9.u32);
	// stw r11,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r11.u32);
	// stw r10,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r10.u32);
	// stb r11,316(r31)
	PPC_STORE_U8(ctx.r31.u32 + 316, ctx.r11.u8);
	// stw r11,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r11.u32);
	// stw r10,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r10.u32);
	// stb r11,344(r31)
	PPC_STORE_U8(ctx.r31.u32 + 344, ctx.r11.u8);
	// stw r11,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r11.u32);
	// stw r11,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r11.u32);
	// stw r11,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r11.u32);
	// addi r11,r31,312
	ctx.r11.s64 = ctx.r31.s64 + 312;
	// bl 0x82b60b68
	ctx.lr = 0x82B6111C;
	sub_82B60B68(ctx, base);
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

__attribute__((alias("__imp__sub_82B61138"))) PPC_WEAK_FUNC(sub_82B61138);
PPC_FUNC_IMPL(__imp__sub_82B61138) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82B61140;
	__savegprlr_22(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r23,r3,4
	ctx.r23.s64 = ctx.r3.s64 + 4;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// li r26,0
	ctx.r26.s64 = 0;
loc_82B6116C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b6117c
	if (cr6.eq) goto loc_82B6117C;
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
loc_82B6117C:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82b6116c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B6116C;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82b61374
	if (cr6.eq) goto loc_82B61374;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r31,r11,20196
	ctx.r31.s64 = ctx.r11.s64 + 20196;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,-100
	ctx.r4.s64 = ctx.r31.s64 + -100;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B611B0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r31,-80
	ctx.r4.s64 = ctx.r31.s64 + -80;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,72(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 72);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82B611CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r31,-64
	ctx.r4.s64 = ctx.r31.s64 + -64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2f098
	ctx.lr = 0x82B611D8;
	sub_82D2F098(ctx, base);
	// addi r30,r3,100
	ctx.r30.s64 = ctx.r3.s64 + 100;
	// addi r4,r31,-48
	ctx.r4.s64 = ctx.r31.s64 + -48;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2e228
	ctx.lr = 0x82B611E8;
	sub_82D2E228(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// bl 0x82d2e228
	ctx.lr = 0x82B611FC;
	sub_82D2E228(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2e228
	ctx.lr = 0x82B6120C;
	sub_82D2E228(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// li r29,3
	ctx.r29.s64 = 3;
loc_82B61218:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b61230
	if (cr6.eq) goto loc_82B61230;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82B61230;
	sub_82D2AEC8(ctx, base);
loc_82B61230:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82b61218
	if (!cr0.eq) goto loc_82B61218;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// li r27,15
	ctx.r27.s64 = 15;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b61294
	if (cr6.eq) goto loc_82B61294;
	// stw r28,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r28.u32);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x82b61290
	if (cr6.eq) goto loc_82B61290;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r26,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r26.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r30,r28,100
	ctx.r30.s64 = ctx.r28.s64 + 100;
	// bl 0x8259cc28
	ctx.lr = 0x82B6127C;
	sub_8259CC28(ctx, base);
	// lis r5,514
	ctx.r5.s64 = 33685504;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// ori r5,r5,16
	ctx.r5.u64 = ctx.r5.u64 | 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a69a28
	ctx.lr = 0x82B61290;
	sub_82A69A28(ctx, base);
loc_82B61290:
	// li r29,1
	ctx.r29.s64 = 1;
loc_82B61294:
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b612f0
	if (cr6.eq) goto loc_82B612F0;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r11,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r11.u32);
	// beq cr6,0x82b612ec
	if (cr6.eq) goto loc_82B612EC;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r26,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r26.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r30,r11,100
	ctx.r30.s64 = ctx.r11.s64 + 100;
	// bl 0x8259cc28
	ctx.lr = 0x82B612D8;
	sub_8259CC28(ctx, base);
	// lis r5,505
	ctx.r5.s64 = 33095680;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// ori r5,r5,186
	ctx.r5.u64 = ctx.r5.u64 | 186;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a69a28
	ctx.lr = 0x82B612EC;
	sub_82A69A28(ctx, base);
loc_82B612EC:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_82B612F0:
	// clrlwi r11,r22,24
	ctx.r11.u64 = ctx.r22.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b61348
	if (cr6.eq) goto loc_82B61348;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r11,12(r25)
	PPC_STORE_U32(ctx.r25.u32 + 12, ctx.r11.u32);
	// beq cr6,0x82b61348
	if (cr6.eq) goto loc_82B61348;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r26,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r26.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r31,r11,100
	ctx.r31.s64 = ctx.r11.s64 + 100;
	// bl 0x8259cc28
	ctx.lr = 0x82B61334;
	sub_8259CC28(ctx, base);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// ori r5,r5,51
	ctx.r5.u64 = ctx.r5.u64 | 51;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a69a28
	ctx.lr = 0x82B61348;
	sub_82A69A28(ctx, base);
loc_82B61348:
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// li r30,3
	ctx.r30.s64 = 3;
loc_82B61350:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b61368
	if (cr6.eq) goto loc_82B61368;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x82B61368;
	sub_82D2AEC8(ctx, base);
loc_82B61368:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82b61350
	if (!cr0.eq) goto loc_82B61350;
loc_82B61374:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B6137C"))) PPC_WEAK_FUNC(sub_82B6137C);
PPC_FUNC_IMPL(__imp__sub_82B6137C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B61380"))) PPC_WEAK_FUNC(sub_82B61380);
PPC_FUNC_IMPL(__imp__sub_82B61380) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82B61388;
	__savegprlr_26(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// lwzx r10,r28,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r3.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b61574
	if (cr6.eq) goto loc_82B61574;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bne cr6,0x82b61480
	if (!cr6.eq) goto loc_82B61480;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r31,r11,20336
	ctx.r31.s64 = ctx.r11.s64 + 20336;
	// addi r4,r31,-72
	ctx.r4.s64 = ctx.r31.s64 + -72;
	// bl 0x837b0c10
	ctx.lr = 0x82B613C8;
	sub_837B0C10(ctx, base);
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// bl 0x82b142a0
	ctx.lr = 0x82B613D8;
	sub_82B142A0(ctx, base);
	// addi r4,r31,-52
	ctx.r4.s64 = ctx.r31.s64 + -52;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x837b0c10
	ctx.lr = 0x82B613E4;
	sub_837B0C10(ctx, base);
	// addi r10,r26,48
	ctx.r10.s64 = ctx.r26.s64 + 48;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// extsb r4,r10
	ctx.r4.s64 = ctx.r10.s8;
	// bl 0x82b142a0
	ctx.lr = 0x82B613F4;
	sub_82B142A0(ctx, base);
	// lwz r9,164(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// bge cr6,0x82b61408
	if (!cr6.lt) goto loc_82B61408;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
loc_82B61408:
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B61420;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,196(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// bge cr6,0x82b61434
	if (!cr6.lt) goto loc_82B61434;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
loc_82B61434:
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B6144C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B61468;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8387e8e0
	ctx.lr = 0x82B61470;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x82B61478;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82B61480:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d042a8
	ctx.lr = 0x82B614A4;
	sub_82D042A8(ctx, base);
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82d042a8
	ctx.lr = 0x82B614C0;
	sub_82D042A8(ctx, base);
	// lwzx r11,r28,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r26,r11,100
	ctx.r26.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x82b614d4
	if (!cr6.eq) goto loc_82B614D4;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
loc_82B614D4:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r30,r11,20336
	ctx.r30.s64 = ctx.r11.s64 + 20336;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r5,r30,-12
	ctx.r5.s64 = ctx.r30.s64 + -12;
	// bl 0x82ab6970
	ctx.lr = 0x82B614EC;
	sub_82AB6970(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// bl 0x82ac8718
	ctx.lr = 0x82B614FC;
	sub_82AC8718(ctx, base);
	// stw r27,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r27.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stb r31,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r31.u8);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8259cb28
	ctx.lr = 0x82B6151C;
	sub_8259CB28(ctx, base);
	// addi r4,r30,-8
	ctx.r4.s64 = ctx.r30.s64 + -8;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x837b0c10
	ctx.lr = 0x82B61528;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// bl 0x82a69ad0
	ctx.lr = 0x82B61538;
	sub_82A69AD0(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8387e8e0
	ctx.lr = 0x82B61540;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8387e8e0
	ctx.lr = 0x82B61548;
	sub_8387E8E0(ctx, base);
	// lwzx r3,r28,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B61564;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x82B6156C;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82B61574;
	sub_8387E8E0(ctx, base);
loc_82B61574:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B6157C"))) PPC_WEAK_FUNC(sub_82B6157C);
PPC_FUNC_IMPL(__imp__sub_82B6157C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B61580"))) PPC_WEAK_FUNC(sub_82B61580);
PPC_FUNC_IMPL(__imp__sub_82B61580) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82B61588;
	__savegprlr_22(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// rlwinm r23,r11,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwzx r10,r23,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r3.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b615f8
	if (!cr6.eq) goto loc_82B615F8;
	// lwz r11,20(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// li r22,2
	ctx.r22.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b615cc
	if (cr6.lt) goto loc_82B615CC;
	// stw r22,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r22.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82B615CC;
	sub_825952B8(ctx, base);
loc_82B615CC:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,15
	ctx.r30.s64 = 15;
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// stw r30,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r30.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b61790
	if (cr6.lt) goto loc_82B61790;
	// stw r22,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r22.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// b 0x82b61788
	goto loc_82B61788;
loc_82B615F8:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r28,r11,20372
	ctx.r28.s64 = ctx.r11.s64 + 20372;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r5,r28,-12
	ctx.r5.s64 = ctx.r28.s64 + -12;
	// bl 0x82ab6970
	ctx.lr = 0x82B61610;
	sub_82AB6970(ctx, base);
	// li r25,-1
	ctx.r25.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x825a1da8
	ctx.lr = 0x82B61624;
	sub_825A1DA8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,15
	ctx.r30.s64 = 15;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// bl 0x8292a448
	ctx.lr = 0x82B61644;
	sub_8292A448(ctx, base);
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8259cb28
	ctx.lr = 0x82B61664;
	sub_8259CB28(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r22,2
	ctx.r22.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b61684
	if (cr6.lt) goto loc_82B61684;
	// stw r22,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r22.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x82B61684;
	sub_825952B8(ctx, base);
loc_82B61684:
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// blt cr6,0x82b616ac
	if (cr6.lt) goto loc_82B616AC;
	// stw r22,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r22.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x825952b8
	ctx.lr = 0x82B616AC;
	sub_825952B8(ctx, base);
loc_82B616AC:
	// lwzx r11,r23,r24
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r24.u32);
	// stw r30,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r30.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// addi r26,r11,100
	ctx.r26.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x82b616cc
	if (!cr6.eq) goto loc_82B616CC;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
loc_82B616CC:
	// stw r30,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r30.u32);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r31.u8);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8259cb28
	ctx.lr = 0x82B616EC;
	sub_8259CB28(ctx, base);
	// addi r4,r28,-8
	ctx.r4.s64 = ctx.r28.s64 + -8;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x837b0c10
	ctx.lr = 0x82B616F8;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// bl 0x82a69ad0
	ctx.lr = 0x82B61708;
	sub_82A69AD0(ctx, base);
	// lwzx r3,r23,r24
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r24.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B61724;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,164(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82b61740
	if (cr6.lt) goto loc_82B61740;
	// stw r22,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r22.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x82B61740;
	sub_825952B8(ctx, base);
loc_82B61740:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// blt cr6,0x82b61768
	if (cr6.lt) goto loc_82B61768;
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82B61768;
	sub_825952B8(ctx, base);
loc_82B61768:
	// stw r30,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r30.u32);
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b61790
	if (cr6.lt) goto loc_82B61790;
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
loc_82B61788:
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82B61790;
	sub_825952B8(ctx, base);
loc_82B61790:
	// stw r30,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r30.u32);
	// stw r31,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r31.u32);
	// stb r31,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r31.u8);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B617A4"))) PPC_WEAK_FUNC(sub_82B617A4);
PPC_FUNC_IMPL(__imp__sub_82B617A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B617A8"))) PPC_WEAK_FUNC(sub_82B617A8);
PPC_FUNC_IMPL(__imp__sub_82B617A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B617B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwzx r10,r29,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r3.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b6180c
	if (cr6.eq) goto loc_82B6180C;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b60f18
	ctx.lr = 0x82B617DC;
	sub_82B60F18(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b60e38
	ctx.lr = 0x82B617EC;
	sub_82B60E38(ctx, base);
	// lwzx r3,r29,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,20388
	ctx.r4.s64 = ctx.r11.s64 + 20388;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B6180C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B6180C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B61814"))) PPC_WEAK_FUNC(sub_82B61814);
PPC_FUNC_IMPL(__imp__sub_82B61814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B61818"))) PPC_WEAK_FUNC(sub_82B61818);
PPC_FUNC_IMPL(__imp__sub_82B61818) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82B61820;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwzx r10,r29,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r3.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b6189c
	if (cr6.eq) goto loc_82B6189C;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b60f18
	ctx.lr = 0x82B61854;
	sub_82B60F18(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82b60f18
	ctx.lr = 0x82B61868;
	sub_82B60F18(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// bl 0x82b61580
	ctx.lr = 0x82B6187C;
	sub_82B61580(ctx, base);
	// lwzx r3,r29,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,20404
	ctx.r4.s64 = ctx.r11.s64 + 20404;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B6189C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B6189C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B618A4"))) PPC_WEAK_FUNC(sub_82B618A4);
PPC_FUNC_IMPL(__imp__sub_82B618A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B618A8"))) PPC_WEAK_FUNC(sub_82B618A8);
PPC_FUNC_IMPL(__imp__sub_82B618A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82B618B0;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82B618BC;
	sub_82D19A68(ctx, base);
	// bl 0x82d2ec40
	ctx.lr = 0x82B618C0;
	sub_82D2EC40(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r3.u32);
	// beq cr6,0x82b61a18
	if (cr6.eq) goto loc_82B61A18;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82B618D4;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r3.u32);
	// beq cr6,0x82b61a18
	if (cr6.eq) goto loc_82B61A18;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x82d33db0
	ctx.lr = 0x82B618EC;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r3.u32);
	// beq cr6,0x82b61a18
	if (cr6.eq) goto loc_82B61A18;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B61908;
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
	ctx.lr = 0x82B61928;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83102db0
	ctx.lr = 0x82B61934;
	sub_83102DB0(ctx, base);
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r27,r11,20476
	ctx.r27.s64 = ctx.r11.s64 + 20476;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r27,-36
	ctx.r4.s64 = ctx.r27.s64 + -36;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B61958;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// addi r4,r27,-16
	ctx.r4.s64 = ctx.r27.s64 + -16;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,72(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 72);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82B61974;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x82b60528
	ctx.lr = 0x82B61988;
	sub_82B60528(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82b619ac
	if (cr6.eq) goto loc_82B619AC;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x82b619a8
	if (cr6.eq) goto loc_82B619A8;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x82b619b4
	if (!cr6.eq) goto loc_82B619B4;
	// li r28,1
	ctx.r28.s64 = 1;
	// b 0x82b619b4
	goto loc_82B619B4;
loc_82B619A8:
	// li r28,1
	ctx.r28.s64 = 1;
loc_82B619AC:
	// li r29,1
	ctx.r29.s64 = 1;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82B619B4:
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r4,124(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r31,132
	ctx.r3.s64 = ctx.r31.s64 + 132;
	// bl 0x82b61138
	ctx.lr = 0x82B619CC;
	sub_82B61138(ctx, base);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r4,128(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r31,148
	ctx.r3.s64 = ctx.r31.s64 + 148;
	// bl 0x82b61138
	ctx.lr = 0x82B619E4;
	sub_82B61138(ctx, base);
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r31,r11,100
	ctx.r31.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x82b619f8
	if (!cr6.eq) goto loc_82B619F8;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82B619F8:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82B61A04;
	sub_837B0C10(ctx, base);
	// lis r5,515
	ctx.r5.s64 = 33751040;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r5,r5,61
	ctx.r5.u64 = ctx.r5.u64 | 61;
	// bl 0x82a69a28
	ctx.lr = 0x82B61A18;
	sub_82A69A28(ctx, base);
loc_82B61A18:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B61A24"))) PPC_WEAK_FUNC(sub_82B61A24);
PPC_FUNC_IMPL(__imp__sub_82B61A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B61A28"))) PPC_WEAK_FUNC(sub_82B61A28);
PPC_FUNC_IMPL(__imp__sub_82B61A28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B61A30;
	__savegprlr_29(ctx, base);
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// beq cr6,0x82b61b58
	if (cr6.eq) goto loc_82B61B58;
	// addi r11,r4,31
	ctx.r11.s64 = ctx.r4.s64 + 31;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r29,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r3.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b61b58
	if (cr6.eq) goto loc_82B61B58;
	// bl 0x830ff290
	ctx.lr = 0x82B61A5C;
	sub_830FF290(ctx, base);
	// lwzx r3,r29,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,20700
	ctx.r4.s64 = ctx.r11.s64 + 20700;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B61A7C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r30,r11,132
	ctx.r30.s64 = ctx.r11.s64 + 132;
	// bl 0x82dab800
	ctx.lr = 0x82B61A90;
	sub_82DAB800(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// bl 0x82dab7c0
	ctx.lr = 0x82B61A9C;
	sub_82DAB7C0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x82b61380
	ctx.lr = 0x82B61AB0;
	sub_82B61380(ctx, base);
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// bl 0x82dab740
	ctx.lr = 0x82B61AB8;
	sub_82DAB740(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// bl 0x82dab780
	ctx.lr = 0x82B61AC4;
	sub_82DAB780(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x82b61818
	ctx.lr = 0x82B61AD8;
	sub_82B61818(ctx, base);
	// li r8,5
	ctx.r8.s64 = 5;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r8,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r8.u32);
	// stw r7,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r7.u32);
	// bl 0x82d86078
	ctx.lr = 0x82B61AEC;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b61b44
	if (cr6.eq) goto loc_82B61B44;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x82daa4f8
	ctx.lr = 0x82B61AFC;
	sub_82DAA4F8(ctx, base);
	// bl 0x82daa8b8
	ctx.lr = 0x82B61B00;
	sub_82DAA8B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b61b44
	if (cr6.eq) goto loc_82B61B44;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b61088
	ctx.lr = 0x82B61B14;
	sub_82B61088(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// bl 0x82dabd60
	ctx.lr = 0x82B61B24;
	sub_82DABD60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b61b3c
	if (cr6.eq) goto loc_82B61B3C;
	// lwz r11,240(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
loc_82B61B3C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b60a58
	ctx.lr = 0x82B61B44;
	sub_82B60A58(ctx, base);
loc_82B61B44:
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r6,168(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,172(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// bl 0x82b61380
	ctx.lr = 0x82B61B58;
	sub_82B61380(ctx, base);
loc_82B61B58:
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B61B60"))) PPC_WEAK_FUNC(sub_82B61B60);
PPC_FUNC_IMPL(__imp__sub_82B61B60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B61B68;
	__savegprlr_28(ctx, base);
	// stwu r1,-592(r1)
	ea = -592 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// beq cr6,0x82b61cfc
	if (cr6.eq) goto loc_82B61CFC;
	// addi r11,r4,31
	ctx.r11.s64 = ctx.r4.s64 + 31;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r28,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r3.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b61cfc
	if (cr6.eq) goto loc_82B61CFC;
	// bl 0x830ff290
	ctx.lr = 0x82B61B94;
	sub_830FF290(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
loc_82B61B98:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82b61088
	ctx.lr = 0x82B61BA0;
	sub_82B61088(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// bl 0x82dabd60
	ctx.lr = 0x82B61BB0;
	sub_82DABD60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b61cf4
	if (cr6.eq) goto loc_82B61CF4;
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// bl 0x82dab840
	ctx.lr = 0x82B61BC4;
	sub_82DAB840(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// lwz r10,224(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// subfic r9,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r7,r10
	ctx.r11.u64 = ctx.r7.u64 & ctx.r10.u64;
	// stw r11,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, xer);
	// beq cr6,0x82b61c00
	if (cr6.eq) goto loc_82B61C00;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82b60a58
	ctx.lr = 0x82B61BEC;
	sub_82B60A58(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r29,2
	cr6.compare<uint32_t>(ctx.r29.u32, 2, xer);
	// blt cr6,0x82b61b98
	if (cr6.lt) goto loc_82B61B98;
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82B61C00:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r29,r11,20248
	ctx.r29.s64 = ctx.r11.s64 + 20248;
	// addi r4,r29,-422
	ctx.r4.s64 = ctx.r29.s64 + -422;
	// bl 0x837b0c10
	ctx.lr = 0x82B61C14;
	sub_837B0C10(ctx, base);
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r5,172(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82b61c28
	if (!cr6.lt) goto loc_82B61C28;
	// addi r5,r1,172
	ctx.r5.s64 = ctx.r1.s64 + 172;
loc_82B61C28:
	// lis r4,508
	ctx.r4.s64 = 33292288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,168
	ctx.r4.u64 = ctx.r4.u64 | 168;
	// bl 0x82d042a8
	ctx.lr = 0x82B61C38;
	sub_82D042A8(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// ld r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r8,144(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r7,160(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 160);
	// bl 0x82c342e8
	ctx.lr = 0x82B61C58;
	sub_82C342E8(ctx, base);
	// lwzx r3,r28,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// addi r4,r29,468
	ctx.r4.s64 = ctx.r29.s64 + 468;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B61C74;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r31,r11,132
	ctx.r31.s64 = ctx.r11.s64 + 132;
	// lwz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b61ccc
	if (cr6.eq) goto loc_82B61CCC;
	// addi r4,r29,-8
	ctx.r4.s64 = ctx.r29.s64 + -8;
	// lwz r28,228(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// addi r30,r11,100
	ctx.r30.s64 = ctx.r11.s64 + 100;
	// bl 0x837b0c10
	ctx.lr = 0x82B61CA0;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82a6a1b8
	ctx.lr = 0x82B61CB0;
	sub_82A6A1B8(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B61CCC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B61CCC:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,232(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b617a8
	ctx.lr = 0x82B61CDC;
	sub_82B617A8(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,272(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// bl 0x82b60d40
	ctx.lr = 0x82B61CEC;
	sub_82B60D40(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82B61CF4;
	sub_8387E8E0(ctx, base);
loc_82B61CF4:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82b60a58
	ctx.lr = 0x82B61CFC;
	sub_82B60A58(ctx, base);
loc_82B61CFC:
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B61D04"))) PPC_WEAK_FUNC(sub_82B61D04);
PPC_FUNC_IMPL(__imp__sub_82B61D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B61D08"))) PPC_WEAK_FUNC(sub_82B61D08);
PPC_FUNC_IMPL(__imp__sub_82B61D08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B61D10;
	__savegprlr_29(ctx, base);
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82da8d18
	ctx.lr = 0x82B61D1C;
	sub_82DA8D18(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da8c08
	ctx.lr = 0x82B61D24;
	sub_82DA8C08(ctx, base);
	// bl 0x82d860f0
	ctx.lr = 0x82B61D28;
	sub_82D860F0(ctx, base);
	// bl 0x82d86078
	ctx.lr = 0x82B61D2C;
	sub_82D86078(ctx, base);
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x82daa490
	ctx.lr = 0x82B61D34;
	sub_82DAA490(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82B61D3C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b61088
	ctx.lr = 0x82B61D44;
	sub_82B61088(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82dabd60
	ctx.lr = 0x82B61D54;
	sub_82DABD60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b61d9c
	if (cr6.eq) goto loc_82B61D9C;
	// bl 0x82d860f0
	ctx.lr = 0x82B61D64;
	sub_82D860F0(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, xer);
	// bne cr6,0x82b61d90
	if (!cr6.eq) goto loc_82B61D90;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b60a58
	ctx.lr = 0x82B61D78;
	sub_82B60A58(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// blt cr6,0x82b61d3c
	if (cr6.lt) goto loc_82B61D3C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82B61D90:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da8e68
	ctx.lr = 0x82B61D9C;
	sub_82DA8E68(ctx, base);
loc_82B61D9C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b60a58
	ctx.lr = 0x82B61DA4;
	sub_82B60A58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B61DB0"))) PPC_WEAK_FUNC(sub_82B61DB0);
PPC_FUNC_IMPL(__imp__sub_82B61DB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82B61DB8;
	__savegprlr_25(ctx, base);
	// stwu r1,-1024(r1)
	ea = -1024 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,176(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x82b62318
	if (cr6.gt) goto loc_82B62318;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82b61f18
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B61F18;
	// bdzf 4*cr6+eq,0x82b61fac
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B61FAC;
	// bdzf 4*cr6+eq,0x82b622e4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B622E4;
	// bne cr6,0x82b62314
	if (!cr6.eq) goto loc_82B62314;
	// bl 0x82d86078
	ctx.lr = 0x82B61DF0;
	sub_82D86078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b61e24
	if (cr6.eq) goto loc_82B61E24;
	// lwz r3,140(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// bl 0x82dacbd8
	ctx.lr = 0x82B61E04;
	sub_82DACBD8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82b61d08
	ctx.lr = 0x82B61E10;
	sub_82B61D08(ctx, base);
	// lwz r11,416(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b61e30
	if (!cr6.eq) goto loc_82B61E30;
loc_82B61E1C:
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82da8c38
	ctx.lr = 0x82B61E24;
	sub_82DA8C38(ctx, base);
loc_82B61E24:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1024
	ctx.r1.s64 = ctx.r1.s64 + 1024;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82B61E30:
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// bl 0x82dac750
	ctx.lr = 0x82B61E3C;
	sub_82DAC750(ctx, base);
	// bl 0x830ff290
	ctx.lr = 0x82B61E40;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,44
	cr6.compare<uint32_t>(ctx.r11.u32, 44, xer);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r31,r11,20092
	ctx.r31.s64 = ctx.r11.s64 + 20092;
	// bne cr6,0x82b61e9c
	if (!cr6.eq) goto loc_82B61E9C;
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// addi r4,r31,644
	ctx.r4.s64 = ctx.r31.s64 + 644;
	// bl 0x837b0c10
	ctx.lr = 0x82B61E60;
	sub_837B0C10(ctx, base);
	// addi r4,r1,528
	ctx.r4.s64 = ctx.r1.s64 + 528;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d894e0
	ctx.lr = 0x82B61E6C;
	sub_82D894E0(ctx, base);
	// stw r3,192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 192, ctx.r3.u32);
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// bl 0x8387e8e0
	ctx.lr = 0x82B61E78;
	sub_8387E8E0(ctx, base);
	// addi r4,r31,684
	ctx.r4.s64 = ctx.r31.s64 + 684;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x837b0c10
	ctx.lr = 0x82B61E84;
	sub_837B0C10(ctx, base);
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d894e0
	ctx.lr = 0x82B61E90;
	sub_82D894E0(ctx, base);
	// stw r3,196(r28)
	PPC_STORE_U32(ctx.r28.u32 + 196, ctx.r3.u32);
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// b 0x82b61ee0
	goto loc_82B61EE0;
loc_82B61E9C:
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// addi r4,r31,728
	ctx.r4.s64 = ctx.r31.s64 + 728;
	// bl 0x837b0c10
	ctx.lr = 0x82B61EA8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,464
	ctx.r4.s64 = ctx.r1.s64 + 464;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d894e0
	ctx.lr = 0x82B61EB4;
	sub_82D894E0(ctx, base);
	// stw r3,192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 192, ctx.r3.u32);
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x8387e8e0
	ctx.lr = 0x82B61EC0;
	sub_8387E8E0(ctx, base);
	// addi r4,r31,760
	ctx.r4.s64 = ctx.r31.s64 + 760;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x837b0c10
	ctx.lr = 0x82B61ECC;
	sub_837B0C10(ctx, base);
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d894e0
	ctx.lr = 0x82B61ED8;
	sub_82D894E0(ctx, base);
	// stw r3,196(r28)
	PPC_STORE_U32(ctx.r28.u32 + 196, ctx.r3.u32);
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
loc_82B61EE0:
	// bl 0x8387e8e0
	ctx.lr = 0x82B61EE4;
	sub_8387E8E0(ctx, base);
	// lwz r11,192(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 192);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b61e1c
	if (cr6.eq) goto loc_82B61E1C;
	// lwz r11,196(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 196);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b61e1c
	if (cr6.eq) goto loc_82B61E1C;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// stw r11,176(r28)
	PPC_STORE_U32(ctx.r28.u32 + 176, ctx.r11.u32);
	// bl 0x82da8c38
	ctx.lr = 0x82B61F0C;
	sub_82DA8C38(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,1024
	ctx.r1.s64 = ctx.r1.s64 + 1024;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82B61F18:
	// lwz r3,192(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 192);
	// bl 0x82ddcec8
	ctx.lr = 0x82B61F20;
	sub_82DDCEC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,196(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 196);
	// bl 0x82ddcec8
	ctx.lr = 0x82B61F2C;
	sub_82DDCEC8(ctx, base);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne cr6,0x82b61f40
	if (!cr6.eq) goto loc_82B61F40;
loc_82B61F34:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,1024
	ctx.r1.s64 = ctx.r1.s64 + 1024;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82B61F40:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82b61f34
	if (cr6.eq) goto loc_82B61F34;
	// lwz r3,192(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 192);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b61f68
	if (cr6.eq) goto loc_82B61F68;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B61F64;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r31,192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 192, ctx.r31.u32);
loc_82B61F68:
	// lwz r3,196(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 196);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b61f88
	if (cr6.eq) goto loc_82B61F88;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B61F84;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r31,196(r28)
	PPC_STORE_U32(ctx.r28.u32 + 196, ctx.r31.u32);
loc_82B61F88:
	// bl 0x830ff290
	ctx.lr = 0x82B61F8C;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,44
	cr6.compare<uint32_t>(ctx.r11.u32, 44, xer);
	// beq cr6,0x82b61e24
	if (cr6.eq) goto loc_82B61E24;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r11,176(r28)
	PPC_STORE_U32(ctx.r28.u32 + 176, ctx.r11.u32);
	// addi r1,r1,1024
	ctx.r1.s64 = ctx.r1.s64 + 1024;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82B61FAC:
	// bl 0x82d86078
	ctx.lr = 0x82B61FB0;
	sub_82D86078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b61e24
	if (cr6.eq) goto loc_82B61E24;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// stb r31,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r31.u8);
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// stw r11,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r11.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// stw r11,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// stw r31,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r31.u32);
	// stb r31,204(r1)
	PPC_STORE_U8(ctx.r1.u32 + 204, ctx.r31.u8);
	// stw r31,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r31.u32);
	// stw r31,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r31.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// stw r11,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r11.u32);
	// stw r31,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r31.u32);
	// stb r31,260(r1)
	PPC_STORE_U8(ctx.r1.u32 + 260, ctx.r31.u8);
	// stw r11,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r11.u32);
	// stw r31,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r31.u32);
	// stb r31,304(r1)
	PPC_STORE_U8(ctx.r1.u32 + 304, ctx.r31.u8);
	// stw r11,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r11.u32);
	// stw r31,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r31.u32);
	// stb r31,332(r1)
	PPC_STORE_U8(ctx.r1.u32 + 332, ctx.r31.u8);
	// stw r31,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r31.u32);
	// stw r31,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r31.u32);
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// bl 0x831156e8
	ctx.lr = 0x82B62024;
	sub_831156E8(ctx, base);
	// lwz r29,140(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addis r30,r11,2
	ctx.r30.s64 = ctx.r11.s64 + 131072;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r30,r30,-20056
	ctx.r30.s64 = ctx.r30.s64 + -20056;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// bl 0x82dacfb0
	ctx.lr = 0x82B62058;
	sub_82DACFB0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b6207c
	if (cr6.eq) goto loc_82B6207C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82dacf60
	ctx.lr = 0x82B62070;
	sub_82DACF60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b62080
	if (!cr6.eq) goto loc_82B62080;
loc_82B6207C:
	// li r25,1
	ctx.r25.s64 = 1;
loc_82B62080:
	// lhz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lhz r27,2(r30)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// lhz r26,4(r30)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// bl 0x831c25e8
	ctx.lr = 0x82B620A0;
	sub_831C25E8(ctx, base);
	// stfs f1,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831c25e8
	ctx.lr = 0x82B620B8;
	sub_831C25E8(ctx, base);
	// stfs f1,288(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// lhz r27,6(r30)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r30.u32 + 6);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lhz r26,8(r30)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// lhz r29,10(r30)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r30.u32 + 10);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x831c26d0
	ctx.lr = 0x82B620DC;
	sub_831C26D0(ctx, base);
	// stfs f1,164(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831c26d0
	ctx.lr = 0x82B620F4;
	sub_831C26D0(ctx, base);
	// stfs f1,292(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// lhz r27,12(r30)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r30.u32 + 12);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lhz r29,16(r30)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r30.u32 + 16);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lhz r30,14(r30)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r30.u32 + 14);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x831c27b8
	ctx.lr = 0x82B62118;
	sub_831C27B8(ctx, base);
	// stfs f1,168(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831c27b8
	ctx.lr = 0x82B62130;
	sub_831C27B8(ctx, base);
	// stfs f1,296(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// bl 0x82d860f0
	ctx.lr = 0x82B62138;
	sub_82D860F0(ctx, base);
	// bl 0x82d86078
	ctx.lr = 0x82B6213C;
	sub_82D86078(ctx, base);
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x82daa490
	ctx.lr = 0x82B62144;
	sub_82DAA490(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// li r29,-1
	ctx.r29.s64 = -1;
loc_82B62150:
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// bl 0x82b61088
	ctx.lr = 0x82B62158;
	sub_82B61088(ctx, base);
	// addi r5,r1,560
	ctx.r5.s64 = ctx.r1.s64 + 560;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82dabd60
	ctx.lr = 0x82B62168;
	sub_82DABD60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b62260
	if (cr6.eq) goto loc_82B62260;
	// bl 0x82d860f0
	ctx.lr = 0x82B62178;
	sub_82D860F0(ctx, base);
	// lwz r11,592(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 592);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, xer);
	// lwz r11,716(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 716);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,688
	ctx.r4.s64 = ctx.r1.s64 + 688;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// bne cr6,0x82b621ec
	if (!cr6.eq) goto loc_82B621EC;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x8259cb28
	ctx.lr = 0x82B621A4;
	sub_8259CB28(ctx, base);
	// addi r4,r1,872
	ctx.r4.s64 = ctx.r1.s64 + 872;
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// bl 0x82b60ce8
	ctx.lr = 0x82B621B0;
	sub_82B60CE8(ctx, base);
	// lwz r11,936(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 936);
	// lwz r9,932(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 932);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x82b621e0
	if (cr6.eq) goto loc_82B621E0;
loc_82B621C0:
	// addi r30,r11,-8
	ctx.r30.s64 = ctx.r11.s64 + -8;
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83546fd8
	ctx.lr = 0x82B621D0;
	sub_83546FD8(ctx, base);
	// lwz r10,932(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 932);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// bne cr6,0x82b621c0
	if (!cr6.eq) goto loc_82B621C0;
loc_82B621E0:
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// b 0x82b6223c
	goto loc_82B6223C;
loc_82B621EC:
	// stw r10,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r10.u32);
	// addi r3,r1,260
	ctx.r3.s64 = ctx.r1.s64 + 260;
	// bl 0x8259cb28
	ctx.lr = 0x82B621F8;
	sub_8259CB28(ctx, base);
	// addi r4,r1,872
	ctx.r4.s64 = ctx.r1.s64 + 872;
	// addi r3,r1,300
	ctx.r3.s64 = ctx.r1.s64 + 300;
	// bl 0x82b60ce8
	ctx.lr = 0x82B62204;
	sub_82B60CE8(ctx, base);
	// lwz r11,936(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 936);
	// lwz r9,932(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 932);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x82b62234
	if (cr6.eq) goto loc_82B62234;
loc_82B62214:
	// addi r30,r11,-8
	ctx.r30.s64 = ctx.r11.s64 + -8;
	// addi r3,r1,360
	ctx.r3.s64 = ctx.r1.s64 + 360;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83546fd8
	ctx.lr = 0x82B62224;
	sub_83546FD8(ctx, base);
	// lwz r10,932(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 932);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// bne cr6,0x82b62214
	if (!cr6.eq) goto loc_82B62214;
loc_82B62234:
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
loc_82B6223C:
	// addi r4,r1,672
	ctx.r4.s64 = ctx.r1.s64 + 672;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c34500
	ctx.lr = 0x82B62248;
	sub_82C34500(ctx, base);
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// bl 0x82b60a58
	ctx.lr = 0x82B62250;
	sub_82B60A58(ctx, base);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplwi cr6,r27,2
	cr6.compare<uint32_t>(ctx.r27.u32, 2, xer);
	// blt cr6,0x82b62150
	if (cr6.lt) goto loc_82B62150;
	// b 0x82b62268
	goto loc_82B62268;
loc_82B62260:
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// bl 0x82b60a58
	ctx.lr = 0x82B62268;
	sub_82B60A58(ctx, base);
loc_82B62268:
	// bl 0x83a7d958
	ctx.lr = 0x82B6226C;
	sub_83A7D958(ctx, base);
	// bl 0x83524138
	ctx.lr = 0x82B62270;
	sub_83524138(ctx, base);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r11,3
	ctx.r11.s64 = 3;
	// std r3,184(r28)
	PPC_STORE_U64(ctx.r28.u32 + 184, ctx.r3.u64);
	// li r30,2
	ctx.r30.s64 = 2;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r11,176(r28)
	PPC_STORE_U32(ctx.r28.u32 + 176, ctx.r11.u32);
	// beq cr6,0x82b62298
	if (cr6.eq) goto loc_82B62298;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825952b8
	ctx.lr = 0x82B62298;
	sub_825952B8(ctx, base);
loc_82B62298:
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// beq cr6,0x82b622bc
	if (cr6.eq) goto loc_82B622BC;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x825952b8
	ctx.lr = 0x82B622BC;
	sub_825952B8(ctx, base);
loc_82B622BC:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// bl 0x82b60ae8
	ctx.lr = 0x82B622D0;
	sub_82B60AE8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82b60ae8
	ctx.lr = 0x82B622D8;
	sub_82B60AE8(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,1024
	ctx.r1.s64 = ctx.r1.s64 + 1024;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82B622E4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ld r4,184(r28)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r28.u32 + 184);
	// bl 0x82b608d0
	ctx.lr = 0x82B622F0;
	sub_82B608D0(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f0,20092(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20092);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82b62318
	if (!cr6.gt) goto loc_82B62318;
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r11,176(r28)
	PPC_STORE_U32(ctx.r28.u32 + 176, ctx.r11.u32);
	// addi r1,r1,1024
	ctx.r1.s64 = ctx.r1.s64 + 1024;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82B62314:
	// li r25,1
	ctx.r25.s64 = 1;
loc_82B62318:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,1024
	ctx.r1.s64 = ctx.r1.s64 + 1024;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B62324"))) PPC_WEAK_FUNC(sub_82B62324);
PPC_FUNC_IMPL(__imp__sub_82B62324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B62328"))) PPC_WEAK_FUNC(sub_82B62328);
PPC_FUNC_IMPL(__imp__sub_82B62328) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82B62330;
	__savegprlr_27(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31758
	ctx.r29.s64 = -2081292288;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,30272(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 30272);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b6236c
	if (cr6.eq) goto loc_82B6236C;
	// bl 0x82dab248
	ctx.lr = 0x82B6234C;
	sub_82DAB248(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82b6236c
	if (!cr6.eq) goto loc_82B6236C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d199d0
	ctx.lr = 0x82B62364;
	sub_82D199D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b607f0
	ctx.lr = 0x82B6236C;
	sub_82B607F0(ctx, base);
loc_82B6236C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d199e0
	ctx.lr = 0x82B62374;
	sub_82D199E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b62424
	if (!cr6.eq) goto loc_82B62424;
	// bl 0x82d95ee0
	ctx.lr = 0x82B62384;
	sub_82D95EE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b62424
	if (cr6.eq) goto loc_82B62424;
	// bl 0x82d96060
	ctx.lr = 0x82B62394;
	sub_82D96060(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b62424
	if (!cr6.eq) goto loc_82B62424;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e74328
	ctx.lr = 0x82B623AC;
	sub_82E74328(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b62424
	if (cr6.eq) goto loc_82B62424;
	// bl 0x82d86078
	ctx.lr = 0x82B623BC;
	sub_82D86078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b62424
	if (cr6.eq) goto loc_82B62424;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x82a47dc0
	ctx.lr = 0x82B623D0;
	sub_82A47DC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b62424
	if (cr6.eq) goto loc_82B62424;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e74260
	ctx.lr = 0x82B623E4;
	sub_82E74260(ctx, base);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// rotlwi r30,r3,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82da27f0
	ctx.lr = 0x82B623F4;
	sub_82DA27F0(ctx, base);
	// bl 0x82dad028
	ctx.lr = 0x82B623F8;
	sub_82DAD028(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, xer);
	// ble cr6,0x82b62424
	if (!cr6.gt) goto loc_82B62424;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b60858
	ctx.lr = 0x82B62408;
	sub_82B60858(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b62424
	if (cr6.eq) goto loc_82B62424;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 104, ctx.r11.u8);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82B62424:
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// bl 0x82dab618
	ctx.lr = 0x82B6242C;
	sub_82DAB618(ctx, base);
	// ld r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 112);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpld cr6,r11,r3
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r3.u64, xer);
	// bne cr6,0x82b62454
	if (!cr6.eq) goto loc_82B62454;
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82b62454
	if (!cr6.eq) goto loc_82B62454;
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82b6292c
	if (cr6.eq) goto loc_82B6292C;
loc_82B62454:
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x82dab620
	ctx.lr = 0x82B62460;
	sub_82DAB620(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b62484
	if (cr6.eq) goto loc_82B62484;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d199e0
	ctx.lr = 0x82B62474;
	sub_82D199E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r5,2
	ctx.r5.s64 = 2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b62488
	if (cr6.eq) goto loc_82B62488;
loc_82B62484:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82B62488:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B62494;
	sub_82D19788(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19840
	ctx.lr = 0x82B624A0;
	sub_82D19840(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82b624ac
	if (!cr6.eq) goto loc_82B624AC;
	// li r28,1
	ctx.r28.s64 = 1;
loc_82B624AC:
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// bl 0x825832f0
	ctx.lr = 0x82B624B4;
	sub_825832F0(ctx, base);
	// cmplwi cr6,r3,9
	cr6.compare<uint32_t>(ctx.r3.u32, 9, xer);
	// bgt cr6,0x82b628e4
	if (cr6.gt) goto loc_82B628E4;
	// lis r12,-32074
	ctx.r12.s64 = -2102001664;
	// rlwinm r0,r3,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,9428
	ctx.r12.s64 = ctx.r12.s64 + 9428;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r3.u32) {
	case 0:
		goto loc_82B6290C;
	case 1:
		goto loc_82B624FC;
	case 2:
		goto loc_82B62554;
	case 3:
		goto loc_82B62594;
	case 4:
		goto loc_82B62668;
	case 5:
		goto loc_82B6290C;
	case 6:
		goto loc_82B6283C;
	case 7:
		goto loc_82B62870;
	case 8:
		goto loc_82B6288C;
	case 9:
		goto loc_82B628B8;
	default:
		return;
	}
	// lwz r21,10508(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + 10508);
	// lwz r21,9468(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + 9468);
	// lwz r21,9556(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + 9556);
	// lwz r21,9620(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + 9620);
	// lwz r21,9832(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + 9832);
	// lwz r21,10508(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + 10508);
	// lwz r21,10300(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + 10300);
	// lwz r21,10352(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + 10352);
	// lwz r21,10380(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + 10380);
	// lwz r21,10424(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + 10424);
loc_82B624FC:
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r30,r11,100
	ctx.r30.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x82b62510
	if (!cr6.eq) goto loc_82B62510;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82B62510:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r11,r11,20692
	ctx.r11.s64 = ctx.r11.s64 + 20692;
	// addi r4,r11,-184
	ctx.r4.s64 = ctx.r11.s64 + -184;
	// bl 0x837b0c10
	ctx.lr = 0x82B62524;
	sub_837B0C10(ctx, base);
	// lis r5,515
	ctx.r5.s64 = 33751040;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r5,r5,61
	ctx.r5.u64 = ctx.r5.u64 | 61;
	// bl 0x82a69a28
	ctx.lr = 0x82B62538;
	sub_82A69A28(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b61b60
	ctx.lr = 0x82B62544;
	sub_82B61B60(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b61a28
	ctx.lr = 0x82B62550;
	sub_82B61A28(ctx, base);
	// b 0x82b6290c
	goto loc_82B6290C;
loc_82B62554:
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r30,r11,100
	ctx.r30.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x82b62568
	if (!cr6.eq) goto loc_82B62568;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82B62568:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r11,r11,20692
	ctx.r11.s64 = ctx.r11.s64 + 20692;
	// addi r4,r11,-172
	ctx.r4.s64 = ctx.r11.s64 + -172;
	// bl 0x837b0c10
	ctx.lr = 0x82B6257C;
	sub_837B0C10(ctx, base);
	// lis r5,515
	ctx.r5.s64 = 33751040;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r5,r5,62
	ctx.r5.u64 = ctx.r5.u64 | 62;
	// bl 0x82a69a28
	ctx.lr = 0x82B62590;
	sub_82A69A28(ctx, base);
	// b 0x82b6290c
	goto loc_82B6290C;
loc_82B62594:
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x830ff290
	ctx.lr = 0x82B6259C;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,53
	cr6.compare<uint32_t>(ctx.r11.u32, 53, xer);
	// beq cr6,0x82b625b8
	if (cr6.eq) goto loc_82B625B8;
	// bl 0x830ff290
	ctx.lr = 0x82B625AC;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,61
	cr6.compare<uint32_t>(ctx.r11.u32, 61, xer);
	// bne cr6,0x82b625d4
	if (!cr6.eq) goto loc_82B625D4;
loc_82B625B8:
	// bl 0x82d86078
	ctx.lr = 0x82B625BC;
	sub_82D86078(ctx, base);
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832f0
	ctx.lr = 0x82B625C4;
	sub_825832F0(ctx, base);
	// lbz r11,5777(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5777);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b625d4
	if (cr6.eq) goto loc_82B625D4;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82B625D4:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b6290c
	if (!cr6.eq) goto loc_82B6290C;
	// bl 0x82d26ed8
	ctx.lr = 0x82B625E4;
	sub_82D26ED8(ctx, base);
	// li r4,59
	ctx.r4.s64 = 59;
	// bl 0x82d26b18
	ctx.lr = 0x82B625EC;
	sub_82D26B18(ctx, base);
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r29,r11,100
	ctx.r29.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x82b62600
	if (!cr6.eq) goto loc_82B62600;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82B62600:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r30,r11,20692
	ctx.r30.s64 = ctx.r11.s64 + 20692;
	// addi r4,r30,-160
	ctx.r4.s64 = ctx.r30.s64 + -160;
	// bl 0x837b0c10
	ctx.lr = 0x82B62614;
	sub_837B0C10(ctx, base);
	// lis r5,510
	ctx.r5.s64 = 33423360;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r5,r5,3
	ctx.r5.u64 = ctx.r5.u64 | 3;
	// bl 0x82a69a28
	ctx.lr = 0x82B62628;
	sub_82A69A28(ctx, base);
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b6264c
	if (cr6.eq) goto loc_82B6264C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,-148
	ctx.r4.s64 = ctx.r30.s64 + -148;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B6264C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B6264C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b61b60
	ctx.lr = 0x82B62658;
	sub_82B61B60(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b61b60
	ctx.lr = 0x82B62664;
	sub_82B61B60(ctx, base);
	// b 0x82b6290c
	goto loc_82B6290C;
loc_82B62668:
	// bl 0x830ff290
	ctx.lr = 0x82B6266C;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,44
	cr6.compare<uint32_t>(ctx.r11.u32, 44, xer);
	// beq cr6,0x82b626b8
	if (cr6.eq) goto loc_82B626B8;
	// bl 0x830ff290
	ctx.lr = 0x82B6267C;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,53
	cr6.compare<uint32_t>(ctx.r11.u32, 53, xer);
	// beq cr6,0x82b626b8
	if (cr6.eq) goto loc_82B626B8;
	// bl 0x830ff290
	ctx.lr = 0x82B6268C;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,61
	cr6.compare<uint32_t>(ctx.r11.u32, 61, xer);
	// beq cr6,0x82b626b8
	if (cr6.eq) goto loc_82B626B8;
	// bl 0x82c320d8
	ctx.lr = 0x82B6269C;
	sub_82C320D8(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,20692
	ctx.r11.s64 = ctx.r11.s64 + 20692;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-56
	ctx.r5.s64 = ctx.r11.s64 + -56;
	// bl 0x82d20da8
	ctx.lr = 0x82B626B4;
	sub_82D20DA8(ctx, base);
	// b 0x82b6290c
	goto loc_82B6290C;
loc_82B626B8:
	// bl 0x830ff290
	ctx.lr = 0x82B626BC;
	sub_830FF290(ctx, base);
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// cmplwi cr6,r10,44
	cr6.compare<uint32_t>(ctx.r10.u32, 44, xer);
	// addi r29,r11,20692
	ctx.r29.s64 = ctx.r11.s64 + 20692;
	// beq cr6,0x82b62810
	if (cr6.eq) goto loc_82B62810;
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82b627bc
	if (!cr6.eq) goto loc_82B627BC;
	// bl 0x82d86078
	ctx.lr = 0x82B626E0;
	sub_82D86078(ctx, base);
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832f0
	ctx.lr = 0x82B626E8;
	sub_825832F0(ctx, base);
	// lbz r11,5777(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5777);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b627b4
	if (cr6.eq) goto loc_82B627B4;
	// bl 0x82d26ed8
	ctx.lr = 0x82B626F8;
	sub_82D26ED8(ctx, base);
	// li r4,59
	ctx.r4.s64 = 59;
	// bl 0x82d26b18
	ctx.lr = 0x82B62700;
	sub_82D26B18(ctx, base);
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r30,r11,100
	ctx.r30.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x82b62714
	if (!cr6.eq) goto loc_82B62714;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82B62714:
	// addi r4,r29,-128
	ctx.r4.s64 = ctx.r29.s64 + -128;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x837b0c10
	ctx.lr = 0x82B62720;
	sub_837B0C10(ctx, base);
	// lis r5,510
	ctx.r5.s64 = 33423360;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r5,r5,3
	ctx.r5.u64 = ctx.r5.u64 | 3;
	// bl 0x82a69a28
	ctx.lr = 0x82B62734;
	sub_82A69A28(ctx, base);
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b62758
	if (cr6.eq) goto loc_82B62758;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r29,-116
	ctx.r4.s64 = ctx.r29.s64 + -116;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B62758;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B62758:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b61b60
	ctx.lr = 0x82B62764;
	sub_82B61B60(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b61b60
	ctx.lr = 0x82B62770;
	sub_82B61B60(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r29,-96
	ctx.r4.s64 = ctx.r29.s64 + -96;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x837b0c10
	ctx.lr = 0x82B62784;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82c36fa8
	ctx.lr = 0x82B62790;
	sub_82C36FA8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x82B6279C;
	sub_8387E8E0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82B627A8;
	sub_83103100(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r10.u32);
	// b 0x82b627bc
	goto loc_82B627BC;
loc_82B627B4:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
loc_82B627BC:
	// bl 0x82d86078
	ctx.lr = 0x82B627C0;
	sub_82D86078(ctx, base);
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832f0
	ctx.lr = 0x82B627C8;
	sub_825832F0(ctx, base);
	// lbz r11,5777(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5777);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b62810
	if (cr6.eq) goto loc_82B62810;
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x82b6290c
	if (!cr6.eq) goto loc_82B6290C;
	// ld r4,184(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 184);
	// cmpldi cr6,r4,0
	cr6.compare<uint64_t>(ctx.r4.u64, 0, xer);
	// bne cr6,0x82b627fc
	if (!cr6.eq) goto loc_82B627FC;
	// bl 0x83a7d958
	ctx.lr = 0x82B627F0;
	sub_83A7D958(ctx, base);
	// bl 0x83524138
	ctx.lr = 0x82B627F4;
	sub_83524138(ctx, base);
	// std r3,184(r31)
	PPC_STORE_U64(ctx.r31.u32 + 184, ctx.r3.u64);
	// b 0x82b6290c
	goto loc_82B6290C;
loc_82B627FC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b608d0
	ctx.lr = 0x82B62804;
	sub_82B608D0(ctx, base);
	// lfs f0,-600(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -600);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x82b6290c
	if (cr6.lt) goto loc_82B6290C;
loc_82B62810:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b61db0
	ctx.lr = 0x82B62818;
	sub_82B61DB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b6290c
	if (cr6.eq) goto loc_82B6290C;
	// bl 0x82c320d8
	ctx.lr = 0x82B62828;
	sub_82C320D8(ctx, base);
	// addi r5,r29,-64
	ctx.r5.s64 = ctx.r29.s64 + -64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82B62838;
	sub_82D20DA8(ctx, base);
	// b 0x82b6290c
	goto loc_82B6290C;
loc_82B6283C:
	// lbz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 104);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r11,r11,20692
	ctx.r11.s64 = ctx.r11.s64 + 20692;
	// beq cr6,0x82b62864
	if (cr6.eq) goto loc_82B62864;
	// addi r5,r11,-48
	ctx.r5.s64 = ctx.r11.s64 + -48;
	// bl 0x82d20da8
	ctx.lr = 0x82B62860;
	sub_82D20DA8(ctx, base);
	// b 0x82b6290c
	goto loc_82B6290C;
loc_82B62864:
	// addi r5,r11,-36
	ctx.r5.s64 = ctx.r11.s64 + -36;
	// bl 0x82d20da8
	ctx.lr = 0x82B6286C;
	sub_82D20DA8(ctx, base);
	// b 0x82b6290c
	goto loc_82B6290C;
loc_82B62870:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r11,r11,20692
	ctx.r11.s64 = ctx.r11.s64 + 20692;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-28
	ctx.r5.s64 = ctx.r11.s64 + -28;
	// bl 0x82d20da8
	ctx.lr = 0x82B62888;
	sub_82D20DA8(ctx, base);
	// b 0x82b6290c
	goto loc_82B6290C;
loc_82B6288C:
	// bl 0x82d26ed8
	ctx.lr = 0x82B62890;
	sub_82D26ED8(ctx, base);
	// li r4,60
	ctx.r4.s64 = 60;
	// bl 0x82d26b18
	ctx.lr = 0x82B62898;
	sub_82D26B18(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r11,r11,20692
	ctx.r11.s64 = ctx.r11.s64 + 20692;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-20
	ctx.r5.s64 = ctx.r11.s64 + -20;
	// li r28,1
	ctx.r28.s64 = 1;
	// bl 0x82d20da8
	ctx.lr = 0x82B628B4;
	sub_82D20DA8(ctx, base);
	// b 0x82b6290c
	goto loc_82B6290C;
loc_82B628B8:
	// bl 0x82d26ed8
	ctx.lr = 0x82B628BC;
	sub_82D26ED8(ctx, base);
	// li r4,60
	ctx.r4.s64 = 60;
	// bl 0x82d26b18
	ctx.lr = 0x82B628C4;
	sub_82D26B18(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r11,r11,20692
	ctx.r11.s64 = ctx.r11.s64 + 20692;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-8
	ctx.r5.s64 = ctx.r11.s64 + -8;
	// li r28,1
	ctx.r28.s64 = 1;
	// bl 0x82d20da8
	ctx.lr = 0x82B628E0;
	sub_82D20DA8(ctx, base);
	// b 0x82b6290c
	goto loc_82B6290C;
loc_82B628E4:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,20692
	ctx.r5.s64 = ctx.r11.s64 + 20692;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r28,1
	ctx.r28.s64 = 1;
	// bl 0x82d20da8
	ctx.lr = 0x82B628FC;
	sub_82D20DA8(ctx, base);
	// lwz r3,30272(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 30272);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b6290c
	if (cr6.eq) goto loc_82B6290C;
	// bl 0x82dab520
	ctx.lr = 0x82B6290C;
	sub_82DAB520(ctx, base);
loc_82B6290C:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// std r27,112(r31)
	PPC_STORE_U64(ctx.r31.u32 + 112, ctx.r27.u64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b6292c
	if (cr6.eq) goto loc_82B6292C;
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b6292c
	if (cr6.eq) goto loc_82B6292C;
	// bl 0x82d29e18
	ctx.lr = 0x82B6292C;
	sub_82D29E18(ctx, base);
loc_82B6292C:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B62934"))) PPC_WEAK_FUNC(sub_82B62934);
PPC_FUNC_IMPL(__imp__sub_82B62934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B62938"))) PPC_WEAK_FUNC(sub_82B62938);
PPC_FUNC_IMPL(__imp__sub_82B62938) {
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
	// lwz r30,116(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, xer);
	// beq cr6,0x82b62980
	if (cr6.eq) goto loc_82B62980;
	// lwz r3,112(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// bl 0x82daa4f8
	ctx.lr = 0x82B62968;
	sub_82DAA4F8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82daa870
	ctx.lr = 0x82B62970;
	sub_82DAA870(ctx, base);
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x82daa4f8
	ctx.lr = 0x82B62978;
	sub_82DAA4F8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82daa8d0
	ctx.lr = 0x82B62980;
	sub_82DAA8D0(ctx, base);
loc_82B62980:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,21716
	ctx.r5.s64 = ctx.r11.s64 + 21716;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82B62994;
	sub_82D20DA8(ctx, base);
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

__attribute__((alias("__imp__sub_82B629AC"))) PPC_WEAK_FUNC(sub_82B629AC);
PPC_FUNC_IMPL(__imp__sub_82B629AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B629B0"))) PPC_WEAK_FUNC(sub_82B629B0);
PPC_FUNC_IMPL(__imp__sub_82B629B0) {
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
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,36
	ctx.r4.s64 = 36;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B629E4;
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
	// stb r11,32(r7)
	PPC_STORE_U8(ctx.r7.u32 + 32, ctx.r11.u8);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r11,33(r6)
	PPC_STORE_U8(ctx.r6.u32 + 33, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82B62A28"))) PPC_WEAK_FUNC(sub_82B62A28);
PPC_FUNC_IMPL(__imp__sub_82B62A28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B62A30;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r4,r9,4
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 4;
	// bl 0x8380edc8
	ctx.lr = 0x82B62A60;
	sub_8380EDC8(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82b62aa8
	if (cr6.eq) goto loc_82B62AA8;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r28,4(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, xer);
	// beq cr6,0x82b62aa4
	if (cr6.eq) goto loc_82B62AA4;
loc_82B62A80:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82b62a94
	if (cr6.eq) goto loc_82B62A94;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a8e3a8
	ctx.lr = 0x82B62A94;
	sub_82A8E3A8(ctx, base);
loc_82B62A94:
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, xer);
	// bne cr6,0x82b62a80
	if (!cr6.eq) goto loc_82B62A80;
loc_82B62AA4:
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
loc_82B62AA8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B62AB4"))) PPC_WEAK_FUNC(sub_82B62AB4);
PPC_FUNC_IMPL(__imp__sub_82B62AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B62AB8"))) PPC_WEAK_FUNC(sub_82B62AB8);
PPC_FUNC_IMPL(__imp__sub_82B62AB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82B62AC0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplw cr6,r5,r6
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, xer);
	// beq cr6,0x82b62b20
	if (cr6.eq) goto loc_82B62B20;
	// lwz r29,4(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplw cr6,r6,r29
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r29.u32, xer);
	// beq cr6,0x82b62b08
	if (cr6.eq) goto loc_82B62B08;
loc_82B62AEC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b3f768
	ctx.lr = 0x82B62AF8;
	sub_82B3F768(ctx, base);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// bne cr6,0x82b62aec
	if (!cr6.eq) goto loc_82B62AEC;
loc_82B62B08:
	// addi r5,r28,12
	ctx.r5.s64 = ctx.r28.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x82bbbf28
	ctx.lr = 0x82B62B1C;
	sub_82BBBF28(ctx, base);
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_82B62B20:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B62B2C"))) PPC_WEAK_FUNC(sub_82B62B2C);
PPC_FUNC_IMPL(__imp__sub_82B62B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B62B30"))) PPC_WEAK_FUNC(sub_82B62B30);
PPC_FUNC_IMPL(__imp__sub_82B62B30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82B62B38;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82b62d14
	if (cr6.eq) goto loc_82B62D14;
	// lwz r30,0(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r27,4(r4)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// subf r11,r30,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r30.s64;
	// srawi. r11,r11,4
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x82b62b80
	if (!cr0.eq) goto loc_82B62B80;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x82b62ab8
	ctx.lr = 0x82B62B74;
	sub_82B62AB8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82B62B80:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// subf r10,r3,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r3.s64;
	// srawi r10,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82b62c04
	if (cr6.gt) goto loc_82B62C04;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r27
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, xer);
	// beq cr6,0x82b62bc4
	if (cr6.eq) goto loc_82B62BC4;
loc_82B62BA8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b3f768
	ctx.lr = 0x82B62BB4;
	sub_82B3F768(ctx, base);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// cmplw cr6,r31,r27
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, xer);
	// bne cr6,0x82b62ba8
	if (!cr6.eq) goto loc_82B62BA8;
loc_82B62BC4:
	// addi r5,r29,12
	ctx.r5.s64 = ctx.r29.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x82bbbf28
	ctx.lr = 0x82B62BD8;
	sub_82BBBF28(ctx, base);
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r7,r8,4
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 4;
	// rlwinm r10,r7,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r6,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r6.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82B62C04:
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// subf r8,r3,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r3.s64;
	// srawi r7,r8,4
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 4;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// bgt cr6,0x82b62c8c
	if (cr6.gt) goto loc_82B62C8C;
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, xer);
	// beq cr6,0x82b62c48
	if (cr6.eq) goto loc_82B62C48;
loc_82B62C2C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b3f768
	ctx.lr = 0x82B62C38;
	sub_82B3F768(ctx, base);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, xer);
	// bne cr6,0x82b62c2c
	if (!cr6.eq) goto loc_82B62C2C;
loc_82B62C48:
	// lwz r28,4(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r30,4(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, xer);
	// beq cr6,0x82b62d10
	if (cr6.eq) goto loc_82B62D10;
loc_82B62C58:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82b62c6c
	if (cr6.eq) goto loc_82B62C6C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a8e3a8
	ctx.lr = 0x82B62C6C;
	sub_82A8E3A8(ctx, base);
loc_82B62C6C:
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, xer);
	// bne cr6,0x82b62c58
	if (!cr6.eq) goto loc_82B62C58;
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82B62C8C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b62cb4
	if (cr6.eq) goto loc_82B62CB4;
	// addi r5,r29,12
	ctx.r5.s64 = ctx.r29.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82bbbf28
	ctx.lr = 0x82B62CA0;
	sub_82BBBF28(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B62CB4;
	sub_825952B8(ctx, base);
loc_82B62CB4:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r4,r9,4
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 4;
	// bl 0x8380edc8
	ctx.lr = 0x82B62CCC;
	sub_8380EDC8(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82b62d14
	if (cr6.eq) goto loc_82B62D14;
	// lwz r28,4(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, xer);
	// beq cr6,0x82b62d10
	if (cr6.eq) goto loc_82B62D10;
loc_82B62CEC:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82b62d00
	if (cr6.eq) goto loc_82B62D00;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a8e3a8
	ctx.lr = 0x82B62D00;
	sub_82A8E3A8(ctx, base);
loc_82B62D00:
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, xer);
	// bne cr6,0x82b62cec
	if (!cr6.eq) goto loc_82B62CEC;
loc_82B62D10:
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
loc_82B62D14:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B62D20"))) PPC_WEAK_FUNC(sub_82B62D20);
PPC_FUNC_IMPL(__imp__sub_82B62D20) {
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
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r31,r4,4
	ctx.r31.s64 = ctx.r4.s64 + 4;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b62d64
	if (cr6.eq) goto loc_82B62D64;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82bbbf28
	ctx.lr = 0x82B62D50;
	sub_82BBBF28(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B62D64;
	sub_825952B8(ctx, base);
loc_82B62D64:
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

__attribute__((alias("__imp__sub_82B62D88"))) PPC_WEAK_FUNC(sub_82B62D88);
PPC_FUNC_IMPL(__imp__sub_82B62D88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82B62D90;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,3276
	ctx.r10.s64 = 214695936;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// ori r9,r10,52427
	ctx.r9.u64 = ctx.r10.u64 | 52427;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x82b62de0
	if (cr6.lt) goto loc_82B62DE0;
	// addi r4,r7,12
	ctx.r4.s64 = ctx.r7.s64 + 12;
	// addi r3,r30,13
	ctx.r3.s64 = ctx.r30.s64 + 13;
	// bl 0x82b62d20
	ctx.lr = 0x82B62DC0;
	sub_82B62D20(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x82B62DD4;
	sub_825952B8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r10,12808
	ctx.r3.s64 = ctx.r10.s64 + 12808;
	// bl 0x831cc150
	ctx.lr = 0x82B62DE0;
	sub_831CC150(ctx, base);
loc_82B62DE0:
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
	// bne cr6,0x82b62e10
	if (!cr6.eq) goto loc_82B62E10;
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
	// b 0x82b62e50
	goto loc_82B62E50;
loc_82B62E10:
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b62e38
	if (cr6.eq) goto loc_82B62E38;
	// stw r27,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r27.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// bne cr6,0x82b62e50
	if (!cr6.eq) goto loc_82B62E50;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// b 0x82b62e50
	goto loc_82B62E50;
loc_82B62E38:
	// stw r27,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r27.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// bne cr6,0x82b62e50
	if (!cr6.eq) goto loc_82B62E50;
	// stw r27,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r27.u32);
loc_82B62E50:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// lbz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b62f74
	if (!cr6.eq) goto loc_82B62F74;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82B62E6C:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bne cr6,0x82b62ef4
	if (!cr6.eq) goto loc_82B62EF4;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b62eb4
	if (!cr6.eq) goto loc_82B62EB4;
	// rotlwi r10,r4,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stb r29,32(r10)
	PPC_STORE_U8(ctx.r10.u32 + 32, ctx.r29.u8);
	// stb r29,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r29.u8);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r28,32(r8)
	PPC_STORE_U8(ctx.r8.u32 + 32, ctx.r28.u8);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r31,4(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// b 0x82b62f64
	goto loc_82B62F64;
loc_82B62EB4:
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x82b62ecc
	if (!cr6.eq) goto loc_82B62ECC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82c67fd0
	ctx.lr = 0x82B62ECC;
	sub_82C67FD0(ctx, base);
loc_82B62ECC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r29,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r29.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r28,32(r9)
	PPC_STORE_U8(ctx.r9.u32 + 32, ctx.r28.u8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x82c68048
	ctx.lr = 0x82B62EF0;
	sub_82C68048(ctx, base);
	// b 0x82b62f64
	goto loc_82B62F64;
loc_82B62EF4:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b62f28
	if (!cr6.eq) goto loc_82B62F28;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r29,32(r10)
	PPC_STORE_U8(ctx.r10.u32 + 32, ctx.r29.u8);
	// stb r29,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r29.u8);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r28,32(r8)
	PPC_STORE_U8(ctx.r8.u32 + 32, ctx.r28.u8);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r31,4(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// b 0x82b62f64
	goto loc_82B62F64;
loc_82B62F28:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x82b62f40
	if (!cr6.eq) goto loc_82B62F40;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82c68048
	ctx.lr = 0x82B62F40;
	sub_82C68048(ctx, base);
loc_82B62F40:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r29,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r29.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r28,32(r9)
	PPC_STORE_U8(ctx.r9.u32 + 32, ctx.r28.u8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x82c67fd0
	ctx.lr = 0x82B62F64;
	sub_82C67FD0(ctx, base);
loc_82B62F64:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b62e6c
	if (cr6.eq) goto loc_82B62E6C;
loc_82B62F74:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r27,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r27.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stb r29,32(r10)
	PPC_STORE_U8(ctx.r10.u32 + 32, ctx.r29.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B62F90"))) PPC_WEAK_FUNC(sub_82B62F90);
PPC_FUNC_IMPL(__imp__sub_82B62F90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82B62F98;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,33(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 33);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b6302c
	if (!cr6.eq) goto loc_82B6302C;
	// lbz r25,80(r1)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// li r27,2
	ctx.r27.s64 = 2;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82B62FC0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82b62f90
	ctx.lr = 0x82B62FCC;
	sub_82B62F90(ctx, base);
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r31,r29,16
	ctx.r31.s64 = ctx.r29.s64 + 16;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// beq cr6,0x82b63000
	if (cr6.eq) goto loc_82B63000;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// bl 0x82bbbf28
	ctx.lr = 0x82B62FF0;
	sub_82BBBF28(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82B63000;
	sub_825952B8(ctx, base);
loc_82B63000:
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B6301C;
	sub_825952B8(ctx, base);
	// lbz r11,33(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 33);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b62fc0
	if (cr6.eq) goto loc_82B62FC0;
loc_82B6302C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B63034"))) PPC_WEAK_FUNC(sub_82B63034);
PPC_FUNC_IMPL(__imp__sub_82B63034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B63038"))) PPC_WEAK_FUNC(sub_82B63038);
PPC_FUNC_IMPL(__imp__sub_82B63038) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82B63040;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,33(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 33);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r5,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r5.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b63068
	if (cr6.eq) goto loc_82B63068;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,11564
	ctx.r3.s64 = ctx.r11.s64 + 11564;
	// bl 0x831cc188
	ctx.lr = 0x82B63068;
	sub_831CC188(ctx, base);
loc_82B63068:
	// addi r3,r1,212
	ctx.r3.s64 = ctx.r1.s64 + 212;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x83456c38
	ctx.lr = 0x82B63074;
	sub_83456C38(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lbz r10,33(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r25,212(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// beq cr6,0x82b63090
	if (cr6.eq) goto loc_82B63090;
	// lwz r28,8(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// b 0x82b630b4
	goto loc_82B630B4;
loc_82B63090:
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lbz r9,33(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 33);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82b630a8
	if (cr6.eq) goto loc_82B630A8;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// b 0x82b630b4
	goto loc_82B630B4;
loc_82B630A8:
	// lwz r28,8(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmplw cr6,r25,r26
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r26.u32, xer);
	// bne cr6,0x82b631a0
	if (!cr6.eq) goto loc_82B631A0;
loc_82B630B4:
	// lbz r11,33(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 33);
	// lwz r31,4(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b630c8
	if (!cr6.eq) goto loc_82B630C8;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_82B630C8:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// bne cr6,0x82b630e0
	if (!cr6.eq) goto loc_82B630E0;
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// b 0x82b630f8
	goto loc_82B630F8;
loc_82B630E0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x82b630f4
	if (!cr6.eq) goto loc_82B630F4;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// b 0x82b630f8
	goto loc_82B630F8;
loc_82B630F4:
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
loc_82B630F8:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x82b63148
	if (!cr6.eq) goto loc_82B63148;
	// lbz r11,33(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 33);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b6311c
	if (cr6.eq) goto loc_82B6311C;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x82b63144
	goto loc_82B63144;
loc_82B6311C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lbz r8,33(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82b63144
	if (!cr6.eq) goto loc_82B63144;
loc_82B63130:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,33(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82b63130
	if (cr6.eq) goto loc_82B63130;
loc_82B63144:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_82B63148:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x82b63234
	if (!cr6.eq) goto loc_82B63234;
	// lbz r11,33(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 33);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b63170
	if (cr6.eq) goto loc_82B63170;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r31,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r31.u32);
	// b 0x82b63234
	goto loc_82B63234;
loc_82B63170:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lbz r8,33(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82b63198
	if (!cr6.eq) goto loc_82B63198;
loc_82B63184:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,33(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82b63184
	if (cr6.eq) goto loc_82B63184;
loc_82B63198:
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// b 0x82b63234
	goto loc_82B63234;
loc_82B631A0:
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
	// bne cr6,0x82b631c0
	if (!cr6.eq) goto loc_82B631C0;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// b 0x82b631e8
	goto loc_82B631E8;
loc_82B631C0:
	// lbz r11,33(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 33);
	// lwz r31,4(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b631d4
	if (!cr6.eq) goto loc_82B631D4;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_82B631D4:
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
loc_82B631E8:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// bne cr6,0x82b63200
	if (!cr6.eq) goto loc_82B63200;
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// b 0x82b6321c
	goto loc_82B6321C;
loc_82B63200:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// bne cr6,0x82b63218
	if (!cr6.eq) goto loc_82B63218;
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// b 0x82b6321c
	goto loc_82B6321C;
loc_82B63218:
	// stw r25,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r25.u32);
loc_82B6321C:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// lbz r9,32(r26)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r26.u32 + 32);
	// lbz r10,32(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + 32);
	// stb r9,32(r25)
	PPC_STORE_U8(ctx.r25.u32 + 32, ctx.r9.u8);
	// stb r10,32(r26)
	PPC_STORE_U8(ctx.r26.u32 + 32, ctx.r10.u8);
loc_82B63234:
	// lbz r11,32(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 32);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82b633cc
	if (!cr6.eq) goto loc_82B633CC;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, xer);
	// beq cr6,0x82b633c8
	if (cr6.eq) goto loc_82B633C8;
loc_82B63258:
	// lbz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82b633c8
	if (!cr6.eq) goto loc_82B633C8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// bne cr6,0x82b63310
	if (!cr6.eq) goto loc_82B63310;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lbz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b63298
	if (!cr6.eq) goto loc_82B63298;
	// stb r30,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r30.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r29,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r29.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c67fd0
	ctx.lr = 0x82B63294;
	sub_82C67FD0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_82B63298:
	// lbz r10,33(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b63364
	if (!cr6.eq) goto loc_82B63364;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 32);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x82b632c4
	if (!cr6.eq) goto loc_82B632C4;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 32);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// beq cr6,0x82b63360
	if (cr6.eq) goto loc_82B63360;
loc_82B632C4:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 32);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x82b632ec
	if (!cr6.eq) goto loc_82B632EC;
	// stb r30,32(r10)
	PPC_STORE_U8(ctx.r10.u32 + 32, ctx.r30.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r29,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r29.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c68048
	ctx.lr = 0x82B632E8;
	sub_82C68048(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_82B632EC:
	// lbz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r10,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r10.u8);
	// stb r30,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r30.u8);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stb r30,32(r9)
	PPC_STORE_U8(ctx.r9.u32 + 32, ctx.r30.u8);
	// bl 0x82c67fd0
	ctx.lr = 0x82B6330C;
	sub_82C67FD0(ctx, base);
	// b 0x82b633c8
	goto loc_82B633C8;
loc_82B63310:
	// lbz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b63334
	if (!cr6.eq) goto loc_82B63334;
	// stb r30,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r30.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r29,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r29.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c68048
	ctx.lr = 0x82B63330;
	sub_82C68048(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82B63334:
	// lbz r10,33(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b63364
	if (!cr6.eq) goto loc_82B63364;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 32);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x82b63380
	if (!cr6.eq) goto loc_82B63380;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 32);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x82b63380
	if (!cr6.eq) goto loc_82B63380;
loc_82B63360:
	// stb r29,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r29.u8);
loc_82B63364:
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
	// bne cr6,0x82b63258
	if (!cr6.eq) goto loc_82B63258;
	// b 0x82b633c8
	goto loc_82B633C8;
loc_82B63380:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 32);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x82b633a8
	if (!cr6.eq) goto loc_82B633A8;
	// stb r30,32(r10)
	PPC_STORE_U8(ctx.r10.u32 + 32, ctx.r30.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r29,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r29.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c67fd0
	ctx.lr = 0x82B633A4;
	sub_82C67FD0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82B633A8:
	// lbz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r10,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r10.u8);
	// stb r30,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r30.u8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r30,32(r9)
	PPC_STORE_U8(ctx.r9.u32 + 32, ctx.r30.u8);
	// bl 0x82c68048
	ctx.lr = 0x82B633C8;
	sub_82C68048(ctx, base);
loc_82B633C8:
	// stb r30,32(r28)
	PPC_STORE_U8(ctx.r28.u32 + 32, ctx.r30.u8);
loc_82B633CC:
	// lwz r3,16(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// addi r31,r26,16
	ctx.r31.s64 = ctx.r26.s64 + 16;
	// li r30,2
	ctx.r30.s64 = 2;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b63400
	if (cr6.eq) goto loc_82B63400;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82bbbf28
	ctx.lr = 0x82B633F0;
	sub_82BBBF28(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82B63400;
	sub_825952B8(ctx, base);
loc_82B63400:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B6341C;
	sub_825952B8(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b63430
	if (cr6.eq) goto loc_82B63430;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
loc_82B63430:
	// stw r25,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r25.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B63440"))) PPC_WEAK_FUNC(sub_82B63440);
PPC_FUNC_IMPL(__imp__sub_82B63440) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82B63448;
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
	// lbz r10,33(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b634dc
	if (!cr6.eq) goto loc_82B634DC;
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// clrlwi r9,r6,24
	ctx.r9.u64 = ctx.r6.u32 & 0xFF;
loc_82B63480:
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82b634a4
	if (cr6.eq) goto loc_82B634A4;
	// srawi r6,r8,31
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 31;
	// rlwinm r7,r10,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfc r5,r10,r8
	xer.ca = ctx.r8.u32 >= ctx.r10.u32;
	ctx.r5.s64 = ctx.r8.s64 - ctx.r10.s64;
	// adde r31,r7,r6
	temp.u8 = (ctx.r7.u32 + ctx.r6.u32 < ctx.r7.u32) | (ctx.r7.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r31.u64 = ctx.r7.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x82b634b8
	goto loc_82B634B8;
loc_82B634A4:
	// subfc r7,r8,r10
	xer.ca = ctx.r10.u32 >= ctx.r8.u32;
	ctx.r7.s64 = ctx.r10.s64 - ctx.r8.s64;
	// eqv r6,r8,r10
	ctx.r6.u64 = ~(ctx.r8.u64 ^ ctx.r10.u64);
	// rlwinm r5,r6,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// addze r4,r5
	temp.s64 = ctx.r5.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r4.s64 = temp.s64;
	// clrlwi r31,r4,31
	ctx.r31.u64 = ctx.r4.u32 & 0x1;
loc_82B634B8:
	// clrlwi r8,r31,24
	ctx.r8.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82b634cc
	if (cr6.eq) goto loc_82B634CC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82b634d0
	goto loc_82B634D0;
loc_82B634CC:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_82B634D0:
	// lbz r8,33(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82b63480
	if (cr6.eq) goto loc_82B63480;
loc_82B634DC:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b6353c
	if (cr6.eq) goto loc_82B6353C;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, xer);
	// bne cr6,0x82b63534
	if (!cr6.eq) goto loc_82B63534;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82b62d88
	ctx.lr = 0x82B63518;
	sub_82B62D88(ctx, base);
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
loc_82B63534:
	// bl 0x82ff8298
	ctx.lr = 0x82B63538;
	sub_82FF8298(ctx, base);
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82B6353C:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x82b63580
	if (!cr6.lt) goto loc_82B63580;
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
	// bl 0x82b62d88
	ctx.lr = 0x82B63564;
	sub_82B62D88(ctx, base);
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
loc_82B63580:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r27,13
	ctx.r3.s64 = ctx.r27.s64 + 13;
	// bl 0x82b62d20
	ctx.lr = 0x82B6358C;
	sub_82B62D20(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82B635A0;
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

__attribute__((alias("__imp__sub_82B635B8"))) PPC_WEAK_FUNC(sub_82B635B8);
PPC_FUNC_IMPL(__imp__sub_82B635B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B635C0;
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
	// li r4,36
	ctx.r4.s64 = 36;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B635E4;
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
	// stb r10,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r10.u8);
	// stb r10,33(r3)
	PPC_STORE_U8(ctx.r3.u32 + 33, ctx.r10.u8);
	// beq 0x82b63628
	if (cr0.eq) goto loc_82B63628;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x82b62a28
	ctx.lr = 0x82B63628;
	sub_82B62A28(ctx, base);
loc_82B63628:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B63634"))) PPC_WEAK_FUNC(sub_82B63634);
PPC_FUNC_IMPL(__imp__sub_82B63634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B63638"))) PPC_WEAK_FUNC(sub_82B63638);
PPC_FUNC_IMPL(__imp__sub_82B63638) {
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
	// bl 0x82b62f90
	ctx.lr = 0x82B63658;
	sub_82B62F90(ctx, base);
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

__attribute__((alias("__imp__sub_82B6368C"))) PPC_WEAK_FUNC(sub_82B6368C);
PPC_FUNC_IMPL(__imp__sub_82B6368C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B63690"))) PPC_WEAK_FUNC(sub_82B63690);
PPC_FUNC_IMPL(__imp__sub_82B63690) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B63698;
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
	// bne cr6,0x82b636e4
	if (!cr6.eq) goto loc_82B636E4;
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, xer);
	// bne cr6,0x82b636e4
	if (!cr6.eq) goto loc_82B636E4;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82b63638
	ctx.lr = 0x82B636CC;
	sub_82B63638(ctx, base);
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
loc_82B636E4:
	// cmplw cr6,r5,r30
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r30.u32, xer);
	// beq cr6,0x82b63714
	if (cr6.eq) goto loc_82B63714;
loc_82B636EC:
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x83456c38
	ctx.lr = 0x82B636F8;
	sub_83456C38(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b63038
	ctx.lr = 0x82B63708;
	sub_82B63038(ctx, base);
	// lwz r5,164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplw cr6,r5,r30
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r30.u32, xer);
	// bne cr6,0x82b636ec
	if (!cr6.eq) goto loc_82B636EC;
loc_82B63714:
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

__attribute__((alias("__imp__sub_82B63724"))) PPC_WEAK_FUNC(sub_82B63724);
PPC_FUNC_IMPL(__imp__sub_82B63724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B63728"))) PPC_WEAK_FUNC(sub_82B63728);
PPC_FUNC_IMPL(__imp__sub_82B63728) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82B63730;
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
	// bne cr6,0x82b6376c
	if (!cr6.eq) goto loc_82B6376C;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// lwz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82b62d88
	ctx.lr = 0x82B63760;
	sub_82B62D88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82B6376C:
	// lwz r25,4(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bne cr6,0x82b637b0
	if (!cr6.eq) goto loc_82B637B0;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x82b638ac
	if (!cr6.lt) goto loc_82B638AC;
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
	// bl 0x82b62d88
	ctx.lr = 0x82B637A4;
	sub_82B62D88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82B637B0:
	// cmplw cr6,r30,r25
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, xer);
	// bne cr6,0x82b637ec
	if (!cr6.eq) goto loc_82B637EC;
	// lwz r6,8(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// bge cr6,0x82b638ac
	if (!cr6.lt) goto loc_82B638AC;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b62d88
	ctx.lr = 0x82B637E0;
	sub_82B62D88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82B637EC:
	// lwz r27,12(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r26,12(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpw cr6,r26,r27
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r27.s32, xer);
	// ble cr6,0x82b63850
	if (!cr6.gt) goto loc_82B63850;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ff8298
	ctx.lr = 0x82B63808;
	sub_82FF8298(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// cmpw cr6,r11,r27
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, xer);
	// bge cr6,0x82b6384c
	if (!cr6.lt) goto loc_82B6384C;
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r10,33(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b63898
	if (!cr6.eq) goto loc_82B63898;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
loc_82B63838:
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82b62d88
	ctx.lr = 0x82B63840;
	sub_82B62D88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82B6384C:
	// cmpw cr6,r26,r27
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r27.s32, xer);
loc_82B63850:
	// bge cr6,0x82b638ac
	if (!cr6.lt) goto loc_82B638AC;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83456c38
	ctx.lr = 0x82B63860;
	sub_83456C38(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r6,r25
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r25.u32, xer);
	// beq cr6,0x82b63878
	if (cr6.eq) goto loc_82B63878;
	// lwz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, xer);
	// bge cr6,0x82b638ac
	if (!cr6.lt) goto loc_82B638AC;
loc_82B63878:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r10,33(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b63838
	if (cr6.eq) goto loc_82B63838;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
loc_82B63898:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82b62d88
	ctx.lr = 0x82B638A0;
	sub_82B62D88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82B638AC:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b63440
	ctx.lr = 0x82B638C0;
	sub_82B63440(ctx, base);
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

__attribute__((alias("__imp__sub_82B638D8"))) PPC_WEAK_FUNC(sub_82B638D8);
PPC_FUNC_IMPL(__imp__sub_82B638D8) {
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
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r10,33(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b63930
	if (!cr6.eq) goto loc_82B63930;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82B63908:
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// bge cr6,0x82b6391c
	if (!cr6.lt) goto loc_82B6391C;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82b63924
	goto loc_82B63924;
loc_82B6391C:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82B63924:
	// lbz r9,33(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82b63908
	if (cr6.eq) goto loc_82B63908;
loc_82B63930:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x82b6394c
	if (cr6.eq) goto loc_82B6394C;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x82b639d0
	if (!cr6.lt) goto loc_82B639D0;
loc_82B6394C:
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// bl 0x82b62a28
	ctx.lr = 0x82B63970;
	sub_82B62A28(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b635b8
	ctx.lr = 0x82B6397C;
	sub_82B635B8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82b63728
	ctx.lr = 0x82B63990;
	sub_82B63728(ctx, base);
	// lwz r31,116(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// beq cr6,0x82b639c8
	if (cr6.eq) goto loc_82B639C8;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x82bbbf28
	ctx.lr = 0x82B639B4;
	sub_82BBBF28(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825952b8
	ctx.lr = 0x82B639C8;
	sub_825952B8(ctx, base);
loc_82B639C8:
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// b 0x82b639d4
	goto loc_82B639D4;
loc_82B639D0:
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
loc_82B639D4:
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

__attribute__((alias("__imp__sub_82B639EC"))) PPC_WEAK_FUNC(sub_82B639EC);
PPC_FUNC_IMPL(__imp__sub_82B639EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B639F0"))) PPC_WEAK_FUNC(sub_82B639F0);
PPC_FUNC_IMPL(__imp__sub_82B639F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82B639F8;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r31,r3,116
	ctx.r31.s64 = ctx.r3.s64 + 116;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82b638d8
	ctx.lr = 0x82B63A20;
	sub_82B638D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82b62a28
	ctx.lr = 0x82B63A2C;
	sub_82B62A28(ctx, base);
	// lwz r26,112(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r25,116(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// subf r11,r26,r25
	ctx.r11.s64 = ctx.r25.s64 - ctx.r26.s64;
	// srawi. r29,r11,4
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r29.s64 = ctx.r11.s32 >> 4;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq 0x82b63a58
	if (cr0.eq) goto loc_82B63A58;
	// lwz r11,124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x82b3f768
	ctx.lr = 0x82B63A58;
	sub_82B3F768(ctx, base);
loc_82B63A58:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// addi r9,r11,21656
	ctx.r9.s64 = ctx.r11.s64 + 21656;
	// addi r11,r9,-40
	ctx.r11.s64 = ctx.r9.s64 + -40;
loc_82B63A6C:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r7,r8
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, xer);
	// beq cr6,0x82b63a8c
	if (cr6.eq) goto loc_82B63A8C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,5
	cr6.compare<uint32_t>(ctx.r10.u32, 5, xer);
	// blt cr6,0x82b63a6c
	if (cr6.lt) goto loc_82B63A6C;
	// b 0x82b63aa0
	goto loc_82B63AA0;
loc_82B63A8C:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,108(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bl 0x82d30340
	ctx.lr = 0x82B63AA0;
	sub_82D30340(ctx, base);
loc_82B63AA0:
	// lwz r3,108(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(ctx.r29.s32, 1, xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// beq cr6,0x82b63ab4
	if (cr6.eq) goto loc_82B63AB4;
	// li r4,1
	ctx.r4.s64 = 1;
loc_82B63AB4:
	// bl 0x82d30530
	ctx.lr = 0x82B63AB8;
	sub_82D30530(ctx, base);
	// lwz r3,108(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// bl 0x82d2fe58
	ctx.lr = 0x82B63AC0;
	sub_82D2FE58(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b63ae0
	if (cr6.eq) goto loc_82B63AE0;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bne cr6,0x82b63ad8
	if (!cr6.eq) goto loc_82B63AD8;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82B63AD8:
	// lwz r4,124(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// bl 0x82d3d968
	ctx.lr = 0x82B63AE0;
	sub_82D3D968(ctx, base);
loc_82B63AE0:
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(ctx.r29.u32, 1, xer);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ble cr6,0x82b63b00
	if (!cr6.gt) goto loc_82B63B00;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d19788
	ctx.lr = 0x82B63AF8;
	sub_82D19788(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// b 0x82b63b0c
	goto loc_82B63B0C;
loc_82B63B00:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d19788
	ctx.lr = 0x82B63B08;
	sub_82D19788(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
loc_82B63B0C:
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B63B18;
	sub_82D19788(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r28,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r28.s64 = ctx.r9.s32 >> 2;
	// bl 0x82d33c10
	ctx.lr = 0x82B63B30;
	sub_82D33C10(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19bc0
	ctx.lr = 0x82B63B40;
	sub_82D19BC0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b63b6c
	if (cr6.eq) goto loc_82B63B6C;
	// cmplw cr6,r28,r29
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, xer);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// blt cr6,0x82b63b58
	if (cr6.lt) goto loc_82B63B58;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_82B63B58:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d20f50
	ctx.lr = 0x82B63B6C;
	sub_82D20F50(ctx, base);
loc_82B63B6C:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82b63bac
	if (cr6.eq) goto loc_82B63BAC;
loc_82B63B78:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// bl 0x82d33db0
	ctx.lr = 0x82B63B84;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b63ba0
	if (cr6.eq) goto loc_82B63BA0;
	// subfc r11,r28,r31
	xer.ca = ctx.r31.u32 >= ctx.r28.u32;
	ctx.r11.s64 = ctx.r31.s64 - ctx.r28.s64;
	// li r5,2
	ctx.r5.s64 = 2;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r4,r9,31
	ctx.r4.u64 = ctx.r9.u32 & 0x1;
	// bl 0x82d2aec8
	ctx.lr = 0x82B63BA0;
	sub_82D2AEC8(ctx, base);
loc_82B63BA0:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// blt cr6,0x82b63b78
	if (cr6.lt) goto loc_82B63B78;
loc_82B63BAC:
	// lwz r11,104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r31,r11,100
	ctx.r31.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x82b63bc0
	if (!cr6.eq) goto loc_82B63BC0;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_82B63BC0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19e70
	ctx.lr = 0x82B63BC8;
	sub_82D19E70(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82d3f270
	ctx.lr = 0x82B63BD8;
	sub_82D3F270(ctx, base);
	// li r31,2
	ctx.r31.s64 = 2;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x82b63c08
	if (cr6.eq) goto loc_82B63C08;
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82bbbf28
	ctx.lr = 0x82B63BF8;
	sub_82BBBF28(ctx, base);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82B63C08;
	sub_825952B8(ctx, base);
loc_82B63C08:
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82b63c20
	if (cr6.eq) goto loc_82B63C20;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825952b8
	ctx.lr = 0x82B63C20;
	sub_825952B8(ctx, base);
loc_82B63C20:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B63C28"))) PPC_WEAK_FUNC(sub_82B63C28);
PPC_FUNC_IMPL(__imp__sub_82B63C28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x82B63C30;
	__savegprlr_14(ctx, base);
	// stwu r1,-1680(r1)
	ea = -1680 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// addi r17,r3,128
	ctx.r17.s64 = ctx.r3.s64 + 128;
	// stw r27,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r27.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// mr r24,r27
	ctx.r24.u64 = ctx.r27.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82b62f90
	ctx.lr = 0x82B63C58;
	sub_82B62F90(ctx, base);
	// lwz r10,132(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r9,132(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// stw r9,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r9.u32);
	// lwz r8,132(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// stw r8,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r8.u32);
	// stw r27,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r27.u32);
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x82d33c10
	ctx.lr = 0x82B63C7C;
	sub_82D33C10(ctx, base);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// stw r3,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r3.u32);
	// bl 0x82d86078
	ctx.lr = 0x82B63C90;
	sub_82D86078(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// bl 0x82aa2cc0
	ctx.lr = 0x82B63CB0;
	sub_82AA2CC0(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r10,5
	ctx.r10.s64 = 5;
	// addi r16,r11,21616
	ctx.r16.s64 = ctx.r11.s64 + 21616;
	// lis r11,72
	ctx.r11.s64 = 4718592;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// li r15,2
	ctx.r15.s64 = 2;
	// ori r14,r11,7136
	ctx.r14.u64 = ctx.r11.u64 | 7136;
loc_82B63CCC:
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82b63ce0
	if (cr6.eq) goto loc_82B63CE0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_82B63CE0:
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// lwz r3,200(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82da1a90
	ctx.lr = 0x82B63CF0;
	sub_82DA1A90(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8316af88
	ctx.lr = 0x82B63CF8;
	sub_8316AF88(ctx, base);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r19,r27
	ctx.r19.u64 = ctx.r27.u64;
	// stw r27,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r27.u32);
	// mr r20,r27
	ctx.r20.u64 = ctx.r27.u64;
	// subf r10,r8,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r8.s64;
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r27.u32);
	// mr r23,r27
	ctx.r23.u64 = ctx.r27.u64;
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// mr r22,r27
	ctx.r22.u64 = ctx.r27.u64;
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// mr r21,r27
	ctx.r21.u64 = ctx.r27.u64;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// mr r18,r27
	ctx.r18.u64 = ctx.r27.u64;
	// srawi. r9,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82b64058
	if (cr0.eq) goto loc_82B64058;
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
loc_82B63D40:
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// lwzx r4,r25,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r8.u32);
	// li r26,1
	ctx.r26.s64 = 1;
	// bl 0x8311c728
	ctx.lr = 0x82B63D50;
	sub_8311C728(ctx, base);
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// cmplw cr6,r23,r22
	cr6.compare<uint32_t>(ctx.r23.u32, ctx.r22.u32, xer);
	// beq cr6,0x82b63db8
	if (cr6.eq) goto loc_82B63DB8;
loc_82B63D5C:
	// addi r3,r1,204
	ctx.r3.s64 = ctx.r1.s64 + 204;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8311c728
	ctx.lr = 0x82B63D68;
	sub_8311C728(ctx, base);
	// lwz r11,204(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82b63d94
	if (!cr6.eq) goto loc_82B63D94;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b63d98
	if (cr6.eq) goto loc_82B63D98;
loc_82B63D94:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82B63D98:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b63db4
	if (!cr6.eq) goto loc_82B63DB4;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r22
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r22.u32, xer);
	// bne cr6,0x82b63d5c
	if (!cr6.eq) goto loc_82B63D5C;
	// b 0x82b63db8
	goto loc_82B63DB8;
loc_82B63DB4:
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
loc_82B63DB8:
	// clrlwi r31,r26,24
	ctx.r31.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82b63fb0
	if (cr6.eq) goto loc_82B63FB0;
	// mr r28,r19
	ctx.r28.u64 = ctx.r19.u64;
	// cmplw cr6,r19,r20
	cr6.compare<uint32_t>(ctx.r19.u32, ctx.r20.u32, xer);
	// beq cr6,0x82b63eb0
	if (cr6.eq) goto loc_82B63EB0;
loc_82B63DD0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82a8e3a8
	ctx.lr = 0x82B63DDC;
	sub_82A8E3A8(ctx, base);
	// lwz r29,160(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r30,164(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r30
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, xer);
	// beq cr6,0x82b63e4c
	if (cr6.eq) goto loc_82B63E4C;
loc_82B63DF0:
	// addi r3,r1,180
	ctx.r3.s64 = ctx.r1.s64 + 180;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8311c728
	ctx.lr = 0x82B63DFC;
	sub_8311C728(ctx, base);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82b63e28
	if (!cr6.eq) goto loc_82B63E28;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b63e2c
	if (cr6.eq) goto loc_82B63E2C;
loc_82B63E28:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82B63E2C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b63e48
	if (!cr6.eq) goto loc_82B63E48;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bne cr6,0x82b63df0
	if (!cr6.eq) goto loc_82B63DF0;
	// b 0x82b63e4c
	goto loc_82B63E4C;
loc_82B63E48:
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
loc_82B63E4C:
	// clrlwi r31,r26,24
	ctx.r31.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82b63e8c
	if (cr6.eq) goto loc_82B63E8C;
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82b63e74
	if (cr6.eq) goto loc_82B63E74;
	// stw r15,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r15.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x825952b8
	ctx.lr = 0x82B63E74;
	sub_825952B8(ctx, base);
loc_82B63E74:
	// stw r27,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r27.u32);
	// cmplw cr6,r28,r20
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r20.u32, xer);
	// stw r27,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r27.u32);
	// stw r27,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r27.u32);
	// bne cr6,0x82b63dd0
	if (!cr6.eq) goto loc_82B63DD0;
	// b 0x82b63eb0
	goto loc_82B63EB0;
loc_82B63E8C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82b63ea4
	if (cr6.eq) goto loc_82B63EA4;
	// stw r15,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r15.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x825952b8
	ctx.lr = 0x82B63EA4;
	sub_825952B8(ctx, base);
loc_82B63EA4:
	// stw r27,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r27.u32);
	// stw r27,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r27.u32);
	// stw r27,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r27.u32);
loc_82B63EB0:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82b63fb0
	if (cr6.eq) goto loc_82B63FB0;
	// bl 0x831156e8
	ctx.lr = 0x82B63EBC;
	sub_831156E8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r25,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r11.u32);
	// bl 0x8311c148
	ctx.lr = 0x82B63ED0;
	sub_8311C148(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// li r5,1312
	ctx.r5.s64 = 1312;
	// bl 0x831ce980
	ctx.lr = 0x82B63EE0;
	sub_831CE980(ctx, base);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,208(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// ori r24,r24,1
	ctx.r24.u64 = ctx.r24.u64 | 1;
	// rlwinm r10,r9,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 14) & 0x3FFF;
	// lwzx r11,r25,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r8.u32);
	// rlwinm r7,r11,14,18,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// bne cr6,0x82b63f14
	if (!cr6.eq) goto loc_82B63F14;
	// xor r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// clrlwi r7,r11,14
	ctx.r7.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82b63f18
	if (cr6.eq) goto loc_82B63F18;
loc_82B63F14:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82B63F18:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b63f64
	if (!cr6.eq) goto loc_82B63F64;
	// lwzx r11,r31,r14
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r14.u32);
	// ori r7,r24,2
	ctx.r7.u64 = ctx.r24.u64 | 2;
	// rlwinm r6,r11,14,18,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// ori r24,r7,4
	ctx.r24.u64 = ctx.r7.u64 | 4;
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// bne cr6,0x82b63f50
	if (!cr6.eq) goto loc_82B63F50;
	// xor r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b63f54
	if (cr6.eq) goto loc_82B63F54;
loc_82B63F50:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82B63F54:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82b63f68
	if (!cr6.eq) goto loc_82B63F68;
loc_82B63F64:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82B63F68:
	// rlwinm r10,r24,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x4;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82b63f7c
	if (cr6.eq) goto loc_82B63F7C;
	// rlwinm r24,r24,0,30,28
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
loc_82B63F7C:
	// rlwinm r10,r24,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82b63f8c
	if (cr6.eq) goto loc_82B63F8C;
	// rlwinm r24,r24,0,31,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
loc_82B63F8C:
	// clrlwi r10,r24,31
	ctx.r10.u64 = ctx.r24.u32 & 0x1;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82b63f9c
	if (cr6.eq) goto loc_82B63F9C;
	// rlwinm r24,r24,0,0,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0xFFFFFFFE;
loc_82B63F9C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r26,r7,r26
	ctx.r26.u64 = ctx.r7.u64 & ctx.r26.u64;
	// b 0x82b63fb4
	goto loc_82B63FB4;
loc_82B63FB0:
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82B63FB4:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b63fdc
	if (cr6.eq) goto loc_82B63FDC;
	// add r4,r25,r8
	ctx.r4.u64 = ctx.r25.u64 + ctx.r8.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x835977d8
	ctx.lr = 0x82B63FCC;
	sub_835977D8(ctx, base);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// lwz r22,116(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r23,112(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_82B63FDC:
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplw cr6,r21,r11
	cr6.compare<uint32_t>(ctx.r21.u32, ctx.r11.u32, xer);
	// blt cr6,0x82b6401c
	if (cr6.lt) goto loc_82B6401C;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8345fa38
	ctx.lr = 0x82B63FF4;
	sub_8345FA38(ctx, base);
	// lwz r23,112(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r22,116(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r23,r22
	cr6.compare<uint32_t>(ctx.r23.u32, ctx.r22.u32, xer);
	// beq cr6,0x82b6400c
	if (cr6.eq) goto loc_82B6400C;
	// mr r22,r23
	ctx.r22.u64 = ctx.r23.u64;
	// stw r23,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r23.u32);
loc_82B6400C:
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r21,r27
	ctx.r21.u64 = ctx.r27.u64;
	// lwz r20,132(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r19,128(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
loc_82B6401C:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// subf r10,r8,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r8.s64;
	// srawi r9,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r18,r9
	cr6.compare<uint32_t>(ctx.r18.u32, ctx.r9.u32, xer);
	// blt cr6,0x82b63d40
	if (cr6.lt) goto loc_82B63D40;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// beq cr6,0x82b64058
	if (cr6.eq) goto loc_82B64058;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8345fa38
	ctx.lr = 0x82B6404C;
	sub_8345FA38(ctx, base);
	// lwz r20,132(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r19,128(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r23,112(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_82B64058:
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82b638d8
	ctx.lr = 0x82B64064;
	sub_82B638D8(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x82b62b30
	ctx.lr = 0x82B6406C;
	sub_82B62B30(ctx, base);
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x82b64084
	if (cr6.eq) goto loc_82B64084;
	// stw r15,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r15.u32);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// bl 0x825952b8
	ctx.lr = 0x82B64084;
	sub_825952B8(ctx, base);
loc_82B64084:
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(ctx.r19.u32, 0, xer);
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r27.u32);
	// beq cr6,0x82b640bc
	if (cr6.eq) goto loc_82B640BC;
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// lbz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82bbbf28
	ctx.lr = 0x82B640AC;
	sub_82BBBF28(ctx, base);
	// stw r15,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r15.u32);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// bl 0x825952b8
	ctx.lr = 0x82B640BC;
	sub_825952B8(ctx, base);
loc_82B640BC:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r16,r16,4
	ctx.r16.s64 = ctx.r16.s64 + 4;
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// stw r27,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r27.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bne 0x82b63ccc
	if (!cr0.eq) goto loc_82B63CCC;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82b640f4
	if (cr6.eq) goto loc_82B640F4;
	// stw r15,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r15.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x825952b8
	ctx.lr = 0x82B640F4;
	sub_825952B8(ctx, base);
loc_82B640F4:
	// addi r1,r1,1680
	ctx.r1.s64 = ctx.r1.s64 + 1680;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B640FC"))) PPC_WEAK_FUNC(sub_82B640FC);
PPC_FUNC_IMPL(__imp__sub_82B640FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B64100"))) PPC_WEAK_FUNC(sub_82B64100);
PPC_FUNC_IMPL(__imp__sub_82B64100) {
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
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,21808
	ctx.r9.s64 = ctx.r11.s64 + 21808;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// addi r4,r3,128
	ctx.r4.s64 = ctx.r3.s64 + 128;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r6,132(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82b63690
	ctx.lr = 0x82B64140;
	sub_82B63690(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,132(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x825952b8
	ctx.lr = 0x82B64154;
	sub_825952B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d25548
	ctx.lr = 0x82B6415C;
	sub_82D25548(ctx, base);
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

__attribute__((alias("__imp__sub_82B64170"))) PPC_WEAK_FUNC(sub_82B64170);
PPC_FUNC_IMPL(__imp__sub_82B64170) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82B64178;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82B64184;
	sub_82D19A68(ctx, base);
	// bl 0x82d2bbb8
	ctx.lr = 0x82B64188;
	sub_82D2BBB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82B64190;
	sub_82D19A68(ctx, base);
	// bl 0x82d2ec40
	ctx.lr = 0x82B64194;
	sub_82D2EC40(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82B641A0;
	sub_82D33DB0(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82d33db0
	ctx.lr = 0x82B641B0;
	sub_82D33DB0(ctx, base);
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// addi r3,r10,100
	ctx.r3.s64 = ctx.r10.s64 + 100;
	// addi r29,r11,21676
	ctx.r29.s64 = ctx.r11.s64 + 21676;
	// lwz r11,100(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B641D8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19bc0
	ctx.lr = 0x82B641E8;
	sub_82D19BC0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b64210
	if (cr6.eq) goto loc_82B64210;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82d33c10
	ctx.lr = 0x82B641F8;
	sub_82D33C10(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82d20f50
	ctx.lr = 0x82B64210;
	sub_82D20F50(ctx, base);
loc_82B64210:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,9
	ctx.r4.s64 = 9;
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82B64224;
	sub_82D2D510(ctx, base);
	// lis r4,521
	ctx.r4.s64 = 34144256;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,23
	ctx.r4.u64 = ctx.r4.u64 | 23;
	// bl 0x82d30340
	ctx.lr = 0x82B64234;
	sub_82D30340(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r26,15
	ctx.r26.s64 = 15;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_82B64240:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82d33db0
	ctx.lr = 0x82B6424C;
	sub_82D33DB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b642a4
	if (cr6.eq) goto loc_82B642A4;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// stb r27,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r27.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r28,r11,100
	ctx.r28.s64 = ctx.r11.s64 + 100;
	// bl 0x8259cc28
	ctx.lr = 0x82B64278;
	sub_8259CC28(ctx, base);
	// addi r11,r29,-40
	ctx.r11.s64 = ctx.r29.s64 + -40;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82a69a28
	ctx.lr = 0x82B64290;
	sub_82A69A28(ctx, base);
	// addi r4,r29,32
	ctx.r4.s64 = ctx.r29.s64 + 32;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d233b0
	ctx.lr = 0x82B642A4;
	sub_82D233B0(ctx, base);
loc_82B642A4:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r30,5
	cr6.compare<uint32_t>(ctx.r30.u32, 5, xer);
	// blt cr6,0x82b64240
	if (cr6.lt) goto loc_82B64240;
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2b608
	ctx.lr = 0x82B642C8;
	sub_82D2B608(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b63c28
	ctx.lr = 0x82B642D0;
	sub_82B63C28(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B642DC"))) PPC_WEAK_FUNC(sub_82B642DC);
PPC_FUNC_IMPL(__imp__sub_82B642DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B642E0"))) PPC_WEAK_FUNC(sub_82B642E0);
PPC_FUNC_IMPL(__imp__sub_82B642E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82B642E8;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r10,116(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r29,r11,21656
	ctx.r29.s64 = ctx.r11.s64 + 21656;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r3,116
	ctx.r31.s64 = ctx.r3.s64 + 116;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r11,r29,-40
	ctx.r11.s64 = ctx.r29.s64 + -40;
loc_82B6430C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// beq cr6,0x82b6432c
	if (cr6.eq) goto loc_82B6432C;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r5,5
	cr6.compare<uint32_t>(ctx.r5.u32, 5, xer);
	// blt cr6,0x82b6430c
	if (cr6.lt) goto loc_82B6430C;
	// b 0x82b64348
	goto loc_82B64348;
loc_82B6432C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
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
	ctx.lr = 0x82B64348;
	sub_82D1EBF8(ctx, base);
loc_82B64348:
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// addi r3,r30,128
	ctx.r3.s64 = ctx.r30.s64 + 128;
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// bl 0x82b638d8
	ctx.lr = 0x82B64360;
	sub_82B638D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82b62a28
	ctx.lr = 0x82B6436C;
	sub_82B62A28(ctx, base);
	// lwz r27,112(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r25,116(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// subf r11,r27,r25
	ctx.r11.s64 = ctx.r25.s64 - ctx.r27.s64;
	// srawi. r28,r11,4
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r28.s64 = ctx.r11.s32 >> 4;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// beq 0x82b64398
	if (cr0.eq) goto loc_82B64398;
	// lwz r11,124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x82b3f768
	ctx.lr = 0x82B64398;
	sub_82B3F768(ctx, base);
loc_82B64398:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r29,-40
	ctx.r11.s64 = ctx.r29.s64 + -40;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
loc_82B643A4:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r9
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, xer);
	// beq cr6,0x82b643c4
	if (cr6.eq) goto loc_82B643C4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,5
	cr6.compare<uint32_t>(ctx.r10.u32, 5, xer);
	// blt cr6,0x82b643a4
	if (cr6.lt) goto loc_82B643A4;
	// b 0x82b643d8
	goto loc_82B643D8;
loc_82B643C4:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,108(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwzx r4,r11,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// bl 0x82d30340
	ctx.lr = 0x82B643D8;
	sub_82D30340(ctx, base);
loc_82B643D8:
	// lwz r3,108(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// cmpwi cr6,r28,1
	cr6.compare<int32_t>(ctx.r28.s32, 1, xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// beq cr6,0x82b643ec
	if (cr6.eq) goto loc_82B643EC;
	// li r4,1
	ctx.r4.s64 = 1;
loc_82B643EC:
	// bl 0x82d30530
	ctx.lr = 0x82B643F0;
	sub_82D30530(ctx, base);
	// lwz r3,108(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// bl 0x82d2fe58
	ctx.lr = 0x82B643F8;
	sub_82D2FE58(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b64418
	if (cr6.eq) goto loc_82B64418;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bne cr6,0x82b64410
	if (!cr6.eq) goto loc_82B64410;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82B64410:
	// lwz r4,124(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// bl 0x82d3d968
	ctx.lr = 0x82B64418;
	sub_82D3D968(ctx, base);
loc_82B64418:
	// cmplwi cr6,r28,1
	cr6.compare<uint32_t>(ctx.r28.u32, 1, xer);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ble cr6,0x82b64438
	if (!cr6.gt) goto loc_82B64438;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d19788
	ctx.lr = 0x82B64430;
	sub_82D19788(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// b 0x82b64444
	goto loc_82B64444;
loc_82B64438:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d19788
	ctx.lr = 0x82B64440;
	sub_82D19788(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
loc_82B64444:
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B64450;
	sub_82D19788(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r28,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r28.s64 = ctx.r9.s32 >> 2;
	// bl 0x82d33c10
	ctx.lr = 0x82B64468;
	sub_82D33C10(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19bc0
	ctx.lr = 0x82B64478;
	sub_82D19BC0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b644a4
	if (cr6.eq) goto loc_82B644A4;
	// cmplw cr6,r28,r29
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, xer);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// blt cr6,0x82b64490
	if (cr6.lt) goto loc_82B64490;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_82B64490:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d20f50
	ctx.lr = 0x82B644A4;
	sub_82D20F50(ctx, base);
loc_82B644A4:
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82b644e4
	if (cr6.eq) goto loc_82B644E4;
loc_82B644B0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// bl 0x82d33db0
	ctx.lr = 0x82B644BC;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b644d8
	if (cr6.eq) goto loc_82B644D8;
	// subfc r11,r28,r31
	xer.ca = ctx.r31.u32 >= ctx.r28.u32;
	ctx.r11.s64 = ctx.r31.s64 - ctx.r28.s64;
	// li r5,2
	ctx.r5.s64 = 2;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r4,r9,31
	ctx.r4.u64 = ctx.r9.u32 & 0x1;
	// bl 0x82d2aec8
	ctx.lr = 0x82B644D8;
	sub_82D2AEC8(ctx, base);
loc_82B644D8:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// blt cr6,0x82b644b0
	if (cr6.lt) goto loc_82B644B0;
loc_82B644E4:
	// lwz r11,104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r31,r11,100
	ctx.r31.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x82b644f8
	if (!cr6.eq) goto loc_82B644F8;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_82B644F8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19e70
	ctx.lr = 0x82B64500;
	sub_82D19E70(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82d3f270
	ctx.lr = 0x82B64510;
	sub_82D3F270(ctx, base);
	// li r31,2
	ctx.r31.s64 = 2;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x82b64540
	if (cr6.eq) goto loc_82B64540;
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82bbbf28
	ctx.lr = 0x82B64530;
	sub_82BBBF28(ctx, base);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82B64540;
	sub_825952B8(ctx, base);
loc_82B64540:
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82b64558
	if (cr6.eq) goto loc_82B64558;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825952b8
	ctx.lr = 0x82B64558;
	sub_825952B8(ctx, base);
loc_82B64558:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B64560"))) PPC_WEAK_FUNC(sub_82B64560);
PPC_FUNC_IMPL(__imp__sub_82B64560) {
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
	// lwz r3,108(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// bl 0x82d2fe58
	ctx.lr = 0x82B64580;
	sub_82D2FE58(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b645b8
	if (cr6.eq) goto loc_82B645B8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d3d908
	ctx.lr = 0x82B64594;
	sub_82D3D908(ctx, base);
	// lwz r11,124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// bl 0x82b639f0
	ctx.lr = 0x82B645A4;
	sub_82B639F0(ctx, base);
	// bl 0x82d26ed8
	ctx.lr = 0x82B645A8;
	sub_82D26ED8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b645b8
	if (cr6.eq) goto loc_82B645B8;
	// li r4,118
	ctx.r4.s64 = 118;
	// bl 0x82d26b18
	ctx.lr = 0x82B645B8;
	sub_82D26B18(ctx, base);
loc_82B645B8:
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

__attribute__((alias("__imp__sub_82B645D0"))) PPC_WEAK_FUNC(sub_82B645D0);
PPC_FUNC_IMPL(__imp__sub_82B645D0) {
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
	// lwz r3,108(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// bl 0x82d2fe58
	ctx.lr = 0x82B645F0;
	sub_82D2FE58(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b64628
	if (cr6.eq) goto loc_82B64628;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d3d8a8
	ctx.lr = 0x82B64604;
	sub_82D3D8A8(ctx, base);
	// lwz r11,124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// bl 0x82b639f0
	ctx.lr = 0x82B64614;
	sub_82B639F0(ctx, base);
	// bl 0x82d26ed8
	ctx.lr = 0x82B64618;
	sub_82D26ED8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b64628
	if (cr6.eq) goto loc_82B64628;
	// li r4,118
	ctx.r4.s64 = 118;
	// bl 0x82d26b18
	ctx.lr = 0x82B64628;
	sub_82D26B18(ctx, base);
loc_82B64628:
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

__attribute__((alias("__imp__sub_82B64640"))) PPC_WEAK_FUNC(sub_82B64640);
PPC_FUNC_IMPL(__imp__sub_82B64640) {
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
	// lwz r3,96(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B64664;
	sub_82D33DB0(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// bne cr6,0x82b646a8
	if (!cr6.eq) goto loc_82B646A8;
	// cmplwi cr6,r30,5
	cr6.compare<uint32_t>(ctx.r30.u32, 5, xer);
	// bge cr6,0x82b646a8
	if (!cr6.lt) goto loc_82B646A8;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r10,116(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,21616
	ctx.r8.s64 = ctx.r11.s64 + 21616;
	// lwzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmpw cr6,r7,r10
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, xer);
	// stw r7,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r7.u32);
	// beq cr6,0x82b646a0
	if (cr6.eq) goto loc_82B646A0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
loc_82B646A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b639f0
	ctx.lr = 0x82B646A8;
	sub_82B639F0(ctx, base);
loc_82B646A8:
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

__attribute__((alias("__imp__sub_82B646C0"))) PPC_WEAK_FUNC(sub_82B646C0);
PPC_FUNC_IMPL(__imp__sub_82B646C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B646C8;
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
	ctx.lr = 0x82B646DC;
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
	ctx.lr = 0x82B646F4;
	sub_82D253F8(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r9,r11,21808
	ctx.r9.s64 = ctx.r11.s64 + 21808;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// bl 0x82d86078
	ctx.lr = 0x82B64724;
	sub_82D86078(ctx, base);
	// lwz r7,12(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// rotlwi r3,r7,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r7.u32);
	// bl 0x82daa4f8
	ctx.lr = 0x82B64738;
	sub_82DAA4F8(ctx, base);
	// bl 0x825832f0
	ctx.lr = 0x82B6473C;
	sub_825832F0(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r3,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r6,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r6.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x82b629b0
	ctx.lr = 0x82B64758;
	sub_82B629B0(ctx, base);
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r5,21592
	ctx.r29.s64 = ctx.r5.s64 + 21592;
	// addi r4,r29,-52
	ctx.r4.s64 = ctx.r29.s64 + -52;
	// bl 0x82d20ae0
	ctx.lr = 0x82B6476C;
	sub_82D20AE0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d23390
	ctx.lr = 0x82B6477C;
	sub_82D23390(ctx, base);
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x82daa4f8
	ctx.lr = 0x82B64784;
	sub_82DAA4F8(ctx, base);
	// bl 0x825832f0
	ctx.lr = 0x82B64788;
	sub_825832F0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// beq cr6,0x82b647ac
	if (cr6.eq) goto loc_82B647AC;
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// beq cr6,0x82b647ac
	if (cr6.eq) goto loc_82B647AC;
	// stw r3,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82B647AC:
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B647BC"))) PPC_WEAK_FUNC(sub_82B647BC);
PPC_FUNC_IMPL(__imp__sub_82B647BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B647C0"))) PPC_WEAK_FUNC(sub_82B647C0);
PPC_FUNC_IMPL(__imp__sub_82B647C0) {
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
	// bl 0x82b64100
	ctx.lr = 0x82B647E0;
	sub_82B64100(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b647f8
	if (cr6.eq) goto loc_82B647F8;
	// bl 0x82416268
	ctx.lr = 0x82B647F4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B647F8:
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

__attribute__((alias("__imp__sub_82B64810"))) PPC_WEAK_FUNC(sub_82B64810);
PPC_FUNC_IMPL(__imp__sub_82B64810) {
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
	// li r4,144
	ctx.r4.s64 = 144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B64844;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b64878
	if (cr6.eq) goto loc_82B64878;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b64868
	if (cr6.lt) goto loc_82B64868;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// bl 0x82b646c0
	ctx.lr = 0x82B64864;
	sub_82B646C0(ctx, base);
	// b 0x82b6487c
	goto loc_82B6487C;
loc_82B64868:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lbz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// bl 0x82b646c0
	ctx.lr = 0x82B64874;
	sub_82B646C0(ctx, base);
	// b 0x82b6487c
	goto loc_82B6487C;
loc_82B64878:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B6487C:
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

__attribute__((alias("__imp__sub_82B64894"))) PPC_WEAK_FUNC(sub_82B64894);
PPC_FUNC_IMPL(__imp__sub_82B64894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B64898"))) PPC_WEAK_FUNC(sub_82B64898);
PPC_FUNC_IMPL(__imp__sub_82B64898) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b648c0
	if (cr6.lt) goto loc_82B648C0;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b648c4
	goto loc_82B648C4;
loc_82B648C0:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82B648C4:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// stb r10,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r10.u8);
loc_82B648DC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b648dc
	if (!cr6.eq) goto loc_82B648DC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82B64900;
	sub_8259CC28(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82b64810
	ctx.lr = 0x82B6490C;
	sub_82B64810(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82b64930
	if (cr6.lt) goto loc_82B64930;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B64930;
	sub_825952B8(ctx, base);
loc_82B64930:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82B64948"))) PPC_WEAK_FUNC(sub_82B64948);
PPC_FUNC_IMPL(__imp__sub_82B64948) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B64950;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,27
	ctx.r11.s64 = 27;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,584
	ctx.r4.s64 = 584;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B64974;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b649b8
	if (cr6.eq) goto loc_82B649B8;
	// li r7,6
	ctx.r7.s64 = 6;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d2f7b0
	ctx.lr = 0x82B64994;
	sub_82D2F7B0(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,22448
	ctx.r9.s64 = ctx.r11.s64 + 22448;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82B649B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B649C4"))) PPC_WEAK_FUNC(sub_82B649C4);
PPC_FUNC_IMPL(__imp__sub_82B649C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B649C8"))) PPC_WEAK_FUNC(sub_82B649C8);
PPC_FUNC_IMPL(__imp__sub_82B649C8) {
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
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,22448
	ctx.r9.s64 = ctx.r11.s64 + 22448;
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
	// bl 0x82d2f840
	ctx.lr = 0x82B64A00;
	sub_82D2F840(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82b64a18
	if (cr6.eq) goto loc_82B64A18;
	// bl 0x82416268
	ctx.lr = 0x82B64A14;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B64A18:
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

__attribute__((alias("__imp__sub_82B64A30"))) PPC_WEAK_FUNC(sub_82B64A30);
PPC_FUNC_IMPL(__imp__sub_82B64A30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b64a40
	if (cr6.lt) goto loc_82B64A40;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82B64A40:
	// lbz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// b 0x82b64948
	sub_82B64948(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B64A48"))) PPC_WEAK_FUNC(sub_82B64A48);
PPC_FUNC_IMPL(__imp__sub_82B64A48) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// bl 0x82d873a0
	ctx.lr = 0x82B64A78;
	sub_82D873A0(ctx, base);
	// bl 0x82d86488
	ctx.lr = 0x82B64A7C;
	sub_82D86488(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aab0
	ctx.lr = 0x82B64A88;
	sub_82D2AAB0(ctx, base);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82b64aa8
	if (cr6.lt) goto loc_82B64AA8;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B64AA8;
	sub_825952B8(ctx, base);
loc_82B64AA8:
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_82B64AC0"))) PPC_WEAK_FUNC(sub_82B64AC0);
PPC_FUNC_IMPL(__imp__sub_82B64AC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bgelr cr6
	if (!cr6.lt) return;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// blt cr6,0x82b64ae8
	if (cr6.lt) goto loc_82B64AE8;
	// bne cr6,0x82b64aec
	if (!cr6.eq) goto loc_82B64AEC;
	// li r8,2
	ctx.r8.s64 = 2;
	// b 0x82b64aec
	goto loc_82B64AEC;
loc_82B64AE8:
	// li r8,1
	ctx.r8.s64 = 1;
loc_82B64AEC:
	// li r11,0
	ctx.r11.s64 = 0;
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_82B64AF4:
	// lbz r10,45(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 45);
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// bne cr6,0x82b64b0c
	if (!cr6.eq) goto loc_82B64B0C;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
loc_82B64B0C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// blt cr6,0x82b64af4
	if (cr6.lt) goto loc_82B64AF4;
	// blr 
	return;
}

