#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83A9BC90"))) PPC_WEAK_FUNC(sub_83A9BC90);
PPC_FUNC_IMPL(__imp__sub_83A9BC90) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a9bcbc
	if (!cr6.eq) goto loc_83A9BCBC;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,23492
	ctx.r4.s64 = ctx.r11.s64 + 23492;
	// bl 0x831ea418
	ctx.lr = 0x83A9BCB4;
	sub_831EA418(ctx, base);
loc_83A9BCB4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83a9bccc
	goto loc_83A9BCCC;
loc_83A9BCBC:
	// lbz r11,159(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 159);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83a9bcb4
	if (cr0.eq) goto loc_83A9BCB4;
	// lwa r3,936(r3)
	ctx.r3.s64 = int32_t(PPC_LOAD_U32(ctx.r3.u32 + 936));
loc_83A9BCCC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A9BCDC"))) PPC_WEAK_FUNC(sub_83A9BCDC);
PPC_FUNC_IMPL(__imp__sub_83A9BCDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A9BCE0"))) PPC_WEAK_FUNC(sub_83A9BCE0);
PPC_FUNC_IMPL(__imp__sub_83A9BCE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a9bcfc
	if (!cr6.eq) goto loc_83A9BCFC;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,23504
	ctx.r4.s64 = ctx.r11.s64 + 23504;
	// b 0x831ea418
	sub_831EA418(ctx, base);
	return;
loc_83A9BCFC:
	// cmpwi cr6,r5,255
	cr6.compare<int32_t>(ctx.r5.s32, 255, xer);
	// blt cr6,0x83a9bd08
	if (cr6.lt) goto loc_83A9BD08;
	// li r5,255
	ctx.r5.s64 = 255;
loc_83A9BD08:
	// cmpwi cr6,r5,-255
	cr6.compare<int32_t>(ctx.r5.s32, -255, xer);
	// bgt cr6,0x83a9bd14
	if (cr6.gt) goto loc_83A9BD14;
	// li r5,-255
	ctx.r5.s64 = -255;
loc_83A9BD14:
	// lwz r3,176(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// li r4,139
	ctx.r4.s64 = 139;
	// b 0x83ac1040
	sub_83AC1040(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A9BD20"))) PPC_WEAK_FUNC(sub_83A9BD20);
PPC_FUNC_IMPL(__imp__sub_83A9BD20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a9bd38
	if (!cr6.eq) goto loc_83A9BD38;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,23516
	ctx.r4.s64 = ctx.r11.s64 + 23516;
	// b 0x831ea418
	sub_831EA418(ctx, base);
	return;
loc_83A9BD38:
	// stw r4,988(r3)
	PPC_STORE_U32(ctx.r3.u32 + 988, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A9BD40"))) PPC_WEAK_FUNC(sub_83A9BD40);
PPC_FUNC_IMPL(__imp__sub_83A9BD40) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,988(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 988);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A9BD48"))) PPC_WEAK_FUNC(sub_83A9BD48);
PPC_FUNC_IMPL(__imp__sub_83A9BD48) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83a76208
	ctx.lr = 0x83A9BD64;
	sub_83A76208(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83a9bd88
	if (cr0.eq) goto loc_83A9BD88;
	// bl 0x82927020
	ctx.lr = 0x83A9BD70;
	sub_82927020(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82590fc8
	ctx.lr = 0x83A9BD78;
	sub_82590FC8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, xer);
	// bne cr6,0x83a9bd88
	if (!cr6.eq) goto loc_83A9BD88;
	// lwz r3,996(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 996);
	// b 0x83a9bd8c
	goto loc_83A9BD8C;
loc_83A9BD88:
	// lwz r3,992(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 992);
loc_83A9BD8C:
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

__attribute__((alias("__imp__sub_83A9BDA4"))) PPC_WEAK_FUNC(sub_83A9BDA4);
PPC_FUNC_IMPL(__imp__sub_83A9BDA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A9BDA8"))) PPC_WEAK_FUNC(sub_83A9BDA8);
PPC_FUNC_IMPL(__imp__sub_83A9BDA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a9bdc8
	if (cr6.eq) goto loc_83A9BDC8;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x83a9bdc8
	if (cr6.lt) goto loc_83A9BDC8;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bgt cr6,0x83a9bdc8
	if (cr6.gt) goto loc_83A9BDC8;
	// stb r4,108(r3)
	PPC_STORE_U8(ctx.r3.u32 + 108, ctx.r4.u8);
	// blr 
	return;
loc_83A9BDC8:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,23528
	ctx.r4.s64 = ctx.r11.s64 + 23528;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831ea418
	sub_831EA418(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A9BDDC"))) PPC_WEAK_FUNC(sub_83A9BDDC);
PPC_FUNC_IMPL(__imp__sub_83A9BDDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A9BDE0"))) PPC_WEAK_FUNC(sub_83A9BDE0);
PPC_FUNC_IMPL(__imp__sub_83A9BDE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a9bdf8
	if (!cr6.eq) goto loc_83A9BDF8;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,23540
	ctx.r4.s64 = ctx.r11.s64 + 23540;
	// b 0x831ea418
	sub_831EA418(ctx, base);
	return;
loc_83A9BDF8:
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// stw r4,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A9BE04"))) PPC_WEAK_FUNC(sub_83A9BE04);
PPC_FUNC_IMPL(__imp__sub_83A9BE04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A9BE08"))) PPC_WEAK_FUNC(sub_83A9BE08);
PPC_FUNC_IMPL(__imp__sub_83A9BE08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a9be30
	if (cr6.eq) goto loc_83A9BE30;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x83a9be30
	if (cr6.lt) goto loc_83A9BE30;
	// cmpwi cr6,r4,127
	cr6.compare<int32_t>(ctx.r4.s32, 127, xer);
	// bgt cr6,0x83a9be30
	if (cr6.gt) goto loc_83A9BE30;
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// addi r10,r4,128
	ctx.r10.s64 = ctx.r4.s64 + 128;
	// stb r10,46(r11)
	PPC_STORE_U8(ctx.r11.u32 + 46, ctx.r10.u8);
	// blr 
	return;
loc_83A9BE30:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,23552
	ctx.r4.s64 = ctx.r11.s64 + 23552;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831ea418
	sub_831EA418(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A9BE44"))) PPC_WEAK_FUNC(sub_83A9BE44);
PPC_FUNC_IMPL(__imp__sub_83A9BE44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A9BE48"))) PPC_WEAK_FUNC(sub_83A9BE48);
PPC_FUNC_IMPL(__imp__sub_83A9BE48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a9be8c
	if (cr6.eq) goto loc_83A9BE8C;
	// cmpdi cr6,r4,0
	cr6.compare<int64_t>(ctx.r4.s64, 0, xer);
	// blt cr6,0x83a9be8c
	if (cr6.lt) goto loc_83A9BE8C;
	// li r11,-1
	ctx.r11.s64 = -1;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// cmpd cr6,r4,r11
	cr6.compare<int64_t>(ctx.r4.s64, ctx.r11.s64, xer);
	// blt cr6,0x83a9be6c
	if (cr6.lt) goto loc_83A9BE6C;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_83A9BE6C:
	// rotlwi r5,r4,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// cmpdi cr6,r4,0
	cr6.compare<int64_t>(ctx.r4.s64, 0, xer);
	// stw r5,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r5.u32);
	// li r4,114
	ctx.r4.s64 = 114;
	// lwz r3,176(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// ble cr6,0x83a9be88
	if (!cr6.gt) goto loc_83A9BE88;
	// b 0x83ac1040
	sub_83AC1040(ctx, base);
	return;
loc_83A9BE88:
	// b 0x83ac10a8
	sub_83AC10A8(ctx, base);
	return;
loc_83A9BE8C:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,23564
	ctx.r4.s64 = ctx.r11.s64 + 23564;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831ea418
	sub_831EA418(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A9BEA0"))) PPC_WEAK_FUNC(sub_83A9BEA0);
PPC_FUNC_IMPL(__imp__sub_83A9BEA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a9beb8
	if (!cr6.eq) goto loc_83A9BEB8;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,23576
	ctx.r4.s64 = ctx.r11.s64 + 23576;
	// b 0x831ea418
	sub_831EA418(ctx, base);
	return;
loc_83A9BEB8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-10804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -10804);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x83a9becc
	if (cr6.lt) goto loc_83A9BECC;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_83A9BECC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x83a9bee0
	if (cr6.gt) goto loc_83A9BEE0;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_83A9BEE0:
	// lwz r3,176(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// li r4,154
	ctx.r4.s64 = 154;
	// b 0x83ac1018
	sub_83AC1018(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A9BEEC"))) PPC_WEAK_FUNC(sub_83A9BEEC);
PPC_FUNC_IMPL(__imp__sub_83A9BEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A9BEF0"))) PPC_WEAK_FUNC(sub_83A9BEF0);
PPC_FUNC_IMPL(__imp__sub_83A9BEF0) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a9bf20
	if (!cr6.eq) goto loc_83A9BF20;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,23588
	ctx.r4.s64 = ctx.r11.s64 + 23588;
	// bl 0x831ea418
	ctx.lr = 0x83A9BF1C;
	sub_831EA418(ctx, base);
	// b 0x83a9bf38
	goto loc_83A9BF38;
loc_83A9BF20:
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// bl 0x83ac1540
	ctx.lr = 0x83A9BF28;
	sub_83AC1540(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,988(r31)
	PPC_STORE_U32(ctx.r31.u32 + 988, ctx.r11.u32);
	// stw r11,1000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1000, ctx.r11.u32);
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
loc_83A9BF38:
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

__attribute__((alias("__imp__sub_83A9BF4C"))) PPC_WEAK_FUNC(sub_83A9BF4C);
PPC_FUNC_IMPL(__imp__sub_83A9BF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A9BF50"))) PPC_WEAK_FUNC(sub_83A9BF50);
PPC_FUNC_IMPL(__imp__sub_83A9BF50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A9BF58;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,1000
	cr6.compare<int32_t>(ctx.r4.s32, 1000, xer);
	// blt cr6,0x83a9bf78
	if (cr6.lt) goto loc_83A9BF78;
	// cmplwi cr6,r4,65535
	cr6.compare<uint32_t>(ctx.r4.u32, 65535, xer);
	// li r28,1
	ctx.r28.s64 = 1;
	// bne cr6,0x83a9bf7c
	if (!cr6.eq) goto loc_83A9BF7C;
loc_83A9BF78:
	// li r28,0
	ctx.r28.s64 = 0;
loc_83A9BF7C:
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// ori r30,r11,65535
	ctx.r30.u64 = ctx.r11.u64 | 65535;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// bne cr6,0x83a9bfac
	if (!cr6.eq) goto loc_83A9BFAC;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,23612
	ctx.r4.s64 = ctx.r11.s64 + 23612;
loc_83A9BF98:
	// li r5,-2
	ctx.r5.s64 = -2;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A9BFA4;
	sub_831EA418(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x83a9c008
	goto loc_83A9C008;
loc_83A9BFAC:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bne cr6,0x83a9bfcc
	if (!cr6.eq) goto loc_83A9BFCC;
	// bl 0x83ab0348
	ctx.lr = 0x83A9BFB8;
	sub_83AB0348(ctx, base);
	// cmplwi cr6,r3,65535
	cr6.compare<uint32_t>(ctx.r3.u32, 65535, xer);
	// bne cr6,0x83a9bfcc
	if (!cr6.eq) goto loc_83A9BFCC;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,23600
	ctx.r4.s64 = ctx.r11.s64 + 23600;
	// b 0x83a9bf98
	goto loc_83A9BF98;
loc_83A9BFCC:
	// clrlwi r31,r3,16
	ctx.r31.u64 = ctx.r3.u32 & 0xFFFF;
	// lwz r3,176(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 176);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83ac1048
	ctx.lr = 0x83A9BFDC;
	sub_83AC1048(ctx, base);
	// cmplw cr6,r3,r30
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, xer);
	// bne cr6,0x83a9c008
	if (!cr6.eq) goto loc_83A9C008;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// beq cr6,0x83a9c000
	if (cr6.eq) goto loc_83A9C000;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,20056(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20056);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x83a9c008
	goto loc_83A9C008;
loc_83A9C000:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83aad9b0
	ctx.lr = 0x83A9C008;
	sub_83AAD9B0(ctx, base);
loc_83A9C008:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A9C010"))) PPC_WEAK_FUNC(sub_83A9C010);
PPC_FUNC_IMPL(__imp__sub_83A9C010) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,156(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 156);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A9C01C"))) PPC_WEAK_FUNC(sub_83A9C01C);
PPC_FUNC_IMPL(__imp__sub_83A9C01C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A9C020"))) PPC_WEAK_FUNC(sub_83A9C020);
PPC_FUNC_IMPL(__imp__sub_83A9C020) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a9c038
	if (!cr6.eq) goto loc_83A9C038;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,23732
	ctx.r4.s64 = ctx.r11.s64 + 23732;
	// b 0x831ea418
	sub_831EA418(ctx, base);
	return;
loc_83A9C038:
	// lbz r11,160(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 160);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83a9c064
	if (cr0.eq) goto loc_83A9C064;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// beq cr6,0x83a9c064
	if (cr6.eq) goto loc_83A9C064;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,23640
	ctx.r4.s64 = ctx.r11.s64 + 23640;
	// b 0x831ea3f0
	sub_831EA3F0(ctx, base);
	return;
loc_83A9C064:
	// lwz r3,176(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x83ac1018
	sub_83AC1018(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A9C070"))) PPC_WEAK_FUNC(sub_83A9C070);
PPC_FUNC_IMPL(__imp__sub_83A9C070) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a9c088
	if (!cr6.eq) goto loc_83A9C088;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,23744
	ctx.r4.s64 = ctx.r11.s64 + 23744;
	// b 0x831ea418
	sub_831EA418(ctx, base);
	return;
loc_83A9C088:
	// lwz r3,176(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// li r4,5
	ctx.r4.s64 = 5;
	// b 0x83ac1018
	sub_83AC1018(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A9C094"))) PPC_WEAK_FUNC(sub_83A9C094);
PPC_FUNC_IMPL(__imp__sub_83A9C094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A9C098"))) PPC_WEAK_FUNC(sub_83A9C098);
PPC_FUNC_IMPL(__imp__sub_83A9C098) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a9c0b0
	if (!cr6.eq) goto loc_83A9C0B0;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,23756
	ctx.r4.s64 = ctx.r11.s64 + 23756;
	// b 0x831ea418
	sub_831EA418(ctx, base);
	return;
loc_83A9C0B0:
	// lwz r3,176(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// li r4,6
	ctx.r4.s64 = 6;
	// b 0x83ac1018
	sub_83AC1018(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A9C0BC"))) PPC_WEAK_FUNC(sub_83A9C0BC);
PPC_FUNC_IMPL(__imp__sub_83A9C0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A9C0C0"))) PPC_WEAK_FUNC(sub_83A9C0C0);
PPC_FUNC_IMPL(__imp__sub_83A9C0C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a9c0d8
	if (!cr6.eq) goto loc_83A9C0D8;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,23768
	ctx.r4.s64 = ctx.r11.s64 + 23768;
	// b 0x831ea418
	sub_831EA418(ctx, base);
	return;
loc_83A9C0D8:
	// lwz r3,176(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// li r4,7
	ctx.r4.s64 = 7;
	// b 0x83ac1018
	sub_83AC1018(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A9C0E4"))) PPC_WEAK_FUNC(sub_83A9C0E4);
PPC_FUNC_IMPL(__imp__sub_83A9C0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A9C0E8"))) PPC_WEAK_FUNC(sub_83A9C0E8);
PPC_FUNC_IMPL(__imp__sub_83A9C0E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a9c100
	if (!cr6.eq) goto loc_83A9C100;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,23792
	ctx.r4.s64 = ctx.r11.s64 + 23792;
	// b 0x831ea418
	sub_831EA418(ctx, base);
	return;
loc_83A9C100:
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// blt cr6,0x83a9c138
	if (cr6.lt) goto loc_83A9C138;
	// beq cr6,0x83a9c130
	if (cr6.eq) goto loc_83A9C130;
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// blt cr6,0x83a9c128
	if (cr6.lt) goto loc_83A9C128;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,23780
	ctx.r4.s64 = ctx.r11.s64 + 23780;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831ea418
	sub_831EA418(ctx, base);
	return;
loc_83A9C128:
	// li r5,2
	ctx.r5.s64 = 2;
	// b 0x83a9c13c
	goto loc_83A9C13C;
loc_83A9C130:
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x83a9c13c
	goto loc_83A9C13C;
loc_83A9C138:
	// li r5,0
	ctx.r5.s64 = 0;
loc_83A9C13C:
	// lwz r3,176(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// li r4,94
	ctx.r4.s64 = 94;
	// b 0x83ac1040
	sub_83AC1040(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A9C148"))) PPC_WEAK_FUNC(sub_83A9C148);
PPC_FUNC_IMPL(__imp__sub_83A9C148) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a9c160
	if (!cr6.eq) goto loc_83A9C160;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,23816
	ctx.r4.s64 = ctx.r11.s64 + 23816;
	// b 0x831ea418
	sub_831EA418(ctx, base);
	return;
loc_83A9C160:
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// blt cr6,0x83a9c1a4
	if (cr6.lt) goto loc_83A9C1A4;
	// beq cr6,0x83a9c19c
	if (cr6.eq) goto loc_83A9C19C;
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// blt cr6,0x83a9c194
	if (cr6.lt) goto loc_83A9C194;
	// beq cr6,0x83a9c18c
	if (cr6.eq) goto loc_83A9C18C;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,23804
	ctx.r4.s64 = ctx.r11.s64 + 23804;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831ea418
	sub_831EA418(ctx, base);
	return;
loc_83A9C18C:
	// li r5,3
	ctx.r5.s64 = 3;
	// b 0x83a9c1a8
	goto loc_83A9C1A8;
loc_83A9C194:
	// li r5,2
	ctx.r5.s64 = 2;
	// b 0x83a9c1a8
	goto loc_83A9C1A8;
loc_83A9C19C:
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x83a9c1a8
	goto loc_83A9C1A8;
loc_83A9C1A4:
	// li r5,0
	ctx.r5.s64 = 0;
loc_83A9C1A8:
	// lwz r3,176(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// li r4,95
	ctx.r4.s64 = 95;
	// b 0x83ac1040
	sub_83AC1040(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A9C1B4"))) PPC_WEAK_FUNC(sub_83A9C1B4);
PPC_FUNC_IMPL(__imp__sub_83A9C1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A9C1B8"))) PPC_WEAK_FUNC(sub_83A9C1B8);
PPC_FUNC_IMPL(__imp__sub_83A9C1B8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,-22544
	ctx.r11.s64 = ctx.r11.s64 + -22544;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bne cr6,0x83a9c208
	if (!cr6.eq) goto loc_83A9C208;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,23864
	ctx.r4.s64 = ctx.r11.s64 + 23864;
loc_83A9C1F8:
	// li r5,-2
	ctx.r5.s64 = -2;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A9C204;
	sub_831EA418(ctx, base);
	// b 0x83a9c268
	goto loc_83A9C268;
loc_83A9C208:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bge cr6,0x83a9c21c
	if (!cr6.lt) goto loc_83A9C21C;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,23852
	ctx.r4.s64 = ctx.r11.s64 + 23852;
	// b 0x83a9c1f8
	goto loc_83A9C1F8;
loc_83A9C21C:
	// bl 0x83a82480
	ctx.lr = 0x83A9C220;
	sub_83A82480(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83aa1290
	ctx.lr = 0x83A9C22C;
	sub_83AA1290(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a9c250
	if (cr0.eq) goto loc_83A9C250;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83a8cf30
	ctx.lr = 0x83A9C23C;
	sub_83A8CF30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,176(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83ac1140
	ctx.lr = 0x83A9C24C;
	sub_83AC1140(ctx, base);
	// b 0x83a9c264
	goto loc_83A9C264;
loc_83A9C250:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,23840
	ctx.r4.s64 = ctx.r11.s64 + 23840;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A9C264;
	sub_831EA418(ctx, base);
loc_83A9C264:
	// bl 0x83a824c0
	ctx.lr = 0x83A9C268;
	sub_83A824C0(ctx, base);
loc_83A9C268:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_83A9C284"))) PPC_WEAK_FUNC(sub_83A9C284);
PPC_FUNC_IMPL(__imp__sub_83A9C284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A9C288"))) PPC_WEAK_FUNC(sub_83A9C288);
PPC_FUNC_IMPL(__imp__sub_83A9C288) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,-22544
	ctx.r11.s64 = ctx.r11.s64 + -22544;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bne cr6,0x83a9c2d8
	if (!cr6.eq) goto loc_83A9C2D8;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,23900
	ctx.r4.s64 = ctx.r11.s64 + 23900;
loc_83A9C2C8:
	// li r5,-2
	ctx.r5.s64 = -2;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A9C2D4;
	sub_831EA418(ctx, base);
	// b 0x83a9c338
	goto loc_83A9C338;
loc_83A9C2D8:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bge cr6,0x83a9c2ec
	if (!cr6.lt) goto loc_83A9C2EC;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,23888
	ctx.r4.s64 = ctx.r11.s64 + 23888;
	// b 0x83a9c2c8
	goto loc_83A9C2C8;
loc_83A9C2EC:
	// bl 0x83a82480
	ctx.lr = 0x83A9C2F0;
	sub_83A82480(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83aa1290
	ctx.lr = 0x83A9C2FC;
	sub_83AA1290(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a9c320
	if (cr0.eq) goto loc_83A9C320;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83a8cf30
	ctx.lr = 0x83A9C30C;
	sub_83A8CF30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,176(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83ac1200
	ctx.lr = 0x83A9C31C;
	sub_83AC1200(ctx, base);
	// b 0x83a9c334
	goto loc_83A9C334;
loc_83A9C320:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,23876
	ctx.r4.s64 = ctx.r11.s64 + 23876;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A9C334;
	sub_831EA418(ctx, base);
loc_83A9C334:
	// bl 0x83a824c0
	ctx.lr = 0x83A9C338;
	sub_83A824C0(ctx, base);
loc_83A9C338:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_83A9C354"))) PPC_WEAK_FUNC(sub_83A9C354);
PPC_FUNC_IMPL(__imp__sub_83A9C354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A9C358"))) PPC_WEAK_FUNC(sub_83A9C358);
PPC_FUNC_IMPL(__imp__sub_83A9C358) {
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
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f2
	ctx.f31.f64 = ctx.f2.f64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a9c390
	if (!cr6.eq) goto loc_83A9C390;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,23912
	ctx.r4.s64 = ctx.r11.s64 + 23912;
	// bl 0x831ea418
	ctx.lr = 0x83A9C38C;
	sub_831EA418(ctx, base);
	// b 0x83a9c3ec
	goto loc_83A9C3EC;
loc_83A9C390:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f1,f13
	cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// bgt cr6,0x83a9c3a4
	if (cr6.gt) goto loc_83A9C3A4;
	// fmr f1,f13
	ctx.f1.f64 = ctx.f13.f64;
loc_83A9C3A4:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x83a9c3b8
	if (cr6.lt) goto loc_83A9C3B8;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_83A9C3B8:
	// fcmpu cr6,f31,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f31.f64, ctx.f13.f64);
	// bgt cr6,0x83a9c3c4
	if (cr6.gt) goto loc_83A9C3C4;
	// fmr f31,f13
	ctx.f31.f64 = ctx.f13.f64;
loc_83A9C3C4:
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x83a9c3d0
	if (cr6.lt) goto loc_83A9C3D0;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_83A9C3D0:
	// li r4,77
	ctx.r4.s64 = 77;
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// bl 0x83ac1018
	ctx.lr = 0x83A9C3DC;
	sub_83AC1018(ctx, base);
	// li r4,78
	ctx.r4.s64 = 78;
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83ac1018
	ctx.lr = 0x83A9C3EC;
	sub_83AC1018(ctx, base);
loc_83A9C3EC:
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

__attribute__((alias("__imp__sub_83A9C404"))) PPC_WEAK_FUNC(sub_83A9C404);
PPC_FUNC_IMPL(__imp__sub_83A9C404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A9C408"))) PPC_WEAK_FUNC(sub_83A9C408);
PPC_FUNC_IMPL(__imp__sub_83A9C408) {
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
	// stfd f29,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f29.u64);
	// stfd f30,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a9c454
	if (!cr6.eq) goto loc_83A9C454;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,23924
	ctx.r4.s64 = ctx.r11.s64 + 23924;
	// bl 0x831ea418
	ctx.lr = 0x83A9C450;
	sub_831EA418(ctx, base);
	// b 0x83a9c490
	goto loc_83A9C490;
loc_83A9C454:
	// li r4,79
	ctx.r4.s64 = 79;
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// bl 0x83ac1040
	ctx.lr = 0x83A9C460;
	sub_83AC1040(ctx, base);
	// li r4,80
	ctx.r4.s64 = 80;
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83ac1018
	ctx.lr = 0x83A9C470;
	sub_83AC1018(ctx, base);
	// li r4,81
	ctx.r4.s64 = 81;
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x83ac1018
	ctx.lr = 0x83A9C480;
	sub_83AC1018(ctx, base);
	// li r4,82
	ctx.r4.s64 = 82;
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x83ac1018
	ctx.lr = 0x83A9C490;
	sub_83AC1018(ctx, base);
loc_83A9C490:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f30,-32(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A9C4B0"))) PPC_WEAK_FUNC(sub_83A9C4B0);
PPC_FUNC_IMPL(__imp__sub_83A9C4B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a9c4c8
	if (!cr6.eq) goto loc_83A9C4C8;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,23948
	ctx.r4.s64 = ctx.r11.s64 + 23948;
	// b 0x831ea418
	sub_831EA418(ctx, base);
	return;
loc_83A9C4C8:
	// cmplwi cr6,r4,65535
	cr6.compare<uint32_t>(ctx.r4.u32, 65535, xer);
	// beq cr6,0x83a9c510
	if (cr6.eq) goto loc_83A9C510;
	// cmplwi cr6,r4,1000
	cr6.compare<uint32_t>(ctx.r4.u32, 1000, xer);
	// bge cr6,0x83a9c510
	if (!cr6.lt) goto loc_83A9C510;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r4,1000
	ctx.r11.s64 = ctx.r4.s64 + 1000;
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x83a9c4f0
	if (cr6.gt) goto loc_83A9C4F0;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_83A9C4F0:
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfs f0,-26260(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x83a9c504
	if (cr6.lt) goto loc_83A9C504;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_83A9C504:
	// lwz r3,176(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// b 0x83ac1018
	sub_83AC1018(ctx, base);
	return;
loc_83A9C510:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,23936
	ctx.r4.s64 = ctx.r11.s64 + 23936;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831ea418
	sub_831EA418(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A9C524"))) PPC_WEAK_FUNC(sub_83A9C524);
PPC_FUNC_IMPL(__imp__sub_83A9C524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A9C528"))) PPC_WEAK_FUNC(sub_83A9C528);
PPC_FUNC_IMPL(__imp__sub_83A9C528) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a9c56c
	if (!cr6.eq) goto loc_83A9C56C;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,24032
	ctx.r4.s64 = ctx.r11.s64 + 24032;
loc_83A9C55C:
	// li r5,-2
	ctx.r5.s64 = -2;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A9C568;
	sub_831EA418(ctx, base);
	// b 0x83a9c5e4
	goto loc_83A9C5E4;
loc_83A9C56C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83a9c580
	if (!cr6.eq) goto loc_83A9C580;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,24020
	ctx.r4.s64 = ctx.r11.s64 + 24020;
	// b 0x83a9c55c
	goto loc_83A9C55C;
loc_83A9C580:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a8f398
	ctx.lr = 0x83A9C588;
	sub_83A8F398(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// bne cr6,0x83a9c5ac
	if (!cr6.eq) goto loc_83A9C5AC;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,23960
	ctx.r4.s64 = ctx.r11.s64 + 23960;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea400
	ctx.lr = 0x83A9C5A8;
	sub_831EA400(ctx, base);
	// b 0x83a9c5e4
	goto loc_83A9C5E4;
loc_83A9C5AC:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x83a9c5c0
	if (cr6.gt) goto loc_83A9C5C0;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_83A9C5C0:
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfs f0,-26260(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x83a9c5d4
	if (cr6.lt) goto loc_83A9C5D4;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_83A9C5D4:
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r3,176(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83ac1018
	ctx.lr = 0x83A9C5E4;
	sub_83AC1018(ctx, base);
loc_83A9C5E4:
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

__attribute__((alias("__imp__sub_83A9C600"))) PPC_WEAK_FUNC(sub_83A9C600);
PPC_FUNC_IMPL(__imp__sub_83A9C600) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83A9C608;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bne cr6,0x83a9c634
	if (!cr6.eq) goto loc_83A9C634;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,24152
	ctx.r4.s64 = ctx.r11.s64 + 24152;
	// bl 0x831ea418
	ctx.lr = 0x83A9C630;
	sub_831EA418(ctx, base);
	// b 0x83a9c700
	goto loc_83A9C700;
loc_83A9C634:
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// bl 0x83a8bf00
	ctx.lr = 0x83A9C640;
	sub_83A8BF00(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a9c660
	if (cr0.eq) goto loc_83A9C660;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a8d380
	ctx.lr = 0x83A9C650;
	sub_83A8D380(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x83a90e48
	ctx.lr = 0x83A9C65C;
	sub_83A90E48(ctx, base);
	// b 0x83a9c664
	goto loc_83A9C664;
loc_83A9C660:
	// li r28,-1
	ctx.r28.s64 = -1;
loc_83A9C664:
	// clrlwi r27,r28,16
	ctx.r27.u64 = ctx.r28.u32 & 0xFFFF;
	// cmplwi cr6,r27,65535
	cr6.compare<uint32_t>(ctx.r27.u32, 65535, xer);
	// bne cr6,0x83a9c688
	if (!cr6.eq) goto loc_83A9C688;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,24096
	ctx.r4.s64 = ctx.r11.s64 + 24096;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea400
	ctx.lr = 0x83A9C684;
	sub_831EA400(ctx, base);
	// b 0x83a9c700
	goto loc_83A9C700;
loc_83A9C688:
	// lwz r3,176(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 176);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// bl 0x82624b10
	ctx.lr = 0x83A9C694;
	sub_82624B10(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble 0x83a9c6f4
	if (!cr0.gt) goto loc_83A9C6F4;
loc_83A9C69C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,176(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 176);
	// bl 0x83ac1318
	ctx.lr = 0x83A9C6A8;
	sub_83AC1318(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83a8bf00
	ctx.lr = 0x83A9C6B4;
	sub_83A8BF00(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a9c6cc
	if (cr0.eq) goto loc_83A9C6CC;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a90e48
	ctx.lr = 0x83A9C6C8;
	sub_83A90E48(ctx, base);
	// b 0x83a9c6d0
	goto loc_83A9C6D0;
loc_83A9C6CC:
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
loc_83A9C6D0:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x83a9c708
	if (cr6.eq) goto loc_83A9C708;
	// lwz r3,176(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 176);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x82624b10
	ctx.lr = 0x83A9C6EC;
	sub_82624B10(ctx, base);
	// cmpw cr6,r31,r3
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r3.s32, xer);
	// blt cr6,0x83a9c69c
	if (cr6.lt) goto loc_83A9C69C;
loc_83A9C6F4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,176(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 176);
	// bl 0x83ac12b8
	ctx.lr = 0x83A9C700;
	sub_83AC12B8(ctx, base);
loc_83A9C700:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83A9C708:
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, xer);
	// beq cr6,0x83a9c700
	if (cr6.eq) goto loc_83A9C700;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,24044
	ctx.r4.s64 = ctx.r11.s64 + 24044;
	// bl 0x831ea3f0
	ctx.lr = 0x83A9C724;
	sub_831EA3F0(ctx, base);
	// b 0x83a9c700
	goto loc_83A9C700;
}

__attribute__((alias("__imp__sub_83A9C728"))) PPC_WEAK_FUNC(sub_83A9C728);
PPC_FUNC_IMPL(__imp__sub_83A9C728) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a9c754
	if (!cr6.eq) goto loc_83A9C754;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,24164
	ctx.r4.s64 = ctx.r11.s64 + 24164;
	// bl 0x831ea418
	ctx.lr = 0x83A9C74C;
	sub_831EA418(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a9c75c
	goto loc_83A9C75C;
loc_83A9C754:
	// lwz r3,176(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// bl 0x82624b10
	ctx.lr = 0x83A9C75C;
	sub_82624B10(ctx, base);
loc_83A9C75C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A9C76C"))) PPC_WEAK_FUNC(sub_83A9C76C);
PPC_FUNC_IMPL(__imp__sub_83A9C76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A9C770"))) PPC_WEAK_FUNC(sub_83A9C770);
PPC_FUNC_IMPL(__imp__sub_83A9C770) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A9C778;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a9c7a8
	if (!cr6.eq) goto loc_83A9C7A8;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,24188
	ctx.r4.s64 = ctx.r11.s64 + 24188;
loc_83A9C794:
	// li r5,-2
	ctx.r5.s64 = -2;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A9C7A0;
	sub_831EA418(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a9c7dc
	goto loc_83A9C7DC;
loc_83A9C7A8:
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// clrlwi r30,r4,16
	ctx.r30.u64 = ctx.r4.u32 & 0xFFFF;
	// bl 0x82624b10
	ctx.lr = 0x83A9C7B4;
	sub_82624B10(ctx, base);
	// cmpw cr6,r30,r3
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, xer);
	// blt cr6,0x83a9c7c8
	if (cr6.lt) goto loc_83A9C7C8;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,24176
	ctx.r4.s64 = ctx.r11.s64 + 24176;
	// b 0x83a9c794
	goto loc_83A9C794;
loc_83A9C7C8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// bl 0x83ac1318
	ctx.lr = 0x83A9C7D4;
	sub_83AC1318(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83a90e48
	ctx.lr = 0x83A9C7DC;
	sub_83A90E48(ctx, base);
loc_83A9C7DC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A9C7E4"))) PPC_WEAK_FUNC(sub_83A9C7E4);
PPC_FUNC_IMPL(__imp__sub_83A9C7E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A9C7E8"))) PPC_WEAK_FUNC(sub_83A9C7E8);
PPC_FUNC_IMPL(__imp__sub_83A9C7E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A9C7F0;
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
	// bl 0x83a82480
	ctx.lr = 0x83A9C804;
	sub_83A82480(ctx, base);
	// stw r30,956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 956, ctx.r30.u32);
	// stw r29,952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 952, ctx.r29.u32);
	// bl 0x83a824c0
	ctx.lr = 0x83A9C810;
	sub_83A824C0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A9C818"))) PPC_WEAK_FUNC(sub_83A9C818);
PPC_FUNC_IMPL(__imp__sub_83A9C818) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A9C820;
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
	// bl 0x83a82480
	ctx.lr = 0x83A9C834;
	sub_83A82480(ctx, base);
	// stw r30,964(r31)
	PPC_STORE_U32(ctx.r31.u32 + 964, ctx.r30.u32);
	// stw r29,960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 960, ctx.r29.u32);
	// bl 0x83a824c0
	ctx.lr = 0x83A9C840;
	sub_83A824C0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A9C848"))) PPC_WEAK_FUNC(sub_83A9C848);
PPC_FUNC_IMPL(__imp__sub_83A9C848) {
	PPC_FUNC_PROLOGUE();
	// stw r4,944(r3)
	PPC_STORE_U32(ctx.r3.u32 + 944, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A9C850"))) PPC_WEAK_FUNC(sub_83A9C850);
PPC_FUNC_IMPL(__imp__sub_83A9C850) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,944(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 944);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A9C858"))) PPC_WEAK_FUNC(sub_83A9C858);
PPC_FUNC_IMPL(__imp__sub_83A9C858) {
	PPC_FUNC_PROLOGUE();
	// stw r4,948(r3)
	PPC_STORE_U32(ctx.r3.u32 + 948, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A9C860"))) PPC_WEAK_FUNC(sub_83A9C860);
PPC_FUNC_IMPL(__imp__sub_83A9C860) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,948(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 948);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A9C868"))) PPC_WEAK_FUNC(sub_83A9C868);
PPC_FUNC_IMPL(__imp__sub_83A9C868) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a9c880
	if (!cr6.eq) goto loc_83A9C880;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,24200
	ctx.r4.s64 = ctx.r11.s64 + 24200;
	// b 0x831ea418
	sub_831EA418(ctx, base);
	return;
loc_83A9C880:
	// lwz r3,176(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// b 0x826249e0
	sub_826249E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A9C888"))) PPC_WEAK_FUNC(sub_83A9C888);
PPC_FUNC_IMPL(__imp__sub_83A9C888) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a9c8a0
	if (!cr6.eq) goto loc_83A9C8A0;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,24212
	ctx.r4.s64 = ctx.r11.s64 + 24212;
	// b 0x831ea418
	sub_831EA418(ctx, base);
	return;
loc_83A9C8A0:
	// lwz r3,176(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// b 0x82624978
	sub_82624978(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A9C8A8"))) PPC_WEAK_FUNC(sub_83A9C8A8);
PPC_FUNC_IMPL(__imp__sub_83A9C8A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a9c8c4
	if (!cr6.eq) goto loc_83A9C8C4;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,24224
	ctx.r4.s64 = ctx.r11.s64 + 24224;
	// b 0x831ea418
	sub_831EA418(ctx, base);
	return;
loc_83A9C8C4:
	// lwz r3,176(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// li r4,141
	ctx.r4.s64 = 141;
	// b 0x83ac1040
	sub_83AC1040(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A9C8D0"))) PPC_WEAK_FUNC(sub_83A9C8D0);
PPC_FUNC_IMPL(__imp__sub_83A9C8D0) {
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
	// bl 0x83aa3d20
	ctx.lr = 0x83A9C8F0;
	sub_83AA3D20(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83a9c930
	if (cr0.eq) goto loc_83A9C930;
	// lbz r11,118(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 118);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83a9c924
	if (cr0.eq) goto loc_83A9C924;
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// cmplwi cr6,r11,140
	cr6.compare<uint32_t>(ctx.r11.u32, 140, xer);
	// bne cr6,0x83a9c924
	if (!cr6.eq) goto loc_83A9C924;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83aa5568
	ctx.lr = 0x83A9C920;
	sub_83AA5568(ctx, base);
	// b 0x83a9c930
	goto loc_83A9C930;
loc_83A9C924:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83aa40b8
	ctx.lr = 0x83A9C930;
	sub_83AA40B8(ctx, base);
loc_83A9C930:
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

__attribute__((alias("__imp__sub_83A9C948"))) PPC_WEAK_FUNC(sub_83A9C948);
PPC_FUNC_IMPL(__imp__sub_83A9C948) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x83aa3d20
	ctx.lr = 0x83A9C968;
	sub_83AA3D20(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83a9c994
	if (cr0.eq) goto loc_83A9C994;
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// lwz r10,968(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 968);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a9c994
	if (cr6.eq) goto loc_83A9C994;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,972(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 972);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A9C994;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83A9C994:
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

__attribute__((alias("__imp__sub_83A9C9AC"))) PPC_WEAK_FUNC(sub_83A9C9AC);
PPC_FUNC_IMPL(__imp__sub_83A9C9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A9C9B0"))) PPC_WEAK_FUNC(sub_83A9C9B0);
PPC_FUNC_IMPL(__imp__sub_83A9C9B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83A9C9B8;
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
	// bl 0x83aa3d20
	ctx.lr = 0x83A9C9D4;
	sub_83AA3D20(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83a9ca0c
	if (cr0.eq) goto loc_83A9CA0C;
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// lwz r10,976(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 976);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a9ca0c
	if (cr6.eq) goto loc_83A9CA0C;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// lwz r3,980(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 980);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x83A9CA0C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83A9CA0C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A9CA14"))) PPC_WEAK_FUNC(sub_83A9CA14);
PPC_FUNC_IMPL(__imp__sub_83A9CA14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A9CA18"))) PPC_WEAK_FUNC(sub_83A9CA18);
PPC_FUNC_IMPL(__imp__sub_83A9CA18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A9CA20;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a9ca48
	if (!cr6.eq) goto loc_83A9CA48;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,24480
	ctx.r4.s64 = ctx.r11.s64 + 24480;
loc_83A9CA38:
	// li r5,-2
	ctx.r5.s64 = -2;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A9CA44;
	sub_831EA418(ctx, base);
	// b 0x83a9caec
	goto loc_83A9CAEC;
loc_83A9CA48:
	// clrlwi r30,r4,16
	ctx.r30.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplwi cr6,r30,65535
	cr6.compare<uint32_t>(ctx.r30.u32, 65535, xer);
	// bne cr6,0x83a9ca60
	if (!cr6.eq) goto loc_83A9CA60;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,24468
	ctx.r4.s64 = ctx.r11.s64 + 24468;
	// b 0x83a9ca38
	goto loc_83A9CA38;
loc_83A9CA60:
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// lwz r3,176(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 176);
	// ori r31,r11,32768
	ctx.r31.u64 = ctx.r11.u64 | 32768;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83ac1368
	ctx.lr = 0x83A9CA74;
	sub_83AC1368(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a9ca8c
	if (!cr0.eq) goto loc_83A9CA8C;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,24424
	ctx.r4.s64 = ctx.r11.s64 + 24424;
	// bl 0x831ea3f0
	ctx.lr = 0x83A9CA88;
	sub_831EA3F0(ctx, base);
	// b 0x83a9caec
	goto loc_83A9CAEC;
loc_83A9CA8C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a8f510
	ctx.lr = 0x83A9CA98;
	sub_83A8F510(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a9cab4
	if (!cr0.eq) goto loc_83A9CAB4;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,24364
	ctx.r4.s64 = ctx.r11.s64 + 24364;
	// bl 0x831ea400
	ctx.lr = 0x83A9CAB0;
	sub_831EA400(ctx, base);
	// b 0x83a9caec
	goto loc_83A9CAEC;
loc_83A9CAB4:
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83a9caec
	if (cr0.eq) goto loc_83A9CAEC;
	// lhz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// lwz r3,176(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 176);
	// bl 0x83ac1048
	ctx.lr = 0x83A9CACC;
	sub_83AC1048(ctx, base);
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// bne cr6,0x83a9caec
	if (!cr6.eq) goto loc_83A9CAEC;
	// lhz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// lfs f1,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,176(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 176);
	// bl 0x83ac1018
	ctx.lr = 0x83A9CAEC;
	sub_83AC1018(ctx, base);
loc_83A9CAEC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A9CAF4"))) PPC_WEAK_FUNC(sub_83A9CAF4);
PPC_FUNC_IMPL(__imp__sub_83A9CAF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A9CAF8"))) PPC_WEAK_FUNC(sub_83A9CAF8);
PPC_FUNC_IMPL(__imp__sub_83A9CAF8) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a9cb28
	if (!cr6.eq) goto loc_83A9CB28;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,24568
	ctx.r4.s64 = ctx.r11.s64 + 24568;
loc_83A9CB18:
	// li r5,-2
	ctx.r5.s64 = -2;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A9CB24;
	sub_831EA418(ctx, base);
	// b 0x83a9cb68
	goto loc_83A9CB68;
loc_83A9CB28:
	// clrlwi r31,r4,16
	ctx.r31.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplwi cr6,r31,65535
	cr6.compare<uint32_t>(ctx.r31.u32, 65535, xer);
	// bne cr6,0x83a9cb40
	if (!cr6.eq) goto loc_83A9CB40;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,24556
	ctx.r4.s64 = ctx.r11.s64 + 24556;
	// b 0x83a9cb18
	goto loc_83A9CB18;
loc_83A9CB40:
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// lwz r3,176(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// ori r4,r11,32768
	ctx.r4.u64 = ctx.r11.u64 | 32768;
	// bl 0x83ac1410
	ctx.lr = 0x83A9CB50;
	sub_83AC1410(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a9cb68
	if (!cr0.eq) goto loc_83A9CB68;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,24492
	ctx.r4.s64 = ctx.r11.s64 + 24492;
	// bl 0x831ea400
	ctx.lr = 0x83A9CB68;
	sub_831EA400(ctx, base);
loc_83A9CB68:
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

__attribute__((alias("__imp__sub_83A9CB7C"))) PPC_WEAK_FUNC(sub_83A9CB7C);
PPC_FUNC_IMPL(__imp__sub_83A9CB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A9CB80"))) PPC_WEAK_FUNC(sub_83A9CB80);
PPC_FUNC_IMPL(__imp__sub_83A9CB80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a9cb98
	if (!cr6.eq) goto loc_83A9CB98;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,24580
	ctx.r4.s64 = ctx.r11.s64 + 24580;
	// b 0x831ea418
	sub_831EA418(ctx, base);
	return;
loc_83A9CB98:
	// lwz r3,176(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// b 0x83ac1330
	sub_83AC1330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A9CBA0"))) PPC_WEAK_FUNC(sub_83A9CBA0);
PPC_FUNC_IMPL(__imp__sub_83A9CBA0) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a9cbcc
	if (!cr6.eq) goto loc_83A9CBCC;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,24596
	ctx.r4.s64 = ctx.r11.s64 + 24596;
	// bl 0x831ea418
	ctx.lr = 0x83A9CBC4;
	sub_831EA418(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83a9cbd4
	goto loc_83A9CBD4;
loc_83A9CBCC:
	// lwz r3,176(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// bl 0x83ac1328
	ctx.lr = 0x83A9CBD4;
	sub_83AC1328(ctx, base);
loc_83A9CBD4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A9CBE4"))) PPC_WEAK_FUNC(sub_83A9CBE4);
PPC_FUNC_IMPL(__imp__sub_83A9CBE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A9CBE8"))) PPC_WEAK_FUNC(sub_83A9CBE8);
PPC_FUNC_IMPL(__imp__sub_83A9CBE8) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a9cc20
	if (!cr6.eq) goto loc_83A9CC20;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,24628
	ctx.r4.s64 = ctx.r11.s64 + 24628;
loc_83A9CC0C:
	// li r5,-2
	ctx.r5.s64 = -2;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A9CC18;
	sub_831EA418(ctx, base);
loc_83A9CC18:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a9cc60
	goto loc_83A9CC60;
loc_83A9CC20:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83a9cc34
	if (!cr6.eq) goto loc_83A9CC34;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,24612
	ctx.r4.s64 = ctx.r11.s64 + 24612;
	// b 0x83a9cc0c
	goto loc_83A9CC0C;
loc_83A9CC34:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r3,176(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// bl 0x83ac1400
	ctx.lr = 0x83A9CC44;
	sub_83AC1400(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x83a9cc18
	if (cr6.eq) goto loc_83A9CC18;
	// clrlwi r3,r11,17
	ctx.r3.u64 = ctx.r11.u32 & 0x7FFF;
	// bl 0x83a8f670
	ctx.lr = 0x83A9CC58;
	sub_83A8F670(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_83A9CC60:
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

__attribute__((alias("__imp__sub_83A9CC74"))) PPC_WEAK_FUNC(sub_83A9CC74);
PPC_FUNC_IMPL(__imp__sub_83A9CC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A9CC78"))) PPC_WEAK_FUNC(sub_83A9CC78);
PPC_FUNC_IMPL(__imp__sub_83A9CC78) {
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
	// bl 0x83a82480
	ctx.lr = 0x83A9CC98;
	sub_83A82480(ctx, base);
	// stw r30,1000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1000, ctx.r30.u32);
	// bl 0x83a824c0
	ctx.lr = 0x83A9CCA0;
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

__attribute__((alias("__imp__sub_83A9CCB8"))) PPC_WEAK_FUNC(sub_83A9CCB8);
PPC_FUNC_IMPL(__imp__sub_83A9CCB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,1004(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1004);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,1008(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1008);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83A9CCD0"))) PPC_WEAK_FUNC(sub_83A9CCD0);
PPC_FUNC_IMPL(__imp__sub_83A9CCD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A9CCD4"))) PPC_WEAK_FUNC(sub_83A9CCD4);
PPC_FUNC_IMPL(__imp__sub_83A9CCD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A9CCD8"))) PPC_WEAK_FUNC(sub_83A9CCD8);
PPC_FUNC_IMPL(__imp__sub_83A9CCD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1000(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1000);
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A9CCE4"))) PPC_WEAK_FUNC(sub_83A9CCE4);
PPC_FUNC_IMPL(__imp__sub_83A9CCE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A9CCE8"))) PPC_WEAK_FUNC(sub_83A9CCE8);
PPC_FUNC_IMPL(__imp__sub_83A9CCE8) {
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
	// bl 0x83aa3d20
	ctx.lr = 0x83A9CD00;
	sub_83AA3D20(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83a9cd0c
	if (cr0.eq) goto loc_83A9CD0C;
	// stw r31,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r31.u32);
loc_83A9CD0C:
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

__attribute__((alias("__imp__sub_83A9CD20"))) PPC_WEAK_FUNC(sub_83A9CD20);
PPC_FUNC_IMPL(__imp__sub_83A9CD20) {
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
	// bl 0x83aa3d20
	ctx.lr = 0x83A9CD30;
	sub_83AA3D20(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83a9cd40
	if (!cr0.eq) goto loc_83A9CD40;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83a9cd44
	goto loc_83A9CD44;
loc_83A9CD40:
	// bl 0x83aa60f8
	ctx.lr = 0x83A9CD44;
	sub_83AA60F8(ctx, base);
loc_83A9CD44:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A9CD54"))) PPC_WEAK_FUNC(sub_83A9CD54);
PPC_FUNC_IMPL(__imp__sub_83A9CD54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A9CD58"))) PPC_WEAK_FUNC(sub_83A9CD58);
PPC_FUNC_IMPL(__imp__sub_83A9CD58) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83a9cd94
	if (!cr6.eq) goto loc_83A9CD94;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,24732
	ctx.r4.s64 = ctx.r11.s64 + 24732;
loc_83A9CD84:
	// li r5,-2
	ctx.r5.s64 = -2;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A9CD90;
	sub_831EA418(ctx, base);
	// b 0x83a9cde8
	goto loc_83A9CDE8;
loc_83A9CD94:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a9cda8
	if (!cr6.eq) goto loc_83A9CDA8;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,24720
	ctx.r4.s64 = ctx.r11.s64 + 24720;
	// b 0x83a9cd84
	goto loc_83A9CD84;
loc_83A9CDA8:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83a9cdbc
	if (!cr6.eq) goto loc_83A9CDBC;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,24708
	ctx.r4.s64 = ctx.r11.s64 + 24708;
	// b 0x83a9cd84
	goto loc_83A9CD84;
loc_83A9CDBC:
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x83a8cc50
	ctx.lr = 0x83A9CDC8;
	sub_83A8CC50(ctx, base);
	// lhz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,65535
	cr6.compare<uint32_t>(ctx.r4.u32, 65535, xer);
	// beq cr6,0x83a9cde8
	if (cr6.eq) goto loc_83A9CDE8;
	// lhz r5,82(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// cmplwi cr6,r5,65535
	cr6.compare<uint32_t>(ctx.r5.u32, 65535, xer);
	// beq cr6,0x83a9cde8
	if (cr6.eq) goto loc_83A9CDE8;
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// bl 0x83ac1498
	ctx.lr = 0x83A9CDE8;
	sub_83AC1498(ctx, base);
loc_83A9CDE8:
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

__attribute__((alias("__imp__sub_83A9CDFC"))) PPC_WEAK_FUNC(sub_83A9CDFC);
PPC_FUNC_IMPL(__imp__sub_83A9CDFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A9CE00"))) PPC_WEAK_FUNC(sub_83A9CE00);
PPC_FUNC_IMPL(__imp__sub_83A9CE00) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a9ce2c
	if (!cr6.eq) goto loc_83A9CE2C;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,24744
	ctx.r4.s64 = ctx.r11.s64 + 24744;
	// bl 0x831ea418
	ctx.lr = 0x83A9CE24;
	sub_831EA418(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a9ce30
	goto loc_83A9CE30;
loc_83A9CE2C:
	// lwz r3,1012(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1012);
loc_83A9CE30:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A9CE40"))) PPC_WEAK_FUNC(sub_83A9CE40);
PPC_FUNC_IMPL(__imp__sub_83A9CE40) {
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
	// bl 0x83aa3d20
	ctx.lr = 0x83A9CE50;
	sub_83AA3D20(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83a9ce60
	if (cr0.eq) goto loc_83A9CE60;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,126(r3)
	PPC_STORE_U8(ctx.r3.u32 + 126, ctx.r11.u8);
loc_83A9CE60:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A9CE70"))) PPC_WEAK_FUNC(sub_83A9CE70);
PPC_FUNC_IMPL(__imp__sub_83A9CE70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A9CE78;
	__savegprlr_29(ctx, base);
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83a9ce9c
	if (!cr6.eq) goto loc_83A9CE9C;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x83a95f30
	ctx.lr = 0x83A9CE98;
	sub_83A95F30(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_83A9CE9C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a966a8
	ctx.lr = 0x83A9CEA8;
	sub_83A966A8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a9cec8
	if (!cr0.eq) goto loc_83A9CEC8;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,24792
	ctx.r4.s64 = ctx.r11.s64 + 24792;
	// bl 0x831ea400
	ctx.lr = 0x83A9CEC0;
	sub_831EA400(ctx, base);
loc_83A9CEC0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a9cf44
	goto loc_83A9CF44;
loc_83A9CEC8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a9b6b0
	ctx.lr = 0x83A9CED0;
	sub_83A9B6B0(ctx, base);
	// lis r10,-32203
	ctx.r10.s64 = -2110455808;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r10,-22544
	ctx.r10.s64 = ctx.r10.s64 + -22544;
	// sth r11,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r11.u16);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825832e8
	ctx.lr = 0x83A9CEFC;
	sub_825832E8(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,140(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// lwz r4,136(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// bl 0x83abe510
	ctx.lr = 0x83A9CF14;
	sub_83ABE510(ctx, base);
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83a9cf30
	if (!cr0.eq) goto loc_83A9CF30;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,24756
	ctx.r4.s64 = ctx.r11.s64 + 24756;
	// bl 0x831ea3f0
	ctx.lr = 0x83A9CF2C;
	sub_831EA3F0(ctx, base);
	// b 0x83a9cec0
	goto loc_83A9CEC0;
loc_83A9CF30:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// stw r29,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r29.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
loc_83A9CF44:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A9CF4C"))) PPC_WEAK_FUNC(sub_83A9CF4C);
PPC_FUNC_IMPL(__imp__sub_83A9CF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A9CF50"))) PPC_WEAK_FUNC(sub_83A9CF50);
PPC_FUNC_IMPL(__imp__sub_83A9CF50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x83A9CF58;
	__savegprlr_22(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a9d1f4
	if (cr6.eq) goto loc_83A9D1F4;
	// lhz r11,50(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 50);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x83a9d1f4
	if (cr6.eq) goto loc_83A9D1F4;
	// bl 0x83a9b998
	ctx.lr = 0x83A9CF8C;
	sub_83A9B998(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r22,2
	ctx.r22.s64 = 2;
	// lwz r3,176(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 176);
	// subfic r11,r28,0
	xer.ca = ctx.r28.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r28.s64;
	// li r4,2
	ctx.r4.s64 = 2;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r24,r11,r22
	ctx.r24.u64 = ctx.r11.u64 & ctx.r22.u64;
	// bl 0x83aa3a58
	ctx.lr = 0x83A9CFAC;
	sub_83AA3A58(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq 0x83a9d204
	if (cr0.eq) goto loc_83A9D204;
	// stw r24,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r24.u32);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// stw r29,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r29.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// lwz r11,92(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	// stw r31,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r31.u32);
	// beq cr6,0x83a9cffc
	if (cr6.eq) goto loc_83A9CFFC;
	// bl 0x83ab6c80
	ctx.lr = 0x83A9CFE8;
	sub_83AB6C80(ctx, base);
	// mr. r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r25.s32, 0, xer);
	// bne 0x83a9cffc
	if (!cr0.eq) goto loc_83A9CFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83aa4748
	ctx.lr = 0x83A9CFF8;
	sub_83AA4748(ctx, base);
	// b 0x83a9d204
	goto loc_83A9D204;
loc_83A9CFFC:
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// lwz r5,44(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// lhz r4,52(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 52);
	// lhz r3,50(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 50);
	// bl 0x83ac09b0
	ctx.lr = 0x83A9D024;
	sub_83AC09B0(ctx, base);
	// li r23,1
	ctx.r23.s64 = 1;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x83a9d050
	if (cr6.eq) goto loc_83A9D050;
	// stw r23,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r23.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83aa3ce8
	ctx.lr = 0x83A9D03C;
	sub_83AA3CE8(ctx, base);
	// stw r3,12(r25)
	PPC_STORE_U32(ctx.r25.u32 + 12, ctx.r3.u32);
	// stw r3,16(r25)
	PPC_STORE_U32(ctx.r25.u32 + 16, ctx.r3.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r3,108(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 108);
	// bl 0x83ab6d20
	ctx.lr = 0x83A9D050;
	sub_83AB6D20(ctx, base);
loc_83A9D050:
	// lwz r11,92(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	// stw r27,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r27.u32);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r10,168(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r10,r31,24
	ctx.r10.s64 = ctx.r31.s64 + 24;
	// bne cr6,0x83a9d074
	if (!cr6.eq) goto loc_83A9D074;
	// stw r10,164(r11)
	PPC_STORE_U32(ctx.r11.u32 + 164, ctx.r10.u32);
	// b 0x83a9d080
	goto loc_83A9D080;
loc_83A9D074:
	// stw r27,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r27.u32);
	// lwz r11,168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_83A9D080:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 168, ctx.r10.u32);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r10,172(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 172, ctx.r10.u32);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r23,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r23.u32);
	// bl 0x83aa3ce8
	ctx.lr = 0x83A9D0A8;
	sub_83AA3CE8(ctx, base);
	// stw r27,936(r29)
	PPC_STORE_U32(ctx.r29.u32 + 936, ctx.r27.u32);
	// stw r3,940(r29)
	PPC_STORE_U32(ctx.r29.u32 + 940, ctx.r3.u32);
	// lbz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 120);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x83a9d130
	if (!cr6.eq) goto loc_83A9D130;
	// lwz r11,952(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 952);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a9d0dc
	if (!cr6.eq) goto loc_83A9D0DC;
	// bl 0x83ab5f18
	ctx.lr = 0x83A9D0CC;
	sub_83AB5F18(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83a9d0dc
	if (cr0.eq) goto loc_83A9D0DC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83ab66c0
	ctx.lr = 0x83A9D0DC;
	sub_83AB66C0(ctx, base);
loc_83A9D0DC:
	// lwz r11,948(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 948);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a9d130
	if (cr6.eq) goto loc_83A9D130;
	// lwz r11,952(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 952);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a9d130
	if (cr6.eq) goto loc_83A9D130;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// li r4,0
	ctx.r4.s64 = 0;
	// oris r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 65536;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// lwz r3,948(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 948);
	// bl 0x83ab5e40
	ctx.lr = 0x83A9D10C;
	sub_83AB5E40(ctx, base);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// bne cr6,0x83a9d12c
	if (!cr6.eq) goto loc_83A9D12C;
	// lwz r11,952(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 952);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,940(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 940);
	// lwz r4,956(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 956);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A9D12C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83A9D12C:
	// stb r23,121(r31)
	PPC_STORE_U8(ctx.r31.u32 + 121, ctx.r23.u8);
loc_83A9D130:
	// lwz r3,176(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 176);
	// bl 0x82624b10
	ctx.lr = 0x83A9D138;
	sub_82624B10(ctx, base);
	// mr. r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r25.s32, 0, xer);
	// ble 0x83a9d204
	if (!cr0.gt) goto loc_83A9D204;
	// rlwinm r26,r24,0,30,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x2;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_83A9D148:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,176(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 176);
	// bl 0x83ac1318
	ctx.lr = 0x83A9D154;
	sub_83AC1318(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// bne cr6,0x83a9d178
	if (!cr6.eq) goto loc_83A9D178;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x83a87538
	ctx.lr = 0x83A9D178;
	sub_83A87538(ctx, base);
loc_83A9D178:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// sthx r30,r28,r11
	PPC_STORE_U16(ctx.r28.u32 + ctx.r11.u32, ctx.r30.u16);
	// bne cr6,0x83a9d1dc
	if (!cr6.eq) goto loc_83A9D1DC;
	// lwz r30,1012(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1012);
	// stb r23,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r23.u8);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83a9d1c0
	if (cr6.eq) goto loc_83A9D1C0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83815cb0
	ctx.lr = 0x83A9D1A0;
	sub_83815CB0(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83a9d1c4
	if (cr0.eq) goto loc_83A9D1C4;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lhzx r4,r28,r11
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r28.u32 + ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83ab7c08
	ctx.lr = 0x83A9D1BC;
	sub_83AB7C08(ctx, base);
	// b 0x83a9d1d0
	goto loc_83A9D1D0;
loc_83A9D1C0:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
loc_83A9D1C4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lhzx r3,r28,r11
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r28.u32 + ctx.r11.u32);
	// bl 0x83a89ad0
	ctx.lr = 0x83A9D1D0;
	sub_83A89AD0(ctx, base);
loc_83A9D1D0:
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a9d204
	if (cr0.eq) goto loc_83A9D204;
	// b 0x83a9d1e0
	goto loc_83A9D1E0;
loc_83A9D1DC:
	// stb r22,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r22.u8);
loc_83A9D1E0:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// cmpw cr6,r27,r25
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r25.s32, xer);
	// blt cr6,0x83a9d148
	if (cr6.lt) goto loc_83A9D148;
	// b 0x83a9d204
	goto loc_83A9D204;
loc_83A9D1F4:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,24860
	ctx.r4.s64 = ctx.r11.s64 + 24860;
	// bl 0x831ea3f0
	ctx.lr = 0x83A9D204;
	sub_831EA3F0(ctx, base);
loc_83A9D204:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A9D20C"))) PPC_WEAK_FUNC(sub_83A9D20C);
PPC_FUNC_IMPL(__imp__sub_83A9D20C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A9D210"))) PPC_WEAK_FUNC(sub_83A9D210);
PPC_FUNC_IMPL(__imp__sub_83A9D210) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83A9D218;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// li r30,-1
	ctx.r30.s64 = -1;
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x83a9d23c
	if (cr0.eq) goto loc_83A9D23C;
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
loc_83A9D23C:
	// lwz r10,60(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 60);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r29,16(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r31,92(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// beq cr6,0x83a9d260
	if (cr6.eq) goto loc_83A9D260;
	// lbz r10,109(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 109);
	// lwz r27,100(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// extsb r25,r10
	ctx.r25.s64 = ctx.r10.s8;
	// b 0x83a9d268
	goto loc_83A9D268;
loc_83A9D260:
	// li r27,-1
	ctx.r27.s64 = -1;
	// li r25,0
	ctx.r25.s64 = 0;
loc_83A9D268:
	// lbz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 8);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x83a9d2a8
	if (cr6.lt) goto loc_83A9D2A8;
	// beq cr6,0x83a9d29c
	if (cr6.eq) goto loc_83A9D29C;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x83a9d2d4
	if (!cr6.lt) goto loc_83A9D2D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r7,38(r29)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r29.u32 + 38);
	// lwz r6,32(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// lhz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// lwz r4,28(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// bl 0x83acd778
	ctx.lr = 0x83A9D298;
	sub_83ACD778(ctx, base);
	// b 0x83a9d2b8
	goto loc_83A9D2B8;
loc_83A9D29C:
	// lhz r5,38(r29)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r29.u32 + 38);
	// lwz r4,32(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// b 0x83a9d2b0
	goto loc_83A9D2B0;
loc_83A9D2A8:
	// lhz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// lwz r4,28(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
loc_83A9D2B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83acd708
	ctx.lr = 0x83A9D2B8;
	sub_83ACD708(ctx, base);
loc_83A9D2B8:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83a9d2d4
	if (cr6.lt) goto loc_83A9D2D4;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lbz r5,3(r28)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r28.u32 + 3);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83acdab0
	ctx.lr = 0x83A9D2D4;
	sub_83ACDAB0(ctx, base);
loc_83A9D2D4:
	// cmpwi cr6,r27,-1
	cr6.compare<int32_t>(ctx.r27.s32, -1, xer);
	// beq cr6,0x83a9d2e4
	if (cr6.eq) goto loc_83A9D2E4;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// b 0x83a9d2f0
	goto loc_83A9D2F0;
loc_83A9D2E4:
	// lhz r5,6(r28)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r28.u32 + 6);
	// cmplwi cr6,r5,65535
	cr6.compare<uint32_t>(ctx.r5.u32, 65535, xer);
	// beq cr6,0x83a9d2fc
	if (cr6.eq) goto loc_83A9D2FC;
loc_83A9D2F0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83acda20
	ctx.lr = 0x83A9D2FC;
	sub_83ACDA20(ctx, base);
loc_83A9D2FC:
	// lbz r5,124(r26)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r26.u32 + 124);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r5,2
	cr6.compare<uint32_t>(ctx.r5.u32, 2, xer);
	// blt cr6,0x83a9d314
	if (cr6.lt) goto loc_83A9D314;
	// lbz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
loc_83A9D314:
	// bl 0x83acda68
	ctx.lr = 0x83A9D318;
	sub_83ACDA68(ctx, base);
	// lbz r11,46(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 46);
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(ctx.r11.u32, 128, xer);
	// bge cr6,0x83a9d32c
	if (!cr6.lt) goto loc_83A9D32C;
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// stb r11,46(r31)
	PPC_STORE_U8(ctx.r31.u32 + 46, ctx.r11.u8);
loc_83A9D32C:
	// lwz r5,24(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83a9d344
	if (cr6.eq) goto loc_83A9D344;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83acdaf8
	ctx.lr = 0x83A9D344;
	sub_83ACDAF8(ctx, base);
loc_83A9D344:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r10,r10,23160
	ctx.r10.s64 = ctx.r10.s64 + 23160;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x83acd8a0
	ctx.lr = 0x83A9D364;
	sub_83ACD8A0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lbz r5,9(r29)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r29.u32 + 9);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83acd8e8
	ctx.lr = 0x83A9D374;
	sub_83ACD8E8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r5,2(r29)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r29.u32 + 2);
	// bl 0x83acd938
	ctx.lr = 0x83A9D384;
	sub_83ACD938(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,32(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// beq cr6,0x83a9d3a4
	if (cr6.eq) goto loc_83A9D3A4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83acd988
	ctx.lr = 0x83A9D3A4;
	sub_83ACD988(ctx, base);
loc_83A9D3A4:
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// bne cr6,0x83a9d3bc
	if (!cr6.eq) goto loc_83A9D3BC;
	// lwz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
loc_83A9D3BC:
	// bl 0x83acd9d0
	ctx.lr = 0x83A9D3C0;
	sub_83ACD9D0(ctx, base);
	// stw r31,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A9D3D0"))) PPC_WEAK_FUNC(sub_83A9D3D0);
PPC_FUNC_IMPL(__imp__sub_83A9D3D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83A9D3D8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x83a9d3f8
	if (cr0.eq) goto loc_83A9D3F8;
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
loc_83A9D3F8:
	// lwz r10,60(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 60);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r30,92(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// beq cr6,0x83a9d410
	if (cr6.eq) goto loc_83A9D410;
	// lwz r29,100(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// b 0x83a9d414
	goto loc_83A9D414;
loc_83A9D410:
	// li r29,-1
	ctx.r29.s64 = -1;
loc_83A9D414:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r4,36(r28)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r28.u32 + 36);
	// bl 0x83acd7e0
	ctx.lr = 0x83A9D420;
	sub_83ACD7E0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt 0x83a9d438
	if (cr0.lt) goto loc_83A9D438;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lbz r5,3(r28)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r28.u32 + 3);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83acdab0
	ctx.lr = 0x83A9D438;
	sub_83ACDAB0(ctx, base);
loc_83A9D438:
	// cmpwi cr6,r29,-1
	cr6.compare<int32_t>(ctx.r29.s32, -1, xer);
	// beq cr6,0x83a9d448
	if (cr6.eq) goto loc_83A9D448;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// b 0x83a9d454
	goto loc_83A9D454;
loc_83A9D448:
	// lhz r5,6(r28)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r28.u32 + 6);
	// cmplwi cr6,r5,65535
	cr6.compare<uint32_t>(ctx.r5.u32, 65535, xer);
	// beq cr6,0x83a9d460
	if (cr6.eq) goto loc_83A9D460;
loc_83A9D454:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83acda20
	ctx.lr = 0x83A9D460;
	sub_83ACDA20(ctx, base);
loc_83A9D460:
	// lbz r5,124(r27)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r27.u32 + 124);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r5,2
	cr6.compare<uint32_t>(ctx.r5.u32, 2, xer);
	// blt cr6,0x83a9d478
	if (cr6.lt) goto loc_83A9D478;
	// lbz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
loc_83A9D478:
	// bl 0x83acda68
	ctx.lr = 0x83A9D47C;
	sub_83ACDA68(ctx, base);
	// lwz r5,24(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83a9d494
	if (cr6.eq) goto loc_83A9D494;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83acdaf8
	ctx.lr = 0x83A9D494;
	sub_83ACDAF8(ctx, base);
loc_83A9D494:
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83acd8a0
	ctx.lr = 0x83A9D4A4;
	sub_83ACD8A0(ctx, base);
	// stw r30,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A9D4B4"))) PPC_WEAK_FUNC(sub_83A9D4B4);
PPC_FUNC_IMPL(__imp__sub_83A9D4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A9D4B8"))) PPC_WEAK_FUNC(sub_83A9D4B8);
PPC_FUNC_IMPL(__imp__sub_83A9D4B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A9D4C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,92(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// bl 0x83acdb40
	ctx.lr = 0x83A9D4D0;
	sub_83ACDB40(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// stb r28,156(r31)
	PPC_STORE_U8(ctx.r31.u32 + 156, ctx.r28.u8);
	// lwz r30,164(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// b 0x83a9d51c
	goto loc_83A9D51C;
loc_83A9D4E0:
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83aa44e0
	ctx.lr = 0x83A9D4EC;
	sub_83AA44E0(ctx, base);
	// lbz r11,121(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 121);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x83a9d508
	if (!cr0.eq) goto loc_83A9D508;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83aa4a78
	ctx.lr = 0x83A9D508;
	sub_83AA4A78(ctx, base);
loc_83A9D508:
	// lwz r3,108(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 108);
	// bl 0x83ab6eb8
	ctx.lr = 0x83A9D510;
	sub_83AB6EB8(ctx, base);
	// lwz r3,108(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 108);
	// bl 0x83ab6fe0
	ctx.lr = 0x83A9D518;
	sub_83AB6FE0(ctx, base);
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_83A9D51C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83a9d4e0
	if (!cr6.eq) goto loc_83A9D4E0;
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a9d570
	if (cr6.eq) goto loc_83A9D570;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,964(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 964);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A9D540;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r30,164(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// b 0x83a9d568
	goto loc_83A9D568;
loc_83A9D548:
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83aa44e0
	ctx.lr = 0x83A9D554;
	sub_83AA44E0(ctx, base);
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83aa3d78
	ctx.lr = 0x83A9D564;
	sub_83AA3D78(ctx, base);
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_83A9D568:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83a9d548
	if (!cr6.eq) goto loc_83A9D548;
loc_83A9D570:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x83a9d584
	if (!cr6.eq) goto loc_83A9D584;
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// stw r28,936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 936, ctx.r28.u32);
loc_83A9D584:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A9D58C"))) PPC_WEAK_FUNC(sub_83A9D58C);
PPC_FUNC_IMPL(__imp__sub_83A9D58C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A9D590"))) PPC_WEAK_FUNC(sub_83A9D590);
PPC_FUNC_IMPL(__imp__sub_83A9D590) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A9D598;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,92(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stb r30,156(r31)
	PPC_STORE_U8(ctx.r31.u32 + 156, ctx.r30.u8);
	// bl 0x83acdd70
	ctx.lr = 0x83A9D5B4;
	sub_83ACDD70(ctx, base);
	// b 0x83a9d5d0
	goto loc_83A9D5D0;
loc_83A9D5B8:
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83aa3dc0
	ctx.lr = 0x83A9D5C8;
	sub_83AA3DC0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83aa4748
	ctx.lr = 0x83A9D5D0;
	sub_83AA4748(ctx, base);
loc_83A9D5D0:
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a9d608
	if (cr6.eq) goto loc_83A9D608;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r10,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r10.u32);
	// bne cr6,0x83a9d5f0
	if (!cr6.eq) goto loc_83A9D5F0;
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
loc_83A9D5F0:
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r10,172(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// bne cr6,0x83a9d5b8
	if (!cr6.eq) goto loc_83A9D5B8;
loc_83A9D608:
	// lwz r11,948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 948);
	// stw r30,936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 936, ctx.r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a9d680
	if (cr6.eq) goto loc_83A9D680;
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a9d680
	if (cr6.eq) goto loc_83A9D680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,964(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 964);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A9D634;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,964(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 964);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A9D648;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,948(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 948);
	// lwz r11,168(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a9d680
	if (!cr6.eq) goto loc_83A9D680;
	// bl 0x83ab5fb8
	ctx.lr = 0x83A9D65C;
	sub_83AB5FB8(ctx, base);
	// bl 0x83a82480
	ctx.lr = 0x83A9D660;
	sub_83A82480(ctx, base);
	// stw r30,964(r31)
	PPC_STORE_U32(ctx.r31.u32 + 964, ctx.r30.u32);
	// stw r30,960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 960, ctx.r30.u32);
	// bl 0x83a824c0
	ctx.lr = 0x83A9D66C;
	sub_83A824C0(ctx, base);
	// bl 0x83a82480
	ctx.lr = 0x83A9D670;
	sub_83A82480(ctx, base);
	// stw r30,956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 956, ctx.r30.u32);
	// stw r30,952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 952, ctx.r30.u32);
	// bl 0x83a824c0
	ctx.lr = 0x83A9D67C;
	sub_83A824C0(ctx, base);
	// stw r30,948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 948, ctx.r30.u32);
loc_83A9D680:
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A9D68C"))) PPC_WEAK_FUNC(sub_83A9D68C);
PPC_FUNC_IMPL(__imp__sub_83A9D68C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A9D690"))) PPC_WEAK_FUNC(sub_83A9D690);
PPC_FUNC_IMPL(__imp__sub_83A9D690) {
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
	// bl 0x83a82480
	ctx.lr = 0x83A9D6AC;
	sub_83A82480(ctx, base);
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r11,27804(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27804);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// beq cr6,0x83a9d700
	if (cr6.eq) goto loc_83A9D700;
loc_83A9D6C0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83a9d6e4
	if (cr6.eq) goto loc_83A9D6E4;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x83a9d6e4
	if (cr6.eq) goto loc_83A9D6E4;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x83a9d6e8
	if (!cr6.eq) goto loc_83A9D6E8;
loc_83A9D6E4:
	// lwz r11,124(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
loc_83A9D6E8:
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bne cr6,0x83a9d6f4
	if (!cr6.eq) goto loc_83A9D6F4;
	// bl 0x83a9b6b0
	ctx.lr = 0x83A9D6F4;
	sub_83A9B6B0(ctx, base);
loc_83A9D6F4:
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83a9d6c0
	if (!cr6.eq) goto loc_83A9D6C0;
loc_83A9D700:
	// bl 0x83a824c0
	ctx.lr = 0x83A9D704;
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

__attribute__((alias("__imp__sub_83A9D71C"))) PPC_WEAK_FUNC(sub_83A9D71C);
PPC_FUNC_IMPL(__imp__sub_83A9D71C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A9D720"))) PPC_WEAK_FUNC(sub_83A9D720);
PPC_FUNC_IMPL(__imp__sub_83A9D720) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x83a82480
	ctx.lr = 0x83A9D740;
	sub_83A82480(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83aa3d20
	ctx.lr = 0x83A9D748;
	sub_83AA3D20(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83a9d75c
	if (cr0.eq) goto loc_83A9D75C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83aa4a78
	ctx.lr = 0x83A9D75C;
	sub_83AA4A78(ctx, base);
loc_83A9D75C:
	// bl 0x83a824c0
	ctx.lr = 0x83A9D760;
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

__attribute__((alias("__imp__sub_83A9D778"))) PPC_WEAK_FUNC(sub_83A9D778);
PPC_FUNC_IMPL(__imp__sub_83A9D778) {
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
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// blt cr6,0x83a9d7b8
	if (cr6.lt) goto loc_83A9D7B8;
	// beq cr6,0x83a9d7b0
	if (cr6.eq) goto loc_83A9D7B0;
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// blt cr6,0x83a9d7a8
	if (cr6.lt) goto loc_83A9D7A8;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x83a9d7c0
	goto loc_83A9D7C0;
loc_83A9D7A8:
	// li r30,2
	ctx.r30.s64 = 2;
	// b 0x83a9d7c0
	goto loc_83A9D7C0;
loc_83A9D7B0:
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x83a9d7c0
	goto loc_83A9D7C0;
loc_83A9D7B8:
	// lis r30,0
	ctx.r30.s64 = 0;
	// ori r30,r30,65535
	ctx.r30.u64 = ctx.r30.u64 | 65535;
loc_83A9D7C0:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x83a9d7d0
	if (cr0.eq) goto loc_83A9D7D0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,157(r3)
	PPC_STORE_U8(ctx.r3.u32 + 157, ctx.r11.u8);
loc_83A9D7D0:
	// lwz r31,164(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// b 0x83a9d7ec
	goto loc_83A9D7EC;
loc_83A9D7D8:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83a9ba58
	ctx.lr = 0x83A9D7E8;
	sub_83A9BA58(ctx, base);
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_83A9D7EC:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83a9d7d8
	if (!cr6.eq) goto loc_83A9D7D8;
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

__attribute__((alias("__imp__sub_83A9D80C"))) PPC_WEAK_FUNC(sub_83A9D80C);
PPC_FUNC_IMPL(__imp__sub_83A9D80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A9D810"))) PPC_WEAK_FUNC(sub_83A9D810);
PPC_FUNC_IMPL(__imp__sub_83A9D810) {
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
	// bl 0x83a82480
	ctx.lr = 0x83A9D830;
	sub_83A82480(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a9bb80
	ctx.lr = 0x83A9D83C;
	sub_83A9BB80(ctx, base);
	// bl 0x83a824c0
	ctx.lr = 0x83A9D840;
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

__attribute__((alias("__imp__sub_83A9D858"))) PPC_WEAK_FUNC(sub_83A9D858);
PPC_FUNC_IMPL(__imp__sub_83A9D858) {
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
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a9d894
	if (!cr6.eq) goto loc_83A9D894;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a9d88c
	if (cr6.eq) goto loc_83A9D88C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a9d894
	if (!cr6.eq) goto loc_83A9D894;
loc_83A9D88C:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x83a9d8c8
	goto loc_83A9D8C8;
loc_83A9D894:
	// lwz r10,60(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,92(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// bl 0x83ace0b8
	ctx.lr = 0x83A9D8A4;
	sub_83ACE0B8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83a9d8c4
	if (cr6.eq) goto loc_83A9D8C4;
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 2;
	// b 0x83a9d8c8
	goto loc_83A9D8C8;
loc_83A9D8C4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83A9D8C8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A9D8D8"))) PPC_WEAK_FUNC(sub_83A9D8D8);
PPC_FUNC_IMPL(__imp__sub_83A9D8D8) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a9d90c
	if (!cr6.eq) goto loc_83A9D90C;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,24912
	ctx.r4.s64 = ctx.r11.s64 + 24912;
	// bl 0x831ea418
	ctx.lr = 0x83A9D904;
	sub_831EA418(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83a9d91c
	goto loc_83A9D91C;
loc_83A9D90C:
	// bl 0x83a82480
	ctx.lr = 0x83A9D910;
	sub_83A82480(ctx, base);
	// lwz r31,172(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// bl 0x83a824c0
	ctx.lr = 0x83A9D918;
	sub_83A824C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83A9D91C:
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

__attribute__((alias("__imp__sub_83A9D930"))) PPC_WEAK_FUNC(sub_83A9D930);
PPC_FUNC_IMPL(__imp__sub_83A9D930) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A9D938;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,-1
	ctx.r29.s64 = -1;
	// bl 0x83aa6020
	ctx.lr = 0x83A9D950;
	sub_83AA6020(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x83a9d9b0
	if (!cr0.lt) goto loc_83A9D9B0;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a9d974
	if (!cr6.eq) goto loc_83A9D974;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83a9d98c
	if (!cr6.eq) goto loc_83A9D98C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83a9d9b0
	goto loc_83A9D9B0;
loc_83A9D974:
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,92(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// bl 0x83acdb50
	ctx.lr = 0x83A9D984;
	sub_83ACDB50(ctx, base);
	// extsw r29,r3
	ctx.r29.s64 = ctx.r3.s32;
	// b 0x83a9d9a4
	goto loc_83A9D9A4;
loc_83A9D98C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83a9d930
	ctx.lr = 0x83A9D994;
	sub_83A9D930(ctx, base);
	// cmpw cr6,r29,r3
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r3.s32, xer);
	// bge cr6,0x83a9d9a0
	if (!cr6.lt) goto loc_83A9D9A0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_83A9D9A0:
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_83A9D9A4:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83a9d98c
	if (!cr6.eq) goto loc_83A9D98C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_83A9D9B0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A9D9B8"))) PPC_WEAK_FUNC(sub_83A9D9B8);
PPC_FUNC_IMPL(__imp__sub_83A9D9B8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83a9d9f8
	if (!cr6.eq) goto loc_83A9D9F8;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,24924
	ctx.r4.s64 = ctx.r11.s64 + 24924;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A9D9F0;
	sub_831EA418(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a9da3c
	goto loc_83A9DA3C;
loc_83A9D9F8:
	// bl 0x83a82480
	ctx.lr = 0x83A9D9FC;
	sub_83A82480(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83aa3d20
	ctx.lr = 0x83A9DA04;
	sub_83AA3D20(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83a9da18
	if (!cr0.eq) goto loc_83A9DA18;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x83a9da34
	goto loc_83A9DA34;
loc_83A9DA18:
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_83A9DA34:
	// bl 0x83a824c0
	ctx.lr = 0x83A9DA38;
	sub_83A824C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_83A9DA3C:
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

__attribute__((alias("__imp__sub_83A9DA54"))) PPC_WEAK_FUNC(sub_83A9DA54);
PPC_FUNC_IMPL(__imp__sub_83A9DA54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A9DA58"))) PPC_WEAK_FUNC(sub_83A9DA58);
PPC_FUNC_IMPL(__imp__sub_83A9DA58) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a9da90
	if (!cr6.eq) goto loc_83A9DA90;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,24948
	ctx.r4.s64 = ctx.r11.s64 + 24948;
loc_83A9DA80:
	// li r5,-2
	ctx.r5.s64 = -2;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A9DA8C;
	sub_831EA418(ctx, base);
	// b 0x83a9db68
	goto loc_83A9DB68;
loc_83A9DA90:
	// cmplwi cr6,r4,7
	cr6.compare<uint32_t>(ctx.r4.u32, 7, xer);
	// bgt cr6,0x83a9daf4
	if (cr6.gt) goto loc_83A9DAF4;
	// beq cr6,0x83a9daec
	if (cr6.eq) goto loc_83A9DAEC;
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// beq cr6,0x83a9dae4
	if (cr6.eq) goto loc_83A9DAE4;
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// beq cr6,0x83a9dadc
	if (cr6.eq) goto loc_83A9DADC;
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// beq cr6,0x83a9dad4
	if (cr6.eq) goto loc_83A9DAD4;
	// cmplwi cr6,r4,5
	cr6.compare<uint32_t>(ctx.r4.u32, 5, xer);
	// beq cr6,0x83a9dacc
	if (cr6.eq) goto loc_83A9DACC;
	// cmplwi cr6,r4,6
	cr6.compare<uint32_t>(ctx.r4.u32, 6, xer);
	// bne cr6,0x83a9db18
	if (!cr6.eq) goto loc_83A9DB18;
	// li r31,64
	ctx.r31.s64 = 64;
	// b 0x83a9db40
	goto loc_83A9DB40;
loc_83A9DACC:
	// li r31,32
	ctx.r31.s64 = 32;
	// b 0x83a9db40
	goto loc_83A9DB40;
loc_83A9DAD4:
	// li r31,8
	ctx.r31.s64 = 8;
	// b 0x83a9db40
	goto loc_83A9DB40;
loc_83A9DADC:
	// li r31,4
	ctx.r31.s64 = 4;
	// b 0x83a9db40
	goto loc_83A9DB40;
loc_83A9DAE4:
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x83a9db40
	goto loc_83A9DB40;
loc_83A9DAEC:
	// li r31,128
	ctx.r31.s64 = 128;
	// b 0x83a9db40
	goto loc_83A9DB40;
loc_83A9DAF4:
	// cmplwi cr6,r4,8
	cr6.compare<uint32_t>(ctx.r4.u32, 8, xer);
	// beq cr6,0x83a9db3c
	if (cr6.eq) goto loc_83A9DB3C;
	// cmplwi cr6,r4,9
	cr6.compare<uint32_t>(ctx.r4.u32, 9, xer);
	// beq cr6,0x83a9db34
	if (cr6.eq) goto loc_83A9DB34;
	// addis r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -65536;
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x83a9db2c
	if (cr0.eq) goto loc_83A9DB2C;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x83a9db24
	if (cr6.eq) goto loc_83A9DB24;
loc_83A9DB18:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,24936
	ctx.r4.s64 = ctx.r11.s64 + 24936;
	// b 0x83a9da80
	goto loc_83A9DA80;
loc_83A9DB24:
	// lis r31,2
	ctx.r31.s64 = 131072;
	// b 0x83a9db40
	goto loc_83A9DB40;
loc_83A9DB2C:
	// lis r31,1
	ctx.r31.s64 = 65536;
	// b 0x83a9db40
	goto loc_83A9DB40;
loc_83A9DB34:
	// li r31,512
	ctx.r31.s64 = 512;
	// b 0x83a9db40
	goto loc_83A9DB40;
loc_83A9DB3C:
	// li r31,256
	ctx.r31.s64 = 256;
loc_83A9DB40:
	// lwz r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// stw r31,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r31.u32);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// blt cr6,0x83a9db68
	if (cr6.lt) goto loc_83A9DB68;
	// bl 0x83a82480
	ctx.lr = 0x83A9DB54;
	sub_83A82480(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,92(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// bl 0x83acd8a0
	ctx.lr = 0x83A9DB64;
	sub_83ACD8A0(ctx, base);
	// bl 0x83a824c0
	ctx.lr = 0x83A9DB68;
	sub_83A824C0(ctx, base);
loc_83A9DB68:
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

__attribute__((alias("__imp__sub_83A9DB80"))) PPC_WEAK_FUNC(sub_83A9DB80);
PPC_FUNC_IMPL(__imp__sub_83A9DB80) {
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
	// beq cr6,0x83a9dbe8
	if (cr6.eq) goto loc_83A9DBE8;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble cr6,0x83a9dbe8
	if (!cr6.gt) goto loc_83A9DBE8;
	// cmpwi cr6,r4,127
	cr6.compare<int32_t>(ctx.r4.s32, 127, xer);
	// bgt cr6,0x83a9dbe8
	if (cr6.gt) goto loc_83A9DBE8;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// lwz r10,120(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// rlwimi r11,r4,24,2,7
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 24) & 0x3F000000) | (ctx.r11.u64 & 0xFFFFFFFFC0FFFFFF);
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// blt cr6,0x83a9dbfc
	if (cr6.lt) goto loc_83A9DBFC;
	// bl 0x83a82480
	ctx.lr = 0x83A9DBD0;
	sub_83A82480(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// bl 0x83acd8e8
	ctx.lr = 0x83A9DBE0;
	sub_83ACD8E8(ctx, base);
	// bl 0x83a824c0
	ctx.lr = 0x83A9DBE4;
	sub_83A824C0(ctx, base);
	// b 0x83a9dbfc
	goto loc_83A9DBFC;
loc_83A9DBE8:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,24960
	ctx.r4.s64 = ctx.r11.s64 + 24960;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A9DBFC;
	sub_831EA418(ctx, base);
loc_83A9DBFC:
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

__attribute__((alias("__imp__sub_83A9DC14"))) PPC_WEAK_FUNC(sub_83A9DC14);
PPC_FUNC_IMPL(__imp__sub_83A9DC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A9DC18"))) PPC_WEAK_FUNC(sub_83A9DC18);
PPC_FUNC_IMPL(__imp__sub_83A9DC18) {
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
	// beq cr6,0x83a9dc78
	if (cr6.eq) goto loc_83A9DC78;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble cr6,0x83a9dc78
	if (!cr6.gt) goto loc_83A9DC78;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// lwz r10,120(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// rlwimi r11,r4,0,12,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0xFFFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFF00000);
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// blt cr6,0x83a9dc8c
	if (cr6.lt) goto loc_83A9DC8C;
	// bl 0x83a82480
	ctx.lr = 0x83A9DC60;
	sub_83A82480(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// bl 0x83acd938
	ctx.lr = 0x83A9DC70;
	sub_83ACD938(ctx, base);
	// bl 0x83a824c0
	ctx.lr = 0x83A9DC74;
	sub_83A824C0(ctx, base);
	// b 0x83a9dc8c
	goto loc_83A9DC8C;
loc_83A9DC78:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,24972
	ctx.r4.s64 = ctx.r11.s64 + 24972;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A9DC8C;
	sub_831EA418(ctx, base);
loc_83A9DC8C:
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

__attribute__((alias("__imp__sub_83A9DCA4"))) PPC_WEAK_FUNC(sub_83A9DCA4);
PPC_FUNC_IMPL(__imp__sub_83A9DCA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A9DCA8"))) PPC_WEAK_FUNC(sub_83A9DCA8);
PPC_FUNC_IMPL(__imp__sub_83A9DCA8) {
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
	// bne cr6,0x83a9dce0
	if (!cr6.eq) goto loc_83A9DCE0;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,24984
	ctx.r4.s64 = ctx.r11.s64 + 24984;
	// bl 0x831ea418
	ctx.lr = 0x83A9DCDC;
	sub_831EA418(ctx, base);
	// b 0x83a9dd08
	goto loc_83A9DD08;
loc_83A9DCE0:
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// blt cr6,0x83a9dd08
	if (cr6.lt) goto loc_83A9DD08;
	// bl 0x83a82480
	ctx.lr = 0x83A9DCF4;
	sub_83A82480(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// bl 0x83acda20
	ctx.lr = 0x83A9DD04;
	sub_83ACDA20(ctx, base);
	// bl 0x83a824c0
	ctx.lr = 0x83A9DD08;
	sub_83A824C0(ctx, base);
loc_83A9DD08:
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

__attribute__((alias("__imp__sub_83A9DD20"))) PPC_WEAK_FUNC(sub_83A9DD20);
PPC_FUNC_IMPL(__imp__sub_83A9DD20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a9dd38
	if (!cr6.eq) goto loc_83A9DD38;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,23624
	ctx.r4.s64 = ctx.r11.s64 + 23624;
	// b 0x831ea418
	sub_831EA418(ctx, base);
	return;
loc_83A9DD38:
	// lwz r3,176(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x83ac1018
	sub_83AC1018(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A9DD44"))) PPC_WEAK_FUNC(sub_83A9DD44);
PPC_FUNC_IMPL(__imp__sub_83A9DD44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A9DD48"))) PPC_WEAK_FUNC(sub_83A9DD48);
PPC_FUNC_IMPL(__imp__sub_83A9DD48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r10,r10,13
	ctx.r10.s64 = ctx.r10.s64 + 13;
	// clrlwi r4,r10,16
	ctx.r4.u64 = ctx.r10.u32 & 0xFFFF;
	// beq cr6,0x83a9dd90
	if (cr6.eq) goto loc_83A9DD90;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x83a9dd90
	if (cr6.lt) goto loc_83A9DD90;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// blt cr6,0x83a9dd90
	if (cr6.lt) goto loc_83A9DD90;
	// cmpwi cr6,r5,7
	cr6.compare<int32_t>(ctx.r5.s32, 7, xer);
	// bgt cr6,0x83a9dd90
	if (cr6.gt) goto loc_83A9DD90;
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplwi cr6,r11,76
	cr6.compare<uint32_t>(ctx.r11.u32, 76, xer);
	// bgt cr6,0x83a9dd90
	if (cr6.gt) goto loc_83A9DD90;
	// lwz r3,176(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// b 0x83ac1018
	sub_83AC1018(ctx, base);
	return;
loc_83A9DD90:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,23828
	ctx.r4.s64 = ctx.r11.s64 + 23828;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831ea418
	sub_831EA418(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A9DDA4"))) PPC_WEAK_FUNC(sub_83A9DDA4);
PPC_FUNC_IMPL(__imp__sub_83A9DDA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A9DDA8"))) PPC_WEAK_FUNC(sub_83A9DDA8);
PPC_FUNC_IMPL(__imp__sub_83A9DDA8) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a9ddc8
	if (!cr6.eq) goto loc_83A9DDC8;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,25020
	ctx.r4.s64 = ctx.r11.s64 + 25020;
	// b 0x83a9ddf4
	goto loc_83A9DDF4;
loc_83A9DDC8:
	// cmplwi cr6,r4,65535
	cr6.compare<uint32_t>(ctx.r4.u32, 65535, xer);
	// beq cr6,0x83a9ddec
	if (cr6.eq) goto loc_83A9DDEC;
	// cmplwi cr6,r4,1000
	cr6.compare<uint32_t>(ctx.r4.u32, 1000, xer);
	// bge cr6,0x83a9ddec
	if (!cr6.lt) goto loc_83A9DDEC;
	// addi r4,r4,1000
	ctx.r4.s64 = ctx.r4.s64 + 1000;
	// bl 0x83a9bf50
	ctx.lr = 0x83A9DDE0;
	sub_83A9BF50(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// b 0x83a9de08
	goto loc_83A9DE08;
loc_83A9DDEC:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,25008
	ctx.r4.s64 = ctx.r11.s64 + 25008;
loc_83A9DDF4:
	// li r5,-2
	ctx.r5.s64 = -2;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A9DE00;
	sub_831EA418(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f1,20056(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20056);
	ctx.f1.f64 = double(temp.f32);
loc_83A9DE08:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A9DE18"))) PPC_WEAK_FUNC(sub_83A9DE18);
PPC_FUNC_IMPL(__imp__sub_83A9DE18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A9DE20;
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a9de4c
	if (!cr6.eq) goto loc_83A9DE4C;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,25032
	ctx.r4.s64 = ctx.r11.s64 + 25032;
	// bl 0x831ea418
	ctx.lr = 0x83A9DE48;
	sub_831EA418(ctx, base);
	// b 0x83a9de7c
	goto loc_83A9DE7C;
loc_83A9DE4C:
	// bl 0x83a82480
	ctx.lr = 0x83A9DE50;
	sub_83A82480(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a9de70
	if (cr6.eq) goto loc_83A9DE70;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,24236
	ctx.r4.s64 = ctx.r11.s64 + 24236;
	// bl 0x831ea3f0
	ctx.lr = 0x83A9DE6C;
	sub_831EA3F0(ctx, base);
	// b 0x83a9de78
	goto loc_83A9DE78;
loc_83A9DE70:
	// stw r30,968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 968, ctx.r30.u32);
	// stw r29,972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 972, ctx.r29.u32);
loc_83A9DE78:
	// bl 0x83a824c0
	ctx.lr = 0x83A9DE7C;
	sub_83A824C0(ctx, base);
loc_83A9DE7C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A9DE84"))) PPC_WEAK_FUNC(sub_83A9DE84);
PPC_FUNC_IMPL(__imp__sub_83A9DE84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A9DE88"))) PPC_WEAK_FUNC(sub_83A9DE88);
PPC_FUNC_IMPL(__imp__sub_83A9DE88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A9DE90;
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a9debc
	if (!cr6.eq) goto loc_83A9DEBC;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,25044
	ctx.r4.s64 = ctx.r11.s64 + 25044;
	// bl 0x831ea418
	ctx.lr = 0x83A9DEB8;
	sub_831EA418(ctx, base);
	// b 0x83a9deec
	goto loc_83A9DEEC;
loc_83A9DEBC:
	// bl 0x83a82480
	ctx.lr = 0x83A9DEC0;
	sub_83A82480(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a9dee0
	if (cr6.eq) goto loc_83A9DEE0;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,24300
	ctx.r4.s64 = ctx.r11.s64 + 24300;
	// bl 0x831ea3f0
	ctx.lr = 0x83A9DEDC;
	sub_831EA3F0(ctx, base);
	// b 0x83a9dee8
	goto loc_83A9DEE8;
loc_83A9DEE0:
	// stw r30,976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 976, ctx.r30.u32);
	// stw r29,980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 980, ctx.r29.u32);
loc_83A9DEE8:
	// bl 0x83a824c0
	ctx.lr = 0x83A9DEEC;
	sub_83A824C0(ctx, base);
loc_83A9DEEC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A9DEF4"))) PPC_WEAK_FUNC(sub_83A9DEF4);
PPC_FUNC_IMPL(__imp__sub_83A9DEF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A9DEF8"))) PPC_WEAK_FUNC(sub_83A9DEF8);
PPC_FUNC_IMPL(__imp__sub_83A9DEF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A9DF00;
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a9df2c
	if (!cr6.eq) goto loc_83A9DF2C;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,25056
	ctx.r4.s64 = ctx.r11.s64 + 25056;
	// bl 0x831ea418
	ctx.lr = 0x83A9DF28;
	sub_831EA418(ctx, base);
	// b 0x83a9df5c
	goto loc_83A9DF5C;
loc_83A9DF2C:
	// bl 0x83a82480
	ctx.lr = 0x83A9DF30;
	sub_83A82480(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a9df50
	if (cr6.eq) goto loc_83A9DF50;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,24644
	ctx.r4.s64 = ctx.r11.s64 + 24644;
	// bl 0x831ea3f0
	ctx.lr = 0x83A9DF4C;
	sub_831EA3F0(ctx, base);
	// b 0x83a9df58
	goto loc_83A9DF58;
loc_83A9DF50:
	// stw r30,1004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1004, ctx.r30.u32);
	// stw r29,1008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1008, ctx.r29.u32);
loc_83A9DF58:
	// bl 0x83a824c0
	ctx.lr = 0x83A9DF5C;
	sub_83A824C0(ctx, base);
loc_83A9DF5C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A9DF64"))) PPC_WEAK_FUNC(sub_83A9DF64);
PPC_FUNC_IMPL(__imp__sub_83A9DF64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A9DF68"))) PPC_WEAK_FUNC(sub_83A9DF68);
PPC_FUNC_IMPL(__imp__sub_83A9DF68) {
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
	// bl 0x83a82480
	ctx.lr = 0x83A9DF84;
	sub_83A82480(ctx, base);
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r31,27804(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27804);
	// b 0x83a9dfa0
	goto loc_83A9DFA0;
loc_83A9DF90:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83a9d590
	ctx.lr = 0x83A9DF9C;
	sub_83A9D590(ctx, base);
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_83A9DFA0:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83a9df90
	if (!cr6.eq) goto loc_83A9DF90;
	// bl 0x83a824c0
	ctx.lr = 0x83A9DFAC;
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

__attribute__((alias("__imp__sub_83A9DFC4"))) PPC_WEAK_FUNC(sub_83A9DFC4);
PPC_FUNC_IMPL(__imp__sub_83A9DFC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A9DFC8"))) PPC_WEAK_FUNC(sub_83A9DFC8);
PPC_FUNC_IMPL(__imp__sub_83A9DFC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A9DFD0;
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
	// beq cr6,0x83a9e01c
	if (cr6.eq) goto loc_83A9E01C;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// blt cr6,0x83a9e01c
	if (cr6.lt) goto loc_83A9E01C;
	// bl 0x83a82480
	ctx.lr = 0x83A9DFF4;
	sub_83A82480(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a9ce70
	ctx.lr = 0x83A9E004;
	sub_83A9CE70(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a9e014
	if (!cr0.eq) goto loc_83A9E014;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a9b6b0
	ctx.lr = 0x83A9E014;
	sub_83A9B6B0(ctx, base);
loc_83A9E014:
	// bl 0x83a824c0
	ctx.lr = 0x83A9E018;
	sub_83A824C0(ctx, base);
	// b 0x83a9e040
	goto loc_83A9E040;
loc_83A9E01C:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,25068
	ctx.r4.s64 = ctx.r11.s64 + 25068;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A9E030;
	sub_831EA418(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83a9e040
	if (cr6.eq) goto loc_83A9E040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a9b6b0
	ctx.lr = 0x83A9E040;
	sub_83A9B6B0(ctx, base);
loc_83A9E040:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A9E048"))) PPC_WEAK_FUNC(sub_83A9E048);
PPC_FUNC_IMPL(__imp__sub_83A9E048) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A9E050;
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a9e09c
	if (cr6.eq) goto loc_83A9E09C;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83a9e09c
	if (cr6.eq) goto loc_83A9E09C;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// blt cr6,0x83a9e09c
	if (cr6.lt) goto loc_83A9E09C;
	// bl 0x83a82480
	ctx.lr = 0x83A9E07C;
	sub_83A82480(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a9b6b0
	ctx.lr = 0x83A9E084;
	sub_83A9B6B0(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// stw r29,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r29.u32);
	// bl 0x83a824c0
	ctx.lr = 0x83A9E098;
	sub_83A824C0(ctx, base);
	// b 0x83a9e0c0
	goto loc_83A9E0C0;
loc_83A9E09C:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,25080
	ctx.r4.s64 = ctx.r11.s64 + 25080;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A9E0B0;
	sub_831EA418(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83a9e0c0
	if (cr6.eq) goto loc_83A9E0C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a9b6b0
	ctx.lr = 0x83A9E0C0;
	sub_83A9B6B0(ctx, base);
loc_83A9E0C0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A9E0C8"))) PPC_WEAK_FUNC(sub_83A9E0C8);
PPC_FUNC_IMPL(__imp__sub_83A9E0C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83A9E0D0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x839f8330
	ctx.lr = 0x83A9E0E8;
	sub_839F8330(ctx, base);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// ble cr6,0x83a9e10c
	if (!cr6.gt) goto loc_83A9E10C;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,25200
	ctx.r4.s64 = ctx.r11.s64 + 25200;
loc_83A9E0FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea3f0
	ctx.lr = 0x83A9E104;
	sub_831EA3F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a9e1a0
	goto loc_83A9E1A0;
loc_83A9E10C:
	// lha r11,110(r31)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r31.u32 + 110));
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi r11,0
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble 0x83a9e148
	if (!cr0.gt) goto loc_83A9E148;
	// li r29,0
	ctx.r29.s64 = 0;
loc_83A9E120:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// bl 0x83acd4d0
	ctx.lr = 0x83A9E12C;
	sub_83ACD4D0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a9e160
	if (cr0.eq) goto loc_83A9E160;
	// lha r11,110(r31)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r31.u32 + 110));
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, xer);
	// blt cr6,0x83a9e120
	if (cr6.lt) goto loc_83A9E120;
loc_83A9E148:
	// li r30,0
	ctx.r30.s64 = 0;
loc_83A9E14C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83a9e170
	if (!cr6.eq) goto loc_83A9E170;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,25096
	ctx.r4.s64 = ctx.r11.s64 + 25096;
	// b 0x83a9e0fc
	goto loc_83A9E0FC;
loc_83A9E160:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r10,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x83a9e14c
	goto loc_83A9E14C;
loc_83A9E170:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x831ea658
	ctx.lr = 0x83A9E184;
	sub_831EA658(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a9b6b0
	ctx.lr = 0x83A9E18C;
	sub_83A9B6B0(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r27,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r27.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
loc_83A9E1A0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A9E1A8"))) PPC_WEAK_FUNC(sub_83A9E1A8);
PPC_FUNC_IMPL(__imp__sub_83A9E1A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A9E1B0;
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
	// beq cr6,0x83a9e20c
	if (cr6.eq) goto loc_83A9E20C;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83a9e20c
	if (cr6.eq) goto loc_83A9E20C;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// blt cr6,0x83a9e20c
	if (cr6.lt) goto loc_83A9E20C;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmpw cr6,r5,r11
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, xer);
	// bgt cr6,0x83a9e20c
	if (cr6.gt) goto loc_83A9E20C;
	// bl 0x83a82480
	ctx.lr = 0x83A9E1EC;
	sub_83A82480(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a9b6b0
	ctx.lr = 0x83A9E1F4;
	sub_83A9B6B0(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r29,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r29.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// bl 0x83a824c0
	ctx.lr = 0x83A9E208;
	sub_83A824C0(ctx, base);
	// b 0x83a9e230
	goto loc_83A9E230;
loc_83A9E20C:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,25280
	ctx.r4.s64 = ctx.r11.s64 + 25280;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A9E220;
	sub_831EA418(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83a9e230
	if (cr6.eq) goto loc_83A9E230;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a9b6b0
	ctx.lr = 0x83A9E230;
	sub_83A9B6B0(ctx, base);
loc_83A9E230:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A9E238"))) PPC_WEAK_FUNC(sub_83A9E238);
PPC_FUNC_IMPL(__imp__sub_83A9E238) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A9E240;
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
	// beq cr6,0x83a9e29c
	if (cr6.eq) goto loc_83A9E29C;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83a9e29c
	if (cr6.eq) goto loc_83A9E29C;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// blt cr6,0x83a9e29c
	if (cr6.lt) goto loc_83A9E29C;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmpw cr6,r5,r11
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, xer);
	// bgt cr6,0x83a9e29c
	if (cr6.gt) goto loc_83A9E29C;
	// bl 0x83a82480
	ctx.lr = 0x83A9E27C;
	sub_83A82480(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a9b6b0
	ctx.lr = 0x83A9E284;
	sub_83A9B6B0(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r29,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r29.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// bl 0x83a824c0
	ctx.lr = 0x83A9E298;
	sub_83A824C0(ctx, base);
	// b 0x83a9e2c0
	goto loc_83A9E2C0;
loc_83A9E29C:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,25292
	ctx.r4.s64 = ctx.r11.s64 + 25292;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A9E2B0;
	sub_831EA418(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83a9e2c0
	if (cr6.eq) goto loc_83A9E2C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a9b6b0
	ctx.lr = 0x83A9E2C0;
	sub_83A9B6B0(ctx, base);
loc_83A9E2C0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A9E2C8"))) PPC_WEAK_FUNC(sub_83A9E2C8);
PPC_FUNC_IMPL(__imp__sub_83A9E2C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A9E2D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r10,76(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r30,92(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// beq cr6,0x83a9e2f8
	if (cr6.eq) goto loc_83A9E2F8;
	// li r5,1
	ctx.r5.s64 = 1;
loc_83A9E2F8:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83a9e314
	if (cr6.eq) goto loc_83A9E314;
	// lbz r11,2(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83a9e314
	if (!cr6.eq) goto loc_83A9E314;
	// ori r11,r5,2
	ctx.r11.u64 = ctx.r5.u64 | 2;
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
loc_83A9E314:
	// stw r31,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r31.u32);
	// extsb. r11,r5
	ctx.r11.s64 = ctx.r5.s8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// bne 0x83a9e330
	if (!cr0.eq) goto loc_83A9E330;
	// bl 0x83ace2b0
	ctx.lr = 0x83A9E32C;
	sub_83ACE2B0(ctx, base);
	// b 0x83a9e334
	goto loc_83A9E334;
loc_83A9E330:
	// bl 0x83ace2c8
	ctx.lr = 0x83A9E334;
	sub_83ACE2C8(ctx, base);
loc_83A9E334:
	// stw r28,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r28.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83acd578
	ctx.lr = 0x83A9E344;
	sub_83ACD578(ctx, base);
	// cmpwi cr6,r29,-1
	cr6.compare<int32_t>(ctx.r29.s32, -1, xer);
	// bne cr6,0x83a9e354
	if (!cr6.eq) goto loc_83A9E354;
loc_83A9E34C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83a9e3ac
	goto loc_83A9E3AC;
loc_83A9E354:
	// bl 0x83aa4540
	ctx.lr = 0x83A9E358;
	sub_83AA4540(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83a9e374
	if (!cr0.eq) goto loc_83A9E374;
	// li r5,39
	ctx.r5.s64 = 39;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83acdfa0
	ctx.lr = 0x83A9E370;
	sub_83ACDFA0(ctx, base);
	// b 0x83a9e34c
	goto loc_83A9E34C;
loc_83A9E374:
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a9e38c
	if (!cr6.eq) goto loc_83A9E38C;
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// b 0x83a9e398
	goto loc_83A9E398;
loc_83A9E38C:
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r28.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
loc_83A9E398:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
loc_83A9E3AC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A9E3B4"))) PPC_WEAK_FUNC(sub_83A9E3B4);
PPC_FUNC_IMPL(__imp__sub_83A9E3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A9E3B8"))) PPC_WEAK_FUNC(sub_83A9E3B8);
PPC_FUNC_IMPL(__imp__sub_83A9E3B8) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a9e3e8
	if (!cr6.eq) goto loc_83A9E3E8;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,25304
	ctx.r4.s64 = ctx.r11.s64 + 25304;
	// bl 0x831ea418
	ctx.lr = 0x83A9E3E4;
	sub_831EA418(ctx, base);
	// b 0x83a9e3f8
	goto loc_83A9E3F8;
loc_83A9E3E8:
	// bl 0x83a82480
	ctx.lr = 0x83A9E3EC;
	sub_83A82480(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a9d4b8
	ctx.lr = 0x83A9E3F4;
	sub_83A9D4B8(ctx, base);
	// bl 0x83a824c0
	ctx.lr = 0x83A9E3F8;
	sub_83A824C0(ctx, base);
loc_83A9E3F8:
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

__attribute__((alias("__imp__sub_83A9E40C"))) PPC_WEAK_FUNC(sub_83A9E40C);
PPC_FUNC_IMPL(__imp__sub_83A9E40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A9E410"))) PPC_WEAK_FUNC(sub_83A9E410);
PPC_FUNC_IMPL(__imp__sub_83A9E410) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a9e440
	if (!cr6.eq) goto loc_83A9E440;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,25316
	ctx.r4.s64 = ctx.r11.s64 + 25316;
	// bl 0x831ea418
	ctx.lr = 0x83A9E43C;
	sub_831EA418(ctx, base);
	// b 0x83a9e454
	goto loc_83A9E454;
loc_83A9E440:
	// bl 0x83a82480
	ctx.lr = 0x83A9E444;
	sub_83A82480(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a9d590
	ctx.lr = 0x83A9E450;
	sub_83A9D590(ctx, base);
	// bl 0x83a824c0
	ctx.lr = 0x83A9E454;
	sub_83A824C0(ctx, base);
loc_83A9E454:
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

__attribute__((alias("__imp__sub_83A9E468"))) PPC_WEAK_FUNC(sub_83A9E468);
PPC_FUNC_IMPL(__imp__sub_83A9E468) {
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
	// bl 0x83a82480
	ctx.lr = 0x83A9E488;
	sub_83A82480(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a9d590
	ctx.lr = 0x83A9E494;
	sub_83A9D590(ctx, base);
	// bl 0x83a824c0
	ctx.lr = 0x83A9E498;
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

__attribute__((alias("__imp__sub_83A9E4B0"))) PPC_WEAK_FUNC(sub_83A9E4B0);
PPC_FUNC_IMPL(__imp__sub_83A9E4B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83A9E4B8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// bl 0x83a82480
	ctx.lr = 0x83A9E4CC;
	sub_83A82480(ctx, base);
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r11,27804(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27804);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// beq cr6,0x83a9e5b0
	if (cr6.eq) goto loc_83A9E5B0;
loc_83A9E4E4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r28,164(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// b 0x83a9e598
	goto loc_83A9E598;
loc_83A9E4F4:
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83a9e518
	if (cr6.eq) goto loc_83A9E518;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x83a9e518
	if (cr6.eq) goto loc_83A9E518;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x83a9e51c
	if (!cr6.eq) goto loc_83A9E51C;
loc_83A9E518:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
loc_83A9E51C:
	// cmplw cr6,r11,r25
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, xer);
	// bne cr6,0x83a9e53c
	if (!cr6.eq) goto loc_83A9E53C;
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// beq cr6,0x83a9e5a0
	if (cr6.eq) goto loc_83A9E5A0;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83aa3e18
	ctx.lr = 0x83A9E53C;
	sub_83AA3E18(ctx, base);
loc_83A9E53C:
	// lwz r31,48(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// b 0x83a9e58c
	goto loc_83A9E58C;
loc_83A9E544:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83a9e568
	if (cr6.eq) goto loc_83A9E568;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x83a9e568
	if (cr6.eq) goto loc_83A9E568;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x83a9e56c
	if (!cr6.eq) goto loc_83A9E56C;
loc_83A9E568:
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
loc_83A9E56C:
	// cmplw cr6,r11,r25
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, xer);
	// bne cr6,0x83a9e588
	if (!cr6.eq) goto loc_83A9E588;
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// beq cr6,0x83a9e594
	if (cr6.eq) goto loc_83A9E594;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x83aa3e18
	ctx.lr = 0x83A9E588;
	sub_83AA3E18(ctx, base);
loc_83A9E588:
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_83A9E58C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83a9e544
	if (!cr6.eq) goto loc_83A9E544;
loc_83A9E594:
	// lwz r28,4(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
loc_83A9E598:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x83a9e4f4
	if (!cr6.eq) goto loc_83A9E4F4;
loc_83A9E5A0:
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// or r26,r29,r26
	ctx.r26.u64 = ctx.r29.u64 | ctx.r26.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83a9e4e4
	if (!cr6.eq) goto loc_83A9E4E4;
loc_83A9E5B0:
	// bl 0x83a824c0
	ctx.lr = 0x83A9E5B4;
	sub_83A824C0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A9E5C0"))) PPC_WEAK_FUNC(sub_83A9E5C0);
PPC_FUNC_IMPL(__imp__sub_83A9E5C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83A9E5C8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// bl 0x83a82480
	ctx.lr = 0x83A9E5DC;
	sub_83A82480(ctx, base);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// bne cr6,0x83a9e5ec
	if (!cr6.eq) goto loc_83A9E5EC;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x83a9e664
	goto loc_83A9E664;
loc_83A9E5EC:
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r31,27804(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27804);
	// b 0x83a9e658
	goto loc_83A9E658;
loc_83A9E5FC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r30,164(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// b 0x83a9e648
	goto loc_83A9E648;
loc_83A9E60C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// bne cr6,0x83a9e624
	if (!cr6.eq) goto loc_83A9E624;
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// b 0x83a9e628
	goto loc_83A9E628;
loc_83A9E624:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83A9E628:
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, xer);
	// bne cr6,0x83a9e644
	if (!cr6.eq) goto loc_83A9E644;
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// beq cr6,0x83a9e650
	if (cr6.eq) goto loc_83A9E650;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x83aa3e18
	ctx.lr = 0x83A9E644;
	sub_83AA3E18(ctx, base);
loc_83A9E644:
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_83A9E648:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83a9e60c
	if (!cr6.eq) goto loc_83A9E60C;
loc_83A9E650:
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// or r28,r29,r28
	ctx.r28.u64 = ctx.r29.u64 | ctx.r28.u64;
loc_83A9E658:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83a9e5fc
	if (!cr6.eq) goto loc_83A9E5FC;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_83A9E664:
	// bl 0x83a824c0
	ctx.lr = 0x83A9E668;
	sub_83A824C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A9E674"))) PPC_WEAK_FUNC(sub_83A9E674);
PPC_FUNC_IMPL(__imp__sub_83A9E674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A9E678"))) PPC_WEAK_FUNC(sub_83A9E678);
PPC_FUNC_IMPL(__imp__sub_83A9E678) {
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
	// bne cr6,0x83a9e6b0
	if (!cr6.eq) goto loc_83A9E6B0;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,25328
	ctx.r4.s64 = ctx.r11.s64 + 25328;
	// bl 0x831ea418
	ctx.lr = 0x83A9E6AC;
	sub_831EA418(ctx, base);
	// b 0x83a9e71c
	goto loc_83A9E71C;
loc_83A9E6B0:
	// bl 0x83a82480
	ctx.lr = 0x83A9E6B4;
	sub_83A82480(ctx, base);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// lwz r30,164(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// bne cr6,0x83a9e6f0
	if (!cr6.eq) goto loc_83A9E6F0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,157(r31)
	PPC_STORE_U8(ctx.r31.u32 + 157, ctx.r11.u8);
	// b 0x83a9e6e4
	goto loc_83A9E6E4;
loc_83A9E6CC:
	// lis r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,65535
	ctx.r4.u64 = ctx.r4.u64 | 65535;
	// bl 0x83a9ba58
	ctx.lr = 0x83A9E6E0;
	sub_83A9BA58(ctx, base);
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_83A9E6E4:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83a9e6cc
	if (!cr6.eq) goto loc_83A9E6CC;
	// b 0x83a9e718
	goto loc_83A9E718;
loc_83A9E6F0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,157(r31)
	PPC_STORE_U8(ctx.r31.u32 + 157, ctx.r11.u8);
	// b 0x83a9e710
	goto loc_83A9E710;
loc_83A9E6FC:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83a9ba58
	ctx.lr = 0x83A9E70C;
	sub_83A9BA58(ctx, base);
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_83A9E710:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83a9e6fc
	if (!cr6.eq) goto loc_83A9E6FC;
loc_83A9E718:
	// bl 0x83a824c0
	ctx.lr = 0x83A9E71C;
	sub_83A824C0(ctx, base);
loc_83A9E71C:
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

__attribute__((alias("__imp__sub_83A9E734"))) PPC_WEAK_FUNC(sub_83A9E734);
PPC_FUNC_IMPL(__imp__sub_83A9E734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A9E738"))) PPC_WEAK_FUNC(sub_83A9E738);
PPC_FUNC_IMPL(__imp__sub_83A9E738) {
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
	// bne cr6,0x83a9e770
	if (!cr6.eq) goto loc_83A9E770;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,25340
	ctx.r4.s64 = ctx.r11.s64 + 25340;
	// bl 0x831ea418
	ctx.lr = 0x83A9E76C;
	sub_831EA418(ctx, base);
	// b 0x83a9e784
	goto loc_83A9E784;
loc_83A9E770:
	// bl 0x83a82480
	ctx.lr = 0x83A9E774;
	sub_83A82480(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a9d778
	ctx.lr = 0x83A9E780;
	sub_83A9D778(ctx, base);
	// bl 0x83a824c0
	ctx.lr = 0x83A9E784;
	sub_83A824C0(ctx, base);
loc_83A9E784:
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

__attribute__((alias("__imp__sub_83A9E79C"))) PPC_WEAK_FUNC(sub_83A9E79C);
PPC_FUNC_IMPL(__imp__sub_83A9E79C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A9E7A0"))) PPC_WEAK_FUNC(sub_83A9E7A0);
PPC_FUNC_IMPL(__imp__sub_83A9E7A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A9E7A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x83aa3d20
	ctx.lr = 0x83A9E7B0;
	sub_83AA3D20(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x83a9e7c0
	if (!cr0.eq) goto loc_83A9E7C0;
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x83a9e874
	goto loc_83A9E874;
loc_83A9E7C0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83aa6020
	ctx.lr = 0x83A9E7CC;
	sub_83AA6020(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bge 0x83a9e7e0
	if (!cr0.lt) goto loc_83A9E7E0;
	// bl 0x83a9d858
	ctx.lr = 0x83A9E7DC;
	sub_83A9D858(ctx, base);
	// b 0x83a9e838
	goto loc_83A9E838;
loc_83A9E7E0:
	// bl 0x83aa5f48
	ctx.lr = 0x83A9E7E4;
	sub_83AA5F48(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a9e7f8
	if (!cr6.eq) goto loc_83A9E7F8;
loc_83A9E7F0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83a9e874
	goto loc_83A9E874;
loc_83A9E7F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a9d858
	ctx.lr = 0x83A9E800;
	sub_83A9D858(ctx, base);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne cr6,0x83a9e810
	if (!cr6.eq) goto loc_83A9E810;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83a9e7f0
	if (cr6.eq) goto loc_83A9E7F0;
loc_83A9E810:
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, xer);
	// bne cr6,0x83a9e824
	if (!cr6.eq) goto loc_83A9E824;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83a9e7f0
	if (cr6.eq) goto loc_83A9E7F0;
loc_83A9E824:
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// beq cr6,0x83a9e834
	if (cr6.eq) goto loc_83A9E834;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x83a9e840
	if (cr6.eq) goto loc_83A9E840;
loc_83A9E834:
	// li r3,2
	ctx.r3.s64 = 2;
loc_83A9E838:
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x83a9e874
	if (!cr6.eq) goto loc_83A9E874;
loc_83A9E840:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83a9e874
	if (!cr6.gt) goto loc_83A9E874;
	// lwz r31,48(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// b 0x83a9e86c
	goto loc_83A9E86C;
loc_83A9E854:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83aa3ce8
	ctx.lr = 0x83A9E85C;
	sub_83AA3CE8(ctx, base);
	// bl 0x83a9e7a0
	ctx.lr = 0x83A9E860;
	sub_83A9E7A0(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x83a9e874
	if (!cr6.eq) goto loc_83A9E874;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_83A9E86C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83a9e854
	if (!cr6.eq) goto loc_83A9E854;
loc_83A9E874:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A9E87C"))) PPC_WEAK_FUNC(sub_83A9E87C);
PPC_FUNC_IMPL(__imp__sub_83A9E87C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A9E880"))) PPC_WEAK_FUNC(sub_83A9E880);
PPC_FUNC_IMPL(__imp__sub_83A9E880) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A9E888;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x83aa3d20
	ctx.lr = 0x83A9E890;
	sub_83AA3D20(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x83a9e928
	if (cr0.eq) goto loc_83A9E928;
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// lwz r31,36(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r29,92(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// b 0x83a9e8c4
	goto loc_83A9E8C4;
loc_83A9E8AC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83acdb88
	ctx.lr = 0x83A9E8B8;
	sub_83ACDB88(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83a9e8cc
	if (!cr0.eq) goto loc_83A9E8CC;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_83A9E8C4:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83a9e8ac
	if (!cr6.eq) goto loc_83A9E8AC;
loc_83A9E8CC:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a9e928
	if (!cr6.eq) goto loc_83A9E928;
	// lwz r29,48(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// b 0x83a9e920
	goto loc_83A9E920;
loc_83A9E8DC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// lwz r31,36(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r30,92(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// b 0x83a9e90c
	goto loc_83A9E90C;
loc_83A9E8F4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83acdb88
	ctx.lr = 0x83A9E900;
	sub_83ACDB88(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83a9e914
	if (!cr0.eq) goto loc_83A9E914;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_83A9E90C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83a9e8f4
	if (!cr6.eq) goto loc_83A9E8F4;
loc_83A9E914:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a9e928
	if (!cr6.eq) goto loc_83A9E928;
	// lwz r29,4(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
loc_83A9E920:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x83a9e8dc
	if (!cr6.eq) goto loc_83A9E8DC;
loc_83A9E928:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A9E930"))) PPC_WEAK_FUNC(sub_83A9E930);
PPC_FUNC_IMPL(__imp__sub_83A9E930) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a9e968
	if (!cr6.eq) goto loc_83A9E968;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,25352
	ctx.r4.s64 = ctx.r11.s64 + 25352;
	// bl 0x831ea418
	ctx.lr = 0x83A9E964;
	sub_831EA418(ctx, base);
	// b 0x83a9e9a0
	goto loc_83A9E9A0;
loc_83A9E968:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a9e880
	ctx.lr = 0x83A9E970;
	sub_83A9E880(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83a9e97c
	if (!cr0.eq) goto loc_83A9E97C;
	// li r31,-1
	ctx.r31.s64 = -1;
loc_83A9E97C:
	// stw r31,152(r30)
	PPC_STORE_U32(ctx.r30.u32 + 152, ctx.r31.u32);
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(ctx.r31.s32, -1, xer);
	// bne cr6,0x83a9e9a0
	if (!cr6.eq) goto loc_83A9E9A0;
	// li r4,116
	ctx.r4.s64 = 116;
	// lwz r3,176(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// bl 0x83ac10a8
	ctx.lr = 0x83A9E994;
	sub_83AC10A8(ctx, base);
	// li r4,117
	ctx.r4.s64 = 117;
	// lwz r3,176(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// bl 0x83ac10a8
	ctx.lr = 0x83A9E9A0;
	sub_83AC10A8(ctx, base);
loc_83A9E9A0:
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

__attribute__((alias("__imp__sub_83A9E9B8"))) PPC_WEAK_FUNC(sub_83A9E9B8);
PPC_FUNC_IMPL(__imp__sub_83A9E9B8) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a9e9ec
	if (!cr6.eq) goto loc_83A9E9EC;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,24996
	ctx.r4.s64 = ctx.r11.s64 + 24996;
	// bl 0x831ea418
	ctx.lr = 0x83A9E9E8;
	sub_831EA418(ctx, base);
	// b 0x83a9ea14
	goto loc_83A9EA14;
loc_83A9E9EC:
	// bl 0x83a82480
	ctx.lr = 0x83A9E9F0;
	sub_83A82480(ctx, base);
	// lwz r31,164(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// b 0x83a9ea08
	goto loc_83A9EA08;
loc_83A9E9F8:
	// lwz r4,176(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83aa4040
	ctx.lr = 0x83A9EA04;
	sub_83AA4040(ctx, base);
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_83A9EA08:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83a9e9f8
	if (!cr6.eq) goto loc_83A9E9F8;
	// bl 0x83a824c0
	ctx.lr = 0x83A9EA14;
	sub_83A824C0(ctx, base);
loc_83A9EA14:
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

__attribute__((alias("__imp__sub_83A9EA2C"))) PPC_WEAK_FUNC(sub_83A9EA2C);
PPC_FUNC_IMPL(__imp__sub_83A9EA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A9EA30"))) PPC_WEAK_FUNC(sub_83A9EA30);
PPC_FUNC_IMPL(__imp__sub_83A9EA30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A9EA38;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,27800
	ctx.r30.s64 = ctx.r11.s64 + 27800;
	// lwz r11,27800(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27800);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bgt cr6,0x83a9ea6c
	if (cr6.gt) goto loc_83A9EA6C;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-6
	ctx.r5.s64 = -6;
	// addi r4,r11,25376
	ctx.r4.s64 = ctx.r11.s64 + 25376;
loc_83A9EA60:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A9EA68;
	sub_831EA418(ctx, base);
	// b 0x83a9ebe0
	goto loc_83A9EBE0;
loc_83A9EA6C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83a9ea84
	if (!cr6.eq) goto loc_83A9EA84;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,25364
	ctx.r4.s64 = ctx.r11.s64 + 25364;
	// b 0x83a9ea60
	goto loc_83A9EA60;
loc_83A9EA84:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83a9eb5c
	if (!cr6.gt) goto loc_83A9EB5C;
	// lwz r3,1012(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1012);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a9eaa8
	if (cr6.eq) goto loc_83A9EAA8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83ab7948
	ctx.lr = 0x83A9EAA8;
	sub_83AB7948(ctx, base);
loc_83A9EAA8:
	// lwz r11,948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 948);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a9eabc
	if (cr6.eq) goto loc_83A9EABC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ab6048
	ctx.lr = 0x83A9EABC;
	sub_83AB6048(ctx, base);
loc_83A9EABC:
	// li r4,60
	ctx.r4.s64 = 60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a9e468
	ctx.lr = 0x83A9EAC8;
	sub_83A9E468(ctx, base);
	// bl 0x83a82480
	ctx.lr = 0x83A9EACC;
	sub_83A82480(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a9b6b0
	ctx.lr = 0x83A9EAD4;
	sub_83A9B6B0(ctx, base);
	// bl 0x83a824c0
	ctx.lr = 0x83A9EAD8;
	sub_83A824C0(ctx, base);
	// bl 0x83a82480
	ctx.lr = 0x83A9EADC;
	sub_83A82480(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x83a9eb00
	if (!cr6.eq) goto loc_83A9EB00;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// bne cr6,0x83a9eb44
	if (!cr6.eq) goto loc_83A9EB44;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x83a9eb40
	goto loc_83A9EB40;
loc_83A9EB00:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a9eb44
	if (cr6.eq) goto loc_83A9EB44;
loc_83A9EB08:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// beq cr6,0x83a9eb20
	if (cr6.eq) goto loc_83A9EB20;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x83a9eb08
	if (!cr0.eq) goto loc_83A9EB08;
loc_83A9EB20:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a9eb44
	if (cr6.eq) goto loc_83A9EB44;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x83a9eb44
	if (!cr6.eq) goto loc_83A9EB44;
loc_83A9EB40:
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_83A9EB44:
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// bl 0x83a824c0
	ctx.lr = 0x83A9EB58;
	sub_83A824C0(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_83A9EB5C:
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lwz r30,984(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 984);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a9eb74
	if (cr6.eq) goto loc_83A9EB74;
	// bl 0x83abdb50
	ctx.lr = 0x83A9EB70;
	sub_83ABDB50(ctx, base);
	// stw r29,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r29.u32);
loc_83A9EB74:
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a9eb88
	if (cr6.eq) goto loc_83A9EB88;
	// bl 0x83ac1640
	ctx.lr = 0x83A9EB84;
	sub_83AC1640(ctx, base);
	// stw r29,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r29.u32);
loc_83A9EB88:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a9eba8
	if (cr6.eq) goto loc_83A9EBA8;
	// bl 0x83a82480
	ctx.lr = 0x83A9EB98;
	sub_83A82480(ctx, base);
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// bl 0x83ace1e8
	ctx.lr = 0x83A9EBA0;
	sub_83ACE1E8(ctx, base);
	// bl 0x83a824c0
	ctx.lr = 0x83A9EBA4;
	sub_83A824C0(ctx, base);
	// stw r29,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r29.u32);
loc_83A9EBA8:
	// lwz r3,996(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 996);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a9ebbc
	if (cr6.eq) goto loc_83A9EBBC;
	// bl 0x83aa1e78
	ctx.lr = 0x83A9EBB8;
	sub_83AA1E78(ctx, base);
	// stw r29,996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 996, ctx.r29.u32);
loc_83A9EBBC:
	// lwz r3,992(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 992);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a9ebd0
	if (cr6.eq) goto loc_83A9EBD0;
	// bl 0x83aa1e78
	ctx.lr = 0x83A9EBCC;
	sub_83AA1E78(ctx, base);
	// stw r29,992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 992, ctx.r29.u32);
loc_83A9EBD0:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83a9ebe0
	if (cr6.eq) goto loc_83A9EBE0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a82d38
	ctx.lr = 0x83A9EBE0;
	sub_83A82D38(ctx, base);
loc_83A9EBE0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A9EBE8"))) PPC_WEAK_FUNC(sub_83A9EBE8);
PPC_FUNC_IMPL(__imp__sub_83A9EBE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83A9EBF0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a9edf8
	if (cr6.eq) goto loc_83A9EDF8;
	// lbz r11,159(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 159);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83a9ec38
	if (cr0.eq) goto loc_83A9EC38;
	// lwz r3,940(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 940);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x83a9ec38
	if (cr6.eq) goto loc_83A9EC38;
	// bl 0x83aa3d20
	ctx.lr = 0x83A9EC20;
	sub_83AA3D20(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83a9ec38
	if (cr0.eq) goto loc_83A9EC38;
	// bl 0x83a9d930
	ctx.lr = 0x83A9EC2C;
	sub_83A9D930(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x83a9ec38
	if (cr0.lt) goto loc_83A9EC38;
	// stw r3,936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 936, ctx.r3.u32);
loc_83A9EC38:
	// lwz r27,172(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r25,r28
	ctx.r25.u64 = ctx.r28.u64;
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// ble cr6,0x83a9ed10
	if (!cr6.gt) goto loc_83A9ED10;
loc_83A9EC50:
	// lwz r30,164(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83a9ed00
	if (cr6.eq) goto loc_83A9ED00;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
	// bne cr6,0x83a9ec70
	if (!cr6.eq) goto loc_83A9EC70;
	// stw r28,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r28.u32);
loc_83A9EC70:
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// beq cr6,0x83a9ed00
	if (cr6.eq) goto loc_83A9ED00;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83aa4c20
	ctx.lr = 0x83A9EC94;
	sub_83AA4C20(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt 0x83a9ecc0
	if (cr0.gt) goto loc_83A9ECC0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83aa5f48
	ctx.lr = 0x83A9ECA4;
	sub_83AA5F48(ctx, base);
	// mr. r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r25.s32, 0, xer);
	// beq 0x83a9ecb4
	if (cr0.eq) goto loc_83A9ECB4;
	// cmpwi cr6,r25,3
	cr6.compare<int32_t>(ctx.r25.s32, 3, xer);
	// bne cr6,0x83a9ecc0
	if (!cr6.eq) goto loc_83A9ECC0;
loc_83A9ECB4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83aa4748
	ctx.lr = 0x83A9ECBC;
	sub_83AA4748(ctx, base);
	// b 0x83a9ecf0
	goto loc_83A9ECF0;
loc_83A9ECC0:
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a9ecd4
	if (!cr6.eq) goto loc_83A9ECD4;
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// b 0x83a9ece0
	goto loc_83A9ECE0;
loc_83A9ECD4:
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
loc_83A9ECE0:
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
loc_83A9ECF0:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpw cr6,r26,r27
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r27.s32, xer);
	// blt cr6,0x83a9ec50
	if (cr6.lt) goto loc_83A9EC50;
	// b 0x83a9ed10
	goto loc_83A9ED10;
loc_83A9ED00:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,25392
	ctx.r4.s64 = ctx.r11.s64 + 25392;
	// bl 0x831ea3f0
	ctx.lr = 0x83A9ED10;
	sub_831EA3F0(ctx, base);
loc_83A9ED10:
	// lwz r30,172(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne cr6,0x83a9ed54
	if (!cr6.eq) goto loc_83A9ED54;
	// lbz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 156);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x83a9ed4c
	if (!cr0.eq) goto loc_83A9ED4C;
	// lbz r11,158(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 158);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble 0x83a9ed40
	if (!cr0.gt) goto loc_83A9ED40;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stb r11,158(r31)
	PPC_STORE_U8(ctx.r31.u32 + 158, ctx.r11.u8);
	// b 0x83a9edb8
	goto loc_83A9EDB8;
loc_83A9ED40:
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// stw r28,936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 936, ctx.r28.u32);
	// b 0x83a9edb8
	goto loc_83A9EDB8;
loc_83A9ED4C:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_83A9ED54:
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// bl 0x83acdef8
	ctx.lr = 0x83A9ED5C;
	sub_83ACDEF8(ctx, base);
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// bne cr6,0x83a9ed8c
	if (!cr6.eq) goto loc_83A9ED8C;
	// lbz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 156);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83a9ed78
	if (cr0.eq) goto loc_83A9ED78;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x83a9edac
	goto loc_83A9EDAC;
loc_83A9ED78:
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// li r4,34
	ctx.r4.s64 = 34;
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// bl 0x83acdd28
	ctx.lr = 0x83A9ED88;
	sub_83ACDD28(ctx, base);
	// b 0x83a9edb0
	goto loc_83A9EDB0;
loc_83A9ED8C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a9edb0
	if (!cr6.eq) goto loc_83A9EDB0;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x83a9eda8
	if (cr6.eq) goto loc_83A9EDA8;
	// cmpwi cr6,r25,2
	cr6.compare<int32_t>(ctx.r25.s32, 2, xer);
	// bne cr6,0x83a9edb0
	if (!cr6.eq) goto loc_83A9EDB0;
loc_83A9EDA8:
	// li r11,2
	ctx.r11.s64 = 2;
loc_83A9EDAC:
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_83A9EDB0:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne cr6,0x83a9edf8
	if (!cr6.eq) goto loc_83A9EDF8;
loc_83A9EDB8:
	// lwz r3,948(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 948);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a9edf8
	if (cr6.eq) goto loc_83A9EDF8;
	// lwz r11,168(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a9edf8
	if (!cr6.eq) goto loc_83A9EDF8;
	// bl 0x83ab5fb8
	ctx.lr = 0x83A9EDD4;
	sub_83AB5FB8(ctx, base);
	// bl 0x83a82480
	ctx.lr = 0x83A9EDD8;
	sub_83A82480(ctx, base);
	// stw r28,964(r31)
	PPC_STORE_U32(ctx.r31.u32 + 964, ctx.r28.u32);
	// stw r28,960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 960, ctx.r28.u32);
	// bl 0x83a824c0
	ctx.lr = 0x83A9EDE4;
	sub_83A824C0(ctx, base);
	// bl 0x83a82480
	ctx.lr = 0x83A9EDE8;
	sub_83A82480(ctx, base);
	// stw r28,956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 956, ctx.r28.u32);
	// stw r28,952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 952, ctx.r28.u32);
	// bl 0x83a824c0
	ctx.lr = 0x83A9EDF4;
	sub_83A824C0(ctx, base);
	// stw r28,948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 948, ctx.r28.u32);
loc_83A9EDF8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A9EE00"))) PPC_WEAK_FUNC(sub_83A9EE00);
PPC_FUNC_IMPL(__imp__sub_83A9EE00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A9EE08;
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
	// beq cr6,0x83a9ee54
	if (cr6.eq) goto loc_83A9EE54;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83a9ee54
	if (cr6.eq) goto loc_83A9EE54;
	// bl 0x83a82480
	ctx.lr = 0x83A9EE2C;
	sub_83A82480(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a9e0c8
	ctx.lr = 0x83A9EE3C;
	sub_83A9E0C8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a9ee4c
	if (!cr0.eq) goto loc_83A9EE4C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a9b6b0
	ctx.lr = 0x83A9EE4C;
	sub_83A9B6B0(ctx, base);
loc_83A9EE4C:
	// bl 0x83a824c0
	ctx.lr = 0x83A9EE50;
	sub_83A824C0(ctx, base);
	// b 0x83a9ee78
	goto loc_83A9EE78;
loc_83A9EE54:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,25468
	ctx.r4.s64 = ctx.r11.s64 + 25468;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A9EE68;
	sub_831EA418(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83a9ee78
	if (cr6.eq) goto loc_83A9EE78;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a9b6b0
	ctx.lr = 0x83A9EE78;
	sub_83A9B6B0(ctx, base);
loc_83A9EE78:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A9EE80"))) PPC_WEAK_FUNC(sub_83A9EE80);
PPC_FUNC_IMPL(__imp__sub_83A9EE80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A9EE88;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x83a82480
	ctx.lr = 0x83A9EE9C;
	sub_83A82480(ctx, base);
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(ctx.r29.u32, 1, xer);
	// blt cr6,0x83a9eed8
	if (cr6.lt) goto loc_83A9EED8;
	// beq cr6,0x83a9eec8
	if (cr6.eq) goto loc_83A9EEC8;
	// cmplwi cr6,r29,3
	cr6.compare<uint32_t>(ctx.r29.u32, 3, xer);
	// blt cr6,0x83a9eeb8
	if (cr6.lt) goto loc_83A9EEB8;
	// li r31,-1
	ctx.r31.s64 = -1;
	// b 0x83a9eee8
	goto loc_83A9EEE8;
loc_83A9EEB8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a9e2c8
	ctx.lr = 0x83A9EEC4;
	sub_83A9E2C8(ctx, base);
	// b 0x83a9eee4
	goto loc_83A9EEE4;
loc_83A9EEC8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a9d3d0
	ctx.lr = 0x83A9EED4;
	sub_83A9D3D0(ctx, base);
	// b 0x83a9eee4
	goto loc_83A9EEE4;
loc_83A9EED8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a9d210
	ctx.lr = 0x83A9EEE4;
	sub_83A9D210(ctx, base);
loc_83A9EEE4:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_83A9EEE8:
	// bl 0x83a824c0
	ctx.lr = 0x83A9EEEC;
	sub_83A824C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A9EEF8"))) PPC_WEAK_FUNC(sub_83A9EEF8);
PPC_FUNC_IMPL(__imp__sub_83A9EEF8) {
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
	// bl 0x83a82480
	ctx.lr = 0x83A9EF10;
	sub_83A82480(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a9e7a0
	ctx.lr = 0x83A9EF18;
	sub_83A9E7A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83a824c0
	ctx.lr = 0x83A9EF20;
	sub_83A824C0(ctx, base);
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

__attribute__((alias("__imp__sub_83A9EF38"))) PPC_WEAK_FUNC(sub_83A9EF38);
PPC_FUNC_IMPL(__imp__sub_83A9EF38) {
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
	// bl 0x83a82480
	ctx.lr = 0x83A9EF50;
	sub_83A82480(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83aa3d20
	ctx.lr = 0x83A9EF58;
	sub_83AA3D20(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83a9ef68
	if (!cr0.eq) goto loc_83A9EF68;
	// li r31,-1
	ctx.r31.s64 = -1;
	// b 0x83a9ef70
	goto loc_83A9EF70;
loc_83A9EF68:
	// bl 0x83a9d930
	ctx.lr = 0x83A9EF6C;
	sub_83A9D930(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_83A9EF70:
	// bl 0x83a824c0
	ctx.lr = 0x83A9EF74;
	sub_83A824C0(ctx, base);
	// extsw r3,r31
	ctx.r3.s64 = ctx.r31.s32;
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

__attribute__((alias("__imp__sub_83A9EF8C"))) PPC_WEAK_FUNC(sub_83A9EF8C);
PPC_FUNC_IMPL(__imp__sub_83A9EF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A9EF90"))) PPC_WEAK_FUNC(sub_83A9EF90);
PPC_FUNC_IMPL(__imp__sub_83A9EF90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A9EF98;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83a9efb4
	if (!cr6.eq) goto loc_83A9EFB4;
	// addi r30,r1,88
	ctx.r30.s64 = ctx.r1.s64 + 88;
loc_83A9EFB4:
	// li r11,-1
	ctx.r11.s64 = -1;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// std r11,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r11.u64);
	// bne cr6,0x83a9efc8
	if (!cr6.eq) goto loc_83A9EFC8;
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
loc_83A9EFC8:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x83a82480
	ctx.lr = 0x83A9EFD0;
	sub_83A82480(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83aa3d20
	ctx.lr = 0x83A9EFD8;
	sub_83AA3D20(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83a9efe8
	if (!cr0.eq) goto loc_83A9EFE8;
loc_83A9EFE0:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x83a9f014
	goto loc_83A9F014;
loc_83A9EFE8:
	// bl 0x83a9d858
	ctx.lr = 0x83A9EFEC;
	sub_83A9D858(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x83a9efe0
	if (!cr6.eq) goto loc_83A9EFE0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a9e880
	ctx.lr = 0x83A9EFFC;
	sub_83A9E880(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83a9efe0
	if (cr0.eq) goto loc_83A9EFE0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83a855a8
	ctx.lr = 0x83A9F010;
	sub_83A855A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_83A9F014:
	// bl 0x83a824c0
	ctx.lr = 0x83A9F018;
	sub_83A824C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A9F024"))) PPC_WEAK_FUNC(sub_83A9F024);
PPC_FUNC_IMPL(__imp__sub_83A9F024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A9F028"))) PPC_WEAK_FUNC(sub_83A9F028);
PPC_FUNC_IMPL(__imp__sub_83A9F028) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83a9f050
	if (!cr6.eq) goto loc_83A9F050;
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
loc_83A9F050:
	// bl 0x83a82480
	ctx.lr = 0x83A9F054;
	sub_83A82480(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a9e880
	ctx.lr = 0x83A9F05C;
	sub_83A9E880(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83a9f06c
	if (!cr0.eq) goto loc_83A9F06C;
loc_83A9F064:
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x83a9f0b0
	goto loc_83A9F0B0;
loc_83A9F06C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83a84528
	ctx.lr = 0x83A9F074;
	sub_83A84528(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a9f064
	if (cr0.eq) goto loc_83A9F064;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// ld r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// std r8,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r8.u64);
	// std r7,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r7.u64);
	// std r6,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r6.u64);
loc_83A9F0B0:
	// bl 0x83a824c0
	ctx.lr = 0x83A9F0B4;
	sub_83A824C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

__attribute__((alias("__imp__sub_83A9F0D0"))) PPC_WEAK_FUNC(sub_83A9F0D0);
PPC_FUNC_IMPL(__imp__sub_83A9F0D0) {
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
	// addi r31,r11,27800
	ctx.r31.s64 = ctx.r11.s64 + 27800;
	// b 0x83a9f0f4
	goto loc_83A9F0F4;
loc_83A9F0EC:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x83a9ea30
	ctx.lr = 0x83A9F0F4;
	sub_83A9EA30(ctx, base);
loc_83A9F0F4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a9f0ec
	if (!cr6.eq) goto loc_83A9F0EC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bne 0x83a9f114
	if (!cr0.eq) goto loc_83A9F114;
	// bl 0x83102db0
	ctx.lr = 0x83A9F114;
	sub_83102DB0(ctx, base);
loc_83A9F114:
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

__attribute__((alias("__imp__sub_83A9F128"))) PPC_WEAK_FUNC(sub_83A9F128);
PPC_FUNC_IMPL(__imp__sub_83A9F128) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A9F130;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a9f318
	if (cr6.eq) goto loc_83A9F318;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r3,64(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// lfs f31,9008(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x83aa5b98
	ctx.lr = 0x83A9F168;
	sub_83AA5B98(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83a9f180
	if (!cr0.eq) goto loc_83A9F180;
	// lwz r11,108(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 108);
	// lwz r31,56(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r30,52(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// b 0x83a9f18c
	goto loc_83A9F18C;
loc_83A9F180:
	// lwz r31,28(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lfs f31,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// lwz r30,24(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
loc_83A9F18C:
	// lwz r11,108(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 108);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lbz r11,37(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 37);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x83a9f254
	if (!cr0.eq) goto loc_83A9F254;
	// bl 0x83aa3ce8
	ctx.lr = 0x83A9F1A4;
	sub_83AA3CE8(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x83a9ef90
	ctx.lr = 0x83A9F1B0;
	sub_83A9EF90(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a9f244
	if (cr0.eq) goto loc_83A9F244;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83a9f208
	if (cr6.eq) goto loc_83A9F208;
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// clrldi r11,r31,32
	ctx.r11.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// cmpd cr6,r10,r11
	cr6.compare<int64_t>(ctx.r10.s64, ctx.r11.s64, xer);
	// ble cr6,0x83a9f208
	if (!cr6.gt) goto loc_83A9F208;
	// clrldi r11,r30,32
	ctx.r11.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// subf r9,r30,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r30.s64;
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// rotldi r10,r8,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u64, 1);
	// divd r7,r8,r9
	ctx.r7.s64 = PPCDivide(ctx.r8.s64, ctx.r9.s64);
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// mulld r10,r7,r9
	ctx.r10.s64 = ctx.r7.s64 * ctx.r9.s64;
	// subf r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	// tdllei r9,0
	// andc r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r6.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// tdlgei r9,-1
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
loc_83A9F208:
	// lwa r11,80(r1)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 80));
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fdiv f13,f13,f12
	ctx.f13.f64 = ctx.f13.f64 / ctx.f12.f64;
	// lfs f0,-23580(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23580);
	ctx.f0.f64 = double(temp.f32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwz r29,100(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// b 0x83a9f300
	goto loc_83A9F300;
loc_83A9F244:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a9d930
	ctx.lr = 0x83A9F24C;
	sub_83A9D930(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x83a9f300
	goto loc_83A9F300;
loc_83A9F254:
	// bl 0x83aa4528
	ctx.lr = 0x83A9F258;
	sub_83AA4528(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83a9f300
	if (cr0.eq) goto loc_83A9F300;
	// bl 0x83aa3ce8
	ctx.lr = 0x83A9F264;
	sub_83AA3CE8(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x83a9ef90
	ctx.lr = 0x83A9F270;
	sub_83A9EF90(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a9f300
	if (cr0.eq) goto loc_83A9F300;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83a9f2c8
	if (cr6.eq) goto loc_83A9F2C8;
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// clrldi r11,r31,32
	ctx.r11.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// cmpd cr6,r10,r11
	cr6.compare<int64_t>(ctx.r10.s64, ctx.r11.s64, xer);
	// ble cr6,0x83a9f2c8
	if (!cr6.gt) goto loc_83A9F2C8;
	// clrldi r11,r30,32
	ctx.r11.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// subf r9,r30,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r30.s64;
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// rotldi r10,r8,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u64, 1);
	// divd r7,r8,r9
	ctx.r7.s64 = PPCDivide(ctx.r8.s64, ctx.r9.s64);
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// mulld r10,r7,r9
	ctx.r10.s64 = ctx.r7.s64 * ctx.r9.s64;
	// subf r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	// tdllei r9,0
	// andc r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r6.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// tdlgei r9,-1
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
loc_83A9F2C8:
	// lwa r11,80(r1)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 80));
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fdiv f13,f0,f13
	ctx.f13.f64 = ctx.f0.f64 / ctx.f13.f64;
	// lfs f0,-23580(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23580);
	ctx.f0.f64 = double(temp.f32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwz r29,100(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
loc_83A9F300:
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,108(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 108);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x83ab73a8
	ctx.lr = 0x83A9F318;
	sub_83AB73A8(ctx, base);
loc_83A9F318:
	// lwz r31,48(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// b 0x83a9f32c
	goto loc_83A9F32C;
loc_83A9F320:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83a9f128
	ctx.lr = 0x83A9F328;
	sub_83A9F128(ctx, base);
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_83A9F32C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83a9f320
	if (!cr6.eq) goto loc_83A9F320;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A9F340"))) PPC_WEAK_FUNC(sub_83A9F340);
PPC_FUNC_IMPL(__imp__sub_83A9F340) {
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
	// bl 0x83a82480
	ctx.lr = 0x83A9F354;
	sub_83A82480(ctx, base);
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r31,27804(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27804);
	// b 0x83a9f36c
	goto loc_83A9F36C;
loc_83A9F360:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83a9ebe8
	ctx.lr = 0x83A9F368;
	sub_83A9EBE8(ctx, base);
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_83A9F36C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83a9f360
	if (!cr6.eq) goto loc_83A9F360;
	// bl 0x83a824c0
	ctx.lr = 0x83A9F378;
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

__attribute__((alias("__imp__sub_83A9F38C"))) PPC_WEAK_FUNC(sub_83A9F38C);
PPC_FUNC_IMPL(__imp__sub_83A9F38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A9F390"))) PPC_WEAK_FUNC(sub_83A9F390);
PPC_FUNC_IMPL(__imp__sub_83A9F390) {
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
	// bl 0x83ab6ab8
	ctx.lr = 0x83A9F3A8;
	sub_83AB6AB8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83ab6ac8
	ctx.lr = 0x83A9F3B0;
	sub_83AB6AC8(ctx, base);
	// cmpw cr6,r31,r3
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r3.s32, xer);
	// beq cr6,0x83a9f3f8
	if (cr6.eq) goto loc_83A9F3F8;
	// bl 0x83a82480
	ctx.lr = 0x83A9F3BC;
	sub_83A82480(ctx, base);
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r30,27804(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27804);
	// b 0x83a9f3ec
	goto loc_83A9F3EC;
loc_83A9F3C8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r31,164(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// b 0x83a9f3e0
	goto loc_83A9F3E0;
loc_83A9F3D4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83a9f128
	ctx.lr = 0x83A9F3DC;
	sub_83A9F128(ctx, base);
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_83A9F3E0:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83a9f3d4
	if (!cr6.eq) goto loc_83A9F3D4;
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_83A9F3EC:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83a9f3c8
	if (!cr6.eq) goto loc_83A9F3C8;
	// bl 0x83a824c0
	ctx.lr = 0x83A9F3F8;
	sub_83A824C0(ctx, base);
loc_83A9F3F8:
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

__attribute__((alias("__imp__sub_83A9F410"))) PPC_WEAK_FUNC(sub_83A9F410);
PPC_FUNC_IMPL(__imp__sub_83A9F410) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x83A9F418;
	__savegprlr_20(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r25,r28
	ctx.r25.u64 = ctx.r28.u64;
	// bne cr6,0x83a9f450
	if (!cr6.eq) goto loc_83A9F450;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,25704
	ctx.r4.s64 = ctx.r11.s64 + 25704;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A9F448;
	sub_831EA418(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83a9f8ac
	goto loc_83A9F8AC;
loc_83A9F450:
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// li r21,-1
	ctx.r21.s64 = -1;
	// li r22,1
	ctx.r22.s64 = 1;
	// li r20,2
	ctx.r20.s64 = 2;
	// stw r21,940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 940, ctx.r21.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stb r22,156(r31)
	PPC_STORE_U8(ctx.r31.u32 + 156, ctx.r22.u8);
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// stb r20,158(r31)
	PPC_STORE_U8(ctx.r31.u32 + 158, ctx.r20.u8);
	// stw r10,936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 936, ctx.r10.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a9f498
	if (!cr6.eq) goto loc_83A9F498;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,25648
	ctx.r4.s64 = ctx.r11.s64 + 25648;
	// bl 0x831ea3f0
	ctx.lr = 0x83A9F490;
	sub_831EA3F0(ctx, base);
loc_83A9F490:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// b 0x83a9f8ac
	goto loc_83A9F8AC;
loc_83A9F498:
	// lbz r11,157(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 157);
	// mr r24,r28
	ctx.r24.u64 = ctx.r28.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83a9f4ac
	if (cr0.eq) goto loc_83A9F4AC;
	// mr r24,r22
	ctx.r24.u64 = ctx.r22.u64;
loc_83A9F4AC:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq cr6,0x83a9f4b8
	if (cr6.eq) goto loc_83A9F4B8;
	// ori r24,r24,2
	ctx.r24.u64 = ctx.r24.u64 | 2;
loc_83A9F4B8:
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x83a9f4ec
	if (cr6.eq) goto loc_83A9F4EC;
	// bl 0x83a9e880
	ctx.lr = 0x83A9F4C8;
	sub_83A9E880(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne 0x83a9f4e0
	if (!cr0.eq) goto loc_83A9F4E0;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a9e930
	ctx.lr = 0x83A9F4DC;
	sub_83A9E930(ctx, base);
	// b 0x83a9f4ec
	goto loc_83A9F4EC;
loc_83A9F4E0:
	// li r4,116
	ctx.r4.s64 = 116;
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// bl 0x83ac1040
	ctx.lr = 0x83A9F4EC;
	sub_83AC1040(ctx, base);
loc_83A9F4EC:
	// bl 0x83aa3a48
	ctx.lr = 0x83A9F4F0;
	sub_83AA3A48(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt 0x83a9f50c
	if (cr0.gt) goto loc_83A9F50C;
	// bl 0x83a9f340
	ctx.lr = 0x83A9F4FC;
	sub_83A9F340(ctx, base);
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,25480
	ctx.r4.s64 = ctx.r11.s64 + 25480;
	// bl 0x831ea3f0
	ctx.lr = 0x83A9F50C;
	sub_831EA3F0(ctx, base);
loc_83A9F50C:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// bl 0x83aa3a58
	ctx.lr = 0x83A9F518;
	sub_83AA3A58(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq 0x83a9f490
	if (cr0.eq) goto loc_83A9F490;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83aa3ce8
	ctx.lr = 0x83A9F528;
	sub_83AA3CE8(ctx, base);
	// stw r31,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r31.u32);
	// lbz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 108);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// stb r11,124(r30)
	PPC_STORE_U8(ctx.r30.u32 + 124, ctx.r11.u8);
	// stw r24,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r24.u32);
	// lwz r11,968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 968);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// beq cr6,0x83a9f564
	if (cr6.eq) goto loc_83A9F564;
	// lis r10,-31830
	ctx.r10.s64 = -2086010880;
	// addi r10,r10,-14008
	ctx.r10.s64 = ctx.r10.s64 + -14008;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// stw r3,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r3.u32);
	// b 0x83a9f570
	goto loc_83A9F570;
loc_83A9F564:
	// stw r28,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r28.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// stw r28,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r28.u32);
loc_83A9F570:
	// lwz r11,976(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 976);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// beq cr6,0x83a9f598
	if (cr6.eq) goto loc_83A9F598;
	// lis r10,-31830
	ctx.r10.s64 = -2086010880;
	// addi r10,r10,-13904
	ctx.r10.s64 = ctx.r10.s64 + -13904;
	// stw r10,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r10.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// stw r23,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r23.u32);
	// b 0x83a9f5a4
	goto loc_83A9F5A4;
loc_83A9F598:
	// stw r28,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r28.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// stw r28,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r28.u32);
loc_83A9F5A4:
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// stw r11,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r11.u32);
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// stw r11,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r11.u32);
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// stw r11,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r11.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// stw r30,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r30.u32);
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bge cr6,0x83a9f628
	if (!cr6.lt) goto loc_83A9F628;
	// bl 0x83a90400
	ctx.lr = 0x83A9F5D4;
	sub_83A90400(ctx, base);
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// lis r10,-31830
	ctx.r10.s64 = -2086010880;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r10,r10,-4480
	ctx.r10.s64 = ctx.r10.s64 + -4480;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x83a9f610
	if (cr6.eq) goto loc_83A9F610;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x83a9f610
	if (!cr6.gt) goto loc_83A9F610;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, xer);
	// bgt cr6,0x83a9f614
	if (cr6.gt) goto loc_83A9F614;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// b 0x83a9f618
	goto loc_83A9F618;
loc_83A9F610:
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
loc_83A9F614:
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_83A9F618:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x83ac0ba8
	ctx.lr = 0x83A9F624;
	sub_83AC0BA8(ctx, base);
	// b 0x83a9f6d4
	goto loc_83A9F6D4;
loc_83A9F628:
	// bl 0x83aa4540
	ctx.lr = 0x83A9F62C;
	sub_83AA4540(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// bne 0x83a9f640
	if (!cr0.eq) goto loc_83A9F640;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83aa4748
	ctx.lr = 0x83A9F63C;
	sub_83AA4748(ctx, base);
	// b 0x83a9f490
	goto loc_83A9F490;
loc_83A9F640:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a9b718
	ctx.lr = 0x83A9F648;
	sub_83A9B718(ctx, base);
	// lwz r11,948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 948);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a9f660
	if (cr6.eq) goto loc_83A9F660;
	// lwz r11,952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 952);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a9f668
	if (!cr6.eq) goto loc_83A9F668;
loc_83A9F660:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x83a9f67c
	if (cr6.eq) goto loc_83A9F67C;
loc_83A9F668:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,68(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// bl 0x83ace2c8
	ctx.lr = 0x83A9F678;
	sub_83ACE2C8(ctx, base);
	// b 0x83a9f688
	goto loc_83A9F688;
loc_83A9F67C:
	// lwz r4,68(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// bl 0x83ace2b0
	ctx.lr = 0x83A9F688;
	sub_83ACE2B0(ctx, base);
loc_83A9F688:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// bl 0x83acd578
	ctx.lr = 0x83A9F694;
	sub_83ACD578(ctx, base);
	// cmpwi cr6,r29,-1
	cr6.compare<int32_t>(ctx.r29.s32, -1, xer);
	// bne cr6,0x83a9f6a0
	if (!cr6.eq) goto loc_83A9F6A0;
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
loc_83A9F6A0:
	// stw r29,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r29.u32);
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a9f6b8
	if (!cr6.eq) goto loc_83A9F6B8;
	// stw r27,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r27.u32);
	// b 0x83a9f6c4
	goto loc_83A9F6C4;
loc_83A9F6B8:
	// stw r28,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r28.u32);
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
loc_83A9F6C4:
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// stw r27,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r27.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r11.u32);
loc_83A9F6D4:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// stw r28,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r28.u32);
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// bne cr6,0x83a9f6f4
	if (!cr6.eq) goto loc_83A9F6F4;
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
	// b 0x83a9f700
	goto loc_83A9F700;
loc_83A9F6F4:
	// stw r28,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r28.u32);
	// lwz r10,168(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
loc_83A9F700:
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// stw r22,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r22.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// beq cr6,0x83a9f720
	if (cr6.eq) goto loc_83A9F720;
	// mr r23,r21
	ctx.r23.u64 = ctx.r21.u64;
loc_83A9F720:
	// lwz r11,948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 948);
	// stw r23,940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 940, ctx.r23.u32);
	// stw r28,936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 936, ctx.r28.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a9f740
	if (cr6.eq) goto loc_83A9F740;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x83a9f740
	if (cr6.eq) goto loc_83A9F740;
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
loc_83A9F740:
	// lbz r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 120);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83a9f7c0
	if (cr0.eq) goto loc_83A9F7C0;
	// lwz r10,952(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 952);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83a9f774
	if (!cr6.eq) goto loc_83A9F774;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x83a9f774
	if (!cr6.eq) goto loc_83A9F774;
	// bl 0x83ab5f18
	ctx.lr = 0x83A9F764;
	sub_83AB5F18(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83a9f774
	if (cr0.eq) goto loc_83A9F774;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83ab66c0
	ctx.lr = 0x83A9F774;
	sub_83AB66C0(ctx, base);
loc_83A9F774:
	// lwz r11,948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 948);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a9f7c0
	if (cr6.eq) goto loc_83A9F7C0;
	// lwz r11,952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 952);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a9f7c0
	if (cr6.eq) goto loc_83A9F7C0;
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// oris r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 65536;
	// stw r11,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r11.u32);
	// lwz r3,948(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 948);
	// bl 0x83ab5e40
	ctx.lr = 0x83A9F7A4;
	sub_83AB5E40(ctx, base);
	// lwz r11,952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 952);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,940(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 940);
	// lwz r4,956(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 956);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A9F7BC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stb r22,121(r30)
	PPC_STORE_U8(ctx.r30.u32 + 121, ctx.r22.u8);
loc_83A9F7C0:
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// bl 0x82624b10
	ctx.lr = 0x83A9F7C8;
	sub_82624B10(ctx, base);
	// mr. r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r25.s32, 0, xer);
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// ble 0x83a9f8a8
	if (!cr0.gt) goto loc_83A9F8A8;
	// rlwinm r26,r24,0,30,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x2;
loc_83A9F7D8:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// bl 0x83ac1318
	ctx.lr = 0x83A9F7E4;
	sub_83AC1318(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// bne cr6,0x83a9f808
	if (!cr6.eq) goto loc_83A9F808;
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x83a87538
	ctx.lr = 0x83A9F808;
	sub_83A87538(ctx, base);
loc_83A9F808:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// sthx r29,r28,r11
	PPC_STORE_U16(ctx.r28.u32 + ctx.r11.u32, ctx.r29.u16);
	// bne cr6,0x83a9f86c
	if (!cr6.eq) goto loc_83A9F86C;
	// lwz r29,1012(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1012);
	// stb r22,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r22.u8);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83a9f850
	if (cr6.eq) goto loc_83A9F850;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83815cb0
	ctx.lr = 0x83A9F830;
	sub_83815CB0(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83a9f854
	if (cr0.eq) goto loc_83A9F854;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lhzx r4,r28,r11
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r28.u32 + ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83ab7c08
	ctx.lr = 0x83A9F84C;
	sub_83AB7C08(ctx, base);
	// b 0x83a9f860
	goto loc_83A9F860;
loc_83A9F850:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
loc_83A9F854:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lhzx r3,r28,r11
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r28.u32 + ctx.r11.u32);
	// bl 0x83a89ad0
	ctx.lr = 0x83A9F860;
	sub_83A89AD0(ctx, base);
loc_83A9F860:
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a9f490
	if (cr0.eq) goto loc_83A9F490;
	// b 0x83a9f870
	goto loc_83A9F870;
loc_83A9F86C:
	// stb r20,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r20.u8);
loc_83A9F870:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// cmpw cr6,r27,r25
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r25.s32, xer);
	// blt cr6,0x83a9f7d8
	if (cr6.lt) goto loc_83A9F7D8;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// ble cr6,0x83a9f8a8
	if (!cr6.gt) goto loc_83A9F8A8;
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// bl 0x83a88f88
	ctx.lr = 0x83A9F890;
	sub_83A88F88(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a9f8a8
	if (!cr6.eq) goto loc_83A9F8A8;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83aa4a78
	ctx.lr = 0x83A9F8A8;
	sub_83AA4A78(ctx, base);
loc_83A9F8A8:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_83A9F8AC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A9F8B4"))) PPC_WEAK_FUNC(sub_83A9F8B4);
PPC_FUNC_IMPL(__imp__sub_83A9F8B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A9F8B8"))) PPC_WEAK_FUNC(sub_83A9F8B8);
PPC_FUNC_IMPL(__imp__sub_83A9F8B8) {
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
	// bl 0x83a82480
	ctx.lr = 0x83A9F8D0;
	sub_83A82480(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a9f410
	ctx.lr = 0x83A9F8DC;
	sub_83A9F410(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83a824c0
	ctx.lr = 0x83A9F8E4;
	sub_83A824C0(ctx, base);
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

__attribute__((alias("__imp__sub_83A9F8FC"))) PPC_WEAK_FUNC(sub_83A9F8FC);
PPC_FUNC_IMPL(__imp__sub_83A9F8FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A9F900"))) PPC_WEAK_FUNC(sub_83A9F900);
PPC_FUNC_IMPL(__imp__sub_83A9F900) {
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
	// bl 0x83a82480
	ctx.lr = 0x83A9F918;
	sub_83A82480(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a9f410
	ctx.lr = 0x83A9F924;
	sub_83A9F410(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83a824c0
	ctx.lr = 0x83A9F92C;
	sub_83A824C0(ctx, base);
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

__attribute__((alias("__imp__sub_83A9F944"))) PPC_WEAK_FUNC(sub_83A9F944);
PPC_FUNC_IMPL(__imp__sub_83A9F944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A9F948"))) PPC_WEAK_FUNC(sub_83A9F948);
PPC_FUNC_IMPL(__imp__sub_83A9F948) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A9F950;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x83a9fb18
	if (cr6.eq) goto loc_83A9FB18;
	// cmpwi cr6,r5,2
	cr6.compare<int32_t>(ctx.r5.s32, 2, xer);
	// beq cr6,0x83a9faf8
	if (cr6.eq) goto loc_83A9FAF8;
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x83a9fac8
	if (cr6.eq) goto loc_83A9FAC8;
	// cmpwi cr6,r5,4
	cr6.compare<int32_t>(ctx.r5.s32, 4, xer);
	// beq cr6,0x83a9fa80
	if (cr6.eq) goto loc_83A9FA80;
	// cmpwi cr6,r5,5
	cr6.compare<int32_t>(ctx.r5.s32, 5, xer);
	// beq cr6,0x83a9fa10
	if (cr6.eq) goto loc_83A9FA10;
	// cmpwi cr6,r5,7
	cr6.compare<int32_t>(ctx.r5.s32, 7, xer);
	// li r29,0
	ctx.r29.s64 = 0;
	// beq cr6,0x83a9f9c8
	if (cr6.eq) goto loc_83A9F9C8;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x83a9fb4c
	if (!cr6.gt) goto loc_83A9FB4C;
loc_83A9F9A4:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// add r4,r29,r30
	ctx.r4.u64 = ctx.r29.u64 + ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a9dd48
	ctx.lr = 0x83A9F9B8;
	sub_83A9DD48(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r28
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, xer);
	// blt cr6,0x83a9f9a4
	if (cr6.lt) goto loc_83A9F9A4;
	// b 0x83a9fb4c
	goto loc_83A9FB4C;
loc_83A9F9C8:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// add r4,r29,r30
	ctx.r4.u64 = ctx.r29.u64 + ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a9dd48
	ctx.lr = 0x83A9F9DC;
	sub_83A9DD48(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,6
	cr6.compare<int32_t>(ctx.r29.s32, 6, xer);
	// blt cr6,0x83a9f9c8
	if (cr6.lt) goto loc_83A9F9C8;
	// addi r30,r30,6
	ctx.r30.s64 = ctx.r30.s64 + 6;
loc_83A9F9EC:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f31,10700(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10700);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83a9dd48
	ctx.lr = 0x83A9FA08;
	sub_83A9DD48(ctx, base);
	// li r5,5
	ctx.r5.s64 = 5;
	// b 0x83a9fb3c
	goto loc_83A9FB3C;
loc_83A9FA10:
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x83a82e68
	ctx.lr = 0x83A9FA18;
	sub_83A82E68(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r30,2
	ctx.r4.s64 = ctx.r30.s64 + 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// beq 0x83a9fa34
	if (cr0.eq) goto loc_83A9FA34;
	// li r5,3
	ctx.r5.s64 = 3;
loc_83A9FA34:
	// bl 0x83a9dd48
	ctx.lr = 0x83A9FA38;
	sub_83A9DD48(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a9dd48
	ctx.lr = 0x83A9FA4C;
	sub_83A9DD48(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r30,1
	ctx.r4.s64 = ctx.r30.s64 + 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a9dd48
	ctx.lr = 0x83A9FA60;
	sub_83A9DD48(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,3
	ctx.r4.s64 = ctx.r30.s64 + 3;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a9dd48
	ctx.lr = 0x83A9FA74;
	sub_83A9DD48(ctx, base);
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// b 0x83a9fb40
	goto loc_83A9FB40;
loc_83A9FA80:
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a9dd48
	ctx.lr = 0x83A9FA94;
	sub_83A9DD48(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r30,1
	ctx.r4.s64 = ctx.r30.s64 + 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a9dd48
	ctx.lr = 0x83A9FAA8;
	sub_83A9DD48(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,2
	ctx.r4.s64 = ctx.r30.s64 + 2;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a9dd48
	ctx.lr = 0x83A9FABC;
	sub_83A9DD48(ctx, base);
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r4,r30,3
	ctx.r4.s64 = ctx.r30.s64 + 3;
	// b 0x83a9fb40
	goto loc_83A9FB40;
loc_83A9FAC8:
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a9dd48
	ctx.lr = 0x83A9FADC;
	sub_83A9DD48(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r30,1
	ctx.r4.s64 = ctx.r30.s64 + 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a9dd48
	ctx.lr = 0x83A9FAF0;
	sub_83A9DD48(ctx, base);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// b 0x83a9f9ec
	goto loc_83A9F9EC;
loc_83A9FAF8:
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a9dd48
	ctx.lr = 0x83A9FB0C;
	sub_83A9DD48(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r30,1
	ctx.r4.s64 = ctx.r30.s64 + 1;
	// b 0x83a9fb40
	goto loc_83A9FB40;
loc_83A9FB18:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,10700(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10700);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83a9dd48
	ctx.lr = 0x83A9FB38;
	sub_83A9DD48(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
loc_83A9FB3C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_83A9FB40:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83a9dd48
	ctx.lr = 0x83A9FB4C;
	sub_83A9DD48(ctx, base);
loc_83A9FB4C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A9FB58"))) PPC_WEAK_FUNC(sub_83A9FB58);
PPC_FUNC_IMPL(__imp__sub_83A9FB58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A9FB60;
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
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x83a9c850
	ctx.lr = 0x83A9FB80;
	sub_83A9C850(ctx, base);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x83a9fba0
	if (cr6.lt) goto loc_83A9FBA0;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_83A9FB90:
	// add r30,r30,r29
	ctx.r30.u64 = ctx.r30.u64 + ctx.r29.u64;
	// clrlwi r29,r3,28
	ctx.r29.u64 = ctx.r3.u32 & 0xF;
	// rlwinm r3,r3,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 28) & 0xFFFFFFF;
	// bdnz 0x83a9fb90
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A9FB90;
loc_83A9FBA0:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a9f948
	ctx.lr = 0x83A9FBB4;
	sub_83A9F948(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A9FBC0"))) PPC_WEAK_FUNC(sub_83A9FBC0);
PPC_FUNC_IMPL(__imp__sub_83A9FBC0) {
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
	ctx.lr = 0x83A9FBC8;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a9fd18
	if (cr6.eq) goto loc_83A9FD18;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x83a9fd18
	if (cr6.lt) goto loc_83A9FD18;
	// cmpwi cr6,r4,8
	cr6.compare<int32_t>(ctx.r4.s32, 8, xer);
	// ble cr6,0x83a9fc00
	if (!cr6.gt) goto loc_83A9FC00;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,25912
	ctx.r4.s64 = ctx.r11.s64 + 25912;
	// bl 0x831ea3f0
	ctx.lr = 0x83A9FBFC;
	sub_831EA3F0(ctx, base);
	// b 0x83a9fd2c
	goto loc_83A9FD2C;
loc_83A9FC00:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x83a9fc14
	if (!cr6.eq) goto loc_83A9FC14;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83a9c848
	ctx.lr = 0x83A9FC10;
	sub_83A9C848(ctx, base);
	// b 0x83a9fd2c
	goto loc_83A9FD2C;
loc_83A9FC14:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x83a9fc28
	if (!cr6.eq) goto loc_83A9FC28;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,25900
	ctx.r4.s64 = ctx.r11.s64 + 25900;
	// b 0x83a9fd20
	goto loc_83A9FD20;
loc_83A9FC28:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble cr6,0x83a9fc74
	if (!cr6.gt) goto loc_83A9FC74;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
loc_83A9FC38:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83a9fd00
	if (!cr6.gt) goto loc_83A9FD00;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// ble cr6,0x83a9fc64
	if (!cr6.gt) goto loc_83A9FC64;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x83a9fc64
	if (cr6.eq) goto loc_83A9FC64;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// beq cr6,0x83a9fc64
	if (cr6.eq) goto loc_83A9FC64;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// bne cr6,0x83a9fd00
	if (!cr6.eq) goto loc_83A9FD00;
loc_83A9FC64:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r9,r4
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, xer);
	// blt cr6,0x83a9fc38
	if (cr6.lt) goto loc_83A9FC38;
loc_83A9FC74:
	// addic. r11,r4,-1
	xer.ca = ctx.r4.u32 > 0;
	ctx.r11.s64 = ctx.r4.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// blt 0x83a9fca4
	if (cr0.lt) goto loc_83A9FCA4;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_83A9FC94:
	// lwzu r11,-4(r10)
	ea = -4 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// rlwimi r11,r4,4,0,27
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 4) & 0xFFFFFFF0) | (ctx.r11.u64 & 0xFFFFFFFF0000000F);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bdnz 0x83a9fc94
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A9FC94;
loc_83A9FCA4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83a9c848
	ctx.lr = 0x83A9FCAC;
	sub_83A9C848(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x83a9c850
	ctx.lr = 0x83A9FCBC;
	sub_83A9C850(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lfs f31,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f31.f64 = double(temp.f32);
loc_83A9FCCC:
	// add r30,r30,r31
	ctx.r30.u64 = ctx.r30.u64 + ctx.r31.u64;
	// clrlwi. r31,r28,28
	ctx.r31.u64 = ctx.r28.u32 & 0xF;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// rlwinm r28,r28,28,4,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 28) & 0xFFFFFFF;
	// beq 0x83a9fd2c
	if (cr0.eq) goto loc_83A9FD2C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83a9f948
	ctx.lr = 0x83A9FCF0;
	sub_83A9F948(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,8
	cr6.compare<int32_t>(ctx.r29.s32, 8, xer);
	// blt cr6,0x83a9fccc
	if (cr6.lt) goto loc_83A9FCCC;
	// b 0x83a9fd2c
	goto loc_83A9FD2C;
loc_83A9FD00:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// addi r4,r11,25800
	ctx.r4.s64 = ctx.r11.s64 + 25800;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea400
	ctx.lr = 0x83A9FD14;
	sub_831EA400(ctx, base);
	// b 0x83a9fd2c
	goto loc_83A9FD2C;
loc_83A9FD18:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,25788
	ctx.r4.s64 = ctx.r11.s64 + 25788;
loc_83A9FD20:
	// li r5,-2
	ctx.r5.s64 = -2;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A9FD2C;
	sub_831EA418(ctx, base);
loc_83A9FD2C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A9FD38"))) PPC_WEAK_FUNC(sub_83A9FD38);
PPC_FUNC_IMPL(__imp__sub_83A9FD38) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 9;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x83a8a578
	ctx.lr = 0x83A9FD68;
	sub_83A8A578(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x83ac1648
	ctx.lr = 0x83A9FD78;
	sub_83AC1648(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x83ac16e0
	ctx.lr = 0x83A9FD84;
	sub_83AC16E0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x83a9fd94
	if (!cr0.lt) goto loc_83A9FD94;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83a9fd98
	goto loc_83A9FD98;
loc_83A9FD94:
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + ctx.r31.u64;
loc_83A9FD98:
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

__attribute__((alias("__imp__sub_83A9FDAC"))) PPC_WEAK_FUNC(sub_83A9FDAC);
PPC_FUNC_IMPL(__imp__sub_83A9FDAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A9FDB0"))) PPC_WEAK_FUNC(sub_83A9FDB0);
PPC_FUNC_IMPL(__imp__sub_83A9FDB0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r8,12(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mulli r11,r10,72
	ctx.r11.s64 = ctx.r10.s64 * 72;
	// lwz r7,16(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r6,20(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// bl 0x83ac18b0
	ctx.lr = 0x83A9FE00;
	sub_83AC18B0(ctx, base);
	// addic. r11,r3,8
	xer.ca = ctx.r3.u32 > 4294967287;
	ctx.r11.s64 = ctx.r3.s64 + 8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bgt 0x83a9fe10
	if (cr0.gt) goto loc_83A9FE10;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83a9fe18
	goto loc_83A9FE18;
loc_83A9FE10:
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,68
	ctx.r3.s64 = ctx.r11.s64 + 68;
loc_83A9FE18:
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

__attribute__((alias("__imp__sub_83A9FE2C"))) PPC_WEAK_FUNC(sub_83A9FE2C);
PPC_FUNC_IMPL(__imp__sub_83A9FE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A9FE30"))) PPC_WEAK_FUNC(sub_83A9FE30);
PPC_FUNC_IMPL(__imp__sub_83A9FE30) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a9fe84
	if (cr6.eq) goto loc_83A9FE84;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a9fe74
	if (cr6.eq) goto loc_83A9FE74;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,28(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A9FE6C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_83A9FE74:
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,27824(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27824);
	// bl 0x83b66520
	ctx.lr = 0x83A9FE84;
	sub_83B66520(ctx, base);
loc_83A9FE84:
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

__attribute__((alias("__imp__sub_83A9FE98"))) PPC_WEAK_FUNC(sub_83A9FE98);
PPC_FUNC_IMPL(__imp__sub_83A9FE98) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x83a9fe30
	sub_83A9FE30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A9FEA0"))) PPC_WEAK_FUNC(sub_83A9FEA0);
PPC_FUNC_IMPL(__imp__sub_83A9FEA0) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a9fef8
	if (cr6.eq) goto loc_83A9FEF8;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stb r4,22(r3)
	PPC_STORE_U8(ctx.r3.u32 + 22, ctx.r4.u8);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A9FEE8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a9fef8
	if (!cr0.eq) goto loc_83A9FEF8;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_83A9FEF8:
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

__attribute__((alias("__imp__sub_83A9FF0C"))) PPC_WEAK_FUNC(sub_83A9FF0C);
PPC_FUNC_IMPL(__imp__sub_83A9FF0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A9FF10"))) PPC_WEAK_FUNC(sub_83A9FF10);
PPC_FUNC_IMPL(__imp__sub_83A9FF10) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A9FF1C"))) PPC_WEAK_FUNC(sub_83A9FF1C);
PPC_FUNC_IMPL(__imp__sub_83A9FF1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A9FF20"))) PPC_WEAK_FUNC(sub_83A9FF20);
PPC_FUNC_IMPL(__imp__sub_83A9FF20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r10.u8);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83a9ff3c
	if (cr6.eq) goto loc_83A9FF3C;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_83A9FF3C:
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A9FF44"))) PPC_WEAK_FUNC(sub_83A9FF44);
PPC_FUNC_IMPL(__imp__sub_83A9FF44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A9FF48"))) PPC_WEAK_FUNC(sub_83A9FF48);
PPC_FUNC_IMPL(__imp__sub_83A9FF48) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,23(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 23);
	// stw r4,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r4.u32);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stb r11,23(r3)
	PPC_STORE_U8(ctx.r3.u32 + 23, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A9FF5C"))) PPC_WEAK_FUNC(sub_83A9FF5C);
PPC_FUNC_IMPL(__imp__sub_83A9FF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A9FF60"))) PPC_WEAK_FUNC(sub_83A9FF60);
PPC_FUNC_IMPL(__imp__sub_83A9FF60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a9ffa8
	if (cr6.eq) goto loc_83A9FFA8;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83a9ffa0
	if (cr6.eq) goto loc_83A9FFA0;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x83a9ff98
	if (cr6.eq) goto loc_83A9FF98;
	// ble cr6,0x83a9ff90
	if (!cr6.gt) goto loc_83A9FF90;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bgt cr6,0x83a9ff90
	if (cr6.gt) goto loc_83A9FF90;
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_83A9FF90:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_83A9FF98:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83A9FFA0:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_83A9FFA8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A9FFB0"))) PPC_WEAK_FUNC(sub_83A9FFB0);
PPC_FUNC_IMPL(__imp__sub_83A9FFB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A9FFB8;
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
	// bl 0x83a83240
	ctx.lr = 0x83A9FFCC;
	sub_83A83240(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,68(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A9FFEC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x83a83248
	ctx.lr = 0x83A9FFF0;
	sub_83A83248(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A9FFF8"))) PPC_WEAK_FUNC(sub_83A9FFF8);
PPC_FUNC_IMPL(__imp__sub_83A9FFF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r11,23(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 23);
	// stfs f1,44(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stb r11,23(r3)
	PPC_STORE_U8(ctx.r3.u32 + 23, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AA000C"))) PPC_WEAK_FUNC(sub_83AA000C);
PPC_FUNC_IMPL(__imp__sub_83AA000C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AA0010"))) PPC_WEAK_FUNC(sub_83AA0010);
PPC_FUNC_IMPL(__imp__sub_83AA0010) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,23(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 23);
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stb r11,23(r3)
	PPC_STORE_U8(ctx.r3.u32 + 23, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AA0024"))) PPC_WEAK_FUNC(sub_83AA0024);
PPC_FUNC_IMPL(__imp__sub_83AA0024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AA0028"))) PPC_WEAK_FUNC(sub_83AA0028);
PPC_FUNC_IMPL(__imp__sub_83AA0028) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r11,23(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 23);
	// stfs f1,40(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stb r11,23(r3)
	PPC_STORE_U8(ctx.r3.u32 + 23, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AA003C"))) PPC_WEAK_FUNC(sub_83AA003C);
PPC_FUNC_IMPL(__imp__sub_83AA003C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AA0040"))) PPC_WEAK_FUNC(sub_83AA0040);
PPC_FUNC_IMPL(__imp__sub_83AA0040) {
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
	// stfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f29.u64);
	// stfd f30,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// fmr f29,f1
	ctx.f29.f64 = ctx.f1.f64;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lfs f31,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f31.f64 = double(temp.f32);
	// fsubs f0,f1,f31
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f31.f64));
	// lfs f30,-8044(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8044);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f1,f0,f30
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// bl 0x831d1930
	ctx.lr = 0x83AA0088;
	sub_831D1930(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fadds f13,f29,f31
	ctx.f13.f64 = double(float(ctx.f29.f64 + ctx.f31.f64));
	// fneg f31,f0
	ctx.f31.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fmuls f1,f13,f30
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// bl 0x831d1930
	ctx.lr = 0x83AA009C;
	sub_831D1930(ctx, base);
	// lbz r11,21(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, xer);
	// bge cr6,0x83aa00d0
	if (!cr6.lt) goto loc_83AA00D0;
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mulli r11,r30,36
	ctx.r11.s64 = ctx.r30.s64 * 36;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stfs f31,4(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lbz r11,23(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 23);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stb r11,23(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23, ctx.r11.u8);
loc_83AA00D0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f30,-40(r1)
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

__attribute__((alias("__imp__sub_83AA00F4"))) PPC_WEAK_FUNC(sub_83AA00F4);
PPC_FUNC_IMPL(__imp__sub_83AA00F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AA00F8"))) PPC_WEAK_FUNC(sub_83AA00F8);
PPC_FUNC_IMPL(__imp__sub_83AA00F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lbz r11,21(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 21);
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// cmpwi cr6,r5,8
	cr6.compare<int32_t>(ctx.r5.s32, 8, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// mulli r11,r4,9
	ctx.r11.s64 = ctx.r4.s64 * 9;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f1,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// lbz r11,23(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 23);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stb r11,23(r3)
	PPC_STORE_U8(ctx.r3.u32 + 23, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AA0134"))) PPC_WEAK_FUNC(sub_83AA0134);
PPC_FUNC_IMPL(__imp__sub_83AA0134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AA0138"))) PPC_WEAK_FUNC(sub_83AA0138);
PPC_FUNC_IMPL(__imp__sub_83AA0138) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lbz r11,21(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 21);
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// cmpwi cr6,r5,8
	cr6.compare<int32_t>(ctx.r5.s32, 8, xer);
	// blt cr6,0x83aa0150
	if (cr6.lt) goto loc_83AA0150;
	// li r5,8
	ctx.r5.s64 = 8;
loc_83AA0150:
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mulli r10,r4,36
	ctx.r10.s64 = ctx.r4.s64 * 36;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r5,4
	cr6.compare<int32_t>(ctx.r5.s32, 4, xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne cr6,0x83aa018c
	if (!cr6.eq) goto loc_83AA018C;
	// lfs f0,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f0,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f0,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f0,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// b 0x83aa01ac
	goto loc_83AA01AC;
loc_83AA018C:
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x83aa01ac
	if (!cr6.gt) goto loc_83AA01AC;
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// subf r10,r11,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r11.s64;
loc_83AA019C:
	// lfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83aa019c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83AA019C;
loc_83AA01AC:
	// lbz r11,23(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 23);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stb r11,23(r3)
	PPC_STORE_U8(ctx.r3.u32 + 23, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AA01BC"))) PPC_WEAK_FUNC(sub_83AA01BC);
PPC_FUNC_IMPL(__imp__sub_83AA01BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AA01C0"))) PPC_WEAK_FUNC(sub_83AA01C0);
PPC_FUNC_IMPL(__imp__sub_83AA01C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83AA01C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r31,21(r3)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r3.u32 + 21);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi r31,0
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// ble 0x83aa0200
	if (!cr0.gt) goto loc_83AA0200;
	// li r30,0
	ctx.r30.s64 = 0;
loc_83AA01E0:
	// lwz r11,52(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// li r4,32
	ctx.r4.s64 = 32;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x831ea7a0
	ctx.lr = 0x83AA01F4;
	sub_831EA7A0(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,36
	ctx.r30.s64 = ctx.r30.s64 + 36;
	// bne 0x83aa01e0
	if (!cr0.eq) goto loc_83AA01E0;
loc_83AA0200:
	// lbz r11,23(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 23);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stb r11,23(r29)
	PPC_STORE_U8(ctx.r29.u32 + 23, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AA0214"))) PPC_WEAK_FUNC(sub_83AA0214);
PPC_FUNC_IMPL(__imp__sub_83AA0214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AA0218"))) PPC_WEAK_FUNC(sub_83AA0218);
PPC_FUNC_IMPL(__imp__sub_83AA0218) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83AA0220;
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
	// bl 0x83a83240
	ctx.lr = 0x83AA0234;
	sub_83A83240(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,88(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83AA0254;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x83a83248
	ctx.lr = 0x83AA0258;
	sub_83A83248(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AA0260"))) PPC_WEAK_FUNC(sub_83AA0260);
PPC_FUNC_IMPL(__imp__sub_83AA0260) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83AA0268;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x83a83240
	ctx.lr = 0x83AA0284;
	sub_83A83240(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,92(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83AA02A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x83a83248
	ctx.lr = 0x83AA02AC;
	sub_83A83248(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AA02B8"))) PPC_WEAK_FUNC(sub_83AA02B8);
PPC_FUNC_IMPL(__imp__sub_83AA02B8) {
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
	// bl 0x83a83240
	ctx.lr = 0x83AA02D0;
	sub_83A83240(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,96(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83AA02E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x83a83248
	ctx.lr = 0x83AA02EC;
	sub_83A83248(ctx, base);
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

__attribute__((alias("__imp__sub_83AA0300"))) PPC_WEAK_FUNC(sub_83AA0300);
PPC_FUNC_IMPL(__imp__sub_83AA0300) {
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
	// bl 0x83a83240
	ctx.lr = 0x83AA0320;
	sub_83A83240(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,100(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83AA033C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x83a83248
	ctx.lr = 0x83AA0340;
	sub_83A83248(ctx, base);
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

__attribute__((alias("__imp__sub_83AA0358"))) PPC_WEAK_FUNC(sub_83AA0358);
PPC_FUNC_IMPL(__imp__sub_83AA0358) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83AA0360;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x83a83240
	ctx.lr = 0x83AA037C;
	sub_83A83240(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,104(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83AA03A0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x83a83248
	ctx.lr = 0x83AA03A4;
	sub_83A83248(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AA03B0"))) PPC_WEAK_FUNC(sub_83AA03B0);
PPC_FUNC_IMPL(__imp__sub_83AA03B0) {
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
	// bl 0x83a83240
	ctx.lr = 0x83AA03C8;
	sub_83A83240(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,108(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83AA03E0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x83a83248
	ctx.lr = 0x83AA03E4;
	sub_83A83248(ctx, base);
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

__attribute__((alias("__imp__sub_83AA03F8"))) PPC_WEAK_FUNC(sub_83AA03F8);
PPC_FUNC_IMPL(__imp__sub_83AA03F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// cmpwi cr6,r5,5
	cr6.compare<int32_t>(ctx.r5.s32, 5, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// cmplwi cr6,r5,1
	cr6.compare<uint32_t>(ctx.r5.u32, 1, xer);
	// blt cr6,0x83aa05f8
	if (cr6.lt) goto loc_83AA05F8;
	// beq cr6,0x83aa0568
	if (cr6.eq) goto loc_83AA0568;
	// cmplwi cr6,r5,3
	cr6.compare<uint32_t>(ctx.r5.u32, 3, xer);
	// blt cr6,0x83aa04f0
	if (cr6.lt) goto loc_83AA04F0;
	// beq cr6,0x83aa0470
	if (cr6.eq) goto loc_83AA0470;
	// cmplwi cr6,r5,5
	cr6.compare<uint32_t>(ctx.r5.u32, 5, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// lis r9,-32205
	ctx.r9.s64 = -2110586880;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// lfs f13,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,26044(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 26044);
	ctx.f0.f64 = double(temp.f32);
loc_83AA0440:
	// lfs f11,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f12,f11,f0,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f12.f64));
	// lfs f10,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f11,f11,f0,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f10.f64));
	// stfs f12,20(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f11,24(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f13,28(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stfsu f13,32(r11)
	ea = 32 + ctx.r11.u32;
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83aa0440
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83AA0440;
	// blr 
	return;
loc_83AA0470:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// lis r9,-32205
	ctx.r9.s64 = -2110586880;
	// addi r11,r3,-12
	ctx.r11.s64 = ctx.r3.s64 + -12;
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,26044(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 26044);
	ctx.f13.f64 = double(temp.f32);
loc_83AA0490:
	// lfs f11,40(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f12,f11,f13,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f12.f64));
	// lfs f11,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f10,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f10,f9,f13,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f10.f64));
	// lfs f9,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// stfs f10,28(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stfs f10,20(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f12,32(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stfs f0,36(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// stfs f0,40(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// fadds f10,f8,f11
	ctx.f10.f64 = double(float(ctx.f8.f64 + ctx.f11.f64));
	// stfs f10,12(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// fadds f11,f9,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// stfs f11,16(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f12,24(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfsu f0,32(r11)
	ea = 32 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83aa0490
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83AA0490;
	// blr 
	return;
loc_83AA04F0:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32205
	ctx.r8.s64 = -2110586880;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// lfs f12,26048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 26048);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,9008(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,26044(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 26044);
	ctx.f13.f64 = double(temp.f32);
loc_83AA0518:
	// lfs f11,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f10,f10,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// lfs f9,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// fmadds f11,f9,f13,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmadds f10,f8,f13,f10
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fadds f11,f11,f7
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f7.f64));
	// stfs f11,4(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fadds f11,f10,f6
	ctx.f11.f64 = double(float(ctx.f10.f64 + ctx.f6.f64));
	// stfs f11,8(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfsu f0,32(r11)
	ea = 32 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83aa0518
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83AA0518;
	// blr 
	return;
loc_83AA0568:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32205
	ctx.r8.s64 = -2110586880;
	// addi r11,r3,-20
	ctx.r11.s64 = ctx.r3.s64 + -20;
	// lfs f12,26048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 26048);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,9008(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,26044(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 26044);
	ctx.f13.f64 = double(temp.f32);
loc_83AA0590:
	// lfs f11,44(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f10,f10,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// lfs f9,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lfs f7,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stfs f0,36(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// stfs f0,40(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// stfs f0,44(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// fmadds f11,f8,f13,f11
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f11.f64));
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// fmadds f10,f7,f13,f10
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fadds f11,f11,f9
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f9.f64));
	// fadds f10,f10,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// fadds f11,f11,f6
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f6.f64));
	// stfs f11,20(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// fadds f11,f10,f5
	ctx.f11.f64 = double(float(ctx.f10.f64 + ctx.f5.f64));
	// stfs f11,24(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfsu f0,32(r11)
	ea = 32 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83aa0590
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83AA0590;
	// blr 
	return;
loc_83AA05F8:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// lis r9,-32205
	ctx.r9.s64 = -2110586880;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32205
	ctx.r7.s64 = -2110586880;
	// addi r11,r3,-20
	ctx.r11.s64 = ctx.r3.s64 + -20;
	// lfs f11,26052(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 26052);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,26048(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 26048);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,9008(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,26044(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 26044);
	ctx.f13.f64 = double(temp.f32);
loc_83AA0628:
	// lfs f9,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// fadds f10,f10,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// lfs f8,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// lfs f9,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f9.f64 = double(temp.f32);
	// fadds f9,f8,f9
	ctx.f9.f64 = double(float(ctx.f8.f64 + ctx.f9.f64));
	// lfs f8,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f6.f64 = double(temp.f32);
	// fadds f7,f7,f6
	ctx.f7.f64 = double(float(ctx.f7.f64 + ctx.f6.f64));
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stfs f0,36(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// stfs f0,40(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// stfs f0,44(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// fmuls f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// fadds f9,f9,f8
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f8.f64));
	// fmadds f10,f9,f12,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fmadds f10,f7,f11,f10
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 + ctx.f10.f64));
	// stfs f10,20(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfsu f0,32(r11)
	ea = 32 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83aa0628
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83AA0628;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AA0688"))) PPC_WEAK_FUNC(sub_83AA0688);
PPC_FUNC_IMPL(__imp__sub_83AA0688) {
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
	// addi r30,r11,27816
	ctx.r30.s64 = ctx.r11.s64 + 27816;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83aa06c0
	if (cr6.eq) goto loc_83AA06C0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x83ac17a0
	ctx.lr = 0x83AA06B8;
	sub_83AC17A0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_83AA06C0:
	// lis r31,-31739
	ctx.r31.s64 = -2080047104;
	// lwz r3,27824(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27824);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83aa06e8
	if (cr6.eq) goto loc_83AA06E8;
	// lis r11,-31830
	ctx.r11.s64 = -2086010880;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-360
	ctx.r5.s64 = ctx.r11.s64 + -360;
	// bl 0x83b66458
	ctx.lr = 0x83AA06E0;
	sub_83B66458(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,27824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27824, ctx.r11.u32);
loc_83AA06E8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83AA0708"))) PPC_WEAK_FUNC(sub_83AA0708);
PPC_FUNC_IMPL(__imp__sub_83AA0708) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lbz r9,21(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 21);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// lfs f0,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// beq 0x83aa075c
	if (cr0.eq) goto loc_83AA075C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83AA0740:
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stfsx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, temp.u32);
	// lbz r9,21(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x83aa0740
	if (cr6.lt) goto loc_83AA0740;
loc_83AA075C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83aa01c0
	ctx.lr = 0x83AA0764;
	sub_83AA01C0(ctx, base);
	// lbz r11,23(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 23);
	// ori r11,r11,7
	ctx.r11.u64 = ctx.r11.u64 | 7;
	// stb r11,23(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_83AA0784"))) PPC_WEAK_FUNC(sub_83AA0784);
PPC_FUNC_IMPL(__imp__sub_83AA0784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AA0788"))) PPC_WEAK_FUNC(sub_83AA0788);
PPC_FUNC_IMPL(__imp__sub_83AA0788) {
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
	ctx.lr = 0x83AA0790;
	__savegprlr_28(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,24
	ctx.r28.s64 = ctx.r3.s64 + 24;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r5,r3,36
	ctx.r5.s64 = ctx.r3.s64 + 36;
	// li r6,12
	ctx.r6.s64 = 12;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831ea778
	ctx.lr = 0x83AA07B0;
	sub_831EA778(ctx, base);
	// lbz r11,21(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// lwz r5,52(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mulli r4,r11,36
	ctx.r4.s64 = ctx.r11.s64 * 36;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// bl 0x831ea778
	ctx.lr = 0x83AA07C8;
	sub_831EA778(ctx, base);
	// lbz r11,23(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 23);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// lwz r30,48(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// beq 0x83aa07f4
	if (cr0.eq) goto loc_83AA07F4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,60(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83AA07F4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83AA07F4:
	// lbz r11,23(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 23);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x83aa0924
	if (cr0.eq) goto loc_83AA0924;
	// lbz r29,22(r31)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r31.u32 + 22);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi r29,0
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble 0x83aa086c
	if (!cr0.gt) goto loc_83AA086C;
	// lfs f0,8(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// lfs f13,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
loc_83AA0820:
	// li r9,8
	ctx.r9.s64 = 8;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r6,r8,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83AA083C:
	// add r9,r6,r10
	ctx.r9.u64 = ctx.r6.u64 + ctx.r10.u64;
	// lfsu f0,4(r7)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r7.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r7.u32 = ea;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stfsx f0,r9,r5
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r5.u32, temp.u32);
	// bdnz 0x83aa083c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83AA083C;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// cmpw cr6,r8,r29
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r29.s32, xer);
	// blt cr6,0x83aa0820
	if (cr6.lt) goto loc_83AA0820;
loc_83AA086C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,136(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 136);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83AA0884;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83aa03f8
	ctx.lr = 0x83AA0894;
	sub_83AA03F8(ctx, base);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble cr6,0x83aa08b4
	if (!cr6.gt) goto loc_83AA08B4;
	// addi r10,r1,92
	ctx.r10.s64 = ctx.r1.s64 + 92;
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
loc_83AA08A8:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// bdnz 0x83aa08a8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83AA08A8;
loc_83AA08B4:
	// cmplwi cr6,r5,1
	cr6.compare<uint32_t>(ctx.r5.u32, 1, xer);
	// blt cr6,0x83aa0900
	if (cr6.lt) goto loc_83AA0900;
	// beq cr6,0x83aa08f8
	if (cr6.eq) goto loc_83AA08F8;
	// cmplwi cr6,r5,3
	cr6.compare<uint32_t>(ctx.r5.u32, 3, xer);
	// blt cr6,0x83aa08f0
	if (cr6.lt) goto loc_83AA08F0;
	// beq cr6,0x83aa08f0
	if (cr6.eq) goto loc_83AA08F0;
	// cmplwi cr6,r5,5
	cr6.compare<uint32_t>(ctx.r5.u32, 5, xer);
	// blt cr6,0x83aa08e8
	if (cr6.lt) goto loc_83AA08E8;
	// beq cr6,0x83aa08e0
	if (cr6.eq) goto loc_83AA08E0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// b 0x83aa0904
	goto loc_83AA0904;
loc_83AA08E0:
	// li r5,8
	ctx.r5.s64 = 8;
	// b 0x83aa0904
	goto loc_83AA0904;
loc_83AA08E8:
	// li r5,6
	ctx.r5.s64 = 6;
	// b 0x83aa0904
	goto loc_83AA0904;
loc_83AA08F0:
	// li r5,4
	ctx.r5.s64 = 4;
	// b 0x83aa0904
	goto loc_83AA0904;
loc_83AA08F8:
	// li r5,2
	ctx.r5.s64 = 2;
	// b 0x83aa0904
	goto loc_83AA0904;
loc_83AA0900:
	// li r5,1
	ctx.r5.s64 = 1;
loc_83AA0904:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,76(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83AA0924;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83AA0924:
	// lbz r11,23(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 23);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x83aa0970
	if (cr0.eq) goto loc_83AA0970;
	// lwa r11,16(r31)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 16));
	// lfs f0,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bctrl 
	ctx.lr = 0x83AA0970;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83AA0970:
	// lbz r11,23(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 23);
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stb r11,23(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23, ctx.r11.u8);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AA0984"))) PPC_WEAK_FUNC(sub_83AA0984);
PPC_FUNC_IMPL(__imp__sub_83AA0984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AA0988"))) PPC_WEAK_FUNC(sub_83AA0988);
PPC_FUNC_IMPL(__imp__sub_83AA0988) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83AA0990;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r9,27816(r11)
	PPC_STORE_U32(ctx.r11.u32 + 27816, ctx.r9.u32);
	// addi r10,r3,5
	ctx.r10.s64 = ctx.r3.s64 + 5;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r28,r11,27816
	ctx.r28.s64 = ctx.r11.s64 + 27816;
	// rlwinm r27,r10,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x83b663f8
	ctx.lr = 0x83AA09C4;
	sub_83B663F8(ctx, base);
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,27824(r11)
	PPC_STORE_U32(ctx.r11.u32 + 27824, ctx.r3.u32);
	// bne 0x83aa09dc
	if (!cr0.eq) goto loc_83AA09DC;
	// bl 0x83aa0688
	ctx.lr = 0x83AA09D8;
	sub_83AA0688(ctx, base);
	// b 0x83aa0a1c
	goto loc_83AA0A1C;
loc_83AA09DC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x83a8a578
	ctx.lr = 0x83AA09F0;
	sub_83A8A578(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x83ac1648
	ctx.lr = 0x83AA0A00;
	sub_83AC1648(ctx, base);
	// subf r6,r27,r29
	ctx.r6.s64 = ctx.r29.s64 - ctx.r27.s64;
	// add r5,r27,r30
	ctx.r5.u64 = ctx.r27.u64 + ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x83ac1748
	ctx.lr = 0x83AA0A14;
	sub_83AC1748(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
loc_83AA0A1C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AA0A24"))) PPC_WEAK_FUNC(sub_83AA0A24);
PPC_FUNC_IMPL(__imp__sub_83AA0A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AA0A28"))) PPC_WEAK_FUNC(sub_83AA0A28);
PPC_FUNC_IMPL(__imp__sub_83AA0A28) {
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
	ctx.lr = 0x83AA0A30;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x831ea7a0
	ctx.lr = 0x83AA0A50;
	sub_831EA7A0(ctx, base);
	// addi r10,r28,7
	ctx.r10.s64 = ctx.r28.s64 + 7;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r31,r10,0,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// addi r9,r31,60
	ctx.r9.s64 = ctx.r31.s64 + 60;
	// blt cr6,0x83aa0a6c
	if (cr6.lt) goto loc_83AA0A6C;
	// li r11,8
	ctx.r11.s64 = 8;
loc_83AA0A6C:
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r8,r9,3
	ctx.r8.s64 = ctx.r9.s64 + 3;
	// mulli r9,r11,36
	ctx.r9.s64 = ctx.r11.s64 * 36;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// rlwinm r29,r8,0,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r10,r31,44
	ctx.r10.s64 = ctx.r31.s64 + 44;
loc_83AA0A84:
	// stwu r29,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r10.u32 = ea;
	// add r29,r9,r29
	ctx.r29.u64 = ctx.r9.u64 + ctx.r29.u64;
	// bdnz 0x83aa0a84
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83AA0A84;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// stb r11,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,-26260(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// bl 0x83aa0708
	ctx.lr = 0x83AA0AA8;
	sub_83AA0708(ctx, base);
	// addi r10,r29,7
	ctx.r10.s64 = ctx.r29.s64 + 7;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r5,r10,0,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r11,23(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23, ctx.r11.u8);
	// subf r11,r5,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r5.s64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// add r6,r11,r27
	ctx.r6.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// bl 0x83ac1928
	ctx.lr = 0x83AA0B08;
	sub_83AC1928(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83aa0b1c
	if (!cr0.eq) goto loc_83AA0B1C;
loc_83AA0B14:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83aa0b6c
	goto loc_83AA0B6C;
loc_83AA0B1C:
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,27824(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27824);
	// bl 0x83b664c0
	ctx.lr = 0x83AA0B2C;
	sub_83B664C0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83aa0b4c
	if (!cr0.eq) goto loc_83AA0B4C;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,26056
	ctx.r4.s64 = ctx.r11.s64 + 26056;
	// bl 0x831ea3f0
	ctx.lr = 0x83AA0B40;
	sub_831EA3F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a9fe30
	ctx.lr = 0x83AA0B48;
	sub_83A9FE30(ctx, base);
	// b 0x83aa0b14
	goto loc_83AA0B14;
loc_83AA0B4C:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r10,23(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 23);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stb r10,23(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23, ctx.r10.u8);
	// bl 0x83aa0708
	ctx.lr = 0x83AA0B68;
	sub_83AA0708(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83AA0B6C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AA0B74"))) PPC_WEAK_FUNC(sub_83AA0B74);
PPC_FUNC_IMPL(__imp__sub_83AA0B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AA0B78"))) PPC_WEAK_FUNC(sub_83AA0B78);
PPC_FUNC_IMPL(__imp__sub_83AA0B78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lbz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x83aa0ba4
	if (!cr0.eq) goto loc_83AA0BA4;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x83aa0c38
	goto loc_83AA0C38;
loc_83AA0BA4:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x83a7a038
	ctx.lr = 0x83AA0BB0;
	sub_83A7A038(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq 0x83aa0c3c
	if (cr0.eq) goto loc_83AA0C3C;
	// lbz r11,23(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 23);
	// clrlwi. r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x83aa0bcc
	if (cr0.eq) goto loc_83AA0BCC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83aa0788
	ctx.lr = 0x83AA0BCC;
	sub_83AA0788(ctx, base);
loc_83AA0BCC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r30,12(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,52(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83AA0BEC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x83aa0bfc
	if (cr0.eq) goto loc_83AA0BFC;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x83a7a090
	ctx.lr = 0x83AA0BFC;
	sub_83A7A090(ctx, base);
loc_83AA0BFC:
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x83aa0c1c
	if (cr0.eq) goto loc_83AA0C1C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,44(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83AA0C1C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83AA0C1C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,36(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83AA0C34;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,4
	ctx.r11.s64 = 4;
loc_83AA0C38:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_83AA0C3C:
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

__attribute__((alias("__imp__sub_83AA0C54"))) PPC_WEAK_FUNC(sub_83AA0C54);
PPC_FUNC_IMPL(__imp__sub_83AA0C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AA0C58"))) PPC_WEAK_FUNC(sub_83AA0C58);
PPC_FUNC_IMPL(__imp__sub_83AA0C58) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83AA0C88;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83aa0c9c
	if (!cr0.eq) goto loc_83AA0C9C;
	// li r11,2
	ctx.r11.s64 = 2;
loc_83AA0C94:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x83aa0d6c
	goto loc_83AA0D6C;
loc_83AA0C9C:
	// lbz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x83aa0cd4
	if (!cr0.eq) goto loc_83AA0CD4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// beq cr6,0x83aa0cd4
	if (cr6.eq) goto loc_83AA0CD4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,40(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83AA0CCC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_83AA0CD4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,64(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83AA0CEC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83aa0d18
	if (!cr0.eq) goto loc_83AA0D18;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x83aa0d08
	if (!cr6.eq) goto loc_83AA0D08;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x83aa0c94
	goto loc_83AA0C94;
loc_83AA0D08:
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x83aa0d6c
	if (!cr6.eq) goto loc_83AA0D6C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83aa0c94
	goto loc_83AA0C94;
loc_83AA0D18:
	// lbz r11,23(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 23);
	// clrlwi. r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x83aa0db4
	if (cr0.eq) goto loc_83AA0DB4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83aa0788
	ctx.lr = 0x83AA0D2C;
	sub_83AA0788(ctx, base);
	// b 0x83aa0db4
	goto loc_83AA0DB4;
loc_83AA0D30:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r30,12(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83aa0d84
	if (!cr6.gt) goto loc_83AA0D84;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,56(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83AA0D5C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x83aa0d94
	if (cr0.eq) goto loc_83AA0D94;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x83a7a090
	ctx.lr = 0x83AA0D6C;
	sub_83A7A090(ctx, base);
loc_83AA0D6C:
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
loc_83AA0D84:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lbz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x83a7a0d8
	ctx.lr = 0x83AA0D94;
	sub_83A7A0D8(ctx, base);
loc_83AA0D94:
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x83aa0db4
	if (cr0.eq) goto loc_83AA0DB4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,44(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83AA0DB4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83AA0DB4:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x83a7a038
	ctx.lr = 0x83AA0DC0;
	sub_83A7A038(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83aa0d30
	if (!cr0.eq) goto loc_83AA0D30;
	// b 0x83aa0d6c
	goto loc_83AA0D6C;
}

__attribute__((alias("__imp__sub_83AA0DCC"))) PPC_WEAK_FUNC(sub_83AA0DCC);
PPC_FUNC_IMPL(__imp__sub_83AA0DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AA0DD0"))) PPC_WEAK_FUNC(sub_83AA0DD0);
PPC_FUNC_IMPL(__imp__sub_83AA0DD0) {
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
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x83aa0e48
	if (cr6.eq) goto loc_83AA0E48;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83aa0e18
	if (!cr6.eq) goto loc_83AA0E18;
	// lbz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 20);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83aa0e0c
	if (!cr6.eq) goto loc_83AA0E0C;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
loc_83AA0E0C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83aa0e50
	if (cr6.eq) goto loc_83AA0E50;
loc_83AA0E18:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x83aa0e28
	if (!cr6.eq) goto loc_83AA0E28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83aa0b78
	ctx.lr = 0x83AA0E28;
	sub_83AA0B78(ctx, base);
loc_83AA0E28:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x83aa0e3c
	if (!cr6.eq) goto loc_83AA0E3C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83aa0c58
	ctx.lr = 0x83AA0E3C;
	sub_83AA0C58(ctx, base);
loc_83AA0E3C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x83aa0e50
	if (!cr6.eq) goto loc_83AA0E50;
loc_83AA0E48:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83aa0c58
	ctx.lr = 0x83AA0E50;
	sub_83AA0C58(ctx, base);
loc_83AA0E50:
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

__attribute__((alias("__imp__sub_83AA0E64"))) PPC_WEAK_FUNC(sub_83AA0E64);
PPC_FUNC_IMPL(__imp__sub_83AA0E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AA0E68"))) PPC_WEAK_FUNC(sub_83AA0E68);
PPC_FUNC_IMPL(__imp__sub_83AA0E68) {
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
	// lwz r11,27824(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27824);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aa0ea4
	if (cr6.eq) goto loc_83AA0EA4;
	// bl 0x83ac17f0
	ctx.lr = 0x83AA0E8C;
	sub_83AC17F0(ctx, base);
	// lis r11,-31830
	ctx.r11.s64 = -2086010880;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,27824(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27824);
	// addi r5,r11,3536
	ctx.r5.s64 = ctx.r11.s64 + 3536;
	// bl 0x83b66598
	ctx.lr = 0x83AA0EA0;
	sub_83B66598(ctx, base);
	// bl 0x83ac1850
	ctx.lr = 0x83AA0EA4;
	sub_83AC1850(ctx, base);
loc_83AA0EA4:
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

__attribute__((alias("__imp__sub_83AA0EB8"))) PPC_WEAK_FUNC(sub_83AA0EB8);
PPC_FUNC_IMPL(__imp__sub_83AA0EB8) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83aa0e68
	sub_83AA0E68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AA0EC0"))) PPC_WEAK_FUNC(sub_83AA0EC0);
PPC_FUNC_IMPL(__imp__sub_83AA0EC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83AA0EC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83aa0ef8
	if (!cr6.eq) goto loc_83AA0EF8;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,26220
	ctx.r4.s64 = ctx.r11.s64 + 26220;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83AA0EF0;
	sub_831EA418(ctx, base);
loc_83AA0EF0:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83aa0f48
	goto loc_83AA0F48;
loc_83AA0EF8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a93a58
	ctx.lr = 0x83AA0F04;
	sub_83A93A58(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x83aa0ef0
	if (cr0.lt) goto loc_83AA0EF0;
	// addi r30,r3,184
	ctx.r30.s64 = ctx.r3.s64 + 184;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq cr6,0x83aa0f40
	if (cr6.eq) goto loc_83AA0F40;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a90fc0
	ctx.lr = 0x83AA0F24;
	sub_83A90FC0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83aa0f40
	if (cr0.eq) goto loc_83AA0F40;
	// lhz r11,344(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 344);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83aa0f40
	if (cr0.eq) goto loc_83AA0F40;
	// lhz r11,346(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 346);
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_83AA0F40:
	// bl 0x83a90428
	ctx.lr = 0x83AA0F44;
	sub_83A90428(ctx, base);
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + ctx.r30.u64;
loc_83AA0F48:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AA0F50"))) PPC_WEAK_FUNC(sub_83AA0F50);
PPC_FUNC_IMPL(__imp__sub_83AA0F50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83AA0F58;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r29,r4,16
	ctx.r29.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r29,65535
	cr6.compare<uint32_t>(ctx.r29.u32, 65535, xer);
	// bne cr6,0x83aa0f78
	if (!cr6.eq) goto loc_83AA0F78;
loc_83AA0F70:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83aa1040
	goto loc_83AA1040;
loc_83AA0F78:
	// srawi r10,r11,7
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 7;
	// li r3,0
	ctx.r3.s64 = 0;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0xFFFFFF80;
	// subf r31,r10,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r10.s64;
	// bl 0x83a8bf00
	ctx.lr = 0x83AA0F90;
	sub_83A8BF00(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83aa0fa0
	if (!cr0.eq) goto loc_83AA0FA0;
loc_83AA0F98:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x83aa1040
	goto loc_83AA1040;
loc_83AA0FA0:
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r11,r11,27832
	ctx.r11.s64 = ctx.r11.s64 + 27832;
	// blt cr6,0x83aa0fcc
	if (cr6.lt) goto loc_83AA0FCC;
	// cmpwi cr6,r31,128
	cr6.compare<int32_t>(ctx.r31.s32, 128, xer);
	// bge cr6,0x83aa0fcc
	if (!cr6.lt) goto loc_83AA0FCC;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r10,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x83aa0fd0
	goto loc_83AA0FD0;
loc_83AA0FCC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_83AA0FD0:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x83aa1018
	if (!cr6.eq) goto loc_83AA1018;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r3,r11,26232
	ctx.r3.s64 = ctx.r11.s64 + 26232;
	// bl 0x83a8cf30
	ctx.lr = 0x83AA0FE4;
	sub_83A8CF30(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83a8ca88
	ctx.lr = 0x83AA0FEC;
	sub_83A8CA88(ctx, base);
	// lis r11,265
	ctx.r11.s64 = 17367040;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// ble cr6,0x83aa0f98
	if (!cr6.gt) goto loc_83AA0F98;
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x83aa0f98
	if (cr6.eq) goto loc_83AA0F98;
	// subf r11,r11,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r11.s64;
	// subfic r11,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 & ctx.r30.u64;
	// b 0x83aa1040
	goto loc_83AA1040;
loc_83AA1018:
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aa0f70
	if (cr6.eq) goto loc_83AA0F70;
	// lwz r10,168(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// cmpw cr6,r29,r10
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, xer);
	// bge cr6,0x83aa0f70
	if (!cr6.lt) goto loc_83AA0F70;
	// lwz r11,164(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
loc_83AA1040:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AA1048"))) PPC_WEAK_FUNC(sub_83AA1048);
PPC_FUNC_IMPL(__imp__sub_83AA1048) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83AA1050;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lfs f0,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x83a91030
	ctx.lr = 0x83AA1094;
	sub_83A91030(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a90170
	ctx.lr = 0x83AA10A4;
	sub_83A90170(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// lfs f9,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f9.f64 = double(temp.f32);
	// lfs f12,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// lfs f8,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f8.f64 = double(temp.f32);
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f8,f8,f12
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f12.f64));
	// lfs f7,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f7,f7,f11
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// fmadds f0,f10,f31,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f31.f64 + ctx.f0.f64));
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fmadds f0,f9,f31,f13
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f31.f64 + ctx.f13.f64));
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// fmadds f0,f8,f31,f12
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f31.f64 + ctx.f12.f64));
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// fmadds f0,f7,f31,f11
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f31.f64 + ctx.f11.f64));
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AA1100"))) PPC_WEAK_FUNC(sub_83AA1100);
PPC_FUNC_IMPL(__imp__sub_83AA1100) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83AA1108;
	__savegprlr_26(ctx, base);
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-1584(r1)
	ea = -1584 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r5,164
	ctx.r5.s64 = 164;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83AA113C;
	sub_831CDCF0(ctx, base);
	// li r5,164
	ctx.r5.s64 = 164;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r27,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r27.u32);
	// addi r3,r1,308
	ctx.r3.s64 = ctx.r1.s64 + 308;
	// bl 0x831cdcf0
	ctx.lr = 0x83AA1150;
	sub_831CDCF0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lfs f30,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f30.f64 = double(temp.f32);
	// stfs f30,96(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stw r27,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r27.u32);
	// stw r27,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r27.u32);
	// stw r27,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r27.u32);
	// bl 0x83a91030
	ctx.lr = 0x83AA1178;
	sub_83A91030(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// bl 0x83a91030
	ctx.lr = 0x83AA1184;
	sub_83A91030(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83aa1048
	ctx.lr = 0x83AA119C;
	sub_83AA1048(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a900f8
	ctx.lr = 0x83AA11AC;
	sub_83A900F8(ctx, base);
	// lbz r11,295(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 295);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83aa121c
	if (cr0.eq) goto loc_83AA121C;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_83AA11C0:
	// stfs f30,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r11,r1,340
	ctx.r11.s64 = ctx.r1.s64 + 340;
	// addi r28,r1,164
	ctx.r28.s64 = ctx.r1.s64 + 164;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lhzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// lhzx r26,r31,r28
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r31.u32 + ctx.r28.u32);
	// bl 0x83a8f280
	ctx.lr = 0x83AA11DC;
	sub_83A8F280(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83a90350
	ctx.lr = 0x83AA11EC;
	sub_83A90350(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lhzx r3,r31,r28
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + ctx.r28.u32);
	// fmadds f1,f13,f31,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f31.f64 + ctx.f0.f64));
	// bl 0x83a902e0
	ctx.lr = 0x83AA1208;
	sub_83A902E0(ctx, base);
	// lbz r11,295(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 295);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, xer);
	// blt cr6,0x83aa11c0
	if (cr6.lt) goto loc_83AA11C0;
loc_83AA121C:
	// lbz r11,294(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 294);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83aa1280
	if (cr0.eq) goto loc_83AA1280;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_83AA1230:
	// addi r11,r1,324
	ctx.r11.s64 = ctx.r1.s64 + 324;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r29,r1,148
	ctx.r29.s64 = ctx.r1.s64 + 148;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// addi r5,r1,480
	ctx.r5.s64 = ctx.r1.s64 + 480;
	// lhzx r4,r31,r11
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// lhzx r3,r31,r29
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + ctx.r29.u32);
	// bl 0x83a911a0
	ctx.lr = 0x83AA1254;
	sub_83A911A0(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble 0x83aa126c
	if (!cr0.gt) goto loc_83AA126C;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lhzx r3,r31,r29
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + ctx.r29.u32);
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// bl 0x83a901f8
	ctx.lr = 0x83AA126C;
	sub_83A901F8(ctx, base);
loc_83AA126C:
	// lbz r11,294(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 294);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, xer);
	// blt cr6,0x83aa1230
	if (cr6.lt) goto loc_83AA1230;
loc_83AA1280:
	// addi r1,r1,1584
	ctx.r1.s64 = ctx.r1.s64 + 1584;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AA1290"))) PPC_WEAK_FUNC(sub_83AA1290);
PPC_FUNC_IMPL(__imp__sub_83AA1290) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83AA1298;
	__savegprlr_29(ctx, base);
	// stwu r1,-560(r1)
	ea = -560 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x83a8bf00
	ctx.lr = 0x83AA12AC;
	sub_83A8BF00(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83aa12dc
	if (!cr0.eq) goto loc_83AA12DC;
loc_83AA12B4:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x83aa1378
	if (cr6.lt) goto loc_83AA1378;
	// cmpwi cr6,r31,7
	cr6.compare<int32_t>(ctx.r31.s32, 7, xer);
	// bgt cr6,0x83aa1378
	if (cr6.gt) goto loc_83AA1378;
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r11,r11,-14244
	ctx.r11.s64 = ctx.r11.s64 + -14244;
loc_83AA12CC:
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x83aa138c
	goto loc_83AA138C;
loc_83AA12DC:
	// lis r30,-31739
	ctx.r30.s64 = -2080047104;
	// lwz r11,27832(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27832);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83aa1330
	if (!cr6.eq) goto loc_83AA1330;
	// bl 0x83a8ca88
	ctx.lr = 0x83AA12F0;
	sub_83A8CA88(ctx, base);
	// lis r11,265
	ctx.r11.s64 = 17367040;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// ble cr6,0x83aa12b4
	if (!cr6.gt) goto loc_83AA12B4;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r3,r11,26232
	ctx.r3.s64 = ctx.r11.s64 + 26232;
	// bl 0x83a8cf30
	ctx.lr = 0x83AA1308;
	sub_83A8CF30(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x83aa12b4
	if (cr6.eq) goto loc_83AA12B4;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x83aa1378
	if (cr6.lt) goto loc_83AA1378;
	// cmpwi cr6,r31,7
	cr6.compare<int32_t>(ctx.r31.s32, 7, xer);
	// bgt cr6,0x83aa1378
	if (cr6.gt) goto loc_83AA1378;
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r11,r11,-14212
	ctx.r11.s64 = ctx.r11.s64 + -14212;
	// b 0x83aa12cc
	goto loc_83AA12CC;
loc_83AA1330:
	// bl 0x83a82480
	ctx.lr = 0x83AA1334;
	sub_83A82480(ctx, base);
	// lwz r11,27832(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27832);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x83a90fc0
	ctx.lr = 0x83AA1344;
	sub_83A90FC0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83aa1374
	if (cr0.eq) goto loc_83AA1374;
	// lbz r11,518(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 518);
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, xer);
	// ble cr6,0x83aa1374
	if (!cr6.gt) goto loc_83AA1374;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r1,260
	ctx.r10.s64 = ctx.r1.s64 + 260;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lhzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x83a91030
	ctx.lr = 0x83AA136C;
	sub_83A91030(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83aa1380
	if (!cr0.eq) goto loc_83AA1380;
loc_83AA1374:
	// bl 0x83a824c0
	ctx.lr = 0x83AA1378;
	sub_83A824C0(ctx, base);
loc_83AA1378:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83aa1390
	goto loc_83AA1390;
loc_83AA1380:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bl 0x83a824c0
	ctx.lr = 0x83AA138C;
	sub_83A824C0(ctx, base);
loc_83AA138C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83AA1390:
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AA1398"))) PPC_WEAK_FUNC(sub_83AA1398);
PPC_FUNC_IMPL(__imp__sub_83AA1398) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83aa0ec0
	sub_83AA0EC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AA13A4"))) PPC_WEAK_FUNC(sub_83AA13A4);
PPC_FUNC_IMPL(__imp__sub_83AA13A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AA13A8"))) PPC_WEAK_FUNC(sub_83AA13A8);
PPC_FUNC_IMPL(__imp__sub_83AA13A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83AA13B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// addi r29,r11,27832
	ctx.r29.s64 = ctx.r11.s64 + 27832;
	// blt cr6,0x83aa13e8
	if (cr6.lt) goto loc_83AA13E8;
	// cmpwi cr6,r3,128
	cr6.compare<int32_t>(ctx.r3.s32, 128, xer);
	// bge cr6,0x83aa13e8
	if (!cr6.lt) goto loc_83AA13E8;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x83aa13ec
	goto loc_83AA13EC;
loc_83AA13E8:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_83AA13EC:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83aa143c
	if (cr6.eq) goto loc_83AA143C;
	// bl 0x83a82480
	ctx.lr = 0x83AA13F8;
	sub_83A82480(ctx, base);
	// bl 0x83a83240
	ctx.lr = 0x83AA13FC;
	sub_83A83240(ctx, base);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r29
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// stwx r28,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r28.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83aa1418
	if (cr6.eq) goto loc_83AA1418;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_83AA1418:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a92098
	ctx.lr = 0x83AA1420;
	sub_83A92098(ctx, base);
	// bl 0x83acb088
	ctx.lr = 0x83AA1424;
	sub_83ACB088(ctx, base);
	// bl 0x83a83248
	ctx.lr = 0x83AA1428;
	sub_83A83248(ctx, base);
	// bl 0x83a824c0
	ctx.lr = 0x83AA142C;
	sub_83A824C0(ctx, base);
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83aa143c
	if (cr6.eq) goto loc_83AA143C;
	// bl 0x83a82d38
	ctx.lr = 0x83AA143C;
	sub_83A82D38(ctx, base);
loc_83AA143C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AA1444"))) PPC_WEAK_FUNC(sub_83AA1444);
PPC_FUNC_IMPL(__imp__sub_83AA1444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AA1448"))) PPC_WEAK_FUNC(sub_83AA1448);
PPC_FUNC_IMPL(__imp__sub_83AA1448) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83AA1450;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r11,27832
	ctx.r29.s64 = ctx.r11.s64 + 27832;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_83AA1464:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83aa1478
	if (cr6.eq) goto loc_83AA1478;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83aa13a8
	ctx.lr = 0x83AA1478;
	sub_83AA13A8(ctx, base);
loc_83AA1478:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r29,512
	ctx.r11.s64 = ctx.r29.s64 + 512;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// blt cr6,0x83aa1464
	if (cr6.lt) goto loc_83AA1464;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AA1494"))) PPC_WEAK_FUNC(sub_83AA1494);
PPC_FUNC_IMPL(__imp__sub_83AA1494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AA1498"))) PPC_WEAK_FUNC(sub_83AA1498);
PPC_FUNC_IMPL(__imp__sub_83AA1498) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x83AA14A0;
	__savegprlr_22(ctx, base);
	// stfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f30.u64);
	// stfd f31,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-1616(r1)
	ea = -1616 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,27832
	ctx.r11.s64 = ctx.r11.s64 + 27832;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// clrlwi. r23,r6,24
	ctx.r23.u64 = ctx.r6.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r23.s32, 0, xer);
	// lwzx r26,r10,r11
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// ble 0x83aa1620
	if (!cr0.gt) goto loc_83AA1620;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// subf r25,r5,r4
	ctx.r25.s64 = ctx.r4.s64 - ctx.r5.s64;
	// lfs f30,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f30.f64 = double(temp.f32);
loc_83AA14E0:
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r7,156(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 156);
	// lhz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lhzx r3,r25,r31
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r25.u32 + ctx.r31.u32);
	// bl 0x83aa1048
	ctx.lr = 0x83AA14F8;
	sub_83AA1048(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lfs f1,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83a921f0
	ctx.lr = 0x83AA1508;
	sub_83A921F0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lhzx r3,r25,r31
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r25.u32 + ctx.r31.u32);
	// bl 0x83a91030
	ctx.lr = 0x83AA1514;
	sub_83A91030(ctx, base);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// lhz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// bl 0x83a91030
	ctx.lr = 0x83AA1520;
	sub_83A91030(ctx, base);
	// lbz r11,295(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 295);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83aa1598
	if (cr0.eq) goto loc_83AA1598;
	// li r30,0
	ctx.r30.s64 = 0;
loc_83AA1534:
	// stfs f30,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r11,r1,164
	ctx.r11.s64 = ctx.r1.s64 + 164;
	// addi r10,r1,340
	ctx.r10.s64 = ctx.r1.s64 + 340;
	// lwz r24,156(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 156);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lhzx r22,r30,r11
	ctx.r22.u64 = PPC_LOAD_U16(ctx.r30.u32 + ctx.r11.u32);
	// lhzx r3,r30,r10
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + ctx.r10.u32);
	// bl 0x83a8f280
	ctx.lr = 0x83AA1554;
	sub_83A8F280(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83a90350
	ctx.lr = 0x83AA1564;
	sub_83A90350(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lhz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// fmadds f1,f13,f31,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f31.f64 + ctx.f0.f64));
	// bl 0x83a92280
	ctx.lr = 0x83AA1584;
	sub_83A92280(ctx, base);
	// lbz r11,295(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 295);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, xer);
	// blt cr6,0x83aa1534
	if (cr6.lt) goto loc_83AA1534;
loc_83AA1598:
	// lbz r11,294(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 294);
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83aa1610
	if (cr0.eq) goto loc_83AA1610;
	// li r30,0
	ctx.r30.s64 = 0;
loc_83AA15AC:
	// addi r29,r1,148
	ctx.r29.s64 = ctx.r1.s64 + 148;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lhzx r3,r30,r29
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + ctx.r29.u32);
	// bl 0x83a8d8a8
	ctx.lr = 0x83AA15C0;
	sub_83A8D8A8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83aa15fc
	if (cr0.eq) goto loc_83AA15FC;
	// addi r11,r1,324
	ctx.r11.s64 = ctx.r1.s64 + 324;
	// lwz r8,156(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 156);
	// li r6,1024
	ctx.r6.s64 = 1024;
	// lhzx r3,r30,r29
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + ctx.r29.u32);
	// addi r5,r1,480
	ctx.r5.s64 = ctx.r1.s64 + 480;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lhzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x83a911a0
	ctx.lr = 0x83AA15E8;
	sub_83A911A0(ctx, base);
	// addi r6,r1,480
	ctx.r6.s64 = ctx.r1.s64 + 480;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83a93bc8
	ctx.lr = 0x83AA15FC;
	sub_83A93BC8(ctx, base);
loc_83AA15FC:
	// lbz r11,294(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 294);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// cmpw cr6,r24,r11
	cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, xer);
	// blt cr6,0x83aa15ac
	if (cr6.lt) goto loc_83AA15AC;
loc_83AA1610:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// cmpw cr6,r28,r23
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r23.s32, xer);
	// blt cr6,0x83aa14e0
	if (cr6.lt) goto loc_83AA14E0;
loc_83AA1620:
	// addi r1,r1,1616
	ctx.r1.s64 = ctx.r1.s64 + 1616;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AA1630"))) PPC_WEAK_FUNC(sub_83AA1630);
PPC_FUNC_IMPL(__imp__sub_83AA1630) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,27832
	ctx.r11.s64 = ctx.r11.s64 + 27832;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x83a90fc0
	ctx.lr = 0x83AA1670;
	sub_83A90FC0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83aa16d4
	if (cr0.eq) goto loc_83AA16D4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ea6f8
	ctx.lr = 0x83AA1680;
	sub_831EA6F8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble 0x83aa169c
	if (!cr0.gt) goto loc_83AA169C;
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a8d628
	ctx.lr = 0x83AA1698;
	sub_83A8D628(ctx, base);
	// b 0x83aa16b4
	goto loc_83AA16B4;
loc_83AA169C:
	// lhz r11,340(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 340);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x83a8d530
	ctx.lr = 0x83AA16B4;
	sub_83A8D530(ctx, base);
loc_83AA16B4:
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83aa16d4
	if (cr0.eq) goto loc_83AA16D4;
	// addi r5,r1,360
	ctx.r5.s64 = ctx.r1.s64 + 360;
	// lbz r6,342(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 342);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83aa1498
	ctx.lr = 0x83AA16D4;
	sub_83AA1498(ctx, base);
loc_83AA16D4:
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
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

__attribute__((alias("__imp__sub_83AA16F0"))) PPC_WEAK_FUNC(sub_83AA16F0);
PPC_FUNC_IMPL(__imp__sub_83AA16F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83AA16F8;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-1648(r1)
	ea = -1648 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r5,264
	ctx.r5.s64 = 264;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r28,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r28.u32);
	// addi r3,r1,292
	ctx.r3.s64 = ctx.r1.s64 + 292;
	// bl 0x831cdcf0
	ctx.lr = 0x83AA1720;
	sub_831CDCF0(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a90fc0
	ctx.lr = 0x83AA172C;
	sub_83A90FC0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83aa1854
	if (cr0.eq) goto loc_83AA1854;
	// lhz r11,552(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 552);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83aa1854
	if (cr0.eq) goto loc_83AA1854;
	// lbz r11,550(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 550);
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83aa1854
	if (cr0.eq) goto loc_83AA1854;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r27,r1,292
	ctx.r27.s64 = ctx.r1.s64 + 292;
	// lfs f31,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
loc_83AA175C:
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lhz r31,0(r27)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// stw r28,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r28.u32);
	// bl 0x83a91030
	ctx.lr = 0x83AA1780;
	sub_83A91030(ctx, base);
	// lfs f0,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lfs f12,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f11,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x83a900f8
	ctx.lr = 0x83AA17B0;
	sub_83A900F8(ctx, base);
	// lbz r11,279(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 279);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83aa17f0
	if (cr0.eq) goto loc_83AA17F0;
	// addi r30,r1,146
	ctx.r30.s64 = ctx.r1.s64 + 146;
loc_83AA17C4:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lhz r3,2(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// bl 0x83a8f280
	ctx.lr = 0x83AA17D0;
	sub_83A8F280(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lhzu r3,2(r30)
	ea = 2 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U16(ea);
	ctx.r30.u32 = ea;
	// lfs f1,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83a902e0
	ctx.lr = 0x83AA17E0;
	sub_83A902E0(ctx, base);
	// lbz r11,279(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 279);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// blt cr6,0x83aa17c4
	if (cr6.lt) goto loc_83AA17C4;
loc_83AA17F0:
	// lbz r11,278(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 278);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83aa1840
	if (cr0.eq) goto loc_83AA1840;
	// addi r31,r1,132
	ctx.r31.s64 = ctx.r1.s64 + 132;
loc_83AA1804:
	// li r5,1024
	ctx.r5.s64 = 1024;
	// lhz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// addi r4,r1,560
	ctx.r4.s64 = ctx.r1.s64 + 560;
	// bl 0x83a91120
	ctx.lr = 0x83AA1814;
	sub_83A91120(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble 0x83aa182c
	if (!cr0.gt) goto loc_83AA182C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lhz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// addi r4,r1,560
	ctx.r4.s64 = ctx.r1.s64 + 560;
	// bl 0x83a901f8
	ctx.lr = 0x83AA182C;
	sub_83A901F8(ctx, base);
loc_83AA182C:
	// lbz r11,278(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 278);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, xer);
	// blt cr6,0x83aa1804
	if (cr6.lt) goto loc_83AA1804;
loc_83AA1840:
	// lbz r11,550(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 550);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,2
	ctx.r27.s64 = ctx.r27.s64 + 2;
	// cmpw cr6,r26,r11
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, xer);
	// blt cr6,0x83aa175c
	if (cr6.lt) goto loc_83AA175C;
loc_83AA1854:
	// addi r1,r1,1648
	ctx.r1.s64 = ctx.r1.s64 + 1648;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AA1860"))) PPC_WEAK_FUNC(sub_83AA1860);
PPC_FUNC_IMPL(__imp__sub_83AA1860) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83AA1868;
	__savegprlr_24(ctx, base);
	// stwu r1,-592(r1)
	ea = -592 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83aa1aa4
	if (cr6.eq) goto loc_83AA1AA4;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83aa1aa4
	if (cr6.lt) goto loc_83AA1AA4;
	// cmpwi cr6,r3,128
	cr6.compare<int32_t>(ctx.r3.s32, 128, xer);
	// bge cr6,0x83aa1aa4
	if (!cr6.lt) goto loc_83AA1AA4;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// rlwinm r26,r3,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r27,r11,27832
	ctx.r27.s64 = ctx.r11.s64 + 27832;
	// lwzx r11,r26,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r27.u32);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe. r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x83aa18b8
	if (cr0.eq) goto loc_83AA18B8;
	// bl 0x83aa13a8
	ctx.lr = 0x83AA18B8;
	sub_83AA13A8(ctx, base);
loc_83AA18B8:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83aa0ec0
	ctx.lr = 0x83AA18C4;
	sub_83AA0EC0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt 0x83aa1ab8
	if (cr0.lt) goto loc_83AA1AB8;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83aa190c
	if (!cr6.eq) goto loc_83AA190C;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(ctx.r24.s32, 0, xer);
	// bne cr6,0x83aa190c
	if (!cr6.eq) goto loc_83AA190C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a82d10
	ctx.lr = 0x83AA18E4;
	sub_83A82D10(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// mr r24,r31
	ctx.r24.u64 = ctx.r31.u64;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// bne 0x83aa190c
	if (!cr0.eq) goto loc_83AA190C;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,26360
	ctx.r4.s64 = ctx.r11.s64 + 26360;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea400
	ctx.lr = 0x83AA1908;
	sub_831EA400(ctx, base);
	// b 0x83aa1ab8
	goto loc_83AA1AB8;
loc_83AA190C:
	// bl 0x83a82480
	ctx.lr = 0x83AA1910;
	sub_83A82480(ctx, base);
	// bl 0x83a83240
	ctx.lr = 0x83AA1914;
	sub_83A83240(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83aa1a84
	if (cr6.eq) goto loc_83AA1A84;
	// cmpw cr6,r24,r31
	cr6.compare<int32_t>(ctx.r24.s32, ctx.r31.s32, xer);
	// blt cr6,0x83aa1a84
	if (cr6.lt) goto loc_83AA1A84;
	// addi r11,r30,7
	ctx.r11.s64 = ctx.r30.s64 + 7;
	// li r4,176
	ctx.r4.s64 = 176;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stwx r11,r26,r27
	PPC_STORE_U32(ctx.r26.u32 + ctx.r27.u32, ctx.r11.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// addi r30,r11,176
	ctx.r30.s64 = ctx.r11.s64 + 176;
	// bl 0x831ea7a0
	ctx.lr = 0x83AA1944;
	sub_831EA7A0(ctx, base);
	// stw r29,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r29.u32);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bne cr6,0x83aa195c
	if (!cr6.eq) goto loc_83AA195C;
	// bl 0x83a8d738
	ctx.lr = 0x83AA1954;
	sub_83A8D738(ctx, base);
	// stw r3,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r3.u32);
	// b 0x83aa199c
	goto loc_83AA199C;
loc_83AA195C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83a90fc0
	ctx.lr = 0x83AA1968;
	sub_83A90FC0(ctx, base);
	// lhz r11,346(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 346);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83aa1980
	if (cr0.eq) goto loc_83AA1980;
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// b 0x83aa199c
	goto loc_83AA199C;
loc_83AA1980:
	// lhz r11,344(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 344);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83aa199c
	if (cr0.eq) goto loc_83AA199C;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,26272
	ctx.r4.s64 = ctx.r11.s64 + 26272;
	// bl 0x831ea3f0
	ctx.lr = 0x83AA199C;
	sub_831EA3F0(ctx, base);
loc_83AA199C:
	// bl 0x83a90428
	ctx.lr = 0x83AA19A0;
	sub_83A90428(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble 0x83aa19cc
	if (!cr0.gt) goto loc_83AA19CC;
	// rlwinm r11,r29,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// li r4,255
	ctx.r4.s64 = 255;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ea798
	ctx.lr = 0x83AA19C4;
	sub_831EA798(ctx, base);
	// add r30,r29,r30
	ctx.r30.u64 = ctx.r29.u64 + ctx.r30.u64;
	// b 0x83aa19e0
	goto loc_83AA19E0;
loc_83AA19CC:
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r11,-14680
	ctx.r11.s64 = ctx.r11.s64 + -14680;
	// stw r10,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r10.u32);
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
loc_83AA19E0:
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a93c60
	ctx.lr = 0x83AA19F4;
	sub_83A93C60(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83a90fc0
	ctx.lr = 0x83AA1A00;
	sub_83A90FC0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83aa1a98
	if (cr0.eq) goto loc_83AA1A98;
	// lbz r11,342(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 342);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83aa1a54
	if (cr0.eq) goto loc_83AA1A54;
	// addi r29,r1,84
	ctx.r29.s64 = ctx.r1.s64 + 84;
loc_83AA1A1C:
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// lhz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// bl 0x83a91030
	ctx.lr = 0x83AA1A28;
	sub_83A91030(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83aa1a40
	if (cr0.eq) goto loc_83AA1A40;
	// lhz r5,516(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 516);
	// lwz r4,352(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// bl 0x83a904b8
	ctx.lr = 0x83AA1A40;
	sub_83A904B8(ctx, base);
loc_83AA1A40:
	// lbz r11,342(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 342);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, xer);
	// blt cr6,0x83aa1a1c
	if (cr6.lt) goto loc_83AA1A1C;
loc_83AA1A54:
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ea658
	ctx.lr = 0x83AA1A68;
	sub_831EA658(ctx, base);
	// lwz r4,156(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83aa1a7c
	if (cr6.eq) goto loc_83AA1A7C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83aa16f0
	ctx.lr = 0x83AA1A7C;
	sub_83AA16F0(ctx, base);
loc_83AA1A7C:
	// bl 0x83acb088
	ctx.lr = 0x83AA1A80;
	sub_83ACB088(ctx, base);
	// b 0x83aa1a98
	goto loc_83AA1A98;
loc_83AA1A84:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,26256
	ctx.r4.s64 = ctx.r11.s64 + 26256;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83AA1A98;
	sub_831EA418(ctx, base);
loc_83AA1A98:
	// bl 0x83a83248
	ctx.lr = 0x83AA1A9C;
	sub_83A83248(ctx, base);
	// bl 0x83a824c0
	ctx.lr = 0x83AA1AA0;
	sub_83A824C0(ctx, base);
	// b 0x83aa1ab8
	goto loc_83AA1AB8;
loc_83AA1AA4:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,26244
	ctx.r4.s64 = ctx.r11.s64 + 26244;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83AA1AB8;
	sub_831EA418(ctx, base);
loc_83AA1AB8:
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AA1AC0"))) PPC_WEAK_FUNC(sub_83AA1AC0);
PPC_FUNC_IMPL(__imp__sub_83AA1AC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83AA1AC8;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-704(r1)
	ea = -704 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83aa1c14
	if (cr6.lt) goto loc_83AA1C14;
	// cmpwi cr6,r3,128
	cr6.compare<int32_t>(ctx.r3.s32, 128, xer);
	// bge cr6,0x83aa1c14
	if (!cr6.lt) goto loc_83AA1C14;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// blt cr6,0x83aa1c14
	if (cr6.lt) goto loc_83AA1C14;
	// bl 0x83a82480
	ctx.lr = 0x83AA1AF8;
	sub_83A82480(ctx, base);
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// rlwinm r27,r31,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r11,27832
	ctx.r28.s64 = ctx.r11.s64 + 27832;
	// lwzx r29,r27,r28
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// cmplwi r29,0
	cr0.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne 0x83aa1b24
	if (!cr0.eq) goto loc_83AA1B24;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,26588
	ctx.r4.s64 = ctx.r11.s64 + 26588;
loc_83AA1B18:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea3f0
	ctx.lr = 0x83AA1B20;
	sub_831EA3F0(ctx, base);
	// b 0x83aa1c0c
	goto loc_83AA1C0C;
loc_83AA1B24:
	// lwz r26,156(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 156);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// bne cr6,0x83aa1b3c
	if (!cr6.eq) goto loc_83AA1B3C;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,26488
	ctx.r4.s64 = ctx.r11.s64 + 26488;
	// b 0x83aa1b18
	goto loc_83AA1B18;
loc_83AA1B3C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83aa1bbc
	if (cr6.eq) goto loc_83AA1BBC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f31,152(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 152);
	ctx.f31.f64 = double(temp.f32);
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// bl 0x83a90fc0
	ctx.lr = 0x83AA1B58;
	sub_83A90FC0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83aa1bbc
	if (cr0.eq) goto loc_83AA1BBC;
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// addi r4,r29,68
	ctx.r4.s64 = ctx.r29.s64 + 68;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a8d628
	ctx.lr = 0x83AA1B70;
	sub_83A8D628(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83aa1bbc
	if (cr0.eq) goto loc_83AA1BBC;
	// lbz r11,342(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 342);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83aa1bbc
	if (cr0.eq) goto loc_83AA1BBC;
	// li r31,0
	ctx.r31.s64 = 0;
loc_83AA1B8C:
	// addi r11,r1,360
	ctx.r11.s64 = ctx.r1.s64 + 360;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lhzx r4,r31,r11
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// lhzx r3,r31,r10
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// bl 0x83aa1100
	ctx.lr = 0x83AA1BA8;
	sub_83AA1100(ctx, base);
	// lbz r11,342(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 342);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, xer);
	// blt cr6,0x83aa1b8c
	if (cr6.lt) goto loc_83AA1B8C;
loc_83AA1BBC:
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r11,68
	ctx.r3.s64 = ctx.r11.s64 + 68;
	// beq cr6,0x83aa1bd8
	if (cr6.eq) goto loc_83AA1BD8;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// b 0x83aa1be0
	goto loc_83AA1BE0;
loc_83AA1BD8:
	// lis r10,-32203
	ctx.r10.s64 = -2110455808;
	// addi r5,r10,-22544
	ctx.r5.s64 = ctx.r10.s64 + -22544;
loc_83AA1BE0:
	// bl 0x831ea658
	ctx.lr = 0x83AA1BE4;
	sub_831EA658(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bl 0x83aa4f98
	ctx.lr = 0x83AA1BF0;
	sub_83AA4F98(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// extsw r10,r24
	ctx.r10.s64 = ctx.r24.s32;
	// std r3,136(r29)
	PPC_STORE_U64(ctx.r29.u32 + 136, ctx.r3.u64);
	// mulli r10,r10,1000
	ctx.r10.s64 = ctx.r10.s64 * 1000;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// std r10,144(r29)
	PPC_STORE_U64(ctx.r29.u32 + 144, ctx.r10.u64);
	// stfs f0,152(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 152, temp.u32);
loc_83AA1C0C:
	// bl 0x83a824c0
	ctx.lr = 0x83AA1C10;
	sub_83A824C0(ctx, base);
	// b 0x83aa1c28
	goto loc_83AA1C28;
loc_83AA1C14:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,26472
	ctx.r4.s64 = ctx.r11.s64 + 26472;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83AA1C28;
	sub_831EA418(ctx, base);
loc_83AA1C28:
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AA1C34"))) PPC_WEAK_FUNC(sub_83AA1C34);
PPC_FUNC_IMPL(__imp__sub_83AA1C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AA1C38"))) PPC_WEAK_FUNC(sub_83AA1C38);
PPC_FUNC_IMPL(__imp__sub_83AA1C38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83AA1C40;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-704(r1)
	ea = -704 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r25,r11,27832
	ctx.r25.s64 = ctx.r11.s64 + 27832;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// lfs f31,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f31.f64 = double(temp.f32);
loc_83AA1C60:
	// lwz r31,0(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83aa1d58
	if (cr6.eq) goto loc_83AA1D58;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83aa1d6c
	if (cr6.eq) goto loc_83AA1D6C;
	// bl 0x83aa4f98
	ctx.lr = 0x83AA1C7C;
	sub_83AA4F98(ctx, base);
	// ld r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 136);
	// ld r10,144(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 144);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// cmpd cr6,r11,r10
	cr6.compare<int64_t>(ctx.r11.s64, ctx.r10.s64, xer);
	// blt cr6,0x83aa1d28
	if (cr6.lt) goto loc_83AA1D28;
	// addi r30,r31,68
	ctx.r30.s64 = ctx.r31.s64 + 68;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83aa1630
	ctx.lr = 0x83AA1CA8;
	sub_83AA1630(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// lwz r26,156(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// bl 0x83a90fc0
	ctx.lr = 0x83AA1CB8;
	sub_83A90FC0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83aa1d1c
	if (cr0.eq) goto loc_83AA1D1C;
	// addi r5,r1,368
	ctx.r5.s64 = ctx.r1.s64 + 368;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83a8d628
	ctx.lr = 0x83AA1CD0;
	sub_83A8D628(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83aa1d1c
	if (cr0.eq) goto loc_83AA1D1C;
	// lbz r11,358(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 358);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83aa1d1c
	if (cr0.eq) goto loc_83AA1D1C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_83AA1CEC:
	// addi r11,r1,376
	ctx.r11.s64 = ctx.r1.s64 + 376;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lhzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + ctx.r11.u32);
	// lhzx r3,r30,r10
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + ctx.r10.u32);
	// bl 0x83aa1100
	ctx.lr = 0x83AA1D08;
	sub_83AA1100(ctx, base);
	// lbz r11,358(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 358);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, xer);
	// blt cr6,0x83aa1cec
	if (cr6.lt) goto loc_83AA1CEC;
loc_83AA1D1C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x83aa1d58
	goto loc_83AA1D58;
loc_83AA1D28:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r4,r31,68
	ctx.r4.s64 = ctx.r31.s64 + 68;
	// lfd f13,144(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 144);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,152(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 152, temp.u32);
	// lfs f1,152(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83aa1630
	ctx.lr = 0x83AA1D58;
	sub_83AA1630(ctx, base);
loc_83AA1D58:
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r11,r25,512
	ctx.r11.s64 = ctx.r25.s64 + 512;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, xer);
	// blt cr6,0x83aa1c60
	if (cr6.lt) goto loc_83AA1C60;
loc_83AA1D6C:
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AA1D78"))) PPC_WEAK_FUNC(sub_83AA1D78);
PPC_FUNC_IMPL(__imp__sub_83AA1D78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// li r11,5
	ctx.r11.s64 = 5;
	// lis r10,-31739
	ctx.r10.s64 = -2080047104;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r10,r10,28344
	ctx.r10.s64 = ctx.r10.s64 + 28344;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bne cr6,0x83aa1db0
	if (!cr6.eq) goto loc_83AA1DB0;
	// lis r9,-31767
	ctx.r9.s64 = -2081882112;
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// addi r9,r9,-14664
	ctx.r9.s64 = ctx.r9.s64 + -14664;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
loc_83AA1DA0:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r11,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x83aa1da0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83AA1DA0;
	// blr 
	return;
loc_83AA1DB0:
	// addi r9,r3,-4
	ctx.r9.s64 = ctx.r3.s64 + -4;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_83AA1DB8:
	// lwzu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83aa1db8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83AA1DB8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AA1DC8"))) PPC_WEAK_FUNC(sub_83AA1DC8);
PPC_FUNC_IMPL(__imp__sub_83AA1DC8) {
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r10,28344(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28344);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83aa1e00
	if (!cr6.eq) goto loc_83AA1E00;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-5
	ctx.r5.s64 = -5;
	// addi r4,r11,26636
	ctx.r4.s64 = ctx.r11.s64 + 26636;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83AA1DF8;
	sub_831EA418(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83aa1e0c
	goto loc_83AA1E0C;
loc_83AA1E00:
	// lwz r11,28344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28344);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83AA1E0C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83AA1E0C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AA1E1C"))) PPC_WEAK_FUNC(sub_83AA1E1C);
PPC_FUNC_IMPL(__imp__sub_83AA1E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AA1E20"))) PPC_WEAK_FUNC(sub_83AA1E20);
PPC_FUNC_IMPL(__imp__sub_83AA1E20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83AA1E28;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,28344
	ctx.r31.s64 = ctx.r11.s64 + 28344;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83aa1e5c
	if (!cr6.eq) goto loc_83AA1E5C;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-5
	ctx.r5.s64 = -5;
	// addi r4,r11,26648
	ctx.r4.s64 = ctx.r11.s64 + 26648;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83AA1E5C;
	sub_831EA418(ctx, base);
loc_83AA1E5C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83AA1E70;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AA1E78"))) PPC_WEAK_FUNC(sub_83AA1E78);
PPC_FUNC_IMPL(__imp__sub_83AA1E78) {
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,28344
	ctx.r31.s64 = ctx.r11.s64 + 28344;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83aa1eb8
	if (!cr6.eq) goto loc_83AA1EB8;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-5
	ctx.r5.s64 = -5;
	// addi r4,r11,26660
	ctx.r4.s64 = ctx.r11.s64 + 26660;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83AA1EB8;
	sub_831EA418(ctx, base);
loc_83AA1EB8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83AA1EC8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_83AA1EE0"))) PPC_WEAK_FUNC(sub_83AA1EE0);
PPC_FUNC_IMPL(__imp__sub_83AA1EE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83AA1EE8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,28344
	ctx.r31.s64 = ctx.r11.s64 + 28344;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83aa1f20
	if (!cr6.eq) goto loc_83AA1F20;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-5
	ctx.r5.s64 = -5;
	// addi r4,r11,26672
	ctx.r4.s64 = ctx.r11.s64 + 26672;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83AA1F20;
	sub_831EA418(ctx, base);
loc_83AA1F20:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83AA1F38;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AA1F40"))) PPC_WEAK_FUNC(sub_83AA1F40);
PPC_FUNC_IMPL(__imp__sub_83AA1F40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83AA1F48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,28344
	ctx.r31.s64 = ctx.r11.s64 + 28344;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83aa1f7c
	if (!cr6.eq) goto loc_83AA1F7C;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-5
	ctx.r5.s64 = -5;
	// addi r4,r11,26684
	ctx.r4.s64 = ctx.r11.s64 + 26684;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83AA1F7C;
	sub_831EA418(ctx, base);
loc_83AA1F7C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83AA1F90;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AA1F98"))) PPC_WEAK_FUNC(sub_83AA1F98);
PPC_FUNC_IMPL(__imp__sub_83AA1F98) {
	PPC_FUNC_PROLOGUE();
	// b 0x83b673c0
	sub_83B673C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AA1F9C"))) PPC_WEAK_FUNC(sub_83AA1F9C);
PPC_FUNC_IMPL(__imp__sub_83AA1F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AA1FA0"))) PPC_WEAK_FUNC(sub_83AA1FA0);
PPC_FUNC_IMPL(__imp__sub_83AA1FA0) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpw cr6,r4,r5
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, xer);
	// ble cr6,0x83aa1fc8
	if (!cr6.gt) goto loc_83AA1FC8;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
loc_83AA1FC8:
	// bl 0x83b67438
	ctx.lr = 0x83AA1FCC;
	sub_83B67438(ctx, base);
	// subf r11,r31,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r31.s64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// divwu r10,r3,r11
	ctx.r10.u32 = PPCDivide(ctx.r3.u32, ctx.r11.u32);
	// twllei r11,0
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
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

__attribute__((alias("__imp__sub_83AA2000"))) PPC_WEAK_FUNC(sub_83AA2000);
PPC_FUNC_IMPL(__imp__sub_83AA2000) {
	PPC_FUNC_PROLOGUE();
	// b 0x83b67480
	sub_83B67480(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AA2004"))) PPC_WEAK_FUNC(sub_83AA2004);
PPC_FUNC_IMPL(__imp__sub_83AA2004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AA2008"))) PPC_WEAK_FUNC(sub_83AA2008);
PPC_FUNC_IMPL(__imp__sub_83AA2008) {
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
	// stfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi r11,0
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble 0x83aa205c
	if (!cr0.gt) goto loc_83AA205C;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// ble cr6,0x83aa2040
	if (!cr6.gt) goto loc_83AA2040;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x83aa205c
	if (!cr6.eq) goto loc_83AA205C;
loc_83AA2040:
	// lfs f0,20(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fadds f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f12,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fadds f30,f12,f0
	ctx.f30.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// b 0x83aa2064
	goto loc_83AA2064;
loc_83AA205C:
	// lfs f31,20(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f30.f64 = double(temp.f32);
loc_83AA2064:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83aa2648
	if (cr6.eq) goto loc_83AA2648;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x83aa2580
	if (cr6.eq) goto loc_83AA2580;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x83aa24d0
	if (cr6.eq) goto loc_83AA24D0;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// beq cr6,0x83aa232c
	if (cr6.eq) goto loc_83AA232C;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// beq cr6,0x83aa21ac
	if (cr6.eq) goto loc_83AA21AC;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// bne cr6,0x83aa26cc
	if (!cr6.eq) goto loc_83AA26CC;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lis r8,-32205
	ctx.r8.s64 = -2110586880;
	// lis r7,-32205
	ctx.r7.s64 = -2110586880;
	// lis r6,-32205
	ctx.r6.s64 = -2110586880;
	// lfs f13,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// lfs f0,-26260(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,28392(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 28392);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,26048(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 26048);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,26044(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 26044);
	ctx.f12.f64 = double(temp.f32);
	// ble cr6,0x83aa2130
	if (!cr6.gt) goto loc_83AA2130;
	// lfs f9,80(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f31,f13
	cr6.compare(ctx.f31.f64, ctx.f13.f64);
	// fadds f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// stfs f9,80(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// beq cr6,0x83aa2130
	if (cr6.eq) goto loc_83AA2130;
	// fmuls f9,f31,f12
	ctx.f9.f64 = double(float(ctx.f31.f64 * ctx.f12.f64));
	// lfs f4,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f7,f31,f11
	ctx.f7.f64 = double(float(ctx.f31.f64 * ctx.f11.f64));
	// lfs f3,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f5,f31,f10
	ctx.f5.f64 = double(float(ctx.f31.f64 * ctx.f10.f64));
	// lfs f2,144(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,176(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	ctx.f1.f64 = double(temp.f32);
	// lfs f8,208(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f6.f64 = double(temp.f32);
	// fadds f4,f4,f9
	ctx.f4.f64 = double(float(ctx.f4.f64 + ctx.f9.f64));
	// stfs f4,16(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// fadds f9,f3,f9
	ctx.f9.f64 = double(float(ctx.f3.f64 + ctx.f9.f64));
	// stfs f9,48(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// fadds f9,f7,f2
	ctx.f9.f64 = double(float(ctx.f7.f64 + ctx.f2.f64));
	// stfs f9,144(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// fadds f9,f7,f1
	ctx.f9.f64 = double(float(ctx.f7.f64 + ctx.f1.f64));
	// stfs f9,176(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 176, temp.u32);
	// fadds f9,f5,f8
	ctx.f9.f64 = double(float(ctx.f5.f64 + ctx.f8.f64));
	// stfs f9,208(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 208, temp.u32);
	// fadds f9,f5,f6
	ctx.f9.f64 = double(float(ctx.f5.f64 + ctx.f6.f64));
	// stfs f9,240(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 240, temp.u32);
loc_83AA2130:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// ble cr6,0x83aa26cc
	if (!cr6.gt) goto loc_83AA26CC;
	// lfs f9,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f30,f13
	cr6.compare(ctx.f30.f64, ctx.f13.f64);
	// fadds f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// stfs f0,116(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// beq cr6,0x83aa26cc
	if (cr6.eq) goto loc_83AA26CC;
	// fmuls f11,f30,f11
	ctx.f11.f64 = double(float(ctx.f30.f64 * ctx.f11.f64));
	// lfs f5,148(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f13,f30,f12
	ctx.f13.f64 = double(float(ctx.f30.f64 * ctx.f12.f64));
	// lfs f8,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f10,f30,f10
	ctx.f10.f64 = double(float(ctx.f30.f64 * ctx.f10.f64));
	// lfs f12,212(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	ctx.f12.f64 = double(temp.f32);
	// lfs f7,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f7.f64 = double(temp.f32);
	// lfs f9,244(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f9.f64 = double(temp.f32);
	// lfs f6,84(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f6.f64 = double(temp.f32);
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f0,116(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// fadds f0,f11,f5
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f5.f64));
	// stfs f0,148(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// fadds f8,f13,f8
	ctx.f8.f64 = double(float(ctx.f13.f64 + ctx.f8.f64));
	// stfs f8,20(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// fadds f0,f12,f10
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// stfs f0,212(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 212, temp.u32);
	// fadds f8,f13,f7
	ctx.f8.f64 = double(float(ctx.f13.f64 + ctx.f7.f64));
	// stfs f8,52(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// fadds f13,f13,f6
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f6.f64));
	// stfs f13,84(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// fadds f0,f9,f10
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// stfs f0,244(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 244, temp.u32);
	// b 0x83aa26cc
	goto loc_83AA26CC;
loc_83AA21AC:
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x83a82e68
	ctx.lr = 0x83AA21B4;
	sub_83A82E68(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x83aa2250
	if (cr6.lt) goto loc_83AA2250;
	// bne cr6,0x83aa26cc
	if (!cr6.eq) goto loc_83AA26CC;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lis r8,-32205
	ctx.r8.s64 = -2110586880;
	// lis r7,-32205
	ctx.r7.s64 = -2110586880;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// lfs f13,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-26260(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,26048(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 26048);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,26044(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 26044);
	ctx.f12.f64 = double(temp.f32);
	// ble cr6,0x83aa2238
	if (!cr6.gt) goto loc_83AA2238;
	// lfs f10,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f31,f13
	cr6.compare(ctx.f31.f64, ctx.f13.f64);
	// fadds f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// stfs f10,48(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// beq cr6,0x83aa2238
	if (cr6.eq) goto loc_83AA2238;
	// fmuls f10,f31,f12
	ctx.f10.f64 = double(float(ctx.f31.f64 * ctx.f12.f64));
	// lfs f9,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f31,f11
	ctx.f8.f64 = double(float(ctx.f31.f64 * ctx.f11.f64));
	// lfs f7,80(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,112(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,144(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	ctx.f5.f64 = double(temp.f32);
	// fadds f9,f9,f10
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// stfs f9,16(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// fadds f10,f10,f7
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f7.f64));
	// stfs f10,80(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// fadds f10,f8,f6
	ctx.f10.f64 = double(float(ctx.f8.f64 + ctx.f6.f64));
	// stfs f10,112(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// fadds f10,f8,f5
	ctx.f10.f64 = double(float(ctx.f8.f64 + ctx.f5.f64));
	// stfs f10,144(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
loc_83AA2238:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// ble cr6,0x83aa26cc
	if (!cr6.gt) goto loc_83AA26CC;
	// lfs f10,180(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	ctx.f10.f64 = double(temp.f32);
	// fadds f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// stfs f0,180(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 180, temp.u32);
	// b 0x83aa2480
	goto loc_83AA2480;
loc_83AA2250:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lis r8,-32205
	ctx.r8.s64 = -2110586880;
	// lis r7,-32205
	ctx.r7.s64 = -2110586880;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// lfs f13,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-26260(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,26048(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 26048);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,26044(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 26044);
	ctx.f12.f64 = double(temp.f32);
	// ble cr6,0x83aa22c8
	if (!cr6.gt) goto loc_83AA22C8;
	// lfs f10,80(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f31,f13
	cr6.compare(ctx.f31.f64, ctx.f13.f64);
	// fadds f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// stfs f10,80(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// beq cr6,0x83aa22c8
	if (cr6.eq) goto loc_83AA22C8;
	// fmuls f10,f31,f12
	ctx.f10.f64 = double(float(ctx.f31.f64 * ctx.f12.f64));
	// lfs f9,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f31,f11
	ctx.f8.f64 = double(float(ctx.f31.f64 * ctx.f11.f64));
	// lfs f7,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,144(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,176(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	ctx.f5.f64 = double(temp.f32);
	// fadds f9,f9,f10
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// stfs f9,16(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// fadds f10,f7,f10
	ctx.f10.f64 = double(float(ctx.f7.f64 + ctx.f10.f64));
	// stfs f10,48(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// fadds f10,f8,f6
	ctx.f10.f64 = double(float(ctx.f8.f64 + ctx.f6.f64));
	// stfs f10,144(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// fadds f10,f8,f5
	ctx.f10.f64 = double(float(ctx.f8.f64 + ctx.f5.f64));
	// stfs f10,176(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 176, temp.u32);
loc_83AA22C8:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// ble cr6,0x83aa26cc
	if (!cr6.gt) goto loc_83AA26CC;
	// lfs f10,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f30,f13
	cr6.compare(ctx.f30.f64, ctx.f13.f64);
	// fadds f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// stfs f0,116(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// beq cr6,0x83aa26cc
	if (cr6.eq) goto loc_83AA26CC;
	// fmuls f0,f30,f12
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f12.f64));
	// lfs f13,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f30,f11
	ctx.f12.f64 = double(float(ctx.f30.f64 * ctx.f11.f64));
	// lfs f11,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,84(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,148(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,180(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	ctx.f8.f64 = double(temp.f32);
	// fadds f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f13,20(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// fadds f13,f0,f11
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// stfs f13,52(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// fadds f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// fadds f0,f12,f9
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// stfs f0,148(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// fadds f0,f12,f8
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// stfs f0,180(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 180, temp.u32);
	// b 0x83aa26cc
	goto loc_83AA26CC;
loc_83AA232C:
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x83a82e68
	ctx.lr = 0x83AA2334;
	sub_83A82E68(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x83aa2400
	if (cr6.lt) goto loc_83AA2400;
	// bne cr6,0x83aa26cc
	if (!cr6.eq) goto loc_83AA26CC;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r9,-32205
	ctx.r9.s64 = -2110586880;
	// lis r8,-32205
	ctx.r8.s64 = -2110586880;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,26048(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 26048);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,26044(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 26044);
	ctx.f13.f64 = double(temp.f32);
	// ble cr6,0x83aa23a4
	if (!cr6.gt) goto loc_83AA23A4;
	// fcmpu cr6,f31,f0
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// beq cr6,0x83aa23a4
	if (cr6.eq) goto loc_83AA23A4;
	// fmuls f11,f31,f13
	ctx.f11.f64 = double(float(ctx.f31.f64 * ctx.f13.f64));
	// lfs f10,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f31,f12
	ctx.f9.f64 = double(float(ctx.f31.f64 * ctx.f12.f64));
	// lfs f8,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,112(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,144(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	ctx.f6.f64 = double(temp.f32);
	// fadds f10,f10,f11
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// stfs f10,16(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// fadds f11,f8,f11
	ctx.f11.f64 = double(float(ctx.f8.f64 + ctx.f11.f64));
	// stfs f11,48(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// fadds f11,f9,f7
	ctx.f11.f64 = double(float(ctx.f9.f64 + ctx.f7.f64));
	// stfs f11,112(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// fadds f11,f9,f6
	ctx.f11.f64 = double(float(ctx.f9.f64 + ctx.f6.f64));
	// stfs f11,144(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
loc_83AA23A4:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// ble cr6,0x83aa26cc
	if (!cr6.gt) goto loc_83AA26CC;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// fcmpu cr6,f30,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// lfs f11,84(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// beq cr6,0x83aa26cc
	if (cr6.eq) goto loc_83AA26CC;
	// fmuls f0,f30,f13
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f13.f64));
	// lfs f13,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f30,f12
	ctx.f12.f64 = double(float(ctx.f30.f64 * ctx.f12.f64));
	// lfs f11,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,116(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,148(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f9.f64 = double(temp.f32);
	// fadds f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f13,20(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// fadds f0,f12,f10
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// stfs f0,116(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// fadds f0,f12,f9
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// b 0x83aa24c8
	goto loc_83AA24C8;
loc_83AA2400:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r9,-32205
	ctx.r9.s64 = -2110586880;
	// lis r8,-32205
	ctx.r8.s64 = -2110586880;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// lfs f13,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,26048(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 26048);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,26044(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 26044);
	ctx.f12.f64 = double(temp.f32);
	// ble cr6,0x83aa2478
	if (!cr6.gt) goto loc_83AA2478;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfs f10,80(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f31,f13
	cr6.compare(ctx.f31.f64, ctx.f13.f64);
	// lfs f0,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// beq cr6,0x83aa2478
	if (cr6.eq) goto loc_83AA2478;
	// fmuls f0,f31,f12
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f12.f64));
	// lfs f10,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f31,f11
	ctx.f9.f64 = double(float(ctx.f31.f64 * ctx.f11.f64));
	// lfs f8,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,112(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,144(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	ctx.f6.f64 = double(temp.f32);
	// fadds f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// stfs f10,16(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// fadds f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// fadds f0,f9,f7
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f7.f64));
	// stfs f0,112(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// fadds f0,f9,f6
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f6.f64));
	// stfs f0,144(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
loc_83AA2478:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// ble cr6,0x83aa26cc
	if (!cr6.gt) goto loc_83AA26CC;
loc_83AA2480:
	// fcmpu cr6,f30,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f30.f64, ctx.f13.f64);
	// beq cr6,0x83aa26cc
	if (cr6.eq) goto loc_83AA26CC;
	// fmuls f0,f30,f12
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f12.f64));
	// lfs f13,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f30,f11
	ctx.f12.f64 = double(float(ctx.f30.f64 * ctx.f11.f64));
	// lfs f11,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,84(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,116(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,148(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f8.f64 = double(temp.f32);
	// fadds f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f13,20(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// fadds f13,f0,f11
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// stfs f13,52(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// fadds f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// fadds f0,f12,f9
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// stfs f0,116(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// fadds f0,f12,f8
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
loc_83AA24C8:
	// stfs f0,148(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// b 0x83aa26cc
	goto loc_83AA26CC;
loc_83AA24D0:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r9,-32205
	ctx.r9.s64 = -2110586880;
	// lis r8,-32205
	ctx.r8.s64 = -2110586880;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// lfs f12,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,26048(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 26048);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,26044(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 26044);
	ctx.f0.f64 = double(temp.f32);
	// ble cr6,0x83aa2534
	if (!cr6.gt) goto loc_83AA2534;
	// fcmpu cr6,f31,f12
	cr6.compare(ctx.f31.f64, ctx.f12.f64);
	// beq cr6,0x83aa2534
	if (cr6.eq) goto loc_83AA2534;
	// fmuls f11,f31,f0
	ctx.f11.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// lfs f10,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f31,f13
	ctx.f9.f64 = double(float(ctx.f31.f64 * ctx.f13.f64));
	// lfs f8,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,80(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,112(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f6.f64 = double(temp.f32);
	// fadds f10,f10,f11
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// stfs f10,16(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// fadds f11,f8,f11
	ctx.f11.f64 = double(float(ctx.f8.f64 + ctx.f11.f64));
	// stfs f11,48(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// fadds f11,f9,f7
	ctx.f11.f64 = double(float(ctx.f9.f64 + ctx.f7.f64));
	// stfs f11,80(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// fadds f11,f9,f6
	ctx.f11.f64 = double(float(ctx.f9.f64 + ctx.f6.f64));
	// stfs f11,112(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
loc_83AA2534:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// ble cr6,0x83aa26cc
	if (!cr6.gt) goto loc_83AA26CC;
	// fcmpu cr6,f30,f12
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f30.f64, ctx.f12.f64);
	// beq cr6,0x83aa26cc
	if (cr6.eq) goto loc_83AA26CC;
	// fmuls f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// lfs f12,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f30,f13
	ctx.f13.f64 = double(float(ctx.f30.f64 * ctx.f13.f64));
	// lfs f11,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,84(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,116(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f9.f64 = double(temp.f32);
	// fadds f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfs f12,20(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// fadds f0,f13,f10
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// fadds f0,f13,f9
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// stfs f0,116(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// b 0x83aa26cc
	goto loc_83AA26CC;
loc_83AA2580:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x83aa25dc
	if (!cr6.eq) goto loc_83AA25DC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// beq cr6,0x83aa26cc
	if (cr6.eq) goto loc_83AA26CC;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// lfs f11,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,26048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26048);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// fadds f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// stfs f11,8(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fadds f11,f0,f10
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// stfs f11,12(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// fadds f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f13,40(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// b 0x83aa26cc
	goto loc_83AA26CC;
loc_83AA25DC:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32205
	ctx.r9.s64 = -2110586880;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,26044(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 26044);
	ctx.f13.f64 = double(temp.f32);
	// ble cr6,0x83aa2618
	if (!cr6.gt) goto loc_83AA2618;
	// fcmpu cr6,f31,f0
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// beq cr6,0x83aa2618
	if (cr6.eq) goto loc_83AA2618;
	// fmuls f12,f31,f13
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f13.f64));
	// lfs f11,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// fadds f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f11,16(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// fadds f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// stfs f12,48(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
loc_83AA2618:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// ble cr6,0x83aa26cc
	if (!cr6.gt) goto loc_83AA26CC;
	// fcmpu cr6,f30,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// beq cr6,0x83aa26cc
	if (cr6.eq) goto loc_83AA26CC;
	// fmuls f0,f30,f13
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f13.f64));
	// lfs f13,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f13,20(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// b 0x83aa26cc
	goto loc_83AA26CC;
loc_83AA2648:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x83aa268c
	if (!cr6.eq) goto loc_83AA268C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// beq cr6,0x83aa26cc
	if (cr6.eq) goto loc_83AA26CC;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,26044(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26044);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// fadds f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// b 0x83aa26cc
	goto loc_83AA26CC;
loc_83AA268C:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// ble cr6,0x83aa26b0
	if (!cr6.gt) goto loc_83AA26B0;
	// fcmpu cr6,f31,f0
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// beq cr6,0x83aa26b0
	if (cr6.eq) goto loc_83AA26B0;
	// lfs f13,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f31.f64));
	// stfs f13,16(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
loc_83AA26B0:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// ble cr6,0x83aa26cc
	if (!cr6.gt) goto loc_83AA26CC;
	// fcmpu cr6,f30,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// beq cr6,0x83aa26cc
	if (cr6.eq) goto loc_83AA26CC;
	// lfs f0,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 + ctx.f0.f64));
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
loc_83AA26CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

