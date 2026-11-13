#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_837D26EC"))) PPC_WEAK_FUNC(sub_837D26EC);
PPC_FUNC_IMPL(__imp__sub_837D26EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D26F0"))) PPC_WEAK_FUNC(sub_837D26F0);
PPC_FUNC_IMPL(__imp__sub_837D26F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837D26F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,1028
	ctx.r30.s64 = ctx.r3.s64 + 1028;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837D2710;
	sub_82596FE8(ctx, base);
	// addi r3,r31,888
	ctx.r3.s64 = ctx.r31.s64 + 888;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83b4f7d8
	ctx.lr = 0x837D271C;
	sub_83B4F7D8(ctx, base);
	// lwz r10,572(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// lwz r11,584(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,576(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// oris r7,r10,8192
	ctx.r7.u64 = ctx.r10.u64 | 536870912;
	// oris r8,r11,2
	ctx.r8.u64 = ctx.r11.u64 | 131072;
	// ori r7,r7,32
	ctx.r7.u64 = ctx.r7.u64 | 32;
	// rlwinm r6,r9,0,27,25
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// stw r8,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r8.u32);
	// stw r7,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r7.u32);
	// stw r6,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r6.u32);
	// bl 0x837cf078
	ctx.lr = 0x837D274C;
	sub_837CF078(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82597088
	ctx.lr = 0x837D2754;
	sub_82597088(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D275C"))) PPC_WEAK_FUNC(sub_837D275C);
PPC_FUNC_IMPL(__imp__sub_837D275C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D2760"))) PPC_WEAK_FUNC(sub_837D2760);
PPC_FUNC_IMPL(__imp__sub_837D2760) {
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
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r4,5
	cr6.compare<uint32_t>(ctx.r4.u32, 5, xer);
	// bgt cr6,0x837d2890
	if (cr6.gt) goto loc_837D2890;
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bdzf 4*cr6+eq,0x837d27ac
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837D27AC;
	// bdzf 4*cr6+eq,0x837d27ac
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837D27AC;
	// bdzf 4*cr6+eq,0x837d2794
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837D2794;
	// bdzf 4*cr6+eq,0x837d27ac
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837D27AC;
	// bne cr6,0x837d2814
	if (!cr6.eq) goto loc_837D2814;
loc_837D2794:
	// bl 0x83b52b50
	ctx.lr = 0x837D2798;
	sub_83B52B50(ctx, base);
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
loc_837D27AC:
	// lwz r11,628(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 628);
	// addi r31,r3,628
	ctx.r31.s64 = ctx.r3.s64 + 628;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r7,r8,r31
	ctx.r7.u64 = ctx.r8.u64 & ctx.r31.u64;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x837d287c
	if (cr6.eq) goto loc_837D287C;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d27fc
	if (cr6.eq) goto loc_837D27FC;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
loc_837D27DC:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwcx. r8,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x837d27dc
	if (!cr0.eq) goto loc_837D27DC;
	// lwsync 
loc_837D27FC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// bl 0x83b564b0
	ctx.lr = 0x837D280C;
	sub_83B564B0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// b 0x837d2878
	goto loc_837D2878;
loc_837D2814:
	// lwz r11,632(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 632);
	// addi r31,r3,632
	ctx.r31.s64 = ctx.r3.s64 + 632;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r7,r8,r31
	ctx.r7.u64 = ctx.r8.u64 & ctx.r31.u64;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x837d287c
	if (cr6.eq) goto loc_837D287C;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d2864
	if (cr6.eq) goto loc_837D2864;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
loc_837D2844:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwcx. r8,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x837d2844
	if (!cr0.eq) goto loc_837D2844;
	// lwsync 
loc_837D2864:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// bl 0x83b564b0
	ctx.lr = 0x837D2874;
	sub_83B564B0(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
loc_837D2878:
	// bl 0x837cfda8
	ctx.lr = 0x837D287C;
	sub_837CFDA8(ctx, base);
loc_837D287C:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x837cffd0
	ctx.lr = 0x837D2890;
	sub_837CFFD0(ctx, base);
loc_837D2890:
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

__attribute__((alias("__imp__sub_837D28A4"))) PPC_WEAK_FUNC(sub_837D28A4);
PPC_FUNC_IMPL(__imp__sub_837D28A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D28A8"))) PPC_WEAK_FUNC(sub_837D28A8);
PPC_FUNC_IMPL(__imp__sub_837D28A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837D28B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,1028
	ctx.r29.s64 = ctx.r3.s64 + 1028;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837D28C8;
	sub_82596FE8(ctx, base);
	// lwz r11,576(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// rlwinm r10,r11,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837d28f0
	if (cr6.eq) goto loc_837D28F0;
	// lwz r11,636(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 636);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x837d28f0
	if (!cr6.eq) goto loc_837D28F0;
	// lwz r11,640(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 640);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// beq cr6,0x837d2950
	if (cr6.eq) goto loc_837D2950;
loc_837D28F0:
	// lwz r10,628(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// addi r11,r31,628
	ctx.r11.s64 = ctx.r31.s64 + 628;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 & ctx.r11.u64;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq cr6,0x837d2918
	if (cr6.eq) goto loc_837D2918;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,636(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 636);
	// bl 0x837d2760
	ctx.lr = 0x837D2918;
	sub_837D2760(ctx, base);
loc_837D2918:
	// lwz r9,572(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,592(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 592);
	// lwz r8,576(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// oris r6,r9,8192
	ctx.r6.u64 = ctx.r9.u64 | 536870912;
	// ori r7,r10,1
	ctx.r7.u64 = ctx.r10.u64 | 1;
	// stb r11,708(r31)
	PPC_STORE_U8(ctx.r31.u32 + 708, ctx.r11.u8);
	// ori r6,r6,2
	ctx.r6.u64 = ctx.r6.u64 | 2;
	// stw r11,636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 636, ctx.r11.u32);
	// rlwinm r5,r8,0,31,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF9;
	// stw r30,640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 640, ctx.r30.u32);
	// stw r7,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r7.u32);
	// stw r6,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r6.u32);
	// stw r5,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r5.u32);
loc_837D2950:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837cf078
	ctx.lr = 0x837D2958;
	sub_837CF078(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82597088
	ctx.lr = 0x837D2960;
	sub_82597088(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D2968"))) PPC_WEAK_FUNC(sub_837D2968);
PPC_FUNC_IMPL(__imp__sub_837D2968) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837D2970;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,1028
	ctx.r30.s64 = ctx.r3.s64 + 1028;
	// std r4,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r4.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837D298C;
	sub_82596FE8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f12,696(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 696);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,-25156(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -25156);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-8332(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8332);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bne cr6,0x837d29b4
	if (!cr6.eq) goto loc_837D29B4;
	// lfs f12,700(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// beq cr6,0x837d29e4
	if (cr6.eq) goto loc_837D29E4;
loc_837D29B4:
	// lwz r10,572(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// stfs f0,696(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 696, temp.u32);
	// lwz r11,580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	// stfs f13,700(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 700, temp.u32);
	// lwz r9,576(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// oris r7,r10,8192
	ctx.r7.u64 = ctx.r10.u64 | 536870912;
	// ori r8,r11,8
	ctx.r8.u64 = ctx.r11.u64 | 8;
	// ori r7,r7,8
	ctx.r7.u64 = ctx.r7.u64 | 8;
	// rlwinm r6,r9,0,29,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stw r8,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r8.u32);
	// stw r7,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r7.u32);
	// stw r6,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r6.u32);
loc_837D29E4:
	// lwz r11,576(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// rlwinm r10,r11,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837d2a18
	if (cr6.eq) goto loc_837D2A18;
	// lwz r11,636(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 636);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x837d2a18
	if (!cr6.eq) goto loc_837D2A18;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r31,616
	ctx.r3.s64 = ctx.r31.s64 + 616;
	// bl 0x825a2298
	ctx.lr = 0x837D2A0C;
	sub_825A2298(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d2abc
	if (cr6.eq) goto loc_837D2ABC;
loc_837D2A18:
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// addi r11,r31,128
	ctx.r11.s64 = ctx.r31.s64 + 128;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 & ctx.r11.u64;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq cr6,0x837d2a40
	if (cr6.eq) goto loc_837D2A40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,636(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 636);
	// bl 0x837d2760
	ctx.lr = 0x837D2A40;
	sub_837D2760(ctx, base);
loc_837D2A40:
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lis r10,3
	ctx.r10.s64 = 196608;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r29,640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 640, ctx.r29.u32);
	// ori r5,r10,65523
	ctx.r5.u64 = ctx.r10.u64 | 65523;
	// lwz r6,652(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// li r8,3
	ctx.r8.s64 = 3;
	// stb r9,708(r31)
	PPC_STORE_U8(ctx.r31.u32 + 708, ctx.r9.u8);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r5,624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 624, ctx.r5.u32);
	// stw r8,636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 636, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// sth r7,616(r31)
	PPC_STORE_U16(ctx.r31.u32 + 616, ctx.r7.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 620, ctx.r11.u32);
	// lwz r5,648(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 648);
	// lwz r4,624(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	// bl 0x837d14a8
	ctx.lr = 0x837D2A88;
	sub_837D14A8(ctx, base);
	// lwz r9,572(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// lwz r4,592(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 592);
	// oris r6,r9,8192
	ctx.r6.u64 = ctx.r9.u64 | 536870912;
	// lwz r3,580(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	// lwz r11,576(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// ori r10,r4,1
	ctx.r10.u64 = ctx.r4.u64 | 1;
	// ori r8,r3,15
	ctx.r8.u64 = ctx.r3.u64 | 15;
	// rlwinm r7,r11,0,31,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF1;
	// stw r10,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r10.u32);
	// ori r6,r6,14
	ctx.r6.u64 = ctx.r6.u64 | 14;
	// stw r8,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r8.u32);
	// stw r7,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r7.u32);
	// stw r6,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r6.u32);
loc_837D2ABC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837cf078
	ctx.lr = 0x837D2AC4;
	sub_837CF078(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82597088
	ctx.lr = 0x837D2ACC;
	sub_82597088(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D2AD4"))) PPC_WEAK_FUNC(sub_837D2AD4);
PPC_FUNC_IMPL(__imp__sub_837D2AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D2AD8"))) PPC_WEAK_FUNC(sub_837D2AD8);
PPC_FUNC_IMPL(__imp__sub_837D2AD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837D2AE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,1028
	ctx.r29.s64 = ctx.r3.s64 + 1028;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837D2AF8;
	sub_82596FE8(ctx, base);
	// lwz r11,576(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// rlwinm r10,r11,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837d2b20
	if (cr6.eq) goto loc_837D2B20;
	// lwz r11,636(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 636);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bne cr6,0x837d2b20
	if (!cr6.eq) goto loc_837D2B20;
	// lwz r11,640(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 640);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// beq cr6,0x837d2b84
	if (cr6.eq) goto loc_837D2B84;
loc_837D2B20:
	// lwz r10,628(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// addi r11,r31,628
	ctx.r11.s64 = ctx.r31.s64 + 628;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 & ctx.r11.u64;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq cr6,0x837d2b48
	if (cr6.eq) goto loc_837D2B48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,636(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 636);
	// bl 0x837d2760
	ctx.lr = 0x837D2B48;
	sub_837D2760(ctx, base);
loc_837D2B48:
	// lwz r9,572(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 592);
	// li r8,4
	ctx.r8.s64 = 4;
	// lwz r7,576(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// oris r5,r9,8192
	ctx.r5.u64 = ctx.r9.u64 | 536870912;
	// ori r6,r11,1
	ctx.r6.u64 = ctx.r11.u64 | 1;
	// stb r10,708(r31)
	PPC_STORE_U8(ctx.r31.u32 + 708, ctx.r10.u8);
	// ori r5,r5,2
	ctx.r5.u64 = ctx.r5.u64 | 2;
	// stw r8,636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 636, ctx.r8.u32);
	// rlwinm r4,r7,0,31,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF9;
	// stw r30,640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 640, ctx.r30.u32);
	// stw r6,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r6.u32);
	// stw r5,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r5.u32);
	// stw r4,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r4.u32);
loc_837D2B84:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837cf078
	ctx.lr = 0x837D2B8C;
	sub_837CF078(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82597088
	ctx.lr = 0x837D2B94;
	sub_82597088(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D2B9C"))) PPC_WEAK_FUNC(sub_837D2B9C);
PPC_FUNC_IMPL(__imp__sub_837D2B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D2BA0"))) PPC_WEAK_FUNC(sub_837D2BA0);
PPC_FUNC_IMPL(__imp__sub_837D2BA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837D2BA8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,1028
	ctx.r30.s64 = ctx.r3.s64 + 1028;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837D2BC0;
	sub_82596FE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,636(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 636);
	// bl 0x837d2760
	ctx.lr = 0x837D2BCC;
	sub_837D2760(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// stw r11,636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 636, ctx.r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837d2bfc
	if (cr6.eq) goto loc_837D2BFC;
	// lbz r10,105(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 105);
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// rlwinm r11,r10,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwimi r9,r8,2,0,29
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 2) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// stb r9,105(r31)
	PPC_STORE_U8(ctx.r31.u32 + 105, ctx.r9.u8);
loc_837D2BFC:
	// lwz r10,572(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,576(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r8,r10,0,31,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF1;
	// stw r11,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r11.u32);
	// rlwinm r7,r9,0,31,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF1;
	// stw r11,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r11.u32);
	// rlwinm r8,r8,0,27,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// stw r11,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r11.u32);
	// rlwinm r7,r7,0,27,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// stw r8,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r8.u32);
	// stw r7,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r7.u32);
	// bl 0x837cf078
	ctx.lr = 0x837D2C34;
	sub_837CF078(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82597088
	ctx.lr = 0x837D2C3C;
	sub_82597088(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D2C44"))) PPC_WEAK_FUNC(sub_837D2C44);
PPC_FUNC_IMPL(__imp__sub_837D2C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D2C48"))) PPC_WEAK_FUNC(sub_837D2C48);
PPC_FUNC_IMPL(__imp__sub_837D2C48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x837D2C50;
	__savegprlr_22(ctx, base);
	// stfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f30.u64);
	// stfd f31,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r23,r3,1028
	ctx.r23.s64 = ctx.r3.s64 + 1028;
	// std r4,264(r1)
	PPC_STORE_U64(ctx.r1.u32 + 264, ctx.r4.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837D2C8C;
	sub_82596FE8(ctx, base);
	// lwz r11,576(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r22,15
	ctx.r22.s64 = 15;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// stw r22,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r22.u32);
	// rlwinm r25,r11,31,31,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// stb r27,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r27.u8);
	// beq cr6,0x837d2d1c
	if (cr6.eq) goto loc_837D2D1C;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d2d1c
	if (cr6.eq) goto loc_837D2D1C;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_837D2CC0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837d2cc0
	if (!cr6.eq) goto loc_837D2CC0;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x837D2CE8;
	sub_8259CC28(ctx, base);
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// li r6,5
	ctx.r6.s64 = 5;
	// addi r30,r11,-2169
	ctx.r30.s64 = ctx.r11.s64 + -2169;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,1
	ctx.r4.s64 = ctx.r30.s64 + 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82b51658
	ctx.lr = 0x837D2D04;
	sub_82B51658(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x837d2d34
	if (!cr6.eq) goto loc_837D2D34;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259d6c0
	ctx.lr = 0x837D2D18;
	sub_8259D6C0(ctx, base);
	// b 0x837d2d34
	goto loc_837D2D34;
loc_837D2D1C:
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,-2169
	ctx.r11.s64 = ctx.r11.s64 + -2169;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x8259cc28
	ctx.lr = 0x837D2D34;
	sub_8259CC28(ctx, base);
loc_837D2D34:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r30,r31,660
	ctx.r30.s64 = ctx.r31.s64 + 660;
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x837d2d4c
	if (!cr6.lt) goto loc_837D2D4C;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
loc_837D2D4C:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x827a8810
	ctx.lr = 0x837D2D60;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x837d2d88
	if (cr6.eq) goto loc_837D2D88;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259cb28
	ctx.lr = 0x837D2D7C;
	sub_8259CB28(ctx, base);
	// lwz r11,580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stw r10,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r10.u32);
loc_837D2D88:
	// lwz r11,688(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 688);
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, xer);
	// beq cr6,0x837d2da4
	if (cr6.eq) goto loc_837D2DA4;
	// lwz r11,580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	// stw r29,688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 688, ctx.r29.u32);
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// stw r10,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r10.u32);
loc_837D2DA4:
	// lbz r11,692(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 692);
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x837d2dc4
	if (cr6.eq) goto loc_837D2DC4;
	// lwz r11,580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	// stb r28,692(r31)
	PPC_STORE_U8(ctx.r31.u32 + 692, ctx.r28.u8);
	// ori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 4;
	// stw r10,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r10.u32);
loc_837D2DC4:
	// lfs f0,696(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 696);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x837d2ddc
	if (!cr6.eq) goto loc_837D2DDC;
	// lfs f0,700(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// beq cr6,0x837d2df0
	if (cr6.eq) goto loc_837D2DF0;
loc_837D2DDC:
	// lwz r11,580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	// stfs f31,696(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 696, temp.u32);
	// stfs f30,700(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 700, temp.u32);
	// ori r10,r11,8
	ctx.r10.u64 = ctx.r11.u64 | 8;
	// stw r10,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r10.u32);
loc_837D2DF0:
	// lwz r11,592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 592);
	// lwz r10,580(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	// ori r9,r11,1
	ctx.r9.u64 = ctx.r11.u64 | 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r9.u32);
	// beq cr6,0x837d2e24
	if (cr6.eq) goto loc_837D2E24;
	// lwz r10,572(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// lwz r11,576(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// oris r8,r10,8192
	ctx.r8.u64 = ctx.r10.u64 | 536870912;
	// rlwinm r9,r11,0,29,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// ori r8,r8,8
	ctx.r8.u64 = ctx.r8.u64 | 8;
	// stw r9,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r9.u32);
	// stw r8,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r8.u32);
loc_837D2E24:
	// addi r11,r26,-2
	ctx.r11.s64 = ctx.r26.s64 + -2;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(ctx.r11.u32, 13, xer);
	// bgt cr6,0x837d2e88
	if (cr6.gt) goto loc_837D2E88;
	// lis r12,-31875
	ctx.r12.s64 = -2088960000;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,11852
	ctx.r12.s64 = ctx.r12.s64 + 11852;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_837D2E84;
	case 1:
		goto loc_837D2E84;
	case 2:
		goto loc_837D2E88;
	case 3:
		goto loc_837D2E88;
	case 4:
		goto loc_837D2E88;
	case 5:
		goto loc_837D2E84;
	case 6:
		goto loc_837D2E88;
	case 7:
		goto loc_837D2E88;
	case 8:
		goto loc_837D2E88;
	case 9:
		goto loc_837D2E88;
	case 10:
		goto loc_837D2E88;
	case 11:
		goto loc_837D2E88;
	case 12:
		goto loc_837D2E84;
	case 13:
		goto loc_837D2E84;
	default:
		return;
	}
	// lwz r27,11908(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11908);
	// lwz r27,11908(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11908);
	// lwz r27,11912(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11912);
	// lwz r27,11912(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11912);
	// lwz r27,11912(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11912);
	// lwz r27,11908(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11908);
	// lwz r27,11912(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11912);
	// lwz r27,11912(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11912);
	// lwz r27,11912(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11912);
	// lwz r27,11912(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11912);
	// lwz r27,11912(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11912);
	// lwz r27,11912(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11912);
	// lwz r27,11908(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11908);
	// lwz r27,11908(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11908);
loc_837D2E84:
	// li r29,1
	ctx.r29.s64 = 1;
loc_837D2E88:
	// addi r11,r26,-1
	ctx.r11.s64 = ctx.r26.s64 + -1;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,14
	cr6.compare<uint32_t>(ctx.r11.u32, 14, xer);
	// bgt cr6,0x837d2ef0
	if (cr6.gt) goto loc_837D2EF0;
	// lis r12,-31875
	ctx.r12.s64 = -2088960000;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,11952
	ctx.r12.s64 = ctx.r12.s64 + 11952;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_837D2EEC;
	case 1:
		goto loc_837D2EF0;
	case 2:
		goto loc_837D2EEC;
	case 3:
		goto loc_837D2EF0;
	case 4:
		goto loc_837D2EF0;
	case 5:
		goto loc_837D2EF0;
	case 6:
		goto loc_837D2EF0;
	case 7:
		goto loc_837D2EF0;
	case 8:
		goto loc_837D2EF0;
	case 9:
		goto loc_837D2EF0;
	case 10:
		goto loc_837D2EF0;
	case 11:
		goto loc_837D2EF0;
	case 12:
		goto loc_837D2EEC;
	case 13:
		goto loc_837D2EF0;
	case 14:
		goto loc_837D2EEC;
	default:
		return;
	}
	// lwz r27,12012(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12012);
	// lwz r27,12016(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12016);
	// lwz r27,12012(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12012);
	// lwz r27,12016(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12016);
	// lwz r27,12016(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12016);
	// lwz r27,12016(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12016);
	// lwz r27,12016(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12016);
	// lwz r27,12016(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12016);
	// lwz r27,12016(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12016);
	// lwz r27,12016(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12016);
	// lwz r27,12016(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12016);
	// lwz r27,12016(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12016);
	// lwz r27,12012(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12012);
	// lwz r27,12016(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12016);
	// lwz r27,12012(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12012);
loc_837D2EEC:
	// li r30,1
	ctx.r30.s64 = 1;
loc_837D2EF0:
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d2f44
	if (cr6.eq) goto loc_837D2F44;
	// lwz r11,636(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 636);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837d2f44
	if (!cr6.eq) goto loc_837D2F44;
	// addi r4,r1,264
	ctx.r4.s64 = ctx.r1.s64 + 264;
	// addi r3,r31,616
	ctx.r3.s64 = ctx.r31.s64 + 616;
	// bl 0x825a2298
	ctx.lr = 0x837D2F14;
	sub_825A2298(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837d2f44
	if (!cr6.eq) goto loc_837D2F44;
	// lwz r11,644(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 644);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x837d2f44
	if (!cr6.eq) goto loc_837D2F44;
	// lwz r11,652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// bne cr6,0x837d2f44
	if (!cr6.eq) goto loc_837D2F44;
	// lwz r11,648(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 648);
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, xer);
	// beq cr6,0x837d2fb0
	if (cr6.eq) goto loc_837D2FB0;
loc_837D2F44:
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// addi r11,r31,128
	ctx.r11.s64 = ctx.r31.s64 + 128;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 & ctx.r11.u64;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq cr6,0x837d2f6c
	if (cr6.eq) goto loc_837D2F6C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,636(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 636);
	// bl 0x837d2760
	ctx.lr = 0x837D2F6C;
	sub_837D2760(ctx, base);
loc_837D2F6C:
	// lwz r8,572(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	// lwz r9,576(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// oris r5,r8,8192
	ctx.r5.u64 = ctx.r8.u64 | 536870912;
	// ori r7,r11,15
	ctx.r7.u64 = ctx.r11.u64 | 15;
	// std r24,616(r31)
	PPC_STORE_U64(ctx.r31.u32 + 616, ctx.r24.u64);
	// rlwinm r6,r9,0,31,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF1;
	// stw r26,644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 644, ctx.r26.u32);
	// ori r5,r5,14
	ctx.r5.u64 = ctx.r5.u64 | 14;
	// stb r10,708(r31)
	PPC_STORE_U8(ctx.r31.u32 + 708, ctx.r10.u8);
	// stw r27,636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 636, ctx.r27.u32);
	// stw r30,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r30.u32);
	// stw r29,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r29.u32);
	// stw r7,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r7.u32);
	// stw r5,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r5.u32);
	// stw r6,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r6.u32);
loc_837D2FB0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837cf078
	ctx.lr = 0x837D2FB8;
	sub_837CF078(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837d2fd8
	if (cr6.lt) goto loc_837D2FD8;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x837D2FD8;
	sub_825952B8(ctx, base);
loc_837D2FD8:
	// stw r22,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r22.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// stb r27,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r27.u8);
	// bl 0x82597088
	ctx.lr = 0x837D2FEC;
	sub_82597088(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D2FFC"))) PPC_WEAK_FUNC(sub_837D2FFC);
PPC_FUNC_IMPL(__imp__sub_837D2FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D3000"))) PPC_WEAK_FUNC(sub_837D3000);
PPC_FUNC_IMPL(__imp__sub_837D3000) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837D3008;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,1028
	ctx.r28.s64 = ctx.r3.s64 + 1028;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837D3020;
	sub_82596FE8(ctx, base);
	// lwz r11,576(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 576);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837d308c
	if (cr6.eq) goto loc_837D308C;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r3,r30,764
	ctx.r3.s64 = ctx.r30.s64 + 764;
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837d304c
	if (cr6.lt) goto loc_837D304C;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x837d3050
	goto loc_837D3050;
loc_837D304C:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_837D3050:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x827a8810
	ctx.lr = 0x837D305C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x837d308c
	if (!cr6.eq) goto loc_837D308C;
	// lwz r11,796(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 796);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x837d308c
	if (!cr6.eq) goto loc_837D308C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82597088
	ctx.lr = 0x837D307C;
	sub_82597088(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8387e8e0
	ctx.lr = 0x837D3084;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_837D308C:
	// addi r3,r30,764
	ctx.r3.s64 = ctx.r30.s64 + 764;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8259cb28
	ctx.lr = 0x837D30A0;
	sub_8259CB28(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,792(r30)
	PPC_STORE_U32(ctx.r30.u32 + 792, ctx.r11.u32);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r10,796(r30)
	PPC_STORE_U32(ctx.r30.u32 + 796, ctx.r10.u32);
	// lwz r9,576(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 576);
	// lwz r8,572(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 572);
	// oris r7,r8,8192
	ctx.r7.u64 = ctx.r8.u64 | 536870912;
	// ori r7,r7,80
	ctx.r7.u64 = ctx.r7.u64 | 80;
	// rlwinm r6,r9,0,28,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r7,572(r30)
	PPC_STORE_U32(ctx.r30.u32 + 572, ctx.r7.u32);
	// stw r6,576(r30)
	PPC_STORE_U32(ctx.r30.u32 + 576, ctx.r6.u32);
	// bl 0x837cf078
	ctx.lr = 0x837D30D4;
	sub_837CF078(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82597088
	ctx.lr = 0x837D30DC;
	sub_82597088(ctx, base);
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x837d30fc
	if (cr6.lt) goto loc_837D30FC;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x837D30FC;
	sub_825952B8(ctx, base);
loc_837D30FC:
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
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D3118"))) PPC_WEAK_FUNC(sub_837D3118);
PPC_FUNC_IMPL(__imp__sub_837D3118) {
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
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d3144
	if (cr6.eq) goto loc_837D3144;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x837d3190
	goto loc_837D3190;
loc_837D3144:
	// lbz r11,5(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837d3160
	if (!cr6.eq) goto loc_837D3160;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
	// b 0x837d3190
	goto loc_837D3190;
loc_837D3160:
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d41ac0
	ctx.lr = 0x837D316C;
	sub_82D41AC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d318c
	if (cr6.eq) goto loc_837D318C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d41c98
	ctx.lr = 0x837D3180;
	sub_82D41C98(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
loc_837D318C:
	// lbz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
loc_837D3190:
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

__attribute__((alias("__imp__sub_837D31A8"))) PPC_WEAK_FUNC(sub_837D31A8);
PPC_FUNC_IMPL(__imp__sub_837D31A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwimi r11,r10,0,14,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r8,r11,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwimi r9,r8,0,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// lbz r6,8(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8);
	// stb r6,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r6.u8);
	// lbz r5,9(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 9);
	// stb r5,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r5.u8);
	// lbz r11,10(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 10);
	// stb r11,10(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10, ctx.r11.u8);
	// lbz r10,11(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 11);
	// stb r10,11(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11, ctx.r10.u8);
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// lhz r8,16(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 16);
	// sth r8,16(r3)
	PPC_STORE_U16(ctx.r3.u32 + 16, ctx.r8.u16);
	// lbz r7,18(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 18);
	// stb r7,18(r3)
	PPC_STORE_U8(ctx.r3.u32 + 18, ctx.r7.u8);
	// lbz r6,19(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 19);
	// stb r6,19(r3)
	PPC_STORE_U8(ctx.r3.u32 + 19, ctx.r6.u8);
	// lbz r5,20(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 20);
	// stb r5,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r5.u8);
	// lbz r11,21(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 21);
	// stb r11,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r11.u8);
	// lbz r10,22(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 22);
	// stb r10,22(r3)
	PPC_STORE_U8(ctx.r3.u32 + 22, ctx.r10.u8);
	// lbz r9,23(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 23);
	// stb r9,23(r3)
	PPC_STORE_U8(ctx.r3.u32 + 23, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837D3234"))) PPC_WEAK_FUNC(sub_837D3234);
PPC_FUNC_IMPL(__imp__sub_837D3234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D3238"))) PPC_WEAK_FUNC(sub_837D3238);
PPC_FUNC_IMPL(__imp__sub_837D3238) {
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
	// lbz r11,5(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d328c
	if (cr6.eq) goto loc_837D328C;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r4,r3,32
	ctx.r4.s64 = ctx.r3.s64 + 32;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259cb28
	ctx.lr = 0x837D3284;
	sub_8259CB28(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d3fb08
	ctx.lr = 0x837D328C;
	sub_82D3FB08(ctx, base);
loc_837D328C:
	// stb r30,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r30.u8);
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// stb r30,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r30.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-2022
	ctx.r4.s64 = ctx.r11.s64 + -2022;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x8259cc28
	ctx.lr = 0x837D32A8;
	sub_8259CC28(ctx, base);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_837D32C4"))) PPC_WEAK_FUNC(sub_837D32C4);
PPC_FUNC_IMPL(__imp__sub_837D32C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D32C8"))) PPC_WEAK_FUNC(sub_837D32C8);
PPC_FUNC_IMPL(__imp__sub_837D32C8) {
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
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,-1996(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1996);
	// xor r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm r7,r8,0,0,13
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x837d3314
	if (!cr6.eq) goto loc_837D3314;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r8,r11,14
	ctx.r8.u64 = ctx.r11.u32 & 0x3FFFF;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x837d3318
	if (cr6.eq) goto loc_837D3318;
loc_837D3314:
	// li r11,0
	ctx.r11.s64 = 0;
loc_837D3318:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837d33a0
	if (!cr6.eq) goto loc_837D33A0;
	// clrlwi r11,r10,14
	ctx.r11.u64 = ctx.r10.u32 & 0x3FFFF;
	// cmplwi cr6,r11,140
	cr6.compare<uint32_t>(ctx.r11.u32, 140, xer);
	// beq cr6,0x837d33a0
	if (cr6.eq) goto loc_837D33A0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r9,5(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5, ctx.r9.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r11,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r11.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// bl 0x82b354b0
	ctx.lr = 0x837D3350;
	sub_82B354B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837d31a8
	ctx.lr = 0x837D335C;
	sub_837D31A8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d41448
	ctx.lr = 0x837D3368;
	sub_82D41448(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// bl 0x8259cb28
	ctx.lr = 0x837D337C;
	sub_8259CB28(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x837D3384;
	sub_8387E8E0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d41e60
	ctx.lr = 0x837D3394;
	sub_82D41E60(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x837D339C;
	sub_8387E8E0(ctx, base);
	// b 0x837d33a4
	goto loc_837D33A4;
loc_837D33A0:
	// stb r9,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r9.u8);
loc_837D33A4:
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

__attribute__((alias("__imp__sub_837D33C0"))) PPC_WEAK_FUNC(sub_837D33C0);
PPC_FUNC_IMPL(__imp__sub_837D33C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// lbz r10,5(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// addi r9,r11,-1800
	ctx.r9.s64 = ctx.r11.s64 + -1800;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// b 0x82d41a18
	sub_82D41A18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D33E0"))) PPC_WEAK_FUNC(sub_837D33E0);
PPC_FUNC_IMPL(__imp__sub_837D33E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837D33E4"))) PPC_WEAK_FUNC(sub_837D33E4);
PPC_FUNC_IMPL(__imp__sub_837D33E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D33E8"))) PPC_WEAK_FUNC(sub_837D33E8);
PPC_FUNC_IMPL(__imp__sub_837D33E8) {
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
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d3414
	if (cr6.eq) goto loc_837D3414;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x837d3460
	goto loc_837D3460;
loc_837D3414:
	// lbz r11,5(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837d3430
	if (!cr6.eq) goto loc_837D3430;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
	// b 0x837d3460
	goto loc_837D3460;
loc_837D3430:
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d41bf0
	ctx.lr = 0x837D343C;
	sub_82D41BF0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d345c
	if (cr6.eq) goto loc_837D345C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d41db0
	ctx.lr = 0x837D3450;
	sub_82D41DB0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
loc_837D345C:
	// lbz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
loc_837D3460:
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

__attribute__((alias("__imp__sub_837D3478"))) PPC_WEAK_FUNC(sub_837D3478);
PPC_FUNC_IMPL(__imp__sub_837D3478) {
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
	// lbz r11,5(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d34c8
	if (cr6.eq) goto loc_837D34C8;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x82d41a18
	ctx.lr = 0x837D34A0;
	sub_82D41A18(ctx, base);
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// stb r11,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r11.u8);
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
	// stb r11,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r11.u8);
	// stb r11,7(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7, ctx.r11.u8);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_837D34C8:
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

__attribute__((alias("__imp__sub_837D34DC"))) PPC_WEAK_FUNC(sub_837D34DC);
PPC_FUNC_IMPL(__imp__sub_837D34DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D34E0"))) PPC_WEAK_FUNC(sub_837D34E0);
PPC_FUNC_IMPL(__imp__sub_837D34E0) {
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
	// lis r10,-32211
	ctx.r10.s64 = -2110980096;
	// lis r9,0
	ctx.r9.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r11,r9,65535
	ctx.r11.u64 = ctx.r9.u64 | 65535;
	// addi r8,r10,-1800
	ctx.r8.s64 = ctx.r10.s64 + -1800;
	// stb r30,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r30.u8);
	// stb r30,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r30.u8);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stb r30,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r30.u8);
	// stb r30,7(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7, ctx.r30.u8);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// sth r11,24(r31)
	PPC_STORE_U16(ctx.r31.u32 + 24, ctx.r11.u16);
	// stb r30,26(r31)
	PPC_STORE_U8(ctx.r31.u32 + 26, ctx.r30.u8);
	// bl 0x82d25608
	ctx.lr = 0x837D3540;
	sub_82D25608(ctx, base);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_837D3560"))) PPC_WEAK_FUNC(sub_837D3560);
PPC_FUNC_IMPL(__imp__sub_837D3560) {
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
	// lbz r10,5(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,-1800
	ctx.r9.s64 = ctx.r11.s64 + -1800;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x837d359c
	if (cr6.eq) goto loc_837D359C;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x82d41a18
	ctx.lr = 0x837D359C;
	sub_82D41A18(ctx, base);
loc_837D359C:
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d35b4
	if (cr6.eq) goto loc_837D35B4;
	// bl 0x82416268
	ctx.lr = 0x837D35B0;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_837D35B4:
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

__attribute__((alias("__imp__sub_837D35CC"))) PPC_WEAK_FUNC(sub_837D35CC);
PPC_FUNC_IMPL(__imp__sub_837D35CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D35D0"))) PPC_WEAK_FUNC(sub_837D35D0);
PPC_FUNC_IMPL(__imp__sub_837D35D0) {
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
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// stb r4,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r4.u8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r5,7(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7, ctx.r5.u8);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// beq cr6,0x837d3680
	if (cr6.eq) goto loc_837D3680;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x837d3680
	if (cr6.eq) goto loc_837D3680;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d3680
	if (cr6.eq) goto loc_837D3680;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// stb r10,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r10.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// sth r9,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r9.u16);
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r11.u8);
	// bl 0x82d25608
	ctx.lr = 0x837D3640;
	sub_82D25608(ctx, base);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// stw r7,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r7.u32);
	// stw r6,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r6.u32);
	// bl 0x82d42018
	ctx.lr = 0x837D3664;
	sub_82D42018(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x837D366C;
	sub_8387E8E0(ctx, base);
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
loc_837D3680:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
	// stb r10,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r10.u8);
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

__attribute__((alias("__imp__sub_837D36A4"))) PPC_WEAK_FUNC(sub_837D36A4);
PPC_FUNC_IMPL(__imp__sub_837D36A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D36A8"))) PPC_WEAK_FUNC(sub_837D36A8);
PPC_FUNC_IMPL(__imp__sub_837D36A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837D36B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// sth r6,174(r1)
	PPC_STORE_U16(ctx.r1.u32 + 174, ctx.r6.u16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x837D36C4;
	sub_831156E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x837d36d8
	if (!cr6.eq) goto loc_837D36D8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_837D36D8:
	// lhz r11,174(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 174);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d36ec
	if (cr6.eq) goto loc_837D36EC;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// bne cr6,0x837d36f8
	if (!cr6.eq) goto loc_837D36F8;
loc_837D36EC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8316fca0
	ctx.lr = 0x837D36F4;
	sub_8316FCA0(ctx, base);
	// sth r3,174(r1)
	PPC_STORE_U16(ctx.r1.u32 + 174, ctx.r3.u16);
loc_837D36F8:
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d371c
	if (cr6.eq) goto loc_837D371C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83115808
	ctx.lr = 0x837D370C;
	sub_83115808(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x837d3720
	if (!cr6.eq) goto loc_837D3720;
loc_837D371C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_837D3720:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d37bc
	if (cr6.eq) goto loc_837D37BC;
	// lwz r30,48(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8311c148
	ctx.lr = 0x837D373C;
	sub_8311C148(ctx, base);
	// lwz r11,796(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 796);
	// rlwinm r10,r11,0,16,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000;
	// cmplwi cr6,r10,8192
	cr6.compare<uint32_t>(ctx.r10.u32, 8192, xer);
	// bne cr6,0x837d3760
	if (!cr6.eq) goto loc_837D3760;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r9,r11,65535
	ctx.r9.u64 = ctx.r11.u64 | 65535;
	// stb r10,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r10.u8);
	// b 0x837d377c
	goto loc_837D377C;
loc_837D3760:
	// lhz r11,788(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 788);
	// addi r4,r1,174
	ctx.r4.s64 = ctx.r1.s64 + 174;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// stb r10,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r10.u8);
	// bl 0x8314e3c0
	ctx.lr = 0x837D3778;
	sub_8314E3C0(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_837D377C:
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r4,174(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 174);
	// bl 0x8311c338
	ctx.lr = 0x837D378C;
	sub_8311C338(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lbz r4,6(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// lbz r10,544(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 544);
	// clrlwi r9,r10,28
	ctx.r9.u64 = ctx.r10.u32 & 0xF;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// rotlwi r6,r9,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lbz r8,536(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 536);
	// clrlwi r5,r8,31
	ctx.r5.u64 = ctx.r8.u32 & 0x1;
	// stb r5,7(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7, ctx.r5.u8);
	// bl 0x837d35d0
	ctx.lr = 0x837D37BC;
	sub_837D35D0(ctx, base);
loc_837D37BC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D37C8"))) PPC_WEAK_FUNC(sub_837D37C8);
PPC_FUNC_IMPL(__imp__sub_837D37C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,21700(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21700);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,0(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lbz r7,1(r5)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r5.u32 + 1);
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f10,-16(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f7,4(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lbz r10,2(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 2);
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f6,-16(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f3,8(r4)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lbz r7,3(r5)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r5.u32 + 3);
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f2,-16(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r6,8(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// frsp f13,f1
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,12(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// lwz r5,12(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837D3864"))) PPC_WEAK_FUNC(sub_837D3864);
PPC_FUNC_IMPL(__imp__sub_837D3864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D3868"))) PPC_WEAK_FUNC(sub_837D3868);
PPC_FUNC_IMPL(__imp__sub_837D3868) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837D3870;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,12(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x837d38b0
	if (cr6.eq) goto loc_837D38B0;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x82574b18
	ctx.lr = 0x837D3890;
	sub_82574B18(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bgt cr6,0x837d38ac
	if (cr6.gt) goto loc_837D38AC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837D38AC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_837D38AC:
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
loc_837D38B0:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x837d38e4
	if (cr6.eq) goto loc_837D38E4;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x82574b18
	ctx.lr = 0x837D38C4;
	sub_82574B18(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bgt cr6,0x837d38e0
	if (cr6.gt) goto loc_837D38E0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837D38E0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_837D38E0:
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
loc_837D38E4:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x82572fa0
	ctx.lr = 0x837D38F0;
	sub_82572FA0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D38F8"))) PPC_WEAK_FUNC(sub_837D38F8);
PPC_FUNC_IMPL(__imp__sub_837D38F8) {
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
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x83521f50
	ctx.lr = 0x837D3914;
	sub_83521F50(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83521f50
	ctx.lr = 0x837D391C;
	sub_83521F50(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x83521f50
	ctx.lr = 0x837D3924;
	sub_83521F50(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83521f50
	ctx.lr = 0x837D392C;
	sub_83521F50(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83521f50
	ctx.lr = 0x837D3934;
	sub_83521F50(ctx, base);
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

__attribute__((alias("__imp__sub_837D3948"))) PPC_WEAK_FUNC(sub_837D3948);
PPC_FUNC_IMPL(__imp__sub_837D3948) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837D3950;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a76558
	ctx.lr = 0x837D3974;
	sub_82A76558(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x837d39d8
	if (!cr6.eq) goto loc_837D39D8;
	// bl 0x8378cba8
	ctx.lr = 0x837D3984;
	sub_8378CBA8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x837d3998
	if (!cr6.eq) goto loc_837D3998;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_837D3998:
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r31,620(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a76558
	ctx.lr = 0x837D39B0;
	sub_82A76558(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d39c8
	if (cr6.eq) goto loc_837D39C8;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x837d39c8
	if (cr6.eq) goto loc_837D39C8;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_837D39C8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8378cd88
	ctx.lr = 0x837D39D4;
	sub_8378CD88(ctx, base);
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
loc_837D39D8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D39E0"))) PPC_WEAK_FUNC(sub_837D39E0);
PPC_FUNC_IMPL(__imp__sub_837D39E0) {
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
	// stfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x837d3acc
	if (cr6.eq) goto loc_837D3ACC;
	// lwz r3,128(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837d3acc
	if (cr6.eq) goto loc_837D3ACC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837D3A30;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837d3acc
	if (cr6.eq) goto loc_837D3ACC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stfs f31,696(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 696, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f30,700(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 700, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f13,-25156(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -25156);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
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
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
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
	// bl 0x8373f7d8
	ctx.lr = 0x837D3A9C;
	sub_8373F7D8(ctx, base);
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fctidz f0,f30
	ctx.f0.s64 = (ctx.f30.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f30.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x833c7538
	ctx.lr = 0x837D3AB4;
	sub_833C7538(ctx, base);
	// stfs f1,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b51898
	ctx.lr = 0x837D3AC8;
	sub_83B51898(ctx, base);
	// b 0x837d3ad0
	goto loc_837D3AD0;
loc_837D3ACC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_837D3AD0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
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

__attribute__((alias("__imp__sub_837D3AF0"))) PPC_WEAK_FUNC(sub_837D3AF0);
PPC_FUNC_IMPL(__imp__sub_837D3AF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837D3AF8;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x837d3bd8
	if (cr6.eq) goto loc_837D3BD8;
	// lwz r3,128(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837d3bd8
	if (cr6.eq) goto loc_837D3BD8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837D3B28;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837d3bd8
	if (cr6.eq) goto loc_837D3BD8;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,25
	ctx.r5.s64 = 25;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r11,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r11.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f0,-26260(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x83740288
	ctx.lr = 0x837D3B64;
	sub_83740288(ctx, base);
	// lbz r9,82(r28)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + 82);
	// li r31,11
	ctx.r31.s64 = 11;
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r29,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r29.u64 = ~ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
loc_837D3B74:
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8373fed0
	ctx.lr = 0x837D3B88;
	sub_8373FED0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// stb r3,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r3.u8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d3ba8
	if (cr6.eq) goto loc_837D3BA8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837d37c8
	ctx.lr = 0x837D3BA8;
	sub_837D37C8(ctx, base);
loc_837D3BA8:
	// lwz r3,128(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 128);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,160(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837D3BC0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,18
	cr6.compare<uint32_t>(ctx.r31.u32, 18, xer);
	// blt cr6,0x837d3b74
	if (cr6.lt) goto loc_837D3B74;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_837D3BD8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D3BE4"))) PPC_WEAK_FUNC(sub_837D3BE4);
PPC_FUNC_IMPL(__imp__sub_837D3BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D3BE8"))) PPC_WEAK_FUNC(sub_837D3BE8);
PPC_FUNC_IMPL(__imp__sub_837D3BE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x837D3BF0;
	__savegprlr_25(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x837d3da0
	if (cr6.eq) goto loc_837D3DA0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x837d3da0
	if (cr6.eq) goto loc_837D3DA0;
	// lwz r3,128(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837d3da0
	if (cr6.eq) goto loc_837D3DA0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837D3C2C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837d3da0
	if (cr6.eq) goto loc_837D3DA0;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r5,r1,81
	ctx.r5.s64 = ctx.r1.s64 + 81;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b4f9d8
	ctx.lr = 0x837D3C48;
	sub_83B4F9D8(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// li r30,255
	ctx.r30.s64 = 255;
	// lbz r9,82(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r5,r1,81
	ctx.r5.s64 = ctx.r1.s64 + 81;
	// stb r30,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r30.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r11.u8);
	// stb r10,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r10.u8);
	// stb r9,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r9.u8);
	// bl 0x83b4fae0
	ctx.lr = 0x837D3C7C;
	sub_83B4FAE0(ctx, base);
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// lbz r7,81(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// addi r5,r1,81
	ctx.r5.s64 = ctx.r1.s64 + 81;
	// lbz r11,82(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r30,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r30.u8);
	// stb r8,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r8.u8);
	// stb r7,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r7.u8);
	// stb r11,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r11.u8);
	// bl 0x83b4fbe8
	ctx.lr = 0x837D3CAC;
	sub_83B4FBE8(ctx, base);
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lbz r7,81(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// li r31,0
	ctx.r31.s64 = 0;
	// lbz r5,82(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r9,82(r28)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + 82);
	// stb r30,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r30.u8);
	// addic r6,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r6.s64 = ctx.r9.s64 + -1;
	// lfs f0,-26260(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// stb r8,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r8.u8);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stb r7,93(r1)
	PPC_STORE_U8(ctx.r1.u32 + 93, ctx.r7.u8);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stb r5,94(r1)
	PPC_STORE_U8(ctx.r1.u32 + 94, ctx.r5.u8);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lwz r27,84(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lwz r26,88(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// subfe r30,r6,r9
	temp.u8 = (~ctx.r6.u32 + ctx.r9.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r6.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// lwz r25,92(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stb r31,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r31.u8);
loc_837D3D00:
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8373fed0
	ctx.lr = 0x837D3D14;
	sub_8373FED0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// stb r3,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r3.u8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d3d70
	if (cr6.eq) goto loc_837D3D70;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x837401a0
	ctx.lr = 0x837D3D34;
	sub_837401A0(ctx, base);
	// cmplwi cr6,r3,2
	cr6.compare<uint32_t>(ctx.r3.u32, 2, xer);
	// beq cr6,0x837d3d5c
	if (cr6.eq) goto loc_837D3D5C;
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// beq cr6,0x837d3d54
	if (cr6.eq) goto loc_837D3D54;
	// cmplwi cr6,r3,4
	cr6.compare<uint32_t>(ctx.r3.u32, 4, xer);
	// bne cr6,0x837d3d60
	if (!cr6.eq) goto loc_837D3D60;
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// b 0x837d3d60
	goto loc_837D3D60;
loc_837D3D54:
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// b 0x837d3d60
	goto loc_837D3D60;
loc_837D3D5C:
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
loc_837D3D60:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x837d37c8
	ctx.lr = 0x837D3D70;
	sub_837D37C8(ctx, base);
loc_837D3D70:
	// lwz r3,128(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 128);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,160(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837D3D88;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,11
	cr6.compare<uint32_t>(ctx.r31.u32, 11, xer);
	// blt cr6,0x837d3d00
	if (cr6.lt) goto loc_837D3D00;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_837D3DA0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D3DAC"))) PPC_WEAK_FUNC(sub_837D3DAC);
PPC_FUNC_IMPL(__imp__sub_837D3DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D3DB0"))) PPC_WEAK_FUNC(sub_837D3DB0);
PPC_FUNC_IMPL(__imp__sub_837D3DB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837D3DB8;
	__savegprlr_28(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x837d3f2c
	if (cr6.eq) goto loc_837D3F2C;
	// lwz r3,128(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837d3f2c
	if (cr6.eq) goto loc_837D3F2C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837D3DE8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837d3f2c
	if (cr6.eq) goto loc_837D3F2C;
	// bl 0x8378cba8
	ctx.lr = 0x837D3DF4;
	sub_8378CBA8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837d3f2c
	if (cr6.eq) goto loc_837D3F2C;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r5,27
	ctx.r5.s64 = 27;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a76558
	ctx.lr = 0x837D3E1C;
	sub_82A76558(ctx, base);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,28
	ctx.r5.s64 = 28;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a76558
	ctx.lr = 0x837D3E30;
	sub_82A76558(ctx, base);
	// lwz r10,648(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 648);
	// lwz r9,652(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwimi r9,r10,1,30,30
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0x2) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFFD);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// clrlwi r8,r9,30
	ctx.r8.u64 = ctx.r9.u32 & 0x3;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// beq cr6,0x837d3e60
	if (cr6.eq) goto loc_837D3E60;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x837d3e6c
	if (cr6.eq) goto loc_837D3E6C;
	// b 0x837d3ef0
	goto loc_837D3EF0;
loc_837D3E60:
	// lbz r11,82(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 82);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d3ef0
	if (cr6.eq) goto loc_837D3EF0;
loc_837D3E6C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8378d158
	ctx.lr = 0x837D3E74;
	sub_8378D158(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8378fc88
	ctx.lr = 0x837D3E84;
	sub_8378FC88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d3ef0
	if (cr6.eq) goto loc_837D3EF0;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d3ebc
	if (cr6.eq) goto loc_837D3EBC;
	// lwz r10,648(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 648);
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// lwz r11,652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbzx r7,r8,r9
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x837d3ef0
	if (cr6.eq) goto loc_837D3EF0;
loc_837D3EBC:
	// lwz r11,648(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 648);
	// addi r9,r1,204
	ctx.r9.s64 = ctx.r1.s64 + 204;
	// lwz r10,652(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// li r8,1
	ctx.r8.s64 = 1;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x837d3ef0
	if (cr6.eq) goto loc_837D3EF0;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x837b9418
	ctx.lr = 0x837D3EEC;
	sub_837B9418(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
loc_837D3EF0:
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837D3F08;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,80(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 80);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x837D3F20;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_837D3F2C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D3F38"))) PPC_WEAK_FUNC(sub_837D3F38);
PPC_FUNC_IMPL(__imp__sub_837D3F38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837D3F40;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x837d3fe4
	if (cr6.eq) goto loc_837D3FE4;
	// lwz r3,128(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837d3fe4
	if (cr6.eq) goto loc_837D3FE4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837D3F70;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837d3fe4
	if (cr6.eq) goto loc_837D3FE4;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r5,29
	ctx.r5.s64 = 29;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a76558
	ctx.lr = 0x837D3F94;
	sub_82A76558(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x837d3fbc
	if (cr6.lt) goto loc_837D3FBC;
	// beq cr6,0x837d3fb0
	if (cr6.eq) goto loc_837D3FB0;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x837d3fc0
	goto loc_837D3FC0;
loc_837D3FB0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x837d3fc0
	goto loc_837D3FC0;
loc_837D3FBC:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
loc_837D3FC0:
	// lwz r3,128(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 128);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837D3FD8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_837D3FE4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D3FF0"))) PPC_WEAK_FUNC(sub_837D3FF0);
PPC_FUNC_IMPL(__imp__sub_837D3FF0) {
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
	// lwz r3,128(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x837d4020
	if (!cr6.eq) goto loc_837D4020;
loc_837D4018:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x837d4080
	goto loc_837D4080;
loc_837D4020:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837D4030;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837d4018
	if (cr6.eq) goto loc_837D4018;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,31
	ctx.r5.s64 = 31;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a76558
	ctx.lr = 0x837D4050;
	sub_82A76558(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,112(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 112);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x837D407C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_837D4080:
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

__attribute__((alias("__imp__sub_837D4098"))) PPC_WEAK_FUNC(sub_837D4098);
PPC_FUNC_IMPL(__imp__sub_837D4098) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x837d4188
	if (cr6.eq) goto loc_837D4188;
	// lwz r3,128(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837d4188
	if (cr6.eq) goto loc_837D4188;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837D40D8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837d4188
	if (cr6.eq) goto loc_837D4188;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,118
	ctx.r5.s64 = 118;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a76558
	ctx.lr = 0x837D40F8;
	sub_82A76558(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837d4188
	if (cr6.eq) goto loc_837D4188;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x83744b48
	ctx.lr = 0x837D4114;
	sub_83744B48(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d4188
	if (cr6.eq) goto loc_837D4188;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f0,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
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
	// bl 0x837d37c8
	ctx.lr = 0x837D4158;
	sub_837D37C8(ctx, base);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837d37c8
	ctx.lr = 0x837D4168;
	sub_837D37C8(ctx, base);
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,148(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x837D4180;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x837d418c
	goto loc_837D418C;
loc_837D4188:
	// li r3,0
	ctx.r3.s64 = 0;
loc_837D418C:
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

__attribute__((alias("__imp__sub_837D41A4"))) PPC_WEAK_FUNC(sub_837D41A4);
PPC_FUNC_IMPL(__imp__sub_837D41A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D41A8"))) PPC_WEAK_FUNC(sub_837D41A8);
PPC_FUNC_IMPL(__imp__sub_837D41A8) {
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
	// lwz r3,128(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x837d41d8
	if (!cr6.eq) goto loc_837D41D8;
loc_837D41D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x837d420c
	goto loc_837D420C;
loc_837D41D8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837D41E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837d41d0
	if (cr6.eq) goto loc_837D41D0;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,168(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837D4208;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_837D420C:
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

__attribute__((alias("__imp__sub_837D4224"))) PPC_WEAK_FUNC(sub_837D4224);
PPC_FUNC_IMPL(__imp__sub_837D4224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D4228"))) PPC_WEAK_FUNC(sub_837D4228);
PPC_FUNC_IMPL(__imp__sub_837D4228) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x837D4230;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,648(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 648);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x82aacdd8
	ctx.lr = 0x837D4248;
	sub_82AACDD8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x837cafb8
	ctx.lr = 0x837D4250;
	sub_837CAFB8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r29,0
	ctx.r29.s64 = 0;
	// beq cr6,0x837d4260
	if (cr6.eq) goto loc_837D4260;
	// lwz r29,60(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
loc_837D4260:
	// li r28,1
	ctx.r28.s64 = 1;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// beq cr6,0x837d42ac
	if (cr6.eq) goto loc_837D42AC;
	// lwz r11,624(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 624);
	// clrlwi r11,r11,14
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFF;
	// cmplwi cr6,r11,2469
	cr6.compare<uint32_t>(ctx.r11.u32, 2469, xer);
	// beq cr6,0x837d42ac
	if (cr6.eq) goto loc_837D42AC;
	// lis r10,3
	ctx.r10.s64 = 196608;
	// ori r9,r10,65523
	ctx.r9.u64 = ctx.r10.u64 | 65523;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x837d42ac
	if (cr6.eq) goto loc_837D42AC;
	// li r5,118
	ctx.r5.s64 = 118;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a713f0
	ctx.lr = 0x837D42A0;
	sub_82A713F0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x837d42c4
	if (!cr6.eq) goto loc_837D42C4;
loc_837D42AC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r28,148(r31)
	PPC_STORE_U8(ctx.r31.u32 + 148, ctx.r28.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_837D42C4:
	// stw r29,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r29.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r28,148(r31)
	PPC_STORE_U8(ctx.r31.u32 + 148, ctx.r28.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D42D8"))) PPC_WEAK_FUNC(sub_837D42D8);
PPC_FUNC_IMPL(__imp__sub_837D42D8) {
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
	// lwz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d4364
	if (cr6.eq) goto loc_837D4364;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x837d4364
	if (cr6.eq) goto loc_837D4364;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,648(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 648);
	// lwz r9,652(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 652);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// rlwimi r9,r10,1,30,30
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0x2) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFFD);
	// stb r11,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r11.u8);
	// clrlwi r30,r9,30
	ctx.r30.u64 = ctx.r9.u32 & 0x3;
	// bl 0x83b4f9a0
	ctx.lr = 0x837D432C;
	sub_83B4F9A0(ctx, base);
	// lwz r7,116(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r8,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r8.u8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r11,52(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 52);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x837D435C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x837d4368
	goto loc_837D4368;
loc_837D4364:
	// li r3,0
	ctx.r3.s64 = 0;
loc_837D4368:
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

__attribute__((alias("__imp__sub_837D4380"))) PPC_WEAK_FUNC(sub_837D4380);
PPC_FUNC_IMPL(__imp__sub_837D4380) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837D4388;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d4520
	if (cr6.eq) goto loc_837D4520;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x837d4520
	if (cr6.eq) goto loc_837D4520;
	// li r5,107
	ctx.r5.s64 = 107;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a713f0
	ctx.lr = 0x837D43BC;
	sub_82A713F0(ctx, base);
	// li r5,108
	ctx.r5.s64 = 108;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a713f0
	ctx.lr = 0x837D43CC;
	sub_82A713F0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r28,r10,21716
	ctx.r28.s64 = ctx.r10.s64 + 21716;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// lfs f31,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// stfs f31,140(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83745340
	ctx.lr = 0x837D440C;
	sub_83745340(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837455f8
	ctx.lr = 0x837D4430;
	sub_837455F8(ctx, base);
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r7,r1,82
	ctx.r7.s64 = ctx.r1.s64 + 82;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,81
	ctx.r5.s64 = ctx.r1.s64 + 81;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83b4ff78
	ctx.lr = 0x837D444C;
	sub_83B4FF78(ctx, base);
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// lbz r7,81(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// li r30,1
	ctx.r30.s64 = 1;
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// lbz r6,82(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// rlwimi r8,r7,8,16,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 8) & 0xFF00) | (ctx.r8.u64 & 0xFFFFFFFFFFFF00FF);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r31,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r31.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r31,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r31.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stw r31,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r31.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r31,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r31.u32);
	// clrlwi r9,r8,16
	ctx.r9.u64 = ctx.r8.u32 & 0xFFFF;
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// rlwimi r6,r9,8,0,23
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFFFFFF00) | (ctx.r6.u64 & 0xFFFFFFFF000000FF);
	// stb r31,204(r1)
	PPC_STORE_U8(ctx.r1.u32 + 204, ctx.r31.u8);
	// stb r31,212(r1)
	PPC_STORE_U8(ctx.r1.u32 + 212, ctx.r31.u8);
	// stfs f31,200(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// rlwinm r7,r6,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// stb r31,216(r1)
	PPC_STORE_U8(ctx.r1.u32 + 216, ctx.r31.u8);
	// stfs f31,208(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stb r30,196(r1)
	PPC_STORE_U8(ctx.r1.u32 + 196, ctx.r30.u8);
	// ori r6,r7,255
	ctx.r6.u64 = ctx.r7.u64 | 255;
	// stfs f0,188(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f13,192(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stb r30,184(r1)
	PPC_STORE_U8(ctx.r1.u32 + 184, ctx.r30.u8);
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// lwz r10,648(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 648);
	// lwz r8,652(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 652);
	// rlwimi r8,r10,1,30,30
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0x2) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFFD);
	// clrlwi r31,r8,30
	ctx.r31.u64 = ctx.r8.u32 & 0x3;
	// bl 0x837d37c8
	ctx.lr = 0x837D44E0;
	sub_837D37C8(ctx, base);
	// lfs f12,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,200(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stb r30,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r30.u8);
	// stb r30,204(r1)
	PPC_STORE_U8(ctx.r1.u32 + 204, ctx.r30.u8);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// stb r30,216(r1)
	PPC_STORE_U8(ctx.r1.u32 + 216, ctx.r30.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,116(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 116);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837D4510;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_837D4520:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D4530"))) PPC_WEAK_FUNC(sub_837D4530);
PPC_FUNC_IMPL(__imp__sub_837D4530) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837D4538;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d4710
	if (cr6.eq) goto loc_837D4710;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x837d4710
	if (cr6.eq) goto loc_837D4710;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r5,110
	ctx.r5.s64 = 110;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a713f0
	ctx.lr = 0x837D4574;
	sub_82A713F0(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,9008
	ctx.r11.s64 = ctx.r11.s64 + 9008;
	// lfs f31,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// bne cr6,0x837d45a4
	if (!cr6.eq) goto loc_837D45A4;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f0,8976(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8976);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// b 0x837d462c
	goto loc_837D462C;
loc_837D45A4:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stfs f31,156(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// addi r28,r10,21716
	ctx.r28.s64 = ctx.r10.s64 + 21716;
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r31.u32);
	// li r5,112
	ctx.r5.s64 = 112;
	// stw r28,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a713f0
	ctx.lr = 0x837D45D0;
	sub_82A713F0(ctx, base);
	// li r5,111
	ctx.r5.s64 = 111;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a713f0
	ctx.lr = 0x837D45E0;
	sub_82A713F0(ctx, base);
	// li r5,113
	ctx.r5.s64 = 113;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a713f0
	ctx.lr = 0x837D45F0;
	sub_82A713F0(ctx, base);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83745340
	ctx.lr = 0x837D4608;
	sub_83745340(ctx, base);
	// addi r9,r1,108
	ctx.r9.s64 = ctx.r1.s64 + 108;
	// addi r8,r1,104
	ctx.r8.s64 = ctx.r1.s64 + 104;
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x83745770
	ctx.lr = 0x837D4628;
	sub_83745770(ctx, base);
	// stw r28,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r28.u32);
loc_837D462C:
	// addi r7,r1,82
	ctx.r7.s64 = ctx.r1.s64 + 82;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,81
	ctx.r5.s64 = ctx.r1.s64 + 81;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83b4ffc0
	ctx.lr = 0x837D4644;
	sub_83B4FFC0(ctx, base);
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// lbz r9,81(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// li r30,1
	ctx.r30.s64 = 1;
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// lbz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// rlwimi r10,r9,8,16,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF00FF);
	// lwz r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// rlwimi r8,r11,8,0,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFFFFFF00) | (ctx.r8.u64 & 0xFFFFFFFF000000FF);
	// stb r31,220(r1)
	PPC_STORE_U8(ctx.r1.u32 + 220, ctx.r31.u8);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// stfs f31,216(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// rlwinm r9,r8,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// stfs f0,204(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stfs f13,208(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stb r30,212(r1)
	PPC_STORE_U8(ctx.r1.u32 + 212, ctx.r30.u8);
	// ori r8,r9,255
	ctx.r8.u64 = ctx.r9.u64 | 255;
	// stb r30,200(r1)
	PPC_STORE_U8(ctx.r1.u32 + 200, ctx.r30.u8);
	// stw r7,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r7.u32);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// lwz r6,648(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 648);
	// lwz r10,652(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 652);
	// rlwimi r10,r6,1,30,30
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r6.u32, 1) & 0x2) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFD);
	// clrlwi r31,r10,30
	ctx.r31.u64 = ctx.r10.u32 & 0x3;
	// bl 0x837d37c8
	ctx.lr = 0x837D46D0;
	sub_837D37C8(ctx, base);
	// lfs f12,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,216(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stb r30,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r30.u8);
	// stb r30,220(r1)
	PPC_STORE_U8(ctx.r1.u32 + 220, ctx.r30.u8);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// stb r30,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r30.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,116(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 116);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,64(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 64);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x837D4700;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_837D4710:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D4720"))) PPC_WEAK_FUNC(sub_837D4720);
PPC_FUNC_IMPL(__imp__sub_837D4720) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x837D4728;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d4934
	if (cr6.eq) goto loc_837D4934;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x837d4934
	if (cr6.eq) goto loc_837D4934;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r5,114
	ctx.r5.s64 = 114;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a713f0
	ctx.lr = 0x837D4764;
	sub_82A713F0(ctx, base);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r26,1
	ctx.r26.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x837d4834
	if (cr6.eq) goto loc_837D4834;
	// cmplwi cr6,r9,2
	cr6.compare<uint32_t>(ctx.r9.u32, 2, xer);
	// bgt cr6,0x837d4834
	if (cr6.gt) goto loc_837D4834;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r31.u32);
	// addi r11,r11,9008
	ctx.r11.s64 = ctx.r11.s64 + 9008;
	// addi r30,r10,21716
	ctx.r30.s64 = ctx.r10.s64 + 21716;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// lfs f31,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,156(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// bne cr6,0x837d47b8
	if (!cr6.eq) goto loc_837D47B8;
	// li r27,3
	ctx.r27.s64 = 3;
	// b 0x837d47c0
	goto loc_837D47C0;
loc_837D47B8:
	// li r27,4
	ctx.r27.s64 = 4;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_837D47C0:
	// li r5,116
	ctx.r5.s64 = 116;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a713f0
	ctx.lr = 0x837D47D0;
	sub_82A713F0(ctx, base);
	// li r5,115
	ctx.r5.s64 = 115;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a713f0
	ctx.lr = 0x837D47E0;
	sub_82A713F0(ctx, base);
	// li r5,117
	ctx.r5.s64 = 117;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a713f0
	ctx.lr = 0x837D47F0;
	sub_82A713F0(ctx, base);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83745340
	ctx.lr = 0x837D4808;
	sub_83745340(ctx, base);
	// addi r10,r1,108
	ctx.r10.s64 = ctx.r1.s64 + 108;
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// lwz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x837458d8
	ctx.lr = 0x837D482C;
	sub_837458D8(ctx, base);
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// b 0x837d4854
	goto loc_837D4854;
loc_837D4834:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,9008
	ctx.r11.s64 = ctx.r11.s64 + 9008;
	// lfs f0,8976(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8976);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
loc_837D4854:
	// addi r7,r1,82
	ctx.r7.s64 = ctx.r1.s64 + 82;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,81
	ctx.r5.s64 = ctx.r1.s64 + 81;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83b50008
	ctx.lr = 0x837D486C;
	sub_83B50008(ctx, base);
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// lbz r9,81(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lbz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// rlwimi r10,r9,8,16,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF00FF);
	// lwz r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// rlwimi r8,r11,8,0,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFFFFFF00) | (ctx.r8.u64 & 0xFFFFFFFF000000FF);
	// stb r31,220(r1)
	PPC_STORE_U8(ctx.r1.u32 + 220, ctx.r31.u8);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// stfs f31,216(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// rlwinm r9,r8,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// stfs f0,204(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stfs f13,208(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stb r26,212(r1)
	PPC_STORE_U8(ctx.r1.u32 + 212, ctx.r26.u8);
	// ori r8,r9,255
	ctx.r8.u64 = ctx.r9.u64 | 255;
	// stb r26,200(r1)
	PPC_STORE_U8(ctx.r1.u32 + 200, ctx.r26.u8);
	// stw r7,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r7.u32);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// lwz r6,648(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 648);
	// lwz r10,652(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 652);
	// rlwimi r10,r6,1,30,30
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r6.u32, 1) & 0x2) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFD);
	// clrlwi r31,r10,30
	ctx.r31.u64 = ctx.r10.u32 & 0x3;
	// bl 0x837d37c8
	ctx.lr = 0x837D48F4;
	sub_837D37C8(ctx, base);
	// lfs f12,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,216(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stb r26,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r26.u8);
	// stb r26,220(r1)
	PPC_STORE_U8(ctx.r1.u32 + 220, ctx.r26.u8);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// stb r26,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r26.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,116(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 116);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,56(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 56);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x837D4924;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_837D4934:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D4944"))) PPC_WEAK_FUNC(sub_837D4944);
PPC_FUNC_IMPL(__imp__sub_837D4944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D4948"))) PPC_WEAK_FUNC(sub_837D4948);
PPC_FUNC_IMPL(__imp__sub_837D4948) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837D4950;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d4b48
	if (cr6.eq) goto loc_837D4B48;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x837d4b48
	if (cr6.eq) goto loc_837D4B48;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r5,102
	ctx.r5.s64 = 102;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a713f0
	ctx.lr = 0x837D498C;
	sub_82A713F0(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837d49bc
	if (!cr6.eq) goto loc_837D49BC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,9008
	ctx.r11.s64 = ctx.r11.s64 + 9008;
	// lfs f0,8976(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8976);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// b 0x837d4a3c
	goto loc_837D4A3C;
loc_837D49BC:
	// li r5,103
	ctx.r5.s64 = 103;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a713f0
	ctx.lr = 0x837D49CC;
	sub_82A713F0(ctx, base);
	// li r5,104
	ctx.r5.s64 = 104;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a713f0
	ctx.lr = 0x837D49DC;
	sub_82A713F0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// addi r11,r11,9008
	ctx.r11.s64 = ctx.r11.s64 + 9008;
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// addi r28,r10,21716
	ctx.r28.s64 = ctx.r10.s64 + 21716;
	// addi r7,r1,108
	ctx.r7.s64 = ctx.r1.s64 + 108;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f31,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stfs f31,140(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// bl 0x83745340
	ctx.lr = 0x837D4A1C;
	sub_83745340(ctx, base);
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// lwz r5,108(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837454d8
	ctx.lr = 0x837D4A38;
	sub_837454D8(ctx, base);
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
loc_837D4A3C:
	// addi r7,r1,81
	ctx.r7.s64 = ctx.r1.s64 + 81;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83b4ff38
	ctx.lr = 0x837D4A54;
	sub_83B4FF38(ctx, base);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r5,106
	ctx.r5.s64 = 106;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a713f0
	ctx.lr = 0x837D4A68;
	sub_82A713F0(ctx, base);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// li r30,1
	ctx.r30.s64 = 1;
	// lbz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// rlwimi r10,r9,8,16,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF00FF);
	// lwz r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// rlwimi r8,r11,8,0,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFFFFFF00) | (ctx.r8.u64 & 0xFFFFFFFF000000FF);
	// stw r31,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r31.u32);
	// stb r31,184(r1)
	PPC_STORE_U8(ctx.r1.u32 + 184, ctx.r31.u8);
	// stfs f31,208(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// rlwinm r9,r8,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// stb r31,212(r1)
	PPC_STORE_U8(ctx.r1.u32 + 212, ctx.r31.u8);
	// stb r31,216(r1)
	PPC_STORE_U8(ctx.r1.u32 + 216, ctx.r31.u8);
	// stfs f0,196(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// ori r8,r9,255
	ctx.r8.u64 = ctx.r9.u64 | 255;
	// stfs f13,200(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stb r30,204(r1)
	PPC_STORE_U8(ctx.r1.u32 + 204, ctx.r30.u8);
	// stb r30,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r30.u8);
	// stw r7,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r7.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lwz r6,648(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 648);
	// lwz r10,652(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 652);
	// rlwimi r10,r6,1,30,30
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r6.u32, 1) & 0x2) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFD);
	// clrlwi r31,r10,30
	ctx.r31.u64 = ctx.r10.u32 & 0x3;
	// bl 0x837d37c8
	ctx.lr = 0x837D4AFC;
	sub_837D37C8(ctx, base);
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lfs f12,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// stb r30,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r30.u8);
	// stfs f12,208(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stb r30,212(r1)
	PPC_STORE_U8(ctx.r1.u32 + 212, ctx.r30.u8);
	// stb r30,184(r1)
	PPC_STORE_U8(ctx.r1.u32 + 184, ctx.r30.u8);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// stb r30,216(r1)
	PPC_STORE_U8(ctx.r1.u32 + 216, ctx.r30.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r7,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r7.u32);
	// lwz r3,116(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 116);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x837D4B38;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_837D4B48:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D4B58"))) PPC_WEAK_FUNC(sub_837D4B58);
PPC_FUNC_IMPL(__imp__sub_837D4B58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837D4B60;
	__savegprlr_29(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,128(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837d4c0c
	if (cr6.eq) goto loc_837D4C0C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837D4B8C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837d4c0c
	if (cr6.eq) goto loc_837D4C0C;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x833f6d60
	ctx.lr = 0x837D4B9C;
	sub_833F6D60(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83744e50
	ctx.lr = 0x837D4BA8;
	sub_83744E50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837d4bcc
	if (!cr6.eq) goto loc_837D4BCC;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	// bl 0x837b7300
	ctx.lr = 0x837D4BC0;
	sub_837B7300(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837d4c5c
	if (!cr6.eq) goto loc_837D4C5C;
loc_837D4BCC:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x837D4BE4;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837d4c18
	if (cr6.eq) goto loc_837D4C18;
	// bl 0x834aadc8
	ctx.lr = 0x837D4BF0;
	sub_834AADC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x837d4c24
	if (!cr6.eq) goto loc_837D4C24;
loc_837D4C00:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82572fa0
	ctx.lr = 0x837D4C0C;
	sub_82572FA0(ctx, base);
loc_837D4C0C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_837D4C18:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// b 0x837d4c00
	goto loc_837D4C00;
loc_837D4C24:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83745078
	ctx.lr = 0x837D4C2C;
	sub_83745078(ctx, base);
	// stw r29,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r29.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x83421e68
	ctx.lr = 0x837D4C3C;
	sub_83421E68(ctx, base);
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837D4C54;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x837d3868
	ctx.lr = 0x837D4C5C;
	sub_837D3868(ctx, base);
loc_837D4C5C:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82572fa0
	ctx.lr = 0x837D4C68;
	sub_82572FA0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D4C74"))) PPC_WEAK_FUNC(sub_837D4C74);
PPC_FUNC_IMPL(__imp__sub_837D4C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D4C78"))) PPC_WEAK_FUNC(sub_837D4C78);
PPC_FUNC_IMPL(__imp__sub_837D4C78) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x837d4d4c
	if (cr6.eq) goto loc_837D4D4C;
	// lwz r3,128(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837d4d4c
	if (cr6.eq) goto loc_837D4D4C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837D4CB8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837d4d4c
	if (cr6.eq) goto loc_837D4D4C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a76558
	ctx.lr = 0x837D4CD8;
	sub_82A76558(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837d4cfc
	if (!cr6.eq) goto loc_837D4CFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	// bl 0x837b7300
	ctx.lr = 0x837D4CF0;
	sub_837B7300(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837d4d3c
	if (!cr6.eq) goto loc_837D4D3C;
loc_837D4CFC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x833e2180
	ctx.lr = 0x837D4D04;
	sub_833E2180(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83746358
	ctx.lr = 0x837D4D10;
	sub_83746358(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d4d44
	if (cr6.eq) goto loc_837D4D44;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837D4D34;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837d38f8
	ctx.lr = 0x837D4D3C;
	sub_837D38F8(ctx, base);
loc_837D4D3C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x837d4d50
	goto loc_837D4D50;
loc_837D4D44:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837d38f8
	ctx.lr = 0x837D4D4C;
	sub_837D38F8(ctx, base);
loc_837D4D4C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_837D4D50:
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

__attribute__((alias("__imp__sub_837D4D68"))) PPC_WEAK_FUNC(sub_837D4D68);
PPC_FUNC_IMPL(__imp__sub_837D4D68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837D4D70;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,128(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,2
	ctx.r29.s64 = 2;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x837d4d94
	if (cr6.eq) goto loc_837D4D94;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x837D4D94;
	sub_825952B8(ctx, base);
loc_837D4D94:
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// lwz r4,112(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x837d4dbc
	if (cr6.eq) goto loc_837D4DBC;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x837D4DBC;
	sub_825952B8(ctx, base);
loc_837D4DBC:
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x837d4de0
	if (cr6.eq) goto loc_837D4DE0;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825952b8
	ctx.lr = 0x837D4DE0;
	sub_825952B8(ctx, base);
loc_837D4DE0:
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x837d4e04
	if (cr6.eq) goto loc_837D4E04;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x825952b8
	ctx.lr = 0x837D4E04;
	sub_825952B8(ctx, base);
loc_837D4E04:
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D4E18"))) PPC_WEAK_FUNC(sub_837D4E18);
PPC_FUNC_IMPL(__imp__sub_837D4E18) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r10,r3,20
	ctx.r10.s64 = ctx.r3.s64 + 20;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r10,r3,40
	ctx.r10.s64 = ctx.r3.s64 + 40;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// addi r10,r3,60
	ctx.r10.s64 = ctx.r3.s64 + 60;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stb r11,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r11.u8);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stb r11,36(r3)
	PPC_STORE_U8(ctx.r3.u32 + 36, ctx.r11.u8);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stb r11,56(r3)
	PPC_STORE_U8(ctx.r3.u32 + 56, ctx.r11.u8);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stb r11,76(r3)
	PPC_STORE_U8(ctx.r3.u32 + 76, ctx.r11.u8);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// stw r11,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// stw r11,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// stw r11,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r11.u32);
	// stw r11,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r11.u32);
	// stw r11,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r11.u32);
	// stb r11,148(r3)
	PPC_STORE_U8(ctx.r3.u32 + 148, ctx.r11.u8);
	// stw r11,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r11.u32);
	// stw r11,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r11.u32);
	// stw r9,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r9.u32);
	// stw r11,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r11.u32);
	// stw r11,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r11.u32);
	// stw r11,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, ctx.r11.u32);
	// stb r11,176(r3)
	PPC_STORE_U8(ctx.r3.u32 + 176, ctx.r11.u8);
	// stb r11,180(r3)
	PPC_STORE_U8(ctx.r3.u32 + 180, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837D4ED8"))) PPC_WEAK_FUNC(sub_837D4ED8);
PPC_FUNC_IMPL(__imp__sub_837D4ED8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x837d4f5c
	if (cr6.eq) goto loc_837D4F5C;
	// lwz r3,128(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837d4f5c
	if (cr6.eq) goto loc_837D4F5C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837D4F18;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837d4f5c
	if (cr6.eq) goto loc_837D4F5C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837d3948
	ctx.lr = 0x837D4F2C;
	sub_837D3948(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x837cabd8
	ctx.lr = 0x837D4F48;
	sub_837CABD8(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x837d4f78
	if (!cr6.eq) goto loc_837D4F78;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x837D4F5C;
	sub_8387E8E0(ctx, base);
loc_837D4F5C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_837D4F60:
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
loc_837D4F78:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8292a3f8
	ctx.lr = 0x837D4F84;
	sub_8292A3F8(ctx, base);
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837D4F9C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x837D4FA4;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x837D4FAC;
	sub_8387E8E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x837d4f60
	goto loc_837D4F60;
}

__attribute__((alias("__imp__sub_837D4FB4"))) PPC_WEAK_FUNC(sub_837D4FB4);
PPC_FUNC_IMPL(__imp__sub_837D4FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D4FB8"))) PPC_WEAK_FUNC(sub_837D4FB8);
PPC_FUNC_IMPL(__imp__sub_837D4FB8) {
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
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d507c
	if (cr6.eq) goto loc_837D507C;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x837d507c
	if (cr6.eq) goto loc_837D507C;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x837d4e18
	ctx.lr = 0x837D4FF0;
	sub_837D4E18(ctx, base);
	// lwz r11,648(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 648);
	// lwz r10,652(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// rlwimi r10,r11,1,30,30
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 1) & 0x2) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFD);
	// addi r5,r1,82
	ctx.r5.s64 = ctx.r1.s64 + 82;
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// clrlwi r30,r10,30
	ctx.r30.u64 = ctx.r10.u32 & 0x3;
	// bl 0x83b4f9d8
	ctx.lr = 0x837D5014;
	sub_83B4F9D8(ctx, base);
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r9,82(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// rlwimi r9,r8,8,16,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// clrlwi r6,r9,16
	ctx.r6.u64 = ctx.r9.u32 & 0xFFFF;
	// rlwimi r7,r6,8,0,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 8) & 0xFFFFFF00) | (ctx.r7.u64 & 0xFFFFFFFF000000FF);
	// rlwinm r11,r7,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// ori r10,r11,255
	ctx.r10.u64 = ctx.r11.u64 | 255;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x837d37c8
	ctx.lr = 0x837D5048;
	sub_837D37C8(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stb r9,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r9.u8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,88(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 88);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x837D506C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x837d4d68
	ctx.lr = 0x837D5074;
	sub_837D4D68(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x837d5080
	goto loc_837D5080;
loc_837D507C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_837D5080:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837D5098"))) PPC_WEAK_FUNC(sub_837D5098);
PPC_FUNC_IMPL(__imp__sub_837D5098) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x837D50A0;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83b4f9d8
	ctx.lr = 0x837D50C4;
	sub_83B4F9D8(ctx, base);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r9,81(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lbz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// li r28,1
	ctx.r28.s64 = 1;
	// rlwimi r10,r9,8,16,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF00FF);
	// li r31,0
	ctx.r31.s64 = 0;
	// stb r28,16(r30)
	PPC_STORE_U8(ctx.r30.u32 + 16, ctx.r28.u8);
	// clrlwi r7,r10,16
	ctx.r7.u64 = ctx.r10.u32 & 0xFFFF;
	// lfs f31,21700(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21700);
	ctx.f31.f64 = double(temp.f32);
	// addi r26,r30,80
	ctx.r26.s64 = ctx.r30.s64 + 80;
	// rlwimi r8,r7,8,0,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 8) & 0xFFFFFF00) | (ctx.r8.u64 & 0xFFFFFFFF000000FF);
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// rlwinm r6,r8,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// ori r5,r6,255
	ctx.r5.u64 = ctx.r6.u64 | 255;
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// lbz r5,91(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 91);
	// lbz r8,89(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 89);
	// lbz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// lbz r11,90(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 90);
	// std r4,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r4.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f11,96(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f8,f13
	ctx.f8.f64 = double(ctx.f13.s64);
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// fcfid f7,f0
	ctx.f7.f64 = double(ctx.f0.s64);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// fcfid f9,f12
	ctx.f9.f64 = double(ctx.f12.s64);
	// frsp f6,f10
	ctx.f6.f64 = double(float(ctx.f10.f64));
	// frsp f4,f8
	ctx.f4.f64 = double(float(ctx.f8.f64));
	// frsp f3,f7
	ctx.f3.f64 = double(float(ctx.f7.f64));
	// frsp f5,f9
	ctx.f5.f64 = double(float(ctx.f9.f64));
	// fmuls f2,f6,f31
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// stfs f2,8(r30)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// fmuls f0,f4,f31
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fmuls f13,f3,f31
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f31.f64));
	// stfs f13,12(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// fmuls f1,f5,f31
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f31.f64));
	// stfs f1,4(r30)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
loc_837D5178:
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// addi r7,r1,82
	ctx.r7.s64 = ctx.r1.s64 + 82;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,81
	ctx.r5.s64 = ctx.r1.s64 + 81;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83b4fe58
	ctx.lr = 0x837D5194;
	sub_83B4FE58(ctx, base);
	// lbz r9,81(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r11,r1,132
	ctx.r11.s64 = ctx.r1.s64 + 132;
	// lbz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// rlwimi r10,r9,8,16,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF00FF);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// clrlwi r6,r10,16
	ctx.r6.u64 = ctx.r10.u32 & 0xFFFF;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// rlwimi r8,r6,8,0,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r6.u32, 8) & 0xFFFFFF00) | (ctx.r8.u64 & 0xFFFFFFFF000000FF);
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// rlwinm r5,r8,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// stw r7,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r7.u32);
	// ori r11,r5,255
	ctx.r11.u64 = ctx.r5.u64 | 255;
	// stb r28,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r28.u8);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lbz r6,90(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 90);
	// lbz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// lbz r7,89(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 89);
	// std r8,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r8.u64);
	// lfd f13,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// std r6,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r6.u64);
	// lfd f11,120(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// lbz r11,91(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 91);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// std r7,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r7.u64);
	// lfd f12,112(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f8,f13
	ctx.f8.f64 = double(ctx.f13.s64);
	// fcfid f7,f0
	ctx.f7.f64 = double(ctx.f0.s64);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// fcfid f9,f12
	ctx.f9.f64 = double(ctx.f12.s64);
	// frsp f4,f8
	ctx.f4.f64 = double(float(ctx.f8.f64));
	// frsp f3,f7
	ctx.f3.f64 = double(float(ctx.f7.f64));
	// frsp f6,f10
	ctx.f6.f64 = double(float(ctx.f10.f64));
	// frsp f5,f9
	ctx.f5.f64 = double(float(ctx.f9.f64));
	// fmuls f0,f4,f31
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmuls f13,f3,f31
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f31.f64));
	// stfs f13,144(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fmuls f2,f6,f31
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// stfs f2,140(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fmuls f1,f5,f31
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f31.f64));
	// stfs f1,136(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x82d208d0
	ctx.lr = 0x837D525C;
	sub_82D208D0(ctx, base);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplwi cr6,r27,5
	cr6.compare<uint32_t>(ctx.r27.u32, 5, xer);
	// blt cr6,0x837d5178
	if (cr6.lt) goto loc_837D5178;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83b4fae0
	ctx.lr = 0x837D527C;
	sub_83B4FAE0(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// lbz r9,82(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// addi r26,r30,96
	ctx.r26.s64 = ctx.r30.s64 + 96;
	// rlwimi r11,r10,8,16,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF00) | (ctx.r11.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwimi r9,r8,8,0,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xFFFFFF00) | (ctx.r9.u64 & 0xFFFFFFFF000000FF);
	// rlwinm r7,r9,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// ori r6,r7,255
	ctx.r6.u64 = ctx.r7.u64 | 255;
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// lbz r4,89(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 89);
	// lbz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// lbz r3,91(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 91);
	// lbz r5,90(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 90);
	// std r5,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r5.u64);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// std r4,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r4.u64);
	// fcfid f9,f0
	ctx.f9.f64 = double(ctx.f0.s64);
	// std r6,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r6.u64);
	// frsp f5,f9
	ctx.f5.f64 = double(float(ctx.f9.f64));
	// lfd f12,120(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// std r3,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r3.u64);
	// lfd f13,112(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f7,f12
	ctx.f7.f64 = double(ctx.f12.s64);
	// lfd f11,120(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f8,f13
	ctx.f8.f64 = double(ctx.f13.s64);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f6,f10
	ctx.f6.f64 = double(float(ctx.f10.f64));
	// frsp f4,f8
	ctx.f4.f64 = double(float(ctx.f8.f64));
	// frsp f3,f7
	ctx.f3.f64 = double(float(ctx.f7.f64));
	// fmuls f1,f5,f31
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f31.f64));
	// stfs f1,28(r30)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 28, temp.u32);
	// fmuls f2,f6,f31
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// stfs f2,32(r30)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r30.u32 + 32, temp.u32);
	// fmuls f0,f4,f31
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f0,20(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// fmuls f13,f3,f31
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f31.f64));
	// stfs f13,24(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 24, temp.u32);
	// stb r28,36(r30)
	PPC_STORE_U8(ctx.r30.u32 + 36, ctx.r28.u8);
loc_837D531C:
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// addi r7,r1,82
	ctx.r7.s64 = ctx.r1.s64 + 82;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,81
	ctx.r5.s64 = ctx.r1.s64 + 81;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83b4fe90
	ctx.lr = 0x837D5338;
	sub_83B4FE90(ctx, base);
	// lbz r9,81(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r11,r1,132
	ctx.r11.s64 = ctx.r1.s64 + 132;
	// lbz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// rlwimi r10,r9,8,16,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF00FF);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// clrlwi r6,r10,16
	ctx.r6.u64 = ctx.r10.u32 & 0xFFFF;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// rlwimi r8,r6,8,0,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r6.u32, 8) & 0xFFFFFF00) | (ctx.r8.u64 & 0xFFFFFFFF000000FF);
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// rlwinm r5,r8,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// stw r7,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r7.u32);
	// ori r11,r5,255
	ctx.r11.u64 = ctx.r5.u64 | 255;
	// stb r28,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r28.u8);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lbz r6,89(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 89);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// lbz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// lbz r9,90(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 90);
	// lbz r6,91(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 91);
	// std r6,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r6.u64);
	// lfd f13,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// std r7,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r7.u64);
	// lfd f11,104(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// std r9,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r9.u64);
	// lfd f0,120(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f9,96(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fcfid f7,f9
	ctx.f7.f64 = double(ctx.f9.s64);
	// fcfid f10,f0
	ctx.f10.f64 = double(ctx.f0.s64);
	// fcfid f8,f11
	ctx.f8.f64 = double(ctx.f11.s64);
	// frsp f6,f12
	ctx.f6.f64 = double(float(ctx.f12.f64));
	// frsp f3,f7
	ctx.f3.f64 = double(float(ctx.f7.f64));
	// frsp f5,f10
	ctx.f5.f64 = double(float(ctx.f10.f64));
	// frsp f4,f8
	ctx.f4.f64 = double(float(ctx.f8.f64));
	// fmuls f2,f6,f31
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// stfs f2,144(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fmuls f13,f3,f31
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f31.f64));
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmuls f1,f5,f31
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f31.f64));
	// stfs f1,140(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fmuls f0,f4,f31
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// bl 0x82d208d0
	ctx.lr = 0x837D53FC;
	sub_82D208D0(ctx, base);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplwi cr6,r27,4
	cr6.compare<uint32_t>(ctx.r27.u32, 4, xer);
	// blt cr6,0x837d531c
	if (cr6.lt) goto loc_837D531C;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83b4fbe8
	ctx.lr = 0x837D541C;
	sub_83B4FBE8(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// lbz r9,82(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// addi r26,r30,112
	ctx.r26.s64 = ctx.r30.s64 + 112;
	// rlwimi r11,r10,8,16,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF00) | (ctx.r11.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwimi r9,r8,8,0,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xFFFFFF00) | (ctx.r9.u64 & 0xFFFFFFFF000000FF);
	// rlwinm r7,r9,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// ori r6,r7,255
	ctx.r6.u64 = ctx.r7.u64 | 255;
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// lbz r6,89(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 89);
	// std r6,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r6.u64);
	// lbz r5,91(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 91);
	// lfd f10,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// lbz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// fcfid f7,f10
	ctx.f7.f64 = double(ctx.f10.s64);
	// lbz r9,90(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 90);
	// std r5,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r5.u64);
	// lfd f12,112(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// std r3,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r3.u64);
	// lfd f0,120(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f8,96(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f6,f8
	ctx.f6.f64 = double(ctx.f8.s64);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fcfid f9,f12
	ctx.f9.f64 = double(ctx.f12.s64);
	// frsp f3,f7
	ctx.f3.f64 = double(float(ctx.f7.f64));
	// frsp f2,f6
	ctx.f2.f64 = double(float(ctx.f6.f64));
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// frsp f4,f9
	ctx.f4.f64 = double(float(ctx.f9.f64));
	// fmuls f0,f3,f31
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f31.f64));
	// stfs f0,44(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 44, temp.u32);
	// fmuls f13,f2,f31
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f31.f64));
	// stfs f13,48(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 48, temp.u32);
	// fmuls f5,f11,f31
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// stfs f5,40(r30)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r30.u32 + 40, temp.u32);
	// fmuls f1,f4,f31
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f1,52(r30)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 52, temp.u32);
	// stb r28,56(r30)
	PPC_STORE_U8(ctx.r30.u32 + 56, ctx.r28.u8);
loc_837D54BC:
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// addi r7,r1,82
	ctx.r7.s64 = ctx.r1.s64 + 82;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,81
	ctx.r5.s64 = ctx.r1.s64 + 81;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83b4fec8
	ctx.lr = 0x837D54D8;
	sub_83B4FEC8(ctx, base);
	// lbz r9,81(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r11,r1,132
	ctx.r11.s64 = ctx.r1.s64 + 132;
	// lbz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// rlwimi r10,r9,8,16,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF00FF);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// clrlwi r6,r10,16
	ctx.r6.u64 = ctx.r10.u32 & 0xFFFF;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// rlwimi r8,r6,8,0,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r6.u32, 8) & 0xFFFFFF00) | (ctx.r8.u64 & 0xFFFFFFFF000000FF);
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// rlwinm r5,r8,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// stw r7,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r7.u32);
	// ori r11,r5,255
	ctx.r11.u64 = ctx.r5.u64 | 255;
	// stb r28,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r28.u8);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lbz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// lbz r11,90(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 90);
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f11,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// lbz r6,91(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 91);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lbz r7,89(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 89);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// std r9,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// lfd f9,104(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f6,f9
	ctx.f6.f64 = double(ctx.f9.s64);
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f7,96(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r7,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r7.u64);
	// lfd f0,120(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// fcfid f5,f7
	ctx.f5.f64 = double(ctx.f7.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// frsp f2,f6
	ctx.f2.f64 = double(float(ctx.f6.f64));
	// frsp f1,f5
	ctx.f1.f64 = double(float(ctx.f5.f64));
	// fmuls f4,f12,f31
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f4,136(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmuls f3,f8,f31
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f3,140(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fmuls f0,f2,f31
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f31.f64));
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmuls f13,f1,f31
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// stfs f13,144(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// bl 0x82d208d0
	ctx.lr = 0x837D55A0;
	sub_82D208D0(ctx, base);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplwi cr6,r27,3
	cr6.compare<uint32_t>(ctx.r27.u32, 3, xer);
	// blt cr6,0x837d54bc
	if (cr6.lt) goto loc_837D54BC;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83b4fcf0
	ctx.lr = 0x837D55C0;
	sub_83B4FCF0(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// lbz r9,82(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// addi r26,r30,128
	ctx.r26.s64 = ctx.r30.s64 + 128;
	// rlwimi r11,r10,8,16,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF00) | (ctx.r11.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwimi r9,r8,8,0,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xFFFFFF00) | (ctx.r9.u64 & 0xFFFFFFFF000000FF);
	// rlwinm r7,r9,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// ori r6,r7,255
	ctx.r6.u64 = ctx.r7.u64 | 255;
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// lbz r5,90(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 90);
	// lbz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// lbz r8,89(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 89);
	// std r8,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r8.u64);
	// std r5,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r5.u64);
	// lfd f9,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// lbz r6,91(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 91);
	// lfd f0,120(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// std r3,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r3.u64);
	// lfd f13,120(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// std r6,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r6.u64);
	// lfd f11,112(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f10,f0
	ctx.f10.f64 = double(ctx.f0.s64);
	// fcfid f8,f11
	ctx.f8.f64 = double(ctx.f11.s64);
	// fcfid f7,f9
	ctx.f7.f64 = double(ctx.f9.s64);
	// frsp f6,f12
	ctx.f6.f64 = double(float(ctx.f12.f64));
	// frsp f5,f10
	ctx.f5.f64 = double(float(ctx.f10.f64));
	// frsp f4,f8
	ctx.f4.f64 = double(float(ctx.f8.f64));
	// frsp f3,f7
	ctx.f3.f64 = double(float(ctx.f7.f64));
	// fmuls f2,f6,f31
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// stfs f2,60(r30)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r30.u32 + 60, temp.u32);
	// fmuls f1,f5,f31
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f31.f64));
	// stfs f1,64(r30)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 64, temp.u32);
	// fmuls f0,f4,f31
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f0,72(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 72, temp.u32);
	// fmuls f13,f3,f31
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f31.f64));
	// stfs f13,68(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 68, temp.u32);
	// stb r28,76(r30)
	PPC_STORE_U8(ctx.r30.u32 + 76, ctx.r28.u8);
loc_837D5660:
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// addi r7,r1,82
	ctx.r7.s64 = ctx.r1.s64 + 82;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,81
	ctx.r5.s64 = ctx.r1.s64 + 81;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83b4ff00
	ctx.lr = 0x837D567C;
	sub_83B4FF00(ctx, base);
	// lbz r9,81(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r11,r1,132
	ctx.r11.s64 = ctx.r1.s64 + 132;
	// lbz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// rlwimi r10,r9,8,16,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF00FF);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// clrlwi r6,r10,16
	ctx.r6.u64 = ctx.r10.u32 & 0xFFFF;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// rlwimi r8,r6,8,0,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r6.u32, 8) & 0xFFFFFF00) | (ctx.r8.u64 & 0xFFFFFFFF000000FF);
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// rlwinm r5,r8,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// stw r7,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r7.u32);
	// ori r11,r5,255
	ctx.r11.u64 = ctx.r5.u64 | 255;
	// stb r28,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r28.u8);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lbz r9,90(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 90);
	// std r9,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r9.u64);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// lbz r7,89(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 89);
	// fcfid f10,f0
	ctx.f10.f64 = double(ctx.f0.s64);
	// lbz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// lbz r6,91(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 91);
	// std r7,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r7.u64);
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f9,96(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f7,f9
	ctx.f7.f64 = double(ctx.f9.s64);
	// lfd f11,104(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// std r6,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r6.u64);
	// lfd f13,112(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fcfid f8,f11
	ctx.f8.f64 = double(ctx.f11.s64);
	// frsp f6,f12
	ctx.f6.f64 = double(float(ctx.f12.f64));
	// frsp f5,f10
	ctx.f5.f64 = double(float(ctx.f10.f64));
	// frsp f3,f7
	ctx.f3.f64 = double(float(ctx.f7.f64));
	// frsp f4,f8
	ctx.f4.f64 = double(float(ctx.f8.f64));
	// fmuls f2,f6,f31
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// stfs f2,144(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fmuls f1,f5,f31
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f31.f64));
	// stfs f1,140(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fmuls f13,f3,f31
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f31.f64));
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmuls f0,f4,f31
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x82d208d0
	ctx.lr = 0x837D5740;
	sub_82D208D0(ctx, base);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplwi cr6,r27,2
	cr6.compare<uint32_t>(ctx.r27.u32, 2, xer);
	// blt cr6,0x837d5660
	if (cr6.lt) goto loc_837D5660;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D575C"))) PPC_WEAK_FUNC(sub_837D575C);
PPC_FUNC_IMPL(__imp__sub_837D575C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D5760"))) PPC_WEAK_FUNC(sub_837D5760);
PPC_FUNC_IMPL(__imp__sub_837D5760) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837D5768;
	__savegprlr_29(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x837d5838
	if (cr6.eq) goto loc_837D5838;
	// lwz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d5838
	if (cr6.eq) goto loc_837D5838;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837d4e18
	ctx.lr = 0x837D5794;
	sub_837D4E18(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x837d5098
	ctx.lr = 0x837D57A4;
	sub_837D5098(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x837d4228
	ctx.lr = 0x837D57B4;
	sub_837D4228(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x837d57fc
	if (cr6.eq) goto loc_837D57FC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82aacd70
	ctx.lr = 0x837D57C8;
	sub_82AACD70(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d57fc
	if (cr6.eq) goto loc_837D57FC;
	// li r11,512
	ctx.r11.s64 = 512;
	// stw r29,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,255
	ctx.r9.s64 = 255;
	// stw r11,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r11.u32);
	// stw r10,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r10.u32);
	// stw r9,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r9.u32);
	// stb r8,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r8.u8);
loc_837D57FC:
	// lwz r3,116(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r11,648(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 648);
	// lwz r10,652(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 652);
	// rlwimi r10,r11,1,30,30
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 1) & 0x2) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFD);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r4,r10,30
	ctx.r4.u64 = ctx.r10.u32 & 0x3;
	// lwz r8,88(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x837D5824;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837d4d68
	ctx.lr = 0x837D582C;
	sub_837D4D68(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_837D5838:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D5844"))) PPC_WEAK_FUNC(sub_837D5844);
PPC_FUNC_IMPL(__imp__sub_837D5844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D5848"))) PPC_WEAK_FUNC(sub_837D5848);
PPC_FUNC_IMPL(__imp__sub_837D5848) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837D5850;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,2
	ctx.r9.s64 = 2;
	// stb r30,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r30.u8);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f31,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// addi r29,r3,16
	ctx.r29.s64 = ctx.r3.s64 + 16;
	// stfs f31,8(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
loc_837D5888:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x837d6498
	ctx.lr = 0x837D5890;
	sub_837D6498(ctx, base);
	// stwu r3,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r29.u32 = ea;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stfs f31,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stw r30,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r30.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// cmplwi cr6,r30,5
	cr6.compare<uint32_t>(ctx.r30.u32, 5, xer);
	// blt cr6,0x837d5888
	if (cr6.lt) goto loc_837D5888;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D58C0"))) PPC_WEAK_FUNC(sub_837D58C0);
PPC_FUNC_IMPL(__imp__sub_837D58C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837D58C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// addi r30,r3,-4
	ctx.r30.s64 = ctx.r3.s64 + -4;
	// li r28,27
	ctx.r28.s64 = 27;
loc_837D58E4:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,40
	ctx.r4.s64 = 40;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x837D58F8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837d590c
	if (cr6.eq) goto loc_837D590C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x837d5848
	ctx.lr = 0x837D5908;
	sub_837D5848(ctx, base);
	// b 0x837d5910
	goto loc_837D5910;
loc_837D590C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_837D5910:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stwu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r30.u32 = ea;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// blt cr6,0x837d58e4
	if (cr6.lt) goto loc_837D58E4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D592C"))) PPC_WEAK_FUNC(sub_837D592C);
PPC_FUNC_IMPL(__imp__sub_837D592C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D5930"))) PPC_WEAK_FUNC(sub_837D5930);
PPC_FUNC_IMPL(__imp__sub_837D5930) {
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
	// lwz r3,-7392(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7392);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x837d598c
	if (!cr6.eq) goto loc_837D598C;
	// li r11,27
	ctx.r11.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x837D5968;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837d597c
	if (cr6.eq) goto loc_837D597C;
	// bl 0x837d58c0
	ctx.lr = 0x837D5974;
	sub_837D58C0(ctx, base);
	// stw r3,-7392(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7392, ctx.r3.u32);
	// b 0x837d5984
	goto loc_837D5984;
loc_837D597C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-7392(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7392, ctx.r11.u32);
loc_837D5984:
	// bl 0x837d6908
	ctx.lr = 0x837D5988;
	sub_837D6908(ctx, base);
	// lwz r3,-7392(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7392);
loc_837D598C:
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

__attribute__((alias("__imp__sub_837D59A0"))) PPC_WEAK_FUNC(sub_837D59A0);
PPC_FUNC_IMPL(__imp__sub_837D59A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,-7392(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7392);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837D59AC"))) PPC_WEAK_FUNC(sub_837D59AC);
PPC_FUNC_IMPL(__imp__sub_837D59AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D59B0"))) PPC_WEAK_FUNC(sub_837D59B0);
PPC_FUNC_IMPL(__imp__sub_837D59B0) {
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
	// li r11,10
	ctx.r11.s64 = 10;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,36
	ctx.r4.s64 = 36;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x837D59D8;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837d5a20
	if (cr6.eq) goto loc_837D5A20;
	// bl 0x835360c0
	ctx.lr = 0x837D59E8;
	sub_835360C0(ctx, base);
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// addi r9,r11,-1508
	ctx.r9.s64 = ctx.r11.s64 + -1508;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stb r11,-7388(r10)
	PPC_STORE_U8(ctx.r10.u32 + -7388, ctx.r11.u8);
	// bl 0x837d5930
	ctx.lr = 0x837D5A04;
	sub_837D5930(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
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
loc_837D5A20:
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

__attribute__((alias("__imp__sub_837D5A38"))) PPC_WEAK_FUNC(sub_837D5A38);
PPC_FUNC_IMPL(__imp__sub_837D5A38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x837D5A40;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r26,3
	ctx.r26.s64 = 3;
	// li r25,27
	ctx.r25.s64 = 27;
	// li r27,0
	ctx.r27.s64 = 0;
loc_837D5A54:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d5ab8
	if (cr6.eq) goto loc_837D5AB8;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x837D5A70;
	sub_82595150(ctx, base);
	// lwz r29,0(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x837d5aac
	if (cr6.eq) goto loc_837D5AAC;
	// addi r31,r29,20
	ctx.r31.s64 = ctx.r29.s64 + 20;
	// li r30,5
	ctx.r30.s64 = 5;
loc_837D5A84:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837d5a98
	if (cr6.eq) goto loc_837D5A98;
	// bl 0x837d6f50
	ctx.lr = 0x837D5A94;
	sub_837D6F50(ctx, base);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
loc_837D5A98:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x837d5a84
	if (!cr0.eq) goto loc_837D5A84;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82416268
	ctx.lr = 0x837D5AAC;
	sub_82416268(ctx, base);
loc_837D5AAC:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x837D5AB4;
	sub_82595170(ctx, base);
	// stw r27,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r27.u32);
loc_837D5AB8:
	// addic. r26,r26,-1
	xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	cr0.compare<int32_t>(ctx.r26.s32, 0, xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x837d5a54
	if (!cr0.eq) goto loc_837D5A54;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D5ACC"))) PPC_WEAK_FUNC(sub_837D5ACC);
PPC_FUNC_IMPL(__imp__sub_837D5ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D5AD0"))) PPC_WEAK_FUNC(sub_837D5AD0);
PPC_FUNC_IMPL(__imp__sub_837D5AD0) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r30,r11,-7384
	ctx.r30.s64 = ctx.r11.s64 + -7384;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837D5AF8;
	sub_82596FE8(ctx, base);
	// bl 0x837d6908
	ctx.lr = 0x837D5AFC;
	sub_837D6908(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83131d70
	ctx.lr = 0x837D5B04;
	sub_83131D70(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82597088
	ctx.lr = 0x837D5B0C;
	sub_82597088(ctx, base);
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

__attribute__((alias("__imp__sub_837D5B24"))) PPC_WEAK_FUNC(sub_837D5B24);
PPC_FUNC_IMPL(__imp__sub_837D5B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D5B28"))) PPC_WEAK_FUNC(sub_837D5B28);
PPC_FUNC_IMPL(__imp__sub_837D5B28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837D5B30;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r28,r11,-7384
	ctx.r28.s64 = ctx.r11.s64 + -7384;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837D5B58;
	sub_82596FE8(ctx, base);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r31,5
	ctx.r9.s64 = ctx.r31.s64 + 5;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r10,r30
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// lwzx r3,r7,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// bl 0x837d6840
	ctx.lr = 0x837D5B74;
	sub_837D6840(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82597088
	ctx.lr = 0x837D5B7C;
	sub_82597088(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D5B88"))) PPC_WEAK_FUNC(sub_837D5B88);
PPC_FUNC_IMPL(__imp__sub_837D5B88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837D5B90;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,-7384
	ctx.r29.s64 = ctx.r11.s64 + -7384;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837D5BAC;
	sub_82596FE8(ctx, base);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r8,r11,5
	ctx.r8.s64 = ctx.r11.s64 + 5;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r7,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,28(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x837D5BD4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82597088
	ctx.lr = 0x837D5BE0;
	sub_82597088(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D5BEC"))) PPC_WEAK_FUNC(sub_837D5BEC);
PPC_FUNC_IMPL(__imp__sub_837D5BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D5BF0"))) PPC_WEAK_FUNC(sub_837D5BF0);
PPC_FUNC_IMPL(__imp__sub_837D5BF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837D5BF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,-7384
	ctx.r29.s64 = ctx.r11.s64 + -7384;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837D5C10;
	sub_82596FE8(ctx, base);
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// li r30,3
	ctx.r30.s64 = 3;
loc_837D5C18:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x837D5C30;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,32(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,28(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x837D5C48;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzu r11,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,28(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x837D5C60;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne 0x837d5c18
	if (!cr0.eq) goto loc_837D5C18;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82597088
	ctx.lr = 0x837D5C70;
	sub_82597088(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D5C78"))) PPC_WEAK_FUNC(sub_837D5C78);
PPC_FUNC_IMPL(__imp__sub_837D5C78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837D5C80;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,-7384
	ctx.r31.s64 = ctx.r11.s64 + -7384;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837D5C9C;
	sub_82596FE8(ctx, base);
	// cmpwi cr6,r30,3
	cr6.compare<int32_t>(ctx.r30.s32, 3, xer);
	// blt cr6,0x837d5cb8
	if (cr6.lt) goto loc_837D5CB8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82597088
	ctx.lr = 0x837D5CAC;
	sub_82597088(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_837D5CB8:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r9,r11,5
	ctx.r9.s64 = ctx.r11.s64 + 5;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r8,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,20(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x837D5CE0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82597088
	ctx.lr = 0x837D5CEC;
	sub_82597088(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D5CF8"))) PPC_WEAK_FUNC(sub_837D5CF8);
PPC_FUNC_IMPL(__imp__sub_837D5CF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837D5D00;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,-7384
	ctx.r29.s64 = ctx.r11.s64 + -7384;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837D5D1C;
	sub_82596FE8(ctx, base);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r9,r10,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r8,r11,5
	ctx.r8.s64 = ctx.r11.s64 + 5;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lwz r31,4(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// bl 0x82597088
	ctx.lr = 0x837D5D40;
	sub_82597088(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D5D4C"))) PPC_WEAK_FUNC(sub_837D5D4C);
PPC_FUNC_IMPL(__imp__sub_837D5D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D5D50"))) PPC_WEAK_FUNC(sub_837D5D50);
PPC_FUNC_IMPL(__imp__sub_837D5D50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837D5D58;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,-7384
	ctx.r29.s64 = ctx.r11.s64 + -7384;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837D5D74;
	sub_82596FE8(ctx, base);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r9,r10,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// lwz r31,4(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// bl 0x82597088
	ctx.lr = 0x837D5D88;
	sub_82597088(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D5D94"))) PPC_WEAK_FUNC(sub_837D5D94);
PPC_FUNC_IMPL(__imp__sub_837D5D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D5D98"))) PPC_WEAK_FUNC(sub_837D5D98);
PPC_FUNC_IMPL(__imp__sub_837D5D98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x837D5DA0;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r27,r11,-7384
	ctx.r27.s64 = ctx.r11.s64 + -7384;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837D5DC0;
	sub_82596FE8(ctx, base);
	// li r28,3
	ctx.r28.s64 = 3;
loc_837D5DC4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r31,5
	ctx.r31.s64 = 5;
	// addi r30,r11,16
	ctx.r30.s64 = ctx.r11.s64 + 16;
loc_837D5DD0:
	// lwzu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837D5DE8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x837d5dd0
	if (!cr0.eq) goto loc_837D5DD0;
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x837d5dc4
	if (!cr0.eq) goto loc_837D5DC4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82597088
	ctx.lr = 0x837D5E04;
	sub_82597088(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D5E10"))) PPC_WEAK_FUNC(sub_837D5E10);
PPC_FUNC_IMPL(__imp__sub_837D5E10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837D5E18;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r29,r11,-7384
	ctx.r29.s64 = ctx.r11.s64 + -7384;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837D5E2C;
	sub_82596FE8(ctx, base);
	// lis r31,-31743
	ctx.r31.s64 = -2080309248;
	// lwz r11,-7392(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7392);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d5e88
	if (cr6.eq) goto loc_837D5E88;
	// li r11,27
	ctx.r11.s64 = 27;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595150
	ctx.lr = 0x837D5E50;
	sub_82595150(ctx, base);
	// lwz r30,-7392(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7392);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x837d5e78
	if (cr6.eq) goto loc_837D5E78;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x837d5a38
	ctx.lr = 0x837D5E64;
	sub_837D5A38(ctx, base);
	// bl 0x82595188
	ctx.lr = 0x837D5E68;
	sub_82595188(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x837D5E78;
	sub_825952B8(ctx, base);
loc_837D5E78:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595170
	ctx.lr = 0x837D5E80;
	sub_82595170(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-7392(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7392, ctx.r11.u32);
loc_837D5E88:
	// bl 0x837d6908
	ctx.lr = 0x837D5E8C;
	sub_837D6908(ctx, base);
	// bl 0x837d6a18
	ctx.lr = 0x837D5E90;
	sub_837D6A18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82597088
	ctx.lr = 0x837D5E98;
	sub_82597088(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D5EA0"))) PPC_WEAK_FUNC(sub_837D5EA0);
PPC_FUNC_IMPL(__imp__sub_837D5EA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x837D5EA8;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,-7384
	ctx.r31.s64 = ctx.r11.s64 + -7384;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837D5ED8;
	sub_82596FE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// bl 0x82596fe8
	ctx.lr = 0x837D5EE4;
	sub_82596FE8(ctx, base);
	// rlwinm r28,r28,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r10,r28,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r9,r11,5
	ctx.r9.s64 = ctx.r11.s64 + 5;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cntlzw r5,r6
	ctx.r5.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r24,r5,27,31,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// bl 0x82597088
	ctx.lr = 0x837D5F10;
	sub_82597088(ctx, base);
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// bne cr6,0x837d5f3c
	if (!cr6.eq) goto loc_837D5F3C;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837d5f3c
	if (!cr6.eq) goto loc_837D5F3C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82597088
	ctx.lr = 0x837D5F2C;
	sub_82597088(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_837D5F3C:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne cr6,0x837d5f6c
	if (!cr6.eq) goto loc_837D5F6C;
	// lwzx r11,r28,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f31,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r26,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// stb r27,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r27.u8);
	// bl 0x82597088
	ctx.lr = 0x837D5F5C;
	sub_82597088(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_837D5F6C:
	// cmpwi cr6,r30,7
	cr6.compare<int32_t>(ctx.r30.s32, 7, xer);
	// bne cr6,0x837d5f80
	if (!cr6.eq) goto loc_837D5F80;
	// li r26,-1
	ctx.r26.s64 = -1;
loc_837D5F78:
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x837d5fc4
	goto loc_837D5FC4;
loc_837D5F80:
	// cmpwi cr6,r30,6
	cr6.compare<int32_t>(ctx.r30.s32, 6, xer);
	// beq cr6,0x837d5f78
	if (cr6.eq) goto loc_837D5F78;
	// cmpwi cr6,r30,5
	cr6.compare<int32_t>(ctx.r30.s32, 5, xer);
	// bne cr6,0x837d5fa4
	if (!cr6.eq) goto loc_837D5FA4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r27,1
	ctx.r27.s64 = 1;
	// li r30,1
	ctx.r30.s64 = 1;
	// lfs f31,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// b 0x837d5fc4
	goto loc_837D5FC4;
loc_837D5FA4:
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(ctx.r30.s32, 4, xer);
	// bne cr6,0x837d5fc4
	if (!cr6.eq) goto loc_837D5FC4;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d5fc4
	if (cr6.eq) goto loc_837D5FC4;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r30,2
	ctx.r30.s64 = 2;
	// lfs f31,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f31.f64 = double(temp.f32);
loc_837D5FC4:
	// lwzx r11,r28,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// addi r10,r30,5
	ctx.r10.s64 = ctx.r30.s64 + 5;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// stfs f31,8(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stb r27,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r27.u8);
	// lwzx r8,r28,r29
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// lwzx r3,r9,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,4(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x837D6000;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82597088
	ctx.lr = 0x837D600C;
	sub_82597088(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D601C"))) PPC_WEAK_FUNC(sub_837D601C);
PPC_FUNC_IMPL(__imp__sub_837D601C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D6020"))) PPC_WEAK_FUNC(sub_837D6020);
PPC_FUNC_IMPL(__imp__sub_837D6020) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x837D6028;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-7384
	ctx.r31.s64 = ctx.r11.s64 + -7384;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837D6054;
	sub_82596FE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837D605C;
	sub_82596FE8(ctx, base);
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r10,r29,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r9,r11,5
	ctx.r9.s64 = ctx.r11.s64 + 5;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// addi r6,r11,-2
	ctx.r6.s64 = ctx.r11.s64 + -2;
	// cntlzw r5,r6
	ctx.r5.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r26,r5,27,31,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// bl 0x82597088
	ctx.lr = 0x837D608C;
	sub_82597088(ctx, base);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// bne cr6,0x837d60b8
	if (!cr6.eq) goto loc_837D60B8;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837d60b8
	if (!cr6.eq) goto loc_837D60B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82597088
	ctx.lr = 0x837D60A8;
	sub_82597088(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_837D60B8:
	// addi r11,r28,5
	ctx.r11.s64 = ctx.r28.s64 + 5;
	// lwzx r10,r29,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x837D60DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82597088
	ctx.lr = 0x837D60E8;
	sub_82597088(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D60F8"))) PPC_WEAK_FUNC(sub_837D60F8);
PPC_FUNC_IMPL(__imp__sub_837D60F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x837D6100;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-7384
	ctx.r31.s64 = ctx.r11.s64 + -7384;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837D6128;
	sub_82596FE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837D6130;
	sub_82596FE8(ctx, base);
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r10,r29,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r9,r11,5
	ctx.r9.s64 = ctx.r11.s64 + 5;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// addi r6,r11,-2
	ctx.r6.s64 = ctx.r11.s64 + -2;
	// cntlzw r5,r6
	ctx.r5.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r27,r5,27,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// bl 0x82597088
	ctx.lr = 0x837D6160;
	sub_82597088(ctx, base);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// bne cr6,0x837d618c
	if (!cr6.eq) goto loc_837D618C;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837d618c
	if (!cr6.eq) goto loc_837D618C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82597088
	ctx.lr = 0x837D617C;
	sub_82597088(ctx, base);
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
loc_837D618C:
	// lwzx r10,r29,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r9,r11,5
	ctx.r9.s64 = ctx.r11.s64 + 5;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r8,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,12(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x837D61B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82597088
	ctx.lr = 0x837D61C0;
	sub_82597088(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D61D0"))) PPC_WEAK_FUNC(sub_837D61D0);
PPC_FUNC_IMPL(__imp__sub_837D61D0) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-7384
	ctx.r31.s64 = ctx.r11.s64 + -7384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837D61F8;
	sub_82596FE8(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x837d621c
	if (cr6.eq) goto loc_837D621C;
	// li r6,1
	ctx.r6.s64 = 1;
	// lbz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x837d6020
	ctx.lr = 0x837D621C;
	sub_837D6020(ctx, base);
loc_837D621C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82597088
	ctx.lr = 0x837D6224;
	sub_82597088(ctx, base);
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

__attribute__((alias("__imp__sub_837D623C"))) PPC_WEAK_FUNC(sub_837D623C);
PPC_FUNC_IMPL(__imp__sub_837D623C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D6240"))) PPC_WEAK_FUNC(sub_837D6240);
PPC_FUNC_IMPL(__imp__sub_837D6240) {
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
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-1508
	ctx.r10.s64 = ctx.r11.s64 + -1508;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x837d5e10
	ctx.lr = 0x837D6270;
	sub_837D5E10(ctx, base);
	// lis r9,-31743
	ctx.r9.s64 = -2080309248;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,-7388(r9)
	PPC_STORE_U8(ctx.r9.u32 + -7388, ctx.r11.u8);
	// bl 0x83535be8
	ctx.lr = 0x837D6284;
	sub_83535BE8(ctx, base);
	// clrlwi r8,r30,31
	ctx.r8.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x837d62a4
	if (cr6.eq) goto loc_837D62A4;
	// bl 0x82595188
	ctx.lr = 0x837D6294;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x837D62A4;
	sub_825952B8(ctx, base);
loc_837D62A4:
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

__attribute__((alias("__imp__sub_837D62C0"))) PPC_WEAK_FUNC(sub_837D62C0);
PPC_FUNC_IMPL(__imp__sub_837D62C0) {
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
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addis r11,r11,-257
	ctx.r11.s64 = ctx.r11.s64 + -16842752;
	// addic. r11,r11,-2
	xer.ca = ctx.r11.u32 > 1;
	ctx.r11.s64 = ctx.r11.s64 + -2;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x837d6304
	if (cr0.eq) goto loc_837D6304;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x837d6328
	if (!cr6.eq) goto loc_837D6328;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,-7392(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7392);
	// bl 0x837d61d0
	ctx.lr = 0x837D62F0;
	sub_837D61D0(ctx, base);
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
loc_837D6304:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r3,-7392(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7392);
	// lfs f1,-24912(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x837d5ea0
	ctx.lr = 0x837D6328;
	sub_837D5EA0(ctx, base);
loc_837D6328:
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

__attribute__((alias("__imp__sub_837D633C"))) PPC_WEAK_FUNC(sub_837D633C);
PPC_FUNC_IMPL(__imp__sub_837D633C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D6340"))) PPC_WEAK_FUNC(sub_837D6340);
PPC_FUNC_IMPL(__imp__sub_837D6340) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// bne cr6,0x837d638c
	if (!cr6.eq) goto loc_837D638C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x837d6908
	ctx.lr = 0x837D6378;
	sub_837D6908(ctx, base);
	// bl 0x837d6858
	ctx.lr = 0x837D637C;
	sub_837D6858(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83104938
	ctx.lr = 0x837D6384;
	sub_83104938(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// bl 0x83103b18
	ctx.lr = 0x837D638C;
	sub_83103B18(ctx, base);
loc_837D638C:
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

__attribute__((alias("__imp__sub_837D63A0"))) PPC_WEAK_FUNC(sub_837D63A0);
PPC_FUNC_IMPL(__imp__sub_837D63A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x83103bb8
	sub_83103BB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D63A8"))) PPC_WEAK_FUNC(sub_837D63A8);
PPC_FUNC_IMPL(__imp__sub_837D63A8) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837d63d4
	if (cr6.eq) goto loc_837D63D4;
	// bl 0x83103bb8
	ctx.lr = 0x837D63C4;
	sub_83103BB8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d63d8
	if (cr6.eq) goto loc_837D63D8;
loc_837D63D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_837D63D8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837D63E8"))) PPC_WEAK_FUNC(sub_837D63E8);
PPC_FUNC_IMPL(__imp__sub_837D63E8) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bne 0x837d6424
	if (!cr0.eq) goto loc_837D6424;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837d6424
	if (cr6.eq) goto loc_837D6424;
	// bl 0x83103e98
	ctx.lr = 0x837D641C;
	sub_83103E98(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_837D6424:
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

__attribute__((alias("__imp__sub_837D6438"))) PPC_WEAK_FUNC(sub_837D6438);
PPC_FUNC_IMPL(__imp__sub_837D6438) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x83103d20
	sub_83103D20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D6440"))) PPC_WEAK_FUNC(sub_837D6440);
PPC_FUNC_IMPL(__imp__sub_837D6440) {
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
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-1228
	ctx.r9.s64 = ctx.r11.s64 + -1228;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x837d6480
	if (cr6.eq) goto loc_837D6480;
	// bl 0x82595188
	ctx.lr = 0x837D6470;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x837D6480;
	sub_825952B8(ctx, base);
loc_837D6480:
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

__attribute__((alias("__imp__sub_837D6498"))) PPC_WEAK_FUNC(sub_837D6498);
PPC_FUNC_IMPL(__imp__sub_837D6498) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r3,4
	cr6.compare<uint32_t>(ctx.r3.u32, 4, xer);
	// bgt cr6,0x837d65f0
	if (cr6.gt) goto loc_837D65F0;
	// mtctr r3
	ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x837d657c
	if (cr6.eq) goto loc_837D657C;
	// bdz 0x837d64f8
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_837D64F8;
	// bdz 0x837d64c4
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_837D64C4;
	// bdnz 0x837d656c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837D656C;
loc_837D64C4:
	// li r11,27
	ctx.r11.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,52
	ctx.r4.s64 = 52;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x837D64DC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837d6624
	if (cr6.eq) goto loc_837D6624;
	// bl 0x837d8020
	ctx.lr = 0x837D64E8;
	sub_837D8020(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_837D64F8:
	// li r11,27
	ctx.r11.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r4,36
	ctx.r4.s64 = 36;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x837D6510;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837d6624
	if (cr6.eq) goto loc_837D6624;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r8,-32211
	ctx.r8.s64 = -2110980096;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r6,r8,-1196
	ctx.r6.s64 = ctx.r8.s64 + -1196;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stw r7,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stw r5,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r5.u32);
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_837D656C:
	// li r11,27
	ctx.r11.s64 = 27;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// b 0x837d65fc
	goto loc_837D65FC;
loc_837D657C:
	// li r11,27
	ctx.r11.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r4,36
	ctx.r4.s64 = 36;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82595718
	ctx.lr = 0x837D6594;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837d6624
	if (cr6.eq) goto loc_837D6624;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r8,-32211
	ctx.r8.s64 = -2110980096;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r6,r8,-1196
	ctx.r6.s64 = ctx.r8.s64 + -1196;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stw r7,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stw r5,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r5.u32);
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_837D65F0:
	// li r11,27
	ctx.r11.s64 = 27;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
loc_837D65FC:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,64
	ctx.r4.s64 = 64;
	// bl 0x82595718
	ctx.lr = 0x837D6608;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837d6624
	if (cr6.eq) goto loc_837D6624;
	// bl 0x837d6c20
	ctx.lr = 0x837D6614;
	sub_837D6C20(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_837D6624:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837D6638"))) PPC_WEAK_FUNC(sub_837D6638);
PPC_FUNC_IMPL(__imp__sub_837D6638) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837D6650"))) PPC_WEAK_FUNC(sub_837D6650);
PPC_FUNC_IMPL(__imp__sub_837D6650) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837D6678"))) PPC_WEAK_FUNC(sub_837D6678);
PPC_FUNC_IMPL(__imp__sub_837D6678) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x837d6690
	if (cr6.eq) goto loc_837D6690;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_837D6690:
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f1,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r5,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r5.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837D66A8"))) PPC_WEAK_FUNC(sub_837D66A8);
PPC_FUNC_IMPL(__imp__sub_837D66A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// beq cr6,0x837d66c0
	if (cr6.eq) goto loc_837D66C0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_837D66C0:
	// li r10,3
	ctx.r10.s64 = 3;
	// stfs f1,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837D66D4"))) PPC_WEAK_FUNC(sub_837D66D4);
PPC_FUNC_IMPL(__imp__sub_837D66D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D66D8"))) PPC_WEAK_FUNC(sub_837D66D8);
PPC_FUNC_IMPL(__imp__sub_837D66D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x837d6700
	if (cr6.gt) goto loc_837D6700;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x837d6700
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837D6700;
	// bdzf 4*cr6+eq,0x837d66f8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837D66F8;
	// bne cr6,0x837d6700
	if (!cr6.eq) goto loc_837D6700;
loc_837D66F8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_837D6700:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837D6708"))) PPC_WEAK_FUNC(sub_837D6708);
PPC_FUNC_IMPL(__imp__sub_837D6708) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x837d671c
	if (cr6.eq) goto loc_837D671C;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_837D671C:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f1.f64));
	// stfs f13,12(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f12,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x837d6754
	if (!cr6.gt) goto loc_837D6754;
	// fsubs f11,f1,f0
	ctx.f11.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// fsel f10,f11,f0,f1
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f0.f64 : ctx.f1.f64;
	// fsubs f9,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// stfs f9,12(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// fsubs f8,f0,f10
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// stfs f8,20(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
loc_837D6754:
	// lfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bltlr cr6
	if (cr6.lt) return;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x837d678c
	if (cr6.eq) goto loc_837D678C;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x837d6794
	if (!cr6.eq) goto loc_837D6794;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f12,16(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f12,12(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_837D678C:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_837D6794:
	// stfs f12,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f12,12(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837D67A4"))) PPC_WEAK_FUNC(sub_837D67A4);
PPC_FUNC_IMPL(__imp__sub_837D67A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D67A8"))) PPC_WEAK_FUNC(sub_837D67A8);
PPC_FUNC_IMPL(__imp__sub_837D67A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lfs f0,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// lfs f13,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// fneg f11,f12
	ctx.f11.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fsel f13,f11,f13,f12
	ctx.f13.f64 = ctx.f11.f64 >= 0.0 ? ctx.f13.f64 : ctx.f12.f64;
	// beq cr6,0x837d6820
	if (cr6.eq) goto loc_837D6820;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x837d6818
	if (cr6.eq) goto loc_837D6818;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// beq cr6,0x837d67ec
	if (cr6.eq) goto loc_837D67EC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_837D67EC:
	// fdivs f12,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,21588(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21588);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fctidz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f9.u64);
	// lbz r3,-9(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + -9);
	// blr 
	return;
loc_837D6818:
	// li r3,255
	ctx.r3.s64 = 255;
	// blr 
	return;
loc_837D6820:
	// fdivs f13,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,21588(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21588);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctidz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f11.u64);
	// lbz r3,-9(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + -9);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837D6840"))) PPC_WEAK_FUNC(sub_837D6840);
PPC_FUNC_IMPL(__imp__sub_837D6840) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// fneg f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fsel f12,f13,f0,f1
	ctx.f12.f64 = ctx.f13.f64 >= 0.0 ? ctx.f0.f64 : ctx.f1.f64;
	// stfs f12,20(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837D6858"))) PPC_WEAK_FUNC(sub_837D6858);
PPC_FUNC_IMPL(__imp__sub_837D6858) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,-32211
	ctx.r10.s64 = -2110980096;
	// addi r9,r10,-200
	ctx.r9.s64 = ctx.r10.s64 + -200;
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r8,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837D6870"))) PPC_WEAK_FUNC(sub_837D6870);
PPC_FUNC_IMPL(__imp__sub_837D6870) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x837D6878;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,27
	ctx.r27.s64 = 27;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,44
	ctx.r4.s64 = 44;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x837D6898;
	sub_82595718(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// stw r29,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r29.u32);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_837D68AC:
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x837D68C0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837d68dc
	if (cr6.eq) goto loc_837D68DC;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// b 0x837d68e0
	goto loc_837D68E0;
loc_837D68DC:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_837D68E0:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stwx r11,r30,r10
	PPC_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r11.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r30,44
	cr6.compare<uint32_t>(ctx.r30.u32, 44, xer);
	// blt cr6,0x837d68ac
	if (cr6.lt) goto loc_837D68AC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D6904"))) PPC_WEAK_FUNC(sub_837D6904);
PPC_FUNC_IMPL(__imp__sub_837D6904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D6908"))) PPC_WEAK_FUNC(sub_837D6908);
PPC_FUNC_IMPL(__imp__sub_837D6908) {
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
	// lwz r3,-7332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7332);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x837d6958
	if (!cr6.eq) goto loc_837D6958;
	// li r11,27
	ctx.r11.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x837D6940;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837d6950
	if (cr6.eq) goto loc_837D6950;
	// bl 0x837d6870
	ctx.lr = 0x837D694C;
	sub_837D6870(ctx, base);
	// b 0x837d6954
	goto loc_837D6954;
loc_837D6950:
	// li r3,0
	ctx.r3.s64 = 0;
loc_837D6954:
	// stw r3,-7332(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7332, ctx.r3.u32);
loc_837D6958:
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

__attribute__((alias("__imp__sub_837D696C"))) PPC_WEAK_FUNC(sub_837D696C);
PPC_FUNC_IMPL(__imp__sub_837D696C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D6970"))) PPC_WEAK_FUNC(sub_837D6970);
PPC_FUNC_IMPL(__imp__sub_837D6970) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837D6984"))) PPC_WEAK_FUNC(sub_837D6984);
PPC_FUNC_IMPL(__imp__sub_837D6984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D6988"))) PPC_WEAK_FUNC(sub_837D6988);
PPC_FUNC_IMPL(__imp__sub_837D6988) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837D6990;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,27
	ctx.r29.s64 = 27;
loc_837D69A0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837d69e4
	if (cr6.eq) goto loc_837D69E4;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595150
	ctx.lr = 0x837D69C0;
	sub_82595150(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwzx r28,r31,r11
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x82595188
	ctx.lr = 0x837D69CC;
	sub_82595188(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x837D69DC;
	sub_825952B8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595170
	ctx.lr = 0x837D69E4;
	sub_82595170(ctx, base);
loc_837D69E4:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r31,44
	cr6.compare<uint32_t>(ctx.r31.u32, 44, xer);
	// blt cr6,0x837d69a0
	if (cr6.lt) goto loc_837D69A0;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x837d6a10
	if (cr6.eq) goto loc_837D6A10;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x825952b8
	ctx.lr = 0x837D6A08;
	sub_825952B8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_837D6A10:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D6A18"))) PPC_WEAK_FUNC(sub_837D6A18);
PPC_FUNC_IMPL(__imp__sub_837D6A18) {
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
	// lis r31,-31743
	ctx.r31.s64 = -2080309248;
	// lwz r11,-7332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7332);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d6a88
	if (cr6.eq) goto loc_837D6A88;
	// li r11,27
	ctx.r11.s64 = 27;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595150
	ctx.lr = 0x837D6A50;
	sub_82595150(ctx, base);
	// lwz r30,-7332(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7332);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x837d6a78
	if (cr6.eq) goto loc_837D6A78;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x837d6988
	ctx.lr = 0x837D6A64;
	sub_837D6988(ctx, base);
	// bl 0x82595188
	ctx.lr = 0x837D6A68;
	sub_82595188(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x837D6A78;
	sub_825952B8(ctx, base);
loc_837D6A78:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595170
	ctx.lr = 0x837D6A80;
	sub_82595170(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-7332(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7332, ctx.r11.u32);
loc_837D6A88:
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

__attribute__((alias("__imp__sub_837D6AA0"))) PPC_WEAK_FUNC(sub_837D6AA0);
PPC_FUNC_IMPL(__imp__sub_837D6AA0) {
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
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,4944
	ctx.r10.s64 = ctx.r11.s64 + 4944;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stb r30,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r30.u8);
	// bl 0x825749e0
	ctx.lr = 0x837D6AD8;
	sub_825749E0(ctx, base);
	// lis r9,-32211
	ctx.r9.s64 = -2110980096;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,212
	ctx.r8.s64 = ctx.r9.s64 + 212;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_837D6B04"))) PPC_WEAK_FUNC(sub_837D6B04);
PPC_FUNC_IMPL(__imp__sub_837D6B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D6B08"))) PPC_WEAK_FUNC(sub_837D6B08);
PPC_FUNC_IMPL(__imp__sub_837D6B08) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837D6B14"))) PPC_WEAK_FUNC(sub_837D6B14);
PPC_FUNC_IMPL(__imp__sub_837D6B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D6B18"))) PPC_WEAK_FUNC(sub_837D6B18);
PPC_FUNC_IMPL(__imp__sub_837D6B18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837D6B20;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x837d6650
	ctx.lr = 0x837D6B2C;
	sub_837D6650(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r30,40(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x837d6b4c
	if (cr6.eq) goto loc_837D6B4C;
	// bl 0x830ffbc0
	ctx.lr = 0x837D6B40;
	sub_830FFBC0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x831016c8
	ctx.lr = 0x837D6B48;
	sub_831016C8(ctx, base);
	// stw r29,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r29.u32);
loc_837D6B4C:
	// lbz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d6bc8
	if (cr6.eq) goto loc_837D6BC8;
	// lbz r11,57(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 57);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837d6bdc
	if (!cr6.eq) goto loc_837D6BDC;
	// bl 0x830ffbc0
	ctx.lr = 0x837D6B68;
	sub_830FFBC0(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lfs f1,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83101530
	ctx.lr = 0x837D6B80;
	sub_83101530(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// li r5,15
	ctx.r5.s64 = 15;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// bl 0x83100450
	ctx.lr = 0x837D6B98;
	sub_83100450(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x837d6438
	ctx.lr = 0x837D6BA0;
	sub_837D6438(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x83787fb0
	ctx.lr = 0x837D6BAC;
	sub_83787FB0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x83101c30
	ctx.lr = 0x837D6BC4;
	sub_83101C30(ctx, base);
	// b 0x837d6bdc
	goto loc_837D6BDC;
loc_837D6BC8:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837d6bdc
	if (cr6.eq) goto loc_837D6BDC;
	// bl 0x837d63e8
	ctx.lr = 0x837D6BD8;
	sub_837D63E8(ctx, base);
	// stw r29,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r29.u32);
loc_837D6BDC:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837d6bf0
	if (cr6.eq) goto loc_837D6BF0;
	// bl 0x833bbd78
	ctx.lr = 0x837D6BEC;
	sub_833BBD78(ctx, base);
	// stw r29,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r29.u32);
loc_837D6BF0:
	// lbz r11,58(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 58);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d6c04
	if (cr6.eq) goto loc_837D6C04;
	// bl 0x833c7ad8
	ctx.lr = 0x837D6C00;
	sub_833C7AD8(ctx, base);
	// stb r29,58(r31)
	PPC_STORE_U8(ctx.r31.u32 + 58, ctx.r29.u8);
loc_837D6C04:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d6c14
	if (cr6.eq) goto loc_837D6C14;
	// stw r29,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r29.u32);
loc_837D6C14:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D6C1C"))) PPC_WEAK_FUNC(sub_837D6C1C);
PPC_FUNC_IMPL(__imp__sub_837D6C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D6C20"))) PPC_WEAK_FUNC(sub_837D6C20);
PPC_FUNC_IMPL(__imp__sub_837D6C20) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32211
	ctx.r10.s64 = -2110980096;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r9,r10,224
	ctx.r9.s64 = ctx.r10.s64 + 224;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,1
	ctx.r7.s64 = 1;
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// li r11,27
	ctx.r11.s64 = 27;
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r8,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r8.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r7,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r6,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r6.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r30,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stb r30,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r30.u8);
	// stb r30,57(r31)
	PPC_STORE_U8(ctx.r31.u32 + 57, ctx.r30.u8);
	// stb r30,58(r31)
	PPC_STORE_U8(ctx.r31.u32 + 58, ctx.r30.u8);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// bl 0x82595718
	ctx.lr = 0x837D6CB8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837d6cd0
	if (cr6.eq) goto loc_837D6CD0;
	// bl 0x837d6aa0
	ctx.lr = 0x837D6CC4;
	sub_837D6AA0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// b 0x837d6cd4
	goto loc_837D6CD4;
loc_837D6CD0:
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
loc_837D6CD4:
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

__attribute__((alias("__imp__sub_837D6CF0"))) PPC_WEAK_FUNC(sub_837D6CF0);
PPC_FUNC_IMPL(__imp__sub_837D6CF0) {
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
	// bl 0x837d6b18
	ctx.lr = 0x837D6D00;
	sub_837D6B18(ctx, base);
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

__attribute__((alias("__imp__sub_837D6D14"))) PPC_WEAK_FUNC(sub_837D6D14);
PPC_FUNC_IMPL(__imp__sub_837D6D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D6D18"))) PPC_WEAK_FUNC(sub_837D6D18);
PPC_FUNC_IMPL(__imp__sub_837D6D18) {
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
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,224
	ctx.r9.s64 = ctx.r11.s64 + 224;
	// stb r10,56(r3)
	PPC_STORE_U8(ctx.r3.u32 + 56, ctx.r10.u8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// bl 0x837d6b18
	ctx.lr = 0x837D6D48;
	sub_837D6B18(ctx, base);
	// lwz r30,48(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x837d6d78
	if (cr6.eq) goto loc_837D6D78;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x82574b18
	ctx.lr = 0x837D6D5C;
	sub_82574B18(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bgt cr6,0x837d6d78
	if (cr6.gt) goto loc_837D6D78;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837D6D78;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_837D6D78:
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// addi r10,r11,-1228
	ctx.r10.s64 = ctx.r11.s64 + -1228;
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

__attribute__((alias("__imp__sub_837D6D9C"))) PPC_WEAK_FUNC(sub_837D6D9C);
PPC_FUNC_IMPL(__imp__sub_837D6D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D6DA0"))) PPC_WEAK_FUNC(sub_837D6DA0);
PPC_FUNC_IMPL(__imp__sub_837D6DA0) {
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
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x837d6678
	ctx.lr = 0x837D6DBC;
	sub_837D6678(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837d6de0
	if (!cr6.eq) goto loc_837D6DE0;
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
loc_837D6DE0:
	// lbz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837d6e04
	if (!cr6.eq) goto loc_837D6E04;
	// bl 0x837d6908
	ctx.lr = 0x837D6DF8;
	sub_837D6908(ctx, base);
	// bl 0x837d6970
	ctx.lr = 0x837D6DFC;
	sub_837D6970(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// bl 0x837d6340
	ctx.lr = 0x837D6E04;
	sub_837D6340(ctx, base);
loc_837D6E04:
	// lbz r11,58(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 58);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837d6e1c
	if (!cr6.eq) goto loc_837D6E1C;
	// bl 0x833c7a88
	ctx.lr = 0x837D6E14;
	sub_833C7A88(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,58(r31)
	PPC_STORE_U8(ctx.r31.u32 + 58, ctx.r11.u8);
loc_837D6E1C:
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

__attribute__((alias("__imp__sub_837D6E34"))) PPC_WEAK_FUNC(sub_837D6E34);
PPC_FUNC_IMPL(__imp__sub_837D6E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D6E38"))) PPC_WEAK_FUNC(sub_837D6E38);
PPC_FUNC_IMPL(__imp__sub_837D6E38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837D6E40;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x837d66a8
	ctx.lr = 0x837D6E4C;
	sub_837D66A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d6f44
	if (cr6.eq) goto loc_837D6F44;
	// bl 0x830ff290
	ctx.lr = 0x837D6E5C;
	sub_830FF290(ctx, base);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// bl 0x830ff7b8
	ctx.lr = 0x837D6E6C;
	sub_830FF7B8(ctx, base);
	// lbz r10,58(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 58);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837d6e84
	if (cr6.eq) goto loc_837D6E84;
	// bl 0x833c7ad8
	ctx.lr = 0x837D6E7C;
	sub_833C7AD8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,58(r31)
	PPC_STORE_U8(ctx.r31.u32 + 58, ctx.r11.u8);
loc_837D6E84:
	// bl 0x830ffbc0
	ctx.lr = 0x837D6E88;
	sub_830FFBC0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x837d6908
	ctx.lr = 0x837D6E90;
	sub_837D6908(ctx, base);
	// bl 0x837d6970
	ctx.lr = 0x837D6E94;
	sub_837D6970(ctx, base);
	// lbz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d6ebc
	if (cr6.eq) goto loc_837D6EBC;
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x837d6f18
	if (cr6.eq) goto loc_837D6F18;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830ffdf8
	ctx.lr = 0x837D6EB8;
	sub_830FFDF8(ctx, base);
	// b 0x837d6f18
	goto loc_837D6F18;
loc_837D6EBC:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f1,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83101530
	ctx.lr = 0x837D6ED4;
	sub_83101530(ctx, base);
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x837d63a8
	ctx.lr = 0x837D6EE0;
	sub_837D63A8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837d6f44
	if (cr6.eq) goto loc_837D6F44;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x837d6438
	ctx.lr = 0x837D6EF4;
	sub_837D6438(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83787fb0
	ctx.lr = 0x837D6F00;
	sub_83787FB0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x83101c30
	ctx.lr = 0x837D6F18;
	sub_83101C30(ctx, base);
loc_837D6F18:
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r11,112
	ctx.r3.s64 = ctx.r11.s64 + 112;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830eab70
	ctx.lr = 0x837D6F38;
	sub_830EAB70(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_837D6F44:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D6F50"))) PPC_WEAK_FUNC(sub_837D6F50);
PPC_FUNC_IMPL(__imp__sub_837D6F50) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837d6fa0
	if (cr6.eq) goto loc_837D6FA0;
	// li r11,27
	ctx.r11.s64 = 27;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x837D6F80;
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
	ctx.lr = 0x837D6F98;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x837D6FA0;
	sub_82595170(ctx, base);
loc_837D6FA0:
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

__attribute__((alias("__imp__sub_837D6FB4"))) PPC_WEAK_FUNC(sub_837D6FB4);
PPC_FUNC_IMPL(__imp__sub_837D6FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D6FB8"))) PPC_WEAK_FUNC(sub_837D6FB8);
PPC_FUNC_IMPL(__imp__sub_837D6FB8) {
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
	// bl 0x837d6d18
	ctx.lr = 0x837D6FD8;
	sub_837D6D18(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d6ff8
	if (cr6.eq) goto loc_837D6FF8;
	// bl 0x82595188
	ctx.lr = 0x837D6FE8;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x837D6FF8;
	sub_825952B8(ctx, base);
loc_837D6FF8:
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

__attribute__((alias("__imp__sub_837D7014"))) PPC_WEAK_FUNC(sub_837D7014);
PPC_FUNC_IMPL(__imp__sub_837D7014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D7018"))) PPC_WEAK_FUNC(sub_837D7018);
PPC_FUNC_IMPL(__imp__sub_837D7018) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837D7020;
	__savegprlr_29(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x837d67a8
	ctx.lr = 0x837D702C;
	sub_837D67A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x830ff290
	ctx.lr = 0x837D7034;
	sub_830FF290(ctx, base);
	// lwz r8,28(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lwz r7,24(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lfs f13,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fadds f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f10,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// addi r29,r3,76
	ctx.r29.s64 = ctx.r3.s64 + 76;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f8,80(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fneg f6,f11
	ctx.f6.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// lfs f0,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// fcfid f5,f9
	ctx.f5.f64 = double(ctx.f9.s64);
	// fsel f4,f6,f0,f11
	ctx.f4.f64 = ctx.f6.f64 >= 0.0 ? ctx.f0.f64 : ctx.f11.f64;
	// frsp f12,f7
	ctx.f12.f64 = double(float(ctx.f7.f64));
	// frsp f11,f5
	ctx.f11.f64 = double(float(ctx.f5.f64));
	// fcmpu cr6,f4,f10
	cr6.compare(ctx.f4.f64, ctx.f10.f64);
	// blt cr6,0x837d708c
	if (cr6.lt) goto loc_837D708C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_837D708C:
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// stfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// li r11,255
	ctx.r11.s64 = 255;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stb r30,107(r1)
	PPC_STORE_U8(ctx.r1.u32 + 107, ctx.r30.u8);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stb r11,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r11.u8);
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stb r11,105(r1)
	PPC_STORE_U8(ctx.r1.u32 + 105, ctx.r11.u8);
	// lfs f13,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f13.f64 = double(temp.f32);
	// stb r11,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r11.u8);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stb r11,124(r1)
	PPC_STORE_U8(ctx.r1.u32 + 124, ctx.r11.u8);
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stb r11,125(r1)
	PPC_STORE_U8(ctx.r1.u32 + 125, ctx.r11.u8);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stb r11,126(r1)
	PPC_STORE_U8(ctx.r1.u32 + 126, ctx.r11.u8);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stb r30,127(r1)
	PPC_STORE_U8(ctx.r1.u32 + 127, ctx.r30.u8);
	// stfs f11,140(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stb r11,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r11.u8);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stb r11,145(r1)
	PPC_STORE_U8(ctx.r1.u32 + 145, ctx.r11.u8);
	// stfs f13,152(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stb r11,146(r1)
	PPC_STORE_U8(ctx.r1.u32 + 146, ctx.r11.u8);
	// stfs f12,156(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stb r30,147(r1)
	PPC_STORE_U8(ctx.r1.u32 + 147, ctx.r30.u8);
	// stfs f11,160(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stb r11,164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 164, ctx.r11.u8);
	// stfs f13,168(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stb r11,165(r1)
	PPC_STORE_U8(ctx.r1.u32 + 165, ctx.r11.u8);
	// stfs f13,172(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stb r11,166(r1)
	PPC_STORE_U8(ctx.r1.u32 + 166, ctx.r11.u8);
	// stb r30,167(r1)
	PPC_STORE_U8(ctx.r1.u32 + 167, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837d6638
	ctx.lr = 0x837D7120;
	sub_837D6638(ctx, base);
	// lis r4,2
	ctx.r4.s64 = 131072;
	// bl 0x833cb2c8
	ctx.lr = 0x837D7128;
	sub_833CB2C8(ctx, base);
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x833cb348
	ctx.lr = 0x837D7134;
	sub_833CB348(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833cb390
	ctx.lr = 0x837D7140;
	sub_833CB390(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833cb398
	ctx.lr = 0x837D714C;
	sub_833CB398(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,15
	ctx.r4.s64 = 15;
	// bl 0x833cb3a0
	ctx.lr = 0x837D7158;
	sub_833CB3A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833cb3a8
	ctx.lr = 0x837D7164;
	sub_833CB3A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833cb3c8
	ctx.lr = 0x837D7170;
	sub_833CB3C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833cb3d8
	ctx.lr = 0x837D717C;
	sub_833CB3D8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r29,88
	ctx.r4.s64 = ctx.r29.s64 + 88;
	// bl 0x833cb3f0
	ctx.lr = 0x837D7188;
	sub_833CB3F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x833cb4f8
	ctx.lr = 0x837D719C;
	sub_833CB4F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r29,56
	ctx.r4.s64 = ctx.r29.s64 + 56;
	// bl 0x833cb3f0
	ctx.lr = 0x837D71A8;
	sub_833CB3F0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833cb2f8
	ctx.lr = 0x837D71B4;
	sub_833CB2F8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D71BC"))) PPC_WEAK_FUNC(sub_837D71BC);
PPC_FUNC_IMPL(__imp__sub_837D71BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D71C0"))) PPC_WEAK_FUNC(sub_837D71C0);
PPC_FUNC_IMPL(__imp__sub_837D71C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837D71C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-736(r1)
	ea = -736 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x830ff290
	ctx.lr = 0x837D71D4;
	sub_830FF290(ctx, base);
	// lwz r6,28(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lwz r5,24(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f0,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// li r11,255
	ctx.r11.s64 = 255;
	// fadds f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lwz r29,4(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// std r6,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r6.u64);
	// lfd f12,200(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// std r5,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r5.u64);
	// lfd f10,200(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// fcfid f8,f10
	ctx.f8.f64 = double(ctx.f10.s64);
	// lfs f11,20048(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20048);
	ctx.f11.f64 = double(temp.f32);
	// fcfid f6,f12
	ctx.f6.f64 = double(ctx.f12.s64);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lfs f0,9008(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// addi r28,r3,76
	ctx.r28.s64 = ctx.r3.s64 + 76;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lfs f13,-26260(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -26260);
	ctx.f13.f64 = double(temp.f32);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// lfs f8,11872(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 11872);
	ctx.f8.f64 = double(temp.f32);
	// frsp f12,f6
	ctx.f12.f64 = double(float(ctx.f6.f64));
	// fmuls f10,f7,f11
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
loc_837D7240:
	// cmpwi cr6,r29,3
	cr6.compare<int32_t>(ctx.r29.s32, 3, xer);
	// bne cr6,0x837d7270
	if (!cr6.eq) goto loc_837D7270;
	// fneg f7,f9
	ctx.fpscr.disableFlushMode();
	ctx.f7.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// fsel f6,f7,f0,f9
	ctx.f6.f64 = ctx.f7.f64 >= 0.0 ? ctx.f0.f64 : ctx.f9.f64;
	// fmuls f5,f6,f8
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f8.f64));
	// fctidz f4,f5
	ctx.f4.s64 = (ctx.f5.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f5.f64));
	// stfd f4,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.f4.u64);
	// lwz r10,204(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// subfc r9,r10,r31
	xer.ca = ctx.r31.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r31.s64 - ctx.r10.s64;
	// addze r8,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r8.s64 = temp.s64;
	// subf r7,r8,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r8.s64;
	// and r10,r7,r11
	ctx.r10.u64 = ctx.r7.u64 & ctx.r11.u64;
loc_837D7270:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x837d72f4
	if (!cr6.eq) goto loc_837D72F4;
	// li r9,5
	ctx.r9.s64 = 5;
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r8,r1,252
	ctx.r8.s64 = ctx.r1.s64 + 252;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stb r11,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r11.u8);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// stfs f12,148(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stb r11,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r11.u8);
	// stfs f13,160(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r11.u8);
	// addi r9,r7,-4
	ctx.r9.s64 = ctx.r7.s64 + -4;
	// stb r10,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r10.u8);
	// stb r11,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r11.u8);
	// stb r11,153(r1)
	PPC_STORE_U8(ctx.r1.u32 + 153, ctx.r11.u8);
	// stb r11,154(r1)
	PPC_STORE_U8(ctx.r1.u32 + 154, ctx.r11.u8);
	// stb r10,155(r1)
	PPC_STORE_U8(ctx.r1.u32 + 155, ctx.r10.u8);
loc_837D72CC:
	// lwzu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x837d72cc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837D72CC;
	// li r7,5
	ctx.r7.s64 = 5;
	// addi r9,r1,140
	ctx.r9.s64 = ctx.r1.s64 + 140;
	// addi r8,r1,272
	ctx.r8.s64 = ctx.r1.s64 + 272;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
loc_837D72E8:
	// lwzu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x837d72e8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837D72E8;
loc_837D72F4:
	// addi r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 1;
	// stfs f0,180(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// clrldi r8,r5,32
	ctx.r8.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// add r7,r31,r9
	ctx.r7.u64 = ctx.r31.u64 + ctx.r9.u64;
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// std r8,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r8.u64);
	// lfd f7,232(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 232);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// addi r8,r1,296
	ctx.r8.s64 = ctx.r1.s64 + 296;
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// li r9,5
	ctx.r9.s64 = 5;
	// rlwinm r4,r7,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// stb r10,187(r1)
	PPC_STORE_U8(ctx.r1.u32 + 187, ctx.r10.u8);
	// stb r10,123(r1)
	PPC_STORE_U8(ctx.r1.u32 + 123, ctx.r10.u8);
	// add r7,r4,r8
	ctx.r7.u64 = ctx.r4.u64 + ctx.r8.u64;
	// stb r11,184(r1)
	PPC_STORE_U8(ctx.r1.u32 + 184, ctx.r11.u8);
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// stb r11,185(r1)
	PPC_STORE_U8(ctx.r1.u32 + 185, ctx.r11.u8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// stb r11,186(r1)
	PPC_STORE_U8(ctx.r1.u32 + 186, ctx.r11.u8);
	// addi r9,r8,-4
	ctx.r9.s64 = ctx.r8.s64 + -4;
	// stb r11,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r11.u8);
	// stb r11,121(r1)
	PPC_STORE_U8(ctx.r1.u32 + 121, ctx.r11.u8);
	// addi r8,r7,-4
	ctx.r8.s64 = ctx.r7.s64 + -4;
	// stb r11,122(r1)
	PPC_STORE_U8(ctx.r1.u32 + 122, ctx.r11.u8);
	// fmuls f4,f5,f10
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f10.f64));
	// stfs f4,176(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fmuls f3,f5,f11
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f11.f64));
	// stfs f3,188(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f4,112(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f3,124(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
loc_837D737C:
	// lwzu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x837d737c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837D737C;
	// addi r9,r1,316
	ctx.r9.s64 = ctx.r1.s64 + 316;
	// li r7,5
	ctx.r7.s64 = 5;
	// add r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 + ctx.r9.u64;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r8,r9,-4
	ctx.r8.s64 = ctx.r9.s64 + -4;
	// addi r9,r6,-4
	ctx.r9.s64 = ctx.r6.s64 + -4;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
loc_837D73A4:
	// lwzu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x837d73a4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837D73A4;
	// cmpwi cr6,r29,3
	cr6.compare<int32_t>(ctx.r29.s32, 3, xer);
	// bne cr6,0x837d73e0
	if (!cr6.eq) goto loc_837D73E0;
	// fneg f7,f9
	ctx.fpscr.disableFlushMode();
	ctx.f7.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// fsel f6,f7,f0,f9
	ctx.f6.f64 = ctx.f7.f64 >= 0.0 ? ctx.f0.f64 : ctx.f9.f64;
	// fmuls f5,f6,f8
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f8.f64));
	// fctidz f4,f5
	ctx.f4.s64 = (ctx.f5.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f5.f64));
	// stfd f4,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.f4.u64);
	// lwz r10,204(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// subfc r9,r10,r5
	xer.ca = ctx.r5.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r5.s64 - ctx.r10.s64;
	// addze r8,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r8.s64 = temp.s64;
	// subf r7,r8,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r8.s64;
	// and r10,r7,r11
	ctx.r10.u64 = ctx.r7.u64 & ctx.r11.u64;
loc_837D73E0:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x837d7464
	if (!cr6.eq) goto loc_837D7464;
	// li r9,5
	ctx.r9.s64 = 5;
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r8,r1,252
	ctx.r8.s64 = ctx.r1.s64 + 252;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stb r11,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r11.u8);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// stfs f12,148(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stb r11,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r11.u8);
	// stfs f13,160(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r11.u8);
	// addi r9,r7,-4
	ctx.r9.s64 = ctx.r7.s64 + -4;
	// stb r10,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r10.u8);
	// stb r11,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r11.u8);
	// stb r11,153(r1)
	PPC_STORE_U8(ctx.r1.u32 + 153, ctx.r11.u8);
	// stb r11,154(r1)
	PPC_STORE_U8(ctx.r1.u32 + 154, ctx.r11.u8);
	// stb r10,155(r1)
	PPC_STORE_U8(ctx.r1.u32 + 155, ctx.r10.u8);
loc_837D743C:
	// lwzu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x837d743c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837D743C;
	// li r7,5
	ctx.r7.s64 = 5;
	// addi r9,r1,140
	ctx.r9.s64 = ctx.r1.s64 + 140;
	// addi r8,r1,272
	ctx.r8.s64 = ctx.r1.s64 + 272;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
loc_837D7458:
	// lwzu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x837d7458
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837D7458;
loc_837D7464:
	// addi r5,r31,2
	ctx.r5.s64 = ctx.r31.s64 + 2;
	// stfs f0,180(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// addi r8,r1,336
	ctx.r8.s64 = ctx.r1.s64 + 336;
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// clrldi r7,r5,32
	ctx.r7.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// li r9,5
	ctx.r9.s64 = 5;
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// std r7,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r7.u64);
	// lfd f7,224(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 224);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// add r7,r4,r8
	ctx.r7.u64 = ctx.r4.u64 + ctx.r8.u64;
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// stb r10,187(r1)
	PPC_STORE_U8(ctx.r1.u32 + 187, ctx.r10.u8);
	// addi r9,r8,-4
	ctx.r9.s64 = ctx.r8.s64 + -4;
	// stb r11,184(r1)
	PPC_STORE_U8(ctx.r1.u32 + 184, ctx.r11.u8);
	// stb r11,185(r1)
	PPC_STORE_U8(ctx.r1.u32 + 185, ctx.r11.u8);
	// addi r8,r7,-4
	ctx.r8.s64 = ctx.r7.s64 + -4;
	// stb r11,186(r1)
	PPC_STORE_U8(ctx.r1.u32 + 186, ctx.r11.u8);
	// stb r11,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r11.u8);
	// stb r11,121(r1)
	PPC_STORE_U8(ctx.r1.u32 + 121, ctx.r11.u8);
	// stb r11,122(r1)
	PPC_STORE_U8(ctx.r1.u32 + 122, ctx.r11.u8);
	// stb r10,123(r1)
	PPC_STORE_U8(ctx.r1.u32 + 123, ctx.r10.u8);
	// fmuls f4,f5,f10
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f10.f64));
	// stfs f4,176(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fmuls f3,f5,f11
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f11.f64));
	// stfs f3,188(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f4,112(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f3,124(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
loc_837D74E0:
	// lwzu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x837d74e0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837D74E0;
	// addi r9,r1,356
	ctx.r9.s64 = ctx.r1.s64 + 356;
	// li r7,5
	ctx.r7.s64 = 5;
	// add r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 + ctx.r9.u64;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r8,r9,-4
	ctx.r8.s64 = ctx.r9.s64 + -4;
	// addi r9,r6,-4
	ctx.r9.s64 = ctx.r6.s64 + -4;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
loc_837D7508:
	// lwzu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x837d7508
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837D7508;
	// cmpwi cr6,r29,3
	cr6.compare<int32_t>(ctx.r29.s32, 3, xer);
	// bne cr6,0x837d7544
	if (!cr6.eq) goto loc_837D7544;
	// fneg f7,f9
	ctx.fpscr.disableFlushMode();
	ctx.f7.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// fsel f6,f7,f0,f9
	ctx.f6.f64 = ctx.f7.f64 >= 0.0 ? ctx.f0.f64 : ctx.f9.f64;
	// fmuls f5,f6,f8
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f8.f64));
	// fctidz f4,f5
	ctx.f4.s64 = (ctx.f5.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f5.f64));
	// stfd f4,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.f4.u64);
	// lwz r10,204(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// subfc r9,r10,r5
	xer.ca = ctx.r5.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r5.s64 - ctx.r10.s64;
	// addze r8,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r8.s64 = temp.s64;
	// subf r7,r8,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r8.s64;
	// and r10,r7,r11
	ctx.r10.u64 = ctx.r7.u64 & ctx.r11.u64;
loc_837D7544:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x837d75c8
	if (!cr6.eq) goto loc_837D75C8;
	// li r9,5
	ctx.r9.s64 = 5;
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r8,r1,252
	ctx.r8.s64 = ctx.r1.s64 + 252;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stb r11,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r11.u8);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// stfs f12,148(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stb r11,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r11.u8);
	// stfs f13,160(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r11.u8);
	// addi r9,r7,-4
	ctx.r9.s64 = ctx.r7.s64 + -4;
	// stb r10,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r10.u8);
	// stb r11,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r11.u8);
	// stb r11,153(r1)
	PPC_STORE_U8(ctx.r1.u32 + 153, ctx.r11.u8);
	// stb r11,154(r1)
	PPC_STORE_U8(ctx.r1.u32 + 154, ctx.r11.u8);
	// stb r10,155(r1)
	PPC_STORE_U8(ctx.r1.u32 + 155, ctx.r10.u8);
loc_837D75A0:
	// lwzu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x837d75a0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837D75A0;
	// li r7,5
	ctx.r7.s64 = 5;
	// addi r9,r1,140
	ctx.r9.s64 = ctx.r1.s64 + 140;
	// addi r8,r1,272
	ctx.r8.s64 = ctx.r1.s64 + 272;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
loc_837D75BC:
	// lwzu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x837d75bc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837D75BC;
loc_837D75C8:
	// addi r5,r31,3
	ctx.r5.s64 = ctx.r31.s64 + 3;
	// stfs f0,180(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// addi r8,r1,376
	ctx.r8.s64 = ctx.r1.s64 + 376;
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// clrldi r7,r5,32
	ctx.r7.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// li r9,5
	ctx.r9.s64 = 5;
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// std r7,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r7.u64);
	// lfd f7,240(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 240);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// add r7,r4,r8
	ctx.r7.u64 = ctx.r4.u64 + ctx.r8.u64;
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// stb r10,187(r1)
	PPC_STORE_U8(ctx.r1.u32 + 187, ctx.r10.u8);
	// addi r9,r8,-4
	ctx.r9.s64 = ctx.r8.s64 + -4;
	// stb r10,123(r1)
	PPC_STORE_U8(ctx.r1.u32 + 123, ctx.r10.u8);
	// stb r11,184(r1)
	PPC_STORE_U8(ctx.r1.u32 + 184, ctx.r11.u8);
	// addi r8,r7,-4
	ctx.r8.s64 = ctx.r7.s64 + -4;
	// stb r11,185(r1)
	PPC_STORE_U8(ctx.r1.u32 + 185, ctx.r11.u8);
	// stb r11,186(r1)
	PPC_STORE_U8(ctx.r1.u32 + 186, ctx.r11.u8);
	// stb r11,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r11.u8);
	// stb r11,121(r1)
	PPC_STORE_U8(ctx.r1.u32 + 121, ctx.r11.u8);
	// stb r11,122(r1)
	PPC_STORE_U8(ctx.r1.u32 + 122, ctx.r11.u8);
	// fmuls f4,f5,f10
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f10.f64));
	// stfs f4,176(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fmuls f3,f5,f11
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f11.f64));
	// stfs f3,188(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f4,112(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f3,124(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
loc_837D7644:
	// lwzu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x837d7644
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837D7644;
	// addi r9,r1,396
	ctx.r9.s64 = ctx.r1.s64 + 396;
	// li r7,5
	ctx.r7.s64 = 5;
	// add r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 + ctx.r9.u64;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r8,r9,-4
	ctx.r8.s64 = ctx.r9.s64 + -4;
	// addi r9,r6,-4
	ctx.r9.s64 = ctx.r6.s64 + -4;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
loc_837D766C:
	// lwzu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x837d766c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837D766C;
	// cmpwi cr6,r29,3
	cr6.compare<int32_t>(ctx.r29.s32, 3, xer);
	// bne cr6,0x837d76a8
	if (!cr6.eq) goto loc_837D76A8;
	// fneg f7,f9
	ctx.fpscr.disableFlushMode();
	ctx.f7.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// fsel f6,f7,f0,f9
	ctx.f6.f64 = ctx.f7.f64 >= 0.0 ? ctx.f0.f64 : ctx.f9.f64;
	// fmuls f5,f6,f8
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f8.f64));
	// fctidz f4,f5
	ctx.f4.s64 = (ctx.f5.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f5.f64));
	// stfd f4,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.f4.u64);
	// lwz r10,204(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// subfc r9,r10,r5
	xer.ca = ctx.r5.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r5.s64 - ctx.r10.s64;
	// addze r8,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r8.s64 = temp.s64;
	// subf r7,r8,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r8.s64;
	// and r10,r7,r11
	ctx.r10.u64 = ctx.r7.u64 & ctx.r11.u64;
loc_837D76A8:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x837d772c
	if (!cr6.eq) goto loc_837D772C;
	// li r9,5
	ctx.r9.s64 = 5;
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r8,r1,252
	ctx.r8.s64 = ctx.r1.s64 + 252;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stb r11,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r11.u8);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// stfs f12,148(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stb r11,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r11.u8);
	// stfs f13,160(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r11.u8);
	// addi r9,r7,-4
	ctx.r9.s64 = ctx.r7.s64 + -4;
	// stb r10,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r10.u8);
	// stb r11,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r11.u8);
	// stb r11,153(r1)
	PPC_STORE_U8(ctx.r1.u32 + 153, ctx.r11.u8);
	// stb r11,154(r1)
	PPC_STORE_U8(ctx.r1.u32 + 154, ctx.r11.u8);
	// stb r10,155(r1)
	PPC_STORE_U8(ctx.r1.u32 + 155, ctx.r10.u8);
loc_837D7704:
	// lwzu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x837d7704
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837D7704;
	// li r7,5
	ctx.r7.s64 = 5;
	// addi r9,r1,140
	ctx.r9.s64 = ctx.r1.s64 + 140;
	// addi r8,r1,272
	ctx.r8.s64 = ctx.r1.s64 + 272;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
loc_837D7720:
	// lwzu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x837d7720
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837D7720;
loc_837D772C:
	// addi r5,r31,4
	ctx.r5.s64 = ctx.r31.s64 + 4;
	// stfs f0,180(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// addi r8,r1,416
	ctx.r8.s64 = ctx.r1.s64 + 416;
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// clrldi r7,r5,32
	ctx.r7.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// li r9,5
	ctx.r9.s64 = 5;
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// std r7,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r7.u64);
	// lfd f7,216(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// add r7,r4,r8
	ctx.r7.u64 = ctx.r4.u64 + ctx.r8.u64;
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// stb r10,187(r1)
	PPC_STORE_U8(ctx.r1.u32 + 187, ctx.r10.u8);
	// addi r9,r8,-4
	ctx.r9.s64 = ctx.r8.s64 + -4;
	// stb r10,123(r1)
	PPC_STORE_U8(ctx.r1.u32 + 123, ctx.r10.u8);
	// stb r11,184(r1)
	PPC_STORE_U8(ctx.r1.u32 + 184, ctx.r11.u8);
	// addi r8,r7,-4
	ctx.r8.s64 = ctx.r7.s64 + -4;
	// stb r11,185(r1)
	PPC_STORE_U8(ctx.r1.u32 + 185, ctx.r11.u8);
	// stb r11,186(r1)
	PPC_STORE_U8(ctx.r1.u32 + 186, ctx.r11.u8);
	// stb r11,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r11.u8);
	// stb r11,121(r1)
	PPC_STORE_U8(ctx.r1.u32 + 121, ctx.r11.u8);
	// stb r11,122(r1)
	PPC_STORE_U8(ctx.r1.u32 + 122, ctx.r11.u8);
	// fmuls f4,f5,f10
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f10.f64));
	// stfs f4,176(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fmuls f3,f5,f11
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f11.f64));
	// stfs f3,188(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f4,112(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f3,124(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
loc_837D77A8:
	// lwzu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x837d77a8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837D77A8;
	// addi r9,r1,436
	ctx.r9.s64 = ctx.r1.s64 + 436;
	// li r7,5
	ctx.r7.s64 = 5;
	// add r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 + ctx.r9.u64;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r8,r9,-4
	ctx.r8.s64 = ctx.r9.s64 + -4;
	// addi r9,r6,-4
	ctx.r9.s64 = ctx.r6.s64 + -4;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
loc_837D77D0:
	// lwzu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x837d77d0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837D77D0;
	// cmpwi cr6,r29,3
	cr6.compare<int32_t>(ctx.r29.s32, 3, xer);
	// bne cr6,0x837d780c
	if (!cr6.eq) goto loc_837D780C;
	// fneg f7,f9
	ctx.fpscr.disableFlushMode();
	ctx.f7.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// fsel f6,f7,f0,f9
	ctx.f6.f64 = ctx.f7.f64 >= 0.0 ? ctx.f0.f64 : ctx.f9.f64;
	// fmuls f5,f6,f8
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f8.f64));
	// fctidz f4,f5
	ctx.f4.s64 = (ctx.f5.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f5.f64));
	// stfd f4,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.f4.u64);
	// lwz r10,204(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// subfc r9,r10,r5
	xer.ca = ctx.r5.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r5.s64 - ctx.r10.s64;
	// addze r8,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r8.s64 = temp.s64;
	// subf r7,r8,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r8.s64;
	// and r10,r7,r11
	ctx.r10.u64 = ctx.r7.u64 & ctx.r11.u64;
loc_837D780C:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x837d7890
	if (!cr6.eq) goto loc_837D7890;
	// li r9,5
	ctx.r9.s64 = 5;
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r8,r1,252
	ctx.r8.s64 = ctx.r1.s64 + 252;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stb r11,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r11.u8);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// stfs f12,148(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stb r11,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r11.u8);
	// stfs f13,160(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r11.u8);
	// addi r9,r7,-4
	ctx.r9.s64 = ctx.r7.s64 + -4;
	// stb r10,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r10.u8);
	// stb r11,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r11.u8);
	// stb r11,153(r1)
	PPC_STORE_U8(ctx.r1.u32 + 153, ctx.r11.u8);
	// stb r11,154(r1)
	PPC_STORE_U8(ctx.r1.u32 + 154, ctx.r11.u8);
	// stb r10,155(r1)
	PPC_STORE_U8(ctx.r1.u32 + 155, ctx.r10.u8);
loc_837D7868:
	// lwzu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x837d7868
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837D7868;
	// li r7,5
	ctx.r7.s64 = 5;
	// addi r9,r1,140
	ctx.r9.s64 = ctx.r1.s64 + 140;
	// addi r8,r1,272
	ctx.r8.s64 = ctx.r1.s64 + 272;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
loc_837D7884:
	// lwzu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x837d7884
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837D7884;
loc_837D7890:
	// addi r5,r31,5
	ctx.r5.s64 = ctx.r31.s64 + 5;
	// stfs f0,180(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// addi r8,r1,456
	ctx.r8.s64 = ctx.r1.s64 + 456;
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// clrldi r7,r5,32
	ctx.r7.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// li r9,5
	ctx.r9.s64 = 5;
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// std r7,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r7.u64);
	// lfd f7,208(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 208);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// add r7,r4,r8
	ctx.r7.u64 = ctx.r4.u64 + ctx.r8.u64;
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// stb r10,187(r1)
	PPC_STORE_U8(ctx.r1.u32 + 187, ctx.r10.u8);
	// addi r9,r8,-4
	ctx.r9.s64 = ctx.r8.s64 + -4;
	// stb r10,123(r1)
	PPC_STORE_U8(ctx.r1.u32 + 123, ctx.r10.u8);
	// stb r11,184(r1)
	PPC_STORE_U8(ctx.r1.u32 + 184, ctx.r11.u8);
	// addi r8,r7,-4
	ctx.r8.s64 = ctx.r7.s64 + -4;
	// stb r11,185(r1)
	PPC_STORE_U8(ctx.r1.u32 + 185, ctx.r11.u8);
	// stb r11,186(r1)
	PPC_STORE_U8(ctx.r1.u32 + 186, ctx.r11.u8);
	// stb r11,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r11.u8);
	// stb r11,121(r1)
	PPC_STORE_U8(ctx.r1.u32 + 121, ctx.r11.u8);
	// stb r11,122(r1)
	PPC_STORE_U8(ctx.r1.u32 + 122, ctx.r11.u8);
	// fmuls f4,f5,f10
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f10.f64));
	// stfs f4,176(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fmuls f3,f5,f11
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f11.f64));
	// stfs f3,188(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f4,112(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f3,124(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
loc_837D790C:
	// lwzu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x837d790c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837D790C;
	// addi r9,r1,476
	ctx.r9.s64 = ctx.r1.s64 + 476;
	// li r7,5
	ctx.r7.s64 = 5;
	// add r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 + ctx.r9.u64;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r8,r9,-4
	ctx.r8.s64 = ctx.r9.s64 + -4;
	// addi r9,r6,-4
	ctx.r9.s64 = ctx.r6.s64 + -4;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
loc_837D7934:
	// lwzu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x837d7934
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837D7934;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,10
	cr6.compare<uint32_t>(ctx.r5.u32, 10, xer);
	// blt cr6,0x837d7240
	if (cr6.lt) goto loc_837D7240;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x837d6638
	ctx.lr = 0x837D7954;
	sub_837D6638(ctx, base);
	// lis r4,2
	ctx.r4.s64 = 131072;
	// bl 0x833cb2c8
	ctx.lr = 0x837D795C;
	sub_833CB2C8(ctx, base);
	// lwz r4,44(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x833cb348
	ctx.lr = 0x837D7968;
	sub_833CB348(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833cb398
	ctx.lr = 0x837D7974;
	sub_833CB398(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,15
	ctx.r4.s64 = 15;
	// bl 0x833cb3a0
	ctx.lr = 0x837D7980;
	sub_833CB3A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833cb3a8
	ctx.lr = 0x837D798C;
	sub_833CB3A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833cb3c8
	ctx.lr = 0x837D7998;
	sub_833CB3C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833cb3d8
	ctx.lr = 0x837D79A4;
	sub_833CB3D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r28,88
	ctx.r4.s64 = ctx.r28.s64 + 88;
	// bl 0x833cb3f0
	ctx.lr = 0x837D79B0;
	sub_833CB3F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r1,256
	ctx.r6.s64 = ctx.r1.s64 + 256;
	// li r5,22
	ctx.r5.s64 = 22;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x833cb4f8
	ctx.lr = 0x837D79C4;
	sub_833CB4F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r28,56
	ctx.r4.s64 = ctx.r28.s64 + 56;
	// bl 0x833cb3f0
	ctx.lr = 0x837D79D0;
	sub_833CB3F0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833cb2f8
	ctx.lr = 0x837D79DC;
	sub_833CB2F8(ctx, base);
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D79E4"))) PPC_WEAK_FUNC(sub_837D79E4);
PPC_FUNC_IMPL(__imp__sub_837D79E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D79E8"))) PPC_WEAK_FUNC(sub_837D79E8);
PPC_FUNC_IMPL(__imp__sub_837D79E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837D79F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x837d6908
	ctx.lr = 0x837D79FC;
	sub_837D6908(ctx, base);
	// bl 0x831f8200
	ctx.lr = 0x837D7A00;
	sub_831F8200(ctx, base);
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// li r29,0
	ctx.r29.s64 = 0;
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x837d7a84
	if (cr6.eq) goto loc_837D7A84;
	// bl 0x830ffbc0
	ctx.lr = 0x837D7A24;
	sub_830FFBC0(ctx, base);
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x830ffea0
	ctx.lr = 0x837D7A30;
	sub_830FFEA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d7a68
	if (cr6.eq) goto loc_837D7A68;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,40(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83100770
	ctx.lr = 0x837D7A4C;
	sub_83100770(ctx, base);
	// ld r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x837d7a84
	if (cr6.lt) goto loc_837D7A84;
	// b 0x837d7a80
	goto loc_837D7A80;
loc_837D7A68:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x83100028
	ctx.lr = 0x837D7A74;
	sub_83100028(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d7a84
	if (cr6.eq) goto loc_837D7A84;
loc_837D7A80:
	// li r29,1
	ctx.r29.s64 = 1;
loc_837D7A84:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837d7a9c
	if (!cr6.eq) goto loc_837D7A9C;
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f13,16(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
loc_837D7A9C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d7ab8
	if (cr6.eq) goto loc_837D7AB8;
	// bl 0x837d71c0
	ctx.lr = 0x837D7AB0;
	sub_837D71C0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_837D7AB8:
	// bl 0x837d7018
	ctx.lr = 0x837D7ABC;
	sub_837D7018(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D7AC4"))) PPC_WEAK_FUNC(sub_837D7AC4);
PPC_FUNC_IMPL(__imp__sub_837D7AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D7AC8"))) PPC_WEAK_FUNC(sub_837D7AC8);
PPC_FUNC_IMPL(__imp__sub_837D7AC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x837D7AD0;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x831ce778
	ctx.lr = 0x837D7AD8;
	__savefpr_28(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 56);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d7bb0
	if (cr6.eq) goto loc_837D7BB0;
	// lbz r11,57(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 57);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837d7e44
	if (!cr6.eq) goto loc_837D7E44;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837d7bb0
	if (!cr6.eq) goto loc_837D7BB0;
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x837d7b30
	if (!cr6.eq) goto loc_837D7B30;
	// bl 0x837d6908
	ctx.lr = 0x837D7B14;
	sub_837D6908(ctx, base);
	// bl 0x837d6970
	ctx.lr = 0x837D7B18;
	sub_837D6970(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// bl 0x837d6340
	ctx.lr = 0x837D7B20;
	sub_837D6340(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x831ce7c4
	ctx.lr = 0x837D7B2C;
	__restfpr_28(ctx, base);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_837D7B30:
	// bl 0x837d63a0
	ctx.lr = 0x837D7B34;
	sub_837D63A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837d7e44
	if (!cr6.eq) goto loc_837D7E44;
	// bl 0x830ffbc0
	ctx.lr = 0x837D7B44;
	sub_830FFBC0(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lfs f1,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83101530
	ctx.lr = 0x837D7B5C;
	sub_83101530(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// li r5,15
	ctx.r5.s64 = 15;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// bl 0x83100450
	ctx.lr = 0x837D7B74;
	sub_83100450(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x837d6438
	ctx.lr = 0x837D7B7C;
	sub_837D6438(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x83787fb0
	ctx.lr = 0x837D7B88;
	sub_83787FB0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x83101c30
	ctx.lr = 0x837D7BA0;
	sub_83101C30(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x831ce7c4
	ctx.lr = 0x837D7BAC;
	__restfpr_28(ctx, base);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_837D7BB0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x837d7c28
	if (!cr6.eq) goto loc_837D7C28;
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfs f13,12(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// bl 0x830ffbc0
	ctx.lr = 0x837D7BCC;
	sub_830FFBC0(ctx, base);
	// lfs f12,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// lfs f9,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f10,f9
	cr6.compare(ctx.f10.f64, ctx.f9.f64);
	// blt cr6,0x837d7c74
	if (cr6.lt) goto loc_837D7C74;
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x83100028
	ctx.lr = 0x837D7BEC;
	sub_83100028(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d7c74
	if (cr6.eq) goto loc_837D7C74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837d6b18
	ctx.lr = 0x837D7C00;
	sub_837D6B18(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x830ff290
	ctx.lr = 0x837D7C0C;
	sub_830FF290(ctx, base);
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// blt cr6,0x837d7c20
	if (cr6.lt) goto loc_837D7C20;
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// ble cr6,0x837d7c74
	if (!cr6.gt) goto loc_837D7C74;
loc_837D7C20:
	// bl 0x830ff7b8
	ctx.lr = 0x837D7C24;
	sub_830FF7B8(ctx, base);
	// b 0x837d7c74
	goto loc_837D7C74;
loc_837D7C28:
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x837d7c74
	if (!cr6.eq) goto loc_837D7C74;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x837d63a0
	ctx.lr = 0x837D7C38;
	sub_837D63A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837d7c74
	if (!cr6.eq) goto loc_837D7C74;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r6,48(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f0,21708(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21708);
	ctx.f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// bl 0x833bcc30
	ctx.lr = 0x837D7C70;
	sub_833BCC30(ctx, base);
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
loc_837D7C74:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x837d7c98
	if (!cr6.eq) goto loc_837D7C98;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x837d7c98
	if (cr6.eq) goto loc_837D7C98;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_837D7C98:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x837d7cac
	if (cr6.eq) goto loc_837D7CAC;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x837d7e44
	if (!cr6.eq) goto loc_837D7E44;
loc_837D7CAC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837d79e8
	ctx.lr = 0x837D7CB4;
	sub_837D79E8(ctx, base);
	// bl 0x830ffbc0
	ctx.lr = 0x837D7CB8;
	sub_830FFBC0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x837d7e44
	if (!cr6.eq) goto loc_837D7E44;
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x830ffea0
	ctx.lr = 0x837D7CD0;
	sub_830FFEA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d7e44
	if (cr6.eq) goto loc_837D7E44;
	// bl 0x830ff290
	ctx.lr = 0x837D7CE0;
	sub_830FF290(ctx, base);
	// addi r29,r3,76
	ctx.r29.s64 = ctx.r3.s64 + 76;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f31,28(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,32(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,36(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,40(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	ctx.f28.f64 = double(temp.f32);
	// bl 0x837d6638
	ctx.lr = 0x837D7CFC;
	sub_837D6638(ctx, base);
	// lis r4,2
	ctx.r4.s64 = 131072;
	// bl 0x833cb2c8
	ctx.lr = 0x837D7D04;
	sub_833CB2C8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x831004c8
	ctx.lr = 0x837D7D14;
	sub_831004C8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r11,255
	ctx.r11.s64 = 255;
	// stfs f29,84(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stfs f30,100(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfs f29,104(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f0,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-26260(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -26260);
	ctx.f13.f64 = double(temp.f32);
	// stb r11,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r11.u8);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stb r11,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r11.u8);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r11.u8);
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stb r11,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r11.u8);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stb r11,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r11.u8);
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stb r11,109(r1)
	PPC_STORE_U8(ctx.r1.u32 + 109, ctx.r11.u8);
	// stfs f28,124(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stb r11,110(r1)
	PPC_STORE_U8(ctx.r1.u32 + 110, ctx.r11.u8);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stb r11,111(r1)
	PPC_STORE_U8(ctx.r1.u32 + 111, ctx.r11.u8);
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stb r11,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r11.u8);
	// stfs f30,140(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stb r11,129(r1)
	PPC_STORE_U8(ctx.r1.u32 + 129, ctx.r11.u8);
	// stfs f28,144(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stb r11,130(r1)
	PPC_STORE_U8(ctx.r1.u32 + 130, ctx.r11.u8);
	// stfs f13,152(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stb r11,131(r1)
	PPC_STORE_U8(ctx.r1.u32 + 131, ctx.r11.u8);
	// stfs f13,156(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stb r11,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r11.u8);
	// stb r11,149(r1)
	PPC_STORE_U8(ctx.r1.u32 + 149, ctx.r11.u8);
	// stb r11,150(r1)
	PPC_STORE_U8(ctx.r1.u32 + 150, ctx.r11.u8);
	// stb r11,151(r1)
	PPC_STORE_U8(ctx.r1.u32 + 151, ctx.r11.u8);
	// bl 0x833cb390
	ctx.lr = 0x837D7DB8;
	sub_833CB390(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x833cb348
	ctx.lr = 0x837D7DC4;
	sub_833CB348(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833cb398
	ctx.lr = 0x837D7DD0;
	sub_833CB398(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x833cb518
	ctx.lr = 0x837D7DE0;
	sub_833CB518(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r4,r29,88
	ctx.r4.s64 = ctx.r29.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833cb3f0
	ctx.lr = 0x837D7DF0;
	sub_833CB3F0(ctx, base);
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// li r28,4
	ctx.r28.s64 = 4;
	// addi r31,r11,-28
	ctx.r31.s64 = ctx.r11.s64 + -28;
loc_837D7DFC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfs f1,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x833cb580
	ctx.lr = 0x837D7E0C;
	sub_833CB580(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfs f1,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// lfsu f2,20(r31)
	ea = 20 + ctx.r31.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f2.f64 = double(temp.f32);
	ctx.r31.u32 = ea;
	// bl 0x833cb570
	ctx.lr = 0x837D7E1C;
	sub_833CB570(ctx, base);
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bne 0x837d7dfc
	if (!cr0.eq) goto loc_837D7DFC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d28578
	ctx.lr = 0x837D7E2C;
	sub_82D28578(ctx, base);
	// addi r4,r29,56
	ctx.r4.s64 = ctx.r29.s64 + 56;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833cb3f0
	ctx.lr = 0x837D7E38;
	sub_833CB3F0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833cb2f8
	ctx.lr = 0x837D7E44;
	sub_833CB2F8(ctx, base);
loc_837D7E44:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x831ce7c4
	ctx.lr = 0x837D7E50;
	__restfpr_28(ctx, base);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D7E54"))) PPC_WEAK_FUNC(sub_837D7E54);
PPC_FUNC_IMPL(__imp__sub_837D7E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D7E58"))) PPC_WEAK_FUNC(sub_837D7E58);
PPC_FUNC_IMPL(__imp__sub_837D7E58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x837D7E60;
	__savegprlr_26(ctx, base);
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x837d6708
	ctx.lr = 0x837D7E74;
	sub_837D6708(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x837d8000
	if (cr6.eq) goto loc_837D8000;
	// bl 0x830ff290
	ctx.lr = 0x837D7E84;
	sub_830FF290(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r30,76
	ctx.r29.s64 = ctx.r30.s64 + 76;
	// bl 0x837d67a8
	ctx.lr = 0x837D7E94;
	sub_837D67A8(ctx, base);
	// lwz r9,28(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r8,24(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// frsp f31,f12
	ctx.f31.f64 = double(float(ctx.f12.f64));
	// frsp f30,f11
	ctx.f30.f64 = double(float(ctx.f11.f64));
	// bl 0x837d6638
	ctx.lr = 0x837D7EC8;
	sub_837D6638(ctx, base);
	// lis r4,2
	ctx.r4.s64 = 131072;
	// bl 0x833cb2c8
	ctx.lr = 0x837D7ED0;
	sub_833CB2C8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x833cb348
	ctx.lr = 0x837D7EDC;
	sub_833CB348(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833cb390
	ctx.lr = 0x837D7EE8;
	sub_833CB390(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833cb398
	ctx.lr = 0x837D7EF4;
	sub_833CB398(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,15
	ctx.r4.s64 = 15;
	// bl 0x833cb3a0
	ctx.lr = 0x837D7F00;
	sub_833CB3A0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833cb3a8
	ctx.lr = 0x837D7F0C;
	sub_833CB3A8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833cb3c8
	ctx.lr = 0x837D7F18;
	sub_833CB3C8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833cb3d8
	ctx.lr = 0x837D7F24;
	sub_833CB3D8(ctx, base);
	// lwz r7,32(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r4,r29,88
	ctx.r4.s64 = ctx.r29.s64 + 88;
	// clrlwi r6,r7,24
	ctx.r6.u64 = ctx.r7.u32 & 0xFF;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// bl 0x833cb3f0
	ctx.lr = 0x837D7F44;
	sub_833CB3F0(ctx, base);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// stfs f31,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lis r4,-32222
	ctx.r4.s64 = -2111700992;
	// stfs f30,140(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f31,156(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stb r26,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r26.u8);
	// stfs f30,160(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stb r26,105(r1)
	PPC_STORE_U8(ctx.r1.u32 + 105, ctx.r26.u8);
	// stb r26,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r26.u8);
	// lfs f0,9008(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stb r30,107(r1)
	PPC_STORE_U8(ctx.r1.u32 + 107, ctx.r30.u8);
	// lfs f13,-26260(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -26260);
	ctx.f13.f64 = double(temp.f32);
	// stb r26,124(r1)
	PPC_STORE_U8(ctx.r1.u32 + 124, ctx.r26.u8);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stb r26,125(r1)
	PPC_STORE_U8(ctx.r1.u32 + 125, ctx.r26.u8);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stb r26,126(r1)
	PPC_STORE_U8(ctx.r1.u32 + 126, ctx.r26.u8);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stb r30,127(r1)
	PPC_STORE_U8(ctx.r1.u32 + 127, ctx.r30.u8);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stb r26,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r26.u8);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stb r26,145(r1)
	PPC_STORE_U8(ctx.r1.u32 + 145, ctx.r26.u8);
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stb r26,146(r1)
	PPC_STORE_U8(ctx.r1.u32 + 146, ctx.r26.u8);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stb r30,147(r1)
	PPC_STORE_U8(ctx.r1.u32 + 147, ctx.r30.u8);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stb r26,164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 164, ctx.r26.u8);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stb r26,165(r1)
	PPC_STORE_U8(ctx.r1.u32 + 165, ctx.r26.u8);
	// stfs f13,152(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f13,168(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stb r26,166(r1)
	PPC_STORE_U8(ctx.r1.u32 + 166, ctx.r26.u8);
	// stfs f13,172(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stb r30,167(r1)
	PPC_STORE_U8(ctx.r1.u32 + 167, ctx.r30.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x833cb4f8
	ctx.lr = 0x837D7FE8;
	sub_833CB4F8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r29,56
	ctx.r4.s64 = ctx.r29.s64 + 56;
	// bl 0x833cb3f0
	ctx.lr = 0x837D7FF4;
	sub_833CB3F0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x833cb2f8
	ctx.lr = 0x837D8000;
	sub_833CB2F8(ctx, base);
loc_837D8000:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D8010"))) PPC_WEAK_FUNC(sub_837D8010);
PPC_FUNC_IMPL(__imp__sub_837D8010) {
	PPC_FUNC_PROLOGUE();
	// b 0x837d6678
	sub_837D6678(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D8014"))) PPC_WEAK_FUNC(sub_837D8014);
PPC_FUNC_IMPL(__imp__sub_837D8014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D8018"))) PPC_WEAK_FUNC(sub_837D8018);
PPC_FUNC_IMPL(__imp__sub_837D8018) {
	PPC_FUNC_PROLOGUE();
	// b 0x837d66a8
	sub_837D66A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D801C"))) PPC_WEAK_FUNC(sub_837D801C);
PPC_FUNC_IMPL(__imp__sub_837D801C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D8020"))) PPC_WEAK_FUNC(sub_837D8020);
PPC_FUNC_IMPL(__imp__sub_837D8020) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32211
	ctx.r10.s64 = -2110980096;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r9,r10,524
	ctx.r9.s64 = ctx.r10.s64 + 524;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,1
	ctx.r7.s64 = 1;
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// li r11,27
	ctx.r11.s64 = 27;
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r8,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r8.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r7,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r6,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r6.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r30,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stb r30,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r30.u8);
	// bl 0x82595718
	ctx.lr = 0x837D80A0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837d80b8
	if (cr6.eq) goto loc_837D80B8;
	// bl 0x837d6aa0
	ctx.lr = 0x837D80AC;
	sub_837D6AA0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// b 0x837d80bc
	goto loc_837D80BC;
loc_837D80B8:
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
loc_837D80BC:
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

__attribute__((alias("__imp__sub_837D80D8"))) PPC_WEAK_FUNC(sub_837D80D8);
PPC_FUNC_IMPL(__imp__sub_837D80D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_837D80EC"))) PPC_WEAK_FUNC(sub_837D80EC);
PPC_FUNC_IMPL(__imp__sub_837D80EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D80F0"))) PPC_WEAK_FUNC(sub_837D80F0);
PPC_FUNC_IMPL(__imp__sub_837D80F0) {
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
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// lwz r30,40(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,524
	ctx.r10.s64 = ctx.r11.s64 + 524;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// beq cr6,0x837d8144
	if (cr6.eq) goto loc_837D8144;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x82574b18
	ctx.lr = 0x837D8128;
	sub_82574B18(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bgt cr6,0x837d8144
	if (cr6.gt) goto loc_837D8144;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837D8144;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_837D8144:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837d815c
	if (cr6.eq) goto loc_837D815C;
	// bl 0x833bbd78
	ctx.lr = 0x837D8154;
	sub_833BBD78(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_837D815C:
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// addi r10,r11,-1228
	ctx.r10.s64 = ctx.r11.s64 + -1228;
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

__attribute__((alias("__imp__sub_837D8180"))) PPC_WEAK_FUNC(sub_837D8180);
PPC_FUNC_IMPL(__imp__sub_837D8180) {
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
	// bl 0x837d6650
	ctx.lr = 0x837D819C;
	sub_837D6650(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837d81b4
	if (cr6.eq) goto loc_837D81B4;
	// bl 0x833bbd78
	ctx.lr = 0x837D81B0;
	sub_833BBD78(ctx, base);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
loc_837D81B4:
	// lbz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d81c8
	if (cr6.eq) goto loc_837D81C8;
	// bl 0x833c7ad8
	ctx.lr = 0x837D81C4;
	sub_833C7AD8(ctx, base);
	// stb r30,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r30.u8);
loc_837D81C8:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r30,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_837D81EC"))) PPC_WEAK_FUNC(sub_837D81EC);
PPC_FUNC_IMPL(__imp__sub_837D81EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D81F0"))) PPC_WEAK_FUNC(sub_837D81F0);
PPC_FUNC_IMPL(__imp__sub_837D81F0) {
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
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x837d6678
	ctx.lr = 0x837D8214;
	sub_837D6678(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837d8228
	if (!cr6.eq) goto loc_837D8228;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x837d8250
	goto loc_837D8250;
loc_837D8228:
	// lbz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 48);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837d8248
	if (!cr6.eq) goto loc_837D8248;
	// bl 0x833c7a88
	ctx.lr = 0x837D8240;
	sub_833C7A88(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r11.u8);
loc_837D8248:
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_837D8250:
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

__attribute__((alias("__imp__sub_837D8268"))) PPC_WEAK_FUNC(sub_837D8268);
PPC_FUNC_IMPL(__imp__sub_837D8268) {
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
	// bl 0x837d66a8
	ctx.lr = 0x837D8284;
	sub_837D66A8(ctx, base);
	// lbz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 48);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d82a0
	if (cr6.eq) goto loc_837D82A0;
	// bl 0x833c7ad8
	ctx.lr = 0x837D8298;
	sub_833C7AD8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r11.u8);
loc_837D82A0:
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

__attribute__((alias("__imp__sub_837D82BC"))) PPC_WEAK_FUNC(sub_837D82BC);
PPC_FUNC_IMPL(__imp__sub_837D82BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D82C0"))) PPC_WEAK_FUNC(sub_837D82C0);
PPC_FUNC_IMPL(__imp__sub_837D82C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837D82C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x837d82e0
	if (!cr6.eq) goto loc_837D82E0;
	// bl 0x837d6708
	ctx.lr = 0x837D82E0;
	sub_837D6708(ctx, base);
loc_837D82E0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x837d8310
	if (!cr6.eq) goto loc_837D8310;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837d8310
	if (cr6.eq) goto loc_837D8310;
	// bl 0x833bbd78
	ctx.lr = 0x837D82FC;
	sub_833BBD78(ctx, base);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// b 0x837d8344
	goto loc_837D8344;
loc_837D8310:
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x837d8344
	if (!cr6.eq) goto loc_837D8344;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,40(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// subfe r4,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x833bcc30
	ctx.lr = 0x837D8338;
	sub_833BCC30(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
loc_837D8344:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x837d8368
	if (!cr6.eq) goto loc_837D8368;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x837d8368
	if (cr6.eq) goto loc_837D8368;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_837D8368:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x837d837c
	if (cr6.eq) goto loc_837D837C;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x837d84f8
	if (!cr6.eq) goto loc_837D84F8;
loc_837D837C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837d67a8
	ctx.lr = 0x837D8384;
	sub_837D67A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x830ff290
	ctx.lr = 0x837D838C;
	sub_830FF290(ctx, base);
	// lwz r7,28(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r6,24(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r11,255
	ctx.r11.s64 = 255;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r29,r3,76
	ctx.r29.s64 = ctx.r3.s64 + 76;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// frsp f0,f12
	ctx.f0.f64 = double(float(ctx.f12.f64));
	// frsp f13,f11
	ctx.f13.f64 = double(float(ctx.f11.f64));
	// bne cr6,0x837d83cc
	if (!cr6.eq) goto loc_837D83CC;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_837D83CC:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// stfs f13,140(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stb r11,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r11.u8);
	// stfs f13,160(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stb r11,105(r1)
	PPC_STORE_U8(ctx.r1.u32 + 105, ctx.r11.u8);
	// stb r11,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stb r30,107(r1)
	PPC_STORE_U8(ctx.r1.u32 + 107, ctx.r30.u8);
	// lfs f13,-26260(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -26260);
	ctx.f13.f64 = double(temp.f32);
	// stb r11,124(r1)
	PPC_STORE_U8(ctx.r1.u32 + 124, ctx.r11.u8);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stb r11,125(r1)
	PPC_STORE_U8(ctx.r1.u32 + 125, ctx.r11.u8);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stb r11,126(r1)
	PPC_STORE_U8(ctx.r1.u32 + 126, ctx.r11.u8);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stb r30,127(r1)
	PPC_STORE_U8(ctx.r1.u32 + 127, ctx.r30.u8);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stb r11,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r11.u8);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stb r11,145(r1)
	PPC_STORE_U8(ctx.r1.u32 + 145, ctx.r11.u8);
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stb r11,146(r1)
	PPC_STORE_U8(ctx.r1.u32 + 146, ctx.r11.u8);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stb r30,147(r1)
	PPC_STORE_U8(ctx.r1.u32 + 147, ctx.r30.u8);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stb r11,164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 164, ctx.r11.u8);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stb r11,165(r1)
	PPC_STORE_U8(ctx.r1.u32 + 165, ctx.r11.u8);
	// stfs f13,152(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stb r11,166(r1)
	PPC_STORE_U8(ctx.r1.u32 + 166, ctx.r11.u8);
	// stfs f13,168(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stb r30,167(r1)
	PPC_STORE_U8(ctx.r1.u32 + 167, ctx.r30.u8);
	// stfs f13,172(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// bl 0x837d6638
	ctx.lr = 0x837D8464;
	sub_837D6638(ctx, base);
	// lis r4,2
	ctx.r4.s64 = 131072;
	// bl 0x833cb2c8
	ctx.lr = 0x837D846C;
	sub_833CB2C8(ctx, base);
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x833cb348
	ctx.lr = 0x837D8478;
	sub_833CB348(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833cb390
	ctx.lr = 0x837D8484;
	sub_833CB390(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833cb398
	ctx.lr = 0x837D8490;
	sub_833CB398(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,15
	ctx.r4.s64 = 15;
	// bl 0x833cb3a0
	ctx.lr = 0x837D849C;
	sub_833CB3A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833cb3a8
	ctx.lr = 0x837D84A8;
	sub_833CB3A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833cb3c8
	ctx.lr = 0x837D84B4;
	sub_833CB3C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833cb3d8
	ctx.lr = 0x837D84C0;
	sub_833CB3D8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r29,88
	ctx.r4.s64 = ctx.r29.s64 + 88;
	// bl 0x833cb3f0
	ctx.lr = 0x837D84CC;
	sub_833CB3F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x833cb4f8
	ctx.lr = 0x837D84E0;
	sub_833CB4F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r29,56
	ctx.r4.s64 = ctx.r29.s64 + 56;
	// bl 0x833cb3f0
	ctx.lr = 0x837D84EC;
	sub_833CB3F0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833cb2f8
	ctx.lr = 0x837D84F8;
	sub_833CB2F8(ctx, base);
loc_837D84F8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D8500"))) PPC_WEAK_FUNC(sub_837D8500);
PPC_FUNC_IMPL(__imp__sub_837D8500) {
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
	// bl 0x837d80f0
	ctx.lr = 0x837D8520;
	sub_837D80F0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d8540
	if (cr6.eq) goto loc_837D8540;
	// bl 0x82595188
	ctx.lr = 0x837D8530;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x837D8540;
	sub_825952B8(ctx, base);
loc_837D8540:
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

__attribute__((alias("__imp__sub_837D855C"))) PPC_WEAK_FUNC(sub_837D855C);
PPC_FUNC_IMPL(__imp__sub_837D855C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D8560"))) PPC_WEAK_FUNC(sub_837D8560);
PPC_FUNC_IMPL(__imp__sub_837D8560) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837D8568;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r9,r11,65535
	ctx.r9.u64 = ctx.r11.u64 | 65535;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwimi r10,r9,0,14,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFC0000);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_837D858C:
	// extsb r28,r11
	ctx.r28.s64 = ctx.r11.s8;
	// mulli r11,r28,172
	ctx.r11.s64 = ctx.r28.s64 * 172;
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stb r30,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r30.u8);
	// stb r30,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r30.u8);
	// stb r30,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r30.u8);
	// stb r30,7(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7, ctx.r30.u8);
	// bl 0x8291a570
	ctx.lr = 0x837D85B4;
	sub_8291A570(ctx, base);
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// stb r30,172(r31)
	PPC_STORE_U8(ctx.r31.u32 + 172, ctx.r30.u8);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stb r30,173(r31)
	PPC_STORE_U8(ctx.r31.u32 + 173, ctx.r30.u8);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,32
	cr6.compare<uint32_t>(ctx.r10.u32, 32, xer);
	// blt cr6,0x837d858c
	if (cr6.lt) goto loc_837D858C;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stb r30,5516(r29)
	PPC_STORE_U8(ctx.r29.u32 + 5516, ctx.r30.u8);
	// li r10,11
	ctx.r10.s64 = 11;
	// stb r30,5517(r29)
	PPC_STORE_U8(ctx.r29.u32 + 5517, ctx.r30.u8);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,5512(r29)
	PPC_STORE_U32(ctx.r29.u32 + 5512, ctx.r11.u32);
	// stw r11,5508(r29)
	PPC_STORE_U32(ctx.r29.u32 + 5508, ctx.r11.u32);
	// stb r10,5518(r29)
	PPC_STORE_U8(ctx.r29.u32 + 5518, ctx.r10.u8);
	// stw r30,5520(r29)
	PPC_STORE_U32(ctx.r29.u32 + 5520, ctx.r30.u32);
	// stw r9,5524(r29)
	PPC_STORE_U32(ctx.r29.u32 + 5524, ctx.r9.u32);
	// stb r30,5528(r29)
	PPC_STORE_U8(ctx.r29.u32 + 5528, ctx.r30.u8);
	// stb r30,5529(r29)
	PPC_STORE_U8(ctx.r29.u32 + 5529, ctx.r30.u8);
	// stb r30,5530(r29)
	PPC_STORE_U8(ctx.r29.u32 + 5530, ctx.r30.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D860C"))) PPC_WEAK_FUNC(sub_837D860C);
PPC_FUNC_IMPL(__imp__sub_837D860C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D8610"))) PPC_WEAK_FUNC(sub_837D8610);
PPC_FUNC_IMPL(__imp__sub_837D8610) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x837D8618;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r29,31
	ctx.r29.s64 = 31;
	// li r30,0
	ctx.r30.s64 = 0;
loc_837D8634:
	// addi r28,r31,4
	ctx.r28.s64 = ctx.r31.s64 + 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8291a660
	ctx.lr = 0x837D8640;
	sub_8291A660(ctx, base);
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// stb r30,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r30.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r30,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r30.u8);
	// stb r30,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r30.u8);
	// bl 0x8291a570
	ctx.lr = 0x837D8658;
	sub_8291A570(ctx, base);
	// stb r30,168(r31)
	PPC_STORE_U8(ctx.r31.u32 + 168, ctx.r30.u8);
	// stb r30,169(r31)
	PPC_STORE_U8(ctx.r31.u32 + 169, ctx.r30.u8);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r31,r31,172
	ctx.r31.s64 = ctx.r31.s64 + 172;
	// bge 0x837d8634
	if (!cr0.lt) goto loc_837D8634;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x837d8560
	ctx.lr = 0x837D8674;
	sub_837D8560(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D8680"))) PPC_WEAK_FUNC(sub_837D8680);
PPC_FUNC_IMPL(__imp__sub_837D8680) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-6896
	ctx.r3.s64 = ctx.r11.s64 + -6896;
	// b 0x837f9710
	sub_837F9710(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D8690"))) PPC_WEAK_FUNC(sub_837D8690);
PPC_FUNC_IMPL(__imp__sub_837D8690) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,11364(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11364);
	// li r5,2
	ctx.r5.s64 = 2;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x837d86ac
	if (!cr6.eq) goto loc_837D86AC;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,-6896
	ctx.r3.s64 = ctx.r11.s64 + -6896;
	// b 0x82a5c5b0
	sub_82A5C5B0(ctx, base);
	return;
loc_837D86AC:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,-6864
	ctx.r3.s64 = ctx.r11.s64 + -6864;
	// b 0x82a5c5b0
	sub_82A5C5B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D86B8"))) PPC_WEAK_FUNC(sub_837D86B8);
PPC_FUNC_IMPL(__imp__sub_837D86B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,11364(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11364);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x837d86d0
	if (!cr6.eq) goto loc_837D86D0;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,-6896
	ctx.r3.s64 = ctx.r11.s64 + -6896;
	// b 0x837f9710
	sub_837F9710(ctx, base);
	return;
loc_837D86D0:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,-6864
	ctx.r3.s64 = ctx.r11.s64 + -6864;
	// b 0x837f9710
	sub_837F9710(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D86DC"))) PPC_WEAK_FUNC(sub_837D86DC);
PPC_FUNC_IMPL(__imp__sub_837D86DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D86E0"))) PPC_WEAK_FUNC(sub_837D86E0);
PPC_FUNC_IMPL(__imp__sub_837D86E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,68(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r9,60(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// beq cr6,0x837d8720
	if (cr6.eq) goto loc_837D8720;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_837D8720:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837D8728"))) PPC_WEAK_FUNC(sub_837D8728);
PPC_FUNC_IMPL(__imp__sub_837D8728) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab8
	ctx.lr = 0x837D8730;
	__savegprlr_16(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// addis r3,r6,1
	ctx.r3.s64 = ctx.r6.s64 + 65536;
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// addi r3,r3,-30988
	ctx.r3.s64 = ctx.r3.s64 + -30988;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// mr r18,r6
	ctx.r18.u64 = ctx.r6.u64;
	// mr r17,r7
	ctx.r17.u64 = ctx.r7.u64;
	// bl 0x82917b90
	ctx.lr = 0x837D8754;
	sub_82917B90(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// mulli r21,r19,5532
	ctx.r21.s64 = ctx.r19.s64 * 5532;
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
	// li r23,15304
	ctx.r23.s64 = 15304;
	// li r24,1
	ctx.r24.s64 = 1;
loc_837D8770:
	// add r11,r25,r21
	ctx.r11.u64 = ctx.r25.u64 + ctx.r21.u64;
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// addi r31,r11,200
	ctx.r31.s64 = ctx.r11.s64 + 200;
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// stb r27,200(r11)
	PPC_STORE_U8(ctx.r11.u32 + 200, ctx.r27.u8);
	// stb r27,201(r11)
	PPC_STORE_U8(ctx.r11.u32 + 201, ctx.r27.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r27,202(r11)
	PPC_STORE_U8(ctx.r11.u32 + 202, ctx.r27.u8);
	// stb r27,203(r11)
	PPC_STORE_U8(ctx.r11.u32 + 203, ctx.r27.u8);
	// bl 0x8291a570
	ctx.lr = 0x837D8798;
	sub_8291A570(ctx, base);
	// stb r27,168(r31)
	PPC_STORE_U8(ctx.r31.u32 + 168, ctx.r27.u8);
	// cmpwi cr6,r26,11
	cr6.compare<int32_t>(ctx.r26.s32, 11, xer);
	// stb r27,169(r31)
	PPC_STORE_U8(ctx.r31.u32 + 169, ctx.r27.u8);
	// bge cr6,0x837d87cc
	if (!cr6.lt) goto loc_837D87CC;
	// addi r11,r18,3612
	ctx.r11.s64 = ctx.r18.s64 + 3612;
	// cmplwi cr6,r26,11
	cr6.compare<uint32_t>(ctx.r26.u32, 11, xer);
	// bge cr6,0x837d87bc
	if (!cr6.lt) goto loc_837D87BC;
	// lwzx r11,r23,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r11.u32);
	// b 0x837d87c0
	goto loc_837D87C0;
loc_837D87BC:
	// lwz r11,15304(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15304);
loc_837D87C0:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x837d87cc
	if (!cr6.eq) goto loc_837D87CC;
	// stb r24,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r24.u8);
loc_837D87CC:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82a16188
	ctx.lr = 0x837D87D8;
	sub_82A16188(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,32
	cr6.compare<int32_t>(ctx.r3.s32, 32, xer);
	// bge cr6,0x837d88e4
	if (!cr6.lt) goto loc_837D88E4;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82a16248
	ctx.lr = 0x837D87F0;
	sub_82A16248(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x83530640
	ctx.lr = 0x837D87F8;
	sub_83530640(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,164
	ctx.r5.s64 = 164;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x837D8808;
	sub_831CE980(ctx, base);
	// cmpw cr6,r30,r16
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r16.s32, xer);
	// bne cr6,0x837d8814
	if (!cr6.eq) goto loc_837D8814;
	// stb r24,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r24.u8);
loc_837D8814:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83767d18
	ctx.lr = 0x837D881C;
	sub_83767D18(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x837d882c
	if (cr6.eq) goto loc_837D882C;
	// stb r24,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r24.u8);
loc_837D882C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83102db0
	ctx.lr = 0x837D8834;
	sub_83102DB0(ctx, base);
	// lbz r11,1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x837d8844
	if (cr6.lt) goto loc_837D8844;
	// stb r24,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r24.u8);
loc_837D8844:
	// bl 0x830ff290
	ctx.lr = 0x837D8848;
	sub_830FF290(ctx, base);
	// bl 0x830ff988
	ctx.lr = 0x837D884C;
	sub_830FF988(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837d889c
	if (!cr6.eq) goto loc_837D889C;
	// cmpwi cr6,r26,11
	cr6.compare<int32_t>(ctx.r26.s32, 11, xer);
	// bge cr6,0x837d8878
	if (!cr6.lt) goto loc_837D8878;
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837d8878
	if (!cr6.eq) goto loc_837D8878;
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d889c
	if (cr6.eq) goto loc_837D889C;
loc_837D8878:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837d889c
	if (!cr6.eq) goto loc_837D889C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83530640
	ctx.lr = 0x837D888C;
	sub_83530640(ctx, base);
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837d889c
	if (!cr6.eq) goto loc_837D889C;
	// stb r24,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r24.u8);
loc_837D889C:
	// cmplwi cr6,r17,0
	cr6.compare<uint32_t>(ctx.r17.u32, 0, xer);
	// beq cr6,0x837d88e4
	if (cr6.eq) goto loc_837D88E4;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x8261a178
	ctx.lr = 0x837D88B0;
	sub_8261A178(ctx, base);
	// cmplwi cr6,r30,32
	cr6.compare<uint32_t>(ctx.r30.u32, 32, xer);
	// bge cr6,0x837d88c8
	if (!cr6.lt) goto loc_837D88C8;
	// mulli r11,r30,208
	ctx.r11.s64 = ctx.r30.s64 * 208;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// b 0x837d88cc
	goto loc_837D88CC;
loc_837D88C8:
	// addi r11,r3,6720
	ctx.r11.s64 = ctx.r3.s64 + 6720;
loc_837D88CC:
	// lwz r11,204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// srawi r10,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x837d88e4
	if (cr6.eq) goto loc_837D88E4;
	// stb r24,169(r31)
	PPC_STORE_U8(ctx.r31.u32 + 169, ctx.r24.u8);
loc_837D88E4:
	// addi r23,r23,4
	ctx.r23.s64 = ctx.r23.s64 + 4;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r25,r25,172
	ctx.r25.s64 = ctx.r25.s64 + 172;
	// cmpwi cr6,r23,15432
	cr6.compare<int32_t>(ctx.r23.s32, 15432, xer);
	// blt cr6,0x837d8770
	if (cr6.lt) goto loc_837D8770;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D8900"))) PPC_WEAK_FUNC(sub_837D8900);
PPC_FUNC_IMPL(__imp__sub_837D8900) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// stw r4,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r4.u32);
	// cmpwi cr6,r7,1
	cr6.compare<int32_t>(ctx.r7.s32, 1, xer);
	// stw r5,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r5.u32);
	// stw r6,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r6.u32);
	// stw r7,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r7.u32);
	// stw r9,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r9.u32);
	// stw r8,188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 188, ctx.r8.u32);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,192(r3)
	PPC_STORE_U8(ctx.r3.u32 + 192, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837D892C"))) PPC_WEAK_FUNC(sub_837D892C);
PPC_FUNC_IMPL(__imp__sub_837D892C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D8930"))) PPC_WEAK_FUNC(sub_837D8930);
PPC_FUNC_IMPL(__imp__sub_837D8930) {
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
	// addi r3,r3,56
	ctx.r3.s64 = ctx.r3.s64 + 56;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82f09ce8
	ctx.lr = 0x837D8954;
	sub_82F09CE8(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// stw r30,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r30.u32);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x837d8968
	if (!cr6.eq) goto loc_837D8968;
	// stb r11,192(r31)
	PPC_STORE_U8(ctx.r31.u32 + 192, ctx.r11.u8);
loc_837D8968:
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

__attribute__((alias("__imp__sub_837D8980"))) PPC_WEAK_FUNC(sub_837D8980);
PPC_FUNC_IMPL(__imp__sub_837D8980) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x837D8988;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,12
	ctx.r11.s64 = 12;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83120738
	ctx.lr = 0x837D89AC;
	sub_83120738(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-31769
	ctx.r10.s64 = -2082013184;
	// li r30,13
	ctx.r30.s64 = 13;
	// addi r11,r10,-960
	ctx.r11.s64 = ctx.r10.s64 + -960;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r31,r11,-8
	ctx.r31.s64 = ctx.r11.s64 + -8;
	// stb r9,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r9.u8);
loc_837D89C8:
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83123620
	ctx.lr = 0x837D89D4;
	sub_83123620(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x83120738
	ctx.lr = 0x837D89E4;
	sub_83120738(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwzu r10,8(r31)
	ea = 8 + ctx.r31.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r8,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stbx r8,r10,r29
	PPC_STORE_U8(ctx.r10.u32 + ctx.r29.u32, ctx.r8.u8);
	// bne 0x837d89c8
	if (!cr0.eq) goto loc_837D89C8;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831236a0
	ctx.lr = 0x837D8A0C;
	sub_831236A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x83120738
	ctx.lr = 0x837D8A1C;
	sub_83120738(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,47(r29)
	PPC_STORE_U8(ctx.r29.u32 + 47, ctx.r11.u8);
	// bl 0x831236a0
	ctx.lr = 0x837D8A30;
	sub_831236A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x83120738
	ctx.lr = 0x837D8A40;
	sub_83120738(ctx, base);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r9,48(r29)
	PPC_STORE_U8(ctx.r29.u32 + 48, ctx.r9.u8);
	// bl 0x83120738
	ctx.lr = 0x837D8A5C;
	sub_83120738(ctx, base);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne cr6,0x837d8a74
	if (!cr6.eq) goto loc_837D8A74;
	// stb r27,50(r29)
	PPC_STORE_U8(ctx.r29.u32 + 50, ctx.r27.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_837D8A74:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,50(r29)
	PPC_STORE_U8(ctx.r29.u32 + 50, ctx.r11.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D8A84"))) PPC_WEAK_FUNC(sub_837D8A84);
PPC_FUNC_IMPL(__imp__sub_837D8A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D8A88"))) PPC_WEAK_FUNC(sub_837D8A88);
PPC_FUNC_IMPL(__imp__sub_837D8A88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r11,r11,-824
	ctx.r11.s64 = ctx.r11.s64 + -824;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837d8ab0
	if (!cr6.eq) goto loc_837D8AB0;
	// lwz r11,11296(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11296);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x837d8ad8
	goto loc_837D8AD8;
loc_837D8AB0:
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r9,11292(r8)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r8.u32 + 11292);
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// bne cr6,0x837d8ad0
	if (!cr6.eq) goto loc_837D8AD0;
	// lwz r11,11296(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 11296);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x837d8ad4
	if (cr6.eq) goto loc_837D8AD4;
loc_837D8AD0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_837D8AD4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_837D8AD8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d8aec
	if (cr6.eq) goto loc_837D8AEC;
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_837D8AEC:
	// lwz r7,11296(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 11296);
	// li r3,0
	ctx.r3.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
loc_837D8AF8:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_837D8B00:
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// ld r5,204(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 204);
	// std r5,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r5.u64);
	// bne cr6,0x837d8b28
	if (!cr6.eq) goto loc_837D8B28;
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// cntlzw r5,r11
	ctx.r5.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r5,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// b 0x837d8b50
	goto loc_837D8B50;
loc_837D8B28:
	// lhz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// lhz r5,11292(r8)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r8.u32 + 11292);
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, xer);
	// bne cr6,0x837d8b48
	if (!cr6.eq) goto loc_837D8B48;
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x837d8b4c
	if (cr6.eq) goto loc_837D8B4C;
loc_837D8B48:
	// li r11,0
	ctx.r11.s64 = 0;
loc_837D8B4C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_837D8B50:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837d8b80
	if (!cr6.eq) goto loc_837D8B80;
	// addi r10,r10,172
	ctx.r10.s64 = ctx.r10.s64 + 172;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmplwi cr6,r10,5504
	cr6.compare<uint32_t>(ctx.r10.u32, 5504, xer);
	// blt cr6,0x837d8b00
	if (cr6.lt) goto loc_837D8B00;
	// addi r9,r9,5532
	ctx.r9.s64 = ctx.r9.s64 + 5532;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmpwi cr6,r9,11064
	cr6.compare<int32_t>(ctx.r9.s32, 11064, xer);
	// blt cr6,0x837d8af8
	if (cr6.lt) goto loc_837D8AF8;
	// blr 
	return;
loc_837D8B80:
	// stw r6,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837D8B88"))) PPC_WEAK_FUNC(sub_837D8B88);
PPC_FUNC_IMPL(__imp__sub_837D8B88) {
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
	// lis r31,-31743
	ctx.r31.s64 = -2080309248;
	// lwz r11,-7296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7296);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d8c04
	if (cr6.eq) goto loc_837D8C04;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x837D8BBC;
	sub_82595150(ctx, base);
	// lwz r3,-7296(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7296);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837d8bdc
	if (cr6.eq) goto loc_837D8BDC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837D8BDC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_837D8BDC:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x837D8BE4;
	sub_82595170(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,-7296(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7296, ctx.r11.u32);
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
loc_837D8C04:
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

__attribute__((alias("__imp__sub_837D8C1C"))) PPC_WEAK_FUNC(sub_837D8C1C);
PPC_FUNC_IMPL(__imp__sub_837D8C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D8C20"))) PPC_WEAK_FUNC(sub_837D8C20);
PPC_FUNC_IMPL(__imp__sub_837D8C20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x837D8C28;
	__savegprlr_14(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,33
	ctx.r31.s64 = 33;
	// stw r6,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r6.u32);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// stw r7,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r7.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,164
	ctx.r4.s64 = 164;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x82595718
	ctx.lr = 0x837D8C5C;
	sub_82595718(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837d8c74
	if (cr6.eq) goto loc_837D8C74;
	// bl 0x8291a660
	ctx.lr = 0x837D8C6C;
	sub_8291A660(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x837d8c78
	goto loc_837D8C78;
loc_837D8C74:
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
loc_837D8C78:
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,72
	ctx.r4.s64 = 72;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595718
	ctx.lr = 0x837D8C8C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837d8ca0
	if (cr6.eq) goto loc_837D8CA0;
	// bl 0x8291b548
	ctx.lr = 0x837D8C98;
	sub_8291B548(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// b 0x837d8ca4
	goto loc_837D8CA4;
loc_837D8CA0:
	// mr r23,r28
	ctx.r23.u64 = ctx.r28.u64;
loc_837D8CA4:
	// bl 0x831156e8
	ctx.lr = 0x837D8CA8;
	sub_831156E8(ctx, base);
	// mulli r21,r30,5532
	ctx.r21.s64 = ctx.r30.s64 * 5532;
	// lwz r20,48(r3)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// add r31,r21,r17
	ctx.r31.u64 = ctx.r21.u64 + ctx.r17.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r4,196(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// bl 0x8311c148
	ctx.lr = 0x837D8CC0;
	sub_8311C148(ctx, base);
	// lwz r10,788(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 788);
	// li r11,255
	ctx.r11.s64 = 255;
	// rlwinm r9,r10,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x837d8cfc
	if (cr6.eq) goto loc_837D8CFC;
	// lbz r10,812(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 812);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lbz r8,813(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 813);
	// rotlwi r7,r10,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r6,814(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 814);
	// or r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 | ctx.r8.u64;
	// rlwinm r4,r5,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r4,r6
	ctx.r10.u64 = ctx.r4.u64 | ctx.r6.u64;
	// rlwimi r9,r10,8,0,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFFFFFF00) | (ctx.r9.u64 & 0xFFFFFFFF000000FF);
	// stw r9,5704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5704, ctx.r9.u32);
loc_837D8CFC:
	// lwz r10,788(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 788);
	// rlwinm r9,r10,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x837d8d30
	if (cr6.eq) goto loc_837D8D30;
	// lbz r10,815(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 815);
	// lbz r9,816(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 816);
	// rotlwi r8,r10,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r7,817(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 817);
	// or r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 | ctx.r9.u64;
	// rlwinm r5,r6,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// or r4,r5,r7
	ctx.r4.u64 = ctx.r5.u64 | ctx.r7.u64;
	// rlwimi r11,r4,8,0,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 8) & 0xFFFFFF00) | (ctx.r11.u64 & 0xFFFFFFFF000000FF);
	// stw r11,5708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5708, ctx.r11.u32);
loc_837D8D30:
	// lwz r11,796(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 796);
	// li r14,-1
	ctx.r14.s64 = -1;
	// mr r15,r28
	ctx.r15.u64 = ctx.r28.u64;
	// rlwinm r10,r11,19,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x7;
	// stw r10,5716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5716, ctx.r10.u32);
	// lbz r11,1203(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1203);
	// lhz r9,808(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 808);
	// clrlwi r8,r9,25
	ctx.r8.u64 = ctx.r9.u32 & 0x7F;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x837d8d70
	if (!cr6.lt) goto loc_837D8D70;
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r3.u32);
	// std r9,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// lwz r15,116(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lhz r14,112(r1)
	ctx.r14.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
loc_837D8D70:
	// mr r24,r28
	ctx.r24.u64 = ctx.r28.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x837d8ee4
	if (cr6.eq) goto loc_837D8EE4;
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// addi r18,r27,147
	ctx.r18.s64 = ctx.r27.s64 + 147;
	// mr r25,r28
	ctx.r25.u64 = ctx.r28.u64;
	// li r22,12
	ctx.r22.s64 = 12;
	// li r19,1
	ctx.r19.s64 = 1;
	// addi r16,r11,610
	ctx.r16.s64 = ctx.r11.s64 + 610;
loc_837D8D94:
	// ld r29,0(r26)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r26.u32 + 0);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r11,316(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// std r29,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r29.u64);
	// lbzx r31,r24,r11
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r24.u32 + ctx.r11.u32);
	// bl 0x8311bf98
	ctx.lr = 0x837D8DB0;
	sub_8311BF98(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8291b548
	ctx.lr = 0x837D8DBC;
	sub_8291B548(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8291a570
	ctx.lr = 0x837D8DC4;
	sub_8291A570(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x837d8980
	ctx.lr = 0x837D8DD0;
	sub_837D8980(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8387a780
	ctx.lr = 0x837D8DDC;
	sub_8387A780(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8291a4b0
	ctx.lr = 0x837D8DE8;
	sub_8291A4B0(ctx, base);
	// stb r31,126(r27)
	PPC_STORE_U8(ctx.r27.u32 + 126, ctx.r31.u8);
	// bl 0x830ff290
	ctx.lr = 0x837D8DF0;
	sub_830FF290(ctx, base);
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r10,52
	cr6.compare<uint32_t>(ctx.r10.u32, 52, xer);
	// bne cr6,0x837d8e0c
	if (!cr6.eq) goto loc_837D8E0C;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// beq cr6,0x837d8e10
	if (cr6.eq) goto loc_837D8E10;
loc_837D8E0C:
	// addi r5,r30,102
	ctx.r5.s64 = ctx.r30.s64 + 102;
loc_837D8E10:
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x831ce7d8
	ctx.lr = 0x837D8E1C;
	sub_831CE7D8(ctx, base);
	// add r11,r25,r21
	ctx.r11.u64 = ctx.r25.u64 + ctx.r21.u64;
	// add r29,r11,r17
	ctx.r29.u64 = ctx.r11.u64 + ctx.r17.u64;
	// addi r31,r29,200
	ctx.r31.s64 = ctx.r29.s64 + 200;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stb r28,200(r29)
	PPC_STORE_U8(ctx.r29.u32 + 200, ctx.r28.u8);
	// stb r28,201(r29)
	PPC_STORE_U8(ctx.r29.u32 + 201, ctx.r28.u8);
	// stb r28,202(r29)
	PPC_STORE_U8(ctx.r29.u32 + 202, ctx.r28.u8);
	// stb r28,203(r29)
	PPC_STORE_U8(ctx.r29.u32 + 203, ctx.r28.u8);
	// bl 0x8291a570
	ctx.lr = 0x837D8E40;
	sub_8291A570(ctx, base);
	// stb r28,368(r29)
	PPC_STORE_U8(ctx.r29.u32 + 368, ctx.r28.u8);
	// stb r28,369(r29)
	PPC_STORE_U8(ctx.r29.u32 + 369, ctx.r28.u8);
	// addi r3,r29,204
	ctx.r3.s64 = ctx.r29.s64 + 204;
	// li r5,164
	ctx.r5.s64 = 164;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x831ce980
	ctx.lr = 0x837D8E58;
	sub_831CE980(ctx, base);
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83120738
	ctx.lr = 0x837D8E6C;
	sub_83120738(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x837d8e7c
	if (!cr6.eq) goto loc_837D8E7C;
	// stb r19,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r19.u8);
loc_837D8E7C:
	// cmplwi cr6,r15,0
	cr6.compare<uint32_t>(ctx.r15.u32, 0, xer);
	// bne cr6,0x837d8e94
	if (!cr6.eq) goto loc_837D8E94;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x837d8ebc
	goto loc_837D8EBC;
loc_837D8E94:
	// lhz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// clrlwi r10,r14,16
	ctx.r10.u64 = ctx.r14.u32 & 0xFFFF;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bne cr6,0x837d8eb4
	if (!cr6.eq) goto loc_837D8EB4;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r15
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r15.u32, xer);
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// beq cr6,0x837d8eb8
	if (cr6.eq) goto loc_837D8EB8;
loc_837D8EB4:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_837D8EB8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_837D8EBC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d8ecc
	if (cr6.eq) goto loc_837D8ECC;
	// stb r19,201(r29)
	PPC_STORE_U8(ctx.r29.u32 + 201, ctx.r19.u8);
loc_837D8ECC:
	// lwz r11,324(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r26,r26,8
	ctx.r26.s64 = ctx.r26.s64 + 8;
	// addi r25,r25,172
	ctx.r25.s64 = ctx.r25.s64 + 172;
	// cmplw cr6,r24,r11
	cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, xer);
	// blt cr6,0x837d8d94
	if (cr6.lt) goto loc_837D8D94;
loc_837D8EE4:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x837d8f18
	if (cr6.eq) goto loc_837D8F18;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595150
	ctx.lr = 0x837D8EFC;
	sub_82595150(ctx, base);
	// bl 0x82595188
	ctx.lr = 0x837D8F00;
	sub_82595188(ctx, base);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825952b8
	ctx.lr = 0x837D8F10;
	sub_825952B8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595170
	ctx.lr = 0x837D8F18;
	sub_82595170(ctx, base);
loc_837D8F18:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x837d8f4c
	if (cr6.eq) goto loc_837D8F4C;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595150
	ctx.lr = 0x837D8F30;
	sub_82595150(ctx, base);
	// bl 0x82595188
	ctx.lr = 0x837D8F34;
	sub_82595188(ctx, base);
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x825952b8
	ctx.lr = 0x837D8F44;
	sub_825952B8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595170
	ctx.lr = 0x837D8F4C;
	sub_82595170(ctx, base);
loc_837D8F4C:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D8F54"))) PPC_WEAK_FUNC(sub_837D8F54);
PPC_FUNC_IMPL(__imp__sub_837D8F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D8F58"))) PPC_WEAK_FUNC(sub_837D8F58);
PPC_FUNC_IMPL(__imp__sub_837D8F58) {
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
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// bl 0x83740bd8
	ctx.lr = 0x837D8F7C;
	sub_83740BD8(ctx, base);
	// stw r3,11280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11280, ctx.r3.u32);
	// bl 0x83741af0
	ctx.lr = 0x837D8F84;
	sub_83741AF0(ctx, base);
	// stw r3,11284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11284, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_837D8F9C"))) PPC_WEAK_FUNC(sub_837D8F9C);
PPC_FUNC_IMPL(__imp__sub_837D8F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D8FA0"))) PPC_WEAK_FUNC(sub_837D8FA0);
PPC_FUNC_IMPL(__imp__sub_837D8FA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// mulli r11,r11,5532
	ctx.r11.s64 = ctx.r11.s64 * 5532;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r9,5704(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5704);
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// lwz r6,5708(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5708);
	// stw r6,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r6.u32);
	// beq cr6,0x837d90e4
	if (cr6.eq) goto loc_837D90E4;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lbz r6,1(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// lbz r5,2(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bgt cr6,0x837d900c
	if (cr6.gt) goto loc_837D900C;
	// clrlwi r9,r6,24
	ctx.r9.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// bgt cr6,0x837d900c
	if (cr6.gt) goto loc_837D900C;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bgt cr6,0x837d900c
	if (cr6.gt) goto loc_837D900C;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// addi r5,r11,32
	ctx.r5.s64 = ctx.r11.s64 + 32;
	// rlwinm r3,r10,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// addi r10,r9,32
	ctx.r10.s64 = ctx.r9.s64 + 32;
	// b 0x837d903c
	goto loc_837D903C;
loc_837D900C:
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bgt cr6,0x837d9058
	if (cr6.gt) goto loc_837D9058;
	// clrlwi r9,r6,24
	ctx.r9.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r9,32
	cr6.compare<uint32_t>(ctx.r9.u32, 32, xer);
	// bgt cr6,0x837d9058
	if (cr6.gt) goto loc_837D9058;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r10,32
	cr6.compare<uint32_t>(ctx.r10.u32, 32, xer);
	// bgt cr6,0x837d9058
	if (cr6.gt) goto loc_837D9058;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// rlwinm r3,r10,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// addi r10,r9,16
	ctx.r10.s64 = ctx.r9.s64 + 16;
loc_837D903C:
	// rlwinm r11,r5,24,0,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFF000000;
	// lbz r6,3(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// rlwinm r5,r10,16,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// or r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 | ctx.r11.u64;
	// or r3,r9,r5
	ctx.r3.u64 = ctx.r9.u64 | ctx.r5.u64;
	// or r11,r3,r6
	ctx.r11.u64 = ctx.r3.u64 | ctx.r6.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_837D9058:
	// lbz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// lbz r6,5(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// lbz r5,6(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 6);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bgt cr6,0x837d9098
	if (cr6.gt) goto loc_837D9098;
	// clrlwi r9,r6,24
	ctx.r9.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// bgt cr6,0x837d9098
	if (cr6.gt) goto loc_837D9098;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bgt cr6,0x837d9098
	if (cr6.gt) goto loc_837D9098;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// addi r5,r11,32
	ctx.r5.s64 = ctx.r11.s64 + 32;
	// rlwinm r3,r10,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// addi r10,r9,32
	ctx.r10.s64 = ctx.r9.s64 + 32;
	// b 0x837d90c8
	goto loc_837D90C8;
loc_837D9098:
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bgt cr6,0x837d90e4
	if (cr6.gt) goto loc_837D90E4;
	// clrlwi r9,r6,24
	ctx.r9.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r9,32
	cr6.compare<uint32_t>(ctx.r9.u32, 32, xer);
	// bgt cr6,0x837d90e4
	if (cr6.gt) goto loc_837D90E4;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r10,32
	cr6.compare<uint32_t>(ctx.r10.u32, 32, xer);
	// bgt cr6,0x837d90e4
	if (cr6.gt) goto loc_837D90E4;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// rlwinm r3,r10,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// addi r10,r9,16
	ctx.r10.s64 = ctx.r9.s64 + 16;
loc_837D90C8:
	// rlwinm r11,r5,24,0,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFF000000;
	// lbz r6,7(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 7);
	// rlwinm r5,r10,16,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// or r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 | ctx.r11.u64;
	// or r3,r9,r5
	ctx.r3.u64 = ctx.r9.u64 | ctx.r5.u64;
	// or r11,r3,r6
	ctx.r11.u64 = ctx.r3.u64 | ctx.r6.u64;
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
loc_837D90E4:
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// li r3,-256
	ctx.r3.s64 = -256;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d9340
	if (cr6.eq) goto loc_837D9340;
	// lbz r11,1(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// lbz r10,2(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// lbz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x837d9114
	if (cr6.gt) goto loc_837D9114;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_837D9114:
	// clrlwi r9,r5,24
	ctx.r9.u64 = ctx.r5.u32 & 0xFF;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// ble cr6,0x837d9128
	if (!cr6.gt) goto loc_837D9128;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_837D9128:
	// lis r5,-32211
	ctx.r5.s64 = -2110980096;
	// lis r31,-32255
	ctx.r31.s64 = -2113863680;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lfs f11,716(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 716);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,21588(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 21588);
	ctx.f12.f64 = double(temp.f32);
	// bne cr6,0x837d9150
	if (!cr6.eq) goto loc_837D9150;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// or r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 | ctx.r3.u64;
	// b 0x837d921c
	goto loc_837D921C;
loc_837D9150:
	// add r11,r9,r7
	ctx.r11.u64 = ctx.r9.u64 + ctx.r7.u64;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// add r5,r11,r6
	ctx.r5.u64 = ctx.r11.u64 + ctx.r6.u64;
	// std r10,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r10.u64);
	// lfd f0,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// extsw r11,r5
	ctx.r11.s64 = ctx.r5.s32;
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// std r11,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r11.u64);
	// lfd f10,-32(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f13
	ctx.f8.f64 = double(float(ctx.f13.f64));
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// fdivs f0,f12,f8
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f8.f64));
	// fdivs f13,f11,f7
	ctx.f13.f64 = double(float(ctx.f11.f64 / ctx.f7.f64));
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x837d9194
	if (!cr6.lt) goto loc_837D9194;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_837D9194:
	// extsw r11,r6
	ctx.r11.s64 = ctx.r6.s32;
	// lbz r10,3(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// std r11,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r11.u64);
	// extsw r7,r7
	ctx.r7.s64 = ctx.r7.s32;
	// lfd f13,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// std r9,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r9.u64);
	// lfd f10,-32(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// std r7,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r7.u64);
	// lfd f9,-32(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// fcfid f7,f13
	ctx.f7.f64 = double(ctx.f13.s64);
	// fcfid f5,f10
	ctx.f5.f64 = double(ctx.f10.s64);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// frsp f2,f5
	ctx.f2.f64 = double(float(ctx.f5.f64));
	// frsp f6,f8
	ctx.f6.f64 = double(float(ctx.f8.f64));
	// fmuls f1,f4,f0
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f10,f2,f0
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmuls f3,f6,f0
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fctidz f9,f1
	ctx.f9.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// fctidz f8,f10
	ctx.f8.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// fctidz f13,f3
	ctx.f13.s64 = (ctx.f3.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f3.f64));
	// stfd f13,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f13.u64);
	// lbz r6,-25(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + -25);
	// stfd f9,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f9.u64);
	// lbz r5,-25(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + -25);
	// stfd f8,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f8.u64);
	// lbz r11,-25(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + -25);
	// rotlwi r9,r11,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r7,r9,r6
	ctx.r7.u64 = ctx.r9.u64 | ctx.r6.u64;
	// rlwinm r6,r7,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// or r5,r6,r5
	ctx.r5.u64 = ctx.r6.u64 | ctx.r5.u64;
	// rlwinm r11,r5,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 | ctx.r10.u64;
loc_837D921C:
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lbz r11,5(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// lbz r10,6(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 6);
	// lbz r5,4(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x837d9240
	if (cr6.gt) goto loc_837D9240;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_837D9240:
	// clrlwi r9,r5,24
	ctx.r9.u64 = ctx.r5.u32 & 0xFF;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// ble cr6,0x837d9254
	if (!cr6.gt) goto loc_837D9254;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_837D9254:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x837d9270
	if (!cr6.eq) goto loc_837D9270;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// or r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 | ctx.r3.u64;
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// b 0x837d9340
	goto loc_837D9340;
loc_837D9270:
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// add r11,r9,r7
	ctx.r11.u64 = ctx.r9.u64 + ctx.r7.u64;
	// std r10,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r10.u64);
	// add r5,r11,r6
	ctx.r5.u64 = ctx.r11.u64 + ctx.r6.u64;
	// extsw r11,r5
	ctx.r11.s64 = ctx.r5.s32;
	// lfd f0,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// std r11,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r11.u64);
	// lfd f9,-32(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f10,f13
	ctx.f10.f64 = double(float(ctx.f13.f64));
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fdivs f0,f12,f10
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f10.f64));
	// fdivs f13,f11,f7
	ctx.f13.f64 = double(float(ctx.f11.f64 / ctx.f7.f64));
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x837d92b4
	if (!cr6.lt) goto loc_837D92B4;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_837D92B4:
	// extsw r11,r7
	ctx.r11.s64 = ctx.r7.s32;
	// lbz r10,7(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 7);
	// extsw r7,r6
	ctx.r7.s64 = ctx.r6.s32;
	// extsw r6,r9
	ctx.r6.s64 = ctx.r9.s32;
	// std r11,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r11.u64);
	// std r7,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r7.u64);
	// lfd f11,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f9,-16(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lfd f13,-32(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f7,f12
	ctx.f7.f64 = double(float(ctx.f12.f64));
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f6,f10
	ctx.f6.f64 = double(float(ctx.f10.f64));
	// fmuls f4,f7,f0
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// frsp f5,f8
	ctx.f5.f64 = double(float(ctx.f8.f64));
	// fmuls f3,f6,f0
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fctidz f1,f4
	ctx.f1.s64 = (ctx.f4.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f4.f64));
	// stfd f1,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f1.u64);
	// lbz r9,-17(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + -17);
	// fmuls f2,f5,f0
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fctidz f0,f3
	ctx.f0.s64 = (ctx.f3.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f3.f64));
	// stfd f0,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f0.u64);
	// lbz r7,-25(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + -25);
	// fctidz f13,f2
	ctx.f13.s64 = (ctx.f2.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f2.f64));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lbz r5,-9(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + -9);
	// rotlwi r11,r5,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// or r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 | ctx.r9.u64;
	// rlwinm r5,r6,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r5,r7
	ctx.r11.u64 = ctx.r5.u64 | ctx.r7.u64;
	// rlwinm r9,r11,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r7,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r7.u32);
loc_837D9340:
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d9364
	if (cr6.eq) goto loc_837D9364;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x837d9364
	if (!cr6.eq) goto loc_837D9364;
	// or r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 | ctx.r3.u64;
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
loc_837D9364:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837D936C"))) PPC_WEAK_FUNC(sub_837D936C);
PPC_FUNC_IMPL(__imp__sub_837D936C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D9370"))) PPC_WEAK_FUNC(sub_837D9370);
PPC_FUNC_IMPL(__imp__sub_837D9370) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// rlwinm r10,r3,18,22,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 18) & 0x3FC;
	// lwz r11,-6912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6912);
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837D938C"))) PPC_WEAK_FUNC(sub_837D938C);
PPC_FUNC_IMPL(__imp__sub_837D938C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D9390"))) PPC_WEAK_FUNC(sub_837D9390);
PPC_FUNC_IMPL(__imp__sub_837D9390) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,720
	ctx.r10.s64 = ctx.r11.s64 + 720;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r4,11312(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11312);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x837d93d4
	if (cr6.eq) goto loc_837D93D4;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x837D93D4;
	sub_825952B8(ctx, base);
loc_837D93D4:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r11,11312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11312, ctx.r11.u32);
	// stw r11,11316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11316, ctx.r11.u32);
	// stw r11,11320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11320, ctx.r11.u32);
	// bl 0x83b3f898
	ctx.lr = 0x837D93EC;
	sub_83B3F898(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d9404
	if (cr6.eq) goto loc_837D9404;
	// bl 0x82416268
	ctx.lr = 0x837D9400;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_837D9404:
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

__attribute__((alias("__imp__sub_837D941C"))) PPC_WEAK_FUNC(sub_837D941C);
PPC_FUNC_IMPL(__imp__sub_837D941C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D9420"))) PPC_WEAK_FUNC(sub_837D9420);
PPC_FUNC_IMPL(__imp__sub_837D9420) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837D9428;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r5,r3,1
	ctx.r5.s64 = ctx.r3.s64 + 1;
	// addi r31,r11,-6896
	ctx.r31.s64 = ctx.r11.s64 + -6896;
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r3,-7292(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7292, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826501d8
	ctx.lr = 0x837D944C;
	sub_826501D8(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r30,r10,-6912
	ctx.r30.s64 = ctx.r10.s64 + -6912;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r11,-6912(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6912);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r11,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 2;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x837d94a0
	if (!cr6.lt) goto loc_837D94A0;
	// subfic r29,r11,11
	xer.ca = ctx.r11.u32 <= 11;
	ctx.r29.s64 = 11 - ctx.r11.s64;
loc_837D9478:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82a5c5b0
	ctx.lr = 0x837D9488;
	sub_82A5C5B0(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x835977d8
	ctx.lr = 0x837D9498;
	sub_835977D8(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne 0x837d9478
	if (!cr0.eq) goto loc_837D9478;
loc_837D94A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82a5c5b0
	ctx.lr = 0x837D94B0;
	sub_82A5C5B0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// bl 0x82a5c5b0
	ctx.lr = 0x837D94CC;
	sub_82A5C5B0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// bl 0x82a5c5b0
	ctx.lr = 0x837D94E8;
	sub_82A5C5B0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r8,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r8.u32);
	// bl 0x82a5c5b0
	ctx.lr = 0x837D9504;
	sub_82A5C5B0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r7,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r7.u32);
	// bl 0x82a5c5b0
	ctx.lr = 0x837D9520;
	sub_82A5C5B0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r3,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D9530"))) PPC_WEAK_FUNC(sub_837D9530);
PPC_FUNC_IMPL(__imp__sub_837D9530) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x837D9538;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,56
	ctx.r3.s64 = ctx.r3.s64 + 56;
	// bl 0x82eff040
	ctx.lr = 0x837D9548;
	sub_82EFF040(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r27,2
	ctx.r27.s64 = 2;
	// stb r30,192(r31)
	PPC_STORE_U8(ctx.r31.u32 + 192, ctx.r30.u8);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// stw r27,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r27.u32);
	// li r28,3
	ctx.r28.s64 = 3;
	// sth r30,194(r31)
	PPC_STORE_U16(ctx.r31.u32 + 194, ctx.r30.u16);
loc_837D9564:
	// mulli r11,r29,5532
	ctx.r11.s64 = ctx.r29.s64 * 5532;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,196
	ctx.r3.s64 = ctx.r11.s64 + 196;
	// bl 0x837d8560
	ctx.lr = 0x837D9574;
	sub_837D8560(ctx, base);
	// addi r10,r29,2816
	ctx.r10.s64 = ctx.r29.s64 + 2816;
	// add r11,r29,r31
	ctx.r11.u64 = ctx.r29.u64 + ctx.r31.u64;
	// addi r9,r29,1
	ctx.r9.s64 = ctx.r29.s64 + 1;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// extsb r7,r9
	ctx.r7.s64 = ctx.r9.s8;
	// stb r30,11260(r11)
	PPC_STORE_U8(ctx.r11.u32 + 11260, ctx.r30.u8);
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// stb r30,11262(r11)
	PPC_STORE_U8(ctx.r11.u32 + 11262, ctx.r30.u8);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// stwx r28,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r28.u32);
	// blt cr6,0x837d9564
	if (cr6.lt) goto loc_837D9564;
	// stw r30,11272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11272, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,11276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11276, ctx.r30.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// bl 0x83740bd8
	ctx.lr = 0x837D95B4;
	sub_83740BD8(ctx, base);
	// stw r3,11280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11280, ctx.r3.u32);
	// bl 0x83741af0
	ctx.lr = 0x837D95BC;
	sub_83741AF0(ctx, base);
	// lis r10,-31769
	ctx.r10.s64 = -2082013184;
	// stw r3,11284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11284, ctx.r3.u32);
	// addi r8,r31,11312
	ctx.r8.s64 = ctx.r31.s64 + 11312;
	// stb r30,11288(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11288, ctx.r30.u8);
	// stb r30,11289(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11289, ctx.r30.u8);
	// ld r11,-824(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + -824);
	// std r11,11292(r31)
	PPC_STORE_U64(ctx.r31.u32 + 11292, ctx.r11.u64);
	// ld r11,-824(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + -824);
	// std r11,11300(r31)
	PPC_STORE_U64(ctx.r31.u32 + 11300, ctx.r11.u64);
	// stw r27,11308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11308, ctx.r27.u32);
	// lwz r9,11316(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11316);
	// lwz r10,11312(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11312);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x837d962c
	if (cr6.eq) goto loc_837D962C;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplw cr6,r9,r9
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r9.u32, xer);
	// beq cr6,0x837d9628
	if (cr6.eq) goto loc_837D9628;
loc_837D9600:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stw r5,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r5.u32);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x837d9600
	if (!cr6.eq) goto loc_837D9600;
loc_837D9628:
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
loc_837D962C:
	// stb r30,11332(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11332, ctx.r30.u8);
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// stb r30,11335(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11335, ctx.r30.u8);
	// li r10,5
	ctx.r10.s64 = 5;
	// stb r30,11334(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11334, ctx.r30.u8);
	// lis r9,4194
	ctx.r9.s64 = 274857984;
	// stb r30,11333(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11333, ctx.r30.u8);
	// stw r10,11328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11328, ctx.r10.u32);
	// ori r28,r9,19923
	ctx.r28.u64 = ctx.r9.u64 | 19923;
	// stw r30,11340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11340, ctx.r30.u32);
	// stw r30,11356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11356, ctx.r30.u32);
	// stb r30,11360(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11360, ctx.r30.u8);
	// stb r30,11369(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11369, ctx.r30.u8);
	// lwz r11,-7292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7292);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837d968c
	if (!cr6.eq) goto loc_837D968C;
	// bl 0x83a7d958
	ctx.lr = 0x837D9670;
	sub_83A7D958(ctx, base);
	// bl 0x83524138
	ctx.lr = 0x837D9674;
	sub_83524138(ctx, base);
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// mulhwu r10,r11,r28
	ctx.r10.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r28.u32)) >> 32;
	// rlwinm r9,r10,26,6,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x3FFFFFF;
	// mulli r8,r9,1000
	ctx.r8.s64 = ctx.r9.s64 * 1000;
	// subf r3,r8,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r8.s64;
	// bl 0x837d9420
	ctx.lr = 0x837D968C;
	sub_837D9420(ctx, base);
loc_837D968C:
	// lis r29,-31743
	ctx.r29.s64 = -2080309248;
	// lwz r11,-7288(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -7288);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837d96dc
	if (!cr6.eq) goto loc_837D96DC;
	// bl 0x83a7d958
	ctx.lr = 0x837D96A0;
	sub_83A7D958(ctx, base);
	// bl 0x83524138
	ctx.lr = 0x837D96A4;
	sub_83524138(ctx, base);
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mulhwu r9,r11,r28
	ctx.r9.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r28.u32)) >> 32;
	// rlwinm r8,r9,26,6,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x3FFFFFF;
	// addi r28,r10,-6864
	ctx.r28.s64 = ctx.r10.s64 + -6864;
	// mulli r7,r8,1000
	ctx.r7.s64 = ctx.r8.s64 * 1000;
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,-7288(r29)
	PPC_STORE_U32(ctx.r29.u32 + -7288, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x826501d8
	ctx.lr = 0x837D96D4;
	sub_826501D8(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,28(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28, ctx.r11.u32);
loc_837D96DC:
	// bl 0x83108968
	ctx.lr = 0x837D96E0;
	sub_83108968(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837d9718
	if (cr6.eq) goto loc_837D9718;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83108978
	ctx.lr = 0x837D96F4;
	sub_83108978(ctx, base);
	// stw r3,11420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11420, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82aa87f0
	ctx.lr = 0x837D9700;
	sub_82AA87F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83108978
	ctx.lr = 0x837D970C;
	sub_83108978(ctx, base);
	// stw r3,11424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11424, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_837D9718:
	// stw r30,11420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11420, ctx.r30.u32);
	// stw r30,11424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11424, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D9728"))) PPC_WEAK_FUNC(sub_837D9728);
PPC_FUNC_IMPL(__imp__sub_837D9728) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdabc
	ctx.lr = 0x837D9730;
	__savegprlr_17(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
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
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r20,r8
	ctx.r20.u64 = ctx.r8.u64;
	// mr r19,r9
	ctx.r19.u64 = ctx.r9.u64;
	// mr r18,r10
	ctx.r18.u64 = ctx.r10.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x837d9c5c
	if (cr6.eq) goto loc_837D9C5C;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x837d9c5c
	if (cr6.eq) goto loc_837D9C5C;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x837d9c5c
	if (cr6.eq) goto loc_837D9C5C;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837d9c5c
	if (cr6.eq) goto loc_837D9C5C;
	// lwz r17,452(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// cmplwi cr6,r17,0
	cr6.compare<uint32_t>(ctx.r17.u32, 0, xer);
	// beq cr6,0x837d9c5c
	if (cr6.eq) goto loc_837D9C5C;
	// bl 0x837d9530
	ctx.lr = 0x837D9784;
	sub_837D9530(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x837D9788;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addis r4,r10,5
	ctx.r4.s64 = ctx.r10.s64 + 327680;
	// addi r4,r4,14904
	ctx.r4.s64 = ctx.r4.s64 + 14904;
	// bl 0x83123918
	ctx.lr = 0x837D97A0;
	sub_83123918(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x82f09ce8
	ctx.lr = 0x837D97AC;
	sub_82F09CE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835d31a8
	ctx.lr = 0x837D97B4;
	sub_835D31A8(ctx, base);
	// stw r3,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a16ee8
	ctx.lr = 0x837D97C0;
	sub_82A16EE8(ctx, base);
	// stb r3,192(r31)
	PPC_STORE_U8(ctx.r31.u32 + 192, ctx.r3.u8);
	// lhz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 20);
	// li r21,0
	ctx.r21.s64 = 0;
	// li r27,1
	ctx.r27.s64 = 1;
	// sth r9,194(r31)
	PPC_STORE_U16(ctx.r31.u32 + 194, ctx.r9.u16);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// li r26,2
	ctx.r26.s64 = 2;
	// li r25,3
	ctx.r25.s64 = 3;
	// li r22,4
	ctx.r22.s64 = 4;
	// li r23,5
	ctx.r23.s64 = 5;
	// beq cr6,0x837d9890
	if (cr6.eq) goto loc_837D9890;
	// lwz r11,4456(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4456);
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// bgt cr6,0x837d986c
	if (cr6.gt) goto loc_837D986C;
	// lis r12,-31874
	ctx.r12.s64 = -2088894464;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-26608
	ctx.r12.s64 = ctx.r12.s64 + -26608;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_837D9838;
	case 1:
		goto loc_837D9838;
	case 2:
		goto loc_837D9838;
	case 3:
		goto loc_837D9840;
	case 4:
		goto loc_837D9840;
	case 5:
		goto loc_837D9854;
	case 6:
		goto loc_837D986C;
	case 7:
		goto loc_837D9848;
	case 8:
		goto loc_837D985C;
	case 9:
		goto loc_837D9864;
	default:
		return;
	}
	// lwz r27,-26568(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -26568);
	// lwz r27,-26568(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -26568);
	// lwz r27,-26568(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -26568);
	// lwz r27,-26560(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -26560);
	// lwz r27,-26560(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -26560);
	// lwz r27,-26540(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -26540);
	// lwz r27,-26516(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -26516);
	// lwz r27,-26552(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -26552);
	// lwz r27,-26532(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -26532);
	// lwz r27,-26524(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -26524);
loc_837D9838:
	// stw r21,11328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11328, ctx.r21.u32);
	// b 0x837d9870
	goto loc_837D9870;
loc_837D9840:
	// stw r27,11328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11328, ctx.r27.u32);
	// b 0x837d9870
	goto loc_837D9870;
loc_837D9848:
	// lwz r11,5356(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5356);
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// bne cr6,0x837d985c
	if (!cr6.eq) goto loc_837D985C;
loc_837D9854:
	// stw r26,11328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11328, ctx.r26.u32);
	// b 0x837d9870
	goto loc_837D9870;
loc_837D985C:
	// stw r25,11328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11328, ctx.r25.u32);
	// b 0x837d9870
	goto loc_837D9870;
loc_837D9864:
	// stw r22,11328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11328, ctx.r22.u32);
	// b 0x837d9870
	goto loc_837D9870;
loc_837D986C:
	// stw r23,11328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11328, ctx.r23.u32);
loc_837D9870:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a1a878
	ctx.lr = 0x837D987C;
	sub_82A1A878(ctx, base);
	// stb r3,5714(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5714, ctx.r3.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a1a878
	ctx.lr = 0x837D988C;
	sub_82A1A878(ctx, base);
	// stb r3,11246(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11246, ctx.r3.u8);
loc_837D9890:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x837d9910
	if (cr6.eq) goto loc_837D9910;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a32f58
	ctx.lr = 0x837D98A4;
	sub_82A32F58(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d98b4
	if (cr6.eq) goto loc_837D98B4;
	// stb r27,11332(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11332, ctx.r27.u8);
loc_837D98B4:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a32f58
	ctx.lr = 0x837D98C0;
	sub_82A32F58(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d98d0
	if (cr6.eq) goto loc_837D98D0;
	// stb r27,11333(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11333, ctx.r27.u8);
loc_837D98D0:
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a33718
	ctx.lr = 0x837D98E0;
	sub_82A33718(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d98f0
	if (cr6.eq) goto loc_837D98F0;
	// stb r27,11334(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11334, ctx.r27.u8);
loc_837D98F0:
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a33718
	ctx.lr = 0x837D9900;
	sub_82A33718(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d9910
	if (cr6.eq) goto loc_837D9910;
	// stb r27,11335(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11335, ctx.r27.u8);
loc_837D9910:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x837d9be4
	if (cr6.eq) goto loc_837D9BE4;
	// addis r11,r24,1
	ctx.r11.s64 = ctx.r24.s64 + 65536;
	// lwz r3,560(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 560);
	// addis r10,r24,1
	ctx.r10.s64 = ctx.r24.s64 + 65536;
	// addi r11,r11,-16600
	ctx.r11.s64 = ctx.r11.s64 + -16600;
	// addi r10,r10,-8352
	ctx.r10.s64 = ctx.r10.s64 + -8352;
	// addis r30,r24,1
	ctx.r30.s64 = ctx.r24.s64 + 65536;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r30,r30,-16828
	ctx.r30.s64 = ctx.r30.s64 + -16828;
	// lwz r9,7484(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7484);
	// stw r3,11280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11280, ctx.r3.u32);
	// srawi r8,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// clrlwi r29,r9,31
	ctx.r29.u64 = ctx.r9.u32 & 0x1;
	// clrlwi r28,r8,31
	ctx.r28.u64 = ctx.r8.u32 & 0x1;
	// bl 0x83741af0
	ctx.lr = 0x837D9954;
	sub_83741AF0(ctx, base);
	// stw r3,11284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11284, ctx.r3.u32);
	// lbz r7,3(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x837d999c
	if (cr6.eq) goto loc_837D999C;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x837d99b0
	if (cr6.gt) goto loc_837D99B0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x837d99a8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837D99A8;
	// bdzf 4*cr6+eq,0x837d998c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837D998C;
	// bne cr6,0x837d9994
	if (!cr6.eq) goto loc_837D9994;
	// stb r27,11288(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11288, ctx.r27.u8);
	// b 0x837d99b4
	goto loc_837D99B4;
loc_837D998C:
	// stb r25,11288(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11288, ctx.r25.u8);
	// b 0x837d99b4
	goto loc_837D99B4;
loc_837D9994:
	// stb r22,11288(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11288, ctx.r22.u8);
	// b 0x837d99b4
	goto loc_837D99B4;
loc_837D999C:
	// lbz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d99b0
	if (cr6.eq) goto loc_837D99B0;
loc_837D99A8:
	// stb r26,11288(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11288, ctx.r26.u8);
	// b 0x837d99b4
	goto loc_837D99B4;
loc_837D99B0:
	// stb r21,11288(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11288, ctx.r21.u8);
loc_837D99B4:
	// li r4,160
	ctx.r4.s64 = 160;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82a268c8
	ctx.lr = 0x837D99C0;
	sub_82A268C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d99f4
	if (cr6.eq) goto loc_837D99F4;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d99e0
	if (cr6.eq) goto loc_837D99E0;
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x837d9ab0
	goto loc_837D9AB0;
loc_837D99E0:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d9ab4
	if (cr6.eq) goto loc_837D9AB4;
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x837d9ab0
	goto loc_837D9AB0;
loc_837D99F4:
	// li r4,160
	ctx.r4.s64 = 160;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82a26930
	ctx.lr = 0x837D9A00;
	sub_82A26930(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d9a74
	if (cr6.eq) goto loc_837D9A74;
	// lbz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x837d9a20
	if (!cr6.eq) goto loc_837D9A20;
	// stb r22,11289(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11289, ctx.r22.u8);
	// b 0x837d9ab4
	goto loc_837D9AB4;
loc_837D9A20:
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837d9a34
	if (cr6.eq) goto loc_837D9A34;
	// stb r27,11289(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11289, ctx.r27.u8);
	// b 0x837d9ab4
	goto loc_837D9AB4;
loc_837D9A34:
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x837d9a44
	if (!cr6.eq) goto loc_837D9A44;
	// stb r25,11289(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11289, ctx.r25.u8);
	// b 0x837d9ab4
	goto loc_837D9AB4;
loc_837D9A44:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x837d9a54
	if (!cr6.eq) goto loc_837D9A54;
	// stb r26,11289(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11289, ctx.r26.u8);
	// b 0x837d9ab4
	goto loc_837D9AB4;
loc_837D9A54:
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bne cr6,0x837d9a64
	if (!cr6.eq) goto loc_837D9A64;
	// stb r23,11289(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11289, ctx.r23.u8);
	// b 0x837d9ab4
	goto loc_837D9AB4;
loc_837D9A64:
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bne cr6,0x837d9ab4
	if (!cr6.eq) goto loc_837D9AB4;
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x837d9ab0
	goto loc_837D9AB0;
loc_837D9A74:
	// li r4,160
	ctx.r4.s64 = 160;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82a26898
	ctx.lr = 0x837D9A80;
	sub_82A26898(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d9ab4
	if (cr6.eq) goto loc_837D9AB4;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d9aa0
	if (cr6.eq) goto loc_837D9AA0;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x837d9ab0
	goto loc_837D9AB0;
loc_837D9AA0:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837d9ab4
	if (cr6.eq) goto loc_837D9AB4;
	// li r11,8
	ctx.r11.s64 = 8;
loc_837D9AB0:
	// stb r11,11289(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11289, ctx.r11.u8);
loc_837D9AB4:
	// lwz r11,24(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// addi r30,r31,194
	ctx.r30.s64 = ctx.r31.s64 + 194;
	// stw r11,11292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11292, ctx.r11.u32);
	// lwz r10,28(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28);
	// stw r10,11296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11296, ctx.r10.u32);
	// lwz r9,48(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 48);
	// stw r9,11300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11300, ctx.r9.u32);
	// lwz r8,52(r24)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + 52);
	// stw r8,11304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11304, ctx.r8.u32);
loc_837D9AE0:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82a26a18
	ctx.lr = 0x837D9AF0;
	sub_82A26A18(ctx, base);
	// lwz r10,2(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwimi r9,r10,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// stw r9,2(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2, ctx.r9.u32);
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwimi r7,r8,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// stw r7,2(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2, ctx.r7.u32);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// blt cr6,0x837d9b24
	if (cr6.lt) goto loc_837D9B24;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
loc_837D9B24:
	// stw r10,5522(r30)
	PPC_STORE_U32(ctx.r30.u32 + 5522, ctx.r10.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lbz r10,46(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 46);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// stw r10,5526(r30)
	PPC_STORE_U32(ctx.r30.u32 + 5526, ctx.r10.u32);
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(ctx.r29.s32, 1, xer);
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// srawi r8,r9,4
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 4;
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// stb r7,5530(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5530, ctx.r7.u8);
	// lwz r6,48(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// srawi r5,r6,5
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1F) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 5;
	// clrlwi r4,r5,31
	ctx.r4.u64 = ctx.r5.u32 & 0x1;
	// stb r4,5531(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5531, ctx.r4.u8);
	// lwz r3,48(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// srawi r11,r3,6
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 6;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// stbu r10,5532(r30)
	ea = 5532 + ctx.r30.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r30.u32 = ea;
	// ble cr6,0x837d9ae0
	if (!cr6.gt) goto loc_837D9AE0;
	// lwz r4,8(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// addi r29,r24,8
	ctx.r29.s64 = ctx.r24.s64 + 8;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// stw r4,11308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11308, ctx.r4.u32);
	// beq cr6,0x837d9be4
	if (cr6.eq) goto loc_837D9BE4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a50018
	ctx.lr = 0x837D9B8C;
	sub_82A50018(ctx, base);
	// clrlwi r28,r3,24
	ctx.r28.u64 = ctx.r3.u32 & 0xFF;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x837d9be4
	if (cr6.eq) goto loc_837D9BE4;
	// addi r27,r31,11312
	ctx.r27.s64 = ctx.r31.s64 + 11312;
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
loc_837D9BA4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,11308(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11308);
	// bl 0x82a50278
	ctx.lr = 0x837D9BB0;
	sub_82A50278(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// ld r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 4);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// std r9,84(r1)
	PPC_STORE_U64(ctx.r1.u32 + 84, ctx.r9.u64);
	// bl 0x82d54828
	ctx.lr = 0x837D9BD0;
	sub_82D54828(ctx, base);
	// addi r8,r30,1
	ctx.r8.s64 = ctx.r30.s64 + 1;
	// clrlwi r5,r8,24
	ctx.r5.u64 = ctx.r8.u32 & 0xFF;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplw cr6,r5,r28
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r28.u32, xer);
	// blt cr6,0x837d9ba4
	if (cr6.lt) goto loc_837D9BA4;
loc_837D9BE4:
	// bl 0x831156e8
	ctx.lr = 0x837D9BE8;
	sub_831156E8(ctx, base);
	// lwz r28,56(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// addi r29,r31,11236
	ctx.r29.s64 = ctx.r31.s64 + 11236;
loc_837D9BF4:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r29,-5532
	ctx.r4.s64 = ctx.r29.s64 + -5532;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8312bb20
	ctx.lr = 0x837D9C08;
	sub_8312BB20(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8312bb20
	ctx.lr = 0x837D9C1C;
	sub_8312BB20(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r30,2
	cr6.compare<uint32_t>(ctx.r30.u32, 2, xer);
	// blt cr6,0x837d9bf4
	if (cr6.lt) goto loc_837D9BF4;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837d8728
	ctx.lr = 0x837D9C44;
	sub_837D8728(ctx, base);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837d8728
	ctx.lr = 0x837D9C5C;
	sub_837D8728(ctx, base);
loc_837D9C5C:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D9C64"))) PPC_WEAK_FUNC(sub_837D9C64);
PPC_FUNC_IMPL(__imp__sub_837D9C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D9C68"))) PPC_WEAK_FUNC(sub_837D9C68);
PPC_FUNC_IMPL(__imp__sub_837D9C68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x837D9C70;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,11364(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11364, ctx.r30.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stb r30,11368(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11368, ctx.r30.u8);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// bl 0x837d9530
	ctx.lr = 0x837D9C98;
	sub_837D9530(ctx, base);
	// addi r3,r31,196
	ctx.r3.s64 = ctx.r31.s64 + 196;
	// bl 0x837d8560
	ctx.lr = 0x837D9CA0;
	sub_837D8560(ctx, base);
	// rlwinm r25,r29,0,0,13
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFC0000;
	// clrlwi r29,r29,14
	ctx.r29.u64 = ctx.r29.u32 & 0x3FFFF;
	// addi r3,r31,5728
	ctx.r3.s64 = ctx.r31.s64 + 5728;
	// or r11,r25,r29
	ctx.r11.u64 = ctx.r25.u64 | ctx.r29.u64;
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// stb r30,5712(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5712, ctx.r30.u8);
	// stb r30,5713(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5713, ctx.r30.u8);
	// bl 0x837d8560
	ctx.lr = 0x837D9CC0;
	sub_837D8560(ctx, base);
	// or r10,r25,r29
	ctx.r10.u64 = ctx.r25.u64 | ctx.r29.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// stw r10,5728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5728, ctx.r10.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stb r30,11244(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11244, ctx.r30.u8);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stb r30,11245(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11245, ctx.r30.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837d8c20
	ctx.lr = 0x837D9CE8;
	sub_837D8C20(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D9CF0"))) PPC_WEAK_FUNC(sub_837D9CF0);
PPC_FUNC_IMPL(__imp__sub_837D9CF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x837D9CF8;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,11364(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11364, ctx.r30.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stb r30,11368(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11368, ctx.r30.u8);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// bl 0x837d9530
	ctx.lr = 0x837D9D2C;
	sub_837D9530(ctx, base);
	// addi r3,r31,196
	ctx.r3.s64 = ctx.r31.s64 + 196;
	// bl 0x837d8560
	ctx.lr = 0x837D9D34;
	sub_837D8560(ctx, base);
	// stw r29,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r29.u32);
	// stb r30,5712(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5712, ctx.r30.u8);
	// addi r3,r31,5728
	ctx.r3.s64 = ctx.r31.s64 + 5728;
	// stb r30,5713(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5713, ctx.r30.u8);
	// bl 0x837d8560
	ctx.lr = 0x837D9D48;
	sub_837D8560(ctx, base);
	// stw r25,5728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5728, ctx.r25.u32);
	// stb r30,11244(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11244, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r30,11245(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11245, ctx.r30.u8);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x837d8c20
	ctx.lr = 0x837D9D6C;
	sub_837D8C20(ctx, base);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r7,244(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837d8c20
	ctx.lr = 0x837D9D84;
	sub_837D8C20(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D9D8C"))) PPC_WEAK_FUNC(sub_837D9D8C);
PPC_FUNC_IMPL(__imp__sub_837D9D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D9D90"))) PPC_WEAK_FUNC(sub_837D9D90);
PPC_FUNC_IMPL(__imp__sub_837D9D90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837D9D98;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// addi r10,r11,720
	ctx.r10.s64 = ctx.r11.s64 + 720;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8257fa88
	ctx.lr = 0x837D9DB4;
	sub_8257FA88(ctx, base);
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r29,r31,196
	ctx.r29.s64 = ctx.r31.s64 + 196;
	// stw r9,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r9.u32);
	// li r30,1
	ctx.r30.s64 = 1;
loc_837D9DC4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x837d8610
	ctx.lr = 0x837D9DCC;
	sub_837D8610(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r29,r29,5532
	ctx.r29.s64 = ctx.r29.s64 + 5532;
	// bge 0x837d9dc4
	if (!cr0.lt) goto loc_837D9DC4;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// stw r30,11296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11296, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r11,11292(r31)
	PPC_STORE_U16(ctx.r31.u32 + 11292, ctx.r11.u16);
	// sth r11,11300(r31)
	PPC_STORE_U16(ctx.r31.u32 + 11300, ctx.r11.u16);
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,11304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11304, ctx.r30.u32);
	// stfs f0,11344(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11344, temp.u32);
	// stfs f0,11348(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11348, temp.u32);
	// stw r30,11312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11312, ctx.r30.u32);
	// stfs f0,11352(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11352, temp.u32);
	// stw r30,11316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11316, ctx.r30.u32);
	// stw r30,11320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11320, ctx.r30.u32);
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// sth r11,11408(r31)
	PPC_STORE_U16(ctx.r31.u32 + 11408, ctx.r11.u16);
	// addi r11,r31,11380
	ctx.r11.s64 = ctx.r31.s64 + 11380;
	// stw r30,11412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11412, ctx.r30.u32);
	// stfs f0,11400(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11400, temp.u32);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stfs f0,11404(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11404, temp.u32);
	// stw r30,11380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11380, ctx.r30.u32);
	// stw r30,11384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11384, ctx.r30.u32);
	// stw r30,11388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11388, ctx.r30.u32);
	// stw r30,11392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11392, ctx.r30.u32);
	// stw r30,11396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11396, ctx.r30.u32);
	// stb r30,11416(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11416, ctx.r30.u8);
	// std r9,11408(r31)
	PPC_STORE_U64(ctx.r31.u32 + 11408, ctx.r9.u64);
	// stw r30,11364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11364, ctx.r30.u32);
	// stb r30,11368(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11368, ctx.r30.u8);
	// stb r30,11370(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11370, ctx.r30.u8);
	// stb r30,11371(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11371, ctx.r30.u8);
	// stb r30,11372(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11372, ctx.r30.u8);
	// stb r30,11373(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11373, ctx.r30.u8);
	// stb r30,11374(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11374, ctx.r30.u8);
	// stb r30,11336(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11336, ctx.r30.u8);
	// bl 0x837d9530
	ctx.lr = 0x837D9E78;
	sub_837D9530(ctx, base);
	// stb r30,11375(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11375, ctx.r30.u8);
	// stb r30,11376(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11376, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r30,11428(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11428, ctx.r30.u8);
	// stb r30,11429(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11429, ctx.r30.u8);
	// stb r30,11430(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11430, ctx.r30.u8);
	// stb r30,11431(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11431, ctx.r30.u8);
	// stb r30,11432(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11432, ctx.r30.u8);
	// stb r30,11433(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11433, ctx.r30.u8);
	// stb r30,11434(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11434, ctx.r30.u8);
	// stb r30,11435(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11435, ctx.r30.u8);
	// stb r30,11436(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11436, ctx.r30.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D9EB0"))) PPC_WEAK_FUNC(sub_837D9EB0);
PPC_FUNC_IMPL(__imp__sub_837D9EB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x837D9EB8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,2
	ctx.r11.s64 = 2;
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// stw r11,11364(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11364, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,2056(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2056);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,68(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 68);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x837D9EE4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x837d9ef8
	if (!cr6.eq) goto loc_837D9EF8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_837D9EF8:
	// stb r11,11368(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11368, ctx.r11.u8);
	// lis r29,-31763
	ctx.r29.s64 = -2081619968;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-3564(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x837D9F0C;
	sub_82A0C710(ctx, base);
	// lwz r11,-3564(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a0c738
	ctx.lr = 0x837D9F20;
	sub_82A0C738(ctx, base);
	// lwz r11,-3564(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a0c710
	ctx.lr = 0x837D9F34;
	sub_82A0C710(ctx, base);
	// lwz r11,-3564(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a0c738
	ctx.lr = 0x837D9F48;
	sub_82A0C738(ctx, base);
	// lwz r11,-3564(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,6132(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6132);
	// lwz r6,192(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// lwz r5,292(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r4,312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// bl 0x837d9728
	ctx.lr = 0x837D9F74;
	sub_837D9728(ctx, base);
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a4d458
	ctx.lr = 0x837D9F84;
	sub_82A4D458(ctx, base);
	// stb r3,11260(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11260, ctx.r3.u8);
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a4d458
	ctx.lr = 0x837D9F98;
	sub_82A4D458(ctx, base);
	// stb r3,11261(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11261, ctx.r3.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a4d4c0
	ctx.lr = 0x837D9FA8;
	sub_82A4D4C0(ctx, base);
	// stb r3,11262(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11262, ctx.r3.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a4d4c0
	ctx.lr = 0x837D9FB8;
	sub_82A4D4C0(ctx, base);
	// stb r3,11263(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11263, ctx.r3.u8);
	// addi r6,r31,11276
	ctx.r6.s64 = ctx.r31.s64 + 11276;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a4d608
	ctx.lr = 0x837D9FD0;
	sub_82A4D608(ctx, base);
	// stw r3,11272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11272, ctx.r3.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837D9FDC"))) PPC_WEAK_FUNC(sub_837D9FDC);
PPC_FUNC_IMPL(__imp__sub_837D9FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837D9FE0"))) PPC_WEAK_FUNC(sub_837D9FE0);
PPC_FUNC_IMPL(__imp__sub_837D9FE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x837D9FE8;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r23,1
	ctx.r23.s64 = 1;
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// stw r23,11364(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11364, ctx.r23.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,2056(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2056);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x837DA02C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x837da040
	if (cr6.eq) goto loc_837DA040;
	// stb r23,11368(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11368, ctx.r23.u8);
	// b 0x837da048
	goto loc_837DA048;
loc_837DA040:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,11368(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11368, ctx.r11.u8);
loc_837DA048:
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837d9728
	ctx.lr = 0x837DA074;
	sub_837D9728(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837DA07C"))) PPC_WEAK_FUNC(sub_837DA07C);
PPC_FUNC_IMPL(__imp__sub_837DA07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837DA080"))) PPC_WEAK_FUNC(sub_837DA080);
PPC_FUNC_IMPL(__imp__sub_837DA080) {
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
	// stb r6,143(r1)
	PPC_STORE_U8(ctx.r1.u32 + 143, ctx.r6.u8);
	// li r7,1
	ctx.r7.s64 = 1;
	// std r5,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r5.u64);
	// addi r6,r1,143
	ctx.r6.s64 = ctx.r1.s64 + 143;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// bl 0x837d9c68
	ctx.lr = 0x837DA0A4;
	sub_837D9C68(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837DA0B4"))) PPC_WEAK_FUNC(sub_837DA0B4);
PPC_FUNC_IMPL(__imp__sub_837DA0B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837DA0B8"))) PPC_WEAK_FUNC(sub_837DA0B8);
PPC_FUNC_IMPL(__imp__sub_837DA0B8) {
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
	// std r5,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r5.u64);
	// li r11,1
	ctx.r11.s64 = 1;
	// std r8,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r8.u64);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// stb r6,143(r1)
	PPC_STORE_U8(ctx.r1.u32 + 143, ctx.r6.u8);
	// addi r10,r1,167
	ctx.r10.s64 = ctx.r1.s64 + 167;
	// stb r9,167(r1)
	PPC_STORE_U8(ctx.r1.u32 + 167, ctx.r9.u8);
	// addi r9,r1,152
	ctx.r9.s64 = ctx.r1.s64 + 152;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r6,r1,143
	ctx.r6.s64 = ctx.r1.s64 + 143;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// bl 0x837d9cf0
	ctx.lr = 0x837DA0F8;
	sub_837D9CF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837DA108"))) PPC_WEAK_FUNC(sub_837DA108);
PPC_FUNC_IMPL(__imp__sub_837DA108) {
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
	// lwz r11,-7296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7296);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837da17c
	if (!cr6.eq) goto loc_837DA17C;
	// li r11,33
	ctx.r11.s64 = 33;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,11440
	ctx.r4.s64 = 11440;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x837DA140;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837da170
	if (cr6.eq) goto loc_837DA170;
	// bl 0x837d9d90
	ctx.lr = 0x837DA14C;
	sub_837D9D90(ctx, base);
	// stw r3,-7296(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7296, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x837da17c
	if (!cr6.eq) goto loc_837DA17C;
loc_837DA158:
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
loc_837DA170:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-7296(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7296, ctx.r11.u32);
	// b 0x837da158
	goto loc_837DA158;
loc_837DA17C:
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
}

__attribute__((alias("__imp__sub_837DA194"))) PPC_WEAK_FUNC(sub_837DA194);
PPC_FUNC_IMPL(__imp__sub_837DA194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837DA198"))) PPC_WEAK_FUNC(sub_837DA198);
PPC_FUNC_IMPL(__imp__sub_837DA198) {
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
	// lwz r3,-7296(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7296);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x837da1e8
	if (!cr6.eq) goto loc_837DA1E8;
	// li r11,33
	ctx.r11.s64 = 33;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,11440
	ctx.r4.s64 = 11440;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x837DA1D0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837da1e0
	if (cr6.eq) goto loc_837DA1E0;
	// bl 0x837d9d90
	ctx.lr = 0x837DA1DC;
	sub_837D9D90(ctx, base);
	// b 0x837da1e4
	goto loc_837DA1E4;
loc_837DA1E0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_837DA1E4:
	// stw r3,-7296(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7296, ctx.r3.u32);
loc_837DA1E8:
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

__attribute__((alias("__imp__sub_837DA1FC"))) PPC_WEAK_FUNC(sub_837DA1FC);
PPC_FUNC_IMPL(__imp__sub_837DA1FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837DA200"))) PPC_WEAK_FUNC(sub_837DA200);
PPC_FUNC_IMPL(__imp__sub_837DA200) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837DA208;
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
	// lwz r3,-7296(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7296);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x837da254
	if (!cr6.eq) goto loc_837DA254;
	// li r11,33
	ctx.r11.s64 = 33;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,11440
	ctx.r4.s64 = 11440;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x837DA23C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837da24c
	if (cr6.eq) goto loc_837DA24C;
	// bl 0x837d9d90
	ctx.lr = 0x837DA248;
	sub_837D9D90(ctx, base);
	// b 0x837da250
	goto loc_837DA250;
loc_837DA24C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_837DA250:
	// stw r3,-7296(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7296, ctx.r3.u32);
loc_837DA254:
	// mulli r11,r29,5532
	ctx.r11.s64 = ctx.r29.s64 * 5532;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,5720(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5720);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// beq cr6,0x837da2f8
	if (cr6.eq) goto loc_837DA2F8;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// beq cr6,0x837da2dc
	if (cr6.eq) goto loc_837DA2DC;
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// beq cr6,0x837da2c0
	if (cr6.eq) goto loc_837DA2C0;
	// lbz r10,5724(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5724);
	// lbz r11,5725(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5725);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837da2a8
	if (cr6.eq) goto loc_837DA2A8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837da2a0
	if (cr6.eq) goto loc_837DA2A0;
	// li r11,1026
	ctx.r11.s64 = 1026;
	// b 0x837da330
	goto loc_837DA330;
loc_837DA2A0:
	// li r11,1027
	ctx.r11.s64 = 1027;
	// b 0x837da330
	goto loc_837DA330;
loc_837DA2A8:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837da2b8
	if (cr6.eq) goto loc_837DA2B8;
	// li r11,1024
	ctx.r11.s64 = 1024;
	// b 0x837da330
	goto loc_837DA330;
loc_837DA2B8:
	// li r11,1025
	ctx.r11.s64 = 1025;
	// b 0x837da330
	goto loc_837DA330;
loc_837DA2C0:
	// lbz r11,5725(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5725);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837da2d4
	if (cr6.eq) goto loc_837DA2D4;
	// li r11,1034
	ctx.r11.s64 = 1034;
	// b 0x837da330
	goto loc_837DA330;
loc_837DA2D4:
	// li r11,1035
	ctx.r11.s64 = 1035;
	// b 0x837da330
	goto loc_837DA330;
loc_837DA2DC:
	// lbz r11,5725(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5725);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837da2f0
	if (cr6.eq) goto loc_837DA2F0;
	// li r11,1032
	ctx.r11.s64 = 1032;
	// b 0x837da330
	goto loc_837DA330;
loc_837DA2F0:
	// li r11,1033
	ctx.r11.s64 = 1033;
	// b 0x837da330
	goto loc_837DA330;
loc_837DA2F8:
	// lbz r10,5724(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5724);
	// lbz r11,5725(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5725);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837da320
	if (cr6.eq) goto loc_837DA320;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837da318
	if (cr6.eq) goto loc_837DA318;
	// li r11,1030
	ctx.r11.s64 = 1030;
	// b 0x837da330
	goto loc_837DA330;
loc_837DA318:
	// li r11,1031
	ctx.r11.s64 = 1031;
	// b 0x837da330
	goto loc_837DA330;
loc_837DA320:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1028
	ctx.r11.s64 = 1028;
	// bne cr6,0x837da330
	if (!cr6.eq) goto loc_837DA330;
	// li r11,1029
	ctx.r11.s64 = 1029;
loc_837DA330:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x835977d8
	ctx.lr = 0x837DA338;
	sub_835977D8(ctx, base);
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(ctx.r29.s32, 1, xer);
	// bne cr6,0x837da350
	if (!cr6.eq) goto loc_837DA350;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,256
	ctx.r9.s64 = ctx.r11.s64 + 256;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_837DA350:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837DA358"))) PPC_WEAK_FUNC(sub_837DA358);
PPC_FUNC_IMPL(__imp__sub_837DA358) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x837DA360;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// cmplw cr6,r31,r4
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, xer);
	// beq cr6,0x837da3a8
	if (cr6.eq) goto loc_837DA3A8;
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
	ctx.lr = 0x837DA3A0;
	sub_831CE420(ctx, base);
	// add r10,r31,r30
	ctx.r10.u64 = ctx.r31.u64 + ctx.r30.u64;
	// stw r10,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r10.u32);
loc_837DA3A8:
	// rlwinm r11,r28,0,16,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFF00;
	// cmplwi cr6,r11,4608
	cr6.compare<uint32_t>(ctx.r11.u32, 4608, xer);
	// bgt cr6,0x837dadf8
	if (cr6.gt) goto loc_837DADF8;
	// beq cr6,0x837dadbc
	if (cr6.eq) goto loc_837DADBC;
	// cmplwi cr6,r11,2304
	cr6.compare<uint32_t>(ctx.r11.u32, 2304, xer);
	// bgt cr6,0x837daaa8
	if (cr6.gt) goto loc_837DAAA8;
	// beq cr6,0x837daa78
	if (cr6.eq) goto loc_837DAA78;
	// cmplwi cr6,r11,1280
	cr6.compare<uint32_t>(ctx.r11.u32, 1280, xer);
	// bgt cr6,0x837da964
	if (cr6.gt) goto loc_837DA964;
	// beq cr6,0x837da94c
	if (cr6.eq) goto loc_837DA94C;
	// cmplwi cr6,r11,768
	cr6.compare<uint32_t>(ctx.r11.u32, 768, xer);
	// bgt cr6,0x837da92c
	if (cr6.gt) goto loc_837DA92C;
	// beq cr6,0x837da8c0
	if (cr6.eq) goto loc_837DA8C0;
	// cmplwi cr6,r11,256
	cr6.compare<uint32_t>(ctx.r11.u32, 256, xer);
	// beq cr6,0x837da5b4
	if (cr6.eq) goto loc_837DA5B4;
	// cmplwi cr6,r11,512
	cr6.compare<uint32_t>(ctx.r11.u32, 512, xer);
	// bne cr6,0x837db7f4
	if (!cr6.eq) goto loc_837DB7F4;
	// lwz r11,11284(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11284);
	// cmpwi cr6,r11,120
	cr6.compare<int32_t>(ctx.r11.s32, 120, xer);
	// bgt cr6,0x837da53c
	if (cr6.gt) goto loc_837DA53C;
	// beq cr6,0x837da534
	if (cr6.eq) goto loc_837DA534;
	// addi r11,r11,-7
	ctx.r11.s64 = ctx.r11.s64 + -7;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// bgt cr6,0x837da5ac
	if (cr6.gt) goto loc_837DA5AC;
	// lis r12,-31874
	ctx.r12.s64 = -2088894464;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-23520
	ctx.r12.s64 = ctx.r12.s64 + -23520;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_837DA484;
	case 1:
		goto loc_837DA484;
	case 2:
		goto loc_837DA484;
	case 3:
		goto loc_837DA484;
	case 4:
		goto loc_837DA484;
	case 5:
		goto loc_837DA484;
	case 6:
		goto loc_837DA484;
	case 7:
		goto loc_837DA4DC;
	case 8:
		goto loc_837DA4DC;
	case 9:
		goto loc_837DA4DC;
	case 10:
		goto loc_837DA4DC;
	case 11:
		goto loc_837DA4DC;
	case 12:
		goto loc_837DA4DC;
	case 13:
		goto loc_837DA4DC;
	case 14:
		goto loc_837DA4E4;
	case 15:
		goto loc_837DA4EC;
	case 16:
		goto loc_837DA4EC;
	case 17:
		goto loc_837DA4EC;
	case 18:
		goto loc_837DA4EC;
	case 19:
		goto loc_837DA51C;
	case 20:
		goto loc_837DA51C;
	case 21:
		goto loc_837DA51C;
	case 22:
		goto loc_837DA51C;
	case 23:
		goto loc_837DA524;
	case 24:
		goto loc_837DA52C;
	default:
		return;
	}
	// lwz r27,-23420(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23420);
	// lwz r27,-23420(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23420);
	// lwz r27,-23420(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23420);
	// lwz r27,-23420(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23420);
	// lwz r27,-23420(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23420);
	// lwz r27,-23420(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23420);
	// lwz r27,-23420(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23420);
	// lwz r27,-23332(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23332);
	// lwz r27,-23332(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23332);
	// lwz r27,-23332(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23332);
	// lwz r27,-23332(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23332);
	// lwz r27,-23332(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23332);
	// lwz r27,-23332(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23332);
	// lwz r27,-23332(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23332);
	// lwz r27,-23324(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23324);
	// lwz r27,-23316(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23316);
	// lwz r27,-23316(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23316);
	// lwz r27,-23316(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23316);
	// lwz r27,-23316(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23316);
	// lwz r27,-23268(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23268);
	// lwz r27,-23268(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23268);
	// lwz r27,-23268(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23268);
	// lwz r27,-23268(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23268);
	// lwz r27,-23260(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23260);
	// lwz r27,-23252(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23252);
loc_837DA484:
	// lbz r11,11289(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 11289);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// blt cr6,0x837da4ac
	if (cr6.lt) goto loc_837DA4AC;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x837da4ac
	if (cr6.gt) goto loc_837DA4AC;
	// li r11,522
	ctx.r11.s64 = 522;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x835977d8
	ctx.lr = 0x837DA4AC;
	sub_835977D8(ctx, base);
loc_837DA4AC:
	// lbz r11,11289(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 11289);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// blt cr6,0x837da4d4
	if (cr6.lt) goto loc_837DA4D4;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgt cr6,0x837da4d4
	if (cr6.gt) goto loc_837DA4D4;
	// li r11,521
	ctx.r11.s64 = 521;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x835977d8
	ctx.lr = 0x837DA4D4;
	sub_835977D8(ctx, base);
loc_837DA4D4:
	// li r11,520
	ctx.r11.s64 = 520;
	// b 0x837da59c
	goto loc_837DA59C;
loc_837DA4DC:
	// li r11,523
	ctx.r11.s64 = 523;
	// b 0x837da59c
	goto loc_837DA59C;
loc_837DA4E4:
	// li r11,524
	ctx.r11.s64 = 524;
	// b 0x837da59c
	goto loc_837DA59C;
loc_837DA4EC:
	// li r11,530
	ctx.r11.s64 = 530;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x835977d8
	ctx.lr = 0x837DA500;
	sub_835977D8(ctx, base);
	// li r10,525
	ctx.r10.s64 = 525;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x835977d8
	ctx.lr = 0x837DA514;
	sub_835977D8(ctx, base);
	// li r11,512
	ctx.r11.s64 = 512;
	// b 0x837db7e4
	goto loc_837DB7E4;
loc_837DA51C:
	// li r11,527
	ctx.r11.s64 = 527;
	// b 0x837da59c
	goto loc_837DA59C;
loc_837DA524:
	// li r11,528
	ctx.r11.s64 = 528;
	// b 0x837da59c
	goto loc_837DA59C;
loc_837DA52C:
	// li r11,526
	ctx.r11.s64 = 526;
	// b 0x837da59c
	goto loc_837DA59C;
loc_837DA534:
	// li r11,519
	ctx.r11.s64 = 519;
	// b 0x837da59c
	goto loc_837DA59C;
loc_837DA53C:
	// cmpwi cr6,r11,144
	cr6.compare<int32_t>(ctx.r11.s32, 144, xer);
	// bgt cr6,0x837da580
	if (cr6.gt) goto loc_837DA580;
	// beq cr6,0x837da578
	if (cr6.eq) goto loc_837DA578;
	// cmpwi cr6,r11,121
	cr6.compare<int32_t>(ctx.r11.s32, 121, xer);
	// beq cr6,0x837da570
	if (cr6.eq) goto loc_837DA570;
	// cmpwi cr6,r11,136
	cr6.compare<int32_t>(ctx.r11.s32, 136, xer);
	// beq cr6,0x837da568
	if (cr6.eq) goto loc_837DA568;
	// cmpwi cr6,r11,140
	cr6.compare<int32_t>(ctx.r11.s32, 140, xer);
	// bne cr6,0x837da5ac
	if (!cr6.eq) goto loc_837DA5AC;
	// li r11,515
	ctx.r11.s64 = 515;
	// b 0x837da59c
	goto loc_837DA59C;
loc_837DA568:
	// li r11,514
	ctx.r11.s64 = 514;
	// b 0x837da59c
	goto loc_837DA59C;
loc_837DA570:
	// li r11,513
	ctx.r11.s64 = 513;
	// b 0x837da59c
	goto loc_837DA59C;
loc_837DA578:
	// li r11,516
	ctx.r11.s64 = 516;
	// b 0x837da59c
	goto loc_837DA59C;
loc_837DA580:
	// cmpwi cr6,r11,145
	cr6.compare<int32_t>(ctx.r11.s32, 145, xer);
	// beq cr6,0x837da598
	if (cr6.eq) goto loc_837DA598;
	// cmpwi cr6,r11,153
	cr6.compare<int32_t>(ctx.r11.s32, 153, xer);
	// bne cr6,0x837da5ac
	if (!cr6.eq) goto loc_837DA5AC;
	// li r11,518
	ctx.r11.s64 = 518;
	// b 0x837da59c
	goto loc_837DA59C;
loc_837DA598:
	// li r11,517
	ctx.r11.s64 = 517;
loc_837DA59C:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x835977d8
	ctx.lr = 0x837DA5AC;
	sub_835977D8(ctx, base);
loc_837DA5AC:
	// li r11,512
	ctx.r11.s64 = 512;
	// b 0x837db7e4
	goto loc_837DB7E4;
loc_837DA5B4:
	// lwz r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,59
	cr6.compare<uint32_t>(ctx.r11.u32, 59, xer);
	// bgt cr6,0x837da8b8
	if (cr6.gt) goto loc_837DA8B8;
	// lis r12,-31874
	ctx.r12.s64 = -2088894464;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-23076
	ctx.r12.s64 = ctx.r12.s64 + -23076;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_837DA6CC;
	case 1:
		goto loc_837DA6D4;
	case 2:
		goto loc_837DA6DC;
	case 3:
		goto loc_837DA6E4;
	case 4:
		goto loc_837DA6EC;
	case 5:
		goto loc_837DA6F4;
	case 6:
		goto loc_837DA6FC;
	case 7:
		goto loc_837DA704;
	case 8:
		goto loc_837DA70C;
	case 9:
		goto loc_837DA714;
	case 10:
		goto loc_837DA71C;
	case 11:
		goto loc_837DA724;
	case 12:
		goto loc_837DA72C;
	case 13:
		goto loc_837DA734;
	case 14:
		goto loc_837DA73C;
	case 15:
		goto loc_837DA744;
	case 16:
		goto loc_837DA74C;
	case 17:
		goto loc_837DA754;
	case 18:
		goto loc_837DA75C;
	case 19:
		goto loc_837DA764;
	case 20:
		goto loc_837DA76C;
	case 21:
		goto loc_837DA774;
	case 22:
		goto loc_837DA77C;
	case 23:
		goto loc_837DA784;
	case 24:
		goto loc_837DA78C;
	case 25:
		goto loc_837DA794;
	case 26:
		goto loc_837DA79C;
	case 27:
		goto loc_837DA7A4;
	case 28:
		goto loc_837DA7AC;
	case 29:
		goto loc_837DA7B4;
	case 30:
		goto loc_837DA7BC;
	case 31:
		goto loc_837DA7C4;
	case 32:
		goto loc_837DA7CC;
	case 33:
		goto loc_837DA7D4;
	case 34:
		goto loc_837DA7DC;
	case 35:
		goto loc_837DA7E4;
	case 36:
		goto loc_837DA7EC;
	case 37:
		goto loc_837DA7F4;
	case 38:
		goto loc_837DA7FC;
	case 39:
		goto loc_837DA804;
	case 40:
		goto loc_837DA80C;
	case 41:
		goto loc_837DA814;
	case 42:
		goto loc_837DA81C;
	case 43:
		goto loc_837DA824;
	case 44:
		goto loc_837DA82C;
	case 45:
		goto loc_837DA834;
	case 46:
		goto loc_837DA83C;
	case 47:
		goto loc_837DA844;
	case 48:
		goto loc_837DA84C;
	case 49:
		goto loc_837DA854;
	case 50:
		goto loc_837DA85C;
	case 51:
		goto loc_837DA864;
	case 52:
		goto loc_837DA86C;
	case 53:
		goto loc_837DA874;
	case 54:
		goto loc_837DA87C;
	case 55:
		goto loc_837DA884;
	case 56:
		goto loc_837DA88C;
	case 57:
		goto loc_837DA894;
	case 58:
		goto loc_837DA89C;
	case 59:
		goto loc_837DA8A4;
	default:
		return;
	}
	// lwz r27,-22836(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -22836);
	// lwz r27,-22828(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -22828);
	// lwz r27,-22820(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -22820);
	// lwz r27,-22812(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -22812);
	// lwz r27,-22804(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -22804);
	// lwz r27,-22796(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -22796);
	// lwz r27,-22788(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -22788);
	// lwz r27,-22780(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -22780);
	// lwz r27,-22772(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -22772);
	// lwz r27,-22764(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -22764);
	// lwz r27,-22756(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -22756);
	// lwz r27,-22748(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -22748);
	// lwz r27,-22740(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -22740);
	// lwz r27,-22732(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -22732);
	// lwz r27,-22724(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -22724);
	// lwz r27,-22716(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -22716);
	// lwz r27,-22708(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -22708);
	// lwz r27,-22700(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -22700);
	// lwz r27,-22692(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -22692);
	// lwz r27,-22684(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -22684);
	// lwz r27,-22676(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -22676);
	// lwz r27,-22668(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -22668);
	// lwz r27,-22660(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -22660);
	// lwz r27,-22652(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -22652);
	// lwz r27,-22644(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -22644);
	// lwz r27,-22636(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -22636);
	// lwz r27,-22628(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -22628);
	// lwz r27,-22620(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -22620);
	// lwz r27,-22612(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -22612);
	// lwz r27,-22604(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -22604);
	// lwz r27,-22596(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -22596);
	// lwz r27,-22588(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -22588);
	// lwz r27,-22580(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -22580);
	// lwz r27,-22572(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -22572);
	// lwz r27,-22564(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -22564);
	// lwz r27,-22556(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -22556);
	// lwz r27,-22548(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -22548);
	// lwz r27,-22540(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -22540);
	// lwz r27,-22532(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -22532);
	// lwz r27,-22524(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -22524);
	// lwz r27,-22516(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -22516);
	// lwz r27,-22508(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -22508);
	// lwz r27,-22500(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -22500);
	// lwz r27,-22492(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -22492);
	// lwz r27,-22484(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -22484);
	// lwz r27,-22476(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -22476);
	// lwz r27,-22468(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -22468);
	// lwz r27,-22460(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -22460);
	// lwz r27,-22452(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -22452);
	// lwz r27,-22444(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -22444);
	// lwz r27,-22436(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -22436);
	// lwz r27,-22428(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -22428);
	// lwz r27,-22420(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -22420);
	// lwz r27,-22412(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -22412);
	// lwz r27,-22404(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -22404);
	// lwz r27,-22396(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -22396);
	// lwz r27,-22388(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -22388);
	// lwz r27,-22380(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -22380);
	// lwz r27,-22372(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -22372);
	// lwz r27,-22364(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -22364);
loc_837DA6CC:
	// li r11,257
	ctx.r11.s64 = 257;
	// b 0x837da8a8
	goto loc_837DA8A8;
loc_837DA6D4:
	// li r11,258
	ctx.r11.s64 = 258;
	// b 0x837da8a8
	goto loc_837DA8A8;
loc_837DA6DC:
	// li r11,259
	ctx.r11.s64 = 259;
	// b 0x837da8a8
	goto loc_837DA8A8;
loc_837DA6E4:
	// li r11,260
	ctx.r11.s64 = 260;
	// b 0x837da8a8
	goto loc_837DA8A8;
loc_837DA6EC:
	// li r11,261
	ctx.r11.s64 = 261;
	// b 0x837da8a8
	goto loc_837DA8A8;
loc_837DA6F4:
	// li r11,262
	ctx.r11.s64 = 262;
	// b 0x837da8a8
	goto loc_837DA8A8;
loc_837DA6FC:
	// li r11,263
	ctx.r11.s64 = 263;
	// b 0x837da8a8
	goto loc_837DA8A8;
loc_837DA704:
	// li r11,264
	ctx.r11.s64 = 264;
	// b 0x837da8a8
	goto loc_837DA8A8;
loc_837DA70C:
	// li r11,265
	ctx.r11.s64 = 265;
	// b 0x837da8a8
	goto loc_837DA8A8;
loc_837DA714:
	// li r11,266
	ctx.r11.s64 = 266;
	// b 0x837da8a8
	goto loc_837DA8A8;
loc_837DA71C:
	// li r11,267
	ctx.r11.s64 = 267;
	// b 0x837da8a8
	goto loc_837DA8A8;
loc_837DA724:
	// li r11,268
	ctx.r11.s64 = 268;
	// b 0x837da8a8
	goto loc_837DA8A8;
loc_837DA72C:
	// li r11,269
	ctx.r11.s64 = 269;
	// b 0x837da8a8
	goto loc_837DA8A8;
loc_837DA734:
	// li r11,270
	ctx.r11.s64 = 270;
	// b 0x837da8a8
	goto loc_837DA8A8;
loc_837DA73C:
	// li r11,271
	ctx.r11.s64 = 271;
	// b 0x837da8a8
	goto loc_837DA8A8;
loc_837DA744:
	// li r11,272
	ctx.r11.s64 = 272;
	// b 0x837da8a8
	goto loc_837DA8A8;
loc_837DA74C:
	// li r11,273
	ctx.r11.s64 = 273;
	// b 0x837da8a8
	goto loc_837DA8A8;
loc_837DA754:
	// li r11,274
	ctx.r11.s64 = 274;
	// b 0x837da8a8
	goto loc_837DA8A8;
loc_837DA75C:
	// li r11,275
	ctx.r11.s64 = 275;
	// b 0x837da8a8
	goto loc_837DA8A8;
loc_837DA764:
	// li r11,276
	ctx.r11.s64 = 276;
	// b 0x837da8a8
	goto loc_837DA8A8;
loc_837DA76C:
	// li r11,277
	ctx.r11.s64 = 277;
	// b 0x837da8a8
	goto loc_837DA8A8;
loc_837DA774:
	// li r11,278
	ctx.r11.s64 = 278;
	// b 0x837da8a8
	goto loc_837DA8A8;
loc_837DA77C:
	// li r11,279
	ctx.r11.s64 = 279;
	// b 0x837da8a8
	goto loc_837DA8A8;
loc_837DA784:
	// li r11,280
	ctx.r11.s64 = 280;
	// b 0x837da8a8
	goto loc_837DA8A8;
loc_837DA78C:
	// li r11,281
	ctx.r11.s64 = 281;
	// b 0x837da8a8
	goto loc_837DA8A8;
loc_837DA794:
	// li r11,282
	ctx.r11.s64 = 282;
	// b 0x837da8a8
	goto loc_837DA8A8;
loc_837DA79C:
	// li r11,283
	ctx.r11.s64 = 283;
	// b 0x837da8a8
	goto loc_837DA8A8;
loc_837DA7A4:
	// li r11,284
	ctx.r11.s64 = 284;
	// b 0x837da8a8
	goto loc_837DA8A8;
loc_837DA7AC:
	// li r11,285
	ctx.r11.s64 = 285;
	// b 0x837da8a8
	goto loc_837DA8A8;
loc_837DA7B4:
	// li r11,286
	ctx.r11.s64 = 286;
	// b 0x837da8a8
	goto loc_837DA8A8;
loc_837DA7BC:
	// li r11,287
	ctx.r11.s64 = 287;
	// b 0x837da8a8
	goto loc_837DA8A8;
loc_837DA7C4:
	// li r11,288
	ctx.r11.s64 = 288;
	// b 0x837da8a8
	goto loc_837DA8A8;
loc_837DA7CC:
	// li r11,289
	ctx.r11.s64 = 289;
	// b 0x837da8a8
	goto loc_837DA8A8;
loc_837DA7D4:
	// li r11,290
	ctx.r11.s64 = 290;
	// b 0x837da8a8
	goto loc_837DA8A8;
loc_837DA7DC:
	// li r11,291
	ctx.r11.s64 = 291;
	// b 0x837da8a8
	goto loc_837DA8A8;
loc_837DA7E4:
	// li r11,292
	ctx.r11.s64 = 292;
	// b 0x837da8a8
	goto loc_837DA8A8;
loc_837DA7EC:
	// li r11,293
	ctx.r11.s64 = 293;
	// b 0x837da8a8
	goto loc_837DA8A8;
loc_837DA7F4:
	// li r11,294
	ctx.r11.s64 = 294;
	// b 0x837da8a8
	goto loc_837DA8A8;
loc_837DA7FC:
	// li r11,295
	ctx.r11.s64 = 295;
	// b 0x837da8a8
	goto loc_837DA8A8;
loc_837DA804:
	// li r11,296
	ctx.r11.s64 = 296;
	// b 0x837da8a8
	goto loc_837DA8A8;
loc_837DA80C:
	// li r11,297
	ctx.r11.s64 = 297;
	// b 0x837da8a8
	goto loc_837DA8A8;
loc_837DA814:
	// li r11,298
	ctx.r11.s64 = 298;
	// b 0x837da8a8
	goto loc_837DA8A8;
loc_837DA81C:
	// li r11,299
	ctx.r11.s64 = 299;
	// b 0x837da8a8
	goto loc_837DA8A8;
loc_837DA824:
	// li r11,300
	ctx.r11.s64 = 300;
	// b 0x837da8a8
	goto loc_837DA8A8;
loc_837DA82C:
	// li r11,301
	ctx.r11.s64 = 301;
	// b 0x837da8a8
	goto loc_837DA8A8;
loc_837DA834:
	// li r11,302
	ctx.r11.s64 = 302;
	// b 0x837da8a8
	goto loc_837DA8A8;
loc_837DA83C:
	// li r11,303
	ctx.r11.s64 = 303;
	// b 0x837da8a8
	goto loc_837DA8A8;
loc_837DA844:
	// li r11,304
	ctx.r11.s64 = 304;
	// b 0x837da8a8
	goto loc_837DA8A8;
loc_837DA84C:
	// li r11,305
	ctx.r11.s64 = 305;
	// b 0x837da8a8
	goto loc_837DA8A8;
loc_837DA854:
	// li r11,306
	ctx.r11.s64 = 306;
	// b 0x837da8a8
	goto loc_837DA8A8;
loc_837DA85C:
	// li r11,307
	ctx.r11.s64 = 307;
	// b 0x837da8a8
	goto loc_837DA8A8;
loc_837DA864:
	// li r11,308
	ctx.r11.s64 = 308;
	// b 0x837da8a8
	goto loc_837DA8A8;
loc_837DA86C:
	// li r11,309
	ctx.r11.s64 = 309;
	// b 0x837da8a8
	goto loc_837DA8A8;
loc_837DA874:
	// li r11,310
	ctx.r11.s64 = 310;
	// b 0x837da8a8
	goto loc_837DA8A8;
loc_837DA87C:
	// li r11,311
	ctx.r11.s64 = 311;
	// b 0x837da8a8
	goto loc_837DA8A8;
loc_837DA884:
	// li r11,312
	ctx.r11.s64 = 312;
	// b 0x837da8a8
	goto loc_837DA8A8;
loc_837DA88C:
	// li r11,313
	ctx.r11.s64 = 313;
	// b 0x837da8a8
	goto loc_837DA8A8;
loc_837DA894:
	// li r11,314
	ctx.r11.s64 = 314;
	// b 0x837da8a8
	goto loc_837DA8A8;
loc_837DA89C:
	// li r11,315
	ctx.r11.s64 = 315;
	// b 0x837da8a8
	goto loc_837DA8A8;
loc_837DA8A4:
	// li r11,316
	ctx.r11.s64 = 316;
loc_837DA8A8:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x835977d8
	ctx.lr = 0x837DA8B8;
	sub_835977D8(ctx, base);
loc_837DA8B8:
	// li r11,256
	ctx.r11.s64 = 256;
	// b 0x837db7e4
	goto loc_837DB7E4;
loc_837DA8C0:
	// lwz r11,5716(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5716);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// lwz r11,11248(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11248);
	// bne cr6,0x837da908
	if (!cr6.eq) goto loc_837DA908;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bne cr6,0x837da8f4
	if (!cr6.eq) goto loc_837DA8F4;
	// li r11,769
	ctx.r11.s64 = 769;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x835977d8
	ctx.lr = 0x837DA8EC;
	sub_835977D8(ctx, base);
	// li r11,768
	ctx.r11.s64 = 768;
	// b 0x837db7e4
	goto loc_837DB7E4;
loc_837DA8F4:
	// li r11,770
	ctx.r11.s64 = 770;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x835977d8
	ctx.lr = 0x837DA900;
	sub_835977D8(ctx, base);
	// li r11,768
	ctx.r11.s64 = 768;
	// b 0x837db7e4
	goto loc_837DB7E4;
loc_837DA908:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x837da924
	if (!cr6.eq) goto loc_837DA924;
	// li r11,771
	ctx.r11.s64 = 771;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x835977d8
	ctx.lr = 0x837DA924;
	sub_835977D8(ctx, base);
loc_837DA924:
	// li r11,768
	ctx.r11.s64 = 768;
	// b 0x837db7e4
	goto loc_837DB7E4;
loc_837DA92C:
	// cmplwi cr6,r11,1024
	cr6.compare<uint32_t>(ctx.r11.u32, 1024, xer);
	// bne cr6,0x837db7f4
	if (!cr6.eq) goto loc_837DB7F4;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x837da200
	ctx.lr = 0x837DA944;
	sub_837DA200(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_837DA94C:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x837da200
	ctx.lr = 0x837DA95C;
	sub_837DA200(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_837DA964:
	// cmplwi cr6,r11,1536
	cr6.compare<uint32_t>(ctx.r11.u32, 1536, xer);
	// beq cr6,0x837daa1c
	if (cr6.eq) goto loc_837DAA1C;
	// cmplwi cr6,r11,1792
	cr6.compare<uint32_t>(ctx.r11.u32, 1792, xer);
	// beq cr6,0x837da9cc
	if (cr6.eq) goto loc_837DA9CC;
	// cmplwi cr6,r11,2048
	cr6.compare<uint32_t>(ctx.r11.u32, 2048, xer);
	// bne cr6,0x837db7f4
	if (!cr6.eq) goto loc_837DB7F4;
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837db7f4
	if (!cr6.eq) goto loc_837DB7F4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,11352(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 11352);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lfs f0,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x837da9b8
	if (cr6.lt) goto loc_837DA9B8;
	// li r11,2048
	ctx.r11.s64 = 2048;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x835977d8
	ctx.lr = 0x837DA9B0;
	sub_835977D8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_837DA9B8:
	// li r11,2049
	ctx.r11.s64 = 2049;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x835977d8
	ctx.lr = 0x837DA9C4;
	sub_835977D8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_837DA9CC:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837db7f4
	if (!cr6.eq) goto loc_837DB7F4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,11344(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 11344);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lfs f0,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x837daa08
	if (cr6.lt) goto loc_837DAA08;
	// li r11,1793
	ctx.r11.s64 = 1793;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x835977d8
	ctx.lr = 0x837DAA00;
	sub_835977D8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_837DAA08:
	// li r11,1792
	ctx.r11.s64 = 1792;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x835977d8
	ctx.lr = 0x837DAA14;
	sub_835977D8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_837DAA1C:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837db7f4
	if (!cr6.eq) goto loc_837DB7F4;
	// lwz r11,11340(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11340);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x837daa70
	if (!cr6.eq) goto loc_837DAA70;
	// lwz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x837daa5c
	if (!cr6.eq) goto loc_837DAA5C;
	// li r11,1537
	ctx.r11.s64 = 1537;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x835977d8
	ctx.lr = 0x837DAA54;
	sub_835977D8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_837DAA5C:
	// li r11,1538
	ctx.r11.s64 = 1538;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x835977d8
	ctx.lr = 0x837DAA68;
	sub_835977D8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_837DAA70:
	// li r11,1536
	ctx.r11.s64 = 1536;
	// b 0x837db7e4
	goto loc_837DB7E4;
loc_837DAA78:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837db7f4
	if (!cr6.eq) goto loc_837DB7F4;
	// lwz r11,11328(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11328);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x837daaa0
	if (cr6.eq) goto loc_837DAAA0;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x837daaa0
	if (cr6.eq) goto loc_837DAAA0;
	// li r11,2305
	ctx.r11.s64 = 2305;
	// b 0x837db7e4
	goto loc_837DB7E4;
loc_837DAAA0:
	// li r11,2304
	ctx.r11.s64 = 2304;
	// b 0x837db7e4
	goto loc_837DB7E4;
loc_837DAAA8:
	// cmplwi cr6,r11,3584
	cr6.compare<uint32_t>(ctx.r11.u32, 3584, xer);
	// bgt cr6,0x837dacac
	if (cr6.gt) goto loc_837DACAC;
	// beq cr6,0x837dac24
	if (cr6.eq) goto loc_837DAC24;
	// cmplwi cr6,r11,3072
	cr6.compare<uint32_t>(ctx.r11.u32, 3072, xer);
	// bgt cr6,0x837dabbc
	if (cr6.gt) goto loc_837DABBC;
	// beq cr6,0x837dab54
	if (cr6.eq) goto loc_837DAB54;
	// cmplwi cr6,r11,2560
	cr6.compare<uint32_t>(ctx.r11.u32, 2560, xer);
	// beq cr6,0x837dab0c
	if (cr6.eq) goto loc_837DAB0C;
	// cmplwi cr6,r11,2816
	cr6.compare<uint32_t>(ctx.r11.u32, 2816, xer);
	// bne cr6,0x837db7f4
	if (!cr6.eq) goto loc_837DB7F4;
	// lwz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x837daaf8
	if (!cr6.eq) goto loc_837DAAF8;
	// li r11,2816
	ctx.r11.s64 = 2816;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x835977d8
	ctx.lr = 0x837DAAF0;
	sub_835977D8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_837DAAF8:
	// li r11,2817
	ctx.r11.s64 = 2817;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x835977d8
	ctx.lr = 0x837DAB04;
	sub_835977D8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_837DAB0C:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837db7f4
	if (!cr6.eq) goto loc_837DB7F4;
	// lwz r11,11340(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11340);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x837dab4c
	if (!cr6.eq) goto loc_837DAB4C;
	// lwz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x837dab44
	if (cr6.eq) goto loc_837DAB44;
	// li r11,2562
	ctx.r11.s64 = 2562;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x835977d8
	ctx.lr = 0x837DAB44;
	sub_835977D8(ctx, base);
loc_837DAB44:
	// li r11,2561
	ctx.r11.s64 = 2561;
	// b 0x837db7e4
	goto loc_837DB7E4;
loc_837DAB4C:
	// li r11,2560
	ctx.r11.s64 = 2560;
	// b 0x837db7e4
	goto loc_837DB7E4;
loc_837DAB54:
	// lbz r11,11332(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 11332);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lbz r11,11333(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 11333);
	// beq cr6,0x837dab9c
	if (cr6.eq) goto loc_837DAB9C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837dab88
	if (cr6.eq) goto loc_837DAB88;
	// li r11,3073
	ctx.r11.s64 = 3073;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x835977d8
	ctx.lr = 0x837DAB80;
	sub_835977D8(ctx, base);
	// li r11,3076
	ctx.r11.s64 = 3076;
	// b 0x837db7e4
	goto loc_837DB7E4;
loc_837DAB88:
	// li r11,3074
	ctx.r11.s64 = 3074;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x835977d8
	ctx.lr = 0x837DAB94;
	sub_835977D8(ctx, base);
	// li r11,3076
	ctx.r11.s64 = 3076;
	// b 0x837db7e4
	goto loc_837DB7E4;
loc_837DAB9C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,3075
	ctx.r11.s64 = 3075;
	// bne cr6,0x837dabac
	if (!cr6.eq) goto loc_837DABAC;
	// li r11,3072
	ctx.r11.s64 = 3072;
loc_837DABAC:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x835977d8
	ctx.lr = 0x837DABB4;
	sub_835977D8(ctx, base);
	// li r11,3076
	ctx.r11.s64 = 3076;
	// b 0x837db7e4
	goto loc_837DB7E4;
loc_837DABBC:
	// cmplwi cr6,r11,3328
	cr6.compare<uint32_t>(ctx.r11.u32, 3328, xer);
	// bne cr6,0x837db7f4
	if (!cr6.eq) goto loc_837DB7F4;
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837db7f4
	if (!cr6.eq) goto loc_837DB7F4;
	// cmplwi cr6,r27,11
	cr6.compare<uint32_t>(ctx.r27.u32, 11, xer);
	// bge cr6,0x837dabe8
	if (!cr6.lt) goto loc_837DABE8;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,-6912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6912);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_837DABE8:
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// beq cr6,0x837dac10
	if (cr6.eq) goto loc_837DAC10;
	// li r11,3328
	ctx.r11.s64 = 3328;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x835977d8
	ctx.lr = 0x837DAC08;
	sub_835977D8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_837DAC10:
	// li r11,3329
	ctx.r11.s64 = 3329;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x835977d8
	ctx.lr = 0x837DAC1C;
	sub_835977D8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_837DAC24:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837db7f4
	if (!cr6.eq) goto loc_837DB7F4;
	// cmplwi cr6,r27,11
	cr6.compare<uint32_t>(ctx.r27.u32, 11, xer);
	// bge cr6,0x837dac48
	if (!cr6.lt) goto loc_837DAC48;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,-6912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6912);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_837DAC48:
	// lis r10,-21846
	ctx.r10.s64 = -1431699456;
	// ori r9,r10,43691
	ctx.r9.u64 = ctx.r10.u64 | 43691;
	// mulhwu r8,r11,r9
	ctx.r8.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r9.u32)) >> 32;
	// rlwinm r10,r8,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x837daca4
	if (cr6.eq) goto loc_837DACA4;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// beq cr6,0x837dac90
	if (cr6.eq) goto loc_837DAC90;
	// li r11,3584
	ctx.r11.s64 = 3584;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x835977d8
	ctx.lr = 0x837DAC88;
	sub_835977D8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_837DAC90:
	// li r11,3586
	ctx.r11.s64 = 3586;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x835977d8
	ctx.lr = 0x837DAC9C;
	sub_835977D8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_837DACA4:
	// li r11,3585
	ctx.r11.s64 = 3585;
	// b 0x837db7e4
	goto loc_837DB7E4;
loc_837DACAC:
	// cmplwi cr6,r11,3840
	cr6.compare<uint32_t>(ctx.r11.u32, 3840, xer);
	// beq cr6,0x837dad3c
	if (cr6.eq) goto loc_837DAD3C;
	// cmplwi cr6,r11,4096
	cr6.compare<uint32_t>(ctx.r11.u32, 4096, xer);
	// beq cr6,0x837dad00
	if (cr6.eq) goto loc_837DAD00;
	// cmplwi cr6,r11,4352
	cr6.compare<uint32_t>(ctx.r11.u32, 4352, xer);
	// bne cr6,0x837db7f4
	if (!cr6.eq) goto loc_837DB7F4;
	// lbz r11,262(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 262);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837dacec
	if (!cr6.eq) goto loc_837DACEC;
	// li r11,4353
	ctx.r11.s64 = 4353;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x835977d8
	ctx.lr = 0x837DACE4;
	sub_835977D8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_837DACEC:
	// li r11,4352
	ctx.r11.s64 = 4352;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x835977d8
	ctx.lr = 0x837DACF8;
	sub_835977D8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_837DAD00:
	// lbz r11,11336(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 11336);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837dad28
	if (cr6.eq) goto loc_837DAD28;
	// li r11,4097
	ctx.r11.s64 = 4097;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x835977d8
	ctx.lr = 0x837DAD20;
	sub_835977D8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_837DAD28:
	// li r11,4096
	ctx.r11.s64 = 4096;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x835977d8
	ctx.lr = 0x837DAD34;
	sub_835977D8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_837DAD3C:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837db7f4
	if (!cr6.eq) goto loc_837DB7F4;
	// cmplwi cr6,r27,11
	cr6.compare<uint32_t>(ctx.r27.u32, 11, xer);
	// bge cr6,0x837dad60
	if (!cr6.lt) goto loc_837DAD60;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,-6912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6912);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_837DAD60:
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x837dadb4
	if (cr6.eq) goto loc_837DADB4;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x837dadac
	if (cr6.eq) goto loc_837DADAC;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// beq cr6,0x837dad98
	if (cr6.eq) goto loc_837DAD98;
	// li r11,3840
	ctx.r11.s64 = 3840;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x835977d8
	ctx.lr = 0x837DAD90;
	sub_835977D8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_837DAD98:
	// li r11,3843
	ctx.r11.s64 = 3843;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x835977d8
	ctx.lr = 0x837DADA4;
	sub_835977D8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_837DADAC:
	// li r11,3842
	ctx.r11.s64 = 3842;
	// b 0x837db7e4
	goto loc_837DB7E4;
loc_837DADB4:
	// li r11,3841
	ctx.r11.s64 = 3841;
	// b 0x837db7e4
	goto loc_837DB7E4;
loc_837DADBC:
	// lwz r11,60(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x837dade4
	if (!cr6.eq) goto loc_837DADE4;
	// li r11,4608
	ctx.r11.s64 = 4608;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x835977d8
	ctx.lr = 0x837DADDC;
	sub_835977D8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_837DADE4:
	// li r11,4609
	ctx.r11.s64 = 4609;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x835977d8
	ctx.lr = 0x837DADF0;
	sub_835977D8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_837DADF8:
	// cmplwi cr6,r11,6912
	cr6.compare<uint32_t>(ctx.r11.u32, 6912, xer);
	// bgt cr6,0x837db274
	if (cr6.gt) goto loc_837DB274;
	// beq cr6,0x837db1c0
	if (cr6.eq) goto loc_837DB1C0;
	// cmplwi cr6,r11,5888
	cr6.compare<uint32_t>(ctx.r11.u32, 5888, xer);
	// bgt cr6,0x837db014
	if (cr6.gt) goto loc_837DB014;
	// beq cr6,0x837dafcc
	if (cr6.eq) goto loc_837DAFCC;
	// cmplwi cr6,r11,5376
	cr6.compare<uint32_t>(ctx.r11.u32, 5376, xer);
	// bgt cr6,0x837daf30
	if (cr6.gt) goto loc_837DAF30;
	// beq cr6,0x837daebc
	if (cr6.eq) goto loc_837DAEBC;
	// cmplwi cr6,r11,4864
	cr6.compare<uint32_t>(ctx.r11.u32, 4864, xer);
	// beq cr6,0x837dae80
	if (cr6.eq) goto loc_837DAE80;
	// cmplwi cr6,r11,5120
	cr6.compare<uint32_t>(ctx.r11.u32, 5120, xer);
	// bne cr6,0x837db7f4
	if (!cr6.eq) goto loc_837DB7F4;
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837db7f4
	if (!cr6.eq) goto loc_837DB7F4;
	// lwz r11,11340(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11340);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mulli r11,r11,5532
	ctx.r11.s64 = ctx.r11.s64 * 5532;
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r9,262(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 262);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x837dae6c
	if (!cr6.eq) goto loc_837DAE6C;
	// li r11,5121
	ctx.r11.s64 = 5121;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x835977d8
	ctx.lr = 0x837DAE64;
	sub_835977D8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_837DAE6C:
	// li r11,5120
	ctx.r11.s64 = 5120;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x835977d8
	ctx.lr = 0x837DAE78;
	sub_835977D8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_837DAE80:
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x837daea8
	if (!cr6.eq) goto loc_837DAEA8;
	// li r11,4864
	ctx.r11.s64 = 4864;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x835977d8
	ctx.lr = 0x837DAEA0;
	sub_835977D8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_837DAEA8:
	// li r11,4865
	ctx.r11.s64 = 4865;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x835977d8
	ctx.lr = 0x837DAEB4;
	sub_835977D8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_837DAEBC:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837db7f4
	if (!cr6.eq) goto loc_837DB7F4;
	// lwz r11,11340(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11340);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x837daee4
	if (cr6.eq) goto loc_837DAEE4;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x837daee4
	if (cr6.eq) goto loc_837DAEE4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x837daeec
	goto loc_837DAEEC;
loc_837DAEE4:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_837DAEEC:
	// mulli r11,r11,5532
	ctx.r11.s64 = ctx.r11.s64 * 5532;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lbz r10,262(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 262);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837daf1c
	if (!cr6.eq) goto loc_837DAF1C;
	// li r11,5377
	ctx.r11.s64 = 5377;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x835977d8
	ctx.lr = 0x837DAF14;
	sub_835977D8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_837DAF1C:
	// li r11,5376
	ctx.r11.s64 = 5376;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x835977d8
	ctx.lr = 0x837DAF28;
	sub_835977D8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_837DAF30:
	// cmplwi cr6,r11,5632
	cr6.compare<uint32_t>(ctx.r11.u32, 5632, xer);
	// bne cr6,0x837db7f4
	if (!cr6.eq) goto loc_837DB7F4;
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837db7f4
	if (!cr6.eq) goto loc_837DB7F4;
	// cmplwi cr6,r27,11
	cr6.compare<uint32_t>(ctx.r27.u32, 11, xer);
	// bge cr6,0x837daf5c
	if (!cr6.lt) goto loc_837DAF5C;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,-6912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6912);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_837DAF5C:
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgt cr6,0x837dafc4
	if (cr6.gt) goto loc_837DAFC4;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x837daf94
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837DAF94;
	// bdzf 4*cr6+eq,0x837daf9c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837DAF9C;
	// bdzf 4*cr6+eq,0x837dafa4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837DAFA4;
	// bdzf 4*cr6+eq,0x837dafac
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837DAFAC;
	// bdzf 4*cr6+eq,0x837dafb4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837DAFB4;
	// bne cr6,0x837dafbc
	if (!cr6.eq) goto loc_837DAFBC;
	// li r11,5633
	ctx.r11.s64 = 5633;
	// b 0x837db7e4
	goto loc_837DB7E4;
loc_837DAF94:
	// li r11,5634
	ctx.r11.s64 = 5634;
	// b 0x837db7e4
	goto loc_837DB7E4;
loc_837DAF9C:
	// li r11,5635
	ctx.r11.s64 = 5635;
	// b 0x837db7e4
	goto loc_837DB7E4;
loc_837DAFA4:
	// li r11,5636
	ctx.r11.s64 = 5636;
	// b 0x837db7e4
	goto loc_837DB7E4;
loc_837DAFAC:
	// li r11,5637
	ctx.r11.s64 = 5637;
	// b 0x837db7e4
	goto loc_837DB7E4;
loc_837DAFB4:
	// li r11,5638
	ctx.r11.s64 = 5638;
	// b 0x837db7e4
	goto loc_837DB7E4;
loc_837DAFBC:
	// li r11,5639
	ctx.r11.s64 = 5639;
	// b 0x837db7e4
	goto loc_837DB7E4;
loc_837DAFC4:
	// li r11,5632
	ctx.r11.s64 = 5632;
	// b 0x837db7e4
	goto loc_837DB7E4;
loc_837DAFCC:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837db7f4
	if (!cr6.eq) goto loc_837DB7F4;
	// lwz r11,11356(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11356);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x837db000
	if (!cr6.eq) goto loc_837DB000;
	// li r11,5889
	ctx.r11.s64 = 5889;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x835977d8
	ctx.lr = 0x837DAFF8;
	sub_835977D8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_837DB000:
	// li r11,5888
	ctx.r11.s64 = 5888;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x835977d8
	ctx.lr = 0x837DB00C;
	sub_835977D8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_837DB014:
	// cmplwi cr6,r11,6144
	cr6.compare<uint32_t>(ctx.r11.u32, 6144, xer);
	// beq cr6,0x837db124
	if (cr6.eq) goto loc_837DB124;
	// cmplwi cr6,r11,6400
	cr6.compare<uint32_t>(ctx.r11.u32, 6400, xer);
	// beq cr6,0x837db0e0
	if (cr6.eq) goto loc_837DB0E0;
	// cmplwi cr6,r11,6656
	cr6.compare<uint32_t>(ctx.r11.u32, 6656, xer);
	// bne cr6,0x837db7f4
	if (!cr6.eq) goto loc_837DB7F4;
	// lbz r11,5714(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 5714);
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// ble cr6,0x837db04c
	if (!cr6.gt) goto loc_837DB04C;
	// li r11,6661
	ctx.r11.s64 = 6661;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x835977d8
	ctx.lr = 0x837DB04C;
	sub_835977D8(ctx, base);
loc_837DB04C:
	// lbz r11,5714(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 5714);
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// ble cr6,0x837db06c
	if (!cr6.gt) goto loc_837DB06C;
	// li r11,6660
	ctx.r11.s64 = 6660;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x835977d8
	ctx.lr = 0x837DB06C;
	sub_835977D8(ctx, base);
loc_837DB06C:
	// lbz r11,5714(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 5714);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// ble cr6,0x837db08c
	if (!cr6.gt) goto loc_837DB08C;
	// li r11,6659
	ctx.r11.s64 = 6659;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x835977d8
	ctx.lr = 0x837DB08C;
	sub_835977D8(ctx, base);
loc_837DB08C:
	// lbz r11,5714(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 5714);
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// ble cr6,0x837db0ac
	if (!cr6.gt) goto loc_837DB0AC;
	// li r11,6658
	ctx.r11.s64 = 6658;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x835977d8
	ctx.lr = 0x837DB0AC;
	sub_835977D8(ctx, base);
loc_837DB0AC:
	// lbz r11,5714(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 5714);
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// ble cr6,0x837db0cc
	if (!cr6.gt) goto loc_837DB0CC;
	// li r11,6657
	ctx.r11.s64 = 6657;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x835977d8
	ctx.lr = 0x837DB0CC;
	sub_835977D8(ctx, base);
loc_837DB0CC:
	// lbz r11,5714(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 5714);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// ble cr6,0x837db7f4
	if (!cr6.gt) goto loc_837DB7F4;
	// li r11,6656
	ctx.r11.s64 = 6656;
	// b 0x837db7e4
	goto loc_837DB7E4;
loc_837DB0E0:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837db7f4
	if (!cr6.eq) goto loc_837DB7F4;
	// lwz r11,11364(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11364);
	// li r4,100
	ctx.r4.s64 = 100;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x837db110
	if (!cr6.eq) goto loc_837DB110;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,-6896
	ctx.r3.s64 = ctx.r11.s64 + -6896;
	// bl 0x837f9710
	ctx.lr = 0x837DB108;
	sub_837F9710(ctx, base);
	// addi r11,r3,6400
	ctx.r11.s64 = ctx.r3.s64 + 6400;
	// b 0x837db7e4
	goto loc_837DB7E4;
loc_837DB110:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,-6864
	ctx.r3.s64 = ctx.r11.s64 + -6864;
	// bl 0x837f9710
	ctx.lr = 0x837DB11C;
	sub_837F9710(ctx, base);
	// addi r11,r3,6400
	ctx.r11.s64 = ctx.r3.s64 + 6400;
	// b 0x837db7e4
	goto loc_837DB7E4;
loc_837DB124:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837db7f4
	if (!cr6.eq) goto loc_837DB7F4;
	// lbz r11,11360(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 11360);
	// lwz r9,11356(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11356);
	// mulli r10,r11,172
	ctx.r10.s64 = ctx.r11.s64 * 172;
	// mulli r11,r9,5532
	ctx.r11.s64 = ctx.r9.s64 * 5532;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r8,200(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 200);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x837db15c
	if (cr6.eq) goto loc_837DB15C;
	// li r11,6144
	ctx.r11.s64 = 6144;
	// b 0x837db7e4
	goto loc_837DB7E4;
loc_837DB15C:
	// lbz r11,212(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 212);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bgt cr6,0x837db1a4
	if (cr6.gt) goto loc_837DB1A4;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x837db194
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837DB194;
	// bdzf 4*cr6+eq,0x837db194
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837DB194;
	// bdzf 4*cr6+eq,0x837db194
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837DB194;
	// bdzf 4*cr6+eq,0x837db194
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837DB194;
	// bdzf 4*cr6+eq,0x837db19c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837DB19C;
	// bdzf 4*cr6+eq,0x837db19c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837DB19C;
	// bdzf 4*cr6+eq,0x837db19c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837DB19C;
	// bne cr6,0x837db19c
	if (!cr6.eq) goto loc_837DB19C;
loc_837DB194:
	// li r11,6146
	ctx.r11.s64 = 6146;
	// b 0x837db1a8
	goto loc_837DB1A8;
loc_837DB19C:
	// li r11,6147
	ctx.r11.s64 = 6147;
	// b 0x837db1a8
	goto loc_837DB1A8;
loc_837DB1A4:
	// li r11,6145
	ctx.r11.s64 = 6145;
loc_837DB1A8:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x835977d8
	ctx.lr = 0x837DB1B8;
	sub_835977D8(ctx, base);
	// li r11,6148
	ctx.r11.s64 = 6148;
	// b 0x837db7e4
	goto loc_837DB7E4;
loc_837DB1C0:
	// lbz r11,11246(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 11246);
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// ble cr6,0x837db1e0
	if (!cr6.gt) goto loc_837DB1E0;
	// li r11,6917
	ctx.r11.s64 = 6917;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x835977d8
	ctx.lr = 0x837DB1E0;
	sub_835977D8(ctx, base);
loc_837DB1E0:
	// lbz r11,11246(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 11246);
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// ble cr6,0x837db200
	if (!cr6.gt) goto loc_837DB200;
	// li r11,6916
	ctx.r11.s64 = 6916;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x835977d8
	ctx.lr = 0x837DB200;
	sub_835977D8(ctx, base);
loc_837DB200:
	// lbz r11,11246(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 11246);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// ble cr6,0x837db220
	if (!cr6.gt) goto loc_837DB220;
	// li r11,6915
	ctx.r11.s64 = 6915;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x835977d8
	ctx.lr = 0x837DB220;
	sub_835977D8(ctx, base);
loc_837DB220:
	// lbz r11,11246(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 11246);
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// ble cr6,0x837db240
	if (!cr6.gt) goto loc_837DB240;
	// li r11,6914
	ctx.r11.s64 = 6914;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x835977d8
	ctx.lr = 0x837DB240;
	sub_835977D8(ctx, base);
loc_837DB240:
	// lbz r11,11246(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 11246);
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// ble cr6,0x837db260
	if (!cr6.gt) goto loc_837DB260;
	// li r11,6913
	ctx.r11.s64 = 6913;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x835977d8
	ctx.lr = 0x837DB260;
	sub_835977D8(ctx, base);
loc_837DB260:
	// lbz r11,11246(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 11246);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// ble cr6,0x837db7f4
	if (!cr6.gt) goto loc_837DB7F4;
	// li r11,6912
	ctx.r11.s64 = 6912;
	// b 0x837db7e4
	goto loc_837DB7E4;
loc_837DB274:
	// cmplwi cr6,r11,7936
	cr6.compare<uint32_t>(ctx.r11.u32, 7936, xer);
	// bgt cr6,0x837db488
	if (cr6.gt) goto loc_837DB488;
	// beq cr6,0x837db450
	if (cr6.eq) goto loc_837DB450;
	// cmplwi cr6,r11,7168
	cr6.compare<uint32_t>(ctx.r11.u32, 7168, xer);
	// beq cr6,0x837db398
	if (cr6.eq) goto loc_837DB398;
	// cmplwi cr6,r11,7424
	cr6.compare<uint32_t>(ctx.r11.u32, 7424, xer);
	// beq cr6,0x837db2e0
	if (cr6.eq) goto loc_837DB2E0;
	// cmplwi cr6,r11,7680
	cr6.compare<uint32_t>(ctx.r11.u32, 7680, xer);
	// bne cr6,0x837db7f4
	if (!cr6.eq) goto loc_837DB7F4;
	// lwz r11,11264(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11264);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x837db2ac
	if (!cr6.eq) goto loc_837DB2AC;
	// li r11,7680
	ctx.r11.s64 = 7680;
	// b 0x837db2c8
	goto loc_837DB2C8;
loc_837DB2AC:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x837db2bc
	if (!cr6.eq) goto loc_837DB2BC;
	// li r11,7681
	ctx.r11.s64 = 7681;
	// b 0x837db2c8
	goto loc_837DB2C8;
loc_837DB2BC:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x837db2d8
	if (!cr6.eq) goto loc_837DB2D8;
	// li r11,7682
	ctx.r11.s64 = 7682;
loc_837DB2C8:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x835977d8
	ctx.lr = 0x837DB2D8;
	sub_835977D8(ctx, base);
loc_837DB2D8:
	// li r11,7683
	ctx.r11.s64 = 7683;
	// b 0x837db7e4
	goto loc_837DB7E4;
loc_837DB2E0:
	// lwz r11,11272(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11272);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fabs f11,f12
	ctx.f11.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837db324
	if (!cr6.eq) goto loc_837DB324;
	// lwz r10,11276(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11276);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x837db324
	if (cr6.eq) goto loc_837DB324;
	// li r11,1
	ctx.r11.s64 = 1;
loc_837DB324:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837db390
	if (cr6.eq) goto loc_837DB390;
	// srawi r10,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r7,r8,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r8.s64;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837db354
	if (!cr6.eq) goto loc_837DB354;
	// li r11,7427
	ctx.r11.s64 = 7427;
	// b 0x837db380
	goto loc_837DB380;
loc_837DB354:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x837db364
	if (!cr6.eq) goto loc_837DB364;
	// li r11,7424
	ctx.r11.s64 = 7424;
	// b 0x837db380
	goto loc_837DB380;
loc_837DB364:
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x837db374
	if (!cr6.eq) goto loc_837DB374;
	// li r11,7425
	ctx.r11.s64 = 7425;
	// b 0x837db380
	goto loc_837DB380;
loc_837DB374:
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x837db390
	if (!cr6.eq) goto loc_837DB390;
	// li r11,7426
	ctx.r11.s64 = 7426;
loc_837DB380:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x835977d8
	ctx.lr = 0x837DB390;
	sub_835977D8(ctx, base);
loc_837DB390:
	// li r11,7428
	ctx.r11.s64 = 7428;
	// b 0x837db7e4
	goto loc_837DB7E4;
loc_837DB398:
	// lwz r11,11272(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11272);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fabs f11,f12
	ctx.f11.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837db3dc
	if (!cr6.eq) goto loc_837DB3DC;
	// lwz r10,11276(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11276);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x837db3dc
	if (cr6.eq) goto loc_837DB3DC;
	// li r11,1
	ctx.r11.s64 = 1;
loc_837DB3DC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837db448
	if (cr6.eq) goto loc_837DB448;
	// lis r10,21845
	ctx.r10.s64 = 1431633920;
	// ori r9,r10,21846
	ctx.r9.u64 = ctx.r10.u64 | 21846;
	// mulhw r10,r11,r9
	ctx.r10.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32)) >> 32;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r7,r8,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r8.s64;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837db41c
	if (!cr6.eq) goto loc_837DB41C;
	// li r11,7170
	ctx.r11.s64 = 7170;
	// b 0x837db438
	goto loc_837DB438;
loc_837DB41C:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x837db42c
	if (!cr6.eq) goto loc_837DB42C;
	// li r11,7168
	ctx.r11.s64 = 7168;
	// b 0x837db438
	goto loc_837DB438;
loc_837DB42C:
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x837db448
	if (!cr6.eq) goto loc_837DB448;
	// li r11,7169
	ctx.r11.s64 = 7169;
loc_837DB438:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x835977d8
	ctx.lr = 0x837DB448;
	sub_835977D8(ctx, base);
loc_837DB448:
	// li r11,7171
	ctx.r11.s64 = 7171;
	// b 0x837db7e4
	goto loc_837DB7E4;
loc_837DB450:
	// lwz r11,11268(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11268);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x837db464
	if (!cr6.eq) goto loc_837DB464;
	// li r11,7936
	ctx.r11.s64 = 7936;
	// b 0x837db470
	goto loc_837DB470;
loc_837DB464:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x837db480
	if (!cr6.eq) goto loc_837DB480;
	// li r11,7937
	ctx.r11.s64 = 7937;
loc_837DB470:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x835977d8
	ctx.lr = 0x837DB480;
	sub_835977D8(ctx, base);
loc_837DB480:
	// li r11,7938
	ctx.r11.s64 = 7938;
	// b 0x837db7e4
	goto loc_837DB7E4;
loc_837DB488:
	// cmplwi cr6,r11,8192
	cr6.compare<uint32_t>(ctx.r11.u32, 8192, xer);
	// beq cr6,0x837db6ec
	if (cr6.eq) goto loc_837DB6EC;
	// cmplwi cr6,r11,8448
	cr6.compare<uint32_t>(ctx.r11.u32, 8448, xer);
	// beq cr6,0x837db52c
	if (cr6.eq) goto loc_837DB52C;
	// cmplwi cr6,r11,8704
	cr6.compare<uint32_t>(ctx.r11.u32, 8704, xer);
	// bne cr6,0x837db7f4
	if (!cr6.eq) goto loc_837DB7F4;
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837db7f4
	if (!cr6.eq) goto loc_837DB7F4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,11344(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 11344);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lfs f0,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// lfs f13,11352(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 11352);
	ctx.f13.f64 = double(temp.f32);
	// blt cr6,0x837db4fc
	if (cr6.lt) goto loc_837DB4FC;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x837db4e8
	if (cr6.lt) goto loc_837DB4E8;
	// li r11,8706
	ctx.r11.s64 = 8706;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x835977d8
	ctx.lr = 0x837DB4E0;
	sub_835977D8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_837DB4E8:
	// li r11,8707
	ctx.r11.s64 = 8707;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x835977d8
	ctx.lr = 0x837DB4F4;
	sub_835977D8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_837DB4FC:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x837db518
	if (cr6.lt) goto loc_837DB518;
	// li r11,8704
	ctx.r11.s64 = 8704;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x835977d8
	ctx.lr = 0x837DB510;
	sub_835977D8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_837DB518:
	// li r11,8705
	ctx.r11.s64 = 8705;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x835977d8
	ctx.lr = 0x837DB524;
	sub_835977D8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_837DB52C:
	// lwz r11,11340(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11340);
	// addi r31,r29,11340
	ctx.r31.s64 = ctx.r29.s64 + 11340;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x837db54c
	if (cr6.eq) goto loc_837DB54C;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x837db54c
	if (cr6.eq) goto loc_837DB54C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x837db554
	goto loc_837DB554;
loc_837DB54C:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_837DB554:
	// mulli r11,r11,5532
	ctx.r11.s64 = ctx.r11.s64 * 5532;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r10,5714(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5714);
	// cmplwi cr6,r10,10
	cr6.compare<uint32_t>(ctx.r10.u32, 10, xer);
	// ble cr6,0x837db57c
	if (!cr6.gt) goto loc_837DB57C;
	// li r11,8453
	ctx.r11.s64 = 8453;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x835977d8
	ctx.lr = 0x837DB57C;
	sub_835977D8(ctx, base);
loc_837DB57C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x837db598
	if (cr6.eq) goto loc_837DB598;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x837db598
	if (cr6.eq) goto loc_837DB598;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x837db5a0
	goto loc_837DB5A0;
loc_837DB598:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_837DB5A0:
	// mulli r11,r11,5532
	ctx.r11.s64 = ctx.r11.s64 * 5532;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r10,5714(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5714);
	// cmplwi cr6,r10,9
	cr6.compare<uint32_t>(ctx.r10.u32, 9, xer);
	// ble cr6,0x837db5c8
	if (!cr6.gt) goto loc_837DB5C8;
	// li r11,8452
	ctx.r11.s64 = 8452;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x835977d8
	ctx.lr = 0x837DB5C8;
	sub_835977D8(ctx, base);
loc_837DB5C8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x837db5e4
	if (cr6.eq) goto loc_837DB5E4;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x837db5e4
	if (cr6.eq) goto loc_837DB5E4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x837db5ec
	goto loc_837DB5EC;
loc_837DB5E4:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_837DB5EC:
	// mulli r11,r11,5532
	ctx.r11.s64 = ctx.r11.s64 * 5532;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r10,5714(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5714);
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// ble cr6,0x837db614
	if (!cr6.gt) goto loc_837DB614;
	// li r11,8451
	ctx.r11.s64 = 8451;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x835977d8
	ctx.lr = 0x837DB614;
	sub_835977D8(ctx, base);
loc_837DB614:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x837db630
	if (cr6.eq) goto loc_837DB630;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x837db630
	if (cr6.eq) goto loc_837DB630;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x837db638
	goto loc_837DB638;
loc_837DB630:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_837DB638:
	// mulli r11,r11,5532
	ctx.r11.s64 = ctx.r11.s64 * 5532;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r10,5714(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5714);
	// cmplwi cr6,r10,7
	cr6.compare<uint32_t>(ctx.r10.u32, 7, xer);
	// ble cr6,0x837db660
	if (!cr6.gt) goto loc_837DB660;
	// li r11,8450
	ctx.r11.s64 = 8450;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x835977d8
	ctx.lr = 0x837DB660;
	sub_835977D8(ctx, base);
loc_837DB660:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x837db67c
	if (cr6.eq) goto loc_837DB67C;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x837db67c
	if (cr6.eq) goto loc_837DB67C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x837db684
	goto loc_837DB684;
loc_837DB67C:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_837DB684:
	// mulli r11,r11,5532
	ctx.r11.s64 = ctx.r11.s64 * 5532;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r10,5714(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5714);
	// cmplwi cr6,r10,6
	cr6.compare<uint32_t>(ctx.r10.u32, 6, xer);
	// ble cr6,0x837db6ac
	if (!cr6.gt) goto loc_837DB6AC;
	// li r11,8449
	ctx.r11.s64 = 8449;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x835977d8
	ctx.lr = 0x837DB6AC;
	sub_835977D8(ctx, base);
loc_837DB6AC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x837db6c8
	if (cr6.eq) goto loc_837DB6C8;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x837db6c8
	if (cr6.eq) goto loc_837DB6C8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x837db6d0
	goto loc_837DB6D0;
loc_837DB6C8:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_837DB6D0:
	// mulli r11,r11,5532
	ctx.r11.s64 = ctx.r11.s64 * 5532;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r10,5714(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5714);
	// cmplwi cr6,r10,5
	cr6.compare<uint32_t>(ctx.r10.u32, 5, xer);
	// ble cr6,0x837db7f4
	if (!cr6.gt) goto loc_837DB7F4;
	// li r11,8448
	ctx.r11.s64 = 8448;
	// b 0x837db7e4
	goto loc_837DB7E4;
loc_837DB6EC:
	// lwz r11,11340(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11340);
	// mulli r11,r11,5532
	ctx.r11.s64 = ctx.r11.s64 * 5532;
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r9,5714(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5714);
	// cmplwi cr6,r9,10
	cr6.compare<uint32_t>(ctx.r9.u32, 10, xer);
	// ble cr6,0x837db718
	if (!cr6.gt) goto loc_837DB718;
	// li r11,8197
	ctx.r11.s64 = 8197;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x835977d8
	ctx.lr = 0x837DB718;
	sub_835977D8(ctx, base);
loc_837DB718:
	// lwz r11,11340(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11340);
	// mulli r11,r11,5532
	ctx.r11.s64 = ctx.r11.s64 * 5532;
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r9,5714(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5714);
	// cmplwi cr6,r9,9
	cr6.compare<uint32_t>(ctx.r9.u32, 9, xer);
	// ble cr6,0x837db744
	if (!cr6.gt) goto loc_837DB744;
	// li r11,8196
	ctx.r11.s64 = 8196;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x835977d8
	ctx.lr = 0x837DB744;
	sub_835977D8(ctx, base);
loc_837DB744:
	// lwz r11,11340(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11340);
	// mulli r11,r11,5532
	ctx.r11.s64 = ctx.r11.s64 * 5532;
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r9,5714(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5714);
	// cmplwi cr6,r9,8
	cr6.compare<uint32_t>(ctx.r9.u32, 8, xer);
	// ble cr6,0x837db770
	if (!cr6.gt) goto loc_837DB770;
	// li r11,8195
	ctx.r11.s64 = 8195;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x835977d8
	ctx.lr = 0x837DB770;
	sub_835977D8(ctx, base);
loc_837DB770:
	// lwz r11,11340(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11340);
	// mulli r11,r11,5532
	ctx.r11.s64 = ctx.r11.s64 * 5532;
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r9,5714(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5714);
	// cmplwi cr6,r9,7
	cr6.compare<uint32_t>(ctx.r9.u32, 7, xer);
	// ble cr6,0x837db79c
	if (!cr6.gt) goto loc_837DB79C;
	// li r11,8194
	ctx.r11.s64 = 8194;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x835977d8
	ctx.lr = 0x837DB79C;
	sub_835977D8(ctx, base);
loc_837DB79C:
	// lwz r11,11340(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11340);
	// mulli r11,r11,5532
	ctx.r11.s64 = ctx.r11.s64 * 5532;
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r9,5714(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5714);
	// cmplwi cr6,r9,6
	cr6.compare<uint32_t>(ctx.r9.u32, 6, xer);
	// ble cr6,0x837db7c8
	if (!cr6.gt) goto loc_837DB7C8;
	// li r11,8193
	ctx.r11.s64 = 8193;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x835977d8
	ctx.lr = 0x837DB7C8;
	sub_835977D8(ctx, base);
loc_837DB7C8:
	// lwz r11,11340(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11340);
	// mulli r11,r11,5532
	ctx.r11.s64 = ctx.r11.s64 * 5532;
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r9,5714(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5714);
	// cmplwi cr6,r9,5
	cr6.compare<uint32_t>(ctx.r9.u32, 5, xer);
	// ble cr6,0x837db7f4
	if (!cr6.gt) goto loc_837DB7F4;
	// li r11,8192
	ctx.r11.s64 = 8192;
loc_837DB7E4:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x835977d8
	ctx.lr = 0x837DB7F4;
	sub_835977D8(ctx, base);
loc_837DB7F4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837DB7FC"))) PPC_WEAK_FUNC(sub_837DB7FC);
PPC_FUNC_IMPL(__imp__sub_837DB7FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837DB800"))) PPC_WEAK_FUNC(sub_837DB800);
PPC_FUNC_IMPL(__imp__sub_837DB800) {
	PPC_FUNC_PROLOGUE();
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
	// li r5,284
	ctx.r5.s64 = 284;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x837DB820;
	sub_831CDCF0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r7,-32222
	ctx.r7.s64 = -2111700992;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-24912(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -24912);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lfs f12,25600(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 25600);
	ctx.f12.f64 = double(temp.f32);
	// stb r6,164(r31)
	PPC_STORE_U8(ctx.r31.u32 + 164, ctx.r6.u8);
	// lfs f11,-26260(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -26260);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// stfs f0,140(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 140, temp.u32);
	// stb r11,156(r31)
	PPC_STORE_U8(ctx.r31.u32 + 156, ctx.r11.u8);
	// stfs f13,144(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// stb r11,157(r31)
	PPC_STORE_U8(ctx.r31.u32 + 157, ctx.r11.u8);
	// stfs f12,148(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// stb r11,158(r31)
	PPC_STORE_U8(ctx.r31.u32 + 158, ctx.r11.u8);
	// stfs f0,160(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stfs f11,152(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// sth r11,166(r31)
	PPC_STORE_U16(ctx.r31.u32 + 166, ctx.r11.u16);
	// sth r11,168(r31)
	PPC_STORE_U16(ctx.r31.u32 + 168, ctx.r11.u16);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// lis r3,-32222
	ctx.r3.s64 = -2111700992;
	// sth r11,170(r31)
	PPC_STORE_U16(ctx.r31.u32 + 170, ctx.r11.u16);
	// sth r11,172(r31)
	PPC_STORE_U16(ctx.r31.u32 + 172, ctx.r11.u16);
	// li r10,100
	ctx.r10.s64 = 100;
	// stfs f0,240(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 240, temp.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stfs f0,256(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 256, temp.u32);
	// li r8,50
	ctx.r8.s64 = 50;
	// stfs f0,268(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 268, temp.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// lfs f0,-11316(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -11316);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,25596(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 25596);
	ctx.f13.f64 = double(temp.f32);
	// addi r7,r31,166
	ctx.r7.s64 = ctx.r31.s64 + 166;
	// lfs f12,-20096(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -20096);
	ctx.f12.f64 = double(temp.f32);
	// stb r6,174(r31)
	PPC_STORE_U8(ctx.r31.u32 + 174, ctx.r6.u8);
	// stfs f13,244(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 244, temp.u32);
	// stb r11,175(r31)
	PPC_STORE_U8(ctx.r31.u32 + 175, ctx.r11.u8);
	// stfs f0,248(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 248, temp.u32);
	// stb r9,176(r31)
	PPC_STORE_U8(ctx.r31.u32 + 176, ctx.r9.u8);
	// stfs f0,252(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 252, temp.u32);
	// stb r9,177(r31)
	PPC_STORE_U8(ctx.r31.u32 + 177, ctx.r9.u8);
	// stfs f12,260(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 260, temp.u32);
	// stb r8,178(r31)
	PPC_STORE_U8(ctx.r31.u32 + 178, ctx.r8.u8);
	// stfs f13,272(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 272, temp.u32);
	// stw r9,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r9.u32);
	// stfs f0,276(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 276, temp.u32);
	// stw r9,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r9.u32);
	// stfs f0,280(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 280, temp.u32);
	// stw r11,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r11.u32);
	// stw r9,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r9.u32);
	// stw r9,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r9.u32);
	// stw r9,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r9.u32);
	// stw r9,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r9.u32);
	// stw r9,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r9.u32);
	// stb r8,212(r31)
	PPC_STORE_U8(ctx.r31.u32 + 212, ctx.r8.u8);
	// stb r8,213(r31)
	PPC_STORE_U8(ctx.r31.u32 + 213, ctx.r8.u8);
	// stb r11,214(r31)
	PPC_STORE_U8(ctx.r31.u32 + 214, ctx.r11.u8);
	// stb r10,215(r31)
	PPC_STORE_U8(ctx.r31.u32 + 215, ctx.r10.u8);
	// stb r10,216(r31)
	PPC_STORE_U8(ctx.r31.u32 + 216, ctx.r10.u8);
	// stb r10,217(r31)
	PPC_STORE_U8(ctx.r31.u32 + 217, ctx.r10.u8);
	// stb r10,218(r31)
	PPC_STORE_U8(ctx.r31.u32 + 218, ctx.r10.u8);
	// stb r10,219(r31)
	PPC_STORE_U8(ctx.r31.u32 + 219, ctx.r10.u8);
	// stb r11,220(r31)
	PPC_STORE_U8(ctx.r31.u32 + 220, ctx.r11.u8);
	// stb r10,221(r31)
	PPC_STORE_U8(ctx.r31.u32 + 221, ctx.r10.u8);
	// stb r10,222(r31)
	PPC_STORE_U8(ctx.r31.u32 + 222, ctx.r10.u8);
	// stb r10,223(r31)
	PPC_STORE_U8(ctx.r31.u32 + 223, ctx.r10.u8);
	// stb r11,224(r31)
	PPC_STORE_U8(ctx.r31.u32 + 224, ctx.r11.u8);
	// stb r10,225(r31)
	PPC_STORE_U8(ctx.r31.u32 + 225, ctx.r10.u8);
	// stb r10,226(r31)
	PPC_STORE_U8(ctx.r31.u32 + 226, ctx.r10.u8);
	// stb r10,227(r31)
	PPC_STORE_U8(ctx.r31.u32 + 227, ctx.r10.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,228(r31)
	PPC_STORE_U8(ctx.r31.u32 + 228, ctx.r11.u8);
	// stb r10,229(r31)
	PPC_STORE_U8(ctx.r31.u32 + 229, ctx.r10.u8);
	// stb r10,230(r31)
	PPC_STORE_U8(ctx.r31.u32 + 230, ctx.r10.u8);
	// stb r10,231(r31)
	PPC_STORE_U8(ctx.r31.u32 + 231, ctx.r10.u8);
	// stb r11,232(r31)
	PPC_STORE_U8(ctx.r31.u32 + 232, ctx.r11.u8);
	// stb r10,233(r31)
	PPC_STORE_U8(ctx.r31.u32 + 233, ctx.r10.u8);
	// stb r10,234(r31)
	PPC_STORE_U8(ctx.r31.u32 + 234, ctx.r10.u8);
	// stb r11,235(r31)
	PPC_STORE_U8(ctx.r31.u32 + 235, ctx.r11.u8);
	// stb r11,236(r31)
	PPC_STORE_U8(ctx.r31.u32 + 236, ctx.r11.u8);
	// stb r11,264(r31)
	PPC_STORE_U8(ctx.r31.u32 + 264, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_837DB994"))) PPC_WEAK_FUNC(sub_837DB994);
PPC_FUNC_IMPL(__imp__sub_837DB994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837DB998"))) PPC_WEAK_FUNC(sub_837DB998);
PPC_FUNC_IMPL(__imp__sub_837DB998) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,68(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,255
	ctx.r3.s64 = 255;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r10,10
	cr6.compare<uint32_t>(ctx.r10.u32, 10, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// lis r12,-31874
	ctx.r12.s64 = -2088894464;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-17968
	ctx.r12.s64 = ctx.r12.s64 + -17968;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_837DB9FC;
	case 1:
		goto loc_837DBA10;
	case 2:
		goto loc_837DBA24;
	case 3:
		goto loc_837DBA34;
	case 4:
		goto loc_837DBA34;
	case 5:
		goto loc_837DBA34;
	case 6:
		goto loc_837DBA34;
	case 7:
		goto loc_837DBA34;
	case 8:
		goto loc_837DBA34;
	case 9:
		goto loc_837DB9FC;
	case 10:
		goto loc_837DBA10;
	default:
		return;
	}
	// lwz r27,-17924(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -17924);
	// lwz r27,-17904(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -17904);
	// lwz r27,-17884(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -17884);
	// lwz r27,-17868(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -17868);
	// lwz r27,-17868(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -17868);
	// lwz r27,-17868(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -17868);
	// lwz r27,-17868(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -17868);
	// lwz r27,-17868(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -17868);
	// lwz r27,-17868(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -17868);
	// lwz r27,-17924(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -17924);
	// lwz r27,-17904(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -17904);
loc_837DB9FC:
	// lbz r11,829(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 829);
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_837DBA10:
	// lbz r11,829(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 829);
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// addi r3,r11,11
	ctx.r3.s64 = ctx.r11.s64 + 11;
	// blr 
	return;
loc_837DBA24:
	// lbz r11,829(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 829);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// addi r3,r11,22
	ctx.r3.s64 = ctx.r11.s64 + 22;
loc_837DBA34:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837DBA38"))) PPC_WEAK_FUNC(sub_837DBA38);
PPC_FUNC_IMPL(__imp__sub_837DBA38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837dbaa4
	if (cr6.eq) goto loc_837DBAA4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// bgt cr6,0x837dbaa4
	if (cr6.gt) goto loc_837DBAA4;
	// lis r12,-31874
	ctx.r12.s64 = -2088894464;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-17816
	ctx.r12.s64 = ctx.r12.s64 + -17816;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_837DBA94;
	case 1:
		goto loc_837DBA9C;
	case 2:
		goto loc_837DBAA4;
	case 3:
		goto loc_837DBAA4;
	case 4:
		goto loc_837DBAA4;
	case 5:
		goto loc_837DBAA4;
	case 6:
		goto loc_837DBAA4;
	case 7:
		goto loc_837DBAA4;
	case 8:
		goto loc_837DBAA4;
	case 9:
		goto loc_837DBA94;
	case 10:
		goto loc_837DBA9C;
	default:
		return;
	}
	// lwz r27,-17772(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -17772);
	// lwz r27,-17764(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -17764);
	// lwz r27,-17756(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -17756);
	// lwz r27,-17756(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -17756);
	// lwz r27,-17756(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -17756);
	// lwz r27,-17756(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -17756);
	// lwz r27,-17756(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -17756);
	// lwz r27,-17756(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -17756);
	// lwz r27,-17756(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -17756);
	// lwz r27,-17772(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -17772);
	// lwz r27,-17764(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + -17764);
loc_837DBA94:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_837DBA9C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_837DBAA4:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837DBAAC"))) PPC_WEAK_FUNC(sub_837DBAAC);
PPC_FUNC_IMPL(__imp__sub_837DBAAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837DBAB0"))) PPC_WEAK_FUNC(sub_837DBAB0);
PPC_FUNC_IMPL(__imp__sub_837DBAB0) {
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
	// lwz r3,68(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837dbaf0
	if (cr6.eq) goto loc_837DBAF0;
	// bl 0x837b1508
	ctx.lr = 0x837DBADC;
	sub_837B1508(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// bl 0x837b14a8
	ctx.lr = 0x837DBAE8;
	sub_837B14A8(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stb r11,976(r31)
	PPC_STORE_U8(ctx.r31.u32 + 976, ctx.r11.u8);
loc_837DBAF0:
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

__attribute__((alias("__imp__sub_837DBB08"))) PPC_WEAK_FUNC(sub_837DBB08);
PPC_FUNC_IMPL(__imp__sub_837DBB08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837dbb2c
	if (cr6.eq) goto loc_837DBB2C;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837dbb2c
	if (cr6.eq) goto loc_837DBB2C;
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r11,978(r3)
	PPC_STORE_U8(ctx.r3.u32 + 978, ctx.r11.u8);
	// blr 
	return;
loc_837DBB2C:
	// lwz r3,68(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837dbb50
	if (cr6.eq) goto loc_837DBB50;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
	// b 0x837dbb58
	goto loc_837DBB58;
loc_837DBB50:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f1,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f1.f64 = double(temp.f32);
loc_837DBB58:
	// b 0x837b1560
	sub_837B1560(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837DBB5C"))) PPC_WEAK_FUNC(sub_837DBB5C);
PPC_FUNC_IMPL(__imp__sub_837DBB5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837DBB60"))) PPC_WEAK_FUNC(sub_837DBB60);
PPC_FUNC_IMPL(__imp__sub_837DBB60) {
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
	// lwz r3,160(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stb r4,336(r31)
	PPC_STORE_U8(ctx.r31.u32 + 336, ctx.r4.u8);
	// beq cr6,0x837dbb90
	if (cr6.eq) goto loc_837DBB90;
	// bl 0x83b56ab0
	ctx.lr = 0x837DBB90;
	sub_83B56AB0(ctx, base);
loc_837DBB90:
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837dbba4
	if (cr6.eq) goto loc_837DBBA4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83b56848
	ctx.lr = 0x837DBBA4;
	sub_83B56848(ctx, base);
loc_837DBBA4:
	// lwz r31,168(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x837dbbc8
	if (cr6.eq) goto loc_837DBBC8;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837dbbc4
	if (cr6.eq) goto loc_837DBBC4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x833c8980
	ctx.lr = 0x837DBBC4;
	sub_833C8980(ctx, base);
loc_837DBBC4:
	// stb r30,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r30.u8);
loc_837DBBC8:
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

__attribute__((alias("__imp__sub_837DBBE0"))) PPC_WEAK_FUNC(sub_837DBBE0);
PPC_FUNC_IMPL(__imp__sub_837DBBE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// addi r10,r3,24
	ctx.r10.s64 = ctx.r3.s64 + 24;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// lbz r9,2(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// stb r9,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r9.u8);
	// lbz r8,3(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// stb r8,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r8.u8);
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f12,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f11,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,16(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f10,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,20(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lwz r7,24(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// stw r7,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r7.u32);
	// lwz r6,28(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stw r6,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r6.u32);
	// lwz r5,32(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// stw r5,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r5.u32);
	// lwz r11,36(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// lfs f9,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,40(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f8,44(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,44(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lfs f7,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,48(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lfs f6,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,52(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// lfs f5,56(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,56(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// lfs f4,60(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,60(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// lfs f3,64(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,64(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// lfs f2,68(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,68(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// lfs f1,72(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,72(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// lfs f0,76(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,76(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// lfs f13,80(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,80(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// lfs f12,84(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,84(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// lfs f11,88(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,88(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// lfs f10,92(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,92(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// lfs f9,96(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,96(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// lfs f8,100(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,100(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// lfs f7,104(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 104);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,104(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// lfs f6,108(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,108(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// lfs f5,112(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 112);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,112(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// lfs f4,116(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 116);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,116(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// lfs f3,120(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 120);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,120(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// lfs f2,124(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 124);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,124(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// lfs f1,128(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 128);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,128(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 128, temp.u32);
	// lfs f0,132(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,132(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 132, temp.u32);
	// lfs f13,136(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,136(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 136, temp.u32);
	// lfs f12,140(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 140);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,140(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 140, temp.u32);
	// lfs f11,144(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 144);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,144(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 144, temp.u32);
	// lfs f10,148(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 148);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,148(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 148, temp.u32);
	// lfs f9,152(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 152);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,152(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 152, temp.u32);
	// lfs f8,156(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 156);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,156(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 156, temp.u32);
	// lfs f7,160(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 160);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,160(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 160, temp.u32);
	// lfs f6,164(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 164);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,164(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 164, temp.u32);
	// lwz r10,168(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 168);
	// stw r10,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r10.u32);
	// lwz r9,172(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 172);
	// stw r9,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, ctx.r9.u32);
	// lwz r8,176(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 176);
	// stw r8,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, ctx.r8.u32);
	// lwz r7,180(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 180);
	// stw r7,180(r3)
	PPC_STORE_U32(ctx.r3.u32 + 180, ctx.r7.u32);
	// lbz r6,184(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 184);
	// stb r6,184(r3)
	PPC_STORE_U8(ctx.r3.u32 + 184, ctx.r6.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837DBD70"))) PPC_WEAK_FUNC(sub_837DBD70);
PPC_FUNC_IMPL(__imp__sub_837DBD70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister temp{};
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r10,128
	ctx.r10.s64 = 128;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r4,24
	ctx.r9.s64 = ctx.r4.s64 + 24;
	// addi r8,r3,24
	ctx.r8.s64 = ctx.r3.s64 + 24;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lbz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// stb r6,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r6.u8);
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f13,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,12(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f12,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,16(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f11,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,20(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
loc_837DBDB4:
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x837dbdb4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837DBDB4;
	// li r10,128
	ctx.r10.s64 = 128;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r4,152
	ctx.r9.s64 = ctx.r4.s64 + 152;
	// addi r8,r3,152
	ctx.r8.s64 = ctx.r3.s64 + 152;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_837DBDD8:
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x837dbdd8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837DBDD8;
	// lfs f0,280(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 280);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,280(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 280, temp.u32);
	// lbz r11,284(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 284);
	// stb r11,284(r3)
	PPC_STORE_U8(ctx.r3.u32 + 284, ctx.r11.u8);
	// lbz r10,285(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 285);
	// stb r10,285(r3)
	PPC_STORE_U8(ctx.r3.u32 + 285, ctx.r10.u8);
	// lbz r9,286(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 286);
	// stb r9,286(r3)
	PPC_STORE_U8(ctx.r3.u32 + 286, ctx.r9.u8);
	// lfs f13,288(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 288);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,288(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 288, temp.u32);
	// lbz r8,292(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 292);
	// stb r8,292(r3)
	PPC_STORE_U8(ctx.r3.u32 + 292, ctx.r8.u8);
	// lbz r7,293(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 293);
	// stb r7,293(r3)
	PPC_STORE_U8(ctx.r3.u32 + 293, ctx.r7.u8);
	// lhz r6,294(r4)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + 294);
	// sth r6,294(r3)
	PPC_STORE_U16(ctx.r3.u32 + 294, ctx.r6.u16);
	// lhz r5,296(r4)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r4.u32 + 296);
	// sth r5,296(r3)
	PPC_STORE_U16(ctx.r3.u32 + 296, ctx.r5.u16);
	// lhz r11,298(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 298);
	// sth r11,298(r3)
	PPC_STORE_U16(ctx.r3.u32 + 298, ctx.r11.u16);
	// lhz r10,300(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 300);
	// sth r10,300(r3)
	PPC_STORE_U16(ctx.r3.u32 + 300, ctx.r10.u16);
	// lbz r9,302(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 302);
	// stb r9,302(r3)
	PPC_STORE_U8(ctx.r3.u32 + 302, ctx.r9.u8);
	// lbz r8,303(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 303);
	// stb r8,303(r3)
	PPC_STORE_U8(ctx.r3.u32 + 303, ctx.r8.u8);
	// lbz r7,304(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 304);
	// stb r7,304(r3)
	PPC_STORE_U8(ctx.r3.u32 + 304, ctx.r7.u8);
	// lbz r6,305(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 305);
	// stb r6,305(r3)
	PPC_STORE_U8(ctx.r3.u32 + 305, ctx.r6.u8);
	// lbz r5,306(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 306);
	// stb r5,306(r3)
	PPC_STORE_U8(ctx.r3.u32 + 306, ctx.r5.u8);
	// lbz r11,307(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 307);
	// stb r11,307(r3)
	PPC_STORE_U8(ctx.r3.u32 + 307, ctx.r11.u8);
	// lbz r10,308(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 308);
	// stb r10,308(r3)
	PPC_STORE_U8(ctx.r3.u32 + 308, ctx.r10.u8);
	// lbz r9,309(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 309);
	// stb r9,309(r3)
	PPC_STORE_U8(ctx.r3.u32 + 309, ctx.r9.u8);
	// lfs f12,312(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 312);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,312(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 312, temp.u32);
	// lfs f11,316(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 316);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,316(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 316, temp.u32);
	// lfs f10,320(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 320);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,320(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 320, temp.u32);
	// lfs f9,324(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 324);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,324(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 324, temp.u32);
	// lfs f8,328(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 328);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,328(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 328, temp.u32);
	// lfs f7,332(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 332);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,332(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 332, temp.u32);
	// lfs f6,336(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 336);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,336(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 336, temp.u32);
	// lfs f5,340(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 340);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,340(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 340, temp.u32);
	// lfs f4,344(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 344);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,344(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 344, temp.u32);
	// lfs f3,348(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 348);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,348(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 348, temp.u32);
	// lfs f2,352(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 352);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,352(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 352, temp.u32);
	// lfs f1,356(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 356);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,356(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 356, temp.u32);
	// lfs f0,360(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 360);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,360(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 360, temp.u32);
	// lfs f13,364(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 364);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,364(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 364, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837DBEF4"))) PPC_WEAK_FUNC(sub_837DBEF4);
PPC_FUNC_IMPL(__imp__sub_837DBEF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837DBEF8"))) PPC_WEAK_FUNC(sub_837DBEF8);
PPC_FUNC_IMPL(__imp__sub_837DBEF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister temp{};
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r10,128
	ctx.r10.s64 = 128;
	// addi r6,r3,20
	ctx.r6.s64 = ctx.r3.s64 + 20;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r4,36
	ctx.r9.s64 = ctx.r4.s64 + 36;
	// addi r8,r3,36
	ctx.r8.s64 = ctx.r3.s64 + 36;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lbz r5,4(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// stb r5,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r5.u8);
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f13,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,12(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f12,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,16(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lwz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// lwz r7,24(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// stw r7,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r7.u32);
	// lwz r6,28(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stw r6,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r6.u32);
	// lwz r5,32(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// stw r5,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r5.u32);
loc_837DBF58:
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x837dbf58
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837DBF58;
	// li r10,128
	ctx.r10.s64 = 128;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r4,164
	ctx.r9.s64 = ctx.r4.s64 + 164;
	// addi r8,r3,164
	ctx.r8.s64 = ctx.r3.s64 + 164;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_837DBF7C:
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x837dbf7c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837DBF7C;
	// li r10,128
	ctx.r10.s64 = 128;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r4,292
	ctx.r9.s64 = ctx.r4.s64 + 292;
	// addi r8,r3,292
	ctx.r8.s64 = ctx.r3.s64 + 292;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_837DBFA0:
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x837dbfa0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837DBFA0;
	// lfs f0,420(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 420);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,420(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 420, temp.u32);
	// lbz r11,424(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 424);
	// stb r11,424(r3)
	PPC_STORE_U8(ctx.r3.u32 + 424, ctx.r11.u8);
	// lbz r10,425(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 425);
	// stb r10,425(r3)
	PPC_STORE_U8(ctx.r3.u32 + 425, ctx.r10.u8);
	// lbz r9,426(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 426);
	// stb r9,426(r3)
	PPC_STORE_U8(ctx.r3.u32 + 426, ctx.r9.u8);
	// lbz r8,427(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 427);
	// stb r8,427(r3)
	PPC_STORE_U8(ctx.r3.u32 + 427, ctx.r8.u8);
	// lbz r7,428(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 428);
	// stb r7,428(r3)
	PPC_STORE_U8(ctx.r3.u32 + 428, ctx.r7.u8);
	// lbz r6,429(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 429);
	// stb r6,429(r3)
	PPC_STORE_U8(ctx.r3.u32 + 429, ctx.r6.u8);
	// lhz r5,430(r4)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r4.u32 + 430);
	// sth r5,430(r3)
	PPC_STORE_U16(ctx.r3.u32 + 430, ctx.r5.u16);
	// lhz r11,432(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 432);
	// sth r11,432(r3)
	PPC_STORE_U16(ctx.r3.u32 + 432, ctx.r11.u16);
	// lhz r10,434(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 434);
	// sth r10,434(r3)
	PPC_STORE_U16(ctx.r3.u32 + 434, ctx.r10.u16);
	// lhz r9,436(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 436);
	// sth r9,436(r3)
	PPC_STORE_U16(ctx.r3.u32 + 436, ctx.r9.u16);
	// lbz r8,438(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 438);
	// stb r8,438(r3)
	PPC_STORE_U8(ctx.r3.u32 + 438, ctx.r8.u8);
	// lbz r7,439(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 439);
	// stb r7,439(r3)
	PPC_STORE_U8(ctx.r3.u32 + 439, ctx.r7.u8);
	// lbz r6,440(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 440);
	// stb r6,440(r3)
	PPC_STORE_U8(ctx.r3.u32 + 440, ctx.r6.u8);
	// lbz r5,441(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 441);
	// stb r5,441(r3)
	PPC_STORE_U8(ctx.r3.u32 + 441, ctx.r5.u8);
	// lbz r4,442(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 442);
	// stb r4,442(r3)
	PPC_STORE_U8(ctx.r3.u32 + 442, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837DC034"))) PPC_WEAK_FUNC(sub_837DC034);
PPC_FUNC_IMPL(__imp__sub_837DC034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837DC038"))) PPC_WEAK_FUNC(sub_837DC038);
PPC_FUNC_IMPL(__imp__sub_837DC038) {
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
	// lwz r3,96(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837dc064
	if (cr6.eq) goto loc_837DC064;
	// bl 0x83103bb8
	ctx.lr = 0x837DC054;
	sub_83103BB8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837dc068
	if (!cr6.eq) goto loc_837DC068;
loc_837DC064:
	// li r3,1
	ctx.r3.s64 = 1;
loc_837DC068:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837DC078"))) PPC_WEAK_FUNC(sub_837DC078);
PPC_FUNC_IMPL(__imp__sub_837DC078) {
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
	// lwz r4,100(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x837dc0b4
	if (cr6.eq) goto loc_837DC0B4;
	// li r11,33
	ctx.r11.s64 = 33;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x837DC0B0;
	sub_825952B8(ctx, base);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
loc_837DC0B4:
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837dc0c8
	if (cr6.eq) goto loc_837DC0C8;
	// bl 0x83103e98
	ctx.lr = 0x837DC0C4;
	sub_83103E98(ctx, base);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
loc_837DC0C8:
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

__attribute__((alias("__imp__sub_837DC0E4"))) PPC_WEAK_FUNC(sub_837DC0E4);
PPC_FUNC_IMPL(__imp__sub_837DC0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837DC0E8"))) PPC_WEAK_FUNC(sub_837DC0E8);
PPC_FUNC_IMPL(__imp__sub_837DC0E8) {
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
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837dc128
	if (cr6.eq) goto loc_837DC128;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x837dc120
	if (cr6.eq) goto loc_837DC120;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_837DC120:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// b 0x837dc168
	goto loc_837DC168;
loc_837DC128:
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837dc164
	if (cr6.eq) goto loc_837DC164;
	// bl 0x83103bb8
	ctx.lr = 0x837DC138;
	sub_83103BB8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837dc164
	if (!cr6.eq) goto loc_837DC164;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x837dc158
	if (cr6.eq) goto loc_837DC158;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x83103d20
	ctx.lr = 0x837DC154;
	sub_83103D20(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
loc_837DC158:
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x83103d60
	ctx.lr = 0x837DC160;
	sub_83103D60(ctx, base);
	// b 0x837dc168
	goto loc_837DC168;
loc_837DC164:
	// li r3,0
	ctx.r3.s64 = 0;
loc_837DC168:
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

__attribute__((alias("__imp__sub_837DC180"))) PPC_WEAK_FUNC(sub_837DC180);
PPC_FUNC_IMPL(__imp__sub_837DC180) {
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
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bgt cr6,0x837dc1b8
	if (cr6.gt) goto loc_837DC1B8;
	// lwz r3,96(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837dc1b8
	if (cr6.eq) goto loc_837DC1B8;
	// bl 0x83103bb8
	ctx.lr = 0x837DC1A8;
	sub_83103BB8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837dc1bc
	if (!cr6.eq) goto loc_837DC1BC;
loc_837DC1B8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_837DC1BC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837DC1CC"))) PPC_WEAK_FUNC(sub_837DC1CC);
PPC_FUNC_IMPL(__imp__sub_837DC1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837DC1D0"))) PPC_WEAK_FUNC(sub_837DC1D0);
PPC_FUNC_IMPL(__imp__sub_837DC1D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837DC1D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bgt cr6,0x837dc244
	if (cr6.gt) goto loc_837DC244;
	// lwz r3,96(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837dc244
	if (cr6.eq) goto loc_837DC244;
	// bl 0x83103d60
	ctx.lr = 0x837DC1FC;
	sub_83103D60(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x83103d20
	ctx.lr = 0x837DC208;
	sub_83103D20(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x837c5878
	ctx.lr = 0x837DC210;
	sub_837C5878(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837dc234
	if (cr6.eq) goto loc_837DC234;
	// lbz r28,104(r31)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r31.u32 + 104);
	// bl 0x837c5878
	ctx.lr = 0x837DC220;
	sub_837C5878(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bl 0x837c9608
	ctx.lr = 0x837DC230;
	sub_837C9608(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
loc_837DC234:
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x83103e98
	ctx.lr = 0x837DC23C;
	sub_83103E98(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_837DC244:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837DC24C"))) PPC_WEAK_FUNC(sub_837DC24C);
PPC_FUNC_IMPL(__imp__sub_837DC24C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837DC250"))) PPC_WEAK_FUNC(sub_837DC250);
PPC_FUNC_IMPL(__imp__sub_837DC250) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837DC258;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x837dc290
	if (!cr6.gt) goto loc_837DC290;
	// bl 0x837c5878
	ctx.lr = 0x837DC274;
	sub_837C5878(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837dc28c
	if (cr6.eq) goto loc_837DC28C;
	// lwz r29,100(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x837c5878
	ctx.lr = 0x837DC284;
	sub_837C5878(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x837c6a20
	ctx.lr = 0x837DC28C;
	sub_837C6A20(ctx, base);
loc_837DC28C:
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
loc_837DC290:
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837dc2a4
	if (cr6.eq) goto loc_837DC2A4;
	// bl 0x83103e98
	ctx.lr = 0x837DC2A0;
	sub_83103E98(ctx, base);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
loc_837DC2A4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837DC2B0"))) PPC_WEAK_FUNC(sub_837DC2B0);
PPC_FUNC_IMPL(__imp__sub_837DC2B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r11,2
	ctx.r11.s64 = 2;
	// srawi r9,r10,31
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfc r7,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r7.s64 = ctx.r10.s64 - ctx.r11.s64;
	// adde r11,r8,r9
	temp.u8 = (ctx.r8.u32 + ctx.r9.u32 < ctx.r8.u32) | (ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837DC2D0"))) PPC_WEAK_FUNC(sub_837DC2D0);
PPC_FUNC_IMPL(__imp__sub_837DC2D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r11,4
	ctx.r11.s64 = 4;
	// srawi r9,r10,31
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfc r7,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r7.s64 = ctx.r10.s64 - ctx.r11.s64;
	// adde r11,r8,r9
	temp.u8 = (ctx.r8.u32 + ctx.r9.u32 < ctx.r8.u32) | (ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837DC2F0"))) PPC_WEAK_FUNC(sub_837DC2F0);
PPC_FUNC_IMPL(__imp__sub_837DC2F0) {
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
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,4392
	ctx.r9.s64 = ctx.r11.s64 + 4392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x837dc324
	if (cr6.eq) goto loc_837DC324;
	// bl 0x82416268
	ctx.lr = 0x837DC320;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_837DC324:
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

__attribute__((alias("__imp__sub_837DC338"))) PPC_WEAK_FUNC(sub_837DC338);
PPC_FUNC_IMPL(__imp__sub_837DC338) {
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
	// lbz r11,285(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 285);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837dc3a8
	if (!cr6.eq) goto loc_837DC3A8;
	// lwz r11,484(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 484);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837dc3a8
	if (cr6.eq) goto loc_837DC3A8;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837dc3a8
	if (cr6.eq) goto loc_837DC3A8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837DC380;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,484(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r3,436(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 436);
	// bl 0x837a5588
	ctx.lr = 0x837DC390;
	sub_837A5588(ctx, base);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,436(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 436);
	// bl 0x837a5118
	ctx.lr = 0x837DC3A0;
	sub_837A5118(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// stb r7,288(r31)
	PPC_STORE_U8(ctx.r31.u32 + 288, ctx.r7.u8);
loc_837DC3A8:
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

__attribute__((alias("__imp__sub_837DC3BC"))) PPC_WEAK_FUNC(sub_837DC3BC);
PPC_FUNC_IMPL(__imp__sub_837DC3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837DC3C0"))) PPC_WEAK_FUNC(sub_837DC3C0);
PPC_FUNC_IMPL(__imp__sub_837DC3C0) {
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
	// lbz r11,285(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 285);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837dc42c
	if (!cr6.eq) goto loc_837DC42C;
	// lwz r11,484(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 484);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837dc42c
	if (cr6.eq) goto loc_837DC42C;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837dc42c
	if (cr6.eq) goto loc_837DC42C;
	// lbz r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 288);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837dc42c
	if (cr6.eq) goto loc_837DC42C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837DC414;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,440(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 440);
	// lwz r3,436(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 436);
	// bl 0x837a5588
	ctx.lr = 0x837DC424;
	sub_837A5588(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// stb r8,288(r31)
	PPC_STORE_U8(ctx.r31.u32 + 288, ctx.r8.u8);
loc_837DC42C:
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

__attribute__((alias("__imp__sub_837DC440"))) PPC_WEAK_FUNC(sub_837DC440);
PPC_FUNC_IMPL(__imp__sub_837DC440) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bgt cr6,0x837dc510
	if (cr6.gt) goto loc_837DC510;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x837dc478
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837DC478;
	// bdzf 4*cr6+eq,0x837dc480
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837DC480;
	// bdzf 4*cr6+eq,0x837dc498
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837DC498;
	// bdzf 4*cr6+eq,0x837dc4b0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837DC4B0;
	// bdzf 4*cr6+eq,0x837dc4c8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837DC4C8;
	// bdzf 4*cr6+eq,0x837dc4e0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837DC4E0;
	// bne cr6,0x837dc4f8
	if (!cr6.eq) goto loc_837DC4F8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_837DC478:
	// li r3,10
	ctx.r3.s64 = 10;
	// blr 
	return;
loc_837DC480:
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r9,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// addi r3,r11,14
	ctx.r3.s64 = ctx.r11.s64 + 14;
	// blr 
	return;
loc_837DC498:
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r9,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r3,r11,18
	ctx.r3.s64 = ctx.r11.s64 + 18;
	// blr 
	return;
loc_837DC4B0:
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r9,30
	ctx.r11.u64 = ctx.r9.u32 & 0x3;
	// addi r3,r11,3
	ctx.r3.s64 = ctx.r11.s64 + 3;
	// blr 
	return;
loc_837DC4C8:
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r9,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// blr 
	return;
loc_837DC4E0:
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r9,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// addi r3,r11,11
	ctx.r3.s64 = ctx.r11.s64 + 11;
	// blr 
	return;
loc_837DC4F8:
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r9,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r3,r11,15
	ctx.r3.s64 = ctx.r11.s64 + 15;
	// blr 
	return;
loc_837DC510:
	// li r3,19
	ctx.r3.s64 = 19;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837DC518"))) PPC_WEAK_FUNC(sub_837DC518);
PPC_FUNC_IMPL(__imp__sub_837DC518) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837dc530
	if (cr6.eq) goto loc_837DC530;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// stw r11,228(r3)
	PPC_STORE_U32(ctx.r3.u32 + 228, ctx.r11.u32);
	// blr 
	return;
loc_837DC530:
	// lwz r11,228(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// stw r10,228(r3)
	PPC_STORE_U32(ctx.r3.u32 + 228, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837DC550"))) PPC_WEAK_FUNC(sub_837DC550);
PPC_FUNC_IMPL(__imp__sub_837DC550) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837dc568
	if (cr6.eq) goto loc_837DC568;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// stw r11,232(r3)
	PPC_STORE_U32(ctx.r3.u32 + 232, ctx.r11.u32);
	// blr 
	return;
loc_837DC568:
	// lwz r11,232(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 232);
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// stw r10,232(r3)
	PPC_STORE_U32(ctx.r3.u32 + 232, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837DC588"))) PPC_WEAK_FUNC(sub_837DC588);
PPC_FUNC_IMPL(__imp__sub_837DC588) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837dc5a0
	if (cr6.eq) goto loc_837DC5A0;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// stw r11,236(r3)
	PPC_STORE_U32(ctx.r3.u32 + 236, ctx.r11.u32);
	// blr 
	return;
loc_837DC5A0:
	// lwz r11,236(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// stw r10,236(r3)
	PPC_STORE_U32(ctx.r3.u32 + 236, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837DC5C0"))) PPC_WEAK_FUNC(sub_837DC5C0);
PPC_FUNC_IMPL(__imp__sub_837DC5C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,73(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 73);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,73(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 73);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x837dc60c
	if (!cr6.eq) goto loc_837DC60C;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r9,73(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 73);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x837dc604
	if (!cr6.eq) goto loc_837DC604;
loc_837DC5F0:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,73(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 73);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x837dc5f0
	if (cr6.eq) goto loc_837DC5F0;
loc_837DC604:
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_837DC60C:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,73(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 73);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837dc644
	if (!cr6.eq) goto loc_837DC644;
loc_837DC61C:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x837dc644
	if (!cr6.eq) goto loc_837DC644;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,73(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 73);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837dc61c
	if (cr6.eq) goto loc_837DC61C;
loc_837DC644:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837DC64C"))) PPC_WEAK_FUNC(sub_837DC64C);
PPC_FUNC_IMPL(__imp__sub_837DC64C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837DC650"))) PPC_WEAK_FUNC(sub_837DC650);
PPC_FUNC_IMPL(__imp__sub_837DC650) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,189(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 189);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,189(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 189);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x837dc69c
	if (!cr6.eq) goto loc_837DC69C;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r9,189(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 189);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x837dc694
	if (!cr6.eq) goto loc_837DC694;
loc_837DC680:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,189(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 189);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x837dc680
	if (cr6.eq) goto loc_837DC680;
loc_837DC694:
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_837DC69C:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,189(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 189);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837dc6d4
	if (!cr6.eq) goto loc_837DC6D4;
loc_837DC6AC:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x837dc6d4
	if (!cr6.eq) goto loc_837DC6D4;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,189(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 189);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837dc6ac
	if (cr6.eq) goto loc_837DC6AC;
loc_837DC6D4:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837DC6DC"))) PPC_WEAK_FUNC(sub_837DC6DC);
PPC_FUNC_IMPL(__imp__sub_837DC6DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837DC6E0"))) PPC_WEAK_FUNC(sub_837DC6E0);
PPC_FUNC_IMPL(__imp__sub_837DC6E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,121(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 121);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,121(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 121);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x837dc72c
	if (!cr6.eq) goto loc_837DC72C;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r9,121(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 121);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x837dc724
	if (!cr6.eq) goto loc_837DC724;
loc_837DC710:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,121(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 121);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x837dc710
	if (cr6.eq) goto loc_837DC710;
loc_837DC724:
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_837DC72C:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,121(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 121);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837dc764
	if (!cr6.eq) goto loc_837DC764;
loc_837DC73C:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x837dc764
	if (!cr6.eq) goto loc_837DC764;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,121(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 121);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837dc73c
	if (cr6.eq) goto loc_837DC73C;
loc_837DC764:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

