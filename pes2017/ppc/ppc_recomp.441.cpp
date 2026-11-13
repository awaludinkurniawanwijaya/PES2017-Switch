#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_837C5598"))) PPC_WEAK_FUNC(sub_837C5598);
PPC_FUNC_IMPL(__imp__sub_837C5598) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// li r11,20
	ctx.r11.s64 = 20;
	// rlwinm r10,r3,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// subfc r9,r11,r3
	xer.ca = ctx.r3.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r3.s64 - ctx.r11.s64;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// lis r7,-31743
	ctx.r7.s64 = -2080309248;
	// subfe r6,r10,r8
	temp.u8 = (~ctx.r10.u32 + ctx.r8.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r10.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r5,r7,-11704
	ctx.r5.s64 = ctx.r7.s64 + -11704;
	// and r4,r6,r3
	ctx.r4.u64 = ctx.r6.u64 & ctx.r3.u64;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r3,r5
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C55C4"))) PPC_WEAK_FUNC(sub_837C55C4);
PPC_FUNC_IMPL(__imp__sub_837C55C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C55C8"))) PPC_WEAK_FUNC(sub_837C55C8);
PPC_FUNC_IMPL(__imp__sub_837C55C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// li r11,20
	ctx.r11.s64 = 20;
	// rlwinm r10,r3,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// subfc r9,r11,r3
	xer.ca = ctx.r3.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r3.s64 - ctx.r11.s64;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// lis r7,-31743
	ctx.r7.s64 = -2080309248;
	// subfe r6,r10,r8
	temp.u8 = (~ctx.r10.u32 + ctx.r8.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r10.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r5,r7,-11616
	ctx.r5.s64 = ctx.r7.s64 + -11616;
	// and r4,r6,r3
	ctx.r4.u64 = ctx.r6.u64 & ctx.r3.u64;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r3,r5
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C55F4"))) PPC_WEAK_FUNC(sub_837C55F4);
PPC_FUNC_IMPL(__imp__sub_837C55F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C55F8"))) PPC_WEAK_FUNC(sub_837C55F8);
PPC_FUNC_IMPL(__imp__sub_837C55F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// li r11,20
	ctx.r11.s64 = 20;
	// rlwinm r10,r3,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// subfc r9,r11,r3
	xer.ca = ctx.r3.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r3.s64 - ctx.r11.s64;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// lis r7,-31743
	ctx.r7.s64 = -2080309248;
	// subfe r6,r10,r8
	temp.u8 = (~ctx.r10.u32 + ctx.r8.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r10.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r7,-11616
	ctx.r11.s64 = ctx.r7.s64 + -11616;
	// and r5,r6,r3
	ctx.r5.u64 = ctx.r6.u64 & ctx.r3.u64;
	// addi r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 + 80;
	// rlwinm r10,r5,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C5628"))) PPC_WEAK_FUNC(sub_837C5628);
PPC_FUNC_IMPL(__imp__sub_837C5628) {
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
	// li r11,20
	ctx.r11.s64 = 20;
	// rlwinm r10,r5,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// subfc r9,r11,r5
	xer.ca = ctx.r5.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r5.s64 - ctx.r11.s64;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// subfe r7,r10,r8
	temp.u8 = (~ctx.r10.u32 + ctx.r8.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r10.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r31,r11,-11704
	ctx.r31.s64 = ctx.r11.s64 + -11704;
	// and r6,r7,r5
	ctx.r6.u64 = ctx.r7.u64 & ctx.r5.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r5,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// bl 0x834f0fc0
	ctx.lr = 0x837C5668;
	sub_834F0FC0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x837c56a8
	if (cr6.lt) goto loc_837C56A8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_837C5674:
	// li r10,20
	ctx.r10.s64 = 20;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfc r8,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r7,r10,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfe r6,r9,r7
	temp.u8 = (~ctx.r9.u32 + ctx.r7.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r9.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r5,r6,r11
	ctx.r5.u64 = ctx.r6.u64 & ctx.r11.u64;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r4,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// cmpw cr6,r10,r3
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, xer);
	// beq cr6,0x837c56c0
	if (cr6.eq) goto loc_837C56C0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,20
	cr6.compare<int32_t>(ctx.r11.s32, 20, xer);
	// blt cr6,0x837c5674
	if (cr6.lt) goto loc_837C5674;
loc_837C56A8:
	// li r3,-1
	ctx.r3.s64 = -1;
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
loc_837C56C0:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
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

__attribute__((alias("__imp__sub_837C56D8"))) PPC_WEAK_FUNC(sub_837C56D8);
PPC_FUNC_IMPL(__imp__sub_837C56D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x837C56E0;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r3,72
	ctx.r30.s64 = ctx.r3.s64 + 72;
	// addi r26,r11,-11704
	ctx.r26.s64 = ctx.r11.s64 + -11704;
loc_837C5700:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x837c5628
	ctx.lr = 0x837C5710;
	sub_837C5628(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// li r11,20
	ctx.r11.s64 = 20;
	// rlwinm r10,r31,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1;
	// subfc r9,r11,r31
	xer.ca = ctx.r31.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r31.s64 - ctx.r11.s64;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// li r6,1
	ctx.r6.s64 = 1;
	// subfe r7,r10,r8
	temp.u8 = (~ctx.r10.u32 + ctx.r8.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r10.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// and r4,r7,r31
	ctx.r4.u64 = ctx.r7.u64 & ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r26
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// bl 0x834f1000
	ctx.lr = 0x837C5744;
	sub_834F1000(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// cmpwi cr6,r31,20
	cr6.compare<int32_t>(ctx.r31.s32, 20, xer);
	// stfs f13,12(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfsu f12,16(r30)
	ea = 16 + ctx.r30.u32;
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r30.u32 = ea;
	// blt cr6,0x837c5700
	if (cr6.lt) goto loc_837C5700;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837C5774"))) PPC_WEAK_FUNC(sub_837C5774);
PPC_FUNC_IMPL(__imp__sub_837C5774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C5778"))) PPC_WEAK_FUNC(sub_837C5778);
PPC_FUNC_IMPL(__imp__sub_837C5778) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837C5780;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// li r5,7
	ctx.r5.s64 = 7;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// addi r4,r11,-20512
	ctx.r4.s64 = ctx.r11.s64 + -20512;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x837C57AC;
	sub_8259CC28(ctx, base);
	// bl 0x837bf2b0
	ctx.lr = 0x837C57B0;
	sub_837BF2B0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x837bda88
	ctx.lr = 0x837C57B8;
	sub_837BDA88(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x837c57dc
	if (cr6.lt) goto loc_837C57DC;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x837C57DC;
	sub_825952B8(ctx, base);
loc_837C57DC:
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// addi r3,r11,-11704
	ctx.r3.s64 = ctx.r11.s64 + -11704;
	// bl 0x837c5548
	ctx.lr = 0x837C57F8;
	sub_837C5548(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r10,-11616
	ctx.r3.s64 = ctx.r10.s64 + -11616;
	// bl 0x837c56d8
	ctx.lr = 0x837C5808;
	sub_837C56D8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837C5810"))) PPC_WEAK_FUNC(sub_837C5810);
PPC_FUNC_IMPL(__imp__sub_837C5810) {
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
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-19456
	ctx.r10.s64 = ctx.r11.s64 + -19456;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x83103f60
	ctx.lr = 0x837C583C;
	sub_83103F60(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x837c585c
	if (cr6.eq) goto loc_837C585C;
	// bl 0x82595188
	ctx.lr = 0x837C584C;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x837C585C;
	sub_825952B8(ctx, base);
loc_837C585C:
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

__attribute__((alias("__imp__sub_837C5878"))) PPC_WEAK_FUNC(sub_837C5878);
PPC_FUNC_IMPL(__imp__sub_837C5878) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,-11208(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11208);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C5884"))) PPC_WEAK_FUNC(sub_837C5884);
PPC_FUNC_IMPL(__imp__sub_837C5884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C5888"))) PPC_WEAK_FUNC(sub_837C5888);
PPC_FUNC_IMPL(__imp__sub_837C5888) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x837C5890;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r11,-20104
	ctx.r11.s64 = ctx.r11.s64 + -20104;
	// addi r26,r1,96
	ctx.r26.s64 = ctx.r1.s64 + 96;
	// addi r10,r11,-256
	ctx.r10.s64 = ctx.r11.s64 + -256;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r9,r11,-208
	ctx.r9.s64 = ctx.r11.s64 + -208;
	// addi r8,r11,-156
	ctx.r8.s64 = ctx.r11.s64 + -156;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r7,r11,-104
	ctx.r7.s64 = ctx.r11.s64 + -104;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// addi r6,r11,-52
	ctx.r6.s64 = ctx.r11.s64 + -52;
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// li r25,22
	ctx.r25.s64 = 22;
	// li r27,19
	ctx.r27.s64 = 19;
	// addi r28,r11,-19456
	ctx.r28.s64 = ctx.r11.s64 + -19456;
loc_837C58E0:
	// lwz r30,0(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83104018
	ctx.lr = 0x837C58EC;
	sub_83104018(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837c5940
	if (cr6.eq) goto loc_837C5940;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x837C590C;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c5938
	if (cr6.eq) goto loc_837C5938;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83104868
	ctx.lr = 0x837C5928;
	sub_83104868(ctx, base);
	// stw r29,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// b 0x837c593c
	goto loc_837C593C;
loc_837C5938:
	// li r3,0
	ctx.r3.s64 = 0;
loc_837C593C:
	// bl 0x83103b18
	ctx.lr = 0x837C5940;
	sub_83103B18(ctx, base);
loc_837C5940:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmpwi cr6,r29,6
	cr6.compare<int32_t>(ctx.r29.s32, 6, xer);
	// blt cr6,0x837c58e0
	if (cr6.lt) goto loc_837C58E0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837C5958"))) PPC_WEAK_FUNC(sub_837C5958);
PPC_FUNC_IMPL(__imp__sub_837C5958) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-10496
	ctx.r8.s64 = ctx.r10.s64 + -10496;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r4,r11
	ctx.r7.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r10,r7,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r3,64(r6)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r6.u32 + 64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C5980"))) PPC_WEAK_FUNC(sub_837C5980);
PPC_FUNC_IMPL(__imp__sub_837C5980) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-10496
	ctx.r8.s64 = ctx.r10.s64 + -10496;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r4,r11
	ctx.r7.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r10,r7,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r3,65(r6)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r6.u32 + 65);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C59A8"))) PPC_WEAK_FUNC(sub_837C59A8);
PPC_FUNC_IMPL(__imp__sub_837C59A8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-10496
	ctx.r8.s64 = ctx.r10.s64 + -10496;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r4,r11
	ctx.r7.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r10,r7,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r3,66(r6)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r6.u32 + 66);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C59D0"))) PPC_WEAK_FUNC(sub_837C59D0);
PPC_FUNC_IMPL(__imp__sub_837C59D0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-10496
	ctx.r8.s64 = ctx.r10.s64 + -10496;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r4,r11
	ctx.r7.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r10,r7,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r3,67(r6)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r6.u32 + 67);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C59F8"))) PPC_WEAK_FUNC(sub_837C59F8);
PPC_FUNC_IMPL(__imp__sub_837C59F8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-10496
	ctx.r8.s64 = ctx.r10.s64 + -10496;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r4,r11
	ctx.r7.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r10,r7,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r3,68(r6)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r6.u32 + 68);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C5A20"))) PPC_WEAK_FUNC(sub_837C5A20);
PPC_FUNC_IMPL(__imp__sub_837C5A20) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-10496
	ctx.r8.s64 = ctx.r10.s64 + -10496;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r4,r11
	ctx.r7.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r10,r7,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r3,70(r6)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r6.u32 + 70);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C5A48"))) PPC_WEAK_FUNC(sub_837C5A48);
PPC_FUNC_IMPL(__imp__sub_837C5A48) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-10496
	ctx.r8.s64 = ctx.r10.s64 + -10496;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r4,r11
	ctx.r7.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r10,r7,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r3,71(r6)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r6.u32 + 71);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C5A70"))) PPC_WEAK_FUNC(sub_837C5A70);
PPC_FUNC_IMPL(__imp__sub_837C5A70) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-10496
	ctx.r8.s64 = ctx.r10.s64 + -10496;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r4,r11
	ctx.r7.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r10,r7,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r3,72(r6)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r6.u32 + 72);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C5A98"))) PPC_WEAK_FUNC(sub_837C5A98);
PPC_FUNC_IMPL(__imp__sub_837C5A98) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-10496
	ctx.r8.s64 = ctx.r10.s64 + -10496;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r4,r11
	ctx.r7.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r10,r7,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r3,74(r6)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r6.u32 + 74);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C5AC0"))) PPC_WEAK_FUNC(sub_837C5AC0);
PPC_FUNC_IMPL(__imp__sub_837C5AC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// blt cr6,0x837c5b14
	if (cr6.lt) goto loc_837C5B14;
	// cmpwi cr6,r5,2
	cr6.compare<int32_t>(ctx.r5.s32, 2, xer);
	// bge cr6,0x837c5b14
	if (!cr6.lt) goto loc_837C5B14;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x837c5b14
	if (cr6.lt) goto loc_837C5B14;
	// lis r10,-32211
	ctx.r10.s64 = -2110980096;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r10,-20368
	ctx.r9.s64 = ctx.r10.s64 + -20368;
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpw cr6,r4,r8
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r8.s32, xer);
	// bge cr6,0x837c5b14
	if (!cr6.lt) goto loc_837C5B14;
	// lis r9,-31743
	ctx.r9.s64 = -2080309248;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r9,-10496
	ctx.r8.s64 = ctx.r9.s64 + -10496;
	// add r7,r4,r10
	ctx.r7.u64 = ctx.r4.u64 + ctx.r10.u64;
	// rlwinm r10,r7,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r3,75(r6)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r6.u32 + 75);
	// blr 
	return;
loc_837C5B14:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C5B1C"))) PPC_WEAK_FUNC(sub_837C5B1C);
PPC_FUNC_IMPL(__imp__sub_837C5B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C5B20"))) PPC_WEAK_FUNC(sub_837C5B20);
PPC_FUNC_IMPL(__imp__sub_837C5B20) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-10496
	ctx.r8.s64 = ctx.r10.s64 + -10496;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r4,r11
	ctx.r7.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r10,r7,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r3,78(r6)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r6.u32 + 78);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C5B48"))) PPC_WEAK_FUNC(sub_837C5B48);
PPC_FUNC_IMPL(__imp__sub_837C5B48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,-11204(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11204);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C5B54"))) PPC_WEAK_FUNC(sub_837C5B54);
PPC_FUNC_IMPL(__imp__sub_837C5B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C5B58"))) PPC_WEAK_FUNC(sub_837C5B58);
PPC_FUNC_IMPL(__imp__sub_837C5B58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// addi r10,r11,-11216
	ctx.r10.s64 = ctx.r11.s64 + -11216;
	// bge cr6,0x837c5bf0
	if (!cr6.lt) goto loc_837C5BF0;
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
loc_837C5B80:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r5
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, xer);
	// beq cr6,0x837c5ba8
	if (cr6.eq) goto loc_837C5BA8;
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r8,r8,704
	ctx.r8.s64 = ctx.r8.s64 + 704;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, xer);
	// blt cr6,0x837c5b80
	if (cr6.lt) goto loc_837C5B80;
	// b 0x837c5bb0
	goto loc_837C5BB0;
loc_837C5BA8:
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
loc_837C5BB0:
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r11,176
	cr6.compare<int32_t>(ctx.r11.s32, 176, xer);
	// blt cr6,0x837c5bd0
	if (cr6.lt) goto loc_837C5BD0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_837C5BD0:
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r10,16
	ctx.r7.s64 = ctx.r10.s64 + 16;
	// stwx r9,r8,r7
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r9.u32);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// blr 
	return;
loc_837C5BF0:
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C5BF8"))) PPC_WEAK_FUNC(sub_837C5BF8);
PPC_FUNC_IMPL(__imp__sub_837C5BF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// addi r10,r11,-11216
	ctx.r10.s64 = ctx.r11.s64 + -11216;
	// bge cr6,0x837c5c74
	if (!cr6.lt) goto loc_837C5C74;
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
loc_837C5C18:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r7
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, xer);
	// beq cr6,0x837c5c50
	if (cr6.eq) goto loc_837C5C50;
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r8,r8,704
	ctx.r8.s64 = ctx.r8.s64 + 704;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, xer);
	// blt cr6,0x837c5c18
	if (cr6.lt) goto loc_837C5C18;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r11,176
	cr6.compare<int32_t>(ctx.r11.s32, 176, xer);
	// blt cr6,0x837c5c58
	if (cr6.lt) goto loc_837C5C58;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_837C5C50:
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_837C5C58:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// stwx r7,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r7.u32);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// blr 
	return;
loc_837C5C74:
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C5C7C"))) PPC_WEAK_FUNC(sub_837C5C7C);
PPC_FUNC_IMPL(__imp__sub_837C5C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C5C80"))) PPC_WEAK_FUNC(sub_837C5C80);
PPC_FUNC_IMPL(__imp__sub_837C5C80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-10496
	ctx.r9.s64 = ctx.r11.s64 + -10496;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r4,r11
	ctx.r7.u64 = ctx.r4.u64 + ctx.r11.u64;
	// lwzx r6,r10,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r5,r7,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r4,r6,r5
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// lwzx r3,r4,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// lhz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C5CB0"))) PPC_WEAK_FUNC(sub_837C5CB0);
PPC_FUNC_IMPL(__imp__sub_837C5CB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-10496
	ctx.r9.s64 = ctx.r11.s64 + -10496;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r4,r11
	ctx.r7.u64 = ctx.r4.u64 + ctx.r11.u64;
	// lwzx r6,r10,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r5,r7,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r4,r6,r5
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// lwzx r3,r4,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// lhz r3,34(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 34);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C5CE0"))) PPC_WEAK_FUNC(sub_837C5CE0);
PPC_FUNC_IMPL(__imp__sub_837C5CE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-10496
	ctx.r9.s64 = ctx.r11.s64 + -10496;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r4,r11
	ctx.r7.u64 = ctx.r4.u64 + ctx.r11.u64;
	// lwzx r6,r10,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r5,r7,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r4,r6,r5
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// lwzx r3,r4,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// lhz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 36);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C5D10"))) PPC_WEAK_FUNC(sub_837C5D10);
PPC_FUNC_IMPL(__imp__sub_837C5D10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-10496
	ctx.r9.s64 = ctx.r11.s64 + -10496;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r4,r11
	ctx.r7.u64 = ctx.r4.u64 + ctx.r11.u64;
	// lwzx r6,r10,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r5,r7,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r4,r6,r5
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// lwzx r3,r4,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// lhz r3,38(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 38);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C5D40"))) PPC_WEAK_FUNC(sub_837C5D40);
PPC_FUNC_IMPL(__imp__sub_837C5D40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-10496
	ctx.r9.s64 = ctx.r11.s64 + -10496;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r4,r11
	ctx.r7.u64 = ctx.r4.u64 + ctx.r11.u64;
	// lwzx r6,r10,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r5,r7,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r4,r6,r5
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// lwzx r3,r4,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// lhz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 40);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C5D70"))) PPC_WEAK_FUNC(sub_837C5D70);
PPC_FUNC_IMPL(__imp__sub_837C5D70) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-10496
	ctx.r8.s64 = ctx.r10.s64 + -10496;
	// add r7,r4,r11
	ctx.r7.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r6,r5,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r7,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r10,r9,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,16(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// lwzx r3,r4,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// lhz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C5DA4"))) PPC_WEAK_FUNC(sub_837C5DA4);
PPC_FUNC_IMPL(__imp__sub_837C5DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C5DA8"))) PPC_WEAK_FUNC(sub_837C5DA8);
PPC_FUNC_IMPL(__imp__sub_837C5DA8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-10496
	ctx.r8.s64 = ctx.r10.s64 + -10496;
	// add r7,r4,r11
	ctx.r7.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r6,r5,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r7,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r10,r9,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,16(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// lwzx r3,r4,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// lhz r3,34(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 34);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C5DDC"))) PPC_WEAK_FUNC(sub_837C5DDC);
PPC_FUNC_IMPL(__imp__sub_837C5DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C5DE0"))) PPC_WEAK_FUNC(sub_837C5DE0);
PPC_FUNC_IMPL(__imp__sub_837C5DE0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-10496
	ctx.r8.s64 = ctx.r10.s64 + -10496;
	// add r7,r4,r11
	ctx.r7.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r6,r5,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r7,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r10,r9,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,16(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// lwzx r3,r4,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// lhz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 36);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C5E14"))) PPC_WEAK_FUNC(sub_837C5E14);
PPC_FUNC_IMPL(__imp__sub_837C5E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C5E18"))) PPC_WEAK_FUNC(sub_837C5E18);
PPC_FUNC_IMPL(__imp__sub_837C5E18) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-10496
	ctx.r8.s64 = ctx.r10.s64 + -10496;
	// add r7,r4,r11
	ctx.r7.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r6,r5,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r7,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r10,r9,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,16(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// lwzx r3,r4,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// lhz r3,38(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 38);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C5E4C"))) PPC_WEAK_FUNC(sub_837C5E4C);
PPC_FUNC_IMPL(__imp__sub_837C5E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C5E50"))) PPC_WEAK_FUNC(sub_837C5E50);
PPC_FUNC_IMPL(__imp__sub_837C5E50) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-10496
	ctx.r8.s64 = ctx.r10.s64 + -10496;
	// add r7,r4,r11
	ctx.r7.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r6,r5,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r7,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r10,r9,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,16(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// lwzx r3,r4,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// lhz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 40);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C5E84"))) PPC_WEAK_FUNC(sub_837C5E84);
PPC_FUNC_IMPL(__imp__sub_837C5E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C5E88"))) PPC_WEAK_FUNC(sub_837C5E88);
PPC_FUNC_IMPL(__imp__sub_837C5E88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-10496
	ctx.r8.s64 = ctx.r10.s64 + -10496;
	// add r7,r4,r11
	ctx.r7.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r6,r5,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r7,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r10,r9,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,16(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// lwzx r3,r4,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// lfs f1,44(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C5EBC"))) PPC_WEAK_FUNC(sub_837C5EBC);
PPC_FUNC_IMPL(__imp__sub_837C5EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C5EC0"))) PPC_WEAK_FUNC(sub_837C5EC0);
PPC_FUNC_IMPL(__imp__sub_837C5EC0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-10496
	ctx.r8.s64 = ctx.r10.s64 + -10496;
	// add r7,r4,r11
	ctx.r7.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r6,r5,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r7,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r10,r9,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,16(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// lwzx r3,r4,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// lhz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 48);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C5EF4"))) PPC_WEAK_FUNC(sub_837C5EF4);
PPC_FUNC_IMPL(__imp__sub_837C5EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C5EF8"))) PPC_WEAK_FUNC(sub_837C5EF8);
PPC_FUNC_IMPL(__imp__sub_837C5EF8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-10496
	ctx.r8.s64 = ctx.r10.s64 + -10496;
	// add r7,r4,r11
	ctx.r7.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r6,r5,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r7,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r10,r9,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,16(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// lwzx r3,r4,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// lhz r3,50(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 50);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C5F2C"))) PPC_WEAK_FUNC(sub_837C5F2C);
PPC_FUNC_IMPL(__imp__sub_837C5F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C5F30"))) PPC_WEAK_FUNC(sub_837C5F30);
PPC_FUNC_IMPL(__imp__sub_837C5F30) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-10496
	ctx.r8.s64 = ctx.r10.s64 + -10496;
	// add r7,r4,r11
	ctx.r7.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r6,r5,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r7,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r10,r9,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,32(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// lwzx r3,r4,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// lhz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C5F64"))) PPC_WEAK_FUNC(sub_837C5F64);
PPC_FUNC_IMPL(__imp__sub_837C5F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C5F68"))) PPC_WEAK_FUNC(sub_837C5F68);
PPC_FUNC_IMPL(__imp__sub_837C5F68) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-10496
	ctx.r8.s64 = ctx.r10.s64 + -10496;
	// add r7,r4,r11
	ctx.r7.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r6,r5,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r7,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r10,r9,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,32(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// lwzx r3,r4,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// lhz r3,34(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 34);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C5F9C"))) PPC_WEAK_FUNC(sub_837C5F9C);
PPC_FUNC_IMPL(__imp__sub_837C5F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C5FA0"))) PPC_WEAK_FUNC(sub_837C5FA0);
PPC_FUNC_IMPL(__imp__sub_837C5FA0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-10496
	ctx.r8.s64 = ctx.r10.s64 + -10496;
	// add r7,r4,r11
	ctx.r7.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r6,r5,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r7,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r10,r9,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,32(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// lwzx r3,r4,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// lhz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 36);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C5FD4"))) PPC_WEAK_FUNC(sub_837C5FD4);
PPC_FUNC_IMPL(__imp__sub_837C5FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C5FD8"))) PPC_WEAK_FUNC(sub_837C5FD8);
PPC_FUNC_IMPL(__imp__sub_837C5FD8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-10496
	ctx.r8.s64 = ctx.r10.s64 + -10496;
	// add r7,r4,r11
	ctx.r7.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r6,r5,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r7,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r10,r9,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,32(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// lwzx r3,r4,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// lhz r3,38(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 38);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C600C"))) PPC_WEAK_FUNC(sub_837C600C);
PPC_FUNC_IMPL(__imp__sub_837C600C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C6010"))) PPC_WEAK_FUNC(sub_837C6010);
PPC_FUNC_IMPL(__imp__sub_837C6010) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-10496
	ctx.r8.s64 = ctx.r10.s64 + -10496;
	// add r7,r4,r11
	ctx.r7.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r6,r5,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r7,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r10,r9,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,32(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// lwzx r3,r4,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// lhz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 40);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C6044"))) PPC_WEAK_FUNC(sub_837C6044);
PPC_FUNC_IMPL(__imp__sub_837C6044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C6048"))) PPC_WEAK_FUNC(sub_837C6048);
PPC_FUNC_IMPL(__imp__sub_837C6048) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-10496
	ctx.r8.s64 = ctx.r10.s64 + -10496;
	// add r7,r4,r11
	ctx.r7.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r6,r5,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r7,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r10,r9,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,48(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// lwzx r3,r4,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// lhz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C607C"))) PPC_WEAK_FUNC(sub_837C607C);
PPC_FUNC_IMPL(__imp__sub_837C607C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C6080"))) PPC_WEAK_FUNC(sub_837C6080);
PPC_FUNC_IMPL(__imp__sub_837C6080) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-10496
	ctx.r8.s64 = ctx.r10.s64 + -10496;
	// add r7,r4,r11
	ctx.r7.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r6,r5,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r7,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r10,r9,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,48(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// lwzx r3,r4,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// lhz r3,34(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 34);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C60B4"))) PPC_WEAK_FUNC(sub_837C60B4);
PPC_FUNC_IMPL(__imp__sub_837C60B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C60B8"))) PPC_WEAK_FUNC(sub_837C60B8);
PPC_FUNC_IMPL(__imp__sub_837C60B8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-10496
	ctx.r8.s64 = ctx.r10.s64 + -10496;
	// add r7,r4,r11
	ctx.r7.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r6,r5,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r7,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r10,r9,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,48(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// lwzx r3,r4,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// lhz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 36);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C60EC"))) PPC_WEAK_FUNC(sub_837C60EC);
PPC_FUNC_IMPL(__imp__sub_837C60EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C60F0"))) PPC_WEAK_FUNC(sub_837C60F0);
PPC_FUNC_IMPL(__imp__sub_837C60F0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-10496
	ctx.r8.s64 = ctx.r10.s64 + -10496;
	// add r7,r4,r11
	ctx.r7.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r6,r5,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r7,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r10,r9,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,48(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// lwzx r3,r4,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// lhz r3,38(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 38);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C6124"))) PPC_WEAK_FUNC(sub_837C6124);
PPC_FUNC_IMPL(__imp__sub_837C6124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C6128"))) PPC_WEAK_FUNC(sub_837C6128);
PPC_FUNC_IMPL(__imp__sub_837C6128) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-10496
	ctx.r8.s64 = ctx.r10.s64 + -10496;
	// add r7,r4,r11
	ctx.r7.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r6,r5,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r7,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r10,r9,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,48(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// lwzx r3,r4,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// lhz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 40);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C615C"))) PPC_WEAK_FUNC(sub_837C615C);
PPC_FUNC_IMPL(__imp__sub_837C615C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C6160"))) PPC_WEAK_FUNC(sub_837C6160);
PPC_FUNC_IMPL(__imp__sub_837C6160) {
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
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,-19448
	ctx.r10.s64 = ctx.r11.s64 + -19448;
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// blt cr6,0x837c61a0
	if (cr6.lt) goto loc_837C61A0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x837c61a4
	goto loc_837C61A4;
loc_837C61A0:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_837C61A4:
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837c61c8
	if (cr6.lt) goto loc_837C61C8;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x837C61C8;
	sub_825952B8(ctx, base);
loc_837C61C8:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
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

__attribute__((alias("__imp__sub_837C61F0"))) PPC_WEAK_FUNC(sub_837C61F0);
PPC_FUNC_IMPL(__imp__sub_837C61F0) {
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
	// bl 0x837c6160
	ctx.lr = 0x837C6210;
	sub_837C6160(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837c6228
	if (cr6.eq) goto loc_837C6228;
	// bl 0x82416268
	ctx.lr = 0x837C6224;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_837C6228:
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

__attribute__((alias("__imp__sub_837C6240"))) PPC_WEAK_FUNC(sub_837C6240);
PPC_FUNC_IMPL(__imp__sub_837C6240) {
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
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-19444
	ctx.r10.s64 = ctx.r11.s64 + -19444;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x837c6160
	ctx.lr = 0x837C626C;
	sub_837C6160(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x837c6284
	if (cr6.eq) goto loc_837C6284;
	// bl 0x82416268
	ctx.lr = 0x837C6280;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_837C6284:
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

__attribute__((alias("__imp__sub_837C629C"))) PPC_WEAK_FUNC(sub_837C629C);
PPC_FUNC_IMPL(__imp__sub_837C629C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C62A0"))) PPC_WEAK_FUNC(sub_837C62A0);
PPC_FUNC_IMPL(__imp__sub_837C62A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x837C62A8;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r25,22
	ctx.r25.s64 = 22;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// srawi. r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x837c6340
	if (cr0.eq) goto loc_837C6340;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
loc_837C62D4:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837c6320
	if (cr6.eq) goto loc_837C6320;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x837C62F4;
	sub_82595150(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c6318
	if (cr6.eq) goto loc_837C6318;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837C6318;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_837C6318:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x837C6320;
	sub_82595170(ctx, base);
loc_837C6320:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r30,r8
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, xer);
	// blt cr6,0x837c62d4
	if (cr6.lt) goto loc_837C62D4;
loc_837C6340:
	// lwz r4,4(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplw cr6,r31,r4
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, xer);
	// beq cr6,0x837c6370
	if (cr6.eq) goto loc_837C6370;
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
	ctx.lr = 0x837C6368;
	sub_831CE420(ctx, base);
	// add r10,r30,r31
	ctx.r10.u64 = ctx.r30.u64 + ctx.r31.u64;
	// stw r10,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r10.u32);
loc_837C6370:
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// addi r27,r26,16
	ctx.r27.s64 = ctx.r26.s64 + 16;
	// lwz r10,20(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x837c63fc
	if (cr0.eq) goto loc_837C63FC;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
loc_837C6390:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837c63dc
	if (cr6.eq) goto loc_837C63DC;
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x837C63B0;
	sub_82595150(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c63d4
	if (cr6.eq) goto loc_837C63D4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837C63D4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_837C63D4:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x837C63DC;
	sub_82595170(ctx, base);
loc_837C63DC:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r30,r8
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, xer);
	// blt cr6,0x837c6390
	if (cr6.lt) goto loc_837C6390;
loc_837C63FC:
	// lwz r4,4(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r31,0(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplw cr6,r31,r4
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, xer);
	// beq cr6,0x837c642c
	if (cr6.eq) goto loc_837C642C;
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
	ctx.lr = 0x837C6424;
	sub_831CE420(ctx, base);
	// add r10,r30,r31
	ctx.r10.u64 = ctx.r30.u64 + ctx.r31.u64;
	// stw r10,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r10.u32);
loc_837C642C:
	// lwz r11,32(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32);
	// addi r29,r26,32
	ctx.r29.s64 = ctx.r26.s64 + 32;
	// lwz r10,36(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 36);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x837c64b8
	if (cr0.eq) goto loc_837C64B8;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
loc_837C644C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837c6498
	if (cr6.eq) goto loc_837C6498;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x837C646C;
	sub_82595150(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c6490
	if (cr6.eq) goto loc_837C6490;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837C6490;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_837C6490:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x837C6498;
	sub_82595170(ctx, base);
loc_837C6498:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r30,r8
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, xer);
	// blt cr6,0x837c644c
	if (cr6.lt) goto loc_837C644C;
loc_837C64B8:
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r31,r4
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, xer);
	// beq cr6,0x837c64e8
	if (cr6.eq) goto loc_837C64E8;
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
	ctx.lr = 0x837C64E0;
	sub_831CE420(ctx, base);
	// add r10,r30,r31
	ctx.r10.u64 = ctx.r30.u64 + ctx.r31.u64;
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
loc_837C64E8:
	// lwz r11,48(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 48);
	// addi r31,r26,48
	ctx.r31.s64 = ctx.r26.s64 + 48;
	// lwz r10,52(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 52);
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x837c6574
	if (cr0.eq) goto loc_837C6574;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
loc_837C6508:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837c6554
	if (cr6.eq) goto loc_837C6554;
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x837C6528;
	sub_82595150(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c654c
	if (cr6.eq) goto loc_837C654C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837C654C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_837C654C:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x837C6554;
	sub_82595170(ctx, base);
loc_837C6554:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r28,r8
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r8.u32, xer);
	// blt cr6,0x837c6508
	if (cr6.lt) goto loc_837C6508;
loc_837C6574:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, xer);
	// beq cr6,0x837c65a4
	if (cr6.eq) goto loc_837C65A4;
	// subf r11,r4,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x831ce420
	ctx.lr = 0x837C659C;
	sub_831CE420(ctx, base);
	// add r10,r28,r30
	ctx.r10.u64 = ctx.r28.u64 + ctx.r30.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_837C65A4:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r30,2
	ctx.r30.s64 = 2;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x837c65c0
	if (cr6.eq) goto loc_837C65C0;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x825952b8
	ctx.lr = 0x837C65C0;
	sub_825952B8(ctx, base);
loc_837C65C0:
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
	// stw r24,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r24.u32);
	// stw r24,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r24.u32);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x837c65e4
	if (cr6.eq) goto loc_837C65E4;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x825952b8
	ctx.lr = 0x837C65E4;
	sub_825952B8(ctx, base);
loc_837C65E4:
	// stw r24,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r24.u32);
	// stw r24,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r24.u32);
	// stw r24,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r24.u32);
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x837c6608
	if (cr6.eq) goto loc_837C6608;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x825952b8
	ctx.lr = 0x837C6608;
	sub_825952B8(ctx, base);
loc_837C6608:
	// stw r24,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r24.u32);
	// stw r24,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r24.u32);
	// stw r24,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r24.u32);
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x837c662c
	if (cr6.eq) goto loc_837C662C;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825952b8
	ctx.lr = 0x837C662C;
	sub_825952B8(ctx, base);
loc_837C662C:
	// stw r24,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r24.u32);
	// stw r24,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r24.u32);
	// stw r24,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r24.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837C6640"))) PPC_WEAK_FUNC(sub_837C6640);
PPC_FUNC_IMPL(__imp__sub_837C6640) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837C6648;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,22
	ctx.r29.s64 = 22;
	// lis r4,3
	ctx.r4.s64 = 196608;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,54276
	ctx.r4.u64 = ctx.r4.u64 | 54276;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x837C6668;
	sub_82595718(ctx, base);
	// li r8,3136
	ctx.r8.s64 = 3136;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r31,0
	ctx.r31.s64 = 0;
	// beq cr6,0x837c66fc
	if (cr6.eq) goto loc_837C66FC;
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// addi r11,r10,-2
	ctx.r11.s64 = ctx.r10.s64 + -2;
	// addi r9,r10,-80
	ctx.r9.s64 = ctx.r10.s64 + -80;
loc_837C668C:
	// stw r31,6(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6, ctx.r31.u32);
	// stw r31,10(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10, ctx.r31.u32);
	// stwu r31,80(r9)
	ea = 80 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r31.u32);
	ctx.r9.u32 = ea;
	// stw r31,18(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18, ctx.r31.u32);
	// stw r31,22(r11)
	PPC_STORE_U32(ctx.r11.u32 + 22, ctx.r31.u32);
	// stw r31,26(r11)
	PPC_STORE_U32(ctx.r11.u32 + 26, ctx.r31.u32);
	// stw r31,34(r11)
	PPC_STORE_U32(ctx.r11.u32 + 34, ctx.r31.u32);
	// stw r31,38(r11)
	PPC_STORE_U32(ctx.r11.u32 + 38, ctx.r31.u32);
	// stw r31,42(r11)
	PPC_STORE_U32(ctx.r11.u32 + 42, ctx.r31.u32);
	// stw r31,50(r11)
	PPC_STORE_U32(ctx.r11.u32 + 50, ctx.r31.u32);
	// stw r31,54(r11)
	PPC_STORE_U32(ctx.r11.u32 + 54, ctx.r31.u32);
	// stw r31,58(r11)
	PPC_STORE_U32(ctx.r11.u32 + 58, ctx.r31.u32);
	// stb r31,66(r11)
	PPC_STORE_U8(ctx.r11.u32 + 66, ctx.r31.u8);
	// stb r31,67(r11)
	PPC_STORE_U8(ctx.r11.u32 + 67, ctx.r31.u8);
	// stb r31,68(r11)
	PPC_STORE_U8(ctx.r11.u32 + 68, ctx.r31.u8);
	// stb r31,69(r11)
	PPC_STORE_U8(ctx.r11.u32 + 69, ctx.r31.u8);
	// stb r31,70(r11)
	PPC_STORE_U8(ctx.r11.u32 + 70, ctx.r31.u8);
	// stb r31,71(r11)
	PPC_STORE_U8(ctx.r11.u32 + 71, ctx.r31.u8);
	// stb r31,72(r11)
	PPC_STORE_U8(ctx.r11.u32 + 72, ctx.r31.u8);
	// stb r31,73(r11)
	PPC_STORE_U8(ctx.r11.u32 + 73, ctx.r31.u8);
	// stb r31,74(r11)
	PPC_STORE_U8(ctx.r11.u32 + 74, ctx.r31.u8);
	// stb r31,75(r11)
	PPC_STORE_U8(ctx.r11.u32 + 75, ctx.r31.u8);
	// stb r31,76(r11)
	PPC_STORE_U8(ctx.r11.u32 + 76, ctx.r31.u8);
	// stb r31,77(r11)
	PPC_STORE_U8(ctx.r11.u32 + 77, ctx.r31.u8);
	// stb r31,78(r11)
	PPC_STORE_U8(ctx.r11.u32 + 78, ctx.r31.u8);
	// sthu r31,80(r11)
	ea = 80 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r31.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x837c668c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837C668C;
	// b 0x837c6700
	goto loc_837C6700;
loc_837C66FC:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_837C6700:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// addi r30,r11,-11216
	ctx.r30.s64 = ctx.r11.s64 + -11216;
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
loc_837C6718:
	// stb r31,79(r11)
	PPC_STORE_U8(ctx.r11.u32 + 79, ctx.r31.u8);
	// stbu r31,80(r11)
	ea = 80 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r31.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x837c6718
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837C6718;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,14084
	ctx.r4.s64 = 14084;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x837C6738;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c67cc
	if (cr6.eq) goto loc_837C67CC;
	// li r8,176
	ctx.r8.s64 = 176;
	// li r9,176
	ctx.r9.s64 = 176;
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r11,r10,-2
	ctx.r11.s64 = ctx.r10.s64 + -2;
	// addi r9,r10,-80
	ctx.r9.s64 = ctx.r10.s64 + -80;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_837C675C:
	// stw r31,6(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6, ctx.r31.u32);
	// stw r31,10(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10, ctx.r31.u32);
	// stwu r31,80(r9)
	ea = 80 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r31.u32);
	ctx.r9.u32 = ea;
	// stw r31,18(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18, ctx.r31.u32);
	// stw r31,22(r11)
	PPC_STORE_U32(ctx.r11.u32 + 22, ctx.r31.u32);
	// stw r31,26(r11)
	PPC_STORE_U32(ctx.r11.u32 + 26, ctx.r31.u32);
	// stw r31,34(r11)
	PPC_STORE_U32(ctx.r11.u32 + 34, ctx.r31.u32);
	// stw r31,38(r11)
	PPC_STORE_U32(ctx.r11.u32 + 38, ctx.r31.u32);
	// stw r31,42(r11)
	PPC_STORE_U32(ctx.r11.u32 + 42, ctx.r31.u32);
	// stw r31,50(r11)
	PPC_STORE_U32(ctx.r11.u32 + 50, ctx.r31.u32);
	// stw r31,54(r11)
	PPC_STORE_U32(ctx.r11.u32 + 54, ctx.r31.u32);
	// stw r31,58(r11)
	PPC_STORE_U32(ctx.r11.u32 + 58, ctx.r31.u32);
	// stb r31,66(r11)
	PPC_STORE_U8(ctx.r11.u32 + 66, ctx.r31.u8);
	// stb r31,67(r11)
	PPC_STORE_U8(ctx.r11.u32 + 67, ctx.r31.u8);
	// stb r31,68(r11)
	PPC_STORE_U8(ctx.r11.u32 + 68, ctx.r31.u8);
	// stb r31,69(r11)
	PPC_STORE_U8(ctx.r11.u32 + 69, ctx.r31.u8);
	// stb r31,70(r11)
	PPC_STORE_U8(ctx.r11.u32 + 70, ctx.r31.u8);
	// stb r31,71(r11)
	PPC_STORE_U8(ctx.r11.u32 + 71, ctx.r31.u8);
	// stb r31,72(r11)
	PPC_STORE_U8(ctx.r11.u32 + 72, ctx.r31.u8);
	// stb r31,73(r11)
	PPC_STORE_U8(ctx.r11.u32 + 73, ctx.r31.u8);
	// stb r31,74(r11)
	PPC_STORE_U8(ctx.r11.u32 + 74, ctx.r31.u8);
	// stb r31,75(r11)
	PPC_STORE_U8(ctx.r11.u32 + 75, ctx.r31.u8);
	// stb r31,76(r11)
	PPC_STORE_U8(ctx.r11.u32 + 76, ctx.r31.u8);
	// stb r31,77(r11)
	PPC_STORE_U8(ctx.r11.u32 + 77, ctx.r31.u8);
	// stb r31,78(r11)
	PPC_STORE_U8(ctx.r11.u32 + 78, ctx.r31.u8);
	// sthu r31,80(r11)
	ea = 80 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r31.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x837c675c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837C675C;
	// b 0x837c67d0
	goto loc_837C67D0;
loc_837C67CC:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_837C67D0:
	// li r9,176
	ctx.r9.s64 = 176;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// addi r11,r30,16
	ctx.r11.s64 = ctx.r30.s64 + 16;
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_837C67EC:
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x837c67ec
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837C67EC;
	// li r9,176
	ctx.r9.s64 = 176;
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_837C6800:
	// stb r31,79(r11)
	PPC_STORE_U8(ctx.r11.u32 + 79, ctx.r31.u8);
	// stbu r31,80(r11)
	ea = 80 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r31.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x837c6800
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837C6800;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lis r8,-31769
	ctx.r8.s64 = -2082013184;
	// li r9,180
	ctx.r9.s64 = 180;
	// stw r10,724(r30)
	PPC_STORE_U32(ctx.r30.u32 + 724, ctx.r10.u32);
	// addi r8,r8,-8056
	ctx.r8.s64 = ctx.r8.s64 + -8056;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,720(r30)
	PPC_STORE_U32(ctx.r30.u32 + 720, ctx.r11.u32);
	// addi r11,r8,-4
	ctx.r11.s64 = ctx.r8.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_837C6830:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x837c6830
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837C6830;
	// li r10,180
	ctx.r10.s64 = 180;
	// addi r11,r30,728
	ctx.r11.s64 = ctx.r30.s64 + 728;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_837C684C:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x837c684c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837C684C;
	// lis r30,-31743
	ctx.r30.s64 = -2080309248;
	// lwz r3,-11208(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -11208);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x837c6898
	if (!cr6.eq) goto loc_837C6898;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595718
	ctx.lr = 0x837C6878;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c6890
	if (cr6.eq) goto loc_837C6890;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// stw r3,-11208(r30)
	PPC_STORE_U32(ctx.r30.u32 + -11208, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_837C6890:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r31,-11208(r30)
	PPC_STORE_U32(ctx.r30.u32 + -11208, ctx.r31.u32);
loc_837C6898:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837C68A0"))) PPC_WEAK_FUNC(sub_837C68A0);
PPC_FUNC_IMPL(__imp__sub_837C68A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x837C68A8;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r26,r11,-9764
	ctx.r26.s64 = ctx.r11.s64 + -9764;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837C68BC;
	sub_82596FE8(ctx, base);
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// li r27,22
	ctx.r27.s64 = 22;
	// addi r30,r11,-11216
	ctx.r30.s64 = ctx.r11.s64 + -11216;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837c6934
	if (cr6.eq) goto loc_837C6934;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x837C68E4;
	sub_82595150(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837c692c
	if (cr6.eq) goto loc_837C692C;
	// lwz r11,-4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// addi r28,r10,-4
	ctx.r28.s64 = ctx.r10.s64 + -4;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addic. r31,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r31.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blt 0x837c6924
	if (cr0.lt) goto loc_837C6924;
loc_837C6910:
	// addi r29,r29,-80
	ctx.r29.s64 = ctx.r29.s64 + -80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x837c62a0
	ctx.lr = 0x837C691C;
	sub_837C62A0(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bge 0x837c6910
	if (!cr0.lt) goto loc_837C6910;
loc_837C6924:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82416268
	ctx.lr = 0x837C692C;
	sub_82416268(ctx, base);
loc_837C692C:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x837C6934;
	sub_82595170(ctx, base);
loc_837C6934:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837c69a8
	if (cr6.eq) goto loc_837C69A8;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x837C6958;
	sub_82595150(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837c69a0
	if (cr6.eq) goto loc_837C69A0;
	// lwz r11,-4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// addi r28,r10,-4
	ctx.r28.s64 = ctx.r10.s64 + -4;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addic. r31,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r31.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blt 0x837c6998
	if (cr0.lt) goto loc_837C6998;
loc_837C6984:
	// addi r29,r29,-80
	ctx.r29.s64 = ctx.r29.s64 + -80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x837c62a0
	ctx.lr = 0x837C6990;
	sub_837C62A0(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bge 0x837c6984
	if (!cr0.lt) goto loc_837C6984;
loc_837C6998:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82416268
	ctx.lr = 0x837C69A0;
	sub_82416268(ctx, base);
loc_837C69A0:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x837C69A8;
	sub_82595170(ctx, base);
loc_837C69A8:
	// li r10,176
	ctx.r10.s64 = 176;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r30,16
	ctx.r8.s64 = ctx.r30.s64 + 16;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// addi r11,r8,-4
	ctx.r11.s64 = ctx.r8.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_837C69C8:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x837c69c8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837C69C8;
	// lis r31,-31743
	ctx.r31.s64 = -2080309248;
	// lwz r11,-11208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -11208);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837c6a08
	if (cr6.eq) goto loc_837C6A08;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x837C69F0;
	sub_82595150(ctx, base);
	// lwz r3,-11208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -11208);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c6a00
	if (cr6.eq) goto loc_837C6A00;
	// bl 0x82416268
	ctx.lr = 0x837C6A00;
	sub_82416268(ctx, base);
loc_837C6A00:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x837C6A08;
	sub_82595170(ctx, base);
loc_837C6A08:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r11,-11208(r31)
	PPC_STORE_U32(ctx.r31.u32 + -11208, ctx.r11.u32);
	// bl 0x82597088
	ctx.lr = 0x837C6A18;
	sub_82597088(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837C6A20"))) PPC_WEAK_FUNC(sub_837C6A20);
PPC_FUNC_IMPL(__imp__sub_837C6A20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x837C6A28;
	__savegprlr_23(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,2956
	cr6.compare<int32_t>(ctx.r4.s32, 2956, xer);
	// blt cr6,0x837c6e4c
	if (cr6.lt) goto loc_837C6E4C;
	// cmpwi cr6,r4,3136
	cr6.compare<int32_t>(ctx.r4.s32, 3136, xer);
	// bge cr6,0x837c6e4c
	if (!cr6.lt) goto loc_837C6E4C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x837c6e4c
	if (cr6.eq) goto loc_837C6E4C;
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r10,-10488
	ctx.r28.s64 = ctx.r10.s64 + -10488;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// rlwinm r27,r11,4,0,27
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// li r26,22
	ctx.r26.s64 = 22;
	// lwz r11,-724(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -724);
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// add r31,r27,r11
	ctx.r31.u64 = ctx.r27.u64 + ctx.r11.u64;
	// lwzx r10,r27,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// srawi. r7,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x837c6b08
	if (cr0.eq) goto loc_837C6B08;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_837C6A90:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwzx r9,r30,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x837c6ae4
	if (cr6.eq) goto loc_837C6AE4;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x837C6AB0;
	sub_82595150(ctx, base);
	// lwz r11,-724(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -724);
	// lwzx r11,r27,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c6ad8
	if (cr6.eq) goto loc_837C6AD8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837C6AD8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_837C6AD8:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x837C6AE0;
	sub_82595170(ctx, base);
	// lwz r11,-724(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -724);
loc_837C6AE4:
	// add r31,r27,r11
	ctx.r31.u64 = ctx.r27.u64 + ctx.r11.u64;
	// lwzx r10,r27,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// srawi r7,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r29,r7
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r7.u32, xer);
	// blt cr6,0x837c6a90
	if (cr6.lt) goto loc_837C6A90;
loc_837C6B08:
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r29,r4
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r4.u32, xer);
	// beq cr6,0x837c6b3c
	if (cr6.eq) goto loc_837C6B3C;
	// subf r11,r4,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x831ce420
	ctx.lr = 0x837C6B30;
	sub_831CE420(ctx, base);
	// add r10,r30,r29
	ctx.r10.u64 = ctx.r30.u64 + ctx.r29.u64;
	// lwz r11,-724(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -724);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_837C6B3C:
	// add r10,r27,r11
	ctx.r10.u64 = ctx.r27.u64 + ctx.r11.u64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// stb r25,64(r10)
	PPC_STORE_U8(ctx.r10.u32 + 64, ctx.r25.u8);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// srawi. r6,r7,2
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 2;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq 0x837c6bdc
	if (cr0.eq) goto loc_837C6BDC;
	// addi r30,r27,16
	ctx.r30.s64 = ctx.r27.s64 + 16;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_837C6B64:
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwzx r9,r10,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x837c6bb8
	if (cr6.eq) goto loc_837C6BB8;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82595150
	ctx.lr = 0x837C6B84;
	sub_82595150(ctx, base);
	// lwz r11,-724(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -724);
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c6bac
	if (cr6.eq) goto loc_837C6BAC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837C6BAC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_837C6BAC:
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82595170
	ctx.lr = 0x837C6BB4;
	sub_82595170(ctx, base);
	// lwz r11,-724(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -724);
loc_837C6BB8:
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwzx r9,r30,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// srawi r6,r7,2
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 2;
	// cmplw cr6,r29,r6
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r6.u32, xer);
	// blt cr6,0x837c6b64
	if (cr6.lt) goto loc_837C6B64;
loc_837C6BDC:
	// add r10,r27,r11
	ctx.r10.u64 = ctx.r27.u64 + ctx.r11.u64;
	// addi r29,r10,16
	ctx.r29.s64 = ctx.r10.s64 + 16;
	// lwz r31,16(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r4,20(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmplw cr6,r31,r4
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, xer);
	// beq cr6,0x837c6c18
	if (cr6.eq) goto loc_837C6C18;
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
	ctx.lr = 0x837C6C0C;
	sub_831CE420(ctx, base);
	// add r10,r30,r31
	ctx.r10.u64 = ctx.r30.u64 + ctx.r31.u64;
	// lwz r11,-724(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -724);
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
loc_837C6C18:
	// add r10,r27,r11
	ctx.r10.u64 = ctx.r27.u64 + ctx.r11.u64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// stb r25,65(r10)
	PPC_STORE_U8(ctx.r10.u32 + 65, ctx.r25.u8);
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r8,36(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// srawi. r6,r7,2
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 2;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq 0x837c6cb8
	if (cr0.eq) goto loc_837C6CB8;
	// addi r30,r27,32
	ctx.r30.s64 = ctx.r27.s64 + 32;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_837C6C40:
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwzx r9,r10,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x837c6c94
	if (cr6.eq) goto loc_837C6C94;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82595150
	ctx.lr = 0x837C6C60;
	sub_82595150(ctx, base);
	// lwz r11,-724(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -724);
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c6c88
	if (cr6.eq) goto loc_837C6C88;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837C6C88;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_837C6C88:
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82595170
	ctx.lr = 0x837C6C90;
	sub_82595170(ctx, base);
	// lwz r11,-724(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -724);
loc_837C6C94:
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwzx r9,r30,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// srawi r6,r7,2
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 2;
	// cmplw cr6,r29,r6
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r6.u32, xer);
	// blt cr6,0x837c6c40
	if (cr6.lt) goto loc_837C6C40;
loc_837C6CB8:
	// add r10,r27,r11
	ctx.r10.u64 = ctx.r27.u64 + ctx.r11.u64;
	// addi r29,r10,32
	ctx.r29.s64 = ctx.r10.s64 + 32;
	// lwz r31,32(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r4,36(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// cmplw cr6,r31,r4
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, xer);
	// beq cr6,0x837c6cf4
	if (cr6.eq) goto loc_837C6CF4;
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
	ctx.lr = 0x837C6CE8;
	sub_831CE420(ctx, base);
	// add r10,r30,r31
	ctx.r10.u64 = ctx.r30.u64 + ctx.r31.u64;
	// lwz r11,-724(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -724);
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
loc_837C6CF4:
	// add r10,r27,r11
	ctx.r10.u64 = ctx.r27.u64 + ctx.r11.u64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// stb r25,66(r10)
	PPC_STORE_U8(ctx.r10.u32 + 66, ctx.r25.u8);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,52(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// srawi. r6,r7,2
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 2;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq 0x837c6d94
	if (cr0.eq) goto loc_837C6D94;
	// addi r30,r27,48
	ctx.r30.s64 = ctx.r27.s64 + 48;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_837C6D1C:
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwzx r9,r10,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x837c6d70
	if (cr6.eq) goto loc_837C6D70;
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82595150
	ctx.lr = 0x837C6D3C;
	sub_82595150(ctx, base);
	// lwz r11,-724(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -724);
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c6d64
	if (cr6.eq) goto loc_837C6D64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837C6D64;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_837C6D64:
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82595170
	ctx.lr = 0x837C6D6C;
	sub_82595170(ctx, base);
	// lwz r11,-724(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -724);
loc_837C6D70:
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwzx r9,r30,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// srawi r6,r7,2
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 2;
	// cmplw cr6,r29,r6
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r6.u32, xer);
	// blt cr6,0x837c6d1c
	if (cr6.lt) goto loc_837C6D1C;
loc_837C6D94:
	// add r10,r27,r11
	ctx.r10.u64 = ctx.r27.u64 + ctx.r11.u64;
	// addi r29,r10,48
	ctx.r29.s64 = ctx.r10.s64 + 48;
	// lwz r31,48(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r4,52(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// cmplw cr6,r31,r4
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, xer);
	// beq cr6,0x837c6dd0
	if (cr6.eq) goto loc_837C6DD0;
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
	ctx.lr = 0x837C6DC4;
	sub_831CE420(ctx, base);
	// add r10,r30,r31
	ctx.r10.u64 = ctx.r30.u64 + ctx.r31.u64;
	// lwz r11,-724(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -724);
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
loc_837C6DD0:
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// lis r10,-31769
	ctx.r10.s64 = -2082013184;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// addi r30,r10,-8056
	ctx.r30.s64 = ctx.r10.s64 + -8056;
	// stb r25,67(r11)
	PPC_STORE_U8(ctx.r11.u32 + 67, ctx.r25.u8);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stb r25,75(r11)
	PPC_STORE_U8(ctx.r11.u32 + 75, ctx.r25.u8);
	// stb r25,76(r11)
	PPC_STORE_U8(ctx.r11.u32 + 76, ctx.r25.u8);
loc_837C6DF0:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r11,r24
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r24.s32, xer);
	// beq cr6,0x837c6e24
	if (cr6.eq) goto loc_837C6E24;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r30,720
	ctx.r11.s64 = ctx.r30.s64 + 720;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// blt cr6,0x837c6df0
	if (cr6.lt) goto loc_837C6DF0;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_837C6E24:
	// rlwinm r31,r9,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r31,r28
	ctx.r11.u64 = ctx.r31.u64 + ctx.r28.u64;
	// lwzx r3,r31,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// bl 0x83103e98
	ctx.lr = 0x837C6E34;
	sub_83103E98(ctx, base);
	// stwx r25,r31,r28
	PPC_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r25.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stwx r11,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u32);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
loc_837C6E4C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837C6E54"))) PPC_WEAK_FUNC(sub_837C6E54);
PPC_FUNC_IMPL(__imp__sub_837C6E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C6E58"))) PPC_WEAK_FUNC(sub_837C6E58);
PPC_FUNC_IMPL(__imp__sub_837C6E58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x837C6E60;
	__savegprlr_19(ctx, base);
	// stfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f31.u64);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	ctx.r25.s64 = 0;
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// stb r25,64(r4)
	PPC_STORE_U8(ctx.r4.u32 + 64, ctx.r25.u8);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// addi r26,r11,-19556
	ctx.r26.s64 = ctx.r11.s64 + -19556;
loc_837C6E84:
	// addi r4,r26,-492
	ctx.r4.s64 = ctx.r26.s64 + -492;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82535898
	ctx.lr = 0x837C6E90;
	sub_82535898(ctx, base);
	// addi r4,r26,-484
	ctx.r4.s64 = ctx.r26.s64 + -484;
	// bl 0x82535898
	ctx.lr = 0x837C6E98;
	sub_82535898(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82536838
	ctx.lr = 0x837C6EA4;
	sub_82536838(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535668
	ctx.lr = 0x837C6EB0;
	sub_82535668(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837c6ec8
	if (cr6.eq) goto loc_837C6EC8;
	// lbz r11,64(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 64);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,64(r24)
	PPC_STORE_U8(ctx.r24.u32 + 64, ctx.r11.u8);
loc_837C6EC8:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535aa0
	ctx.lr = 0x837C6ED0;
	sub_82535AA0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,64
	cr6.compare<uint32_t>(ctx.r31.u32, 64, xer);
	// blt cr6,0x837c6e84
	if (cr6.lt) goto loc_837C6E84;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lbz r4,64(r24)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r24.u32 + 64);
	// bl 0x82ad5e38
	ctx.lr = 0x837C6EE8;
	sub_82AD5E38(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lbz r4,64(r24)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r24.u32 + 64);
	// bl 0x83587720
	ctx.lr = 0x837C6EF4;
	sub_83587720(ctx, base);
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// li r20,22
	ctx.r20.s64 = 22;
	// addi r22,r11,-19448
	ctx.r22.s64 = ctx.r11.s64 + -19448;
	// li r21,15
	ctx.r21.s64 = 15;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// lbz r11,64(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837c6f98
	if (cr6.eq) goto loc_837C6F98;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_837C6F18:
	// stw r20,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r20.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,44
	ctx.r4.s64 = 44;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x837C6F2C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c6f78
	if (cr6.eq) goto loc_837C6F78;
	// stw r22,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r22.u32);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stw r21,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r21.u32);
	// stw r25,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r25.u32);
	// stb r25,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r25.u8);
	// sth r25,32(r3)
	PPC_STORE_U16(ctx.r3.u32 + 32, ctx.r25.u16);
	// sth r25,34(r3)
	PPC_STORE_U16(ctx.r3.u32 + 34, ctx.r25.u16);
	// sth r25,36(r3)
	PPC_STORE_U16(ctx.r3.u32 + 36, ctx.r25.u16);
	// sth r25,38(r3)
	PPC_STORE_U16(ctx.r3.u32 + 38, ctx.r25.u16);
	// sth r25,40(r3)
	PPC_STORE_U16(ctx.r3.u32 + 40, ctx.r25.u16);
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stw r25,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r25.u32);
	// blt cr6,0x837c6f70
	if (cr6.lt) goto loc_837C6F70;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_837C6F70:
	// stb r25,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r25.u8);
	// b 0x837c6f7c
	goto loc_837C6F7C;
loc_837C6F78:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_837C6F7C:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stwx r3,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r3.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lbz r10,64(r24)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r24.u32 + 64);
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// blt cr6,0x837c6f18
	if (cr6.lt) goto loc_837C6F18;
loc_837C6F98:
	// lbz r11,64(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 64);
	// lis r10,0
	ctx.r10.s64 = 0;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// ori r23,r10,65535
	ctx.r23.u64 = ctx.r10.u64 | 65535;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837c7184
	if (cr6.eq) goto loc_837C7184;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// addi r28,r11,-6184
	ctx.r28.s64 = ctx.r11.s64 + -6184;
loc_837C6FBC:
	// addi r4,r26,-476
	ctx.r4.s64 = ctx.r26.s64 + -476;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82535898
	ctx.lr = 0x837C6FC8;
	sub_82535898(ctx, base);
	// addi r4,r26,-468
	ctx.r4.s64 = ctx.r26.s64 + -468;
	// bl 0x82535898
	ctx.lr = 0x837C6FD0;
	sub_82535898(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82536838
	ctx.lr = 0x837C6FDC;
	sub_82536838(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535668
	ctx.lr = 0x837C6FE8;
	sub_82535668(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837c7180
	if (cr6.eq) goto loc_837C7180;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r30,0(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// bl 0x82536a70
	ctx.lr = 0x837C7004;
	sub_82536A70(ctx, base);
	// addi r4,r26,-460
	ctx.r4.s64 = ctx.r26.s64 + -460;
	// bl 0x82536d88
	ctx.lr = 0x837C700C;
	sub_82536D88(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x837C7010;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_837C7018:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837c7018
	if (!cr6.eq) goto loc_837C7018;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x837C7040;
	sub_8259CC28(ctx, base);
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// li r11,102
	ctx.r11.s64 = 102;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// lwzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// sth r23,32(r9)
	PPC_STORE_U16(ctx.r9.u32 + 32, ctx.r23.u16);
loc_837C705C:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwzx r7,r31,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r11,r7,4
	ctx.r11.s64 = ctx.r7.s64 + 4;
	// lwz r10,24(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x837c707c
	if (cr6.lt) goto loc_837C707C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x837c7080
	goto loc_837C7080;
loc_837C707C:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_837C7080:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
loc_837C7084:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r5,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r5.s64;
	// beq cr6,0x837c70a8
	if (cr6.eq) goto loc_837C70A8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x837c7084
	if (cr6.eq) goto loc_837C7084;
loc_837C70A8:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x837c70b4
	if (!cr6.eq) goto loc_837C70B4;
	// sth r6,32(r7)
	PPC_STORE_U16(ctx.r7.u32 + 32, ctx.r6.u16);
loc_837C70B4:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x837c705c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837C705C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r30,0(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82536a70
	ctx.lr = 0x837C70D0;
	sub_82536A70(ctx, base);
	// addi r4,r26,-452
	ctx.r4.s64 = ctx.r26.s64 + -452;
	// bl 0x82536d88
	ctx.lr = 0x837C70D8;
	sub_82536D88(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x837C70DC;
	sub_82534770(ctx, base);
	// lwzx r11,r31,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// sth r10,34(r11)
	PPC_STORE_U16(ctx.r11.u32 + 34, ctx.r10.u16);
	// lwz r30,0(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// bl 0x82536a70
	ctx.lr = 0x837C70F8;
	sub_82536A70(ctx, base);
	// addi r4,r26,-440
	ctx.r4.s64 = ctx.r26.s64 + -440;
	// bl 0x82536d88
	ctx.lr = 0x837C7100;
	sub_82536D88(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x837C7104;
	sub_82534770(ctx, base);
	// lwzx r9,r31,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// sth r8,36(r9)
	PPC_STORE_U16(ctx.r9.u32 + 36, ctx.r8.u16);
	// lwz r30,0(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// bl 0x82536a70
	ctx.lr = 0x837C7120;
	sub_82536A70(ctx, base);
	// addi r4,r26,-428
	ctx.r4.s64 = ctx.r26.s64 + -428;
	// bl 0x82536d88
	ctx.lr = 0x837C7128;
	sub_82536D88(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x837C712C;
	sub_82534770(ctx, base);
	// lwzx r7,r31,r30
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// sth r6,38(r7)
	PPC_STORE_U16(ctx.r7.u32 + 38, ctx.r6.u16);
	// lwz r30,0(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// bl 0x82536a70
	ctx.lr = 0x837C7148;
	sub_82536A70(ctx, base);
	// addi r4,r26,-408
	ctx.r4.s64 = ctx.r26.s64 + -408;
	// bl 0x82536d88
	ctx.lr = 0x837C7150;
	sub_82536D88(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x837C7154;
	sub_82534770(ctx, base);
	// lwzx r5,r31,r30
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// sth r4,40(r5)
	PPC_STORE_U16(ctx.r5.u32 + 40, ctx.r4.u16);
	// bl 0x82535aa0
	ctx.lr = 0x837C7168;
	sub_82535AA0(ctx, base);
	// lbz r3,64(r24)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r24.u32 + 64);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r29,r3
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, xer);
	// blt cr6,0x837c6fbc
	if (cr6.lt) goto loc_837C6FBC;
	// b 0x837c7184
	goto loc_837C7184;
loc_837C7180:
	// bl 0x82535aa0
	ctx.lr = 0x837C7184;
	sub_82535AA0(ctx, base);
loc_837C7184:
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// stb r25,65(r24)
	PPC_STORE_U8(ctx.r24.u32 + 65, ctx.r25.u8);
loc_837C718C:
	// addi r4,r26,-392
	ctx.r4.s64 = ctx.r26.s64 + -392;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82535898
	ctx.lr = 0x837C7198;
	sub_82535898(ctx, base);
	// addi r4,r26,-384
	ctx.r4.s64 = ctx.r26.s64 + -384;
	// bl 0x82535898
	ctx.lr = 0x837C71A0;
	sub_82535898(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82536838
	ctx.lr = 0x837C71AC;
	sub_82536838(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535668
	ctx.lr = 0x837C71B8;
	sub_82535668(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837c71d0
	if (cr6.eq) goto loc_837C71D0;
	// lbz r11,65(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 65);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,65(r24)
	PPC_STORE_U8(ctx.r24.u32 + 65, ctx.r11.u8);
loc_837C71D0:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535aa0
	ctx.lr = 0x837C71D8;
	sub_82535AA0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,64
	cr6.compare<uint32_t>(ctx.r31.u32, 64, xer);
	// blt cr6,0x837c718c
	if (cr6.lt) goto loc_837C718C;
	// addi r29,r24,16
	ctx.r29.s64 = ctx.r24.s64 + 16;
	// lbz r4,65(r24)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r24.u32 + 65);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ad5e38
	ctx.lr = 0x837C71F4;
	sub_82AD5E38(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lbz r4,65(r24)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r24.u32 + 65);
	// bl 0x83587720
	ctx.lr = 0x837C7200;
	sub_83587720(ctx, base);
	// lbz r11,65(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 65);
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837c72b8
	if (cr6.eq) goto loc_837C72B8;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// addi r28,r11,-19444
	ctx.r28.s64 = ctx.r11.s64 + -19444;
	// lfs f31,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
loc_837C7224:
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,52
	ctx.r4.s64 = 52;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x837C7238;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c7298
	if (cr6.eq) goto loc_837C7298;
	// stw r22,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r22.u32);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stw r21,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r21.u32);
	// stw r25,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r25.u32);
	// stb r25,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r25.u8);
	// sth r25,36(r3)
	PPC_STORE_U16(ctx.r3.u32 + 36, ctx.r25.u16);
	// sth r25,40(r3)
	PPC_STORE_U16(ctx.r3.u32 + 40, ctx.r25.u16);
	// sth r25,38(r3)
	PPC_STORE_U16(ctx.r3.u32 + 38, ctx.r25.u16);
	// sth r25,32(r3)
	PPC_STORE_U16(ctx.r3.u32 + 32, ctx.r25.u16);
	// sth r25,34(r3)
	PPC_STORE_U16(ctx.r3.u32 + 34, ctx.r25.u16);
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stw r25,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r25.u32);
	// blt cr6,0x837c727c
	if (cr6.lt) goto loc_837C727C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_837C727C:
	// stb r25,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r25.u8);
	// stfs f31,44(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// sth r25,48(r3)
	PPC_STORE_U16(ctx.r3.u32 + 48, ctx.r25.u16);
	// sth r25,50(r3)
	PPC_STORE_U16(ctx.r3.u32 + 50, ctx.r25.u16);
	// b 0x837c729c
	goto loc_837C729C;
loc_837C7298:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_837C729C:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stwx r11,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r11.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lbz r9,65(r24)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r24.u32 + 65);
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, xer);
	// blt cr6,0x837c7224
	if (cr6.lt) goto loc_837C7224;
loc_837C72B8:
	// lbz r11,65(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 65);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837c7518
	if (cr6.eq) goto loc_837C7518;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// addi r27,r11,-6440
	ctx.r27.s64 = ctx.r11.s64 + -6440;
loc_837C72D4:
	// addi r4,r26,-380
	ctx.r4.s64 = ctx.r26.s64 + -380;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82535898
	ctx.lr = 0x837C72E0;
	sub_82535898(ctx, base);
	// addi r4,r26,-372
	ctx.r4.s64 = ctx.r26.s64 + -372;
	// bl 0x82535898
	ctx.lr = 0x837C72E8;
	sub_82535898(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82536838
	ctx.lr = 0x837C72F4;
	sub_82536838(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535668
	ctx.lr = 0x837C7300;
	sub_82535668(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837c7514
	if (cr6.eq) goto loc_837C7514;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r28,0(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82536a70
	ctx.lr = 0x837C731C;
	sub_82536A70(ctx, base);
	// addi r4,r26,-368
	ctx.r4.s64 = ctx.r26.s64 + -368;
	// bl 0x82536d88
	ctx.lr = 0x837C7324;
	sub_82536D88(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x837C7328;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_837C7330:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837c7330
	if (!cr6.eq) goto loc_837C7330;
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// lwzx r11,r28,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// rotlwi r5,r10,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x837C7358;
	sub_8259CC28(ctx, base);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r11,37
	ctx.r11.s64 = 37;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// lwzx r7,r9,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// sth r23,32(r7)
	PPC_STORE_U16(ctx.r7.u32 + 32, ctx.r23.u16);
loc_837C7374:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwzx r7,r11,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r11,r7,4
	ctx.r11.s64 = ctx.r7.s64 + 4;
	// lwz r10,24(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x837c7394
	if (cr6.lt) goto loc_837C7394;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x837c7398
	goto loc_837C7398;
loc_837C7394:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_837C7398:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
loc_837C739C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r5,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r5.s64;
	// beq cr6,0x837c73c0
	if (cr6.eq) goto loc_837C73C0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x837c739c
	if (cr6.eq) goto loc_837C739C;
loc_837C73C0:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x837c73d0
	if (!cr6.eq) goto loc_837C73D0;
	// addi r11,r6,102
	ctx.r11.s64 = ctx.r6.s64 + 102;
	// sth r11,32(r7)
	PPC_STORE_U16(ctx.r7.u32 + 32, ctx.r11.u16);
loc_837C73D0:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x837c7374
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837C7374;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r28,0(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82536a70
	ctx.lr = 0x837C73EC;
	sub_82536A70(ctx, base);
	// addi r4,r26,-360
	ctx.r4.s64 = ctx.r26.s64 + -360;
	// bl 0x82536d88
	ctx.lr = 0x837C73F4;
	sub_82536D88(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x837C73F8;
	sub_82534770(ctx, base);
	// lwzx r11,r28,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// sth r10,34(r11)
	PPC_STORE_U16(ctx.r11.u32 + 34, ctx.r10.u16);
	// lwz r28,0(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82536a70
	ctx.lr = 0x837C7414;
	sub_82536A70(ctx, base);
	// addi r4,r26,-348
	ctx.r4.s64 = ctx.r26.s64 + -348;
	// bl 0x82536d88
	ctx.lr = 0x837C741C;
	sub_82536D88(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x837C7420;
	sub_82534770(ctx, base);
	// lwzx r9,r28,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// sth r8,36(r9)
	PPC_STORE_U16(ctx.r9.u32 + 36, ctx.r8.u16);
	// lwz r28,0(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82536a70
	ctx.lr = 0x837C743C;
	sub_82536A70(ctx, base);
	// addi r4,r26,-336
	ctx.r4.s64 = ctx.r26.s64 + -336;
	// bl 0x82536d88
	ctx.lr = 0x837C7444;
	sub_82536D88(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x837C7448;
	sub_82534770(ctx, base);
	// lwzx r7,r28,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// sth r6,38(r7)
	PPC_STORE_U16(ctx.r7.u32 + 38, ctx.r6.u16);
	// lwz r28,0(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82536a70
	ctx.lr = 0x837C7464;
	sub_82536A70(ctx, base);
	// addi r4,r26,-316
	ctx.r4.s64 = ctx.r26.s64 + -316;
	// bl 0x82536d88
	ctx.lr = 0x837C746C;
	sub_82536D88(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x837C7470;
	sub_82534770(ctx, base);
	// lwzx r5,r28,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// sth r11,40(r5)
	PPC_STORE_U16(ctx.r5.u32 + 40, ctx.r11.u16);
	// lwz r28,0(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82536a70
	ctx.lr = 0x837C748C;
	sub_82536A70(ctx, base);
	// addi r4,r26,-300
	ctx.r4.s64 = ctx.r26.s64 + -300;
	// bl 0x82536d88
	ctx.lr = 0x837C7494;
	sub_82536D88(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x837C7498;
	sub_82534928(ctx, base);
	// lwzx r10,r28,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f0,44(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 44, temp.u32);
	// lwz r28,0(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82536a70
	ctx.lr = 0x837C74B4;
	sub_82536A70(ctx, base);
	// addi r4,r26,-288
	ctx.r4.s64 = ctx.r26.s64 + -288;
	// bl 0x82536d88
	ctx.lr = 0x837C74BC;
	sub_82536D88(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x837C74C0;
	sub_82534770(ctx, base);
	// lwzx r9,r28,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// sth r8,48(r9)
	PPC_STORE_U16(ctx.r9.u32 + 48, ctx.r8.u16);
	// lwz r28,0(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82536a70
	ctx.lr = 0x837C74DC;
	sub_82536A70(ctx, base);
	// addi r4,r26,-280
	ctx.r4.s64 = ctx.r26.s64 + -280;
	// bl 0x82536d88
	ctx.lr = 0x837C74E4;
	sub_82536D88(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x837C74E8;
	sub_82534770(ctx, base);
	// lwzx r7,r28,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// sth r6,50(r7)
	PPC_STORE_U16(ctx.r7.u32 + 50, ctx.r6.u16);
	// bl 0x82535aa0
	ctx.lr = 0x837C74FC;
	sub_82535AA0(ctx, base);
	// lbz r5,65(r24)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r24.u32 + 65);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r5
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r5.u32, xer);
	// blt cr6,0x837c72d4
	if (cr6.lt) goto loc_837C72D4;
	// b 0x837c7518
	goto loc_837C7518;
loc_837C7514:
	// bl 0x82535aa0
	ctx.lr = 0x837C7518;
	sub_82535AA0(ctx, base);
loc_837C7518:
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// stb r25,66(r24)
	PPC_STORE_U8(ctx.r24.u32 + 66, ctx.r25.u8);
loc_837C7520:
	// addi r4,r26,-272
	ctx.r4.s64 = ctx.r26.s64 + -272;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82535898
	ctx.lr = 0x837C752C;
	sub_82535898(ctx, base);
	// addi r4,r26,-264
	ctx.r4.s64 = ctx.r26.s64 + -264;
	// bl 0x82535898
	ctx.lr = 0x837C7534;
	sub_82535898(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82536838
	ctx.lr = 0x837C7540;
	sub_82536838(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535668
	ctx.lr = 0x837C754C;
	sub_82535668(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837c7564
	if (cr6.eq) goto loc_837C7564;
	// lbz r11,66(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 66);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,66(r24)
	PPC_STORE_U8(ctx.r24.u32 + 66, ctx.r11.u8);
loc_837C7564:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535aa0
	ctx.lr = 0x837C756C;
	sub_82535AA0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,64
	cr6.compare<uint32_t>(ctx.r31.u32, 64, xer);
	// blt cr6,0x837c7520
	if (cr6.lt) goto loc_837C7520;
	// addi r28,r24,32
	ctx.r28.s64 = ctx.r24.s64 + 32;
	// lbz r4,66(r24)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r24.u32 + 66);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ad5e38
	ctx.lr = 0x837C7588;
	sub_82AD5E38(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lbz r4,66(r24)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r24.u32 + 66);
	// bl 0x83587720
	ctx.lr = 0x837C7594;
	sub_83587720(ctx, base);
	// lbz r11,66(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 66);
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837c7628
	if (cr6.eq) goto loc_837C7628;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_837C75A8:
	// stw r20,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r20.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,44
	ctx.r4.s64 = 44;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595718
	ctx.lr = 0x837C75BC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c7608
	if (cr6.eq) goto loc_837C7608;
	// stw r22,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r22.u32);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stw r21,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r21.u32);
	// stw r25,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r25.u32);
	// stb r25,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r25.u8);
	// sth r25,32(r3)
	PPC_STORE_U16(ctx.r3.u32 + 32, ctx.r25.u16);
	// sth r25,34(r3)
	PPC_STORE_U16(ctx.r3.u32 + 34, ctx.r25.u16);
	// sth r25,36(r3)
	PPC_STORE_U16(ctx.r3.u32 + 36, ctx.r25.u16);
	// sth r25,40(r3)
	PPC_STORE_U16(ctx.r3.u32 + 40, ctx.r25.u16);
	// sth r25,38(r3)
	PPC_STORE_U16(ctx.r3.u32 + 38, ctx.r25.u16);
	// stw r25,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r25.u32);
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x837c7600
	if (cr6.lt) goto loc_837C7600;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_837C7600:
	// stb r25,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r25.u8);
	// b 0x837c760c
	goto loc_837C760C;
loc_837C7608:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_837C760C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stwx r3,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r3.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lbz r10,66(r24)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r24.u32 + 66);
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// blt cr6,0x837c75a8
	if (cr6.lt) goto loc_837C75A8;
loc_837C7628:
	// lbz r10,66(r24)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r24.u32 + 66);
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r27,r11,-6928
	ctx.r27.s64 = ctx.r11.s64 + -6928;
	// beq cr6,0x837c780c
	if (cr6.eq) goto loc_837C780C;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_837C7644:
	// addi r4,r26,-256
	ctx.r4.s64 = ctx.r26.s64 + -256;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82535898
	ctx.lr = 0x837C7650;
	sub_82535898(ctx, base);
	// addi r4,r26,-248
	ctx.r4.s64 = ctx.r26.s64 + -248;
	// bl 0x82535898
	ctx.lr = 0x837C7658;
	sub_82535898(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82536838
	ctx.lr = 0x837C7664;
	sub_82536838(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535668
	ctx.lr = 0x837C7670;
	sub_82535668(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837c7808
	if (cr6.eq) goto loc_837C7808;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82536a70
	ctx.lr = 0x837C768C;
	sub_82536A70(ctx, base);
	// addi r4,r26,-240
	ctx.r4.s64 = ctx.r26.s64 + -240;
	// bl 0x82536d88
	ctx.lr = 0x837C7694;
	sub_82536D88(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x837C7698;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_837C76A0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837c76a0
	if (!cr6.eq) goto loc_837C76A0;
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// lwzx r11,r31,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// rotlwi r5,r10,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x837C76C8;
	sub_8259CC28(ctx, base);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r11,96
	ctx.r11.s64 = 96;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// lwzx r7,r31,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// sth r23,32(r7)
	PPC_STORE_U16(ctx.r7.u32 + 32, ctx.r23.u16);
loc_837C76E4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwzx r7,r31,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r11,r7,4
	ctx.r11.s64 = ctx.r7.s64 + 4;
	// lwz r10,24(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x837c7704
	if (cr6.lt) goto loc_837C7704;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x837c7708
	goto loc_837C7708;
loc_837C7704:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_837C7708:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
loc_837C770C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r5,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r5.s64;
	// beq cr6,0x837c7730
	if (cr6.eq) goto loc_837C7730;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x837c770c
	if (cr6.eq) goto loc_837C770C;
loc_837C7730:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x837c773c
	if (!cr6.eq) goto loc_837C773C;
	// sth r6,32(r7)
	PPC_STORE_U16(ctx.r7.u32 + 32, ctx.r6.u16);
loc_837C773C:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x837c76e4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837C76E4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82536a70
	ctx.lr = 0x837C7758;
	sub_82536A70(ctx, base);
	// addi r4,r26,-232
	ctx.r4.s64 = ctx.r26.s64 + -232;
	// bl 0x82536d88
	ctx.lr = 0x837C7760;
	sub_82536D88(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x837C7764;
	sub_82534770(ctx, base);
	// lwzx r11,r31,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// sth r10,34(r11)
	PPC_STORE_U16(ctx.r11.u32 + 34, ctx.r10.u16);
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82536a70
	ctx.lr = 0x837C7780;
	sub_82536A70(ctx, base);
	// addi r4,r26,-220
	ctx.r4.s64 = ctx.r26.s64 + -220;
	// bl 0x82536d88
	ctx.lr = 0x837C7788;
	sub_82536D88(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x837C778C;
	sub_82534770(ctx, base);
	// lwzx r9,r31,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// sth r8,36(r9)
	PPC_STORE_U16(ctx.r9.u32 + 36, ctx.r8.u16);
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82536a70
	ctx.lr = 0x837C77A8;
	sub_82536A70(ctx, base);
	// addi r4,r26,-208
	ctx.r4.s64 = ctx.r26.s64 + -208;
	// bl 0x82536d88
	ctx.lr = 0x837C77B0;
	sub_82536D88(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x837C77B4;
	sub_82534770(ctx, base);
	// lwzx r7,r31,r30
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// sth r6,38(r7)
	PPC_STORE_U16(ctx.r7.u32 + 38, ctx.r6.u16);
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82536a70
	ctx.lr = 0x837C77D0;
	sub_82536A70(ctx, base);
	// addi r4,r26,-188
	ctx.r4.s64 = ctx.r26.s64 + -188;
	// bl 0x82536d88
	ctx.lr = 0x837C77D8;
	sub_82536D88(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x837C77DC;
	sub_82534770(ctx, base);
	// lwzx r5,r31,r30
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// sth r4,40(r5)
	PPC_STORE_U16(ctx.r5.u32 + 40, ctx.r4.u16);
	// bl 0x82535aa0
	ctx.lr = 0x837C77F0;
	sub_82535AA0(ctx, base);
	// lbz r3,66(r24)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r24.u32 + 66);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r29,r3
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, xer);
	// blt cr6,0x837c7644
	if (cr6.lt) goto loc_837C7644;
	// b 0x837c780c
	goto loc_837C780C;
loc_837C7808:
	// bl 0x82535aa0
	ctx.lr = 0x837C780C;
	sub_82535AA0(ctx, base);
loc_837C780C:
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// stb r25,67(r24)
	PPC_STORE_U8(ctx.r24.u32 + 67, ctx.r25.u8);
loc_837C7814:
	// addi r4,r26,-172
	ctx.r4.s64 = ctx.r26.s64 + -172;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82535898
	ctx.lr = 0x837C7820;
	sub_82535898(ctx, base);
	// addi r4,r26,-164
	ctx.r4.s64 = ctx.r26.s64 + -164;
	// bl 0x82535898
	ctx.lr = 0x837C7828;
	sub_82535898(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82536838
	ctx.lr = 0x837C7834;
	sub_82536838(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535668
	ctx.lr = 0x837C7840;
	sub_82535668(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837c7858
	if (cr6.eq) goto loc_837C7858;
	// lbz r11,67(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 67);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,67(r24)
	PPC_STORE_U8(ctx.r24.u32 + 67, ctx.r11.u8);
loc_837C7858:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535aa0
	ctx.lr = 0x837C7860;
	sub_82535AA0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,64
	cr6.compare<uint32_t>(ctx.r31.u32, 64, xer);
	// blt cr6,0x837c7814
	if (cr6.lt) goto loc_837C7814;
	// addi r29,r24,48
	ctx.r29.s64 = ctx.r24.s64 + 48;
	// lbz r4,67(r24)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r24.u32 + 67);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ad5e38
	ctx.lr = 0x837C787C;
	sub_82AD5E38(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lbz r4,67(r24)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r24.u32 + 67);
	// bl 0x83587720
	ctx.lr = 0x837C7888;
	sub_83587720(ctx, base);
	// lbz r11,67(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 67);
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837c791c
	if (cr6.eq) goto loc_837C791C;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_837C789C:
	// stw r20,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r20.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,44
	ctx.r4.s64 = 44;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82595718
	ctx.lr = 0x837C78B0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c78fc
	if (cr6.eq) goto loc_837C78FC;
	// stw r22,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r22.u32);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stw r21,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r21.u32);
	// stw r25,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r25.u32);
	// stb r25,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r25.u8);
	// sth r25,32(r3)
	PPC_STORE_U16(ctx.r3.u32 + 32, ctx.r25.u16);
	// sth r25,34(r3)
	PPC_STORE_U16(ctx.r3.u32 + 34, ctx.r25.u16);
	// sth r25,36(r3)
	PPC_STORE_U16(ctx.r3.u32 + 36, ctx.r25.u16);
	// sth r25,38(r3)
	PPC_STORE_U16(ctx.r3.u32 + 38, ctx.r25.u16);
	// sth r25,40(r3)
	PPC_STORE_U16(ctx.r3.u32 + 40, ctx.r25.u16);
	// stw r25,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r25.u32);
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x837c78f4
	if (cr6.lt) goto loc_837C78F4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_837C78F4:
	// stb r25,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r25.u8);
	// b 0x837c7900
	goto loc_837C7900;
loc_837C78FC:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_837C7900:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stwx r3,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r3.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lbz r10,67(r24)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r24.u32 + 67);
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// blt cr6,0x837c789c
	if (cr6.lt) goto loc_837C789C;
loc_837C791C:
	// lbz r11,67(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 67);
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837c7af8
	if (cr6.eq) goto loc_837C7AF8;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_837C7930:
	// addi r4,r26,-156
	ctx.r4.s64 = ctx.r26.s64 + -156;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82535898
	ctx.lr = 0x837C793C;
	sub_82535898(ctx, base);
	// addi r4,r26,-148
	ctx.r4.s64 = ctx.r26.s64 + -148;
	// bl 0x82535898
	ctx.lr = 0x837C7944;
	sub_82535898(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82536838
	ctx.lr = 0x837C7950;
	sub_82536838(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535668
	ctx.lr = 0x837C795C;
	sub_82535668(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837c7af4
	if (cr6.eq) goto loc_837C7AF4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82536a70
	ctx.lr = 0x837C7978;
	sub_82536A70(ctx, base);
	// addi r4,r26,-140
	ctx.r4.s64 = ctx.r26.s64 + -140;
	// bl 0x82536d88
	ctx.lr = 0x837C7980;
	sub_82536D88(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x837C7984;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_837C798C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837c798c
	if (!cr6.eq) goto loc_837C798C;
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// lwzx r11,r31,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// rotlwi r5,r10,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x837C79B4;
	sub_8259CC28(ctx, base);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r11,96
	ctx.r11.s64 = 96;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// lwzx r7,r31,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// sth r23,32(r7)
	PPC_STORE_U16(ctx.r7.u32 + 32, ctx.r23.u16);
loc_837C79D0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwzx r7,r31,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r11,r7,4
	ctx.r11.s64 = ctx.r7.s64 + 4;
	// lwz r10,24(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x837c79f0
	if (cr6.lt) goto loc_837C79F0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x837c79f4
	goto loc_837C79F4;
loc_837C79F0:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_837C79F4:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
loc_837C79F8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r5,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r5.s64;
	// beq cr6,0x837c7a1c
	if (cr6.eq) goto loc_837C7A1C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x837c79f8
	if (cr6.eq) goto loc_837C79F8;
loc_837C7A1C:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x837c7a28
	if (!cr6.eq) goto loc_837C7A28;
	// sth r6,32(r7)
	PPC_STORE_U16(ctx.r7.u32 + 32, ctx.r6.u16);
loc_837C7A28:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x837c79d0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837C79D0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82536a70
	ctx.lr = 0x837C7A44;
	sub_82536A70(ctx, base);
	// addi r4,r26,-132
	ctx.r4.s64 = ctx.r26.s64 + -132;
	// bl 0x82536d88
	ctx.lr = 0x837C7A4C;
	sub_82536D88(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x837C7A50;
	sub_82534770(ctx, base);
	// lwzx r11,r31,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// sth r10,34(r11)
	PPC_STORE_U16(ctx.r11.u32 + 34, ctx.r10.u16);
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82536a70
	ctx.lr = 0x837C7A6C;
	sub_82536A70(ctx, base);
	// addi r4,r26,-120
	ctx.r4.s64 = ctx.r26.s64 + -120;
	// bl 0x82536d88
	ctx.lr = 0x837C7A74;
	sub_82536D88(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x837C7A78;
	sub_82534770(ctx, base);
	// lwzx r9,r31,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// sth r8,36(r9)
	PPC_STORE_U16(ctx.r9.u32 + 36, ctx.r8.u16);
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82536a70
	ctx.lr = 0x837C7A94;
	sub_82536A70(ctx, base);
	// addi r4,r26,-108
	ctx.r4.s64 = ctx.r26.s64 + -108;
	// bl 0x82536d88
	ctx.lr = 0x837C7A9C;
	sub_82536D88(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x837C7AA0;
	sub_82534770(ctx, base);
	// lwzx r7,r31,r30
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// sth r6,38(r7)
	PPC_STORE_U16(ctx.r7.u32 + 38, ctx.r6.u16);
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82536a70
	ctx.lr = 0x837C7ABC;
	sub_82536A70(ctx, base);
	// addi r4,r26,-88
	ctx.r4.s64 = ctx.r26.s64 + -88;
	// bl 0x82536d88
	ctx.lr = 0x837C7AC4;
	sub_82536D88(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x837C7AC8;
	sub_82534770(ctx, base);
	// lwzx r5,r31,r30
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// sth r4,40(r5)
	PPC_STORE_U16(ctx.r5.u32 + 40, ctx.r4.u16);
	// bl 0x82535aa0
	ctx.lr = 0x837C7ADC;
	sub_82535AA0(ctx, base);
	// lbz r3,67(r24)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r24.u32 + 67);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r28,r3
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r3.u32, xer);
	// blt cr6,0x837c7930
	if (cr6.lt) goto loc_837C7930;
	// b 0x837c7af8
	goto loc_837C7AF8;
loc_837C7AF4:
	// bl 0x82535aa0
	ctx.lr = 0x837C7AF8;
	sub_82535AA0(ctx, base);
loc_837C7AF8:
	// addi r4,r26,-72
	ctx.r4.s64 = ctx.r26.s64 + -72;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82535898
	ctx.lr = 0x837C7B04;
	sub_82535898(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82536838
	ctx.lr = 0x837C7B10;
	sub_82536838(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825355c0
	ctx.lr = 0x837C7B18;
	sub_825355C0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c7b34
	if (cr6.eq) goto loc_837C7B34;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82536a70
	ctx.lr = 0x837C7B2C;
	sub_82536A70(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x837C7B30;
	sub_82534770(ctx, base);
	// stb r3,68(r24)
	PPC_STORE_U8(ctx.r24.u32 + 68, ctx.r3.u8);
loc_837C7B34:
	// addi r4,r26,-60
	ctx.r4.s64 = ctx.r26.s64 + -60;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82535898
	ctx.lr = 0x837C7B40;
	sub_82535898(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82536838
	ctx.lr = 0x837C7B4C;
	sub_82536838(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82534b10
	ctx.lr = 0x837C7B54;
	sub_82534B10(ctx, base);
	// stb r3,69(r24)
	PPC_STORE_U8(ctx.r24.u32 + 69, ctx.r3.u8);
	// addi r4,r26,-48
	ctx.r4.s64 = ctx.r26.s64 + -48;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82535898
	ctx.lr = 0x837C7B64;
	sub_82535898(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82536838
	ctx.lr = 0x837C7B70;
	sub_82536838(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82534b10
	ctx.lr = 0x837C7B78;
	sub_82534B10(ctx, base);
	// stb r3,70(r24)
	PPC_STORE_U8(ctx.r24.u32 + 70, ctx.r3.u8);
	// addi r4,r26,-32
	ctx.r4.s64 = ctx.r26.s64 + -32;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82535898
	ctx.lr = 0x837C7B88;
	sub_82535898(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82536838
	ctx.lr = 0x837C7B94;
	sub_82536838(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82534b10
	ctx.lr = 0x837C7B9C;
	sub_82534B10(ctx, base);
	// stb r3,71(r24)
	PPC_STORE_U8(ctx.r24.u32 + 71, ctx.r3.u8);
	// addi r4,r26,-16
	ctx.r4.s64 = ctx.r26.s64 + -16;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82535898
	ctx.lr = 0x837C7BAC;
	sub_82535898(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82536838
	ctx.lr = 0x837C7BB8;
	sub_82536838(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82534b10
	ctx.lr = 0x837C7BC0;
	sub_82534B10(ctx, base);
	// stb r3,72(r24)
	PPC_STORE_U8(ctx.r24.u32 + 72, ctx.r3.u8);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82535898
	ctx.lr = 0x837C7BD0;
	sub_82535898(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82536838
	ctx.lr = 0x837C7BDC;
	sub_82536838(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82534b10
	ctx.lr = 0x837C7BE4;
	sub_82534B10(ctx, base);
	// stb r3,73(r24)
	PPC_STORE_U8(ctx.r24.u32 + 73, ctx.r3.u8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82535aa0
	ctx.lr = 0x837C7BF0;
	sub_82535AA0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82535aa0
	ctx.lr = 0x837C7BF8;
	sub_82535AA0(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82535aa0
	ctx.lr = 0x837C7C00;
	sub_82535AA0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82535aa0
	ctx.lr = 0x837C7C08;
	sub_82535AA0(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82535aa0
	ctx.lr = 0x837C7C10;
	sub_82535AA0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535aa0
	ctx.lr = 0x837C7C18;
	sub_82535AA0(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// lfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837C7C24"))) PPC_WEAK_FUNC(sub_837C7C24);
PPC_FUNC_IMPL(__imp__sub_837C7C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C7C28"))) PPC_WEAK_FUNC(sub_837C7C28);
PPC_FUNC_IMPL(__imp__sub_837C7C28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x837C7C30;
	__savegprlr_20(ctx, base);
	// stfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x83b509f8
	ctx.lr = 0x837C7C44;
	sub_83B509F8(ctx, base);
	// stb r3,64(r29)
	PPC_STORE_U8(ctx.r29.u32 + 64, ctx.r3.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b509f8
	ctx.lr = 0x837C7C50;
	sub_83B509F8(ctx, base);
	// stb r3,65(r29)
	PPC_STORE_U8(ctx.r29.u32 + 65, ctx.r3.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b509f8
	ctx.lr = 0x837C7C5C;
	sub_83B509F8(ctx, base);
	// stb r3,66(r29)
	PPC_STORE_U8(ctx.r29.u32 + 66, ctx.r3.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b509f8
	ctx.lr = 0x837C7C68;
	sub_83B509F8(ctx, base);
	// stb r3,67(r29)
	PPC_STORE_U8(ctx.r29.u32 + 67, ctx.r3.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b509f8
	ctx.lr = 0x837C7C74;
	sub_83B509F8(ctx, base);
	// stb r3,68(r29)
	PPC_STORE_U8(ctx.r29.u32 + 68, ctx.r3.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b509f8
	ctx.lr = 0x837C7C80;
	sub_83B509F8(ctx, base);
	// stb r3,69(r29)
	PPC_STORE_U8(ctx.r29.u32 + 69, ctx.r3.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b509f8
	ctx.lr = 0x837C7C8C;
	sub_83B509F8(ctx, base);
	// stb r3,73(r29)
	PPC_STORE_U8(ctx.r29.u32 + 73, ctx.r3.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lbz r4,64(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 64);
	// bl 0x82ad5e38
	ctx.lr = 0x837C7C9C;
	sub_82AD5E38(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lbz r4,64(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 64);
	// bl 0x83587720
	ctx.lr = 0x837C7CA8;
	sub_83587720(ctx, base);
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r22,r11,-19448
	ctx.r22.s64 = ctx.r11.s64 + -19448;
	// li r20,22
	ctx.r20.s64 = 22;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// li r21,15
	ctx.r21.s64 = 15;
	// lbz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837c7d50
	if (cr6.eq) goto loc_837C7D50;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
loc_837C7CD0:
	// stw r20,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r20.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,44
	ctx.r4.s64 = 44;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x837C7CE4;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c7d30
	if (cr6.eq) goto loc_837C7D30;
	// stw r22,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r22.u32);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stw r21,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r21.u32);
	// stw r28,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r28.u32);
	// stb r28,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r28.u8);
	// sth r28,32(r3)
	PPC_STORE_U16(ctx.r3.u32 + 32, ctx.r28.u16);
	// sth r28,34(r3)
	PPC_STORE_U16(ctx.r3.u32 + 34, ctx.r28.u16);
	// sth r28,36(r3)
	PPC_STORE_U16(ctx.r3.u32 + 36, ctx.r28.u16);
	// sth r28,38(r3)
	PPC_STORE_U16(ctx.r3.u32 + 38, ctx.r28.u16);
	// sth r28,40(r3)
	PPC_STORE_U16(ctx.r3.u32 + 40, ctx.r28.u16);
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stw r28,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r28.u32);
	// blt cr6,0x837c7d28
	if (cr6.lt) goto loc_837C7D28;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_837C7D28:
	// stb r28,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r28.u8);
	// b 0x837c7d34
	goto loc_837C7D34;
loc_837C7D30:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_837C7D34:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stwx r3,r11,r27
	PPC_STORE_U32(ctx.r11.u32 + ctx.r27.u32, ctx.r3.u32);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// lbz r10,64(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 64);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// blt cr6,0x837c7cd0
	if (cr6.lt) goto loc_837C7CD0;
loc_837C7D50:
	// addi r26,r29,16
	ctx.r26.s64 = ctx.r29.s64 + 16;
	// lbz r4,65(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 65);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82ad5e38
	ctx.lr = 0x837C7D60;
	sub_82AD5E38(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lbz r4,65(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 65);
	// bl 0x83587720
	ctx.lr = 0x837C7D6C;
	sub_83587720(ctx, base);
	// lbz r11,65(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 65);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837c7e24
	if (cr6.eq) goto loc_837C7E24;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// addi r25,r11,-19444
	ctx.r25.s64 = ctx.r11.s64 + -19444;
	// lfs f31,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
loc_837C7D90:
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,52
	ctx.r4.s64 = 52;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x837C7DA4;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c7e04
	if (cr6.eq) goto loc_837C7E04;
	// stw r22,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r22.u32);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stw r21,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r21.u32);
	// stw r28,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r28.u32);
	// stb r28,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r28.u8);
	// sth r28,32(r3)
	PPC_STORE_U16(ctx.r3.u32 + 32, ctx.r28.u16);
	// sth r28,34(r3)
	PPC_STORE_U16(ctx.r3.u32 + 34, ctx.r28.u16);
	// sth r28,36(r3)
	PPC_STORE_U16(ctx.r3.u32 + 36, ctx.r28.u16);
	// sth r28,38(r3)
	PPC_STORE_U16(ctx.r3.u32 + 38, ctx.r28.u16);
	// sth r28,40(r3)
	PPC_STORE_U16(ctx.r3.u32 + 40, ctx.r28.u16);
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stw r28,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r28.u32);
	// blt cr6,0x837c7de8
	if (cr6.lt) goto loc_837C7DE8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_837C7DE8:
	// stb r28,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r28.u8);
	// stfs f31,44(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stw r25,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r25.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// sth r28,48(r3)
	PPC_STORE_U16(ctx.r3.u32 + 48, ctx.r28.u16);
	// sth r28,50(r3)
	PPC_STORE_U16(ctx.r3.u32 + 50, ctx.r28.u16);
	// b 0x837c7e08
	goto loc_837C7E08;
loc_837C7E04:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_837C7E08:
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stwx r11,r27,r10
	PPC_STORE_U32(ctx.r27.u32 + ctx.r10.u32, ctx.r11.u32);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// lbz r9,65(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 65);
	// cmplw cr6,r30,r9
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, xer);
	// blt cr6,0x837c7d90
	if (cr6.lt) goto loc_837C7D90;
loc_837C7E24:
	// addi r23,r29,32
	ctx.r23.s64 = ctx.r29.s64 + 32;
	// lbz r4,66(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 66);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82ad5e38
	ctx.lr = 0x837C7E34;
	sub_82AD5E38(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lbz r4,66(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 66);
	// bl 0x83587720
	ctx.lr = 0x837C7E40;
	sub_83587720(ctx, base);
	// lbz r11,66(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 66);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837c7ed4
	if (cr6.eq) goto loc_837C7ED4;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
loc_837C7E54:
	// stw r20,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r20.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,44
	ctx.r4.s64 = 44;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595718
	ctx.lr = 0x837C7E68;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c7eb4
	if (cr6.eq) goto loc_837C7EB4;
	// stw r22,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r22.u32);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stw r21,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r21.u32);
	// stw r28,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r28.u32);
	// stb r28,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r28.u8);
	// sth r28,32(r3)
	PPC_STORE_U16(ctx.r3.u32 + 32, ctx.r28.u16);
	// sth r28,34(r3)
	PPC_STORE_U16(ctx.r3.u32 + 34, ctx.r28.u16);
	// sth r28,36(r3)
	PPC_STORE_U16(ctx.r3.u32 + 36, ctx.r28.u16);
	// sth r28,38(r3)
	PPC_STORE_U16(ctx.r3.u32 + 38, ctx.r28.u16);
	// sth r28,40(r3)
	PPC_STORE_U16(ctx.r3.u32 + 40, ctx.r28.u16);
	// stw r28,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r28.u32);
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x837c7eac
	if (cr6.lt) goto loc_837C7EAC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_837C7EAC:
	// stb r28,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r28.u8);
	// b 0x837c7eb8
	goto loc_837C7EB8;
loc_837C7EB4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_837C7EB8:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stwx r3,r11,r27
	PPC_STORE_U32(ctx.r11.u32 + ctx.r27.u32, ctx.r3.u32);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// lbz r10,66(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 66);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// blt cr6,0x837c7e54
	if (cr6.lt) goto loc_837C7E54;
loc_837C7ED4:
	// addi r24,r29,48
	ctx.r24.s64 = ctx.r29.s64 + 48;
	// lbz r4,67(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 67);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82ad5e38
	ctx.lr = 0x837C7EE4;
	sub_82AD5E38(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lbz r4,67(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 67);
	// bl 0x83587720
	ctx.lr = 0x837C7EF0;
	sub_83587720(ctx, base);
	// lbz r11,67(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 67);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837c7f84
	if (cr6.eq) goto loc_837C7F84;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
loc_837C7F04:
	// stw r20,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r20.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,44
	ctx.r4.s64 = 44;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82595718
	ctx.lr = 0x837C7F18;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c7f64
	if (cr6.eq) goto loc_837C7F64;
	// stw r22,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r22.u32);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stw r21,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r21.u32);
	// stw r28,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r28.u32);
	// stb r28,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r28.u8);
	// sth r28,32(r3)
	PPC_STORE_U16(ctx.r3.u32 + 32, ctx.r28.u16);
	// sth r28,34(r3)
	PPC_STORE_U16(ctx.r3.u32 + 34, ctx.r28.u16);
	// sth r28,36(r3)
	PPC_STORE_U16(ctx.r3.u32 + 36, ctx.r28.u16);
	// sth r28,40(r3)
	PPC_STORE_U16(ctx.r3.u32 + 40, ctx.r28.u16);
	// sth r28,38(r3)
	PPC_STORE_U16(ctx.r3.u32 + 38, ctx.r28.u16);
	// stw r28,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r28.u32);
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x837c7f5c
	if (cr6.lt) goto loc_837C7F5C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_837C7F5C:
	// stb r28,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r28.u8);
	// b 0x837c7f68
	goto loc_837C7F68;
loc_837C7F64:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_837C7F68:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stwx r3,r27,r11
	PPC_STORE_U32(ctx.r27.u32 + ctx.r11.u32, ctx.r3.u32);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// lbz r10,67(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 67);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// blt cr6,0x837c7f04
	if (cr6.lt) goto loc_837C7F04;
loc_837C7F84:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b50b30
	ctx.lr = 0x837C7F8C;
	sub_83B50B30(ctx, base);
	// lbz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 64);
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837c8018
	if (cr6.eq) goto loc_837C8018;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_837C7FA0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r25,0(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x83b50a20
	ctx.lr = 0x837C7FAC;
	sub_83B50A20(ctx, base);
	// lwzx r11,r30,r25
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r25.u32);
	// sth r3,32(r11)
	PPC_STORE_U16(ctx.r11.u32 + 32, ctx.r3.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r25,0(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x83b50a20
	ctx.lr = 0x837C7FC0;
	sub_83B50A20(ctx, base);
	// lwzx r10,r30,r25
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r25.u32);
	// sth r3,34(r10)
	PPC_STORE_U16(ctx.r10.u32 + 34, ctx.r3.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r25,0(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x83b50a20
	ctx.lr = 0x837C7FD4;
	sub_83B50A20(ctx, base);
	// lwzx r9,r30,r25
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r25.u32);
	// sth r3,36(r9)
	PPC_STORE_U16(ctx.r9.u32 + 36, ctx.r3.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r25,0(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x83b50a20
	ctx.lr = 0x837C7FE8;
	sub_83B50A20(ctx, base);
	// lwzx r8,r30,r25
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r25.u32);
	// sth r3,38(r8)
	PPC_STORE_U16(ctx.r8.u32 + 38, ctx.r3.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r25,0(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x83b50a20
	ctx.lr = 0x837C7FFC;
	sub_83B50A20(ctx, base);
	// lwzx r7,r30,r25
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r25.u32);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// sth r3,40(r7)
	PPC_STORE_U16(ctx.r7.u32 + 40, ctx.r3.u16);
	// lbz r6,64(r29)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r29.u32 + 64);
	// cmplw cr6,r27,r6
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r6.u32, xer);
	// blt cr6,0x837c7fa0
	if (cr6.lt) goto loc_837C7FA0;
loc_837C8018:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b50b30
	ctx.lr = 0x837C8020;
	sub_83B50B30(ctx, base);
	// lbz r11,65(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 65);
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837c80e8
	if (cr6.eq) goto loc_837C80E8;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_837C8034:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r25,0(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x83b50a20
	ctx.lr = 0x837C8040;
	sub_83B50A20(ctx, base);
	// lwzx r11,r30,r25
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r25.u32);
	// sth r3,32(r11)
	PPC_STORE_U16(ctx.r11.u32 + 32, ctx.r3.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r25,0(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x83b50a20
	ctx.lr = 0x837C8054;
	sub_83B50A20(ctx, base);
	// lwzx r10,r30,r25
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r25.u32);
	// sth r3,34(r10)
	PPC_STORE_U16(ctx.r10.u32 + 34, ctx.r3.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r25,0(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x83b50a20
	ctx.lr = 0x837C8068;
	sub_83B50A20(ctx, base);
	// lwzx r9,r30,r25
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r25.u32);
	// sth r3,36(r9)
	PPC_STORE_U16(ctx.r9.u32 + 36, ctx.r3.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r25,0(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x83b50a20
	ctx.lr = 0x837C807C;
	sub_83B50A20(ctx, base);
	// lwzx r8,r30,r25
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r25.u32);
	// sth r3,38(r8)
	PPC_STORE_U16(ctx.r8.u32 + 38, ctx.r3.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r25,0(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x83b50a20
	ctx.lr = 0x837C8090;
	sub_83B50A20(ctx, base);
	// lwzx r7,r30,r25
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r25.u32);
	// sth r3,40(r7)
	PPC_STORE_U16(ctx.r7.u32 + 40, ctx.r3.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r25,0(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x83b50a80
	ctx.lr = 0x837C80A4;
	sub_83B50A80(ctx, base);
	// lwzx r6,r30,r25
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r25.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f1,44(r6)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r6.u32 + 44, temp.u32);
	// lwz r25,0(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x83b50a20
	ctx.lr = 0x837C80B8;
	sub_83B50A20(ctx, base);
	// lwzx r5,r30,r25
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r25.u32);
	// sth r3,48(r5)
	PPC_STORE_U16(ctx.r5.u32 + 48, ctx.r3.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r25,0(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x83b50a20
	ctx.lr = 0x837C80CC;
	sub_83B50A20(ctx, base);
	// lwzx r4,r30,r25
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r25.u32);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// sth r3,50(r4)
	PPC_STORE_U16(ctx.r4.u32 + 50, ctx.r3.u16);
	// lbz r3,65(r29)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r29.u32 + 65);
	// cmplw cr6,r27,r3
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r3.u32, xer);
	// blt cr6,0x837c8034
	if (cr6.lt) goto loc_837C8034;
loc_837C80E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b50b30
	ctx.lr = 0x837C80F0;
	sub_83B50B30(ctx, base);
	// lbz r11,66(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 66);
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837c817c
	if (cr6.eq) goto loc_837C817C;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_837C8104:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r26,0(r23)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// bl 0x83b50a20
	ctx.lr = 0x837C8110;
	sub_83B50A20(ctx, base);
	// lwzx r11,r26,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r30.u32);
	// sth r3,32(r11)
	PPC_STORE_U16(ctx.r11.u32 + 32, ctx.r3.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r26,0(r23)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// bl 0x83b50a20
	ctx.lr = 0x837C8124;
	sub_83B50A20(ctx, base);
	// lwzx r10,r26,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r30.u32);
	// sth r3,34(r10)
	PPC_STORE_U16(ctx.r10.u32 + 34, ctx.r3.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r26,0(r23)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// bl 0x83b50a20
	ctx.lr = 0x837C8138;
	sub_83B50A20(ctx, base);
	// lwzx r9,r26,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r30.u32);
	// sth r3,36(r9)
	PPC_STORE_U16(ctx.r9.u32 + 36, ctx.r3.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r26,0(r23)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// bl 0x83b50a20
	ctx.lr = 0x837C814C;
	sub_83B50A20(ctx, base);
	// lwzx r8,r26,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r30.u32);
	// sth r3,38(r8)
	PPC_STORE_U16(ctx.r8.u32 + 38, ctx.r3.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r26,0(r23)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// bl 0x83b50a20
	ctx.lr = 0x837C8160;
	sub_83B50A20(ctx, base);
	// lwzx r7,r26,r30
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r30.u32);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// sth r3,40(r7)
	PPC_STORE_U16(ctx.r7.u32 + 40, ctx.r3.u16);
	// lbz r6,66(r29)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r29.u32 + 66);
	// cmplw cr6,r27,r6
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r6.u32, xer);
	// blt cr6,0x837c8104
	if (cr6.lt) goto loc_837C8104;
loc_837C817C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b50b30
	ctx.lr = 0x837C8184;
	sub_83B50B30(ctx, base);
	// lbz r11,67(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 67);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837c820c
	if (cr6.eq) goto loc_837C820C;
loc_837C8194:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r27,0(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// bl 0x83b50a20
	ctx.lr = 0x837C81A0;
	sub_83B50A20(ctx, base);
	// lwzx r11,r28,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r27.u32);
	// sth r3,32(r11)
	PPC_STORE_U16(ctx.r11.u32 + 32, ctx.r3.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r27,0(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// bl 0x83b50a20
	ctx.lr = 0x837C81B4;
	sub_83B50A20(ctx, base);
	// lwzx r10,r28,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r27.u32);
	// sth r3,34(r10)
	PPC_STORE_U16(ctx.r10.u32 + 34, ctx.r3.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r27,0(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// bl 0x83b50a20
	ctx.lr = 0x837C81C8;
	sub_83B50A20(ctx, base);
	// lwzx r9,r28,r27
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r27.u32);
	// sth r3,36(r9)
	PPC_STORE_U16(ctx.r9.u32 + 36, ctx.r3.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r27,0(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// bl 0x83b50a20
	ctx.lr = 0x837C81DC;
	sub_83B50A20(ctx, base);
	// lwzx r8,r28,r27
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r27.u32);
	// sth r3,38(r8)
	PPC_STORE_U16(ctx.r8.u32 + 38, ctx.r3.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r27,0(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// bl 0x83b50a20
	ctx.lr = 0x837C81F0;
	sub_83B50A20(ctx, base);
	// lwzx r7,r28,r27
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r27.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// sth r3,40(r7)
	PPC_STORE_U16(ctx.r7.u32 + 40, ctx.r3.u16);
	// lbz r6,67(r29)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r29.u32 + 67);
	// cmplw cr6,r30,r6
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r6.u32, xer);
	// blt cr6,0x837c8194
	if (cr6.lt) goto loc_837C8194;
loc_837C820C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837C8218"))) PPC_WEAK_FUNC(sub_837C8218);
PPC_FUNC_IMPL(__imp__sub_837C8218) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837C8220;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r5,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x837c5b58
	ctx.lr = 0x837C8238;
	sub_837C5B58(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c827c
	if (cr6.eq) goto loc_837C827C;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x837c6e58
	ctx.lr = 0x837C8264;
	sub_837C6E58(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r30,74(r31)
	PPC_STORE_U8(ctx.r31.u32 + 74, ctx.r30.u8);
	// stb r10,75(r31)
	PPC_STORE_U8(ctx.r31.u32 + 75, ctx.r10.u8);
	// stb r9,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r9.u8);
	// sth r29,78(r31)
	PPC_STORE_U16(ctx.r31.u32 + 78, ctx.r29.u16);
loc_837C827C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837C8284"))) PPC_WEAK_FUNC(sub_837C8284);
PPC_FUNC_IMPL(__imp__sub_837C8284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C8288"))) PPC_WEAK_FUNC(sub_837C8288);
PPC_FUNC_IMPL(__imp__sub_837C8288) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x837C8290;
	__savegprlr_27(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r6,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r6.u32);
	// addi r3,r1,396
	ctx.r3.s64 = ctx.r1.s64 + 396;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// bl 0x837c5b58
	ctx.lr = 0x837C82B0;
	sub_837C5B58(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c8314
	if (cr6.eq) goto loc_837C8314;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83b50e50
	ctx.lr = 0x837C82C4;
	sub_83B50E50(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83b508f0
	ctx.lr = 0x837C82D4;
	sub_83B508F0(ctx, base);
	// lwz r11,396(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x837c7c28
	ctx.lr = 0x837C82F4;
	sub_837C7C28(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r28,74(r31)
	PPC_STORE_U8(ctx.r31.u32 + 74, ctx.r28.u8);
	// stb r10,75(r31)
	PPC_STORE_U8(ctx.r31.u32 + 75, ctx.r10.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r9,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r9.u8);
	// sth r27,78(r31)
	PPC_STORE_U16(ctx.r31.u32 + 78, ctx.r27.u16);
	// bl 0x83b50b58
	ctx.lr = 0x837C8314;
	sub_83B50B58(ctx, base);
loc_837C8314:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837C831C"))) PPC_WEAK_FUNC(sub_837C831C);
PPC_FUNC_IMPL(__imp__sub_837C831C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C8320"))) PPC_WEAK_FUNC(sub_837C8320);
PPC_FUNC_IMPL(__imp__sub_837C8320) {
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
	ctx.lr = 0x837C8328;
	__savegprlr_19(ctx, base);
	// stfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r6,5
	cr6.compare<uint32_t>(ctx.r6.u32, 5, xer);
	// bgt cr6,0x837c9598
	if (cr6.gt) goto loc_837C9598;
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bdzf 4*cr6+eq,0x837c8804
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837C8804;
	// bdzf 4*cr6+eq,0x837c8b90
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837C8B90;
	// bdzf 4*cr6+eq,0x837c8f0c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837C8F0C;
	// bdzf 4*cr6+eq,0x837c9288
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837C9288;
	// bne cr6,0x837c93f8
	if (!cr6.eq) goto loc_837C93F8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r22,1
	ctx.r22.s64 = 1;
	// cmpldi cr6,r29,0
	cr6.compare<uint64_t>(ctx.r29.u64, 0, xer);
	// lfs f31,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// bne cr6,0x837c83d4
	if (!cr6.eq) goto loc_837C83D4;
	// li r21,22
	ctx.r21.s64 = 22;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// bl 0x82595718
	ctx.lr = 0x837C8394;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c83cc
	if (cr6.eq) goto loc_837C83CC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stfs f31,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// clrlwi r7,r10,29
	ctx.r7.u64 = ctx.r10.u32 & 0x7;
	// clrlwi r6,r9,9
	ctx.r6.u64 = ctx.r9.u32 & 0x7FFFFF;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// b 0x837c8540
	goto loc_837C8540;
loc_837C83CC:
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// b 0x837c8540
	goto loc_837C8540;
loc_837C83D4:
	// rldicl r11,r29,60,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u64, 60) & 0xFFFFFFFFFFFFFFF;
	// lis r10,4095
	ctx.r10.s64 = 268369920;
	// rotlwi r27,r11,0
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// rlwinm r4,r27,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplw cr6,r27,r9
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r9.u32, xer);
	// ble cr6,0x837c83f4
	if (!cr6.gt) goto loc_837C83F4;
	// li r4,-1
	ctx.r4.s64 = -1;
loc_837C83F4:
	// li r21,22
	ctx.r21.s64 = 22;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r21,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r21.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595718
	ctx.lr = 0x837C8408;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c852c
	if (cr6.eq) goto loc_837C852C;
	// addi r10,r27,-1
	ctx.r10.s64 = ctx.r27.s64 + -1;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x837c8524
	if (cr6.lt) goto loc_837C8524;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,4
	cr6.compare<int32_t>(ctx.r9.s32, 4, xer);
	// blt cr6,0x837c84e4
	if (cr6.lt) goto loc_837C84E4;
	// rlwinm r8,r9,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r7,r9,0,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// subf r10,r7,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r7.s64;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_837C843C:
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stfs f31,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stfs f31,28(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// clrlwi r4,r8,29
	ctx.r4.u64 = ctx.r8.u32 & 0x7;
	// clrlwi r6,r9,31
	ctx.r6.u64 = ctx.r9.u32 & 0x1;
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// clrlwi r8,r7,9
	ctx.r8.u64 = ctx.r7.u32 & 0x7FFFFF;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r7,24(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// clrlwi r5,r5,31
	ctx.r5.u64 = ctx.r5.u32 & 0x1;
	// lwz r31,32(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// clrlwi r9,r9,29
	ctx.r9.u64 = ctx.r9.u32 & 0x7;
	// lwz r30,36(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi r7,r7,9
	ctx.r7.u64 = ctx.r7.u32 & 0x7FFFFF;
	// lwz r28,40(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi r31,r31,31
	ctx.r31.u64 = ctx.r31.u32 & 0x1;
	// lwz r25,48(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// clrlwi r30,r30,29
	ctx.r30.u64 = ctx.r30.u32 & 0x7;
	// lwz r23,52(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// clrlwi r28,r28,9
	ctx.r28.u64 = ctx.r28.u32 & 0x7FFFFF;
	// lwz r19,56(r11)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// clrlwi r25,r25,31
	ctx.r25.u64 = ctx.r25.u32 & 0x1;
	// clrlwi r23,r23,29
	ctx.r23.u64 = ctx.r23.u32 & 0x7;
	// stfs f31,44(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// clrlwi r19,r19,9
	ctx.r19.u64 = ctx.r19.u32 & 0x7FFFFF;
	// stfs f31,60(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stw r5,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r5.u32);
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// stw r7,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r7.u32);
	// stw r31,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r31.u32);
	// stw r30,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r30.u32);
	// stw r28,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r28.u32);
	// stw r25,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r25.u32);
	// stw r23,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r23.u32);
	// stw r19,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r19.u32);
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// bdnz 0x837c843c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837C843C;
loc_837C84E4:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x837c8524
	if (cr6.lt) goto loc_837C8524;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_837C84F8:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// clrlwi r7,r10,31
	ctx.r7.u64 = ctx.r10.u32 & 0x1;
	// clrlwi r6,r9,29
	ctx.r6.u64 = ctx.r9.u32 & 0x7;
	// clrlwi r5,r8,9
	ctx.r5.u64 = ctx.r8.u32 & 0x7FFFFF;
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// stw r5,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
	// stfsu f31,16(r11)
	ctx.fpscr.disableFlushMode();
	ea = 16 + ctx.r11.u32;
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x837c84f8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837C84F8;
loc_837C8524:
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// b 0x837c8530
	goto loc_837C8530;
loc_837C852C:
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
loc_837C8530:
	// rotlwi r5,r29,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r29.u32, 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x831ce980
	ctx.lr = 0x837C8540;
	sub_831CE980(ctx, base);
loc_837C8540:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x837c87e4
	if (cr6.eq) goto loc_837C87E4;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
loc_837C8550:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// rlwinm r11,r11,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// addi r10,r11,-157
	ctx.r10.s64 = ctx.r11.s64 + -157;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x837c5bf8
	ctx.lr = 0x837C8570;
	sub_837C5BF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c859c
	if (cr6.eq) goto loc_837C859C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r10,65(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 65);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r10,65(r11)
	PPC_STORE_U8(ctx.r11.u32 + 65, ctx.r10.u8);
	// stb r22,75(r11)
	PPC_STORE_U8(ctx.r11.u32 + 75, ctx.r22.u8);
loc_837C859C:
	// addic. r5,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// bne 0x837c8550
	if (!cr0.eq) goto loc_837C8550;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x837c87e4
	if (cr6.eq) goto loc_837C87E4;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_837C85B8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// rlwinm r11,r11,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// addi r10,r11,-157
	ctx.r10.s64 = ctx.r11.s64 + -157;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x837c5bf8
	ctx.lr = 0x837C85D8;
	sub_837C5BF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c8624
	if (cr6.eq) goto loc_837C8624;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r31,r11,r3
	ctx.r31.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r10,75(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 75);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837c8624
	if (cr6.eq) goto loc_837C8624;
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// lbz r4,65(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 65);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ad5e38
	ctx.lr = 0x837C8610;
	sub_82AD5E38(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r4,65(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 65);
	// bl 0x83587720
	ctx.lr = 0x837C861C;
	sub_83587720(ctx, base);
	// stb r24,65(r31)
	PPC_STORE_U8(ctx.r31.u32 + 65, ctx.r24.u8);
	// stb r24,75(r31)
	PPC_STORE_U8(ctx.r31.u32 + 75, ctx.r24.u8);
loc_837C8624:
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// bne 0x837c85b8
	if (!cr0.eq) goto loc_837C85B8;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x837c87e4
	if (cr6.eq) goto loc_837C87E4;
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// lis r10,-32211
	ctx.r10.s64 = -2110980096;
	// addi r30,r25,4
	ctx.r30.s64 = ctx.r25.s64 + 4;
	// li r23,15
	ctx.r23.s64 = 15;
	// addi r28,r11,-19448
	ctx.r28.s64 = ctx.r11.s64 + -19448;
	// addi r26,r10,-19444
	ctx.r26.s64 = ctx.r10.s64 + -19444;
loc_837C8650:
	// lwz r11,-4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// rlwinm r11,r11,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// addi r10,r11,-157
	ctx.r10.s64 = ctx.r11.s64 + -157;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x837c5bf8
	ctx.lr = 0x837C8670;
	sub_837C5BF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c87d8
	if (cr6.eq) goto loc_837C87D8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,52
	ctx.r4.s64 = 52;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r31,r11,r3
	ctx.r31.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lbz r29,65(r31)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r31.u32 + 65);
	// stw r21,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r21.u32);
	// bl 0x82595718
	ctx.lr = 0x837C86A4;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c8704
	if (cr6.eq) goto loc_837C8704;
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stw r23,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r23.u32);
	// stw r24,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r24.u32);
	// stb r24,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r24.u8);
	// sth r24,32(r3)
	PPC_STORE_U16(ctx.r3.u32 + 32, ctx.r24.u16);
	// sth r24,34(r3)
	PPC_STORE_U16(ctx.r3.u32 + 34, ctx.r24.u16);
	// sth r24,36(r3)
	PPC_STORE_U16(ctx.r3.u32 + 36, ctx.r24.u16);
	// sth r24,38(r3)
	PPC_STORE_U16(ctx.r3.u32 + 38, ctx.r24.u16);
	// sth r24,40(r3)
	PPC_STORE_U16(ctx.r3.u32 + 40, ctx.r24.u16);
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stw r24,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r24.u32);
	// blt cr6,0x837c86e8
	if (cr6.lt) goto loc_837C86E8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_837C86E8:
	// stb r24,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r24.u8);
	// stfs f31,44(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stw r26,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r26.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// sth r24,48(r3)
	PPC_STORE_U16(ctx.r3.u32 + 48, ctx.r24.u16);
	// sth r24,50(r3)
	PPC_STORE_U16(ctx.r3.u32 + 50, ctx.r24.u16);
	// b 0x837c8708
	goto loc_837C8708;
loc_837C8704:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_837C8708:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r9,r29,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r7,24,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0x3F;
	// addi r6,r11,102
	ctx.r6.s64 = ctx.r11.s64 + 102;
	// lwzx r5,r8,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// sth r6,32(r5)
	PPC_STORE_U16(ctx.r5.u32 + 32, ctx.r6.u16);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r3,18,23,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 18) & 0x1FF;
	// lwzx r10,r4,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r9.u32);
	// sth r11,34(r10)
	PPC_STORE_U16(ctx.r10.u32 + 34, ctx.r11.u16);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r7,9,23,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 9) & 0x1FF;
	// addi r6,r11,10
	ctx.r6.s64 = ctx.r11.s64 + 10;
	// lwzx r5,r8,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// sth r6,36(r5)
	PPC_STORE_U16(ctx.r5.u32 + 36, ctx.r6.u16);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,-4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// rlwinm r10,r11,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// lwzx r8,r3,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// sth r10,38(r8)
	PPC_STORE_U16(ctx.r8.u32 + 38, ctx.r10.u16);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r5,r6,9,28,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 9) & 0xF;
	// lwzx r4,r7,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// sth r5,40(r4)
	PPC_STORE_U16(ctx.r4.u32 + 40, ctx.r5.u16);
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwzx r11,r3,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// stfs f0,44(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r7,r8,5,27,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0x1F;
	// lwzx r6,r10,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// sth r7,48(r6)
	PPC_STORE_U16(ctx.r6.u32 + 48, ctx.r7.u16);
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r4,-4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// rlwinm r3,r4,30,26,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3F;
	// lwzx r11,r5,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// sth r3,50(r11)
	PPC_STORE_U16(ctx.r11.u32 + 50, ctx.r3.u16);
	// lbz r11,65(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 65);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stb r10,65(r31)
	PPC_STORE_U8(ctx.r31.u32 + 65, ctx.r10.u8);
	// stb r22,75(r31)
	PPC_STORE_U8(ctx.r31.u32 + 75, ctx.r22.u8);
	// lwz r8,-4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// rlwinm r11,r8,24,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFF;
	// addi r7,r11,50
	ctx.r7.s64 = ctx.r11.s64 + 50;
	// sth r7,78(r31)
	PPC_STORE_U16(ctx.r31.u32 + 78, ctx.r7.u16);
loc_837C87D8:
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bne 0x837c8650
	if (!cr0.eq) goto loc_837C8650;
loc_837C87E4:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x837c9598
	if (cr6.eq) goto loc_837C9598;
	// stw r21,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r21.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595150
	ctx.lr = 0x837C87FC;
	sub_82595150(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// b 0x837c958c
	goto loc_837C958C;
loc_837C8804:
	// li r24,0
	ctx.r24.s64 = 0;
	// li r22,1
	ctx.r22.s64 = 1;
	// cmpldi cr6,r29,0
	cr6.compare<uint64_t>(ctx.r29.u64, 0, xer);
	// bne cr6,0x837c886c
	if (!cr6.eq) goto loc_837C886C;
	// li r21,22
	ctx.r21.s64 = 22;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r21,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r21.u32);
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// bl 0x82595718
	ctx.lr = 0x837C8830;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c8864
	if (cr6.eq) goto loc_837C8864;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// clrlwi r7,r10,30
	ctx.r7.u64 = ctx.r10.u32 & 0x3;
	// clrlwi r6,r9,15
	ctx.r6.u64 = ctx.r9.u32 & 0x1FFFF;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// b 0x837c8910
	goto loc_837C8910;
loc_837C8864:
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// b 0x837c8910
	goto loc_837C8910;
loc_837C886C:
	// li r11,12
	ctx.r11.s64 = 12;
	// lis r10,5461
	ctx.r10.s64 = 357892096;
	// divdu r9,r29,r11
	ctx.r9.u64 = PPCDivide(ctx.r29.u64, ctx.r11.u64);
	// ori r8,r10,21845
	ctx.r8.u64 = ctx.r10.u64 | 21845;
	// rotlwi r28,r9,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplw cr6,r28,r8
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r8.u32, xer);
	// bgt cr6,0x837c8898
	if (cr6.gt) goto loc_837C8898;
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x837c889c
	goto loc_837C889C;
loc_837C8898:
	// li r4,-1
	ctx.r4.s64 = -1;
loc_837C889C:
	// li r21,22
	ctx.r21.s64 = 22;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r21,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r21.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82595718
	ctx.lr = 0x837C88B0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c88fc
	if (cr6.eq) goto loc_837C88FC;
	// addic. r11,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r11.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt 0x837c88f4
	if (cr0.lt) goto loc_837C88F4;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_837C88CC:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// clrlwi r7,r10,31
	ctx.r7.u64 = ctx.r10.u32 & 0x1;
	// clrlwi r6,r9,30
	ctx.r6.u64 = ctx.r9.u32 & 0x3;
	// clrlwi r5,r8,15
	ctx.r5.u64 = ctx.r8.u32 & 0x1FFFF;
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// stwu r5,12(r11)
	ea = 12 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x837c88cc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837C88CC;
loc_837C88F4:
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// b 0x837c8900
	goto loc_837C8900;
loc_837C88FC:
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
loc_837C8900:
	// rotlwi r5,r29,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r29.u32, 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x831ce980
	ctx.lr = 0x837C8910;
	sub_831CE980(ctx, base);
loc_837C8910:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x837c8b70
	if (cr6.eq) goto loc_837C8B70;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_837C8920:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// rlwinm r11,r11,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// addi r10,r11,-166
	ctx.r10.s64 = ctx.r11.s64 + -166;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x837c5bf8
	ctx.lr = 0x837C8940;
	sub_837C5BF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c896c
	if (cr6.eq) goto loc_837C896C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 64);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r10,64(r11)
	PPC_STORE_U8(ctx.r11.u32 + 64, ctx.r10.u8);
	// stb r22,75(r11)
	PPC_STORE_U8(ctx.r11.u32 + 75, ctx.r22.u8);
loc_837C896C:
	// addic. r5,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// addi r6,r6,12
	ctx.r6.s64 = ctx.r6.s64 + 12;
	// bne 0x837c8920
	if (!cr0.eq) goto loc_837C8920;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x837c8b70
	if (cr6.eq) goto loc_837C8B70;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_837C8988:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// rlwinm r11,r11,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// addi r10,r11,-166
	ctx.r10.s64 = ctx.r11.s64 + -166;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x837c5bf8
	ctx.lr = 0x837C89A8;
	sub_837C5BF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c89f0
	if (cr6.eq) goto loc_837C89F0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r31,r11,r3
	ctx.r31.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r10,75(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 75);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837c89f0
	if (cr6.eq) goto loc_837C89F0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,64(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 64);
	// bl 0x82ad5e38
	ctx.lr = 0x837C89DC;
	sub_82AD5E38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,64(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 64);
	// bl 0x83587720
	ctx.lr = 0x837C89E8;
	sub_83587720(ctx, base);
	// stb r24,64(r31)
	PPC_STORE_U8(ctx.r31.u32 + 64, ctx.r24.u8);
	// stb r24,75(r31)
	PPC_STORE_U8(ctx.r31.u32 + 75, ctx.r24.u8);
loc_837C89F0:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// bne 0x837c8988
	if (!cr0.eq) goto loc_837C8988;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x837c8b70
	if (cr6.eq) goto loc_837C8B70;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// addi r30,r25,4
	ctx.r30.s64 = ctx.r25.s64 + 4;
	// li r23,15
	ctx.r23.s64 = 15;
	// ori r28,r10,65470
	ctx.r28.u64 = ctx.r10.u64 | 65470;
	// addi r27,r11,-19448
	ctx.r27.s64 = ctx.r11.s64 + -19448;
loc_837C8A20:
	// lwz r11,-4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// rlwinm r11,r11,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// addi r10,r11,-166
	ctx.r10.s64 = ctx.r11.s64 + -166;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x837c5bf8
	ctx.lr = 0x837C8A40;
	sub_837C5BF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c8b64
	if (cr6.eq) goto loc_837C8B64;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,44
	ctx.r4.s64 = 44;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r31,r11,r3
	ctx.r31.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// lbz r29,64(r31)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r31.u32 + 64);
	// stw r21,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r21.u32);
	// bl 0x82595718
	ctx.lr = 0x837C8A74;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c8ac0
	if (cr6.eq) goto loc_837C8AC0;
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stw r23,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r23.u32);
	// stw r24,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r24.u32);
	// stb r24,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r24.u8);
	// sth r24,34(r3)
	PPC_STORE_U16(ctx.r3.u32 + 34, ctx.r24.u16);
	// sth r24,36(r3)
	PPC_STORE_U16(ctx.r3.u32 + 36, ctx.r24.u16);
	// sth r24,38(r3)
	PPC_STORE_U16(ctx.r3.u32 + 38, ctx.r24.u16);
	// sth r24,40(r3)
	PPC_STORE_U16(ctx.r3.u32 + 40, ctx.r24.u16);
	// sth r24,32(r3)
	PPC_STORE_U16(ctx.r3.u32 + 32, ctx.r24.u16);
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stw r24,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r24.u32);
	// blt cr6,0x837c8ab8
	if (cr6.lt) goto loc_837C8AB8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_837C8AB8:
	// stb r24,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r24.u8);
	// b 0x837c8ac4
	goto loc_837C8AC4;
loc_837C8AC0:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_837C8AC4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r8,-4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// rlwinm r11,r8,31,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7F;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// clrlwi r5,r6,24
	ctx.r5.u64 = ctx.r6.u32 & 0xFF;
	// lwzx r7,r9,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// sth r5,32(r7)
	PPC_STORE_U16(ctx.r7.u32 + 32, ctx.r5.u16);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r3,r4,30,22,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FF;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r9,r3,r28
	ctx.r9.u64 = ctx.r3.u64 + ctx.r28.u64;
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// sth r9,34(r8)
	PPC_STORE_U16(ctx.r8.u32 + 34, ctx.r9.u16);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r6,20,22,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 20) & 0x3FF;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// lwzx r11,r5,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// sth r4,36(r11)
	PPC_STORE_U16(ctx.r11.u32 + 36, ctx.r4.u16);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r7,r8,10,22,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 10) & 0x3FF;
	// lwzx r6,r9,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// sth r7,38(r6)
	PPC_STORE_U16(ctx.r6.u32 + 38, ctx.r7.u16);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r5,10,22,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 10) & 0x3FF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwzx r3,r4,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// sth r11,40(r3)
	PPC_STORE_U16(ctx.r3.u32 + 40, ctx.r11.u16);
	// lbz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 64);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stb r9,64(r31)
	PPC_STORE_U8(ctx.r31.u32 + 64, ctx.r9.u8);
	// stb r22,75(r31)
	PPC_STORE_U8(ctx.r31.u32 + 75, ctx.r22.u8);
	// lwz r7,-4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// rlwinm r6,r7,24,20,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFF;
	// sth r6,78(r31)
	PPC_STORE_U16(ctx.r31.u32 + 78, ctx.r6.u16);
loc_837C8B64:
	// addic. r26,r26,-1
	xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	cr0.compare<int32_t>(ctx.r26.s32, 0, xer);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// bne 0x837c8a20
	if (!cr0.eq) goto loc_837C8A20;
loc_837C8B70:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x837c9598
	if (cr6.eq) goto loc_837C9598;
	// stw r21,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r21.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595150
	ctx.lr = 0x837C8B88;
	sub_82595150(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// b 0x837c958c
	goto loc_837C958C;
loc_837C8B90:
	// li r24,0
	ctx.r24.s64 = 0;
	// li r22,1
	ctx.r22.s64 = 1;
	// cmpldi cr6,r29,0
	cr6.compare<uint64_t>(ctx.r29.u64, 0, xer);
	// bne cr6,0x837c8bf8
	if (!cr6.eq) goto loc_837C8BF8;
	// li r21,22
	ctx.r21.s64 = 22;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r21,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r21.u32);
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// bl 0x82595718
	ctx.lr = 0x837C8BBC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c8bf0
	if (cr6.eq) goto loc_837C8BF0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// clrlwi r7,r10,30
	ctx.r7.u64 = ctx.r10.u32 & 0x3;
	// clrlwi r6,r9,5
	ctx.r6.u64 = ctx.r9.u32 & 0x7FFFFFF;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// b 0x837c8c9c
	goto loc_837C8C9C;
loc_837C8BF0:
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// b 0x837c8c9c
	goto loc_837C8C9C;
loc_837C8BF8:
	// li r11,12
	ctx.r11.s64 = 12;
	// lis r10,5461
	ctx.r10.s64 = 357892096;
	// divdu r9,r29,r11
	ctx.r9.u64 = PPCDivide(ctx.r29.u64, ctx.r11.u64);
	// ori r8,r10,21845
	ctx.r8.u64 = ctx.r10.u64 | 21845;
	// rotlwi r27,r9,0
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplw cr6,r27,r8
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r8.u32, xer);
	// bgt cr6,0x837c8c24
	if (cr6.gt) goto loc_837C8C24;
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x837c8c28
	goto loc_837C8C28;
loc_837C8C24:
	// li r4,-1
	ctx.r4.s64 = -1;
loc_837C8C28:
	// li r21,22
	ctx.r21.s64 = 22;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r21,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r21.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82595718
	ctx.lr = 0x837C8C3C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c8c88
	if (cr6.eq) goto loc_837C8C88;
	// addic. r11,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r11.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt 0x837c8c80
	if (cr0.lt) goto loc_837C8C80;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_837C8C58:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// clrlwi r7,r10,31
	ctx.r7.u64 = ctx.r10.u32 & 0x1;
	// clrlwi r6,r9,30
	ctx.r6.u64 = ctx.r9.u32 & 0x3;
	// clrlwi r5,r8,5
	ctx.r5.u64 = ctx.r8.u32 & 0x7FFFFFF;
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// stwu r5,12(r11)
	ea = 12 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x837c8c58
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837C8C58;
loc_837C8C80:
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// b 0x837c8c8c
	goto loc_837C8C8C;
loc_837C8C88:
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
loc_837C8C8C:
	// rotlwi r5,r29,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r29.u32, 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x831ce980
	ctx.lr = 0x837C8C9C;
	sub_831CE980(ctx, base);
loc_837C8C9C:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x837c8eec
	if (cr6.eq) goto loc_837C8EEC;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
loc_837C8CAC:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// rlwinm r11,r11,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// addi r10,r11,-166
	ctx.r10.s64 = ctx.r11.s64 + -166;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x837c5bf8
	ctx.lr = 0x837C8CCC;
	sub_837C5BF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c8cf8
	if (cr6.eq) goto loc_837C8CF8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r10,66(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 66);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r10,66(r11)
	PPC_STORE_U8(ctx.r11.u32 + 66, ctx.r10.u8);
	// stb r22,75(r11)
	PPC_STORE_U8(ctx.r11.u32 + 75, ctx.r22.u8);
loc_837C8CF8:
	// addic. r5,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// addi r6,r6,12
	ctx.r6.s64 = ctx.r6.s64 + 12;
	// bne 0x837c8cac
	if (!cr0.eq) goto loc_837C8CAC;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x837c8eec
	if (cr6.eq) goto loc_837C8EEC;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_837C8D14:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// rlwinm r11,r11,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// addi r10,r11,-166
	ctx.r10.s64 = ctx.r11.s64 + -166;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x837c5bf8
	ctx.lr = 0x837C8D34;
	sub_837C5BF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c8d80
	if (cr6.eq) goto loc_837C8D80;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r31,r11,r3
	ctx.r31.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r10,75(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 75);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837c8d80
	if (cr6.eq) goto loc_837C8D80;
	// addi r30,r31,32
	ctx.r30.s64 = ctx.r31.s64 + 32;
	// lbz r4,66(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 66);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ad5e38
	ctx.lr = 0x837C8D6C;
	sub_82AD5E38(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r4,66(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 66);
	// bl 0x83587720
	ctx.lr = 0x837C8D78;
	sub_83587720(ctx, base);
	// stb r24,66(r31)
	PPC_STORE_U8(ctx.r31.u32 + 66, ctx.r24.u8);
	// stb r24,75(r31)
	PPC_STORE_U8(ctx.r31.u32 + 75, ctx.r24.u8);
loc_837C8D80:
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// bne 0x837c8d14
	if (!cr0.eq) goto loc_837C8D14;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x837c8eec
	if (cr6.eq) goto loc_837C8EEC;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// addi r30,r25,4
	ctx.r30.s64 = ctx.r25.s64 + 4;
	// li r23,15
	ctx.r23.s64 = 15;
	// ori r26,r10,65535
	ctx.r26.u64 = ctx.r10.u64 | 65535;
	// addi r28,r11,-19448
	ctx.r28.s64 = ctx.r11.s64 + -19448;
loc_837C8DAC:
	// lwz r11,-4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// rlwinm r11,r11,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// addi r10,r11,-166
	ctx.r10.s64 = ctx.r11.s64 + -166;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x837c5bf8
	ctx.lr = 0x837C8DCC;
	sub_837C5BF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c8ee0
	if (cr6.eq) goto loc_837C8EE0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,44
	ctx.r4.s64 = 44;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r31,r11,r3
	ctx.r31.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// lbz r29,66(r31)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r31.u32 + 66);
	// stw r21,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r21.u32);
	// bl 0x82595718
	ctx.lr = 0x837C8E00;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c8e4c
	if (cr6.eq) goto loc_837C8E4C;
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stw r23,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r23.u32);
	// stw r24,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r24.u32);
	// stb r24,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r24.u8);
	// sth r24,32(r3)
	PPC_STORE_U16(ctx.r3.u32 + 32, ctx.r24.u16);
	// sth r24,34(r3)
	PPC_STORE_U16(ctx.r3.u32 + 34, ctx.r24.u16);
	// sth r24,36(r3)
	PPC_STORE_U16(ctx.r3.u32 + 36, ctx.r24.u16);
	// sth r24,38(r3)
	PPC_STORE_U16(ctx.r3.u32 + 38, ctx.r24.u16);
	// sth r24,40(r3)
	PPC_STORE_U16(ctx.r3.u32 + 40, ctx.r24.u16);
	// stw r24,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r24.u32);
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x837c8e44
	if (cr6.lt) goto loc_837C8E44;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_837C8E44:
	// stb r24,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r24.u8);
	// b 0x837c8e50
	goto loc_837C8E50;
loc_837C8E4C:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_837C8E50:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r8,-4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// rlwinm r7,r8,31,25,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7F;
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwzx r6,r9,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// sth r7,32(r6)
	PPC_STORE_U16(ctx.r6.u32 + 32, ctx.r7.u16);
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r3,r5,19,23,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 19) & 0x1FF;
	// lwzx r8,r4,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// add r11,r3,r26
	ctx.r11.u64 = ctx.r3.u64 + ctx.r26.u64;
	// sth r11,34(r8)
	PPC_STORE_U16(ctx.r8.u32 + 34, ctx.r11.u16);
	// lwz r7,32(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r5,r6,10,22,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0x3FF;
	// lwzx r4,r7,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// sth r5,36(r4)
	PPC_STORE_U16(ctx.r4.u32 + 36, ctx.r5.u16);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r9,r11,5,27,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1F;
	// lwzx r8,r3,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// sth r9,38(r8)
	PPC_STORE_U16(ctx.r8.u32 + 38, ctx.r9.u16);
	// lwz r7,32(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r5,r6,25,26,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 25) & 0x3F;
	// lwzx r4,r7,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// sth r5,40(r4)
	PPC_STORE_U16(ctx.r4.u32 + 40, ctx.r5.u16);
	// lbz r11,66(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 66);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stb r3,66(r31)
	PPC_STORE_U8(ctx.r31.u32 + 66, ctx.r3.u8);
	// stb r22,75(r31)
	PPC_STORE_U8(ctx.r31.u32 + 75, ctx.r22.u8);
	// lwz r10,-4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// rlwinm r9,r10,24,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFF;
	// sth r9,78(r31)
	PPC_STORE_U16(ctx.r31.u32 + 78, ctx.r9.u16);
loc_837C8EE0:
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// bne 0x837c8dac
	if (!cr0.eq) goto loc_837C8DAC;
loc_837C8EEC:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x837c9598
	if (cr6.eq) goto loc_837C9598;
	// stw r21,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r21.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595150
	ctx.lr = 0x837C8F04;
	sub_82595150(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// b 0x837c958c
	goto loc_837C958C;
loc_837C8F0C:
	// li r24,0
	ctx.r24.s64 = 0;
	// li r22,1
	ctx.r22.s64 = 1;
	// cmpldi cr6,r29,0
	cr6.compare<uint64_t>(ctx.r29.u64, 0, xer);
	// bne cr6,0x837c8f74
	if (!cr6.eq) goto loc_837C8F74;
	// li r21,22
	ctx.r21.s64 = 22;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r21,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r21.u32);
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// bl 0x82595718
	ctx.lr = 0x837C8F38;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c8f6c
	if (cr6.eq) goto loc_837C8F6C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// clrlwi r7,r10,31
	ctx.r7.u64 = ctx.r10.u32 & 0x1;
	// clrlwi r6,r9,4
	ctx.r6.u64 = ctx.r9.u32 & 0xFFFFFFF;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// b 0x837c9018
	goto loc_837C9018;
loc_837C8F6C:
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// b 0x837c9018
	goto loc_837C9018;
loc_837C8F74:
	// li r11,12
	ctx.r11.s64 = 12;
	// lis r10,5461
	ctx.r10.s64 = 357892096;
	// divdu r9,r29,r11
	ctx.r9.u64 = PPCDivide(ctx.r29.u64, ctx.r11.u64);
	// ori r8,r10,21845
	ctx.r8.u64 = ctx.r10.u64 | 21845;
	// rotlwi r27,r9,0
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplw cr6,r27,r8
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r8.u32, xer);
	// bgt cr6,0x837c8fa0
	if (cr6.gt) goto loc_837C8FA0;
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x837c8fa4
	goto loc_837C8FA4;
loc_837C8FA0:
	// li r4,-1
	ctx.r4.s64 = -1;
loc_837C8FA4:
	// li r21,22
	ctx.r21.s64 = 22;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r21,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r21.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82595718
	ctx.lr = 0x837C8FB8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c9004
	if (cr6.eq) goto loc_837C9004;
	// addic. r11,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r11.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt 0x837c8ffc
	if (cr0.lt) goto loc_837C8FFC;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_837C8FD4:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// clrlwi r7,r10,31
	ctx.r7.u64 = ctx.r10.u32 & 0x1;
	// clrlwi r6,r9,31
	ctx.r6.u64 = ctx.r9.u32 & 0x1;
	// clrlwi r5,r8,4
	ctx.r5.u64 = ctx.r8.u32 & 0xFFFFFFF;
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// stwu r5,12(r11)
	ea = 12 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x837c8fd4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837C8FD4;
loc_837C8FFC:
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// b 0x837c9008
	goto loc_837C9008;
loc_837C9004:
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
loc_837C9008:
	// rotlwi r5,r29,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r29.u32, 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x831ce980
	ctx.lr = 0x837C9018;
	sub_831CE980(ctx, base);
loc_837C9018:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x837c9268
	if (cr6.eq) goto loc_837C9268;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
loc_837C9028:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// rlwinm r11,r11,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// addi r10,r11,-166
	ctx.r10.s64 = ctx.r11.s64 + -166;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x837c5bf8
	ctx.lr = 0x837C9048;
	sub_837C5BF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c9074
	if (cr6.eq) goto loc_837C9074;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r10,67(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 67);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r10,67(r11)
	PPC_STORE_U8(ctx.r11.u32 + 67, ctx.r10.u8);
	// stb r22,75(r11)
	PPC_STORE_U8(ctx.r11.u32 + 75, ctx.r22.u8);
loc_837C9074:
	// addic. r5,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// addi r6,r6,12
	ctx.r6.s64 = ctx.r6.s64 + 12;
	// bne 0x837c9028
	if (!cr0.eq) goto loc_837C9028;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x837c9268
	if (cr6.eq) goto loc_837C9268;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_837C9090:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// rlwinm r11,r11,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// addi r10,r11,-166
	ctx.r10.s64 = ctx.r11.s64 + -166;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x837c5bf8
	ctx.lr = 0x837C90B0;
	sub_837C5BF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c90fc
	if (cr6.eq) goto loc_837C90FC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r31,r11,r3
	ctx.r31.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r10,75(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 75);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837c90fc
	if (cr6.eq) goto loc_837C90FC;
	// addi r30,r31,48
	ctx.r30.s64 = ctx.r31.s64 + 48;
	// lbz r4,67(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 67);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ad5e38
	ctx.lr = 0x837C90E8;
	sub_82AD5E38(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r4,67(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 67);
	// bl 0x83587720
	ctx.lr = 0x837C90F4;
	sub_83587720(ctx, base);
	// stb r24,67(r31)
	PPC_STORE_U8(ctx.r31.u32 + 67, ctx.r24.u8);
	// stb r24,75(r31)
	PPC_STORE_U8(ctx.r31.u32 + 75, ctx.r24.u8);
loc_837C90FC:
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// bne 0x837c9090
	if (!cr0.eq) goto loc_837C9090;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x837c9268
	if (cr6.eq) goto loc_837C9268;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// addi r30,r25,4
	ctx.r30.s64 = ctx.r25.s64 + 4;
	// li r23,15
	ctx.r23.s64 = 15;
	// ori r26,r10,65535
	ctx.r26.u64 = ctx.r10.u64 | 65535;
	// addi r28,r11,-19448
	ctx.r28.s64 = ctx.r11.s64 + -19448;
loc_837C9128:
	// lwz r11,-4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// rlwinm r11,r11,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// addi r10,r11,-166
	ctx.r10.s64 = ctx.r11.s64 + -166;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x837c5bf8
	ctx.lr = 0x837C9148;
	sub_837C5BF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c925c
	if (cr6.eq) goto loc_837C925C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,44
	ctx.r4.s64 = 44;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r31,r11,r3
	ctx.r31.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// lbz r29,67(r31)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r31.u32 + 67);
	// stw r21,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r21.u32);
	// bl 0x82595718
	ctx.lr = 0x837C917C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c91c8
	if (cr6.eq) goto loc_837C91C8;
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stw r23,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r23.u32);
	// stw r24,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r24.u32);
	// stb r24,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r24.u8);
	// sth r24,32(r3)
	PPC_STORE_U16(ctx.r3.u32 + 32, ctx.r24.u16);
	// sth r24,34(r3)
	PPC_STORE_U16(ctx.r3.u32 + 34, ctx.r24.u16);
	// sth r24,36(r3)
	PPC_STORE_U16(ctx.r3.u32 + 36, ctx.r24.u16);
	// sth r24,38(r3)
	PPC_STORE_U16(ctx.r3.u32 + 38, ctx.r24.u16);
	// sth r24,40(r3)
	PPC_STORE_U16(ctx.r3.u32 + 40, ctx.r24.u16);
	// stw r24,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r24.u32);
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x837c91c0
	if (cr6.lt) goto loc_837C91C0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_837C91C0:
	// stb r24,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r24.u8);
	// b 0x837c91cc
	goto loc_837C91CC;
loc_837C91C8:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_837C91CC:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r7,r8,26,25,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 26) & 0x7F;
	// lwzx r6,r10,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// sth r7,32(r6)
	PPC_STORE_U16(ctx.r6.u32 + 32, ctx.r7.u16);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r4,r5,19,23,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 19) & 0x1FF;
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// add r11,r4,r26
	ctx.r11.u64 = ctx.r4.u64 + ctx.r26.u64;
	// sth r11,34(r9)
	PPC_STORE_U16(ctx.r9.u32 + 34, ctx.r11.u16);
	// lwz r7,48(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r5,r6,10,22,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0x3FF;
	// lwzx r4,r10,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// sth r5,36(r4)
	PPC_STORE_U16(ctx.r4.u32 + 36, ctx.r5.u16);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r9,r11,4,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// lwzx r8,r10,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// sth r9,38(r8)
	PPC_STORE_U16(ctx.r8.u32 + 38, ctx.r9.u16);
	// lwz r7,48(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r6,-4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// rlwinm r5,r6,31,25,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7F;
	// lwzx r4,r10,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// sth r5,40(r4)
	PPC_STORE_U16(ctx.r4.u32 + 40, ctx.r5.u16);
	// lbz r11,67(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 67);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stb r3,67(r31)
	PPC_STORE_U8(ctx.r31.u32 + 67, ctx.r3.u8);
	// stb r22,75(r31)
	PPC_STORE_U8(ctx.r31.u32 + 75, ctx.r22.u8);
	// lwz r10,-4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// rlwinm r9,r10,24,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFF;
	// sth r9,78(r31)
	PPC_STORE_U16(ctx.r31.u32 + 78, ctx.r9.u16);
loc_837C925C:
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// bne 0x837c9128
	if (!cr0.eq) goto loc_837C9128;
loc_837C9268:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x837c9598
	if (cr6.eq) goto loc_837C9598;
	// stw r21,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r21.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595150
	ctx.lr = 0x837C9280;
	sub_82595150(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// b 0x837c958c
	goto loc_837C958C;
loc_837C9288:
	// li r22,1
	ctx.r22.s64 = 1;
	// cmpldi cr6,r29,0
	cr6.compare<uint64_t>(ctx.r29.u64, 0, xer);
	// bne cr6,0x837c92e4
	if (!cr6.eq) goto loc_837C92E4;
	// li r21,22
	ctx.r21.s64 = 22;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r21,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r21.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// bl 0x82595718
	ctx.lr = 0x837C92B0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c92dc
	if (cr6.eq) goto loc_837C92DC;
	// lbz r11,3(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// clrlwi r8,r9,5
	ctx.r8.u64 = ctx.r9.u32 & 0x7FFFFFF;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stb r10,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r10.u8);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// b 0x837c9374
	goto loc_837C9374;
loc_837C92DC:
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x837c9374
	goto loc_837C9374;
loc_837C92E4:
	// rldicl r11,r29,61,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u64, 61) & 0x1FFFFFFFFFFFFFFF;
	// lis r10,8191
	ctx.r10.s64 = 536805376;
	// rotlwi r31,r11,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// rlwinm r4,r31,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, xer);
	// ble cr6,0x837c9304
	if (!cr6.gt) goto loc_837C9304;
	// li r4,-1
	ctx.r4.s64 = -1;
loc_837C9304:
	// li r21,22
	ctx.r21.s64 = 22;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r21,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r21.u32);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82595718
	ctx.lr = 0x837C9318;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c9360
	if (cr6.eq) goto loc_837C9360;
	// addic. r11,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r11.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt 0x837c9358
	if (cr0.lt) goto loc_837C9358;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// li r24,0
	ctx.r24.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_837C9338:
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r8,r9,5
	ctx.r8.u64 = ctx.r9.u32 & 0x7FFFFFF;
	// stw r10,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r10.u32);
	// stb r24,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r24.u8);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x837c9338
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837C9338;
loc_837C9358:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x837c9364
	goto loc_837C9364;
loc_837C9360:
	// li r30,0
	ctx.r30.s64 = 0;
loc_837C9364:
	// rotlwi r5,r29,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r29.u32, 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x837C9374;
	sub_831CE980(ctx, base);
loc_837C9374:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x837c93e4
	if (cr6.eq) goto loc_837C93E4;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
loc_837C9380:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// rlwinm r11,r11,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// addi r10,r11,-166
	ctx.r10.s64 = ctx.r11.s64 + -166;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x837c5bf8
	ctx.lr = 0x837C93A0;
	sub_837C5BF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c93d8
	if (cr6.eq) goto loc_837C93D8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stb r9,68(r11)
	PPC_STORE_U8(ctx.r11.u32 + 68, ctx.r9.u8);
	// stb r22,75(r11)
	PPC_STORE_U8(ctx.r11.u32 + 75, ctx.r22.u8);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r10,r5,24,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFFF;
	// addi r4,r10,16
	ctx.r4.s64 = ctx.r10.s64 + 16;
	// sth r4,78(r11)
	PPC_STORE_U16(ctx.r11.u32 + 78, ctx.r4.u16);
loc_837C93D8:
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r6,r6,8
	ctx.r6.s64 = ctx.r6.s64 + 8;
	// bne 0x837c9380
	if (!cr0.eq) goto loc_837C9380;
loc_837C93E4:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x837c9598
	if (cr6.eq) goto loc_837C9598;
	// stw r21,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r21.u32);
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// b 0x837c9580
	goto loc_837C9580;
loc_837C93F8:
	// li r22,1
	ctx.r22.s64 = 1;
	// cmpldi cr6,r29,0
	cr6.compare<uint64_t>(ctx.r29.u64, 0, xer);
	// bne cr6,0x837c944c
	if (!cr6.eq) goto loc_837C944C;
	// li r21,22
	ctx.r21.s64 = 22;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r21,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r21.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// bl 0x82595718
	ctx.lr = 0x837C9420;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c9444
	if (cr6.eq) goto loc_837C9444;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// clrlwi r9,r11,1
	ctx.r9.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x837c94d0
	goto loc_837C94D0;
loc_837C9444:
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x837c94d0
	goto loc_837C94D0;
loc_837C944C:
	// rldicl r11,r29,61,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u64, 61) & 0x1FFFFFFFFFFFFFFF;
	// lis r10,8191
	ctx.r10.s64 = 536805376;
	// rotlwi r31,r11,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// rlwinm r4,r31,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, xer);
	// ble cr6,0x837c946c
	if (!cr6.gt) goto loc_837C946C;
	// li r4,-1
	ctx.r4.s64 = -1;
loc_837C946C:
	// li r21,22
	ctx.r21.s64 = 22;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r21,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r21.u32);
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// bl 0x82595718
	ctx.lr = 0x837C9480;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c94bc
	if (cr6.eq) goto loc_837C94BC;
	// addic. r11,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r11.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt 0x837c94b4
	if (cr0.lt) goto loc_837C94B4;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// li r24,0
	ctx.r24.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_837C94A0:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r24,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r24.u32);
	// clrlwi r9,r10,1
	ctx.r9.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// stwu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x837c94a0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837C94A0;
loc_837C94B4:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x837c94c0
	goto loc_837C94C0;
loc_837C94BC:
	// li r30,0
	ctx.r30.s64 = 0;
loc_837C94C0:
	// rotlwi r5,r29,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r29.u32, 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x837C94D0;
	sub_831CE980(ctx, base);
loc_837C94D0:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x837c9570
	if (cr6.eq) goto loc_837C9570;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
loc_837C94DC:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// rlwinm r11,r11,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// addi r10,r11,-166
	ctx.r10.s64 = ctx.r11.s64 + -166;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x837c5bf8
	ctx.lr = 0x837C94FC;
	sub_837C5BF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c9564
	if (cr6.eq) goto loc_837C9564;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r9,29,27,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1F;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stb r8,74(r11)
	PPC_STORE_U8(ctx.r11.u32 + 74, ctx.r8.u8);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// rlwinm r4,r5,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// stb r4,70(r11)
	PPC_STORE_U8(ctx.r11.u32 + 70, ctx.r4.u8);
	// lwz r3,0(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r10,r3,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x1;
	// stb r10,71(r11)
	PPC_STORE_U8(ctx.r11.u32 + 71, ctx.r10.u8);
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r8,r9,30,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x1;
	// stb r8,72(r11)
	PPC_STORE_U8(ctx.r11.u32 + 72, ctx.r8.u8);
	// lwz r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// clrlwi r5,r7,31
	ctx.r5.u64 = ctx.r7.u32 & 0x1;
	// stb r5,73(r11)
	PPC_STORE_U8(ctx.r11.u32 + 73, ctx.r5.u8);
	// stb r22,75(r11)
	PPC_STORE_U8(ctx.r11.u32 + 75, ctx.r22.u8);
	// lwz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r3,r4,24,20,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFFF;
	// sth r3,78(r11)
	PPC_STORE_U16(ctx.r11.u32 + 78, ctx.r3.u16);
loc_837C9564:
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r6,r6,8
	ctx.r6.s64 = ctx.r6.s64 + 8;
	// bne 0x837c94dc
	if (!cr0.eq) goto loc_837C94DC;
loc_837C9570:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x837c9598
	if (cr6.eq) goto loc_837C9598;
	// stw r21,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r21.u32);
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
loc_837C9580:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595150
	ctx.lr = 0x837C9588;
	sub_82595150(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_837C958C:
	// bl 0x82416268
	ctx.lr = 0x837C9590;
	sub_82416268(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595170
	ctx.lr = 0x837C9598;
	sub_82595170(ctx, base);
loc_837C9598:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837C95A4"))) PPC_WEAK_FUNC(sub_837C95A4);
PPC_FUNC_IMPL(__imp__sub_837C95A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C95A8"))) PPC_WEAK_FUNC(sub_837C95A8);
PPC_FUNC_IMPL(__imp__sub_837C95A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837C95B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r28,r11,-9764
	ctx.r28.s64 = ctx.r11.s64 + -9764;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837C95D0;
	sub_82596FE8(ctx, base);
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,-11208(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11208);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c95f0
	if (cr6.eq) goto loc_837C95F0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r6,120(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x837c8320
	ctx.lr = 0x837C95F0;
	sub_837C8320(ctx, base);
loc_837C95F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103e98
	ctx.lr = 0x837C95F8;
	sub_83103E98(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82597088
	ctx.lr = 0x837C9600;
	sub_82597088(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837C9608"))) PPC_WEAK_FUNC(sub_837C9608);
PPC_FUNC_IMPL(__imp__sub_837C9608) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837C9610;
	__savegprlr_28(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x837c975c
	if (cr6.eq) goto loc_837C975C;
	// cmpldi cr6,r5,0
	cr6.compare<uint64_t>(ctx.r5.u64, 0, xer);
	// ble cr6,0x837c975c
	if (!cr6.gt) goto loc_837C975C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r31,-1
	ctx.r31.s64 = -1;
	// cmpwi cr6,r11,180
	cr6.compare<int32_t>(ctx.r11.s32, 180, xer);
	// blt cr6,0x837c964c
	if (cr6.lt) goto loc_837C964C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_837C964C:
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r11,2956
	ctx.r11.s64 = 2956;
	// lwz r9,-11212(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -11212);
	// addis r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 262144;
	// addi r10,r10,-25588
	ctx.r10.s64 = ctx.r10.s64 + -25588;
loc_837C9664:
	// lbz r5,-1(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x837c967c
	if (!cr6.eq) goto loc_837C967C;
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x837c9690
	if (cr6.eq) goto loc_837C9690;
loc_837C967C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,80
	ctx.r10.s64 = ctx.r10.s64 + 80;
	// cmpwi cr6,r11,3136
	cr6.compare<int32_t>(ctx.r11.s32, 3136, xer);
	// blt cr6,0x837c9664
	if (cr6.lt) goto loc_837C9664;
	// b 0x837c96ac
	goto loc_837C96AC;
loc_837C9690:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stb r8,76(r10)
	PPC_STORE_U8(ctx.r10.u32 + 76, ctx.r8.u8);
loc_837C96AC:
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837c96c4
	if (!cr6.eq) goto loc_837C96C4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_837C96C4:
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837c9710
	if (cr6.eq) goto loc_837C9710;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,-11208(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11208);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c979c
	if (cr6.eq) goto loc_837C979C;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x837c8288
	ctx.lr = 0x837C96F8;
	sub_837C8288(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_837C9710:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825359d8
	ctx.lr = 0x837C971C;
	sub_825359D8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82539ae8
	ctx.lr = 0x837C9724;
	sub_82539AE8(ctx, base);
	// rotlwi r11,r29,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r29.u32, 0);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// add r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8253a610
	ctx.lr = 0x837C9740;
	sub_8253A610(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837c9768
	if (!cr6.eq) goto loc_837C9768;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82450e18
	ctx.lr = 0x837C9754;
	sub_82450E18(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535aa0
	ctx.lr = 0x837C975C;
	sub_82535AA0(ctx, base);
loc_837C975C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_837C9768:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,-11208(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11208);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c978c
	if (cr6.eq) goto loc_837C978C;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x837c8218
	ctx.lr = 0x837C978C;
	sub_837C8218(ctx, base);
loc_837C978C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82450e18
	ctx.lr = 0x837C9794;
	sub_82450E18(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535aa0
	ctx.lr = 0x837C979C;
	sub_82535AA0(ctx, base);
loc_837C979C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837C97B4"))) PPC_WEAK_FUNC(sub_837C97B4);
PPC_FUNC_IMPL(__imp__sub_837C97B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C97B8"))) PPC_WEAK_FUNC(sub_837C97B8);
PPC_FUNC_IMPL(__imp__sub_837C97B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x837c97f0
	if (cr6.lt) goto loc_837C97F0;
	// cmpwi cr6,r4,37
	cr6.compare<int32_t>(ctx.r4.s32, 37, xer);
	// bge cr6,0x837c97f0
	if (!cr6.lt) goto loc_837C97F0;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-7216
	ctx.r9.s64 = ctx.r11.s64 + -7216;
	// lis r8,-31769
	ctx.r8.s64 = -2082013184;
	// addi r7,r8,-6960
	ctx.r7.s64 = ctx.r8.s64 + -6960;
	// lwzx r6,r10,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r5,r6,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r4,r5,r7
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r5.u32 + ctx.r7.u32);
	// std r4,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r4.u64);
	// blr 
	return;
loc_837C97F0:
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// ld r11,-6960(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + -6960);
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C9800"))) PPC_WEAK_FUNC(sub_837C9800);
PPC_FUNC_IMPL(__imp__sub_837C9800) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmpwi cr6,r3,41
	cr6.compare<int32_t>(ctx.r3.s32, 41, xer);
	// bge cr6,0x837c9818
	if (!cr6.lt) goto loc_837C9818;
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// addi r11,r11,-14764
	ctx.r11.s64 = ctx.r11.s64 + -14764;
	// addi r3,r11,-100
	ctx.r3.s64 = ctx.r11.s64 + -100;
	// blr 
	return;
loc_837C9818:
	// cmpwi cr6,r3,44
	cr6.compare<int32_t>(ctx.r3.s32, 44, xer);
	// bge cr6,0x837c9830
	if (!cr6.lt) goto loc_837C9830;
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// addi r11,r11,-14764
	ctx.r11.s64 = ctx.r11.s64 + -14764;
	// addi r3,r11,-52
	ctx.r3.s64 = ctx.r11.s64 + -52;
	// blr 
	return;
loc_837C9830:
	// li r11,169
	ctx.r11.s64 = 169;
	// rlwinm r10,r3,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// subfc r9,r11,r3
	xer.ca = ctx.r3.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r3.s64 - ctx.r11.s64;
	// lis r8,-32211
	ctx.r8.s64 = -2110980096;
	// rlwinm r7,r11,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r6,r8,-14764
	ctx.r6.s64 = ctx.r8.s64 + -14764;
	// subfe r5,r10,r7
	temp.u8 = (~ctx.r10.u32 + ctx.r7.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r5,r6
	ctx.r3.u64 = ctx.r5.u64 & ctx.r6.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C9854"))) PPC_WEAK_FUNC(sub_837C9854);
PPC_FUNC_IMPL(__imp__sub_837C9854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C9858"))) PPC_WEAK_FUNC(sub_837C9858);
PPC_FUNC_IMPL(__imp__sub_837C9858) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmpwi cr6,r3,41
	cr6.compare<int32_t>(ctx.r3.s32, 41, xer);
	// bge cr6,0x837c9870
	if (!cr6.lt) goto loc_837C9870;
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// addi r11,r11,-14660
	ctx.r11.s64 = ctx.r11.s64 + -14660;
	// addi r3,r11,-48
	ctx.r3.s64 = ctx.r11.s64 + -48;
	// blr 
	return;
loc_837C9870:
	// li r11,44
	ctx.r11.s64 = 44;
	// rlwinm r10,r3,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// subfc r9,r11,r3
	xer.ca = ctx.r3.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r3.s64 - ctx.r11.s64;
	// lis r8,-32211
	ctx.r8.s64 = -2110980096;
	// rlwinm r7,r11,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r6,r8,-14660
	ctx.r6.s64 = ctx.r8.s64 + -14660;
	// subfe r5,r10,r7
	temp.u8 = (~ctx.r10.u32 + ctx.r7.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r5,r6
	ctx.r3.u64 = ctx.r5.u64 & ctx.r6.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C9894"))) PPC_WEAK_FUNC(sub_837C9894);
PPC_FUNC_IMPL(__imp__sub_837C9894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C9898"))) PPC_WEAK_FUNC(sub_837C9898);
PPC_FUNC_IMPL(__imp__sub_837C9898) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmpwi cr6,r3,82
	cr6.compare<int32_t>(ctx.r3.s32, 82, xer);
	// bge cr6,0x837c98b0
	if (!cr6.lt) goto loc_837C98B0;
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// addi r11,r11,-14560
	ctx.r11.s64 = ctx.r11.s64 + -14560;
	// addi r3,r11,-48
	ctx.r3.s64 = ctx.r11.s64 + -48;
	// blr 
	return;
loc_837C98B0:
	// li r11,88
	ctx.r11.s64 = 88;
	// rlwinm r10,r3,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// subfc r9,r11,r3
	xer.ca = ctx.r3.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r3.s64 - ctx.r11.s64;
	// lis r8,-32211
	ctx.r8.s64 = -2110980096;
	// rlwinm r7,r11,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r6,r8,-14560
	ctx.r6.s64 = ctx.r8.s64 + -14560;
	// subfe r5,r10,r7
	temp.u8 = (~ctx.r10.u32 + ctx.r7.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r5,r6
	ctx.r3.u64 = ctx.r5.u64 & ctx.r6.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C98D4"))) PPC_WEAK_FUNC(sub_837C98D4);
PPC_FUNC_IMPL(__imp__sub_837C98D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C98D8"))) PPC_WEAK_FUNC(sub_837C98D8);
PPC_FUNC_IMPL(__imp__sub_837C98D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmpwi cr6,r3,41
	cr6.compare<int32_t>(ctx.r3.s32, 41, xer);
	// bge cr6,0x837c98f0
	if (!cr6.lt) goto loc_837C98F0;
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// addi r11,r11,-14460
	ctx.r11.s64 = ctx.r11.s64 + -14460;
	// addi r3,r11,-48
	ctx.r3.s64 = ctx.r11.s64 + -48;
	// blr 
	return;
loc_837C98F0:
	// li r11,44
	ctx.r11.s64 = 44;
	// rlwinm r10,r3,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// subfc r9,r11,r3
	xer.ca = ctx.r3.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r3.s64 - ctx.r11.s64;
	// lis r8,-32211
	ctx.r8.s64 = -2110980096;
	// rlwinm r7,r11,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r6,r8,-14460
	ctx.r6.s64 = ctx.r8.s64 + -14460;
	// subfe r5,r10,r7
	temp.u8 = (~ctx.r10.u32 + ctx.r7.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r5,r6
	ctx.r3.u64 = ctx.r5.u64 & ctx.r6.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C9914"))) PPC_WEAK_FUNC(sub_837C9914);
PPC_FUNC_IMPL(__imp__sub_837C9914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C9918"))) PPC_WEAK_FUNC(sub_837C9918);
PPC_FUNC_IMPL(__imp__sub_837C9918) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// mulli r10,r3,28
	ctx.r10.s64 = ctx.r3.s64 * 28;
	// addi r11,r11,-13992
	ctx.r11.s64 = ctx.r11.s64 + -13992;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C992C"))) PPC_WEAK_FUNC(sub_837C992C);
PPC_FUNC_IMPL(__imp__sub_837C992C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C9930"))) PPC_WEAK_FUNC(sub_837C9930);
PPC_FUNC_IMPL(__imp__sub_837C9930) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r3,41
	cr6.compare<int32_t>(ctx.r3.s32, 41, xer);
	// bge cr6,0x837c995c
	if (!cr6.lt) goto loc_837C995C;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-5600
	ctx.r9.s64 = ctx.r11.s64 + -5600;
	// lis r8,-31769
	ctx.r8.s64 = -2082013184;
	// addi r7,r8,-4008
	ctx.r7.s64 = ctx.r8.s64 + -4008;
	// lwzx r6,r10,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r5,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// blr 
	return;
loc_837C995C:
	// cmpwi cr6,r3,44
	cr6.compare<int32_t>(ctx.r3.s32, 44, xer);
	// bge cr6,0x837c998c
	if (!cr6.lt) goto loc_837C998C;
	// addi r11,r3,-41
	ctx.r11.s64 = ctx.r3.s64 + -41;
	// lis r10,-31769
	ctx.r10.s64 = -2082013184;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-5612
	ctx.r8.s64 = ctx.r10.s64 + -5612;
	// lis r7,-31769
	ctx.r7.s64 = -2082013184;
	// addi r6,r7,-5672
	ctx.r6.s64 = ctx.r7.s64 + -5672;
	// lwzx r5,r9,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r4,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// blr 
	return;
loc_837C998C:
	// cmpwi cr6,r3,169
	cr6.compare<int32_t>(ctx.r3.s32, 169, xer);
	// bge cr6,0x837c99ac
	if (!cr6.lt) goto loc_837C99AC;
	// addi r11,r3,-44
	ctx.r11.s64 = ctx.r3.s64 + -44;
	// lis r10,-31769
	ctx.r10.s64 = -2082013184;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-4616
	ctx.r8.s64 = ctx.r10.s64 + -4616;
	// lwzx r3,r9,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// blr 
	return;
loc_837C99AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C99B4"))) PPC_WEAK_FUNC(sub_837C99B4);
PPC_FUNC_IMPL(__imp__sub_837C99B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C99B8"))) PPC_WEAK_FUNC(sub_837C99B8);
PPC_FUNC_IMPL(__imp__sub_837C99B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r3,41
	cr6.compare<int32_t>(ctx.r3.s32, 41, xer);
	// bge cr6,0x837c99e4
	if (!cr6.lt) goto loc_837C99E4;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-5424
	ctx.r9.s64 = ctx.r11.s64 + -5424;
	// lis r8,-31769
	ctx.r8.s64 = -2082013184;
	// addi r7,r8,-4008
	ctx.r7.s64 = ctx.r8.s64 + -4008;
	// lwzx r6,r10,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r5,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// blr 
	return;
loc_837C99E4:
	// cmpwi cr6,r3,44
	cr6.compare<int32_t>(ctx.r3.s32, 44, xer);
	// bge cr6,0x837c9a14
	if (!cr6.lt) goto loc_837C9A14;
	// addi r11,r3,-41
	ctx.r11.s64 = ctx.r3.s64 + -41;
	// lis r10,-31769
	ctx.r10.s64 = -2082013184;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-5436
	ctx.r8.s64 = ctx.r10.s64 + -5436;
	// lis r7,-31769
	ctx.r7.s64 = -2082013184;
	// addi r6,r7,-5672
	ctx.r6.s64 = ctx.r7.s64 + -5672;
	// lwzx r5,r9,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r4,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// blr 
	return;
loc_837C9A14:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C9A1C"))) PPC_WEAK_FUNC(sub_837C9A1C);
PPC_FUNC_IMPL(__imp__sub_837C9A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C9A20"))) PPC_WEAK_FUNC(sub_837C9A20);
PPC_FUNC_IMPL(__imp__sub_837C9A20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r3,82
	cr6.compare<int32_t>(ctx.r3.s32, 82, xer);
	// bge cr6,0x837c9a4c
	if (!cr6.lt) goto loc_837C9A4C;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-5232
	ctx.r9.s64 = ctx.r11.s64 + -5232;
	// lis r8,-31769
	ctx.r8.s64 = -2082013184;
	// addi r7,r8,-4008
	ctx.r7.s64 = ctx.r8.s64 + -4008;
	// lwzx r6,r10,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r5,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// blr 
	return;
loc_837C9A4C:
	// cmpwi cr6,r3,88
	cr6.compare<int32_t>(ctx.r3.s32, 88, xer);
	// bge cr6,0x837c9a7c
	if (!cr6.lt) goto loc_837C9A7C;
	// addi r11,r3,-82
	ctx.r11.s64 = ctx.r3.s64 + -82;
	// lis r10,-31769
	ctx.r10.s64 = -2082013184;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-5260
	ctx.r8.s64 = ctx.r10.s64 + -5260;
	// lis r7,-31769
	ctx.r7.s64 = -2082013184;
	// addi r6,r7,-5672
	ctx.r6.s64 = ctx.r7.s64 + -5672;
	// lwzx r5,r9,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r4,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// blr 
	return;
loc_837C9A7C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C9A84"))) PPC_WEAK_FUNC(sub_837C9A84);
PPC_FUNC_IMPL(__imp__sub_837C9A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C9A88"))) PPC_WEAK_FUNC(sub_837C9A88);
PPC_FUNC_IMPL(__imp__sub_837C9A88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r3,41
	cr6.compare<int32_t>(ctx.r3.s32, 41, xer);
	// bge cr6,0x837c9ab4
	if (!cr6.lt) goto loc_837C9AB4;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-4888
	ctx.r9.s64 = ctx.r11.s64 + -4888;
	// lis r8,-31769
	ctx.r8.s64 = -2082013184;
	// addi r7,r8,-4008
	ctx.r7.s64 = ctx.r8.s64 + -4008;
	// lwzx r6,r10,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r5,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// blr 
	return;
loc_837C9AB4:
	// cmpwi cr6,r3,44
	cr6.compare<int32_t>(ctx.r3.s32, 44, xer);
	// bge cr6,0x837c9ae4
	if (!cr6.lt) goto loc_837C9AE4;
	// addi r11,r3,-41
	ctx.r11.s64 = ctx.r3.s64 + -41;
	// lis r10,-31769
	ctx.r10.s64 = -2082013184;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-4904
	ctx.r8.s64 = ctx.r10.s64 + -4904;
	// lis r7,-31769
	ctx.r7.s64 = -2082013184;
	// addi r6,r7,-5672
	ctx.r6.s64 = ctx.r7.s64 + -5672;
	// lwzx r5,r9,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r4,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// blr 
	return;
loc_837C9AE4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C9AEC"))) PPC_WEAK_FUNC(sub_837C9AEC);
PPC_FUNC_IMPL(__imp__sub_837C9AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C9AF0"))) PPC_WEAK_FUNC(sub_837C9AF0);
PPC_FUNC_IMPL(__imp__sub_837C9AF0) {
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
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x837b1910
	ctx.lr = 0x837C9B10;
	sub_837B1910(ctx, base);
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// stw r30,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-3592
	ctx.r10.s64 = ctx.r11.s64 + -3592;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_837C9B3C"))) PPC_WEAK_FUNC(sub_837C9B3C);
PPC_FUNC_IMPL(__imp__sub_837C9B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C9B40"))) PPC_WEAK_FUNC(sub_837C9B40);
PPC_FUNC_IMPL(__imp__sub_837C9B40) {
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
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-3592
	ctx.r10.s64 = ctx.r11.s64 + -3592;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x837b0e38
	ctx.lr = 0x837C9B6C;
	sub_837B0E38(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x837c9b8c
	if (cr6.eq) goto loc_837C9B8C;
	// bl 0x82595188
	ctx.lr = 0x837C9B7C;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x837C9B8C;
	sub_825952B8(ctx, base);
loc_837C9B8C:
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

__attribute__((alias("__imp__sub_837C9BA8"))) PPC_WEAK_FUNC(sub_837C9BA8);
PPC_FUNC_IMPL(__imp__sub_837C9BA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_837C9BC0"))) PPC_WEAK_FUNC(sub_837C9BC0);
PPC_FUNC_IMPL(__imp__sub_837C9BC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C9BC4"))) PPC_WEAK_FUNC(sub_837C9BC4);
PPC_FUNC_IMPL(__imp__sub_837C9BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C9BC8"))) PPC_WEAK_FUNC(sub_837C9BC8);
PPC_FUNC_IMPL(__imp__sub_837C9BC8) {
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
	// lwz r3,100(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c9bec
	if (cr6.eq) goto loc_837C9BEC;
	// bl 0x837cfd50
	ctx.lr = 0x837C9BEC;
	sub_837CFD50(ctx, base);
loc_837C9BEC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103260
	ctx.lr = 0x837C9BF4;
	sub_83103260(ctx, base);
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

__attribute__((alias("__imp__sub_837C9C08"))) PPC_WEAK_FUNC(sub_837C9C08);
PPC_FUNC_IMPL(__imp__sub_837C9C08) {
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
	// lwz r3,100(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c9c34
	if (cr6.eq) goto loc_837C9C34;
	// bl 0x837cf330
	ctx.lr = 0x837C9C24;
	sub_837CF330(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837c9c38
	if (!cr6.eq) goto loc_837C9C38;
loc_837C9C34:
	// li r3,0
	ctx.r3.s64 = 0;
loc_837C9C38:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C9C48"))) PPC_WEAK_FUNC(sub_837C9C48);
PPC_FUNC_IMPL(__imp__sub_837C9C48) {
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
	// lwz r3,100(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c9c74
	if (cr6.eq) goto loc_837C9C74;
	// bl 0x837cf448
	ctx.lr = 0x837C9C64;
	sub_837CF448(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837c9c78
	if (!cr6.eq) goto loc_837C9C78;
loc_837C9C74:
	// li r3,0
	ctx.r3.s64 = 0;
loc_837C9C78:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C9C88"))) PPC_WEAK_FUNC(sub_837C9C88);
PPC_FUNC_IMPL(__imp__sub_837C9C88) {
	PPC_FUNC_PROLOGUE();
	// b 0x83b47510
	sub_83B47510(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837C9C8C"))) PPC_WEAK_FUNC(sub_837C9C8C);
PPC_FUNC_IMPL(__imp__sub_837C9C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C9C90"))) PPC_WEAK_FUNC(sub_837C9C90);
PPC_FUNC_IMPL(__imp__sub_837C9C90) {
	PPC_FUNC_PROLOGUE();
	// b 0x83b47560
	sub_83B47560(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837C9C94"))) PPC_WEAK_FUNC(sub_837C9C94);
PPC_FUNC_IMPL(__imp__sub_837C9C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C9C98"))) PPC_WEAK_FUNC(sub_837C9C98);
PPC_FUNC_IMPL(__imp__sub_837C9C98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r9,156(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C9CB8"))) PPC_WEAK_FUNC(sub_837C9CB8);
PPC_FUNC_IMPL(__imp__sub_837C9CB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// stb r4,82(r11)
	PPC_STORE_U8(ctx.r11.u32 + 82, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C9CCC"))) PPC_WEAK_FUNC(sub_837C9CCC);
PPC_FUNC_IMPL(__imp__sub_837C9CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C9CD0"))) PPC_WEAK_FUNC(sub_837C9CD0);
PPC_FUNC_IMPL(__imp__sub_837C9CD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,544(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 544);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C9CE8"))) PPC_WEAK_FUNC(sub_837C9CE8);
PPC_FUNC_IMPL(__imp__sub_837C9CE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,100(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x837cede8
	sub_837CEDE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837C9CF8"))) PPC_WEAK_FUNC(sub_837C9CF8);
PPC_FUNC_IMPL(__imp__sub_837C9CF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C9CFC"))) PPC_WEAK_FUNC(sub_837C9CFC);
PPC_FUNC_IMPL(__imp__sub_837C9CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C9D00"))) PPC_WEAK_FUNC(sub_837C9D00);
PPC_FUNC_IMPL(__imp__sub_837C9D00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,100(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x837cedf8
	sub_837CEDF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837C9D10"))) PPC_WEAK_FUNC(sub_837C9D10);
PPC_FUNC_IMPL(__imp__sub_837C9D10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C9D14"))) PPC_WEAK_FUNC(sub_837C9D14);
PPC_FUNC_IMPL(__imp__sub_837C9D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C9D18"))) PPC_WEAK_FUNC(sub_837C9D18);
PPC_FUNC_IMPL(__imp__sub_837C9D18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x837c9d64
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837C9D64;
	// bdzf 4*cr6+eq,0x837c9d80
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837C9D80;
	// bdzf 4*cr6+eq,0x837c9d5c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837C9D5C;
	// bdzf 4*cr6+eq,0x837c9d64
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837C9D64;
	// bdzf 4*cr6+eq,0x837c9d80
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837C9D80;
	// bdzf 4*cr6+eq,0x837c9d6c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837C9D6C;
	// bdzf 4*cr6+eq,0x837c9d74
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837C9D74;
	// bne cr6,0x837c9d7c
	if (!cr6.eq) goto loc_837C9D7C;
loc_837C9D5C:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_837C9D64:
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
loc_837C9D6C:
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
loc_837C9D74:
	// li r3,16
	ctx.r3.s64 = 16;
	// blr 
	return;
loc_837C9D7C:
	// li r3,4
	ctx.r3.s64 = 4;
loc_837C9D80:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C9D84"))) PPC_WEAK_FUNC(sub_837C9D84);
PPC_FUNC_IMPL(__imp__sub_837C9D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C9D88"))) PPC_WEAK_FUNC(sub_837C9D88);
PPC_FUNC_IMPL(__imp__sub_837C9D88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,100(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x837d1148
	sub_837D1148(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837C9D98"))) PPC_WEAK_FUNC(sub_837C9D98);
PPC_FUNC_IMPL(__imp__sub_837C9D98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C9D9C"))) PPC_WEAK_FUNC(sub_837C9D9C);
PPC_FUNC_IMPL(__imp__sub_837C9D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C9DA0"))) PPC_WEAK_FUNC(sub_837C9DA0);
PPC_FUNC_IMPL(__imp__sub_837C9DA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,100(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x837d1208
	sub_837D1208(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837C9DB0"))) PPC_WEAK_FUNC(sub_837C9DB0);
PPC_FUNC_IMPL(__imp__sub_837C9DB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C9DB4"))) PPC_WEAK_FUNC(sub_837C9DB4);
PPC_FUNC_IMPL(__imp__sub_837C9DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C9DB8"))) PPC_WEAK_FUNC(sub_837C9DB8);
PPC_FUNC_IMPL(__imp__sub_837C9DB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,100(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x837d1278
	sub_837D1278(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837C9DC8"))) PPC_WEAK_FUNC(sub_837C9DC8);
PPC_FUNC_IMPL(__imp__sub_837C9DC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C9DCC"))) PPC_WEAK_FUNC(sub_837C9DCC);
PPC_FUNC_IMPL(__imp__sub_837C9DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C9DD0"))) PPC_WEAK_FUNC(sub_837C9DD0);
PPC_FUNC_IMPL(__imp__sub_837C9DD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,100(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x837d12f0
	sub_837D12F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837C9DE0"))) PPC_WEAK_FUNC(sub_837C9DE0);
PPC_FUNC_IMPL(__imp__sub_837C9DE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C9DE4"))) PPC_WEAK_FUNC(sub_837C9DE4);
PPC_FUNC_IMPL(__imp__sub_837C9DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C9DE8"))) PPC_WEAK_FUNC(sub_837C9DE8);
PPC_FUNC_IMPL(__imp__sub_837C9DE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,100(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x837c9df8
	if (!cr6.eq) goto loc_837C9DF8;
	// blr 
	return;
loc_837C9DF8:
	// b 0x837d1368
	sub_837D1368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837C9DFC"))) PPC_WEAK_FUNC(sub_837C9DFC);
PPC_FUNC_IMPL(__imp__sub_837C9DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C9E00"))) PPC_WEAK_FUNC(sub_837C9E00);
PPC_FUNC_IMPL(__imp__sub_837C9E00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,100(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c9e10
	if (cr6.eq) goto loc_837C9E10;
	// b 0x837d13b0
	sub_837D13B0(ctx, base);
	return;
loc_837C9E10:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C9E18"))) PPC_WEAK_FUNC(sub_837C9E18);
PPC_FUNC_IMPL(__imp__sub_837C9E18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,100(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x837d1450
	sub_837D1450(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837C9E28"))) PPC_WEAK_FUNC(sub_837C9E28);
PPC_FUNC_IMPL(__imp__sub_837C9E28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C9E2C"))) PPC_WEAK_FUNC(sub_837C9E2C);
PPC_FUNC_IMPL(__imp__sub_837C9E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C9E30"))) PPC_WEAK_FUNC(sub_837C9E30);
PPC_FUNC_IMPL(__imp__sub_837C9E30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,100(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x837cedc0
	sub_837CEDC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837C9E40"))) PPC_WEAK_FUNC(sub_837C9E40);
PPC_FUNC_IMPL(__imp__sub_837C9E40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C9E44"))) PPC_WEAK_FUNC(sub_837C9E44);
PPC_FUNC_IMPL(__imp__sub_837C9E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C9E48"))) PPC_WEAK_FUNC(sub_837C9E48);
PPC_FUNC_IMPL(__imp__sub_837C9E48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,100(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x837cedc8
	sub_837CEDC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837C9E58"))) PPC_WEAK_FUNC(sub_837C9E58);
PPC_FUNC_IMPL(__imp__sub_837C9E58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C9E5C"))) PPC_WEAK_FUNC(sub_837C9E5C);
PPC_FUNC_IMPL(__imp__sub_837C9E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C9E60"))) PPC_WEAK_FUNC(sub_837C9E60);
PPC_FUNC_IMPL(__imp__sub_837C9E60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,100(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// lwz r11,-2876(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2876);
	// xor r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	// rlwinm r9,r10,0,0,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x837c9e98
	if (!cr6.eq) goto loc_837C9E98;
	// xor r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837c9e9c
	if (cr6.eq) goto loc_837C9E9C;
loc_837C9E98:
	// li r11,0
	ctx.r11.s64 = 0;
loc_837C9E9C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// cmpwi cr6,r5,2
	cr6.compare<int32_t>(ctx.r5.s32, 2, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// cmplwi cr6,r6,2
	cr6.compare<uint32_t>(ctx.r6.u32, 2, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// cmplwi cr6,r7,9
	cr6.compare<uint32_t>(ctx.r7.u32, 9, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// b 0x837d1628
	sub_837D1628(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837C9EC4"))) PPC_WEAK_FUNC(sub_837C9EC4);
PPC_FUNC_IMPL(__imp__sub_837C9EC4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C9EC8"))) PPC_WEAK_FUNC(sub_837C9EC8);
PPC_FUNC_IMPL(__imp__sub_837C9EC8) {
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
	// lwz r3,100(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// std r4,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r4.u64);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c9f48
	if (cr6.eq) goto loc_837C9F48;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r11,r11,-2924
	ctx.r11.s64 = ctx.r11.s64 + -2924;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837c9f08
	if (!cr6.eq) goto loc_837C9F08;
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x837c9f30
	goto loc_837C9F30;
loc_837C9F08:
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 120);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bne cr6,0x837c9f28
	if (!cr6.eq) goto loc_837C9F28;
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x837c9f2c
	if (cr6.eq) goto loc_837C9F2C;
loc_837C9F28:
	// li r11,0
	ctx.r11.s64 = 0;
loc_837C9F2C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_837C9F30:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837c9f48
	if (!cr6.eq) goto loc_837C9F48;
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// bge cr6,0x837c9f48
	if (!cr6.lt) goto loc_837C9F48;
	// bl 0x837d2c48
	ctx.lr = 0x837C9F48;
	sub_837D2C48(ctx, base);
loc_837C9F48:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C9F58"))) PPC_WEAK_FUNC(sub_837C9F58);
PPC_FUNC_IMPL(__imp__sub_837C9F58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,100(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x837d28a8
	sub_837D28A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837C9F68"))) PPC_WEAK_FUNC(sub_837C9F68);
PPC_FUNC_IMPL(__imp__sub_837C9F68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C9F6C"))) PPC_WEAK_FUNC(sub_837C9F6C);
PPC_FUNC_IMPL(__imp__sub_837C9F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C9F70"))) PPC_WEAK_FUNC(sub_837C9F70);
PPC_FUNC_IMPL(__imp__sub_837C9F70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,100(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x837d2968
	sub_837D2968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837C9F84"))) PPC_WEAK_FUNC(sub_837C9F84);
PPC_FUNC_IMPL(__imp__sub_837C9F84) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C9F88"))) PPC_WEAK_FUNC(sub_837C9F88);
PPC_FUNC_IMPL(__imp__sub_837C9F88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,100(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x837d2ad8
	sub_837D2AD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837C9F98"))) PPC_WEAK_FUNC(sub_837C9F98);
PPC_FUNC_IMPL(__imp__sub_837C9F98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C9F9C"))) PPC_WEAK_FUNC(sub_837C9F9C);
PPC_FUNC_IMPL(__imp__sub_837C9F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C9FA0"))) PPC_WEAK_FUNC(sub_837C9FA0);
PPC_FUNC_IMPL(__imp__sub_837C9FA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,100(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x837d2ba0
	sub_837D2BA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837C9FB0"))) PPC_WEAK_FUNC(sub_837C9FB0);
PPC_FUNC_IMPL(__imp__sub_837C9FB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C9FB4"))) PPC_WEAK_FUNC(sub_837C9FB4);
PPC_FUNC_IMPL(__imp__sub_837C9FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C9FB8"))) PPC_WEAK_FUNC(sub_837C9FB8);
PPC_FUNC_IMPL(__imp__sub_837C9FB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r3,100(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c9fc8
	if (cr6.eq) goto loc_837C9FC8;
	// b 0x837d1688
	sub_837D1688(ctx, base);
	return;
loc_837C9FC8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C9FD4"))) PPC_WEAK_FUNC(sub_837C9FD4);
PPC_FUNC_IMPL(__imp__sub_837C9FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C9FD8"))) PPC_WEAK_FUNC(sub_837C9FD8);
PPC_FUNC_IMPL(__imp__sub_837C9FD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,100(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x837d16e0
	sub_837D16E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837C9FE8"))) PPC_WEAK_FUNC(sub_837C9FE8);
PPC_FUNC_IMPL(__imp__sub_837C9FE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C9FEC"))) PPC_WEAK_FUNC(sub_837C9FEC);
PPC_FUNC_IMPL(__imp__sub_837C9FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C9FF0"))) PPC_WEAK_FUNC(sub_837C9FF0);
PPC_FUNC_IMPL(__imp__sub_837C9FF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,100(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// cmpwi cr6,r4,44
	cr6.compare<int32_t>(ctx.r4.s32, 44, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// b 0x837d1768
	sub_837D1768(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837CA010"))) PPC_WEAK_FUNC(sub_837CA010);
PPC_FUNC_IMPL(__imp__sub_837CA010) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837CA014"))) PPC_WEAK_FUNC(sub_837CA014);
PPC_FUNC_IMPL(__imp__sub_837CA014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837CA018"))) PPC_WEAK_FUNC(sub_837CA018);
PPC_FUNC_IMPL(__imp__sub_837CA018) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,100(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// cmpwi cr6,r4,44
	cr6.compare<int32_t>(ctx.r4.s32, 44, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// cmpwi cr6,r4,165
	cr6.compare<int32_t>(ctx.r4.s32, 165, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// b 0x837d1898
	sub_837D1898(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837CA038"))) PPC_WEAK_FUNC(sub_837CA038);
PPC_FUNC_IMPL(__imp__sub_837CA038) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837CA03C"))) PPC_WEAK_FUNC(sub_837CA03C);
PPC_FUNC_IMPL(__imp__sub_837CA03C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837CA040"))) PPC_WEAK_FUNC(sub_837CA040);
PPC_FUNC_IMPL(__imp__sub_837CA040) {
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
	// lwz r10,100(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837ca084
	if (cr6.eq) goto loc_837CA084;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x837ca084
	if (cr6.lt) goto loc_837CA084;
	// cmpwi cr6,r4,13
	cr6.compare<int32_t>(ctx.r4.s32, 13, xer);
	// bgt cr6,0x837ca084
	if (cr6.gt) goto loc_837CA084;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// blt cr6,0x837ca084
	if (cr6.lt) goto loc_837CA084;
	// bl 0x837c9d18
	ctx.lr = 0x837CA074;
	sub_837C9D18(ctx, base);
	// cmplw cr6,r5,r3
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r3.u32, xer);
	// bge cr6,0x837ca084
	if (!cr6.lt) goto loc_837CA084;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x837d19c8
	ctx.lr = 0x837CA084;
	sub_837D19C8(ctx, base);
loc_837CA084:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837CA094"))) PPC_WEAK_FUNC(sub_837CA094);
PPC_FUNC_IMPL(__imp__sub_837CA094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837CA098"))) PPC_WEAK_FUNC(sub_837CA098);
PPC_FUNC_IMPL(__imp__sub_837CA098) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,100(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x837ca0b4
	if (cr6.eq) goto loc_837CA0B4;
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_837CA0B4:
	// b 0x837d1b10
	sub_837D1B10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837CA0B8"))) PPC_WEAK_FUNC(sub_837CA0B8);
PPC_FUNC_IMPL(__imp__sub_837CA0B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837CA0BC"))) PPC_WEAK_FUNC(sub_837CA0BC);
PPC_FUNC_IMPL(__imp__sub_837CA0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837CA0C0"))) PPC_WEAK_FUNC(sub_837CA0C0);
PPC_FUNC_IMPL(__imp__sub_837CA0C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,100(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// cmpwi cr6,r4,51
	cr6.compare<int32_t>(ctx.r4.s32, 51, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// b 0x837d1bd8
	sub_837D1BD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837CA0E0"))) PPC_WEAK_FUNC(sub_837CA0E0);
PPC_FUNC_IMPL(__imp__sub_837CA0E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837CA0E4"))) PPC_WEAK_FUNC(sub_837CA0E4);
PPC_FUNC_IMPL(__imp__sub_837CA0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837CA0E8"))) PPC_WEAK_FUNC(sub_837CA0E8);
PPC_FUNC_IMPL(__imp__sub_837CA0E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,100(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x837d1d20
	sub_837D1D20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837CA0F8"))) PPC_WEAK_FUNC(sub_837CA0F8);
PPC_FUNC_IMPL(__imp__sub_837CA0F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837CA0FC"))) PPC_WEAK_FUNC(sub_837CA0FC);
PPC_FUNC_IMPL(__imp__sub_837CA0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837CA100"))) PPC_WEAK_FUNC(sub_837CA100);
PPC_FUNC_IMPL(__imp__sub_837CA100) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,100(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x837d1ea8
	sub_837D1EA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837CA110"))) PPC_WEAK_FUNC(sub_837CA110);
PPC_FUNC_IMPL(__imp__sub_837CA110) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837CA114"))) PPC_WEAK_FUNC(sub_837CA114);
PPC_FUNC_IMPL(__imp__sub_837CA114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837CA118"))) PPC_WEAK_FUNC(sub_837CA118);
PPC_FUNC_IMPL(__imp__sub_837CA118) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,100(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x837d1fa8
	sub_837D1FA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837CA128"))) PPC_WEAK_FUNC(sub_837CA128);
PPC_FUNC_IMPL(__imp__sub_837CA128) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837CA12C"))) PPC_WEAK_FUNC(sub_837CA12C);
PPC_FUNC_IMPL(__imp__sub_837CA12C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837CA130"))) PPC_WEAK_FUNC(sub_837CA130);
PPC_FUNC_IMPL(__imp__sub_837CA130) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,100(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x837d2040
	sub_837D2040(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837CA140"))) PPC_WEAK_FUNC(sub_837CA140);
PPC_FUNC_IMPL(__imp__sub_837CA140) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837CA144"))) PPC_WEAK_FUNC(sub_837CA144);
PPC_FUNC_IMPL(__imp__sub_837CA144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837CA148"))) PPC_WEAK_FUNC(sub_837CA148);
PPC_FUNC_IMPL(__imp__sub_837CA148) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,100(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x837d2140
	sub_837D2140(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837CA158"))) PPC_WEAK_FUNC(sub_837CA158);
PPC_FUNC_IMPL(__imp__sub_837CA158) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837CA15C"))) PPC_WEAK_FUNC(sub_837CA15C);
PPC_FUNC_IMPL(__imp__sub_837CA15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837CA160"))) PPC_WEAK_FUNC(sub_837CA160);
PPC_FUNC_IMPL(__imp__sub_837CA160) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,100(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x837d21b0
	sub_837D21B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837CA170"))) PPC_WEAK_FUNC(sub_837CA170);
PPC_FUNC_IMPL(__imp__sub_837CA170) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837CA174"))) PPC_WEAK_FUNC(sub_837CA174);
PPC_FUNC_IMPL(__imp__sub_837CA174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837CA178"))) PPC_WEAK_FUNC(sub_837CA178);
PPC_FUNC_IMPL(__imp__sub_837CA178) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,100(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x837d2280
	sub_837D2280(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837CA188"))) PPC_WEAK_FUNC(sub_837CA188);
PPC_FUNC_IMPL(__imp__sub_837CA188) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837CA18C"))) PPC_WEAK_FUNC(sub_837CA18C);
PPC_FUNC_IMPL(__imp__sub_837CA18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837CA190"))) PPC_WEAK_FUNC(sub_837CA190);
PPC_FUNC_IMPL(__imp__sub_837CA190) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,100(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x837d1c60
	sub_837D1C60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837CA1A0"))) PPC_WEAK_FUNC(sub_837CA1A0);
PPC_FUNC_IMPL(__imp__sub_837CA1A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837CA1A4"))) PPC_WEAK_FUNC(sub_837CA1A4);
PPC_FUNC_IMPL(__imp__sub_837CA1A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837CA1A8"))) PPC_WEAK_FUNC(sub_837CA1A8);
PPC_FUNC_IMPL(__imp__sub_837CA1A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,100(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x837d1e10
	sub_837D1E10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837CA1B8"))) PPC_WEAK_FUNC(sub_837CA1B8);
PPC_FUNC_IMPL(__imp__sub_837CA1B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837CA1BC"))) PPC_WEAK_FUNC(sub_837CA1BC);
PPC_FUNC_IMPL(__imp__sub_837CA1BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837CA1C0"))) PPC_WEAK_FUNC(sub_837CA1C0);
PPC_FUNC_IMPL(__imp__sub_837CA1C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,100(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x837d23e8
	sub_837D23E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837CA1D0"))) PPC_WEAK_FUNC(sub_837CA1D0);
PPC_FUNC_IMPL(__imp__sub_837CA1D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837CA1D4"))) PPC_WEAK_FUNC(sub_837CA1D4);
PPC_FUNC_IMPL(__imp__sub_837CA1D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837CA1D8"))) PPC_WEAK_FUNC(sub_837CA1D8);
PPC_FUNC_IMPL(__imp__sub_837CA1D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,100(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x837d24b8
	sub_837D24B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837CA1E8"))) PPC_WEAK_FUNC(sub_837CA1E8);
PPC_FUNC_IMPL(__imp__sub_837CA1E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837CA1EC"))) PPC_WEAK_FUNC(sub_837CA1EC);
PPC_FUNC_IMPL(__imp__sub_837CA1EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837CA1F0"))) PPC_WEAK_FUNC(sub_837CA1F0);
PPC_FUNC_IMPL(__imp__sub_837CA1F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,100(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x837d2610
	sub_837D2610(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837CA200"))) PPC_WEAK_FUNC(sub_837CA200);
PPC_FUNC_IMPL(__imp__sub_837CA200) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837CA204"))) PPC_WEAK_FUNC(sub_837CA204);
PPC_FUNC_IMPL(__imp__sub_837CA204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837CA208"))) PPC_WEAK_FUNC(sub_837CA208);
PPC_FUNC_IMPL(__imp__sub_837CA208) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,100(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x837d2680
	sub_837D2680(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837CA218"))) PPC_WEAK_FUNC(sub_837CA218);
PPC_FUNC_IMPL(__imp__sub_837CA218) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837CA21C"))) PPC_WEAK_FUNC(sub_837CA21C);
PPC_FUNC_IMPL(__imp__sub_837CA21C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837CA220"))) PPC_WEAK_FUNC(sub_837CA220);
PPC_FUNC_IMPL(__imp__sub_837CA220) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,100(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x837d26f0
	sub_837D26F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837CA230"))) PPC_WEAK_FUNC(sub_837CA230);
PPC_FUNC_IMPL(__imp__sub_837CA230) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837CA234"))) PPC_WEAK_FUNC(sub_837CA234);
PPC_FUNC_IMPL(__imp__sub_837CA234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837CA238"))) PPC_WEAK_FUNC(sub_837CA238);
PPC_FUNC_IMPL(__imp__sub_837CA238) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,100(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x837d2578
	sub_837D2578(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837CA248"))) PPC_WEAK_FUNC(sub_837CA248);
PPC_FUNC_IMPL(__imp__sub_837CA248) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837CA24C"))) PPC_WEAK_FUNC(sub_837CA24C);
PPC_FUNC_IMPL(__imp__sub_837CA24C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837CA250"))) PPC_WEAK_FUNC(sub_837CA250);
PPC_FUNC_IMPL(__imp__sub_837CA250) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,100(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x837d2350
	sub_837D2350(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837CA260"))) PPC_WEAK_FUNC(sub_837CA260);
PPC_FUNC_IMPL(__imp__sub_837CA260) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837CA264"))) PPC_WEAK_FUNC(sub_837CA264);
PPC_FUNC_IMPL(__imp__sub_837CA264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837CA268"))) PPC_WEAK_FUNC(sub_837CA268);
PPC_FUNC_IMPL(__imp__sub_837CA268) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,100(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x837d0f48
	sub_837D0F48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837CA284"))) PPC_WEAK_FUNC(sub_837CA284);
PPC_FUNC_IMPL(__imp__sub_837CA284) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837CA288"))) PPC_WEAK_FUNC(sub_837CA288);
PPC_FUNC_IMPL(__imp__sub_837CA288) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,100(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x837ca29c
	if (!cr6.eq) goto loc_837CA29C;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_837CA29C:
	// b 0x837cfcf8
	sub_837CFCF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837CA2A0"))) PPC_WEAK_FUNC(sub_837CA2A0);
PPC_FUNC_IMPL(__imp__sub_837CA2A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,124(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// stb r4,148(r11)
	PPC_STORE_U8(ctx.r11.u32 + 148, ctx.r4.u8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_837CA2CC"))) PPC_WEAK_FUNC(sub_837CA2CC);
PPC_FUNC_IMPL(__imp__sub_837CA2CC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837CA2D0"))) PPC_WEAK_FUNC(sub_837CA2D0);
PPC_FUNC_IMPL(__imp__sub_837CA2D0) {
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
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// std r4,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r4.u64);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837ca3a0
	if (cr6.eq) goto loc_837CA3A0;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r11,r11,-2924
	ctx.r11.s64 = ctx.r11.s64 + -2924;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837ca31c
	if (!cr6.eq) goto loc_837CA31C;
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x837ca344
	goto loc_837CA344;
loc_837CA31C:
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 120);
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// bne cr6,0x837ca33c
	if (!cr6.eq) goto loc_837CA33C;
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x837ca340
	if (cr6.eq) goto loc_837CA340;
loc_837CA33C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_837CA340:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_837CA344:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837ca3a0
	if (!cr6.eq) goto loc_837CA3A0;
	// cmpwi cr6,r5,2
	cr6.compare<int32_t>(ctx.r5.s32, 2, xer);
	// bge cr6,0x837ca3a0
	if (!cr6.lt) goto loc_837CA3A0;
	// cmplwi cr6,r6,2
	cr6.compare<uint32_t>(ctx.r6.u32, 2, xer);
	// bge cr6,0x837ca3a0
	if (!cr6.lt) goto loc_837CA3A0;
	// addi r11,r6,-1
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// bne cr6,0x837ca384
	if (!cr6.eq) goto loc_837CA384;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x837ca394
	goto loc_837CA394;
loc_837CA384:
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r8,r10,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r8,1
	ctx.r11.u64 = ctx.r8.u64 ^ 1;
	// addi r5,r11,2
	ctx.r5.s64 = ctx.r11.s64 + 2;
loc_837CA394:
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x837c9ec8
	ctx.lr = 0x837CA3A0;
	sub_837C9EC8(ctx, base);
loc_837CA3A0:
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

__attribute__((alias("__imp__sub_837CA3B4"))) PPC_WEAK_FUNC(sub_837CA3B4);
PPC_FUNC_IMPL(__imp__sub_837CA3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837CA3B8"))) PPC_WEAK_FUNC(sub_837CA3B8);
PPC_FUNC_IMPL(__imp__sub_837CA3B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837CA3C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// lwz r10,100(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r9,r11,-3396
	ctx.r9.s64 = ctx.r11.s64 + -3396;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x837ca424
	if (cr6.eq) goto loc_837CA424;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x837CA3F8;
	sub_82595150(ctx, base);
	// lwz r3,100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837ca418
	if (cr6.eq) goto loc_837CA418;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837CA418;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_837CA418:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x837CA420;
	sub_82595170(ctx, base);
	// stw r29,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r29.u32);
loc_837CA424:
	// lwz r11,92(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// addi r31,r30,72
	ctx.r31.s64 = ctx.r30.s64 + 72;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837ca448
	if (cr6.lt) goto loc_837CA448;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x837CA448;
	sub_825952B8(ctx, base);
loc_837CA448:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stb r29,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r29.u8);
	// bl 0x831032a0
	ctx.lr = 0x837CA460;
	sub_831032A0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837CA468"))) PPC_WEAK_FUNC(sub_837CA468);
PPC_FUNC_IMPL(__imp__sub_837CA468) {
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
	// bl 0x837ca3b8
	ctx.lr = 0x837CA488;
	sub_837CA3B8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837ca4a8
	if (cr6.eq) goto loc_837CA4A8;
	// bl 0x82595188
	ctx.lr = 0x837CA498;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x837CA4A8;
	sub_825952B8(ctx, base);
loc_837CA4A8:
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

__attribute__((alias("__imp__sub_837CA4C4"))) PPC_WEAK_FUNC(sub_837CA4C4);
PPC_FUNC_IMPL(__imp__sub_837CA4C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837CA4C8"))) PPC_WEAK_FUNC(sub_837CA4C8);
PPC_FUNC_IMPL(__imp__sub_837CA4C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x837CA4D0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837ca500
	if (cr6.lt) goto loc_837CA500;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// b 0x837ca504
	goto loc_837CA504;
loc_837CA500:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_837CA504:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103328
	ctx.lr = 0x837CA50C;
	sub_83103328(ctx, base);
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r10,r11,-3396
	ctx.r10.s64 = ctx.r11.s64 + -3396;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r9,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r9.u32);
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// stw r29,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r29.u32);
	// stb r29,72(r31)
	PPC_STORE_U8(ctx.r31.u32 + 72, ctx.r29.u8);
	// stw r29,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r29.u32);
	// stb r28,104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 104, ctx.r28.u8);
	// lwz r8,16(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x837ca5b0
	if (cr6.eq) goto loc_837CA5B0;
	// cmplwi cr6,r27,3
	cr6.compare<uint32_t>(ctx.r27.u32, 3, xer);
	// blt cr6,0x837ca554
	if (cr6.lt) goto loc_837CA554;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
loc_837CA554:
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8259cb28
	ctx.lr = 0x837CA564;
	sub_8259CB28(ctx, base);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1064
	ctx.r4.s64 = 1064;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x837CA578;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837ca59c
	if (cr6.eq) goto loc_837CA59C;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x837d0450
	ctx.lr = 0x837CA598;
	sub_837D0450(ctx, base);
	// b 0x837ca5a0
	goto loc_837CA5A0;
loc_837CA59C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_837CA5A0:
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// bl 0x82aacdd8
	ctx.lr = 0x837CA5A8;
	sub_82AACDD8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x837cc0d8
	ctx.lr = 0x837CA5B0;
	sub_837CC0D8(ctx, base);
loc_837CA5B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837CA5BC"))) PPC_WEAK_FUNC(sub_837CA5BC);
PPC_FUNC_IMPL(__imp__sub_837CA5BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837CA5C0"))) PPC_WEAK_FUNC(sub_837CA5C0);
PPC_FUNC_IMPL(__imp__sub_837CA5C0) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837ca618
	if (cr6.eq) goto loc_837CA618;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x837ca618
	if (cr6.lt) goto loc_837CA618;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bge cr6,0x837ca618
	if (!cr6.lt) goto loc_837CA618;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837c3d90
	ctx.lr = 0x837CA5F8;
	sub_837C3D90(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83531878
	ctx.lr = 0x837CA604;
	sub_83531878(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x837d3000
	ctx.lr = 0x837CA610;
	sub_837D3000(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x837CA618;
	sub_8387E8E0(ctx, base);
loc_837CA618:
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

__attribute__((alias("__imp__sub_837CA62C"))) PPC_WEAK_FUNC(sub_837CA62C);
PPC_FUNC_IMPL(__imp__sub_837CA62C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837CA630"))) PPC_WEAK_FUNC(sub_837CA630);
PPC_FUNC_IMPL(__imp__sub_837CA630) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x837CA638;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,108
	ctx.r4.s64 = 108;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x82595718
	ctx.lr = 0x837CA668;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837ca690
	if (cr6.eq) goto loc_837CA690;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x837ca4c8
	ctx.lr = 0x837CA688;
	sub_837CA4C8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_837CA690:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

