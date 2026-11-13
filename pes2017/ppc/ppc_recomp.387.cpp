#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83575EF8"))) PPC_WEAK_FUNC(sub_83575EF8);
PPC_FUNC_IMPL(__imp__sub_83575EF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// ld r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83575f58
	if (!cr6.eq) goto loc_83575F58;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
loc_83575F3C:
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
	// bne 0x83575f3c
	if (!cr0.eq) goto loc_83575F3C;
loc_83575F58:
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x835cc8d0
	ctx.lr = 0x83575F64;
	sub_835CC8D0(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83575F88"))) PPC_WEAK_FUNC(sub_83575F88);
PPC_FUNC_IMPL(__imp__sub_83575F88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// ld r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83575fe8
	if (!cr6.eq) goto loc_83575FE8;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
loc_83575FCC:
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
	// bne 0x83575fcc
	if (!cr0.eq) goto loc_83575FCC;
loc_83575FE8:
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x835cc8d0
	ctx.lr = 0x83575FF4;
	sub_835CC8D0(ctx, base);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83576018"))) PPC_WEAK_FUNC(sub_83576018);
PPC_FUNC_IMPL(__imp__sub_83576018) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// addi r9,r10,-21648
	ctx.r9.s64 = ctx.r10.s64 + -21648;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ld r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// std r8,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r8.u64);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x8357606c
	if (!cr6.eq) goto loc_8357606C;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
loc_83576050:
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
	// bne 0x83576050
	if (!cr0.eq) goto loc_83576050;
loc_8357606C:
	// stw r5,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83576074"))) PPC_WEAK_FUNC(sub_83576074);
PPC_FUNC_IMPL(__imp__sub_83576074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83576078"))) PPC_WEAK_FUNC(sub_83576078);
PPC_FUNC_IMPL(__imp__sub_83576078) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83576080;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x83585c58
	ctx.lr = 0x83576098;
	sub_83585C58(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x835760d4
	if (!cr6.eq) goto loc_835760D4;
loc_835760A4:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// std r31,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r31.u64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// bl 0x82574ba8
	ctx.lr = 0x835760BC;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8357619c
	if (cr6.eq) goto loc_8357619C;
	// bl 0x83565458
	ctx.lr = 0x835760C8;
	sub_83565458(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_835760D4:
	// bl 0x83565440
	ctx.lr = 0x835760D8;
	sub_83565440(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83585cb0
	ctx.lr = 0x835760E4;
	sub_83585CB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835760a4
	if (cr6.eq) goto loc_835760A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832d8
	ctx.lr = 0x835760F8;
	sub_825832D8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835760a4
	if (cr6.eq) goto loc_835760A4;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83576018
	ctx.lr = 0x83576114;
	sub_83576018(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// bctrl 
	ctx.lr = 0x83576130;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8357d0c0
	ctx.lr = 0x8357613C;
	sub_8357D0C0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x833d6d90
	ctx.lr = 0x83576144;
	sub_833D6D90(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// std r31,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r31.u64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// bne cr6,0x83576174
	if (!cr6.eq) goto loc_83576174;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82574ba8
	ctx.lr = 0x83576164;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8357617c
	if (cr6.eq) goto loc_8357617C;
	// bl 0x83565458
	ctx.lr = 0x83576170;
	sub_83565458(ctx, base);
	// b 0x8357617c
	goto loc_8357617C;
loc_83576174:
	// bl 0x82574ba8
	ctx.lr = 0x83576178;
	sub_82574BA8(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
loc_8357617C:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82574ba8
	ctx.lr = 0x83576188;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83576194
	if (cr6.eq) goto loc_83576194;
	// bl 0x83565458
	ctx.lr = 0x83576194;
	sub_83565458(ctx, base);
loc_83576194:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83575030
	ctx.lr = 0x8357619C;
	sub_83575030(ctx, base);
loc_8357619C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835761A8"))) PPC_WEAK_FUNC(sub_835761A8);
PPC_FUNC_IMPL(__imp__sub_835761A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x835761B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8395b0f8
	ctx.lr = 0x835761C8;
	sub_8395B0F8(ctx, base);
	// rlwinm r11,r3,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83576220
	if (!cr6.eq) goto loc_83576220;
	// li r11,-2
	ctx.r11.s64 = -2;
	// addi r8,r29,4
	ctx.r8.s64 = ctx.r29.s64 + 4;
loc_835761DC:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x835761dc
	if (!cr0.eq) goto loc_835761DC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bgt cr6,0x8357633c
	if (cr6.gt) goto loc_8357633C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83576218;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83576220:
	// addi r30,r29,4
	ctx.r30.s64 = ctx.r29.s64 + 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83575210
	ctx.lr = 0x83576230;
	sub_83575210(ctx, base);
	// not r11,r3
	ctx.r11.u64 = ~ctx.r3.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x835762e0
	if (cr6.eq) goto loc_835762E0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// ble cr6,0x83576270
	if (!cr6.gt) goto loc_83576270;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// beq cr6,0x83576270
	if (cr6.eq) goto loc_83576270;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83575458
	ctx.lr = 0x83576268;
	sub_83575458(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83576270:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82596fe8
	ctx.lr = 0x83576278;
	sub_82596FE8(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82596fe8
	ctx.lr = 0x8357628C;
	sub_82596FE8(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// addi r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 + 11;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwzx r4,r11,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x8378d870
	ctx.lr = 0x835762B0;
	sub_8378D870(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r9,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82597088
	ctx.lr = 0x835762C4;
	sub_82597088(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835751c0
	ctx.lr = 0x835762D0;
	sub_835751C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82597088
	ctx.lr = 0x835762D8;
	sub_82597088(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_835762E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82596fe8
	ctx.lr = 0x835762E8;
	sub_82596FE8(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82596fe8
	ctx.lr = 0x835762FC;
	sub_82596FE8(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// addi r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 + 11;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwzx r4,r11,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x8378d870
	ctx.lr = 0x83576320;
	sub_8378D870(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r9,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82597088
	ctx.lr = 0x83576334;
	sub_82597088(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82597088
	ctx.lr = 0x8357633C;
	sub_82597088(ctx, base);
loc_8357633C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83576344"))) PPC_WEAK_FUNC(sub_83576344);
PPC_FUNC_IMPL(__imp__sub_83576344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83576348"))) PPC_WEAK_FUNC(sub_83576348);
PPC_FUNC_IMPL(__imp__sub_83576348) {
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
	// beq cr6,0x83576380
	if (cr6.eq) goto loc_83576380;
loc_8357636C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83521f50
	ctx.lr = 0x83576374;
	sub_83521F50(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bne cr6,0x8357636c
	if (!cr6.eq) goto loc_8357636C;
loc_83576380:
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

__attribute__((alias("__imp__sub_83576398"))) PPC_WEAK_FUNC(sub_83576398);
PPC_FUNC_IMPL(__imp__sub_83576398) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x835763A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,12
	ctx.r30.s64 = ctx.r3.s64 + 12;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8258be28
	ctx.lr = 0x835763BC;
	sub_8258BE28(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r29,0(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x825835e0
	ctx.lr = 0x835763DC;
	sub_825835E0(ctx, base);
	// lbz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x835763f4
	if (cr6.eq) goto loc_835763F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x83575980
	ctx.lr = 0x835763F4;
	sub_83575980(ctx, base);
loc_835763F4:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// blt cr6,0x83576408
	if (cr6.lt) goto loc_83576408;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8258be88
	ctx.lr = 0x83576408;
	sub_8258BE88(ctx, base);
loc_83576408:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83576410"))) PPC_WEAK_FUNC(sub_83576410);
PPC_FUNC_IMPL(__imp__sub_83576410) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83576418;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,2047
	ctx.r10.s64 = 134152192;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// ori r9,r10,65534
	ctx.r9.u64 = ctx.r10.u64 | 65534;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83576480
	if (cr6.lt) goto loc_83576480;
	// addi r31,r7,16
	ctx.r31.s64 = ctx.r7.s64 + 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82574ba8
	ctx.lr = 0x8357644C;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83576458
	if (cr6.eq) goto loc_83576458;
	// bl 0x83565458
	ctx.lr = 0x83576458;
	sub_83565458(ctx, base);
loc_83576458:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x83521f50
	ctx.lr = 0x83576460;
	sub_83521F50(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83576474;
	sub_825952B8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r10,12808
	ctx.r3.s64 = ctx.r10.s64 + 12808;
	// bl 0x831cc150
	ctx.lr = 0x83576480;
	sub_831CC150(ctx, base);
loc_83576480:
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
	// bne cr6,0x835764b0
	if (!cr6.eq) goto loc_835764B0;
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
	// b 0x835764f0
	goto loc_835764F0;
loc_835764B0:
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835764d8
	if (cr6.eq) goto loc_835764D8;
	// stw r27,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r27.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// bne cr6,0x835764f0
	if (!cr6.eq) goto loc_835764F0;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// b 0x835764f0
	goto loc_835764F0;
loc_835764D8:
	// stw r27,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r27.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// bne cr6,0x835764f0
	if (!cr6.eq) goto loc_835764F0;
	// stw r27,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r27.u32);
loc_835764F0:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// lbz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 48);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83576614
	if (!cr6.eq) goto loc_83576614;
	// li r28,0
	ctx.r28.s64 = 0;
loc_8357650C:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bne cr6,0x83576594
	if (!cr6.eq) goto loc_83576594;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 48);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83576554
	if (!cr6.eq) goto loc_83576554;
	// rotlwi r10,r4,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stb r29,48(r10)
	PPC_STORE_U8(ctx.r10.u32 + 48, ctx.r29.u8);
	// stb r29,48(r11)
	PPC_STORE_U8(ctx.r11.u32 + 48, ctx.r29.u8);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r28,48(r8)
	PPC_STORE_U8(ctx.r8.u32 + 48, ctx.r28.u8);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r31,4(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// b 0x83576604
	goto loc_83576604;
loc_83576554:
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x8357656c
	if (!cr6.eq) goto loc_8357656C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82ef1a10
	ctx.lr = 0x8357656C;
	sub_82EF1A10(ctx, base);
loc_8357656C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r29,48(r11)
	PPC_STORE_U8(ctx.r11.u32 + 48, ctx.r29.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r28,48(r9)
	PPC_STORE_U8(ctx.r9.u32 + 48, ctx.r28.u8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x82ef1940
	ctx.lr = 0x83576590;
	sub_82EF1940(ctx, base);
	// b 0x83576604
	goto loc_83576604;
loc_83576594:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 48);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x835765c8
	if (!cr6.eq) goto loc_835765C8;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r29,48(r10)
	PPC_STORE_U8(ctx.r10.u32 + 48, ctx.r29.u8);
	// stb r29,48(r11)
	PPC_STORE_U8(ctx.r11.u32 + 48, ctx.r29.u8);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r28,48(r8)
	PPC_STORE_U8(ctx.r8.u32 + 48, ctx.r28.u8);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r31,4(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// b 0x83576604
	goto loc_83576604;
loc_835765C8:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x835765e0
	if (!cr6.eq) goto loc_835765E0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82ef1940
	ctx.lr = 0x835765E0;
	sub_82EF1940(ctx, base);
loc_835765E0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r29,48(r11)
	PPC_STORE_U8(ctx.r11.u32 + 48, ctx.r29.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r28,48(r9)
	PPC_STORE_U8(ctx.r9.u32 + 48, ctx.r28.u8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x82ef1a10
	ctx.lr = 0x83576604;
	sub_82EF1A10(ctx, base);
loc_83576604:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 48);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8357650c
	if (cr6.eq) goto loc_8357650C;
loc_83576614:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r27,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r27.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stb r29,48(r10)
	PPC_STORE_U8(ctx.r10.u32 + 48, ctx.r29.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83576630"))) PPC_WEAK_FUNC(sub_83576630);
PPC_FUNC_IMPL(__imp__sub_83576630) {
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
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83576668
	if (cr6.eq) goto loc_83576668;
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// bge cr6,0x83576668
	if (!cr6.lt) goto loc_83576668;
	// stw r5,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r5.u32);
	// addi r11,r5,42
	ctx.r11.s64 = ctx.r5.s64 + 42;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// bl 0x83576398
	ctx.lr = 0x83576668;
	sub_83576398(ctx, base);
loc_83576668:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83576678"))) PPC_WEAK_FUNC(sub_83576678);
PPC_FUNC_IMPL(__imp__sub_83576678) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83576680;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,49(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 49);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r5,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r5.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835766a8
	if (cr6.eq) goto loc_835766A8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,11564
	ctx.r3.s64 = ctx.r11.s64 + 11564;
	// bl 0x831cc188
	ctx.lr = 0x835766A8;
	sub_831CC188(ctx, base);
loc_835766A8:
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x83871bf8
	ctx.lr = 0x835766B4;
	sub_83871BF8(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lbz r10,49(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 49);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r25,196(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// beq cr6,0x835766d0
	if (cr6.eq) goto loc_835766D0;
	// lwz r28,8(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// b 0x835766f4
	goto loc_835766F4;
loc_835766D0:
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lbz r9,49(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 49);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x835766e8
	if (cr6.eq) goto loc_835766E8;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// b 0x835766f4
	goto loc_835766F4;
loc_835766E8:
	// lwz r28,8(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmplw cr6,r25,r26
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r26.u32, xer);
	// bne cr6,0x835767e0
	if (!cr6.eq) goto loc_835767E0;
loc_835766F4:
	// lbz r11,49(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 49);
	// lwz r31,4(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83576708
	if (!cr6.eq) goto loc_83576708;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_83576708:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// bne cr6,0x83576720
	if (!cr6.eq) goto loc_83576720;
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// b 0x83576738
	goto loc_83576738;
loc_83576720:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x83576734
	if (!cr6.eq) goto loc_83576734;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// b 0x83576738
	goto loc_83576738;
loc_83576734:
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
loc_83576738:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x83576788
	if (!cr6.eq) goto loc_83576788;
	// lbz r11,49(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 49);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8357675c
	if (cr6.eq) goto loc_8357675C;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x83576784
	goto loc_83576784;
loc_8357675C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lbz r8,49(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 49);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83576784
	if (!cr6.eq) goto loc_83576784;
loc_83576770:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,49(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 49);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83576770
	if (cr6.eq) goto loc_83576770;
loc_83576784:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_83576788:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x83576874
	if (!cr6.eq) goto loc_83576874;
	// lbz r11,49(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 49);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835767b0
	if (cr6.eq) goto loc_835767B0;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r31,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r31.u32);
	// b 0x83576874
	goto loc_83576874;
loc_835767B0:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lbz r8,49(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 49);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x835767d8
	if (!cr6.eq) goto loc_835767D8;
loc_835767C4:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,49(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 49);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x835767c4
	if (cr6.eq) goto loc_835767C4;
loc_835767D8:
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// b 0x83576874
	goto loc_83576874;
loc_835767E0:
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
	// bne cr6,0x83576800
	if (!cr6.eq) goto loc_83576800;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// b 0x83576828
	goto loc_83576828;
loc_83576800:
	// lbz r11,49(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 49);
	// lwz r31,4(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83576814
	if (!cr6.eq) goto loc_83576814;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_83576814:
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
loc_83576828:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// bne cr6,0x83576840
	if (!cr6.eq) goto loc_83576840;
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// b 0x8357685c
	goto loc_8357685C;
loc_83576840:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// bne cr6,0x83576858
	if (!cr6.eq) goto loc_83576858;
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// b 0x8357685c
	goto loc_8357685C;
loc_83576858:
	// stw r25,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r25.u32);
loc_8357685C:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// lbz r9,48(r26)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r26.u32 + 48);
	// lbz r10,48(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + 48);
	// stb r9,48(r25)
	PPC_STORE_U8(ctx.r25.u32 + 48, ctx.r9.u8);
	// stb r10,48(r26)
	PPC_STORE_U8(ctx.r26.u32 + 48, ctx.r10.u8);
loc_83576874:
	// lbz r11,48(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 48);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83576a0c
	if (!cr6.eq) goto loc_83576A0C;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, xer);
	// beq cr6,0x83576a08
	if (cr6.eq) goto loc_83576A08;
	// li r30,0
	ctx.r30.s64 = 0;
loc_83576898:
	// lbz r11,48(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 48);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83576a08
	if (!cr6.eq) goto loc_83576A08;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// bne cr6,0x83576950
	if (!cr6.eq) goto loc_83576950;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lbz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 48);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x835768d8
	if (!cr6.eq) goto loc_835768D8;
	// stb r29,48(r11)
	PPC_STORE_U8(ctx.r11.u32 + 48, ctx.r29.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r30,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ef1a10
	ctx.lr = 0x835768D4;
	sub_82EF1A10(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_835768D8:
	// lbz r10,49(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 49);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x835769a4
	if (!cr6.eq) goto loc_835769A4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 48);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x83576904
	if (!cr6.eq) goto loc_83576904;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 48);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// beq cr6,0x835769a0
	if (cr6.eq) goto loc_835769A0;
loc_83576904:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 48);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x8357692c
	if (!cr6.eq) goto loc_8357692C;
	// stb r29,48(r10)
	PPC_STORE_U8(ctx.r10.u32 + 48, ctx.r29.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r30,48(r11)
	PPC_STORE_U8(ctx.r11.u32 + 48, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ef1940
	ctx.lr = 0x83576928;
	sub_82EF1940(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_8357692C:
	// lbz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 48);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r10,48(r11)
	PPC_STORE_U8(ctx.r11.u32 + 48, ctx.r10.u8);
	// stb r29,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r29.u8);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stb r29,48(r9)
	PPC_STORE_U8(ctx.r9.u32 + 48, ctx.r29.u8);
	// bl 0x82ef1a10
	ctx.lr = 0x8357694C;
	sub_82EF1A10(ctx, base);
	// b 0x83576a08
	goto loc_83576A08;
loc_83576950:
	// lbz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 48);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83576974
	if (!cr6.eq) goto loc_83576974;
	// stb r29,48(r11)
	PPC_STORE_U8(ctx.r11.u32 + 48, ctx.r29.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r30,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ef1940
	ctx.lr = 0x83576970;
	sub_82EF1940(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_83576974:
	// lbz r10,49(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 49);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x835769a4
	if (!cr6.eq) goto loc_835769A4;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 48);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x835769c0
	if (!cr6.eq) goto loc_835769C0;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 48);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x835769c0
	if (!cr6.eq) goto loc_835769C0;
loc_835769A0:
	// stb r30,48(r11)
	PPC_STORE_U8(ctx.r11.u32 + 48, ctx.r30.u8);
loc_835769A4:
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
	// bne cr6,0x83576898
	if (!cr6.eq) goto loc_83576898;
	// b 0x83576a08
	goto loc_83576A08;
loc_835769C0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 48);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x835769e8
	if (!cr6.eq) goto loc_835769E8;
	// stb r29,48(r10)
	PPC_STORE_U8(ctx.r10.u32 + 48, ctx.r29.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r30,48(r11)
	PPC_STORE_U8(ctx.r11.u32 + 48, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ef1a10
	ctx.lr = 0x835769E4;
	sub_82EF1A10(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_835769E8:
	// lbz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 48);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r10,48(r11)
	PPC_STORE_U8(ctx.r11.u32 + 48, ctx.r10.u8);
	// stb r29,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r29.u8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r29,48(r9)
	PPC_STORE_U8(ctx.r9.u32 + 48, ctx.r29.u8);
	// bl 0x82ef1940
	ctx.lr = 0x83576A08;
	sub_82EF1940(ctx, base);
loc_83576A08:
	// stb r29,48(r28)
	PPC_STORE_U8(ctx.r28.u32 + 48, ctx.r29.u8);
loc_83576A0C:
	// addi r31,r26,16
	ctx.r31.s64 = ctx.r26.s64 + 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82574ba8
	ctx.lr = 0x83576A1C;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83576a28
	if (cr6.eq) goto loc_83576A28;
	// bl 0x83565458
	ctx.lr = 0x83576A28;
	sub_83565458(ctx, base);
loc_83576A28:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x83521f50
	ctx.lr = 0x83576A30;
	sub_83521F50(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83576A44;
	sub_825952B8(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83576a58
	if (cr6.eq) goto loc_83576A58;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
loc_83576A58:
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

__attribute__((alias("__imp__sub_83576A68"))) PPC_WEAK_FUNC(sub_83576A68);
PPC_FUNC_IMPL(__imp__sub_83576A68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83576A70;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,49(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 49);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83576ae4
	if (!cr6.eq) goto loc_83576AE4;
	// li r27,2
	ctx.r27.s64 = 2;
loc_83576A90:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x83576a68
	ctx.lr = 0x83576A9C;
	sub_83576A68(ctx, base);
	// addi r29,r30,16
	ctx.r29.s64 = ctx.r30.s64 + 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82574ba8
	ctx.lr = 0x83576AB0;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83576abc
	if (cr6.eq) goto loc_83576ABC;
	// bl 0x83565458
	ctx.lr = 0x83576ABC;
	sub_83565458(ctx, base);
loc_83576ABC:
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x83521f50
	ctx.lr = 0x83576AC4;
	sub_83521F50(ctx, base);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83576AD4;
	sub_825952B8(ctx, base);
	// lbz r11,49(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 49);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83576a90
	if (cr6.eq) goto loc_83576A90;
loc_83576AE4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83576AEC"))) PPC_WEAK_FUNC(sub_83576AEC);
PPC_FUNC_IMPL(__imp__sub_83576AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83576AF0"))) PPC_WEAK_FUNC(sub_83576AF0);
PPC_FUNC_IMPL(__imp__sub_83576AF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x83576AF8;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// bl 0x82590a20
	ctx.lr = 0x83576B10;
	sub_82590A20(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r10,r11,12264
	ctx.r10.s64 = ctx.r11.s64 + 12264;
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// stw r27,24(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24, ctx.r27.u32);
	// bl 0x82534518
	ctx.lr = 0x83576B2C;
	sub_82534518(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r9,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r9.u32);
	// addi r29,r28,32
	ctx.r29.s64 = ctx.r28.s64 + 32;
	// stw r9,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r9.u32);
	// lwz r8,20(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// stw r8,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r8.u32);
	// stw r27,36(r28)
	PPC_STORE_U32(ctx.r28.u32 + 36, ctx.r27.u32);
	// bl 0x82534518
	ctx.lr = 0x83576B50;
	sub_82534518(ctx, base);
	// stw r3,32(r28)
	PPC_STORE_U32(ctx.r28.u32 + 32, ctx.r3.u32);
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// lwz r7,32(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// stw r7,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r7.u32);
	// beq cr6,0x83576c28
	if (cr6.eq) goto loc_83576C28;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// addi r25,r11,-21656
	ctx.r25.s64 = ctx.r11.s64 + -21656;
	// ori r22,r10,65534
	ctx.r22.u64 = ctx.r10.u64 | 65534;
loc_83576B7C:
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,8
	ctx.r4.s64 = 8;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// li r3,136
	ctx.r3.s64 = 136;
	// bl 0x825730a8
	ctx.lr = 0x83576B90;
	sub_825730A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83576c1c
	if (cr6.eq) goto loc_83576C1C;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x825839e0
	ctx.lr = 0x83576BA4;
	sub_825839E0(ctx, base);
	// stw r28,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r28.u32);
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
	// addi r3,r31,124
	ctx.r3.s64 = ctx.r31.s64 + 124;
	// bl 0x8258bee8
	ctx.lr = 0x83576BB4;
	sub_8258BEE8(ctx, base);
	// stw r26,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r26.u32);
	// stb r27,133(r31)
	PPC_STORE_U8(ctx.r31.u32 + 133, ctx.r27.u8);
	// li r3,12
	ctx.r3.s64 = 12;
	// stb r27,132(r31)
	PPC_STORE_U8(ctx.r31.u32 + 132, ctx.r27.u8);
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r21,4(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82534518
	ctx.lr = 0x83576BD0;
	sub_82534518(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// addic. r10,r3,8
	xer.ca = ctx.r3.u32 > 4294967287;
	ctx.r10.s64 = ctx.r3.s64 + 8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r21,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r21.u32);
	// beq 0x83576be8
	if (cr0.eq) goto loc_83576BE8;
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
loc_83576BE8:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// subf r9,r10,r22
	ctx.r9.s64 = ctx.r22.s64 - ctx.r10.s64;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// blt cr6,0x83576c34
	if (cr6.lt) goto loc_83576C34;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// bl 0x82583340
	ctx.lr = 0x83576C1C;
	sub_82583340(ctx, base);
loc_83576C1C:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmplw cr6,r26,r23
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r23.u32, xer);
	// blt cr6,0x83576b7c
	if (cr6.lt) goto loc_83576B7C;
loc_83576C28:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_83576C34:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,15616
	ctx.r3.s64 = ctx.r11.s64 + 15616;
	// bl 0x831cc150
	ctx.lr = 0x83576C40;
	sub_831CC150(ctx, base);
}

__attribute__((alias("__imp__sub_83576C40"))) PPC_WEAK_FUNC(sub_83576C40);
PPC_FUNC_IMPL(__imp__sub_83576C40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83576C48;
	__savegprlr_24(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x825749e0
	ctx.lr = 0x83576C60;
	sub_825749E0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x835753c0
	ctx.lr = 0x83576C68;
	sub_835753C0(ctx, base);
	// lbz r11,132(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 132);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83576e10
	if (!cr6.eq) goto loc_83576E10;
	// lis r11,2048
	ctx.r11.s64 = 134217728;
	// li r24,1
	ctx.r24.s64 = 1;
	// ori r25,r11,10
	ctx.r25.u64 = ctx.r11.u64 | 10;
loc_83576C80:
	// lwz r31,120(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 120);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r28,r31,12
	ctx.r28.s64 = ctx.r31.s64 + 12;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8258be28
	ctx.lr = 0x83576C94;
	sub_8258BE28(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r27,0(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bgt cr6,0x83576cd0
	if (cr6.gt) goto loc_83576CD0;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// blt cr6,0x83576cb8
	if (cr6.lt) goto loc_83576CB8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x8258be88
	ctx.lr = 0x83576CB8;
	sub_8258BE88(ctx, base);
loc_83576CB8:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x83576dfc
	if (cr6.eq) goto loc_83576DFC;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// bl 0x825834e0
	ctx.lr = 0x83576CCC;
	sub_825834E0(ctx, base);
	// b 0x83576e04
	goto loc_83576E04;
loc_83576CD0:
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// lwz r30,8(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// beq cr6,0x83576d18
	if (cr6.eq) goto loc_83576D18;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// bl 0x8386d088
	ctx.lr = 0x83576D0C;
	sub_8386D088(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
loc_83576D18:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// blt cr6,0x83576d2c
	if (cr6.lt) goto loc_83576D2C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8258be88
	ctx.lr = 0x83576D2C;
	sub_8258BE88(ctx, base);
loc_83576D2C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83576cb8
	if (cr6.eq) goto loc_83576CB8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83576D48;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpw cr6,r3,r25
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r25.s32, xer);
	// beq cr6,0x83576d80
	if (cr6.eq) goto loc_83576D80;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x83576D60;
	sub_82595150(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83576D78;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x83576D80;
	sub_82595170(ctx, base);
loc_83576D80:
	// lwz r31,120(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 120);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// addi r30,r31,12
	ctx.r30.s64 = ctx.r31.s64 + 12;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8258be28
	ctx.lr = 0x83576D94;
	sub_8258BE28(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r31,24(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x83576db0
	if (cr6.lt) goto loc_83576DB0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8258be88
	ctx.lr = 0x83576DB0;
	sub_8258BE88(ctx, base);
loc_83576DB0:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83576dec
	if (!cr6.eq) goto loc_83576DEC;
	// lwz r11,120(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 120);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// addi r31,r11,12
	ctx.r31.s64 = ctx.r11.s64 + 12;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8258be28
	ctx.lr = 0x83576DCC;
	sub_8258BE28(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8258bdc8
	ctx.lr = 0x83576DD8;
	sub_8258BDC8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x8258be88
	ctx.lr = 0x83576DE4;
	sub_8258BE88(ctx, base);
	// li r26,8
	ctx.r26.s64 = 8;
	// b 0x83576e04
	goto loc_83576E04;
loc_83576DEC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,120(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 120);
	// bl 0x83575980
	ctx.lr = 0x83576DF8;
	sub_83575980(ctx, base);
	// b 0x83576e04
	goto loc_83576E04;
loc_83576DFC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x835753c0
	ctx.lr = 0x83576E04;
	sub_835753C0(ctx, base);
loc_83576E04:
	// lbz r11,132(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 132);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83576c80
	if (cr6.eq) goto loc_83576C80;
loc_83576E10:
	// lwz r11,120(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 120);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82574a08
	ctx.lr = 0x83576E1C;
	sub_82574A08(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83576E24"))) PPC_WEAK_FUNC(sub_83576E24);
PPC_FUNC_IMPL(__imp__sub_83576E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83576E28"))) PPC_WEAK_FUNC(sub_83576E28);
PPC_FUNC_IMPL(__imp__sub_83576E28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x83576E30;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,4(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r23,1
	ctx.r23.s64 = 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// addi r27,r5,16
	ctx.r27.s64 = ctx.r5.s64 + 16;
	// lwz r31,4(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// lbz r11,49(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 49);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83576ec0
	if (!cr6.eq) goto loc_83576EC0;
	// clrlwi r24,r6,24
	ctx.r24.u64 = ctx.r6.u32 & 0xFF;
loc_83576E64:
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x83576e8c
	if (cr6.eq) goto loc_83576E8C;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x83574ef0
	ctx.lr = 0x83576E7C;
	sub_83574EF0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r30,r10,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x83576e9c
	goto loc_83576E9C;
loc_83576E8C:
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83574ef0
	ctx.lr = 0x83576E98;
	sub_83574EF0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_83576E9C:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83576eb0
	if (cr6.eq) goto loc_83576EB0;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x83576eb4
	goto loc_83576EB4;
loc_83576EB0:
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_83576EB4:
	// lbz r11,49(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 49);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83576e64
	if (cr6.eq) goto loc_83576E64;
loc_83576EC0:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83576f20
	if (cr6.eq) goto loc_83576F20;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, xer);
	// bne cr6,0x83576f18
	if (!cr6.eq) goto loc_83576F18;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x83576410
	ctx.lr = 0x83576EFC;
	sub_83576410(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r23,4(r28)
	PPC_STORE_U8(ctx.r28.u32 + 4, ctx.r23.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_83576F18:
	// bl 0x82ef1898
	ctx.lr = 0x83576F1C;
	sub_82EF1898(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_83576F20:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x83574ef0
	ctx.lr = 0x83576F2C;
	sub_83574EF0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83576f6c
	if (cr6.eq) goto loc_83576F6C;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83576410
	ctx.lr = 0x83576F50;
	sub_83576410(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r23,4(r28)
	PPC_STORE_U8(ctx.r28.u32 + 4, ctx.r23.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_83576F6C:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r27,16
	ctx.r3.s64 = ctx.r27.s64 + 16;
	// bl 0x82574ba8
	ctx.lr = 0x83576F78;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83576f84
	if (cr6.eq) goto loc_83576F84;
	// bl 0x83565458
	ctx.lr = 0x83576F84;
	sub_83565458(ctx, base);
loc_83576F84:
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// bl 0x83521f50
	ctx.lr = 0x83576F8C;
	sub_83521F50(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x83576FA0;
	sub_825952B8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r10,4(r28)
	PPC_STORE_U8(ctx.r28.u32 + 4, ctx.r10.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83576FB8"))) PPC_WEAK_FUNC(sub_83576FB8);
PPC_FUNC_IMPL(__imp__sub_83576FB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83576FC0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r3,8
	ctx.r31.s64 = ctx.r3.s64 + 8;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83577024
	if (cr6.eq) goto loc_83577024;
	// bl 0x835652c0
	ctx.lr = 0x83576FDC;
	sub_835652C0(ctx, base);
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// bne cr6,0x83577090
	if (!cr6.eq) goto loc_83577090;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83577000;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83577034
	if (cr6.eq) goto loc_83577034;
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83565278
	ctx.lr = 0x83577018;
	sub_83565278(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83565310
	ctx.lr = 0x83577024;
	sub_83565310(ctx, base);
loc_83577024:
	// lis r3,2048
	ctx.r3.s64 = 134217728;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83577034:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x8357704C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83577064
	if (cr6.eq) goto loc_83577064;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83575670
	ctx.lr = 0x83577060;
	sub_83575670(ctx, base);
	// b 0x83577068
	goto loc_83577068;
loc_83577064:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83577068:
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r11,9596(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9596);
	// beq cr6,0x83577090
	if (cr6.eq) goto loc_83577090;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r3,176(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// bl 0x83576398
	ctx.lr = 0x83577090;
	sub_83576398(ctx, base);
loc_83577090:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8357709C"))) PPC_WEAK_FUNC(sub_8357709C);
PPC_FUNC_IMPL(__imp__sub_8357709C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835770A0"))) PPC_WEAK_FUNC(sub_835770A0);
PPC_FUNC_IMPL(__imp__sub_835770A0) {
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
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(ctx.r30.u32, 1, xer);
	// blt cr6,0x83577114
	if (cr6.lt) goto loc_83577114;
	// beq cr6,0x835770fc
	if (cr6.eq) goto loc_835770FC;
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(ctx.r30.u32, 3, xer);
	// bge cr6,0x8357712c
	if (!cr6.lt) goto loc_8357712C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x835770E0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_835770E0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_835770E4:
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
loc_835770FC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83577110;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x83577134
	goto loc_83577134;
loc_83577114:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83577128;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x83577134
	goto loc_83577134;
loc_8357712C:
	// cmplwi cr6,r30,2
	cr6.compare<uint32_t>(ctx.r30.u32, 2, xer);
	// bge cr6,0x835770e0
	if (!cr6.lt) goto loc_835770E0;
loc_83577134:
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// lwz r10,9596(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9596);
	// bge cr6,0x83577164
	if (!cr6.lt) goto loc_83577164;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r11,r11,42
	ctx.r11.s64 = ctx.r11.s64 + 42;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x83576398
	ctx.lr = 0x83577164;
	sub_83576398(ctx, base);
loc_83577164:
	// lis r3,2048
	ctx.r3.s64 = 134217728;
	// ori r3,r3,10
	ctx.r3.u64 = ctx.r3.u64 | 10;
	// b 0x835770e4
	goto loc_835770E4;
}

__attribute__((alias("__imp__sub_83577170"))) PPC_WEAK_FUNC(sub_83577170);
PPC_FUNC_IMPL(__imp__sub_83577170) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83577178;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82596fe8
	ctx.lr = 0x83577190;
	sub_82596FE8(ctx, base);
	// addi r27,r29,100
	ctx.r27.s64 = ctx.r29.s64 + 100;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83575e78
	ctx.lr = 0x835771A4;
	sub_83575E78(ctx, base);
	// lwz r11,104(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// beq cr6,0x835772b8
	if (cr6.eq) goto loc_835772B8;
	// lwz r3,32(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// addi r30,r28,32
	ctx.r30.s64 = ctx.r28.s64 + 32;
	// bl 0x835652c0
	ctx.lr = 0x835771C0;
	sub_835652C0(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x83577218
	if (cr6.gt) goto loc_83577218;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83577218
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83577218;
	// bdzf 4*cr6+eq,0x835771e8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_835771E8;
	// bdzf 4*cr6+eq,0x835771e8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_835771E8;
	// bdzf 4*cr6+eq,0x835771e8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_835771E8;
	// bne cr6,0x83577208
	if (!cr6.eq) goto loc_83577208;
loc_835771E8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835cc8d0
	ctx.lr = 0x835771F4;
	sub_835CC8D0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82597088
	ctx.lr = 0x835771FC;
	sub_82597088(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83577208:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x835771e8
	if (cr6.eq) goto loc_835771E8;
loc_83577218:
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83565278
	ctx.lr = 0x83577224;
	sub_83565278(ctx, base);
	// lis r4,2048
	ctx.r4.s64 = 134217728;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// ori r4,r4,14
	ctx.r4.u64 = ctx.r4.u64 | 14;
	// bl 0x83565310
	ctx.lr = 0x83577234;
	sub_83565310(ctx, base);
	// lwz r26,0(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8395b0f8
	ctx.lr = 0x83577240;
	sub_8395B0F8(ctx, base);
	// ori r4,r3,4
	ctx.r4.u64 = ctx.r3.u64 | 4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82df36c8
	ctx.lr = 0x8357724C;
	sub_82DF36C8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x83577290
	if (cr6.eq) goto loc_83577290;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
loc_83577264:
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
	// bne 0x83577264
	if (!cr0.eq) goto loc_83577264;
	// addi r3,r29,156
	ctx.r3.s64 = ctx.r29.s64 + 156;
	// lwz r4,156(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 156);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x83577290;
	sub_8378D870(ctx, base);
loc_83577290:
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8395b0f8
	ctx.lr = 0x8357729C;
	sub_8395B0F8(ctx, base);
	// rlwinm r4,r3,0,31,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82df36c8
	ctx.lr = 0x835772A8;
	sub_82DF36C8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83576678
	ctx.lr = 0x835772B8;
	sub_83576678(ctx, base);
loc_835772B8:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82574ba8
	ctx.lr = 0x835772D0;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835772dc
	if (cr6.eq) goto loc_835772DC;
	// bl 0x83565458
	ctx.lr = 0x835772DC;
	sub_83565458(ctx, base);
loc_835772DC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82597088
	ctx.lr = 0x835772E4;
	sub_82597088(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835772F0"))) PPC_WEAK_FUNC(sub_835772F0);
PPC_FUNC_IMPL(__imp__sub_835772F0) {
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
	// bl 0x83576a68
	ctx.lr = 0x83577310;
	sub_83576A68(ctx, base);
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

__attribute__((alias("__imp__sub_83577344"))) PPC_WEAK_FUNC(sub_83577344);
PPC_FUNC_IMPL(__imp__sub_83577344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83577348"))) PPC_WEAK_FUNC(sub_83577348);
PPC_FUNC_IMPL(__imp__sub_83577348) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83577350;
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
	// bne cr6,0x8357739c
	if (!cr6.eq) goto loc_8357739C;
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, xer);
	// bne cr6,0x8357739c
	if (!cr6.eq) goto loc_8357739C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x835772f0
	ctx.lr = 0x83577384;
	sub_835772F0(ctx, base);
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
loc_8357739C:
	// cmplw cr6,r5,r30
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r30.u32, xer);
	// beq cr6,0x835773cc
	if (cr6.eq) goto loc_835773CC;
loc_835773A4:
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x83871bf8
	ctx.lr = 0x835773B0;
	sub_83871BF8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83576678
	ctx.lr = 0x835773C0;
	sub_83576678(ctx, base);
	// lwz r5,164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplw cr6,r5,r30
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r30.u32, xer);
	// bne cr6,0x835773a4
	if (!cr6.eq) goto loc_835773A4;
loc_835773CC:
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

__attribute__((alias("__imp__sub_835773DC"))) PPC_WEAK_FUNC(sub_835773DC);
PPC_FUNC_IMPL(__imp__sub_835773DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835773E0"))) PPC_WEAK_FUNC(sub_835773E0);
PPC_FUNC_IMPL(__imp__sub_835773E0) {
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
	// beq cr6,0x83577420
	if (cr6.eq) goto loc_83577420;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83576348
	ctx.lr = 0x8357740C;
	sub_83576348(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83577420;
	sub_825952B8(ctx, base);
loc_83577420:
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

__attribute__((alias("__imp__sub_83577444"))) PPC_WEAK_FUNC(sub_83577444);
PPC_FUNC_IMPL(__imp__sub_83577444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83577448"))) PPC_WEAK_FUNC(sub_83577448);
PPC_FUNC_IMPL(__imp__sub_83577448) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83577450;
	__savegprlr_28(ctx, base);
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
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,56
	ctx.r4.s64 = 56;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83577478;
	sub_82595718(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addic. r3,r3,16
	xer.ca = ctx.r3.u32 > 4294967279;
	ctx.r3.s64 = ctx.r3.s64 + 16;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// stb r11,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r11.u8);
	// stb r11,49(r31)
	PPC_STORE_U8(ctx.r31.u32 + 49, ctx.r11.u8);
	// beq 0x835774b0
	if (cr0.eq) goto loc_835774B0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x83575f88
	ctx.lr = 0x835774B0;
	sub_83575F88(ctx, base);
loc_835774B0:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83576e28
	ctx.lr = 0x835774C4;
	sub_83576E28(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835774D0"))) PPC_WEAK_FUNC(sub_835774D0);
PPC_FUNC_IMPL(__imp__sub_835774D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x835774D8;
	__savegprlr_21(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82596fe8
	ctx.lr = 0x835774E4;
	sub_82596FE8(ctx, base);
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// addi r30,r31,156
	ctx.r30.s64 = ctx.r31.s64 + 156;
	// li r25,2
	ctx.r25.s64 = 2;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// beq cr6,0x835775a0
	if (cr6.eq) goto loc_835775A0;
	// li r26,-2
	ctx.r26.s64 = -2;
loc_83577500:
	// lwz r27,8(r4)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r29,0(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r28,r27,4
	ctx.r28.s64 = ctx.r27.s64 + 4;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bgt cr6,0x83577590
	if (cr6.gt) goto loc_83577590;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// beq cr6,0x83577554
	if (cr6.eq) goto loc_83577554;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// bl 0x825952b8
	ctx.lr = 0x83577548;
	sub_825952B8(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// stw r8,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r8.u32);
loc_83577554:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r28
	ea = ctx.r28.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r26,r11
	ctx.r10.u64 = ctx.r26.u64 + ctx.r11.u64;
	// stwcx. r10,0,r28
	ea = ctx.r28.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83577554
	if (!cr0.eq) goto loc_83577554;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bgt cr6,0x83577590
	if (cr6.gt) goto loc_83577590;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83577590;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83577590:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// bne cr6,0x83577500
	if (!cr6.eq) goto loc_83577500;
loc_835775A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82597088
	ctx.lr = 0x835775A8;
	sub_82597088(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82596fe8
	ctx.lr = 0x835775B0;
	sub_82596FE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,96(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// xori r11,r30,1
	ctx.r11.u64 = ctx.r30.u64 ^ 1;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bl 0x82597088
	ctx.lr = 0x835775C4;
	sub_82597088(ctx, base);
	// addi r11,r30,11
	ctx.r11.s64 = ctx.r30.s64 + 11;
	// addi r9,r30,1
	ctx.r9.s64 = ctx.r30.s64 + 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r9,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r24,r9,r31
	ctx.r24.u64 = ctx.r9.u64 + ctx.r31.u64;
	// add r27,r11,r31
	ctx.r27.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82596fe8
	ctx.lr = 0x835775EC;
	sub_82596FE8(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82596fe8
	ctx.lr = 0x835775F4;
	sub_82596FE8(ctx, base);
	// lwz r7,4(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83577828
	if (cr6.eq) goto loc_83577828;
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// li r22,0
	ctx.r22.s64 = 0;
	// ori r23,r11,65534
	ctx.r23.u64 = ctx.r11.u64 | 65534;
loc_8357760C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r26,0(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, xer);
	// beq cr6,0x8357777c
	if (cr6.eq) goto loc_8357777C;
loc_8357761C:
	// lwz r28,8(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// addi r10,r28,4
	ctx.r10.s64 = ctx.r28.s64 + 4;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
loc_83577628:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// ori r6,r11,1
	ctx.r6.u64 = ctx.r11.u64 | 1;
loc_83577630:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r8,0,r10
	ea = ctx.r10.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r8.u64 = __builtin_bswap32(reserved.u32);
	// cmpw cr6,r8,r11
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, xer);
	// bne cr6,0x83577654
	if (!cr6.eq) goto loc_83577654;
	// stwcx. r6,0,r10
	ea = ctx.r10.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r6.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83577630
	if (!cr0.eq) goto loc_83577630;
	// b 0x8357765c
	goto loc_8357765C;
loc_83577654:
	// stwcx. r8,0,r10
	ea = ctx.r10.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_8357765C:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x83577628
	if (!cr6.eq) goto loc_83577628;
	// not r11,r9
	ctx.r11.u64 = ~ctx.r9.u64;
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x835776d8
	if (cr6.eq) goto loc_835776D8;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// bne cr6,0x835776cc
	if (!cr6.eq) goto loc_835776CC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8395b0f8
	ctx.lr = 0x83577690;
	sub_8395B0F8(ctx, base);
	// rlwinm r4,r3,0,31,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82df36c8
	ctx.lr = 0x8357769C;
	sub_82DF36C8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x835410c0
	ctx.lr = 0x835776A4;
	sub_835410C0(ctx, base);
	// addi r30,r31,100
	ctx.r30.s64 = ctx.r31.s64 + 100;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x835752c0
	ctx.lr = 0x835776B8;
	sub_835752C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x83577348
	ctx.lr = 0x835776CC;
	sub_83577348(ctx, base);
loc_835776CC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83575458
	ctx.lr = 0x835776D4;
	sub_83575458(ctx, base);
	// b 0x8357776c
	goto loc_8357776C;
loc_835776D8:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82596fe8
	ctx.lr = 0x835776EC;
	sub_82596FE8(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 + 11;
	// li r4,12
	ctx.r4.s64 = 12;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwzx r30,r11,r31
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r21,4(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// bl 0x82595718
	ctx.lr = 0x83577720;
	sub_82595718(ctx, base);
	// addic. r11,r3,8
	xer.ca = ctx.r3.u32 > 4294967287;
	ctx.r11.s64 = ctx.r3.s64 + 8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// stw r21,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r21.u32);
	// beq 0x83577734
	if (cr0.eq) goto loc_83577734;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
loc_83577734:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// subf r10,r11,r23
	ctx.r10.s64 = ctx.r23.s64 - ctx.r11.s64;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// blt cr6,0x83577840
	if (cr6.lt) goto loc_83577840;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r9,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82597088
	ctx.lr = 0x8357776C;
	sub_82597088(ctx, base);
loc_8357776C:
	// lwz r26,0(r26)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, xer);
	// bne cr6,0x8357761c
	if (!cr6.eq) goto loc_8357761C;
loc_8357777C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// stw r22,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r22.u32);
	// beq cr6,0x835777c0
	if (cr6.eq) goto loc_835777C0;
loc_835777A0:
	// lwz r30,0(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// bl 0x825952b8
	ctx.lr = 0x835777B0;
	sub_825952B8(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bne cr6,0x835777a0
	if (!cr6.eq) goto loc_835777A0;
loc_835777C0:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82597088
	ctx.lr = 0x835777C8;
	sub_82597088(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82597088
	ctx.lr = 0x835777D0;
	sub_82597088(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82596fe8
	ctx.lr = 0x835777D8;
	sub_82596FE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,96(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// xori r11,r30,1
	ctx.r11.u64 = ctx.r30.u64 ^ 1;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bl 0x82597088
	ctx.lr = 0x835777EC;
	sub_82597088(ctx, base);
	// addi r11,r30,11
	ctx.r11.s64 = ctx.r30.s64 + 11;
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r24,r10,r31
	ctx.r24.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r27,r11,r31
	ctx.r27.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82596fe8
	ctx.lr = 0x83577814;
	sub_82596FE8(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82596fe8
	ctx.lr = 0x8357781C;
	sub_82596FE8(ctx, base);
	// lwz r8,4(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8357760c
	if (!cr6.eq) goto loc_8357760C;
loc_83577828:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82597088
	ctx.lr = 0x83577830;
	sub_82597088(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82597088
	ctx.lr = 0x83577838;
	sub_82597088(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_83577840:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,15616
	ctx.r3.s64 = ctx.r11.s64 + 15616;
	// bl 0x831cc150
	ctx.lr = 0x8357784C;
	sub_831CC150(ctx, base);
}

__attribute__((alias("__imp__sub_8357784C"))) PPC_WEAK_FUNC(sub_8357784C);
PPC_FUNC_IMPL(__imp__sub_8357784C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83577850"))) PPC_WEAK_FUNC(sub_83577850);
PPC_FUNC_IMPL(__imp__sub_83577850) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83577858;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82596fe8
	ctx.lr = 0x83577864;
	sub_82596FE8(ctx, base);
	// lwz r11,120(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 120);
	// addi r30,r29,116
	ctx.r30.s64 = ctx.r29.s64 + 116;
	// lwz r31,116(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 116);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x835778ec
	if (cr6.eq) goto loc_835778EC;
loc_83577878:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8395b0f8
	ctx.lr = 0x83577880;
	sub_8395B0F8(ctx, base);
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835778dc
	if (cr6.eq) goto loc_835778DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83575a28
	ctx.lr = 0x83577894;
	sub_83575A28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835778c4
	if (cr6.eq) goto loc_835778C4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x835778B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x835778c4
	if (!cr6.eq) goto loc_835778C4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83575bc8
	ctx.lr = 0x835778C4;
	sub_83575BC8(ctx, base);
loc_835778C4:
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8395b0f8
	ctx.lr = 0x835778D0;
	sub_8395B0F8(ctx, base);
	// rlwinm r4,r3,0,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82df36c8
	ctx.lr = 0x835778DC;
	sub_82DF36C8(ctx, base);
loc_835778DC:
	// lwz r11,120(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 120);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x83577878
	if (!cr6.eq) goto loc_83577878;
loc_835778EC:
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x83577920
	if (cr6.eq) goto loc_83577920;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x83575260
	ctx.lr = 0x83577908;
	sub_83575260(ctx, base);
	// addi r5,r30,12
	ctx.r5.s64 = ctx.r30.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x833f4e10
	ctx.lr = 0x8357791C;
	sub_833F4E10(ctx, base);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
loc_83577920:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82597088
	ctx.lr = 0x83577928;
	sub_82597088(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x835774d0
	ctx.lr = 0x83577930;
	sub_835774D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83577938"))) PPC_WEAK_FUNC(sub_83577938);
PPC_FUNC_IMPL(__imp__sub_83577938) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83577940;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x82596fe8
	ctx.lr = 0x83577958;
	sub_82596FE8(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8395b0f8
	ctx.lr = 0x83577960;
	sub_8395B0F8(ctx, base);
	// rlwinm r11,r3,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83577a14
	if (!cr6.eq) goto loc_83577A14;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8395b0f8
	ctx.lr = 0x83577978;
	sub_8395B0F8(ctx, base);
	// ori r4,r3,2
	ctx.r4.u64 = ctx.r3.u64 | 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82df36c8
	ctx.lr = 0x83577984;
	sub_82DF36C8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// std r30,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r30.u64);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// bl 0x82574ba8
	ctx.lr = 0x8357799C;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835779a8
	if (cr6.eq) goto loc_835779A8;
	// bl 0x83565458
	ctx.lr = 0x835779A8;
	sub_83565458(ctx, base);
loc_835779A8:
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83581980
	ctx.lr = 0x835779B8;
	sub_83581980(ctx, base);
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83575ef8
	ctx.lr = 0x835779CC;
	sub_83575EF8(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r29,100
	ctx.r4.s64 = ctx.r29.s64 + 100;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83577448
	ctx.lr = 0x835779DC;
	sub_83577448(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82574ba8
	ctx.lr = 0x835779E8;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835779f4
	if (cr6.eq) goto loc_835779F4;
	// bl 0x83565458
	ctx.lr = 0x835779F4;
	sub_83565458(ctx, base);
loc_835779F4:
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x83521f50
	ctx.lr = 0x835779FC;
	sub_83521F50(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82574ba8
	ctx.lr = 0x83577A08;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83577a14
	if (cr6.eq) goto loc_83577A14;
	// bl 0x83565458
	ctx.lr = 0x83577A14;
	sub_83565458(ctx, base);
loc_83577A14:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82597088
	ctx.lr = 0x83577A1C;
	sub_82597088(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83577A24"))) PPC_WEAK_FUNC(sub_83577A24);
PPC_FUNC_IMPL(__imp__sub_83577A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83577A28"))) PPC_WEAK_FUNC(sub_83577A28);
PPC_FUNC_IMPL(__imp__sub_83577A28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-21620
	ctx.r9.s64 = ctx.r10.s64 + -21620;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x83577a80
	if (!cr6.eq) goto loc_83577A80;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r6,r10,8
	ctx.r6.s64 = ctx.r10.s64 + 8;
loc_83577A64:
	// mfmsr r5
	ctx.r5.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r8,0,r6
	ea = ctx.r6.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r8.u64 = __builtin_bswap32(reserved.u32);
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stwcx. r7,0,r6
	ea = ctx.r6.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r7.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r5,1
	ctx.msr = (ctx.r5.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83577a64
	if (!cr0.eq) goto loc_83577A64;
loc_83577A80:
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
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
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83577AA0"))) PPC_WEAK_FUNC(sub_83577AA0);
PPC_FUNC_IMPL(__imp__sub_83577AA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83577AA8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// stw r6,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r11,-21620
	ctx.r10.s64 = ctx.r11.s64 + -21620;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x835212a0
	ctx.lr = 0x83577ADC;
	sub_835212A0(ctx, base);
	// stw r3,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r3.u32);
	// std r31,24(r30)
	PPC_STORE_U64(ctx.r30.u32 + 24, ctx.r31.u64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r31.u32);
	// stw r29,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r29.u32);
	// stw r28,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r28.u32);
	// stw r31,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r31.u32);
	// stw r31,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r31.u32);
	// stw r31,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83577B08"))) PPC_WEAK_FUNC(sub_83577B08);
PPC_FUNC_IMPL(__imp__sub_83577B08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r11,-21620
	ctx.r10.s64 = ctx.r11.s64 + -21620;
	// addi r31,r3,40
	ctx.r31.s64 = ctx.r3.s64 + 40;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83577b60
	if (cr6.eq) goto loc_83577B60;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x833f4e10
	ctx.lr = 0x83577B4C;
	sub_833F4E10(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83577B60;
	sub_825952B8(ctx, base);
loc_83577B60:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82574ba8
	ctx.lr = 0x83577B7C;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83577bc4
	if (cr6.eq) goto loc_83577BC4;
	// li r11,-2
	ctx.r11.s64 = -2;
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
loc_83577B8C:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83577b8c
	if (!cr0.eq) goto loc_83577B8C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bgt cr6,0x83577bc4
	if (cr6.gt) goto loc_83577BC4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83577BC4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83577BC4:
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x83521f50
	ctx.lr = 0x83577BCC;
	sub_83521F50(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r10,r11,-24136
	ctx.r10.s64 = ctx.r11.s64 + -24136;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_83577BF0"))) PPC_WEAK_FUNC(sub_83577BF0);
PPC_FUNC_IMPL(__imp__sub_83577BF0) {
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
	// bl 0x83577b08
	ctx.lr = 0x83577C10;
	sub_83577B08(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83577c30
	if (cr6.eq) goto loc_83577C30;
	// bl 0x82595188
	ctx.lr = 0x83577C20;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83577C30;
	sub_825952B8(ctx, base);
loc_83577C30:
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

__attribute__((alias("__imp__sub_83577C4C"))) PPC_WEAK_FUNC(sub_83577C4C);
PPC_FUNC_IMPL(__imp__sub_83577C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83577C50"))) PPC_WEAK_FUNC(sub_83577C50);
PPC_FUNC_IMPL(__imp__sub_83577C50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83577C58;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x835cea90
	ctx.lr = 0x83577C74;
	sub_835CEA90(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83576078
	ctx.lr = 0x83577C88;
	sub_83576078(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83577cbc
	if (!cr6.eq) goto loc_83577CBC;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// std r30,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r30.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// bl 0x82574ba8
	ctx.lr = 0x83577CAC;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83577cec
	if (cr6.eq) goto loc_83577CEC;
	// bl 0x83565458
	ctx.lr = 0x83577CB8;
	sub_83565458(ctx, base);
	// b 0x83577cec
	goto loc_83577CEC;
loc_83577CBC:
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83577938
	ctx.lr = 0x83577CD0;
	sub_83577938(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// std r30,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r30.u64);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// bl 0x82574ba8
	ctx.lr = 0x83577CE8;
	sub_82574BA8(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
loc_83577CEC:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82574ba8
	ctx.lr = 0x83577CF8;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83577d04
	if (cr6.eq) goto loc_83577D04;
	// bl 0x83565458
	ctx.lr = 0x83577D04;
	sub_83565458(ctx, base);
loc_83577D04:
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x83521f50
	ctx.lr = 0x83577D0C;
	sub_83521F50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83577D18"))) PPC_WEAK_FUNC(sub_83577D18);
PPC_FUNC_IMPL(__imp__sub_83577D18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x83577D20;
	__savegprlr_23(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// std r31,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r31.u64);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// bl 0x82596fe8
	ctx.lr = 0x83577D4C;
	sub_82596FE8(ctx, base);
	// li r24,1
	ctx.r24.s64 = 1;
	// std r31,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r31.u64);
	// lwz r27,0(r25)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// stw r27,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r27.u32);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83577d8c
	if (!cr6.eq) goto loc_83577D8C;
	// addi r9,r27,8
	ctx.r9.s64 = ctx.r27.s64 + 8;
loc_83577D70:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ea = ctx.r9.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r24,r11
	ctx.r10.u64 = ctx.r24.u64 + ctx.r11.u64;
	// stwcx. r10,0,r9
	ea = ctx.r9.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83577d70
	if (!cr0.eq) goto loc_83577D70;
loc_83577D8C:
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83577170
	ctx.lr = 0x83577D9C;
	sub_83577170(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82574ba8
	ctx.lr = 0x83577DAC;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83577db8
	if (cr6.eq) goto loc_83577DB8;
	// bl 0x83565458
	ctx.lr = 0x83577DB8;
	sub_83565458(ctx, base);
loc_83577DB8:
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82574ba8
	ctx.lr = 0x83577DC8;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83577dd4
	if (cr6.eq) goto loc_83577DD4;
	// bl 0x83565458
	ctx.lr = 0x83577DD4;
	sub_83565458(ctx, base);
loc_83577DD4:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83577e20
	if (cr6.eq) goto loc_83577E20;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82597088
	ctx.lr = 0x83577DE8;
	sub_82597088(ctx, base);
	// rlwinm r11,r23,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83577dfc
	if (!cr6.eq) goto loc_83577DFC;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x835653a8
	ctx.lr = 0x83577DFC;
	sub_835653A8(ctx, base);
loc_83577DFC:
	// std r31,0(r26)
	PPC_STORE_U64(ctx.r26.u32 + 0, ctx.r31.u64);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r31,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r31.u32);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82574ba8
	ctx.lr = 0x83577E10;
	sub_82574BA8(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83521f50
	ctx.lr = 0x83577E1C;
	sub_83521F50(ctx, base);
	// b 0x83577fcc
	goto loc_83577FCC;
loc_83577E20:
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x83576078
	ctx.lr = 0x83577E34;
	sub_83576078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82574ba8
	ctx.lr = 0x83577E44;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83577e50
	if (cr6.eq) goto loc_83577E50;
	// bl 0x83565458
	ctx.lr = 0x83577E50;
	sub_83565458(ctx, base);
loc_83577E50:
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82574ba8
	ctx.lr = 0x83577E60;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83577e6c
	if (cr6.eq) goto loc_83577E6C;
	// bl 0x83565458
	ctx.lr = 0x83577E6C;
	sub_83565458(ctx, base);
loc_83577E6C:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83577eac
	if (!cr6.eq) goto loc_83577EAC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82597088
	ctx.lr = 0x83577E80;
	sub_82597088(ctx, base);
	// std r31,0(r26)
	PPC_STORE_U64(ctx.r26.u32 + 0, ctx.r31.u64);
	// stw r31,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82574ba8
	ctx.lr = 0x83577E94;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83577ea0
	if (cr6.eq) goto loc_83577EA0;
	// bl 0x83565458
	ctx.lr = 0x83577EA0;
	sub_83565458(ctx, base);
loc_83577EA0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83521f50
	ctx.lr = 0x83577EA8;
	sub_83521F50(ctx, base);
	// b 0x83577fcc
	goto loc_83577FCC;
loc_83577EAC:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83565278
	ctx.lr = 0x83577EB4;
	sub_83565278(ctx, base);
	// clrlwi r11,r23,31
	ctx.r11.u64 = ctx.r23.u32 & 0x1;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83577ef0
	if (cr6.eq) goto loc_83577EF0;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
loc_83577ED4:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r5
	ea = ctx.r5.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwcx. r8,0,r5
	ea = ctx.r5.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83577ed4
	if (!cr0.eq) goto loc_83577ED4;
loc_83577EF0:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83577938
	ctx.lr = 0x83577F00;
	sub_83577938(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82597088
	ctx.lr = 0x83577F08;
	sub_82597088(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83521f50
	ctx.lr = 0x83577F10;
	sub_83521F50(ctx, base);
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,56
	ctx.r4.s64 = 56;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83577F24;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83577f40
	if (cr6.eq) goto loc_83577F40;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x83577a28
	ctx.lr = 0x83577F38;
	sub_83577A28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x83577f44
	goto loc_83577F44;
loc_83577F40:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_83577F44:
	// std r31,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r31.u64);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// bl 0x8259f070
	ctx.lr = 0x83577F54;
	sub_8259F070(ctx, base);
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x83577F68;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83577f98
	if (cr6.eq) goto loc_83577F98;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x835754c0
	ctx.lr = 0x83577F7C;
	sub_835754C0(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83577f98
	if (cr6.eq) goto loc_83577F98;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,168(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 168);
	// bl 0x83576398
	ctx.lr = 0x83577F98;
	sub_83576398(ctx, base);
loc_83577F98:
	// rlwinm r11,r23,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83577fac
	if (!cr6.eq) goto loc_83577FAC;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x835653a8
	ctx.lr = 0x83577FAC;
	sub_835653A8(ctx, base);
loc_83577FAC:
	// std r31,0(r26)
	PPC_STORE_U64(ctx.r26.u32 + 0, ctx.r31.u64);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r31,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r31.u32);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82574ba8
	ctx.lr = 0x83577FC0;
	sub_82574BA8(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x833d6d90
	ctx.lr = 0x83577FCC;
	sub_833D6D90(ctx, base);
loc_83577FCC:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82574ba8
	ctx.lr = 0x83577FD8;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83577fe4
	if (cr6.eq) goto loc_83577FE4;
	// bl 0x83565458
	ctx.lr = 0x83577FE4;
	sub_83565458(ctx, base);
loc_83577FE4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83577FF0"))) PPC_WEAK_FUNC(sub_83577FF0);
PPC_FUNC_IMPL(__imp__sub_83577FF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83577FF8;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// bl 0x82596fe8
	ctx.lr = 0x83578020;
	sub_82596FE8(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83577170
	ctx.lr = 0x83578030;
	sub_83577170(ctx, base);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83578070
	if (cr6.eq) goto loc_83578070;
	// rlwinm r11,r25,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83578054
	if (!cr6.eq) goto loc_83578054;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x835653a8
	ctx.lr = 0x83578050;
	sub_835653A8(ctx, base);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_83578054:
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// std r31,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r31.u64);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// bl 0x82574ba8
	ctx.lr = 0x83578068;
	sub_82574BA8(ctx, base);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// b 0x835782bc
	goto loc_835782BC;
loc_83578070:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x83576078
	ctx.lr = 0x83578084;
	sub_83576078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82574ba8
	ctx.lr = 0x83578094;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835780a0
	if (cr6.eq) goto loc_835780A0;
	// bl 0x83565458
	ctx.lr = 0x835780A0;
	sub_83565458(ctx, base);
loc_835780A0:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82574ba8
	ctx.lr = 0x835780B4;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835780c0
	if (cr6.eq) goto loc_835780C0;
	// bl 0x83565458
	ctx.lr = 0x835780C0;
	sub_83565458(ctx, base);
loc_835780C0:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x835780f0
	if (!cr6.eq) goto loc_835780F0;
	// std r31,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r31.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574ba8
	ctx.lr = 0x835780E0;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835782bc
	if (cr6.eq) goto loc_835782BC;
	// bl 0x83565458
	ctx.lr = 0x835780EC;
	sub_83565458(ctx, base);
	// b 0x835782bc
	goto loc_835782BC;
loc_835780F0:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,56
	ctx.r4.s64 = 56;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83578108;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83578128
	if (cr6.eq) goto loc_83578128;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x83577aa0
	ctx.lr = 0x83578120;
	sub_83577AA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8357812c
	goto loc_8357812C;
loc_83578128:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_8357812C:
	// std r31,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r31.u64);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// bl 0x8259f070
	ctx.lr = 0x8357813C;
	sub_8259F070(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8357816c
	if (!cr6.eq) goto loc_8357816C;
	// std r31,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r31.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574ba8
	ctx.lr = 0x8357815C;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835782b4
	if (cr6.eq) goto loc_835782B4;
	// bl 0x83565458
	ctx.lr = 0x83578168;
	sub_83565458(ctx, base);
	// b 0x835782b4
	goto loc_835782B4;
loc_8357816C:
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x83565278
	ctx.lr = 0x83578178;
	sub_83565278(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83578190;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835781bc
	if (cr6.eq) goto loc_835781BC;
	// std r31,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r31.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574ba8
	ctx.lr = 0x835781AC;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835782b4
	if (cr6.eq) goto loc_835782B4;
	// bl 0x83565458
	ctx.lr = 0x835781B8;
	sub_83565458(ctx, base);
	// b 0x835782b4
	goto loc_835782B4;
loc_835781BC:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x835781D4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// beq cr6,0x83578200
	if (cr6.eq) goto loc_83578200;
	// std r31,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r31.u64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// bl 0x82574ba8
	ctx.lr = 0x835781F0;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835782b4
	if (cr6.eq) goto loc_835782B4;
	// bl 0x83565458
	ctx.lr = 0x835781FC;
	sub_83565458(ctx, base);
	// b 0x835782b4
	goto loc_835782B4;
loc_83578200:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82574ba8
	ctx.lr = 0x83578208;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83578250
	if (cr6.eq) goto loc_83578250;
	// li r11,-2
	ctx.r11.s64 = -2;
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
loc_83578218:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83578218
	if (!cr0.eq) goto loc_83578218;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bgt cr6,0x83578250
	if (cr6.gt) goto loc_83578250;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83578250;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83578250:
	// clrlwi r11,r25,31
	ctx.r11.u64 = ctx.r25.u32 & 0x1;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8357828c
	if (cr6.eq) goto loc_8357828C;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
loc_83578270:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r5
	ea = ctx.r5.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwcx. r8,0,r5
	ea = ctx.r5.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83578270
	if (!cr0.eq) goto loc_83578270;
loc_8357828C:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83577938
	ctx.lr = 0x8357829C;
	sub_83577938(ctx, base);
	// std r31,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r31.u64);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82574ba8
	ctx.lr = 0x835782B0;
	sub_82574BA8(ctx, base);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
loc_835782B4:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x833d6d90
	ctx.lr = 0x835782BC;
	sub_833D6D90(ctx, base);
loc_835782BC:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82574ba8
	ctx.lr = 0x835782C8;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835782d4
	if (cr6.eq) goto loc_835782D4;
	// bl 0x83565458
	ctx.lr = 0x835782D4;
	sub_83565458(ctx, base);
loc_835782D4:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82597088
	ctx.lr = 0x835782DC;
	sub_82597088(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835782E8"))) PPC_WEAK_FUNC(sub_835782E8);
PPC_FUNC_IMPL(__imp__sub_835782E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x835782F0;
	__savegprlr_23(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// bl 0x835652c0
	ctx.lr = 0x8357830C;
	sub_835652C0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83578320
	if (cr6.eq) goto loc_83578320;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_83578320:
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8357834C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8357836c
	if (cr6.eq) goto loc_8357836C;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x835773e0
	ctx.lr = 0x83578360;
	sub_835773E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_8357836C:
	// lwz r27,128(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, xer);
	// beq cr6,0x83578608
	if (cr6.eq) goto loc_83578608;
	// li r25,1
	ctx.r25.s64 = 1;
loc_83578380:
	// lwz r26,4(r27)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r29,r27,4
	ctx.r29.s64 = ctx.r27.s64 + 4;
	// std r30,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r30.u64);
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// stw r26,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r26.u32);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x835783c0
	if (!cr6.eq) goto loc_835783C0;
	// addi r9,r26,8
	ctx.r9.s64 = ctx.r26.s64 + 8;
loc_835783A4:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ea = ctx.r9.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r25,r11
	ctx.r10.u64 = ctx.r25.u64 + ctx.r11.u64;
	// stwcx. r10,0,r9
	ea = ctx.r9.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x835783a4
	if (!cr0.eq) goto loc_835783A4;
loc_835783C0:
	// std r30,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r30.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82574ba8
	ctx.lr = 0x835783D4;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835783e0
	if (cr6.eq) goto loc_835783E0;
	// bl 0x83565458
	ctx.lr = 0x835783E0;
	sub_83565458(ctx, base);
loc_835783E0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82596fe8
	ctx.lr = 0x835783E8;
	sub_82596FE8(ctx, base);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83577170
	ctx.lr = 0x835783F8;
	sub_83577170(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82574ba8
	ctx.lr = 0x83578408;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83578414
	if (cr6.eq) goto loc_83578414;
	// bl 0x83565458
	ctx.lr = 0x83578414;
	sub_83565458(ctx, base);
loc_83578414:
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82574ba8
	ctx.lr = 0x83578424;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83578430
	if (cr6.eq) goto loc_83578430;
	// bl 0x83565458
	ctx.lr = 0x83578430;
	sub_83565458(ctx, base);
loc_83578430:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x835784b4
	if (!cr6.eq) goto loc_835784B4;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x83576078
	ctx.lr = 0x83578450;
	sub_83576078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82574ba8
	ctx.lr = 0x83578460;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8357846c
	if (cr6.eq) goto loc_8357846C;
	// bl 0x83565458
	ctx.lr = 0x8357846C;
	sub_83565458(ctx, base);
loc_8357846C:
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82574ba8
	ctx.lr = 0x8357847C;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83578488
	if (cr6.eq) goto loc_83578488;
	// bl 0x83565458
	ctx.lr = 0x83578488;
	sub_83565458(ctx, base);
loc_83578488:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835785cc
	if (cr6.eq) goto loc_835785CC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83565278
	ctx.lr = 0x8357849C;
	sub_83565278(ctx, base);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x83577938
	ctx.lr = 0x835784B4;
	sub_83577938(ctx, base);
loc_835784B4:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x833f5268
	ctx.lr = 0x835784C0;
	sub_833F5268(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82597088
	ctx.lr = 0x835784C8;
	sub_82597088(ctx, base);
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,56
	ctx.r4.s64 = 56;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x835784DC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835784fc
	if (cr6.eq) goto loc_835784FC;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x83577a28
	ctx.lr = 0x835784F4;
	sub_83577A28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x83578500
	goto loc_83578500;
loc_835784FC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_83578500:
	// std r30,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r30.u64);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// bl 0x8259f070
	ctx.lr = 0x83578510;
	sub_8259F070(ctx, base);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x835782e8
	ctx.lr = 0x83578524;
	sub_835782E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x835785e0
	if (!cr6.eq) goto loc_835785E0;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x835652c0
	ctx.lr = 0x83578538;
	sub_835652C0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83578590
	if (!cr6.eq) goto loc_83578590;
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x83565278
	ctx.lr = 0x8357854C;
	sub_83565278(ctx, base);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x83578560;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83578590
	if (cr6.eq) goto loc_83578590;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x83575620
	ctx.lr = 0x83578574;
	sub_83575620(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83578590
	if (cr6.eq) goto loc_83578590;
	// stw r25,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r25.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,172(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 172);
	// bl 0x83576398
	ctx.lr = 0x83578590;
	sub_83576398(ctx, base);
loc_83578590:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x833d6d90
	ctx.lr = 0x83578598;
	sub_833D6D90(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82574ba8
	ctx.lr = 0x835785A4;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835785b0
	if (cr6.eq) goto loc_835785B0;
	// bl 0x83565458
	ctx.lr = 0x835785B0;
	sub_83565458(ctx, base);
loc_835785B0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83521f50
	ctx.lr = 0x835785B8;
	sub_83521F50(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, xer);
	// bne cr6,0x83578380
	if (!cr6.eq) goto loc_83578380;
	// b 0x83578608
	goto loc_83578608;
loc_835785CC:
	// lis r31,2048
	ctx.r31.s64 = 134217728;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ori r31,r31,6
	ctx.r31.u64 = ctx.r31.u64 | 6;
	// bl 0x82597088
	ctx.lr = 0x835785DC;
	sub_82597088(ctx, base);
	// b 0x835785e8
	goto loc_835785E8;
loc_835785E0:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x833d6d90
	ctx.lr = 0x835785E8;
	sub_833D6D90(ctx, base);
loc_835785E8:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82574ba8
	ctx.lr = 0x835785F4;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83578600
	if (cr6.eq) goto loc_83578600;
	// bl 0x83565458
	ctx.lr = 0x83578600;
	sub_83565458(ctx, base);
loc_83578600:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83521f50
	ctx.lr = 0x83578608;
	sub_83521F50(ctx, base);
loc_83578608:
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83578634
	if (cr6.eq) goto loc_83578634;
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x83576348
	ctx.lr = 0x83578620;
	sub_83576348(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83578634;
	sub_825952B8(ctx, base);
loc_83578634:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83578640"))) PPC_WEAK_FUNC(sub_83578640);
PPC_FUNC_IMPL(__imp__sub_83578640) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83578648;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x835652c0
	ctx.lr = 0x83578660;
	sub_835652C0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x835786dc
	if (!cr6.eq) goto loc_835786DC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,40
	ctx.r4.s64 = ctx.r11.s64 + 40;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x835782e8
	ctx.lr = 0x83578680;
	sub_835782E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x835786e0
	if (!cr6.eq) goto loc_835786E0;
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83565278
	ctx.lr = 0x83578694;
	sub_83565278(ctx, base);
	// li r28,1
	ctx.r28.s64 = 1;
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x835786AC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835786dc
	if (cr6.eq) goto loc_835786DC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83575620
	ctx.lr = 0x835786C0;
	sub_83575620(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835786dc
	if (cr6.eq) goto loc_835786DC;
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r28.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,172(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 172);
	// bl 0x83576398
	ctx.lr = 0x835786DC;
	sub_83576398(ctx, base);
loc_835786DC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_835786E0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835786E8"))) PPC_WEAK_FUNC(sub_835786E8);
PPC_FUNC_IMPL(__imp__sub_835786E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x83577850
	sub_83577850(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835786EC"))) PPC_WEAK_FUNC(sub_835786EC);
PPC_FUNC_IMPL(__imp__sub_835786EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835786F0"))) PPC_WEAK_FUNC(sub_835786F0);
PPC_FUNC_IMPL(__imp__sub_835786F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x835786F8;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// bl 0x835758e0
	ctx.lr = 0x83578704;
	sub_835758E0(ctx, base);
	// addi r31,r24,168
	ctx.r31.s64 = ctx.r24.s64 + 168;
	// li r30,3
	ctx.r30.s64 = 3;
loc_8357870C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8357872c
	if (cr6.eq) goto loc_8357872C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8357872C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8357872C:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x8357870c
	if (!cr0.eq) goto loc_8357870C;
	// lwz r5,116(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 116);
	// addi r25,r24,116
	ctx.r25.s64 = ctx.r24.s64 + 116;
	// lwz r4,120(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 120);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x83578770
	if (cr6.eq) goto loc_83578770;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x83575260
	ctx.lr = 0x83578758;
	sub_83575260(ctx, base);
	// addi r5,r25,12
	ctx.r5.s64 = ctx.r25.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,4(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// bl 0x833f4e10
	ctx.lr = 0x8357876C;
	sub_833F4E10(ctx, base);
	// stw r31,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r31.u32);
loc_83578770:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x835774d0
	ctx.lr = 0x83578778;
	sub_835774D0(ctx, base);
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r29,2
	ctx.r29.s64 = 2;
	// lwz r11,9596(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9596);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83578840
	if (cr6.eq) goto loc_83578840;
	// lwz r10,104(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 104);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// beq cr6,0x83578840
	if (cr6.eq) goto loc_83578840;
loc_835787A4:
	// std r26,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r26.u64);
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x835787d8
	if (cr6.eq) goto loc_835787D8;
	// addi r9,r4,4
	ctx.r9.s64 = ctx.r4.s64 + 4;
loc_835787BC:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ea = ctx.r9.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r29,r11
	ctx.r10.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stwcx. r10,0,r9
	ea = ctx.r9.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x835787bc
	if (!cr0.eq) goto loc_835787BC;
loc_835787D8:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82574ba8
	ctx.lr = 0x835787E0;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835787ec
	if (cr6.eq) goto loc_835787EC;
	// bl 0x83565458
	ctx.lr = 0x835787EC;
	sub_83565458(ctx, base);
loc_835787EC:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
loc_835787F4:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r29,r10
	ctx.r9.u64 = ctx.r29.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x835787f4
	if (!cr0.eq) goto loc_835787F4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82574ba8
	ctx.lr = 0x8357881C;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83578828
	if (cr6.eq) goto loc_83578828;
	// bl 0x83565458
	ctx.lr = 0x83578828;
	sub_83565458(ctx, base);
loc_83578828:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x83871bf8
	ctx.lr = 0x83578830;
	sub_83871BF8(ctx, base);
	// lwz r10,104(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 104);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x835787a4
	if (!cr6.eq) goto loc_835787A4;
loc_83578840:
	// lwz r11,104(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 104);
	// addi r28,r24,100
	ctx.r28.s64 = ctx.r24.s64 + 100;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x83576a68
	ctx.lr = 0x83578854;
	sub_83576A68(ctx, base);
	// lwz r10,104(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 104);
	// addi r31,r24,156
	ctx.r31.s64 = ctx.r24.s64 + 156;
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r9,104(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 104);
	// stw r9,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r9.u32);
	// lwz r8,104(r24)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + 104);
	// stw r8,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r8.u32);
	// stw r26,108(r24)
	PPC_STORE_U32(ctx.r24.u32 + 108, ctx.r26.u32);
	// lwz r7,156(r24)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r24.u32 + 156);
	// lwz r4,0(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// stw r7,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r7.u32);
	// lwz r6,156(r24)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r24.u32 + 156);
	// stw r6,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r6.u32);
	// lwz r5,156(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 156);
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// stw r26,160(r24)
	PPC_STORE_U32(ctx.r24.u32 + 160, ctx.r26.u32);
	// beq cr6,0x835788b8
	if (cr6.eq) goto loc_835788B8;
loc_83578898:
	// lwz r30,0(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// bl 0x825952b8
	ctx.lr = 0x835788A8;
	sub_825952B8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bne cr6,0x83578898
	if (!cr6.eq) goto loc_83578898;
loc_835788B8:
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x835788C8;
	sub_825952B8(ctx, base);
	// li r27,1
	ctx.r27.s64 = 1;
loc_835788CC:
	// lwzu r11,-12(r31)
	ea = -12 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// stw r26,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r26.u32);
	// beq cr6,0x83578910
	if (cr6.eq) goto loc_83578910;
loc_835788F0:
	// lwz r30,0(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// bl 0x825952b8
	ctx.lr = 0x83578900;
	sub_825952B8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bne cr6,0x835788f0
	if (!cr6.eq) goto loc_835788F0;
loc_83578910:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// bl 0x825952b8
	ctx.lr = 0x83578920;
	sub_825952B8(ctx, base);
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// bge 0x835788cc
	if (!cr0.lt) goto loc_835788CC;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83578954
	if (cr6.eq) goto loc_83578954;
	// addi r5,r25,12
	ctx.r5.s64 = ctx.r25.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// bl 0x833f4e10
	ctx.lr = 0x83578944;
	sub_833F4E10(ctx, base);
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x83578954;
	sub_825952B8(ctx, base);
loc_83578954:
	// stw r26,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r26.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r26,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r26.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r26,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r26.u32);
	// lwz r6,4(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x83577348
	ctx.lr = 0x83578974;
	sub_83577348(ctx, base);
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x825952b8
	ctx.lr = 0x83578984;
	sub_825952B8(ctx, base);
	// addi r31,r24,96
	ctx.r31.s64 = ctx.r24.s64 + 96;
	// li r30,1
	ctx.r30.s64 = 1;
loc_8357898C:
	// addi r31,r31,-32
	ctx.r31.s64 = ctx.r31.s64 + -32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82596f90
	ctx.lr = 0x83578998;
	sub_82596F90(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x8357898c
	if (!cr0.lt) goto loc_8357898C;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82596f90
	ctx.lr = 0x835789A8;
	sub_82596F90(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835789B0"))) PPC_WEAK_FUNC(sub_835789B0);
PPC_FUNC_IMPL(__imp__sub_835789B0) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// addi r5,r3,16
	ctx.r5.s64 = ctx.r3.s64 + 16;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,9596(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9596);
	// bl 0x83578640
	ctx.lr = 0x835789DC;
	sub_83578640(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83578a00
	if (cr6.eq) goto loc_83578A00;
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83565278
	ctx.lr = 0x835789F4;
	sub_83565278(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83565310
	ctx.lr = 0x83578A00;
	sub_83565310(ctx, base);
loc_83578A00:
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

__attribute__((alias("__imp__sub_83578A1C"))) PPC_WEAK_FUNC(sub_83578A1C);
PPC_FUNC_IMPL(__imp__sub_83578A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83578A20"))) PPC_WEAK_FUNC(sub_83578A20);
PPC_FUNC_IMPL(__imp__sub_83578A20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83578A28;
	__savegprlr_26(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82596fa8
	ctx.lr = 0x83578A34;
	sub_82596FA8(ctx, base);
	// li r26,1
	ctx.r26.s64 = 1;
	// addi r29,r30,32
	ctx.r29.s64 = ctx.r30.s64 + 32;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_83578A40:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82596fa8
	ctx.lr = 0x83578A48;
	sub_82596FA8(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r29,r29,32
	ctx.r29.s64 = ctx.r29.s64 + 32;
	// bge 0x83578a40
	if (!cr0.lt) goto loc_83578A40;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r28,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,100
	ctx.r3.s64 = ctx.r30.s64 + 100;
	// bl 0x82ef1a88
	ctx.lr = 0x83578A6C;
	sub_82EF1A88(ctx, base);
	// stw r28,116(r30)
	PPC_STORE_U32(ctx.r30.u32 + 116, ctx.r28.u32);
	// stw r28,120(r30)
	PPC_STORE_U32(ctx.r30.u32 + 120, ctx.r28.u32);
	// addi r31,r30,120
	ctx.r31.s64 = ctx.r30.s64 + 120;
	// stw r28,124(r30)
	PPC_STORE_U32(ctx.r30.u32 + 124, ctx.r28.u32);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// li r27,2
	ctx.r27.s64 = 2;
loc_83578A84:
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x83578A9C;
	sub_82595718(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// lwzu r11,12(r31)
	ea = 12 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// bge 0x83578a84
	if (!cr0.lt) goto loc_83578A84;
	// stw r28,160(r30)
	PPC_STORE_U32(ctx.r30.u32 + 160, ctx.r28.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595718
	ctx.lr = 0x83578ACC;
	sub_82595718(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,156(r30)
	PPC_STORE_U32(ctx.r30.u32 + 156, ctx.r11.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r10,156(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// bl 0x82583780
	ctx.lr = 0x83578AE8;
	sub_82583780(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82583308
	ctx.lr = 0x83578AF4;
	sub_82583308(ctx, base);
	// li r4,1500
	ctx.r4.s64 = 1500;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825832f8
	ctx.lr = 0x83578B00;
	sub_825832F8(ctx, base);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// li r4,8
	ctx.r4.s64 = 8;
	// ori r31,r9,1
	ctx.r31.u64 = ctx.r9.u64 | 1;
	// li r3,44
	ctx.r3.s64 = 44;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x825730a8
	ctx.lr = 0x83578B18;
	sub_825730A8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83578b34
	if (cr6.eq) goto loc_83578B34;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x83576af0
	ctx.lr = 0x83578B2C;
	sub_83576AF0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x83578b38
	goto loc_83578B38;
loc_83578B34:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_83578B38:
	// stw r11,168(r30)
	PPC_STORE_U32(ctx.r30.u32 + 168, ctx.r11.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,44
	ctx.r3.s64 = 44;
	// addi r29,r30,168
	ctx.r29.s64 = ctx.r30.s64 + 168;
	// bl 0x825730a8
	ctx.lr = 0x83578B50;
	sub_825730A8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83578b68
	if (cr6.eq) goto loc_83578B68;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x83576af0
	ctx.lr = 0x83578B64;
	sub_83576AF0(ctx, base);
	// b 0x83578b6c
	goto loc_83578B6C;
loc_83578B68:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_83578B6C:
	// stw r3,172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 172, ctx.r3.u32);
	// li r4,1000
	ctx.r4.s64 = 1000;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825832f8
	ctx.lr = 0x83578B7C;
	sub_825832F8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x825730a8
	ctx.lr = 0x83578B8C;
	sub_825730A8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83578ba4
	if (cr6.eq) goto loc_83578BA4;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x83576af0
	ctx.lr = 0x83578BA0;
	sub_83576AF0(ctx, base);
	// b 0x83578ba8
	goto loc_83578BA8;
loc_83578BA4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_83578BA8:
	// addi r28,r29,-4
	ctx.r28.s64 = ctx.r29.s64 + -4;
	// stw r3,176(r30)
	PPC_STORE_U32(ctx.r30.u32 + 176, ctx.r3.u32);
	// li r29,3
	ctx.r29.s64 = 3;
loc_83578BB4:
	// lwzu r31,4(r28)
	ea = 4 + ctx.r28.u32;
	ctx.r31.u64 = PPC_LOAD_U32(ea);
	ctx.r28.u32 = ea;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x83575980
	ctx.lr = 0x83578BC4;
	sub_83575980(ctx, base);
	// stb r26,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r26.u8);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x825834e0
	ctx.lr = 0x83578BD0;
	sub_825834E0(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne 0x83578bb4
	if (!cr0.eq) goto loc_83578BB4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82583730
	ctx.lr = 0x83578BE0;
	sub_82583730(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83578BEC"))) PPC_WEAK_FUNC(sub_83578BEC);
PPC_FUNC_IMPL(__imp__sub_83578BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83578BF0"))) PPC_WEAK_FUNC(sub_83578BF0);
PPC_FUNC_IMPL(__imp__sub_83578BF0) {
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
	// lis r31,-31744
	ctx.r31.s64 = -2080374784;
	// lwz r11,9596(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9596);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83578c2c
	if (cr6.eq) goto loc_83578C2C;
	// lis r3,2048
	ctx.r3.s64 = 134217728;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
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
loc_83578C2C:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,180
	ctx.r4.s64 = 180;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83578C44;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83578c78
	if (cr6.eq) goto loc_83578C78;
	// bl 0x83578a20
	ctx.lr = 0x83578C50;
	sub_83578A20(ctx, base);
	// stw r3,9596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9596, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83578c84
	if (!cr6.eq) goto loc_83578C84;
loc_83578C5C:
	// lis r3,2048
	ctx.r3.s64 = 134217728;
	// ori r3,r3,9
	ctx.r3.u64 = ctx.r3.u64 | 9;
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
loc_83578C78:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,9596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9596, ctx.r11.u32);
	// b 0x83578c5c
	goto loc_83578C5C;
loc_83578C84:
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

__attribute__((alias("__imp__sub_83578C9C"))) PPC_WEAK_FUNC(sub_83578C9C);
PPC_FUNC_IMPL(__imp__sub_83578C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83578CA0"))) PPC_WEAK_FUNC(sub_83578CA0);
PPC_FUNC_IMPL(__imp__sub_83578CA0) {
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
	// lis r31,-31744
	ctx.r31.s64 = -2080374784;
	// lwz r11,9596(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9596);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83578cd0
	if (!cr6.eq) goto loc_83578CD0;
	// lis r3,2048
	ctx.r3.s64 = 134217728;
	// ori r3,r3,4
	ctx.r3.u64 = ctx.r3.u64 | 4;
	// b 0x83578d20
	goto loc_83578D20;
loc_83578CD0:
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595150
	ctx.lr = 0x83578CE4;
	sub_82595150(ctx, base);
	// lwz r30,9596(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9596);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83578d0c
	if (cr6.eq) goto loc_83578D0C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835786f0
	ctx.lr = 0x83578CF8;
	sub_835786F0(ctx, base);
	// bl 0x82595188
	ctx.lr = 0x83578CFC;
	sub_82595188(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x83578D0C;
	sub_825952B8(ctx, base);
loc_83578D0C:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595170
	ctx.lr = 0x83578D14;
	sub_82595170(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,9596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9596, ctx.r11.u32);
loc_83578D20:
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

__attribute__((alias("__imp__sub_83578D38"))) PPC_WEAK_FUNC(sub_83578D38);
PPC_FUNC_IMPL(__imp__sub_83578D38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r10.u32);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r9,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83578D54"))) PPC_WEAK_FUNC(sub_83578D54);
PPC_FUNC_IMPL(__imp__sub_83578D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83578D58"))) PPC_WEAK_FUNC(sub_83578D58);
PPC_FUNC_IMPL(__imp__sub_83578D58) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83578D60"))) PPC_WEAK_FUNC(sub_83578D60);
PPC_FUNC_IMPL(__imp__sub_83578D60) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83578D74"))) PPC_WEAK_FUNC(sub_83578D74);
PPC_FUNC_IMPL(__imp__sub_83578D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83578D78"))) PPC_WEAK_FUNC(sub_83578D78);
PPC_FUNC_IMPL(__imp__sub_83578D78) {
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
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r31,r11,9676
	ctx.r31.s64 = ctx.r11.s64 + 9676;
	// lwz r11,9696(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9696);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83578dc4
	if (!cr6.eq) goto loc_83578DC4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,9696(r10)
	PPC_STORE_U32(ctx.r10.u32 + 9696, ctx.r11.u32);
	// bl 0x83a5f308
	ctx.lr = 0x83578DB8;
	sub_83A5F308(ctx, base);
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-23168
	ctx.r3.s64 = ctx.r11.s64 + -23168;
	// bl 0x831cdcc8
	ctx.lr = 0x83578DC4;
	sub_831CDCC8(ctx, base);
loc_83578DC4:
	// lis r30,-31744
	ctx.r30.s64 = -2080374784;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r31,9604(r30)
	PPC_STORE_U32(ctx.r30.u32 + 9604, ctx.r31.u32);
	// bl 0x83585dc8
	ctx.lr = 0x83578DD4;
	sub_83585DC8(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lwz r3,9604(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9604);
	// addi r4,r11,-21552
	ctx.r4.s64 = ctx.r11.s64 + -21552;
	// bl 0x83a7a980
	ctx.lr = 0x83578DE4;
	sub_83A7A980(ctx, base);
	// li r4,64
	ctx.r4.s64 = 64;
	// lwz r3,9604(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9604);
	// bl 0x82583338
	ctx.lr = 0x83578DF0;
	sub_82583338(ctx, base);
	// bl 0x83564ee0
	ctx.lr = 0x83578DF4;
	sub_83564EE0(ctx, base);
	// lwz r11,9604(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9604);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83585d68
	ctx.lr = 0x83578E04;
	sub_83585D68(ctx, base);
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

__attribute__((alias("__imp__sub_83578E1C"))) PPC_WEAK_FUNC(sub_83578E1C);
PPC_FUNC_IMPL(__imp__sub_83578E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83578E20"))) PPC_WEAK_FUNC(sub_83578E20);
PPC_FUNC_IMPL(__imp__sub_83578E20) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// b 0x835812c0
	sub_835812C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83578E28"))) PPC_WEAK_FUNC(sub_83578E28);
PPC_FUNC_IMPL(__imp__sub_83578E28) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// b 0x83582070
	sub_83582070(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83578E30"))) PPC_WEAK_FUNC(sub_83578E30);
PPC_FUNC_IMPL(__imp__sub_83578E30) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// b 0x835813d8
	sub_835813D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83578E38"))) PPC_WEAK_FUNC(sub_83578E38);
PPC_FUNC_IMPL(__imp__sub_83578E38) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// b 0x83581448
	sub_83581448(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83578E40"))) PPC_WEAK_FUNC(sub_83578E40);
PPC_FUNC_IMPL(__imp__sub_83578E40) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// b 0x835815a0
	sub_835815A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83578E48"))) PPC_WEAK_FUNC(sub_83578E48);
PPC_FUNC_IMPL(__imp__sub_83578E48) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// b 0x83581488
	sub_83581488(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83578E50"))) PPC_WEAK_FUNC(sub_83578E50);
PPC_FUNC_IMPL(__imp__sub_83578E50) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// b 0x835814d0
	sub_835814D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83578E58"))) PPC_WEAK_FUNC(sub_83578E58);
PPC_FUNC_IMPL(__imp__sub_83578E58) {
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
	// lwz r4,32(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83581518
	ctx.lr = 0x83578E74;
	sub_83581518(ctx, base);
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

__attribute__((alias("__imp__sub_83578E8C"))) PPC_WEAK_FUNC(sub_83578E8C);
PPC_FUNC_IMPL(__imp__sub_83578E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83578E90"))) PPC_WEAK_FUNC(sub_83578E90);
PPC_FUNC_IMPL(__imp__sub_83578E90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x83578E98;
	__savegprlr_23(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// addi r31,r11,-21148
	ctx.r31.s64 = ctx.r11.s64 + -21148;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r4,r31,-172
	ctx.r4.s64 = ctx.r31.s64 + -172;
	// bl 0x838fbbc8
	ctx.lr = 0x83578EB4;
	sub_838FBBC8(ctx, base);
	// li r26,2
	ctx.r26.s64 = 2;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r26,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r24.u32);
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r24.u32);
	// stw r24,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r24.u32);
	// stw r24,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r24.u32);
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// beq cr6,0x83579074
	if (cr6.eq) goto loc_83579074;
loc_83578EFC:
	// addi r4,r31,-164
	ctx.r4.s64 = ctx.r31.s64 + -164;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x838fc840
	ctx.lr = 0x83578F08;
	sub_838FC840(ctx, base);
	// addi r11,r31,-156
	ctx.r11.s64 = ctx.r31.s64 + -156;
	// addi r10,r31,-148
	ctx.r10.s64 = ctx.r31.s64 + -148;
	// addi r9,r31,-140
	ctx.r9.s64 = ctx.r31.s64 + -140;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// addi r8,r31,-128
	ctx.r8.s64 = ctx.r31.s64 + -128;
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// addi r7,r31,-116
	ctx.r7.s64 = ctx.r31.s64 + -116;
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// addi r6,r31,-104
	ctx.r6.s64 = ctx.r31.s64 + -104;
	// stw r8,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r8.u32);
	// addi r5,r31,-92
	ctx.r5.s64 = ctx.r31.s64 + -92;
	// stw r7,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r7.u32);
	// addi r4,r31,-80
	ctx.r4.s64 = ctx.r31.s64 + -80;
	// stw r6,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r6.u32);
	// stw r5,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r5.u32);
	// addi r11,r31,-60
	ctx.r11.s64 = ctx.r31.s64 + -60;
	// stw r4,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r4.u32);
	// addi r10,r31,-44
	ctx.r10.s64 = ctx.r31.s64 + -44;
	// addi r9,r31,-24
	ctx.r9.s64 = ctx.r31.s64 + -24;
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// addi r8,r31,-16
	ctx.r8.s64 = ctx.r31.s64 + -16;
	// stw r10,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r10.u32);
	// addi r7,r1,120
	ctx.r7.s64 = ctx.r1.s64 + 120;
	// stw r9,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r9.u32);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// stw r8,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r8.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stw r7,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r7.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stw r6,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r6.u32);
	// stw r5,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stw r4,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,124
	ctx.r9.s64 = ctx.r1.s64 + 124;
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// stw r10,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r10.u32);
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// stw r9,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r9.u32);
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// stw r8,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r8.u32);
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// stw r7,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r7.u32);
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// stw r6,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r6.u32);
	// stw r5,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r5.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r4,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r4.u32);
	// beq cr6,0x8357905c
	if (cr6.eq) goto loc_8357905C;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_83578FD4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83578fd4
	if (!cr6.eq) goto loc_83578FD4;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x83522540
	ctx.lr = 0x83578FF4;
	sub_83522540(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r1,132
	ctx.r30.s64 = ctx.r1.s64 + 132;
	// li r28,12
	ctx.r28.s64 = 12;
loc_83579000:
	// lwz r3,-4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_83579008:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83579008
	if (!cr6.eq) goto loc_83579008;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x83522540
	ctx.lr = 0x83579028;
	sub_83522540(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// bl 0x83521f50
	ctx.lr = 0x83579030;
	sub_83521F50(ctx, base);
	// cmplw cr6,r29,r23
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r23.u32, xer);
	// bne cr6,0x83579048
	if (!cr6.eq) goto loc_83579048;
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x838fc888
	ctx.lr = 0x83579048;
	sub_838FC888(ctx, base);
loc_83579048:
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// bne 0x83579000
	if (!cr0.eq) goto loc_83579000;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83521f50
	ctx.lr = 0x8357905C;
	sub_83521F50(ctx, base);
loc_8357905C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x838fbce0
	ctx.lr = 0x83579068;
	sub_838FBCE0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83578efc
	if (!cr6.eq) goto loc_83578EFC;
loc_83579074:
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// lwz r9,44(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// lwz r8,48(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,40(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// stw r9,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r9.u32);
	// stw r8,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r8.u32);
	// beq cr6,0x835790a0
	if (cr6.eq) goto loc_835790A0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// b 0x835790a4
	goto loc_835790A4;
loc_835790A0:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
loc_835790A4:
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x835790b8
	if (cr6.eq) goto loc_835790B8;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// b 0x835790bc
	goto loc_835790BC;
loc_835790B8:
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
loc_835790BC:
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x835790d0
	if (cr6.eq) goto loc_835790D0;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// b 0x835790d4
	goto loc_835790D4;
loc_835790D0:
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
loc_835790D4:
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x835790e8
	if (cr6.eq) goto loc_835790E8;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// b 0x835790ec
	goto loc_835790EC;
loc_835790E8:
	// rlwinm r11,r11,0,29,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
loc_835790EC:
	// lwz r9,124(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x83579100
	if (cr6.eq) goto loc_83579100;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// b 0x83579104
	goto loc_83579104;
loc_83579100:
	// rlwinm r11,r11,0,28,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
loc_83579104:
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r7,r9,24
	ctx.r7.u64 = ctx.r9.u32 & 0xFF;
	// stw r11,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r11.u32);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// stw r7,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, ctx.r7.u32);
	// stw r8,48(r10)
	PPC_STORE_U32(ctx.r10.u32 + 48, ctx.r8.u32);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// beq cr6,0x83579140
	if (cr6.eq) goto loc_83579140;
	// subfic r11,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r9.s64;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// subfe r9,r24,r24
	temp.u8 = (~ctx.r24.u32 + ctx.r24.u32 < ~ctx.r24.u32) | (~ctx.r24.u32 + ctx.r24.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r24.u64 + ctx.r24.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r10,r9,r26
	ctx.r10.u64 = ctx.r9.u64 & ctx.r26.u64;
loc_83579140:
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// beq cr6,0x83579160
	if (cr6.eq) goto loc_83579160;
	// subfic r10,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r9.s64;
	// li r8,4
	ctx.r8.s64 = 4;
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// and r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 & ctx.r8.u64;
loc_83579160:
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// beq cr6,0x83579180
	if (cr6.eq) goto loc_83579180;
	// subfic r10,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r9.s64;
	// li r8,2048
	ctx.r8.s64 = 2048;
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// and r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 & ctx.r8.u64;
loc_83579180:
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// beq cr6,0x835791a0
	if (cr6.eq) goto loc_835791A0;
	// subfic r10,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r9.s64;
	// li r8,8192
	ctx.r8.s64 = 8192;
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
	// and r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 & ctx.r8.u64;
loc_835791A0:
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// beq cr6,0x835791c0
	if (cr6.eq) goto loc_835791C0;
	// subfic r10,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r9.s64;
	// li r8,16384
	ctx.r8.s64 = 16384;
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// ori r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 16384;
	// and r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 & ctx.r8.u64;
loc_835791C0:
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// and r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 & ctx.r11.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,52(r9)
	PPC_STORE_U32(ctx.r9.u32 + 52, ctx.r11.u32);
	// stw r8,56(r9)
	PPC_STORE_U32(ctx.r9.u32 + 56, ctx.r8.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835791DC"))) PPC_WEAK_FUNC(sub_835791DC);
PPC_FUNC_IMPL(__imp__sub_835791DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835791E0"))) PPC_WEAK_FUNC(sub_835791E0);
PPC_FUNC_IMPL(__imp__sub_835791E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x835791E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r30,r11,-20932
	ctx.r30.s64 = ctx.r11.s64 + -20932;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r4,r30,-32
	ctx.r4.s64 = ctx.r30.s64 + -32;
	// bl 0x838fbbc8
	ctx.lr = 0x83579204;
	sub_838FBBC8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83579320
	if (cr6.eq) goto loc_83579320;
	// li r28,0
	ctx.r28.s64 = 0;
loc_83579214:
	// addi r4,r30,-24
	ctx.r4.s64 = ctx.r30.s64 + -24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838fc840
	ctx.lr = 0x83579220;
	sub_838FC840(ctx, base);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r30,-16
	ctx.r4.s64 = ctx.r30.s64 + -16;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r28,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r28.u64);
	// std r28,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r28.u64);
	// std r28,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r28.u64);
	// std r28,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r28.u64);
	// bl 0x838fc9f0
	ctx.lr = 0x83579248;
	sub_838FC9F0(ctx, base);
	// addi r4,r30,-12
	ctx.r4.s64 = ctx.r30.s64 + -12;
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838fc9f0
	ctx.lr = 0x83579258;
	sub_838FC9F0(ctx, base);
	// addi r4,r30,-8
	ctx.r4.s64 = ctx.r30.s64 + -8;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838fc9f0
	ctx.lr = 0x83579268;
	sub_838FC9F0(ctx, base);
	// addi r4,r30,-4
	ctx.r4.s64 = ctx.r30.s64 + -4;
	// addi r5,r1,152
	ctx.r5.s64 = ctx.r1.s64 + 152;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838fc9f0
	ctx.lr = 0x83579278;
	sub_838FC9F0(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83579308
	if (cr6.eq) goto loc_83579308;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lfd f13,136(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// lfd f12,144(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// frsp f11,f0
	ctx.f11.f64 = double(float(ctx.f0.f64));
	// lfd f10,152(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// frsp f9,f13
	ctx.f9.f64 = double(float(ctx.f13.f64));
	// frsp f8,f12
	ctx.f8.f64 = double(float(ctx.f12.f64));
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// frsp f7,f10
	ctx.f7.f64 = double(float(ctx.f10.f64));
	// stfs f9,100(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f8,104(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stfs f7,108(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_835792C4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x835792c4
	if (!cr6.eq) goto loc_835792C4;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x83522540
	ctx.lr = 0x835792E8;
	sub_83522540(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,32(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// bl 0x835813d8
	ctx.lr = 0x83579300;
	sub_835813D8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83521f50
	ctx.lr = 0x83579308;
	sub_83521F50(ctx, base);
loc_83579308:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838fbce0
	ctx.lr = 0x83579314;
	sub_838FBCE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83579214
	if (!cr6.eq) goto loc_83579214;
loc_83579320:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8357932C"))) PPC_WEAK_FUNC(sub_8357932C);
PPC_FUNC_IMPL(__imp__sub_8357932C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83579330"))) PPC_WEAK_FUNC(sub_83579330);
PPC_FUNC_IMPL(__imp__sub_83579330) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x82574ba8
	ctx.lr = 0x83579350;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83579398
	if (cr6.eq) goto loc_83579398;
	// li r11,-2
	ctx.r11.s64 = -2;
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
loc_83579360:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83579360
	if (!cr0.eq) goto loc_83579360;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bgt cr6,0x83579398
	if (cr6.gt) goto loc_83579398;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83579398;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83579398:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83521f50
	ctx.lr = 0x835793A0;
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

__attribute__((alias("__imp__sub_835793B4"))) PPC_WEAK_FUNC(sub_835793B4);
PPC_FUNC_IMPL(__imp__sub_835793B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835793B8"))) PPC_WEAK_FUNC(sub_835793B8);
PPC_FUNC_IMPL(__imp__sub_835793B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,-20916
	ctx.r10.s64 = ctx.r11.s64 + -20916;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82574ba8
	ctx.lr = 0x835793E4;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8357942c
	if (cr6.eq) goto loc_8357942C;
	// li r11,-2
	ctx.r11.s64 = -2;
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
loc_835793F4:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x835793f4
	if (!cr0.eq) goto loc_835793F4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bgt cr6,0x8357942c
	if (cr6.gt) goto loc_8357942C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8357942C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8357942C:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x83521f50
	ctx.lr = 0x83579434;
	sub_83521F50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83565188
	ctx.lr = 0x8357943C;
	sub_83565188(ctx, base);
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

__attribute__((alias("__imp__sub_83579450"))) PPC_WEAK_FUNC(sub_83579450);
PPC_FUNC_IMPL(__imp__sub_83579450) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lwz r3,9604(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9604);
	// b 0x825832e0
	sub_825832E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8357945C"))) PPC_WEAK_FUNC(sub_8357945C);
PPC_FUNC_IMPL(__imp__sub_8357945C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83579460"))) PPC_WEAK_FUNC(sub_83579460);
PPC_FUNC_IMPL(__imp__sub_83579460) {
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
	// lwz r4,32(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x835820e0
	ctx.lr = 0x8357947C;
	sub_835820E0(ctx, base);
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

__attribute__((alias("__imp__sub_83579494"))) PPC_WEAK_FUNC(sub_83579494);
PPC_FUNC_IMPL(__imp__sub_83579494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83579498"))) PPC_WEAK_FUNC(sub_83579498);
PPC_FUNC_IMPL(__imp__sub_83579498) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x835794b4
	if (cr6.lt) goto loc_835794B4;
	// beq cr6,0x835794c0
	if (cr6.eq) goto loc_835794C0;
loc_835794A8:
	// lis r3,2048
	ctx.r3.s64 = 134217728;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// blr 
	return;
loc_835794B4:
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x835794a8
	if (cr6.eq) goto loc_835794A8;
loc_835794C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835794C8"))) PPC_WEAK_FUNC(sub_835794C8);
PPC_FUNC_IMPL(__imp__sub_835794C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// bl 0x83565088
	ctx.lr = 0x835794E8;
	sub_83565088(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r10,r11,-20916
	ctx.r10.s64 = ctx.r11.s64 + -20916;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83579530
	if (!cr6.eq) goto loc_83579530;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
loc_83579514:
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
	// bne 0x83579514
	if (!cr0.eq) goto loc_83579514;
loc_83579530:
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// std r30,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r30.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// bl 0x82574ba8
	ctx.lr = 0x83579548;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83579590
	if (cr6.eq) goto loc_83579590;
	// li r11,-2
	ctx.r11.s64 = -2;
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
loc_83579558:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83579558
	if (!cr0.eq) goto loc_83579558;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bgt cr6,0x83579590
	if (cr6.gt) goto loc_83579590;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83579590;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83579590:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_835795C4"))) PPC_WEAK_FUNC(sub_835795C4);
PPC_FUNC_IMPL(__imp__sub_835795C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835795C8"))) PPC_WEAK_FUNC(sub_835795C8);
PPC_FUNC_IMPL(__imp__sub_835795C8) {
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
	// bl 0x835793b8
	ctx.lr = 0x835795E8;
	sub_835793B8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83579608
	if (cr6.eq) goto loc_83579608;
	// bl 0x82595188
	ctx.lr = 0x835795F8;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83579608;
	sub_825952B8(ctx, base);
loc_83579608:
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

__attribute__((alias("__imp__sub_83579624"))) PPC_WEAK_FUNC(sub_83579624);
PPC_FUNC_IMPL(__imp__sub_83579624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83579628"))) PPC_WEAK_FUNC(sub_83579628);
PPC_FUNC_IMPL(__imp__sub_83579628) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83579630;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,32
	ctx.r29.s64 = ctx.r3.s64 + 32;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8357965c
	if (cr6.eq) goto loc_8357965C;
	// bl 0x83581970
	ctx.lr = 0x8357964C;
	sub_83581970(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x8357971c
	if (cr6.eq) goto loc_8357971C;
loc_8357965C:
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lwz r11,9616(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9616);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8357969c
	if (!cr6.eq) goto loc_8357969C;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
loc_83579680:
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
	// bne 0x83579680
	if (!cr0.eq) goto loc_83579680;
loc_8357969C:
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r31,r11,-21528
	ctx.r31.s64 = ctx.r11.s64 + -21528;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// bl 0x835228e0
	ctx.lr = 0x835796B4;
	sub_835228E0(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x835228e0
	ctx.lr = 0x835796C8;
	sub_835228E0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x835228e0
	ctx.lr = 0x835796D8;
	sub_835228E0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83581d70
	ctx.lr = 0x835796E4;
	sub_83581D70(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8357970c
	if (cr6.eq) goto loc_8357970C;
	// bl 0x83565260
	ctx.lr = 0x835796F4;
	sub_83565260(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8357970c
	if (cr6.eq) goto loc_8357970C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8259f070
	ctx.lr = 0x8357970C;
	sub_8259F070(ctx, base);
loc_8357970C:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x833d6d90
	ctx.lr = 0x83579714;
	sub_833D6D90(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83521f50
	ctx.lr = 0x8357971C;
	sub_83521F50(ctx, base);
loc_8357971C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83579724"))) PPC_WEAK_FUNC(sub_83579724);
PPC_FUNC_IMPL(__imp__sub_83579724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83579728"))) PPC_WEAK_FUNC(sub_83579728);
PPC_FUNC_IMPL(__imp__sub_83579728) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83579730;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r26,r3,32
	ctx.r26.s64 = ctx.r3.s64 + 32;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83579764
	if (cr6.eq) goto loc_83579764;
	// bl 0x83581970
	ctx.lr = 0x83579754;
	sub_83581970(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x83579874
	if (cr6.eq) goto loc_83579874;
loc_83579764:
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r11,9616(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9616);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835797a4
	if (!cr6.eq) goto loc_835797A4;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
loc_83579788:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r29,r10
	ctx.r9.u64 = ctx.r29.u64 + ctx.r10.u64;
	// stwcx. r9,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83579788
	if (!cr0.eq) goto loc_83579788;
loc_835797A4:
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r31,r11,-21516
	ctx.r31.s64 = ctx.r11.s64 + -21516;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// bl 0x835228e0
	ctx.lr = 0x835797BC;
	sub_835228E0(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x835228e0
	ctx.lr = 0x835797D0;
	sub_835228E0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x835228e0
	ctx.lr = 0x835797E0;
	sub_835228E0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r9,0
	ctx.r9.s64 = 0;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x83579820
	if (!cr6.eq) goto loc_83579820;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
loc_83579804:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r29,r10
	ctx.r9.u64 = ctx.r29.u64 + ctx.r10.u64;
	// stwcx. r9,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83579804
	if (!cr0.eq) goto loc_83579804;
loc_83579820:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83581ee8
	ctx.lr = 0x83579834;
	sub_83581EE8(ctx, base);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x83521f50
	ctx.lr = 0x8357983C;
	sub_83521F50(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83579864
	if (cr6.eq) goto loc_83579864;
	// bl 0x83565260
	ctx.lr = 0x8357984C;
	sub_83565260(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83579864
	if (cr6.eq) goto loc_83579864;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8259f070
	ctx.lr = 0x83579864;
	sub_8259F070(ctx, base);
loc_83579864:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x833d6d90
	ctx.lr = 0x8357986C;
	sub_833D6D90(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83521f50
	ctx.lr = 0x83579874;
	sub_83521F50(ctx, base);
loc_83579874:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8357987C"))) PPC_WEAK_FUNC(sub_8357987C);
PPC_FUNC_IMPL(__imp__sub_8357987C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83579880"))) PPC_WEAK_FUNC(sub_83579880);
PPC_FUNC_IMPL(__imp__sub_83579880) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83579888;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x835798AC;
	sub_82595718(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835798c8
	if (cr6.eq) goto loc_835798C8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x835794c8
	ctx.lr = 0x835798C0;
	sub_835794C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x835798cc
	goto loc_835798CC;
loc_835798C8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_835798CC:
	// std r29,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r29.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// bl 0x8259f070
	ctx.lr = 0x835798DC;
	sub_8259F070(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835798E8"))) PPC_WEAK_FUNC(sub_835798E8);
PPC_FUNC_IMPL(__imp__sub_835798E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x835798F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83579914;
	sub_82595718(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83579930
	if (cr6.eq) goto loc_83579930;
	// addi r4,r30,24
	ctx.r4.s64 = ctx.r30.s64 + 24;
	// bl 0x835794c8
	ctx.lr = 0x83579928;
	sub_835794C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x83579934
	goto loc_83579934;
loc_83579930:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_83579934:
	// std r29,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r29.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// bl 0x8259f070
	ctx.lr = 0x83579944;
	sub_8259F070(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x835821c8
	ctx.lr = 0x83579954;
	sub_835821C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r29,32
	ctx.r3.s64 = ctx.r29.s64 + 32;
	// bl 0x833bd1b8
	ctx.lr = 0x83579960;
	sub_833BD1B8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82574ba8
	ctx.lr = 0x8357996C;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835799b4
	if (cr6.eq) goto loc_835799B4;
	// li r11,-2
	ctx.r11.s64 = -2;
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
loc_8357997C:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8357997c
	if (!cr0.eq) goto loc_8357997C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bgt cr6,0x835799b4
	if (cr6.gt) goto loc_835799B4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x835799B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_835799B4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// lwz r9,44(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// stw r9,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r9.u32);
	// lwz r8,48(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// stw r8,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r8.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,52(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// stw r6,52(r7)
	PPC_STORE_U32(ctx.r7.u32 + 52, ctx.r6.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,56(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// stw r4,56(r5)
	PPC_STORE_U32(ctx.r5.u32 + 56, ctx.r4.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835799F4"))) PPC_WEAK_FUNC(sub_835799F4);
PPC_FUNC_IMPL(__imp__sub_835799F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835799F8"))) PPC_WEAK_FUNC(sub_835799F8);
PPC_FUNC_IMPL(__imp__sub_835799F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83579A00;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r4,96
	ctx.r4.s64 = ctx.r4.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x824a3f20
	ctx.lr = 0x83579A20;
	sub_824A3F20(ctx, base);
	// lwz r10,100(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x83579b38
	if (!cr6.eq) goto loc_83579B38;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83579acc
	if (cr6.eq) goto loc_83579ACC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83579880
	ctx.lr = 0x83579A48;
	sub_83579880(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r11,-21480
	ctx.r30.s64 = ctx.r11.s64 + -21480;
	// addi r4,r30,-8
	ctx.r4.s64 = ctx.r30.s64 + -8;
	// bl 0x82c90e90
	ctx.lr = 0x83579A5C;
	sub_82C90E90(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x83579628
	ctx.lr = 0x83579A68;
	sub_83579628(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83521f50
	ctx.lr = 0x83579A70;
	sub_83521F50(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82c90e90
	ctx.lr = 0x83579A7C;
	sub_82C90E90(ctx, base);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r5,r10,8360
	ctx.r5.s64 = ctx.r10.s64 + 8360;
	// lwz r3,32(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// bl 0x83582070
	ctx.lr = 0x83579A94;
	sub_83582070(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x83521f50
	ctx.lr = 0x83579A9C;
	sub_83521F50(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r30,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r30.u64);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// bl 0x82574ba8
	ctx.lr = 0x83579AB4;
	sub_82574BA8(ctx, base);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x833d6d90
	ctx.lr = 0x83579AC0;
	sub_833D6D90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83579ACC:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// std r30,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r30.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// bl 0x82574ba8
	ctx.lr = 0x83579AE4;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83579b44
	if (cr6.eq) goto loc_83579B44;
	// li r11,-2
	ctx.r11.s64 = -2;
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
loc_83579AF4:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83579af4
	if (!cr0.eq) goto loc_83579AF4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bgt cr6,0x83579b44
	if (cr6.gt) goto loc_83579B44;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83579B2C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83579B38:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x835798e8
	ctx.lr = 0x83579B44;
	sub_835798E8(ctx, base);
loc_83579B44:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83579B50"))) PPC_WEAK_FUNC(sub_83579B50);
PPC_FUNC_IMPL(__imp__sub_83579B50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// bl 0x8259f070
	ctx.lr = 0x83579B84;
	sub_8259F070(ctx, base);
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83579bc0
	if (!cr6.eq) goto loc_83579BC0;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r8,r31,8
	ctx.r8.s64 = ctx.r31.s64 + 8;
loc_83579BA4:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83579ba4
	if (!cr0.eq) goto loc_83579BA4;
loc_83579BC0:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8346ac90
	ctx.lr = 0x83579BD0;
	sub_8346AC90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83521f50
	ctx.lr = 0x83579BD8;
	sub_83521F50(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82574ba8
	ctx.lr = 0x83579BE4;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83579c2c
	if (cr6.eq) goto loc_83579C2C;
	// li r11,-2
	ctx.r11.s64 = -2;
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
loc_83579BF4:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83579bf4
	if (!cr0.eq) goto loc_83579BF4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bgt cr6,0x83579c2c
	if (cr6.gt) goto loc_83579C2C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83579C2C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83579C2C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

__attribute__((alias("__imp__sub_83579C48"))) PPC_WEAK_FUNC(sub_83579C48);
PPC_FUNC_IMPL(__imp__sub_83579C48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83579C50;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,4095
	ctx.r10.s64 = 268369920;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// ori r9,r10,65534
	ctx.r9.u64 = ctx.r10.u64 | 65534;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83579c9c
	if (cr6.lt) goto loc_83579C9C;
	// addi r3,r7,16
	ctx.r3.s64 = ctx.r7.s64 + 16;
	// bl 0x83579330
	ctx.lr = 0x83579C7C;
	sub_83579330(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83579C90;
	sub_825952B8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r10,12808
	ctx.r3.s64 = ctx.r10.s64 + 12808;
	// bl 0x831cc150
	ctx.lr = 0x83579C9C;
	sub_831CC150(ctx, base);
loc_83579C9C:
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
	// bne cr6,0x83579ccc
	if (!cr6.eq) goto loc_83579CCC;
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
	// b 0x83579d0c
	goto loc_83579D0C;
loc_83579CCC:
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83579cf4
	if (cr6.eq) goto loc_83579CF4;
	// stw r27,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r27.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// bne cr6,0x83579d0c
	if (!cr6.eq) goto loc_83579D0C;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// b 0x83579d0c
	goto loc_83579D0C;
loc_83579CF4:
	// stw r27,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r27.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// bne cr6,0x83579d0c
	if (!cr6.eq) goto loc_83579D0C;
	// stw r27,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r27.u32);
loc_83579D0C:
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
	// bne cr6,0x83579e30
	if (!cr6.eq) goto loc_83579E30;
	// li r28,0
	ctx.r28.s64 = 0;
loc_83579D28:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bne cr6,0x83579db0
	if (!cr6.eq) goto loc_83579DB0;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83579d70
	if (!cr6.eq) goto loc_83579D70;
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
	// b 0x83579e20
	goto loc_83579E20;
loc_83579D70:
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x83579d88
	if (!cr6.eq) goto loc_83579D88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82c67fd0
	ctx.lr = 0x83579D88;
	sub_82C67FD0(ctx, base);
loc_83579D88:
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
	ctx.lr = 0x83579DAC;
	sub_82C68048(ctx, base);
	// b 0x83579e20
	goto loc_83579E20;
loc_83579DB0:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83579de4
	if (!cr6.eq) goto loc_83579DE4;
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
	// b 0x83579e20
	goto loc_83579E20;
loc_83579DE4:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x83579dfc
	if (!cr6.eq) goto loc_83579DFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82c68048
	ctx.lr = 0x83579DFC;
	sub_82C68048(ctx, base);
loc_83579DFC:
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
	ctx.lr = 0x83579E20;
	sub_82C67FD0(ctx, base);
loc_83579E20:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83579d28
	if (cr6.eq) goto loc_83579D28;
loc_83579E30:
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

__attribute__((alias("__imp__sub_83579E4C"))) PPC_WEAK_FUNC(sub_83579E4C);
PPC_FUNC_IMPL(__imp__sub_83579E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83579E50"))) PPC_WEAK_FUNC(sub_83579E50);
PPC_FUNC_IMPL(__imp__sub_83579E50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x83579eb8
	if (cr6.eq) goto loc_83579EB8;
	// li r9,1
	ctx.r9.s64 = 1;
loc_83579E60:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83579ea8
	if (cr6.eq) goto loc_83579EA8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x83579ea8
	if (!cr6.eq) goto loc_83579EA8;
	// addi r6,r10,8
	ctx.r6.s64 = ctx.r10.s64 + 8;
loc_83579E8C:
	// mfmsr r3
	ctx.r3.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r8,0,r6
	ea = ctx.r6.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r8.u64 = __builtin_bswap32(reserved.u32);
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stwcx. r7,0,r6
	ea = ctx.r6.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r7.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r3,1
	ctx.msr = (ctx.r3.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83579e8c
	if (!cr0.eq) goto loc_83579E8C;
loc_83579EA8:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r5,r5,8
	ctx.r5.s64 = ctx.r5.s64 + 8;
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, xer);
	// bne cr6,0x83579e60
	if (!cr6.eq) goto loc_83579E60;
loc_83579EB8:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83579EC0"))) PPC_WEAK_FUNC(sub_83579EC0);
PPC_FUNC_IMPL(__imp__sub_83579EC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83579EC8;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,47
	ctx.r11.s64 = 47;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// li r27,-1
	ctx.r27.s64 = -1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827a7eb0
	ctx.lr = 0x83579EF4;
	sub_827A7EB0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x83579f70
	if (cr6.eq) goto loc_83579F70;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x83579F24;
	sub_8259CB28(ctx, base);
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cb28
	ctx.lr = 0x83579F44;
	sub_8259CB28(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83579f80
	if (cr6.lt) goto loc_83579F80;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83579F64;
	sub_825952B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83579F70:
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-21587
	ctx.r4.s64 = ctx.r11.s64 + -21587;
	// bl 0x837b0c10
	ctx.lr = 0x83579F80;
	sub_837B0C10(ctx, base);
loc_83579F80:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83579F8C"))) PPC_WEAK_FUNC(sub_83579F8C);
PPC_FUNC_IMPL(__imp__sub_83579F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83579F90"))) PPC_WEAK_FUNC(sub_83579F90);
PPC_FUNC_IMPL(__imp__sub_83579F90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83579F98;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,33(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 33);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8357a048
	if (!cr6.eq) goto loc_8357A048;
	// li r26,-2
	ctx.r26.s64 = -2;
	// li r27,2
	ctx.r27.s64 = 2;
loc_83579FBC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x83579f90
	ctx.lr = 0x83579FC8;
	sub_83579F90(ctx, base);
	// addi r29,r30,16
	ctx.r29.s64 = ctx.r30.s64 + 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82574ba8
	ctx.lr = 0x83579FDC;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8357a020
	if (cr6.eq) goto loc_8357A020;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
loc_83579FE8:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ea = ctx.r9.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r26,r11
	ctx.r10.u64 = ctx.r26.u64 + ctx.r11.u64;
	// stwcx. r10,0,r9
	ea = ctx.r9.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83579fe8
	if (!cr0.eq) goto loc_83579FE8;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bgt cr6,0x8357a020
	if (cr6.gt) goto loc_8357A020;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8357A020;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8357A020:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x83521f50
	ctx.lr = 0x8357A028;
	sub_83521F50(ctx, base);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x8357A038;
	sub_825952B8(ctx, base);
	// lbz r11,33(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 33);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83579fbc
	if (cr6.eq) goto loc_83579FBC;
loc_8357A048:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8357A050"))) PPC_WEAK_FUNC(sub_8357A050);
PPC_FUNC_IMPL(__imp__sub_8357A050) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x8357A058;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,4(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r24,1
	ctx.r24.s64 = 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// addi r25,r5,16
	ctx.r25.s64 = ctx.r5.s64 + 16;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// lbz r10,33(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8357a0e0
	if (!cr6.eq) goto loc_8357A0E0;
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// clrlwi r7,r6,24
	ctx.r7.u64 = ctx.r6.u32 & 0xFF;
	// li r8,-1
	ctx.r8.s64 = -1;
loc_8357A094:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8357a0b0
	if (cr6.eq) goto loc_8357A0B0;
	// subfc r10,r9,r10
	xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subfze r31,r8
	temp.u8 = ~ctx.r8.u32 + xer.ca < xer.ca;
	ctx.r31.u64 = ~ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x8357a0bc
	goto loc_8357A0BC;
loc_8357A0B0:
	// subfc r6,r10,r9
	xer.ca = ctx.r9.u32 >= ctx.r10.u32;
	ctx.r6.s64 = ctx.r9.s64 - ctx.r10.s64;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r31,r4,31
	ctx.r31.u64 = ctx.r4.u32 & 0x1;
loc_8357A0BC:
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8357a0d0
	if (cr6.eq) goto loc_8357A0D0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8357a0d4
	goto loc_8357A0D4;
loc_8357A0D0:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_8357A0D4:
	// lbz r10,33(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8357a094
	if (cr6.eq) goto loc_8357A094;
loc_8357A0E0:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8357a140
	if (cr6.eq) goto loc_8357A140;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// bne cr6,0x8357a138
	if (!cr6.eq) goto loc_8357A138;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x83579c48
	ctx.lr = 0x8357A11C;
	sub_83579C48(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r24,4(r29)
	PPC_STORE_U8(ctx.r29.u32 + 4, ctx.r24.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_8357A138:
	// bl 0x82ff8298
	ctx.lr = 0x8357A13C;
	sub_82FF8298(ctx, base);
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8357A140:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x8357a184
	if (!cr6.lt) goto loc_8357A184;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83579c48
	ctx.lr = 0x8357A168;
	sub_83579C48(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r24,4(r29)
	PPC_STORE_U8(ctx.r29.u32 + 4, ctx.r24.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_8357A184:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83579330
	ctx.lr = 0x8357A18C;
	sub_83579330(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x8357A1A0;
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
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8357A1B8"))) PPC_WEAK_FUNC(sub_8357A1B8);
PPC_FUNC_IMPL(__imp__sub_8357A1B8) {
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
	// bl 0x83579f90
	ctx.lr = 0x8357A1D8;
	sub_83579F90(ctx, base);
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

__attribute__((alias("__imp__sub_8357A20C"))) PPC_WEAK_FUNC(sub_8357A20C);
PPC_FUNC_IMPL(__imp__sub_8357A20C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8357A210"))) PPC_WEAK_FUNC(sub_8357A210);
PPC_FUNC_IMPL(__imp__sub_8357A210) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8357A218;
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
	// bne cr6,0x8357a254
	if (!cr6.eq) goto loc_8357A254;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// lwz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x83579c48
	ctx.lr = 0x8357A248;
	sub_83579C48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8357A254:
	// lwz r25,4(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bne cr6,0x8357a298
	if (!cr6.eq) goto loc_8357A298;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x8357a394
	if (!cr6.lt) goto loc_8357A394;
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
	// bl 0x83579c48
	ctx.lr = 0x8357A28C;
	sub_83579C48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8357A298:
	// cmplw cr6,r30,r25
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, xer);
	// bne cr6,0x8357a2d4
	if (!cr6.eq) goto loc_8357A2D4;
	// lwz r6,8(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r10,16(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bge cr6,0x8357a394
	if (!cr6.lt) goto loc_8357A394;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83579c48
	ctx.lr = 0x8357A2C8;
	sub_83579C48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8357A2D4:
	// lwz r27,16(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r26,16(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplw cr6,r26,r27
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r27.u32, xer);
	// ble cr6,0x8357a338
	if (!cr6.gt) goto loc_8357A338;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ff8298
	ctx.lr = 0x8357A2F0;
	sub_82FF8298(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,16(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, xer);
	// bge cr6,0x8357a334
	if (!cr6.lt) goto loc_8357A334;
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
	// bne cr6,0x8357a380
	if (!cr6.eq) goto loc_8357A380;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
loc_8357A320:
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x83579c48
	ctx.lr = 0x8357A328;
	sub_83579C48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8357A334:
	// cmplw cr6,r26,r27
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r27.u32, xer);
loc_8357A338:
	// bge cr6,0x8357a394
	if (!cr6.lt) goto loc_8357A394;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83456c38
	ctx.lr = 0x8357A348;
	sub_83456C38(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r6,r25
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r25.u32, xer);
	// beq cr6,0x8357a360
	if (cr6.eq) goto loc_8357A360;
	// lwz r11,16(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, xer);
	// bge cr6,0x8357a394
	if (!cr6.lt) goto loc_8357A394;
loc_8357A360:
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
	// beq cr6,0x8357a320
	if (cr6.eq) goto loc_8357A320;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
loc_8357A380:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x83579c48
	ctx.lr = 0x8357A388;
	sub_83579C48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8357A394:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8357a050
	ctx.lr = 0x8357A3A8;
	sub_8357A050(ctx, base);
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

__attribute__((alias("__imp__sub_8357A3C0"))) PPC_WEAK_FUNC(sub_8357A3C0);
PPC_FUNC_IMPL(__imp__sub_8357A3C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8357A3C8;
	__savegprlr_25(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bge cr6,0x8357a414
	if (!cr6.lt) goto loc_8357A414;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stb r30,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r30.u8);
	// bl 0x8259cb28
	ctx.lr = 0x8357A408;
	sub_8259CB28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8357A414:
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x8357A430;
	sub_8259CB28(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r7,2
	ctx.r7.s64 = 2;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r27,r11,-21580
	ctx.r27.s64 = ctx.r11.s64 + -21580;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r6,r27,-4
	ctx.r6.s64 = ctx.r27.s64 + -4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x8357A450;
	sub_827A8810(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addic r10,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// subfe r26,r10,r3
	temp.u8 = (~ctx.r10.u32 + ctx.r3.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	ctx.r26.u64 = ~ctx.r10.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x8357a478
	if (cr6.lt) goto loc_8357A478;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8357A478;
	sub_825952B8(ctx, base);
loc_8357A478:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// beq cr6,0x8357a4bc
	if (cr6.eq) goto loc_8357A4BC;
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cb28
	ctx.lr = 0x8357A4B0;
	sub_8259CB28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8357A4BC:
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stb r30,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r30.u8);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r6,r11,-2
	ctx.r6.s64 = ctx.r11.s64 + -2;
	// bl 0x8259cb28
	ctx.lr = 0x8357A4DC;
	sub_8259CB28(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82ab6970
	ctx.lr = 0x8357A4EC;
	sub_82AB6970(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// bl 0x82d70f48
	ctx.lr = 0x8357A4FC;
	sub_82D70F48(ctx, base);
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cb28
	ctx.lr = 0x8357A51C;
	sub_8259CB28(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x8357A524;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x8357A52C;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x8357A534;
	sub_8387E8E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8357A540"))) PPC_WEAK_FUNC(sub_8357A540);
PPC_FUNC_IMPL(__imp__sub_8357A540) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x8357A548;
	__savegprlr_14(ctx, base);
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// addi r28,r11,-20972
	ctx.r28.s64 = ctx.r11.s64 + -20972;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r4,r28,-168
	ctx.r4.s64 = ctx.r28.s64 + -168;
	// mr r17,r26
	ctx.r17.u64 = ctx.r26.u64;
	// bl 0x838fbbc8
	ctx.lr = 0x8357A574;
	sub_838FBBC8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8357ada4
	if (cr6.eq) goto loc_8357ADA4;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lwz r19,96(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r23,15
	ctx.r23.s64 = 15;
	// li r22,1
	ctx.r22.s64 = 1;
	// li r20,2
	ctx.r20.s64 = 2;
	// li r16,3
	ctx.r16.s64 = 3;
	// addi r18,r11,8360
	ctx.r18.s64 = ctx.r11.s64 + 8360;
	// li r14,-2
	ctx.r14.s64 = -2;
loc_8357A5A0:
	// addi r4,r28,-160
	ctx.r4.s64 = ctx.r28.s64 + -160;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x838fc840
	ctx.lr = 0x8357A5AC;
	sub_838FC840(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r4,r28,-152
	ctx.r4.s64 = ctx.r28.s64 + -152;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x838fc840
	ctx.lr = 0x8357A5BC;
	sub_838FC840(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r28,-144
	ctx.r4.s64 = ctx.r28.s64 + -144;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x838fc840
	ctx.lr = 0x8357A5CC;
	sub_838FC840(ctx, base);
	// stw r23,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r23.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r26,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r26.u32);
	// stb r26,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r26.u8);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8357A5E0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8357a5e0
	if (!cr6.eq) goto loc_8357A5E0;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8357A608;
	sub_8259CC28(ctx, base);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x835410c0
	ctx.lr = 0x8357A610;
	sub_835410C0(ctx, base);
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// cmpdi cr6,r11,-1
	cr6.compare<int64_t>(ctx.r11.s64, -1, xer);
	// bne cr6,0x8357a624
	if (!cr6.eq) goto loc_8357A624;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
loc_8357A624:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8357a638
	if (!cr6.eq) goto loc_8357A638;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x8357a64c
	goto loc_8357A64C;
loc_8357A638:
	// rldicr r11,r11,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 0) & 0x8000000000000000;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// bne cr6,0x8357a64c
	if (!cr6.eq) goto loc_8357A64C;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_8357A64C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8357a814
	if (cr6.eq) goto loc_8357A814;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x835410c0
	ctx.lr = 0x8357A660;
	sub_835410C0(ctx, base);
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// cmpdi cr6,r10,-1
	cr6.compare<int64_t>(ctx.r10.s64, -1, xer);
	// bne cr6,0x8357a674
	if (!cr6.eq) goto loc_8357A674;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_8357A674:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8357a6cc
	if (cr6.eq) goto loc_8357A6CC;
	// cmpdi cr6,r10,-1
	cr6.compare<int64_t>(ctx.r10.s64, -1, xer);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// bne cr6,0x8357a690
	if (!cr6.eq) goto loc_8357A690;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_8357A690:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8357a6a4
	if (!cr6.eq) goto loc_8357A6A4;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x8357a6b8
	goto loc_8357A6B8;
loc_8357A6A4:
	// rldicr r11,r10,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u64, 0) & 0x8000000000000000;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// bne cr6,0x8357a6b8
	if (!cr6.eq) goto loc_8357A6B8;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_8357A6B8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8357a6cc
	if (cr6.eq) goto loc_8357A6CC;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// b 0x8357a6d0
	goto loc_8357A6D0;
loc_8357A6CC:
	// bl 0x83522850
	ctx.lr = 0x8357A6D0;
	sub_83522850(ctx, base);
loc_8357A6D0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r23,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r23.u32);
	// stw r26,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r26.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r26,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r26.u8);
loc_8357A6E8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8357a6e8
	if (!cr6.eq) goto loc_8357A6E8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8357A70C;
	sub_8259CC28(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x83579ec0
	ctx.lr = 0x8357A718;
	sub_83579EC0(ctx, base);
	// lwz r10,244(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8357a734
	if (cr6.lt) goto loc_8357A734;
	// stw r20,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r20.u32);
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x825952b8
	ctx.lr = 0x8357A734;
	sub_825952B8(ctx, base);
loc_8357A734:
	// stw r23,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r23.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r26,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r26.u32);
	// stb r26,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r26.u8);
	// stw r23,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r23.u32);
	// stw r26,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r26.u32);
	// stb r26,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r26.u8);
loc_8357A750:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8357a750
	if (!cr6.eq) goto loc_8357A750;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8357A778;
	sub_8259CC28(ctx, base);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x8357a3c0
	ctx.lr = 0x8357A788;
	sub_8357A3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8259cb28
	ctx.lr = 0x8357A79C;
	sub_8259CB28(ctx, base);
	// lwz r10,372(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8357a7b8
	if (cr6.lt) goto loc_8357A7B8;
	// stw r20,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r20.u32);
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// lwz r4,352(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// bl 0x825952b8
	ctx.lr = 0x8357A7B8;
	sub_825952B8(ctx, base);
loc_8357A7B8:
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// stw r23,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r23.u32);
	// stw r26,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r26.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r26,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r26.u8);
	// blt cr6,0x8357a7e0
	if (cr6.lt) goto loc_8357A7E0;
	// stw r20,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r20.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x825952b8
	ctx.lr = 0x8357A7E0;
	sub_825952B8(ctx, base);
loc_8357A7E0:
	// lwz r11,340(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// stw r23,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r23.u32);
	// stw r26,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r26.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r26,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r26.u8);
	// blt cr6,0x8357a808
	if (cr6.lt) goto loc_8357A808;
	// stw r20,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r20.u32);
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// lwz r4,320(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x825952b8
	ctx.lr = 0x8357A808;
	sub_825952B8(ctx, base);
loc_8357A808:
	// stw r23,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r23.u32);
	// stw r26,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r26.u32);
	// stb r26,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r26.u8);
loc_8357A814:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x8357a828
	if (!cr6.lt) goto loc_8357A828;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
loc_8357A828:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8357A82C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8357a82c
	if (!cr6.eq) goto loc_8357A82C;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x83522540
	ctx.lr = 0x8357A84C;
	sub_83522540(ctx, base);
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83564b08
	ctx.lr = 0x8357A85C;
	sub_83564B08(ctx, base);
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x83521f50
	ctx.lr = 0x8357A864;
	sub_83521F50(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8357accc
	if (cr6.eq) goto loc_8357ACCC;
	// bl 0x83565260
	ctx.lr = 0x8357A874;
	sub_83565260(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8357accc
	if (cr6.eq) goto loc_8357ACCC;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8357A894;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8357ac0c
	if (!cr6.eq) goto loc_8357AC0C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r22,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r22.u32);
	// stw r26,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r26.u32);
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8357A8D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x8357a92c
	if (cr6.eq) goto loc_8357A92C;
	// ori r17,r17,1
	ctx.r17.u64 = ctx.r17.u64 | 1;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8357A8E8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8357a8e8
	if (!cr6.eq) goto loc_8357A8E8;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x83522540
	ctx.lr = 0x8357A90C;
	sub_83522540(ctx, base);
	// addi r4,r28,-128
	ctx.r4.s64 = ctx.r28.s64 + -128;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// bl 0x83521388
	ctx.lr = 0x8357A91C;
	sub_83521388(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8357a930
	if (!cr6.eq) goto loc_8357A930;
loc_8357A92C:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_8357A930:
	// clrlwi r10,r17,31
	ctx.r10.u64 = ctx.r17.u32 & 0x1;
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8357a94c
	if (cr6.eq) goto loc_8357A94C;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// rlwinm r17,r17,0,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x83521f50
	ctx.lr = 0x8357A94C;
	sub_83521F50(ctx, base);
loc_8357A94C:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// oris r27,r30,1
	ctx.r27.u64 = ctx.r30.u64 | 65536;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8357a960
	if (!cr6.eq) goto loc_8357A960;
	// rlwinm r27,r30,0,16,14
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFEFFFF;
loc_8357A960:
	// addi r11,r28,-124
	ctx.r11.s64 = ctx.r28.s64 + -124;
	// addi r10,r28,-112
	ctx.r10.s64 = ctx.r28.s64 + -112;
	// addi r9,r28,-100
	ctx.r9.s64 = ctx.r28.s64 + -100;
	// stw r11,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r11.u32);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// stw r10,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r10.u32);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// stw r9,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r9.u32);
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// stw r8,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r8.u32);
	// stw r7,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r7.u32);
	// addi r30,r1,292
	ctx.r30.s64 = ctx.r1.s64 + 292;
	// stw r6,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r6.u32);
	// mr r29,r16
	ctx.r29.u64 = ctx.r16.u64;
loc_8357A998:
	// lwz r31,-4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x838fc840
	ctx.lr = 0x8357A9A8;
	sub_838FC840(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8357aa34
	if (cr6.eq) goto loc_8357AA34;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x838fc840
	ctx.lr = 0x8357A9BC;
	sub_838FC840(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8357A9C0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8357a9c0
	if (!cr6.eq) goto loc_8357A9C0;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x83522540
	ctx.lr = 0x8357A9E0;
	sub_83522540(ctx, base);
	// addi r4,r28,-88
	ctx.r4.s64 = ctx.r28.s64 + -88;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83521388
	ctx.lr = 0x8357A9F0;
	sub_83521388(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8357aa08
	if (cr6.eq) goto loc_8357AA08;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r22,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r22.u32);
	// b 0x8357aa2c
	goto loc_8357AA2C;
loc_8357AA08:
	// addi r4,r28,-80
	ctx.r4.s64 = ctx.r28.s64 + -80;
	// li r5,11
	ctx.r5.s64 = 11;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83521388
	ctx.lr = 0x8357AA18;
	sub_83521388(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8357aa2c
	if (cr6.eq) goto loc_8357AA2C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r20,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r20.u32);
loc_8357AA2C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83521f50
	ctx.lr = 0x8357AA34;
	sub_83521F50(ctx, base);
loc_8357AA34:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// bne 0x8357a998
	if (!cr0.eq) goto loc_8357A998;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x8357aa50
	if (!cr6.eq) goto loc_8357AA50;
	// stw r22,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r22.u32);
loc_8357AA50:
	// addi r11,r28,-68
	ctx.r11.s64 = ctx.r28.s64 + -68;
	// addi r10,r28,-60
	ctx.r10.s64 = ctx.r28.s64 + -60;
	// addi r9,r28,-52
	ctx.r9.s64 = ctx.r28.s64 + -52;
	// stw r11,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r11.u32);
	// addi r8,r1,124
	ctx.r8.s64 = ctx.r1.s64 + 124;
	// stw r10,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r10.u32);
	// addi r7,r1,116
	ctx.r7.s64 = ctx.r1.s64 + 116;
	// stw r9,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r9.u32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r8,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r8.u32);
	// stw r7,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r7.u32);
	// addi r30,r1,260
	ctx.r30.s64 = ctx.r1.s64 + 260;
	// stw r6,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r6.u32);
	// mr r29,r16
	ctx.r29.u64 = ctx.r16.u64;
loc_8357AA88:
	// lwz r31,-4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x838fc840
	ctx.lr = 0x8357AA98;
	sub_838FC840(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8357ab74
	if (cr6.eq) goto loc_8357AB74;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x838fc840
	ctx.lr = 0x8357AAAC;
	sub_838FC840(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8357AAB0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8357aab0
	if (!cr6.eq) goto loc_8357AAB0;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x83522540
	ctx.lr = 0x8357AAD0;
	sub_83522540(ctx, base);
	// addi r4,r28,-44
	ctx.r4.s64 = ctx.r28.s64 + -44;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83521388
	ctx.lr = 0x8357AAE0;
	sub_83521388(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8357aaf8
	if (cr6.eq) goto loc_8357AAF8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// b 0x8357ab6c
	goto loc_8357AB6C;
loc_8357AAF8:
	// addi r4,r28,-36
	ctx.r4.s64 = ctx.r28.s64 + -36;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83521388
	ctx.lr = 0x8357AB08;
	sub_83521388(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8357ab20
	if (cr6.eq) goto loc_8357AB20;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r22,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r22.u32);
	// b 0x8357ab6c
	goto loc_8357AB6C;
loc_8357AB20:
	// addi r4,r28,-28
	ctx.r4.s64 = ctx.r28.s64 + -28;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83521388
	ctx.lr = 0x8357AB30;
	sub_83521388(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8357ab48
	if (cr6.eq) goto loc_8357AB48;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r16,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r16.u32);
	// b 0x8357ab6c
	goto loc_8357AB6C;
loc_8357AB48:
	// addi r4,r28,-20
	ctx.r4.s64 = ctx.r28.s64 + -20;
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83521388
	ctx.lr = 0x8357AB58;
	sub_83521388(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8357ab6c
	if (cr6.eq) goto loc_8357AB6C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r20,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r20.u32);
loc_8357AB6C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83521f50
	ctx.lr = 0x8357AB74;
	sub_83521F50(ctx, base);
loc_8357AB74:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// bne 0x8357aa88
	if (!cr0.eq) goto loc_8357AA88;
	// addi r4,r28,-12
	ctx.r4.s64 = ctx.r28.s64 + -12;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x838fc988
	ctx.lr = 0x8357AB90;
	sub_838FC988(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8357ab9c
	if (cr6.eq) goto loc_8357AB9C;
	// stw r22,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r22.u32);
loc_8357AB9C:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8357ABBC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,40(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8357ABDC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,24(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8357ABF4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8357AC0C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8357AC0C:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8357AC10:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8357ac10
	if (!cr6.eq) goto loc_8357AC10;
	// subf r11,r24,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r24.s64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x83522540
	ctx.lr = 0x8357AC34;
	sub_83522540(ctx, base);
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// lwz r3,32(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// bl 0x83582070
	ctx.lr = 0x8357AC4C;
	sub_83582070(ctx, base);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x83521f50
	ctx.lr = 0x8357AC54;
	sub_83521F50(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x838fbce0
	ctx.lr = 0x8357AC60;
	sub_838FBCE0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82574ba8
	ctx.lr = 0x8357AC70;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8357acb4
	if (cr6.eq) goto loc_8357ACB4;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
loc_8357AC7C:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ea = ctx.r9.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r14,r11
	ctx.r10.u64 = ctx.r14.u64 + ctx.r11.u64;
	// stwcx. r10,0,r9
	ea = ctx.r9.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8357ac7c
	if (!cr0.eq) goto loc_8357AC7C;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bgt cr6,0x8357acb4
	if (cr6.gt) goto loc_8357ACB4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8357ACB4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8357ACB4:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8357ad90
	if (cr6.lt) goto loc_8357AD90;
	// stw r20,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r20.u32);
	// addi r3,r1,180
	ctx.r3.s64 = ctx.r1.s64 + 180;
	// b 0x8357ad88
	goto loc_8357AD88;
loc_8357ACCC:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8357ACD0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8357acd0
	if (!cr6.eq) goto loc_8357ACD0;
	// subf r11,r24,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r24.s64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x83522540
	ctx.lr = 0x8357ACF4;
	sub_83522540(ctx, base);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// lwz r3,32(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// bl 0x83582070
	ctx.lr = 0x8357AD0C;
	sub_83582070(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x83521f50
	ctx.lr = 0x8357AD14;
	sub_83521F50(ctx, base);
	// addi r4,r28,-136
	ctx.r4.s64 = ctx.r28.s64 + -136;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x838fbce0
	ctx.lr = 0x8357AD20;
	sub_838FBCE0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82574ba8
	ctx.lr = 0x8357AD30;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8357ad74
	if (cr6.eq) goto loc_8357AD74;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
loc_8357AD3C:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ea = ctx.r9.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r14,r11
	ctx.r10.u64 = ctx.r14.u64 + ctx.r11.u64;
	// stwcx. r10,0,r9
	ea = ctx.r9.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8357ad3c
	if (!cr0.eq) goto loc_8357AD3C;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bgt cr6,0x8357ad74
	if (cr6.gt) goto loc_8357AD74;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8357AD74;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8357AD74:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8357ad90
	if (cr6.lt) goto loc_8357AD90;
	// stw r20,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r20.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_8357AD88:
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x8357AD90;
	sub_825952B8(ctx, base);
loc_8357AD90:
	// stb r26,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r26.u8);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// stw r26,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r26.u32);
	// stw r23,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r23.u32);
	// bne cr6,0x8357a5a0
	if (!cr6.eq) goto loc_8357A5A0;
loc_8357ADA4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8357ADB0"))) PPC_WEAK_FUNC(sub_8357ADB0);
PPC_FUNC_IMPL(__imp__sub_8357ADB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8357ADB8;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,8191
	ctx.r11.s64 = 536805376;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x8357addc
	if (!cr6.gt) goto loc_8357ADDC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x8357ADDC;
	sub_831CC150(ctx, base);
loc_8357ADDC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 3;
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// bge cr6,0x8357ae7c
	if (!cr6.lt) goto loc_8357AE7C;
	// li r27,2
	ctx.r27.s64 = 2;
	// rlwinm r28,r4,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x8357AE10;
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
	// bl 0x83579e50
	ctx.lr = 0x8357AE34;
	sub_83579E50(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// srawi r26,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r26.s64 = ctx.r11.s32 >> 3;
	// beq cr6,0x8357ae64
	if (cr6.eq) goto loc_8357AE64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x83576348
	ctx.lr = 0x8357AE54;
	sub_83576348(ctx, base);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x8357AE64;
	sub_825952B8(ctx, base);
loc_8357AE64:
	// rlwinm r11,r26,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 3) & 0xFFFFFFF8;
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
loc_8357AE7C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8357AE84"))) PPC_WEAK_FUNC(sub_8357AE84);
PPC_FUNC_IMPL(__imp__sub_8357AE84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8357AE88"))) PPC_WEAK_FUNC(sub_8357AE88);
PPC_FUNC_IMPL(__imp__sub_8357AE88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8357AE90;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
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
	// bl 0x824a3f20
	ctx.lr = 0x8357AEAC;
	sub_824A3F20(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x83579b50
	ctx.lr = 0x8357AEC4;
	sub_83579B50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x834580f8
	ctx.lr = 0x8357AED0;
	sub_834580F8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8357a210
	ctx.lr = 0x8357AEE4;
	sub_8357A210(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83579330
	ctx.lr = 0x8357AEEC;
	sub_83579330(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8357AEF8"))) PPC_WEAK_FUNC(sub_8357AEF8);
PPC_FUNC_IMPL(__imp__sub_8357AEF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,8191
	ctx.r10.s64 = 536805376;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// subf r6,r4,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r4.s64;
	// srawi r10,r7,3
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 3;
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// bge cr6,0x8357af28
	if (!cr6.lt) goto loc_8357AF28;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// b 0x831cc150
	sub_831CC150(ctx, base);
	return;
loc_8357AF28:
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 + ctx.r4.u64;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// srawi r11,r6,3
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 3;
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
	// blt cr6,0x8357af58
	if (cr6.lt) goto loc_8357AF58;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8357AF58:
	// cmplw cr6,r4,r8
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, xer);
	// bge cr6,0x8357af64
	if (!cr6.lt) goto loc_8357AF64;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
loc_8357AF64:
	// b 0x8357adb0
	sub_8357ADB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8357AF68"))) PPC_WEAK_FUNC(sub_8357AF68);
PPC_FUNC_IMPL(__imp__sub_8357AF68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8357AF6C"))) PPC_WEAK_FUNC(sub_8357AF6C);
PPC_FUNC_IMPL(__imp__sub_8357AF6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8357AF70"))) PPC_WEAK_FUNC(sub_8357AF70);
PPC_FUNC_IMPL(__imp__sub_8357AF70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8357AF78;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r28,r11,-21328
	ctx.r28.s64 = ctx.r11.s64 + -21328;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r28,-8
	ctx.r4.s64 = ctx.r28.s64 + -8;
	// bl 0x838fc840
	ctx.lr = 0x8357AF98;
	sub_838FC840(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838fc840
	ctx.lr = 0x8357AFA8;
	sub_838FC840(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x8357b0a0
	if (cr6.eq) goto loc_8357B0A0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8357b0a0
	if (cr6.eq) goto loc_8357B0A0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c90e90
	ctx.lr = 0x8357AFC8;
	sub_82C90E90(ctx, base);
	// addi r28,r30,96
	ctx.r28.s64 = ctx.r30.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r26,100(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// bl 0x824a3f20
	ctx.lr = 0x8357AFE0;
	sub_824A3F20(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83521f50
	ctx.lr = 0x8357AFE8;
	sub_83521F50(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x8357b0a0
	if (!cr6.eq) goto loc_8357B0A0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c90e90
	ctx.lr = 0x8357B000;
	sub_82C90E90(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83579880
	ctx.lr = 0x8357B00C;
	sub_83579880(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83521f50
	ctx.lr = 0x8357B014;
	sub_83521F50(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c90e90
	ctx.lr = 0x8357B020;
	sub_82C90E90(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x83579628
	ctx.lr = 0x8357B02C;
	sub_83579628(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83521f50
	ctx.lr = 0x8357B034;
	sub_83521F50(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83578e90
	ctx.lr = 0x8357B044;
	sub_83578E90(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8357a540
	ctx.lr = 0x8357B054;
	sub_8357A540(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835791e0
	ctx.lr = 0x8357B064;
	sub_835791E0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c90e90
	ctx.lr = 0x8357B070;
	sub_82C90E90(ctx, base);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8357ae88
	ctx.lr = 0x8357B084;
	sub_8357AE88(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83521f50
	ctx.lr = 0x8357B08C;
	sub_83521F50(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x833d6d90
	ctx.lr = 0x8357B094;
	sub_833D6D90(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8357B0A0:
	// lis r3,2048
	ctx.r3.s64 = 134217728;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8357B0B0"))) PPC_WEAK_FUNC(sub_8357B0B0);
PPC_FUNC_IMPL(__imp__sub_8357B0B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8357B0B8;
	__savegprlr_29(ctx, base);
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
	// li r29,1
	ctx.r29.s64 = 1;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// bge cr6,0x8357b0e4
	if (!cr6.lt) goto loc_8357B0E4;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// ble cr6,0x8357b0e8
	if (!cr6.gt) goto loc_8357B0E8;
loc_8357B0E4:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8357B0E8:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8357b184
	if (cr6.eq) goto loc_8357B184;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r8,r10,r30
	ctx.r8.s64 = ctx.r30.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// srawi r30,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r30.s64 = ctx.r8.s32 >> 3;
	// bne cr6,0x8357b118
	if (!cr6.eq) goto loc_8357B118;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8357aef8
	ctx.lr = 0x8357B118;
	sub_8357AEF8(ctx, base);
loc_8357B118:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8357b1e8
	if (cr6.eq) goto loc_8357B1E8;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x8357b1e8
	if (!cr6.eq) goto loc_8357B1E8;
	// addi r8,r10,8
	ctx.r8.s64 = ctx.r10.s64 + 8;
loc_8357B154:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r29,r11
	ctx.r9.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stwcx. r9,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8357b154
	if (!cr0.eq) goto loc_8357B154;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8357B184:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8357b19c
	if (!cr6.eq) goto loc_8357B19C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8357aef8
	ctx.lr = 0x8357B19C;
	sub_8357AEF8(ctx, base);
loc_8357B19C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8357b1e8
	if (cr6.eq) goto loc_8357B1E8;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8357b1e8
	if (!cr6.eq) goto loc_8357B1E8;
	// addi r8,r10,8
	ctx.r8.s64 = ctx.r10.s64 + 8;
loc_8357B1CC:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r29,r11
	ctx.r9.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stwcx. r9,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8357b1cc
	if (!cr0.eq) goto loc_8357B1CC;
loc_8357B1E8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8357B1FC"))) PPC_WEAK_FUNC(sub_8357B1FC);
PPC_FUNC_IMPL(__imp__sub_8357B1FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8357B200"))) PPC_WEAK_FUNC(sub_8357B200);
PPC_FUNC_IMPL(__imp__sub_8357B200) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac0
	ctx.lr = 0x8357B208;
	__savegprlr_18(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8357b948
	if (!cr6.eq) goto loc_8357B948;
	// bl 0x835410c0
	ctx.lr = 0x8357B22C;
	sub_835410C0(ctx, base);
	// bl 0x83574e78
	ctx.lr = 0x8357B230;
	sub_83574E78(ctx, base);
	// lwz r18,0(r3)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r25,1
	ctx.r25.s64 = 1;
	// lwz r11,12(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 12);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8357b268
	if (!cr6.eq) goto loc_8357B268;
	// addi r9,r18,8
	ctx.r9.s64 = ctx.r18.s64 + 8;
loc_8357B24C:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ea = ctx.r9.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r25,r11
	ctx.r10.u64 = ctx.r25.u64 + ctx.r11.u64;
	// stwcx. r10,0,r9
	ea = ctx.r9.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8357b24c
	if (!cr0.eq) goto loc_8357B24C;
loc_8357B268:
	// lwz r3,0(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8357B270:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8357b270
	if (!cr6.eq) goto loc_8357B270;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x83522540
	ctx.lr = 0x8357B290;
	sub_83522540(ctx, base);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x83561da0
	ctx.lr = 0x8357B2A4;
	sub_83561DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x833bd1b8
	ctx.lr = 0x8357B2B0;
	sub_833BD1B8(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x833d6d90
	ctx.lr = 0x8357B2B8;
	sub_833D6D90(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x83521f50
	ctx.lr = 0x8357B2C0;
	sub_83521F50(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,24(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8357b3d4
	if (cr6.eq) goto loc_8357B3D4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8357B2E0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,24(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8357B2F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8357b318
	if (cr6.eq) goto loc_8357B318;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x83521f50
	ctx.lr = 0x8357B30C;
	sub_83521F50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_8357B318:
	// stw r25,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r25.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,72
	ctx.r4.s64 = 72;
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// bl 0x82595718
	ctx.lr = 0x8357B32C;
	sub_82595718(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8357b344
	if (cr6.eq) goto loc_8357B344;
	// bl 0x838fce00
	ctx.lr = 0x8357B33C;
	sub_838FCE00(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// b 0x8357b348
	goto loc_8357B348;
loc_8357B344:
	// mr r20,r29
	ctx.r20.u64 = ctx.r29.u64;
loc_8357B348:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r31,24(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8357B364;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,20(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8357B37C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x838fceb8
	ctx.lr = 0x8357B390;
	sub_838FCEB8(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x8357b3ec
	if (!cr6.eq) goto loc_8357B3EC;
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(ctx.r20.u32, 0, xer);
	// beq cr6,0x8357b3d4
	if (cr6.eq) goto loc_8357B3D4;
	// stw r25,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r25.u32);
	// addi r4,r1,164
	ctx.r4.s64 = ctx.r1.s64 + 164;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595150
	ctx.lr = 0x8357B3B4;
	sub_82595150(ctx, base);
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8357B3CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595170
	ctx.lr = 0x8357B3D4;
	sub_82595170(ctx, base);
loc_8357B3D4:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x83521f50
	ctx.lr = 0x8357B3DC;
	sub_83521F50(ctx, base);
	// lis r3,2048
	ctx.r3.s64 = 134217728;
	// ori r3,r3,11
	ctx.r3.u64 = ctx.r3.u64 | 11;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_8357B3EC:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x838fbb40
	ctx.lr = 0x8357B3F4;
	sub_838FBB40(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r27,r11,-21392
	ctx.r27.s64 = ctx.r11.s64 + -21392;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r4,r27,-68
	ctx.r4.s64 = ctx.r27.s64 + -68;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x831d0ca0
	ctx.lr = 0x8357B410;
	sub_831D0CA0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8357b468
	if (cr6.eq) goto loc_8357B468;
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(ctx.r20.u32, 0, xer);
	// beq cr6,0x8357b450
	if (cr6.eq) goto loc_8357B450;
	// stw r25,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r25.u32);
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595150
	ctx.lr = 0x8357B430;
	sub_82595150(ctx, base);
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8357B448;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595170
	ctx.lr = 0x8357B450;
	sub_82595170(ctx, base);
loc_8357B450:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x83521f50
	ctx.lr = 0x8357B458;
	sub_83521F50(ctx, base);
	// lis r3,2048
	ctx.r3.s64 = 134217728;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_8357B468:
	// addi r4,r27,-56
	ctx.r4.s64 = ctx.r27.s64 + -56;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838fbbc8
	ctx.lr = 0x8357B474;
	sub_838FBBC8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8357b908
	if (cr6.eq) goto loc_8357B908;
	// lis r21,-31744
	ctx.r21.s64 = -2080374784;
	// li r30,15
	ctx.r30.s64 = 15;
	// li r24,2
	ctx.r24.s64 = 2;
	// li r22,-1
	ctx.r22.s64 = -1;
loc_8357B490:
	// addi r4,r27,-44
	ctx.r4.s64 = ctx.r27.s64 + -44;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x838fc840
	ctx.lr = 0x8357B49C;
	sub_838FC840(ctx, base);
	// lwz r11,9616(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 9616);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8357b4d8
	if (!cr6.eq) goto loc_8357B4D8;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
loc_8357B4BC:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r25,r10
	ctx.r9.u64 = ctx.r25.u64 + ctx.r10.u64;
	// stwcx. r9,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8357b4bc
	if (!cr0.eq) goto loc_8357B4BC;
loc_8357B4D8:
	// addi r4,r27,-36
	ctx.r4.s64 = ctx.r27.s64 + -36;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x835228e0
	ctx.lr = 0x8357B4E8;
	sub_835228E0(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8357B4EC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8357b4ec
	if (!cr6.eq) goto loc_8357B4EC;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x835228e0
	ctx.lr = 0x8357B514;
	sub_835228E0(ctx, base);
	// addi r4,r27,-32
	ctx.r4.s64 = ctx.r27.s64 + -32;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x835228e0
	ctx.lr = 0x8357B524;
	sub_835228E0(ctx, base);
	// bl 0x835812a0
	ctx.lr = 0x8357B528;
	sub_835812A0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8357b564
	if (!cr6.eq) goto loc_8357B564;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
loc_8357B548:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r25,r10
	ctx.r9.u64 = ctx.r25.u64 + ctx.r10.u64;
	// stwcx. r9,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8357b548
	if (!cr0.eq) goto loc_8357B548;
loc_8357B564:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x8357b0b0
	ctx.lr = 0x8357B570;
	sub_8357B0B0(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x83521f50
	ctx.lr = 0x8357B578;
	sub_83521F50(ctx, base);
	// addi r4,r27,-24
	ctx.r4.s64 = ctx.r27.s64 + -24;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x838fbbc8
	ctx.lr = 0x8357B584;
	sub_838FBBC8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8357b8e8
	if (cr6.eq) goto loc_8357B8E8;
loc_8357B590:
	// addi r4,r27,-16
	ctx.r4.s64 = ctx.r27.s64 + -16;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x838fc840
	ctx.lr = 0x8357B59C;
	sub_838FC840(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// stb r29,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r29.u8);
loc_8357B5B0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8357b5b0
	if (!cr6.eq) goto loc_8357B5B0;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8357B5D8;
	sub_8259CC28(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x835410c0
	ctx.lr = 0x8357B5E0;
	sub_835410C0(ctx, base);
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// cmpdi cr6,r11,-1
	cr6.compare<int64_t>(ctx.r11.s64, -1, xer);
	// bne cr6,0x8357b5f4
	if (!cr6.eq) goto loc_8357B5F4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_8357B5F4:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8357b608
	if (!cr6.eq) goto loc_8357B608;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x8357b61c
	goto loc_8357B61C;
loc_8357B608:
	// rldicr r11,r11,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 0) & 0x8000000000000000;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// bne cr6,0x8357b61c
	if (!cr6.eq) goto loc_8357B61C;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_8357B61C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8357b7e4
	if (cr6.eq) goto loc_8357B7E4;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x835410c0
	ctx.lr = 0x8357B630;
	sub_835410C0(ctx, base);
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// cmpdi cr6,r10,-1
	cr6.compare<int64_t>(ctx.r10.s64, -1, xer);
	// bne cr6,0x8357b644
	if (!cr6.eq) goto loc_8357B644;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8357B644:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8357b69c
	if (cr6.eq) goto loc_8357B69C;
	// cmpdi cr6,r10,-1
	cr6.compare<int64_t>(ctx.r10.s64, -1, xer);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// bne cr6,0x8357b660
	if (!cr6.eq) goto loc_8357B660;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8357B660:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8357b674
	if (!cr6.eq) goto loc_8357B674;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x8357b688
	goto loc_8357B688;
loc_8357B674:
	// rldicr r11,r10,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u64, 0) & 0x8000000000000000;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// bne cr6,0x8357b688
	if (!cr6.eq) goto loc_8357B688;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_8357B688:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8357b69c
	if (cr6.eq) goto loc_8357B69C;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// b 0x8357b6a0
	goto loc_8357B6A0;
loc_8357B69C:
	// bl 0x83522850
	ctx.lr = 0x8357B6A0;
	sub_83522850(ctx, base);
loc_8357B6A0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r30.u32);
	// stw r29,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r29.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r29,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r29.u8);
loc_8357B6B8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8357b6b8
	if (!cr6.eq) goto loc_8357B6B8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8357B6DC;
	sub_8259CC28(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x83579ec0
	ctx.lr = 0x8357B6E8;
	sub_83579EC0(ctx, base);
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8357b704
	if (cr6.lt) goto loc_8357B704;
	// stw r24,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r24.u32);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x825952b8
	ctx.lr = 0x8357B704;
	sub_825952B8(ctx, base);
loc_8357B704:
	// stw r30,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r30.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r29,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r29.u32);
	// stb r29,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r29.u8);
	// stw r30,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r30.u32);
	// stw r29,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r29.u32);
	// stb r29,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r29.u8);
loc_8357B720:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8357b720
	if (!cr6.eq) goto loc_8357B720;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8357B748;
	sub_8259CC28(ctx, base);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8357a3c0
	ctx.lr = 0x8357B758;
	sub_8357A3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8259cb28
	ctx.lr = 0x8357B76C;
	sub_8259CB28(ctx, base);
	// lwz r10,292(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8357b788
	if (cr6.lt) goto loc_8357B788;
	// stw r24,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r24.u32);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// lwz r4,272(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// bl 0x825952b8
	ctx.lr = 0x8357B788;
	sub_825952B8(ctx, base);
loc_8357B788:
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// stw r30,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r30.u32);
	// stw r29,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r29.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r29,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r29.u8);
	// blt cr6,0x8357b7b0
	if (cr6.lt) goto loc_8357B7B0;
	// stw r24,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r24.u32);
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x825952b8
	ctx.lr = 0x8357B7B0;
	sub_825952B8(ctx, base);
loc_8357B7B0:
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// stw r30,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r30.u32);
	// stw r29,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r29.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r29,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r29.u8);
	// blt cr6,0x8357b7d8
	if (cr6.lt) goto loc_8357B7D8;
	// stw r24,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r24.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x825952b8
	ctx.lr = 0x8357B7D8;
	sub_825952B8(ctx, base);
loc_8357B7D8:
	// stw r30,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r30.u32);
	// stw r29,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r29.u32);
	// stb r29,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r29.u8);
loc_8357B7E4:
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// ble cr6,0x8357b8a8
	if (!cr6.gt) goto loc_8357B8A8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8357b954
	if (cr6.eq) goto loc_8357B954;
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// bge cr6,0x8357b810
	if (!cr6.lt) goto loc_8357B810;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
loc_8357B810:
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,37
	cr6.compare<uint32_t>(ctx.r11.u32, 37, xer);
	// beq cr6,0x8357b8a8
	if (cr6.eq) goto loc_8357B8A8;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x8357b828
	if (!cr6.lt) goto loc_8357B828;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
loc_8357B828:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8357B82C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8357b82c
	if (!cr6.eq) goto loc_8357B82C;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x83522540
	ctx.lr = 0x8357B84C;
	sub_83522540(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x835620a8
	ctx.lr = 0x8357B854;
	sub_835620A8(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8357b88c
	if (!cr6.eq) goto loc_8357B88C;
	// addi r9,r31,8
	ctx.r9.s64 = ctx.r31.s64 + 8;
loc_8357B870:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ea = ctx.r9.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r25,r11
	ctx.r10.u64 = ctx.r25.u64 + ctx.r11.u64;
	// stwcx. r10,0,r9
	ea = ctx.r9.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8357b870
	if (!cr0.eq) goto loc_8357B870;
loc_8357B88C:
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x8357b0b0
	ctx.lr = 0x8357B898;
	sub_8357B0B0(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x83521f50
	ctx.lr = 0x8357B8A0;
	sub_83521F50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83521f50
	ctx.lr = 0x8357B8A8;
	sub_83521F50(ctx, base);
loc_8357B8A8:
	// addi r4,r27,-8
	ctx.r4.s64 = ctx.r27.s64 + -8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x838fbce0
	ctx.lr = 0x8357B8B4;
	sub_838FBCE0(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8357b8d4
	if (cr6.lt) goto loc_8357B8D4;
	// stw r24,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r24.u32);
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x8357B8D4;
	sub_825952B8(ctx, base);
loc_8357B8D4:
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// stb r29,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r29.u8);
	// bne cr6,0x8357b590
	if (!cr6.eq) goto loc_8357B590;
loc_8357B8E8:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x838fbce0
	ctx.lr = 0x8357B8F4;
	sub_838FBCE0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83521f50
	ctx.lr = 0x8357B900;
	sub_83521F50(ctx, base);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// bne cr6,0x8357b490
	if (!cr6.eq) goto loc_8357B490;
loc_8357B908:
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(ctx.r20.u32, 0, xer);
	// beq cr6,0x8357b940
	if (cr6.eq) goto loc_8357B940;
	// stw r25,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r25.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595150
	ctx.lr = 0x8357B920;
	sub_82595150(ctx, base);
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8357B938;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595170
	ctx.lr = 0x8357B940;
	sub_82595170(ctx, base);
loc_8357B940:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x83521f50
	ctx.lr = 0x8357B948;
	sub_83521F50(ctx, base);
loc_8357B948:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_8357B954:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,9148
	ctx.r3.s64 = ctx.r11.s64 + 9148;
	// bl 0x831cc188
	ctx.lr = 0x8357B960;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_8357B960"))) PPC_WEAK_FUNC(sub_8357B960);
PPC_FUNC_IMPL(__imp__sub_8357B960) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8357B968;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x8357ba1c
	if (!cr6.eq) goto loc_8357BA1C;
	// std r29,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r29.u64);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// lwz r4,24(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// bl 0x8259f070
	ctx.lr = 0x8357B994;
	sub_8259F070(ctx, base);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8357B9A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8357B9BC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8357b9dc
	if (cr6.eq) goto loc_8357B9DC;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x833d6d90
	ctx.lr = 0x8357B9D0;
	sub_833D6D90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8357B9DC:
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8357B9F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8357BA0C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// rotlwi r30,r3,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x833d6d90
	ctx.lr = 0x8357BA18;
	sub_833D6D90(ctx, base);
	// b 0x8357ba24
	goto loc_8357BA24;
loc_8357BA1C:
	// lwz r31,32(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// lwz r30,36(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
loc_8357BA24:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8357bb28
	if (cr6.eq) goto loc_8357BB28;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8357bb28
	if (cr6.eq) goto loc_8357BB28;
	// li r28,1
	ctx.r28.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// li r4,72
	ctx.r4.s64 = 72;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8357BA4C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8357ba5c
	if (cr6.eq) goto loc_8357BA5C;
	// bl 0x838fce00
	ctx.lr = 0x8357BA58;
	sub_838FCE00(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_8357BA5C:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x838fceb8
	ctx.lr = 0x8357BA70;
	sub_838FCEB8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8357bac4
	if (!cr6.eq) goto loc_8357BAC4;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x8357bab4
	if (cr6.eq) goto loc_8357BAB4;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595150
	ctx.lr = 0x8357BA94;
	sub_82595150(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8357BAAC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595170
	ctx.lr = 0x8357BAB4;
	sub_82595170(ctx, base);
loc_8357BAB4:
	// lis r3,2048
	ctx.r3.s64 = 134217728;
	// ori r3,r3,11
	ctx.r3.u64 = ctx.r3.u64 | 11;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8357BAC4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x838fbb40
	ctx.lr = 0x8357BACC;
	sub_838FBB40(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-21348
	ctx.r30.s64 = ctx.r11.s64 + -21348;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r4,r30,-24
	ctx.r4.s64 = ctx.r30.s64 + -24;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x831d0ca0
	ctx.lr = 0x8357BAE8;
	sub_831D0CA0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8357bb38
	if (cr6.eq) goto loc_8357BB38;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x8357bb28
	if (cr6.eq) goto loc_8357BB28;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595150
	ctx.lr = 0x8357BB08;
	sub_82595150(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8357BB20;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595170
	ctx.lr = 0x8357BB28;
	sub_82595170(ctx, base);
loc_8357BB28:
	// lis r3,2048
	ctx.r3.s64 = 134217728;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8357BB38:
	// addi r4,r30,-12
	ctx.r4.s64 = ctx.r30.s64 + -12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838fbbc8
	ctx.lr = 0x8357BB44;
	sub_838FBBC8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8357bb74
	if (cr6.eq) goto loc_8357BB74;
loc_8357BB50:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8357af70
	ctx.lr = 0x8357BB5C;
	sub_8357AF70(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838fbce0
	ctx.lr = 0x8357BB68;
	sub_838FBCE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8357bb50
	if (!cr6.eq) goto loc_8357BB50;
loc_8357BB74:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x8357bbac
	if (cr6.eq) goto loc_8357BBAC;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595150
	ctx.lr = 0x8357BB8C;
	sub_82595150(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8357BBA4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595170
	ctx.lr = 0x8357BBAC;
	sub_82595170(ctx, base);
loc_8357BBAC:
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83565278
	ctx.lr = 0x8357BBB8;
	sub_83565278(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8357BBC4"))) PPC_WEAK_FUNC(sub_8357BBC4);
PPC_FUNC_IMPL(__imp__sub_8357BBC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8357BBC8"))) PPC_WEAK_FUNC(sub_8357BBC8);
PPC_FUNC_IMPL(__imp__sub_8357BBC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lwz r3,9608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9608);
	// b 0x825832e0
	sub_825832E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8357BBD4"))) PPC_WEAK_FUNC(sub_8357BBD4);
PPC_FUNC_IMPL(__imp__sub_8357BBD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8357BBD8"))) PPC_WEAK_FUNC(sub_8357BBD8);
PPC_FUNC_IMPL(__imp__sub_8357BBD8) {
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
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-20904
	ctx.r10.s64 = ctx.r11.s64 + -20904;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r4,r3,96
	ctx.r4.s64 = ctx.r3.s64 + 96;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r6,100(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x83458060
	ctx.lr = 0x8357BC14;
	sub_83458060(ctx, base);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x825952b8
	ctx.lr = 0x8357BC28;
	sub_825952B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83565fa0
	ctx.lr = 0x8357BC30;
	sub_83565FA0(ctx, base);
	// clrlwi r8,r30,31
	ctx.r8.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8357bc50
	if (cr6.eq) goto loc_8357BC50;
	// bl 0x82595188
	ctx.lr = 0x8357BC40;
	sub_82595188(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x8357BC50;
	sub_825952B8(ctx, base);
loc_8357BC50:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_8357BC6C"))) PPC_WEAK_FUNC(sub_8357BC6C);
PPC_FUNC_IMPL(__imp__sub_8357BC6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8357BC70"))) PPC_WEAK_FUNC(sub_8357BC70);
PPC_FUNC_IMPL(__imp__sub_8357BC70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8357BC78;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,112
	ctx.r4.s64 = 112;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x8357BC9C;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8357bcd8
	if (cr6.eq) goto loc_8357BCD8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83565bb8
	ctx.lr = 0x8357BCB4;
	sub_83565BB8(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r10,r11,-20904
	ctx.r10.s64 = ctx.r11.s64 + -20904;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x835ebbc8
	ctx.lr = 0x8357BCD0;
	sub_835EBBC8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// b 0x8357bcdc
	goto loc_8357BCDC;
loc_8357BCD8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8357BCDC:
	// std r28,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r28.u64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// bl 0x8259f070
	ctx.lr = 0x8357BCEC;
	sub_8259F070(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8357BCF8"))) PPC_WEAK_FUNC(sub_8357BCF8);
PPC_FUNC_IMPL(__imp__sub_8357BCF8) {
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
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r31,r11,9700
	ctx.r31.s64 = ctx.r11.s64 + 9700;
	// lwz r11,9720(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9720);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8357bd44
	if (!cr6.eq) goto loc_8357BD44;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,9720(r10)
	PPC_STORE_U32(ctx.r10.u32 + 9720, ctx.r11.u32);
	// bl 0x83a5f308
	ctx.lr = 0x8357BD38;
	sub_83A5F308(ctx, base);
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-23152
	ctx.r3.s64 = ctx.r11.s64 + -23152;
	// bl 0x831cdcc8
	ctx.lr = 0x8357BD44;
	sub_831CDCC8(ctx, base);
loc_8357BD44:
	// lis r30,-31744
	ctx.r30.s64 = -2080374784;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r31,9608(r30)
	PPC_STORE_U32(ctx.r30.u32 + 9608, ctx.r31.u32);
	// bl 0x83585dc8
	ctx.lr = 0x8357BD54;
	sub_83585DC8(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lwz r3,9608(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9608);
	// addi r4,r11,-21508
	ctx.r4.s64 = ctx.r11.s64 + -21508;
	// bl 0x83a7a980
	ctx.lr = 0x8357BD64;
	sub_83A7A980(ctx, base);
	// li r4,112
	ctx.r4.s64 = 112;
	// lwz r3,9608(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9608);
	// bl 0x82583338
	ctx.lr = 0x8357BD70;
	sub_82583338(ctx, base);
	// bl 0x83565440
	ctx.lr = 0x8357BD74;
	sub_83565440(ctx, base);
	// lwz r11,9608(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9608);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83585d68
	ctx.lr = 0x8357BD84;
	sub_83585D68(ctx, base);
	// lis r10,-31912
	ctx.r10.s64 = -2091384832;
	// lwz r3,9608(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9608);
	// addi r4,r10,-17296
	ctx.r4.s64 = ctx.r10.s64 + -17296;
	// bl 0x82583300
	ctx.lr = 0x8357BD94;
	sub_82583300(ctx, base);
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

__attribute__((alias("__imp__sub_8357BDAC"))) PPC_WEAK_FUNC(sub_8357BDAC);
PPC_FUNC_IMPL(__imp__sub_8357BDAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8357BDB0"))) PPC_WEAK_FUNC(sub_8357BDB0);
PPC_FUNC_IMPL(__imp__sub_8357BDB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lwz r3,9724(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9724);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8357BDBC"))) PPC_WEAK_FUNC(sub_8357BDBC);
PPC_FUNC_IMPL(__imp__sub_8357BDBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8357BDC0"))) PPC_WEAK_FUNC(sub_8357BDC0);
PPC_FUNC_IMPL(__imp__sub_8357BDC0) {
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
	// bl 0x83565088
	ctx.lr = 0x8357BDE0;
	sub_83565088(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-20808
	ctx.r10.s64 = ctx.r11.s64 + -20808;
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

__attribute__((alias("__imp__sub_8357BE0C"))) PPC_WEAK_FUNC(sub_8357BE0C);
PPC_FUNC_IMPL(__imp__sub_8357BE0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8357BE10"))) PPC_WEAK_FUNC(sub_8357BE10);
PPC_FUNC_IMPL(__imp__sub_8357BE10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r10,r11,-20808
	ctx.r10.s64 = ctx.r11.s64 + -20808;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x83565188
	sub_83565188(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8357BE20"))) PPC_WEAK_FUNC(sub_8357BE20);
PPC_FUNC_IMPL(__imp__sub_8357BE20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lwz r3,9724(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9724);
	// b 0x825832e0
	sub_825832E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8357BE2C"))) PPC_WEAK_FUNC(sub_8357BE2C);
PPC_FUNC_IMPL(__imp__sub_8357BE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8357BE30"))) PPC_WEAK_FUNC(sub_8357BE30);
PPC_FUNC_IMPL(__imp__sub_8357BE30) {
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
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-20816
	ctx.r9.s64 = ctx.r11.s64 + -20816;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x8357BE6C;
	sub_825952B8(ctx, base);
	// lis r8,-32218
	ctx.r8.s64 = -2111438848;
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// addi r6,r8,-24136
	ctx.r6.s64 = ctx.r8.s64 + -24136;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// beq cr6,0x8357be98
	if (cr6.eq) goto loc_8357BE98;
	// bl 0x82595188
	ctx.lr = 0x8357BE88;
	sub_82595188(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x8357BE98;
	sub_825952B8(ctx, base);
loc_8357BE98:
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

__attribute__((alias("__imp__sub_8357BEB4"))) PPC_WEAK_FUNC(sub_8357BEB4);
PPC_FUNC_IMPL(__imp__sub_8357BEB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8357BEB8"))) PPC_WEAK_FUNC(sub_8357BEB8);
PPC_FUNC_IMPL(__imp__sub_8357BEB8) {
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
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r31,r11,9732
	ctx.r31.s64 = ctx.r11.s64 + 9732;
	// lwz r11,9752(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9752);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8357bf04
	if (!cr6.eq) goto loc_8357BF04;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,9752(r10)
	PPC_STORE_U32(ctx.r10.u32 + 9752, ctx.r11.u32);
	// bl 0x83a5f308
	ctx.lr = 0x8357BEF8;
	sub_83A5F308(ctx, base);
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-23120
	ctx.r3.s64 = ctx.r11.s64 + -23120;
	// bl 0x831cdcc8
	ctx.lr = 0x8357BF04;
	sub_831CDCC8(ctx, base);
loc_8357BF04:
	// lis r30,-31744
	ctx.r30.s64 = -2080374784;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r31,9724(r30)
	PPC_STORE_U32(ctx.r30.u32 + 9724, ctx.r31.u32);
	// bl 0x83585dc8
	ctx.lr = 0x8357BF14;
	sub_83585DC8(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lwz r3,9724(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9724);
	// addi r4,r11,-20832
	ctx.r4.s64 = ctx.r11.s64 + -20832;
	// bl 0x83a7a980
	ctx.lr = 0x8357BF24;
	sub_83A7A980(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r3,9724(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9724);
	// bl 0x82583338
	ctx.lr = 0x8357BF30;
	sub_82583338(ctx, base);
	// bl 0x83564ee0
	ctx.lr = 0x8357BF34;
	sub_83564EE0(ctx, base);
	// lwz r11,9724(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9724);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83585d68
	ctx.lr = 0x8357BF44;
	sub_83585D68(ctx, base);
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

__attribute__((alias("__imp__sub_8357BF5C"))) PPC_WEAK_FUNC(sub_8357BF5C);
PPC_FUNC_IMPL(__imp__sub_8357BF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8357BF60"))) PPC_WEAK_FUNC(sub_8357BF60);
PPC_FUNC_IMPL(__imp__sub_8357BF60) {
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
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-20808
	ctx.r10.s64 = ctx.r11.s64 + -20808;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x83565188
	ctx.lr = 0x8357BF8C;
	sub_83565188(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8357bfac
	if (cr6.eq) goto loc_8357BFAC;
	// bl 0x82595188
	ctx.lr = 0x8357BF9C;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x8357BFAC;
	sub_825952B8(ctx, base);
loc_8357BFAC:
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

__attribute__((alias("__imp__sub_8357BFC8"))) PPC_WEAK_FUNC(sub_8357BFC8);
PPC_FUNC_IMPL(__imp__sub_8357BFC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8357BFD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31744
	ctx.r30.s64 = -2080374784;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r3,9724(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9724);
	// bl 0x825832d8
	ctx.lr = 0x8357BFE8;
	sub_825832D8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8357c05c
	if (!cr6.eq) goto loc_8357C05C;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// std r30,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r30.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// bl 0x82574ba8
	ctx.lr = 0x8357C008;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8357c0a0
	if (cr6.eq) goto loc_8357C0A0;
	// li r11,-2
	ctx.r11.s64 = -2;
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
loc_8357C018:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8357c018
	if (!cr0.eq) goto loc_8357C018;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bgt cr6,0x8357c0a0
	if (cr6.gt) goto loc_8357C0A0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8357C050;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8357C05C:
	// lwz r3,9724(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9724);
	// bl 0x825832d8
	ctx.lr = 0x8357C064;
	sub_825832D8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8357C078;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// std r30,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r30.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82574ba8
	ctx.lr = 0x8357C094;
	sub_82574BA8(ctx, base);
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x833d6d90
	ctx.lr = 0x8357C0A0;
	sub_833D6D90(ctx, base);
loc_8357C0A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8357C0AC"))) PPC_WEAK_FUNC(sub_8357C0AC);
PPC_FUNC_IMPL(__imp__sub_8357C0AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8357C0B0"))) PPC_WEAK_FUNC(sub_8357C0B0);
PPC_FUNC_IMPL(__imp__sub_8357C0B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8357C0B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8357c178
	if (cr6.eq) goto loc_8357C178;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8357c178
	if (cr6.eq) goto loc_8357C178;
	// li r31,1
	ctx.r31.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// bl 0x82595718
	ctx.lr = 0x8357C0E4;
	sub_82595718(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8357c178
	if (cr6.eq) goto loc_8357C178;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x8357C104;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r31,0
	ctx.r31.s64 = 0;
	// beq cr6,0x8357c130
	if (cr6.eq) goto loc_8357C130;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// stw r28,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r28.u32);
	// stw r29,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r10,r11,-20816
	ctx.r10.s64 = ctx.r11.s64 + -20816;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8357c134
	goto loc_8357C134;
loc_8357C130:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_8357C134:
	// std r31,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r31.u64);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// bl 0x8259f070
	ctx.lr = 0x8357C144;
	sub_8259F070(ctx, base);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// std r31,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r31.u64);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// beq cr6,0x8357c164
	if (cr6.eq) goto loc_8357C164;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574ba8
	ctx.lr = 0x8357C160;
	sub_82574BA8(ctx, base);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
loc_8357C164:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x833d6d90
	ctx.lr = 0x8357C16C;
	sub_833D6D90(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8357C178:
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// std r31,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r31.u64);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8357C190"))) PPC_WEAK_FUNC(sub_8357C190);
PPC_FUNC_IMPL(__imp__sub_8357C190) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8357C198;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// stw r5,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,21716
	ctx.r10.s64 = ctx.r11.s64 + 21716;
	// stw r6,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8357bfc8
	ctx.lr = 0x8357C1C4;
	sub_8357BFC8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// std r30,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r30.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82574ba8
	ctx.lr = 0x8357C1E0;
	sub_82574BA8(ctx, base);
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82574ba8
	ctx.lr = 0x8357C1F0;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8357c238
	if (cr6.eq) goto loc_8357C238;
	// li r11,-2
	ctx.r11.s64 = -2;
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
loc_8357C200:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8357c200
	if (!cr0.eq) goto loc_8357C200;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bgt cr6,0x8357c238
	if (cr6.gt) goto loc_8357C238;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8357C238;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8357C238:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8357C244"))) PPC_WEAK_FUNC(sub_8357C244);
PPC_FUNC_IMPL(__imp__sub_8357C244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8357C248"))) PPC_WEAK_FUNC(sub_8357C248);
PPC_FUNC_IMPL(__imp__sub_8357C248) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lwz r3,9756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9756);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8357C254"))) PPC_WEAK_FUNC(sub_8357C254);
PPC_FUNC_IMPL(__imp__sub_8357C254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8357C258"))) PPC_WEAK_FUNC(sub_8357C258);
PPC_FUNC_IMPL(__imp__sub_8357C258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lwz r3,9760(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9760);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8357C264"))) PPC_WEAK_FUNC(sub_8357C264);
PPC_FUNC_IMPL(__imp__sub_8357C264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8357C268"))) PPC_WEAK_FUNC(sub_8357C268);
PPC_FUNC_IMPL(__imp__sub_8357C268) {
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
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r31,r11,9768
	ctx.r31.s64 = ctx.r11.s64 + 9768;
	// lwz r11,9788(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9788);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8357c2b4
	if (!cr6.eq) goto loc_8357C2B4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,9788(r10)
	PPC_STORE_U32(ctx.r10.u32 + 9788, ctx.r11.u32);
	// bl 0x83a5f308
	ctx.lr = 0x8357C2A8;
	sub_83A5F308(ctx, base);
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-23088
	ctx.r3.s64 = ctx.r11.s64 + -23088;
	// bl 0x831cdcc8
	ctx.lr = 0x8357C2B4;
	sub_831CDCC8(ctx, base);
loc_8357C2B4:
	// lis r30,-31744
	ctx.r30.s64 = -2080374784;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r31,9756(r30)
	PPC_STORE_U32(ctx.r30.u32 + 9756, ctx.r31.u32);
	// bl 0x83585dc8
	ctx.lr = 0x8357C2C4;
	sub_83585DC8(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lwz r3,9756(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9756);
	// addi r4,r11,-20768
	ctx.r4.s64 = ctx.r11.s64 + -20768;
	// bl 0x83a7a980
	ctx.lr = 0x8357C2D4;
	sub_83A7A980(ctx, base);
	// li r4,40
	ctx.r4.s64 = 40;
	// lwz r3,9756(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9756);
	// bl 0x82583338
	ctx.lr = 0x8357C2E0;
	sub_82583338(ctx, base);
	// bl 0x83585238
	ctx.lr = 0x8357C2E4;
	sub_83585238(ctx, base);
	// lwz r11,9756(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9756);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83585d68
	ctx.lr = 0x8357C2F4;
	sub_83585D68(ctx, base);
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

__attribute__((alias("__imp__sub_8357C30C"))) PPC_WEAK_FUNC(sub_8357C30C);
PPC_FUNC_IMPL(__imp__sub_8357C30C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8357C310"))) PPC_WEAK_FUNC(sub_8357C310);
PPC_FUNC_IMPL(__imp__sub_8357C310) {
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
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r31,r11,9792
	ctx.r31.s64 = ctx.r11.s64 + 9792;
	// lwz r11,9812(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9812);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8357c35c
	if (!cr6.eq) goto loc_8357C35C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,9812(r10)
	PPC_STORE_U32(ctx.r10.u32 + 9812, ctx.r11.u32);
	// bl 0x83a5f308
	ctx.lr = 0x8357C350;
	sub_83A5F308(ctx, base);
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-23072
	ctx.r3.s64 = ctx.r11.s64 + -23072;
	// bl 0x831cdcc8
	ctx.lr = 0x8357C35C;
	sub_831CDCC8(ctx, base);
loc_8357C35C:
	// lis r30,-31744
	ctx.r30.s64 = -2080374784;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r31,9760(r30)
	PPC_STORE_U32(ctx.r30.u32 + 9760, ctx.r31.u32);
	// bl 0x83585dc8
	ctx.lr = 0x8357C36C;
	sub_83585DC8(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lwz r3,9760(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9760);
	// addi r4,r11,-20748
	ctx.r4.s64 = ctx.r11.s64 + -20748;
	// bl 0x83a7a980
	ctx.lr = 0x8357C37C;
	sub_83A7A980(ctx, base);
	// li r4,40
	ctx.r4.s64 = 40;
	// lwz r3,9760(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9760);
	// bl 0x82583338
	ctx.lr = 0x8357C388;
	sub_82583338(ctx, base);
	// bl 0x83585238
	ctx.lr = 0x8357C38C;
	sub_83585238(ctx, base);
	// lwz r11,9760(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9760);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83585d68
	ctx.lr = 0x8357C39C;
	sub_83585D68(ctx, base);
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

__attribute__((alias("__imp__sub_8357C3B4"))) PPC_WEAK_FUNC(sub_8357C3B4);
PPC_FUNC_IMPL(__imp__sub_8357C3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8357C3B8"))) PPC_WEAK_FUNC(sub_8357C3B8);
PPC_FUNC_IMPL(__imp__sub_8357C3B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8357C3C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31744
	ctx.r30.s64 = -2080374784;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r3,9756(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9756);
	// bl 0x825832d8
	ctx.lr = 0x8357C3D8;
	sub_825832D8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8357c44c
	if (!cr6.eq) goto loc_8357C44C;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// std r30,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r30.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// bl 0x82574ba8
	ctx.lr = 0x8357C3F8;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8357c490
	if (cr6.eq) goto loc_8357C490;
	// li r11,-2
	ctx.r11.s64 = -2;
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
loc_8357C408:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8357c408
	if (!cr0.eq) goto loc_8357C408;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bgt cr6,0x8357c490
	if (cr6.gt) goto loc_8357C490;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8357C440;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8357C44C:
	// lwz r3,9756(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9756);
	// bl 0x825832d8
	ctx.lr = 0x8357C454;
	sub_825832D8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8357C468;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// std r30,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r30.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82574ba8
	ctx.lr = 0x8357C484;
	sub_82574BA8(ctx, base);
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x833d6d90
	ctx.lr = 0x8357C490;
	sub_833D6D90(ctx, base);
loc_8357C490:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8357C49C"))) PPC_WEAK_FUNC(sub_8357C49C);
PPC_FUNC_IMPL(__imp__sub_8357C49C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8357C4A0"))) PPC_WEAK_FUNC(sub_8357C4A0);
PPC_FUNC_IMPL(__imp__sub_8357C4A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8357C4A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31744
	ctx.r30.s64 = -2080374784;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r3,9760(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9760);
	// bl 0x825832d8
	ctx.lr = 0x8357C4C0;
	sub_825832D8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8357c534
	if (!cr6.eq) goto loc_8357C534;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// std r30,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r30.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// bl 0x82574ba8
	ctx.lr = 0x8357C4E0;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8357c578
	if (cr6.eq) goto loc_8357C578;
	// li r11,-2
	ctx.r11.s64 = -2;
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
loc_8357C4F0:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8357c4f0
	if (!cr0.eq) goto loc_8357C4F0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bgt cr6,0x8357c578
	if (cr6.gt) goto loc_8357C578;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8357C528;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8357C534:
	// lwz r3,9760(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9760);
	// bl 0x825832d8
	ctx.lr = 0x8357C53C;
	sub_825832D8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8357C550;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// std r30,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r30.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82574ba8
	ctx.lr = 0x8357C56C;
	sub_82574BA8(ctx, base);
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x833d6d90
	ctx.lr = 0x8357C578;
	sub_833D6D90(ctx, base);
loc_8357C578:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8357C584"))) PPC_WEAK_FUNC(sub_8357C584);
PPC_FUNC_IMPL(__imp__sub_8357C584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8357C588"))) PPC_WEAK_FUNC(sub_8357C588);
PPC_FUNC_IMPL(__imp__sub_8357C588) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8357C590;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r4,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,21716
	ctx.r10.s64 = ctx.r11.s64 + 21716;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8357c3b8
	ctx.lr = 0x8357C5B8;
	sub_8357C3B8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// std r30,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r30.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82574ba8
	ctx.lr = 0x8357C5D4;
	sub_82574BA8(ctx, base);
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82574ba8
	ctx.lr = 0x8357C5E4;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8357c62c
	if (cr6.eq) goto loc_8357C62C;
	// li r11,-2
	ctx.r11.s64 = -2;
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
loc_8357C5F4:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8357c5f4
	if (!cr0.eq) goto loc_8357C5F4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bgt cr6,0x8357c62c
	if (cr6.gt) goto loc_8357C62C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8357C62C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8357C62C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8357C638"))) PPC_WEAK_FUNC(sub_8357C638);
PPC_FUNC_IMPL(__imp__sub_8357C638) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// bl 0x835852e0
	ctx.lr = 0x8357C650;
	sub_835852E0(ctx, base);
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-20728
	ctx.r9.s64 = ctx.r10.s64 + -20728;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// std r11,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r11.u64);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// bl 0x82574ba8
	ctx.lr = 0x8357C674;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8357c6bc
	if (cr6.eq) goto loc_8357C6BC;
	// li r11,-2
	ctx.r11.s64 = -2;
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
loc_8357C684:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8357c684
	if (!cr0.eq) goto loc_8357C684;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bgt cr6,0x8357c6bc
	if (cr6.gt) goto loc_8357C6BC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8357C6BC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8357C6BC:
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

__attribute__((alias("__imp__sub_8357C6D4"))) PPC_WEAK_FUNC(sub_8357C6D4);
PPC_FUNC_IMPL(__imp__sub_8357C6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8357C6D8"))) PPC_WEAK_FUNC(sub_8357C6D8);
PPC_FUNC_IMPL(__imp__sub_8357C6D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lwz r3,9756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9756);
	// b 0x825832e0
	sub_825832E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8357C6E4"))) PPC_WEAK_FUNC(sub_8357C6E4);
PPC_FUNC_IMPL(__imp__sub_8357C6E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8357C6E8"))) PPC_WEAK_FUNC(sub_8357C6E8);
PPC_FUNC_IMPL(__imp__sub_8357C6E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,-20728
	ctx.r10.s64 = ctx.r11.s64 + -20728;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82574ba8
	ctx.lr = 0x8357C714;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8357c75c
	if (cr6.eq) goto loc_8357C75C;
	// li r11,-2
	ctx.r11.s64 = -2;
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
loc_8357C724:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8357c724
	if (!cr0.eq) goto loc_8357C724;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bgt cr6,0x8357c75c
	if (cr6.gt) goto loc_8357C75C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8357C75C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8357C75C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83585328
	ctx.lr = 0x8357C764;
	sub_83585328(ctx, base);
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

__attribute__((alias("__imp__sub_8357C778"))) PPC_WEAK_FUNC(sub_8357C778);
PPC_FUNC_IMPL(__imp__sub_8357C778) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8357C780;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83564ef0
	ctx.lr = 0x8357C78C;
	sub_83564EF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8357c4a0
	ctx.lr = 0x8357C798;
	sub_8357C4A0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// std r30,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r30.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82574ba8
	ctx.lr = 0x8357C7B4;
	sub_82574BA8(ctx, base);
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82574ba8
	ctx.lr = 0x8357C7C4;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8357c80c
	if (cr6.eq) goto loc_8357C80C;
	// li r11,-2
	ctx.r11.s64 = -2;
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
loc_8357C7D4:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8357c7d4
	if (!cr0.eq) goto loc_8357C7D4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bgt cr6,0x8357c80c
	if (cr6.gt) goto loc_8357C80C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8357C80C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8357C80C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8357C818"))) PPC_WEAK_FUNC(sub_8357C818);
PPC_FUNC_IMPL(__imp__sub_8357C818) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// bl 0x835852e0
	ctx.lr = 0x8357C830;
	sub_835852E0(ctx, base);
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-20700
	ctx.r9.s64 = ctx.r10.s64 + -20700;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// std r11,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r11.u64);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// bl 0x82574ba8
	ctx.lr = 0x8357C854;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8357c89c
	if (cr6.eq) goto loc_8357C89C;
	// li r11,-2
	ctx.r11.s64 = -2;
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
loc_8357C864:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8357c864
	if (!cr0.eq) goto loc_8357C864;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bgt cr6,0x8357c89c
	if (cr6.gt) goto loc_8357C89C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8357C89C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8357C89C:
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

__attribute__((alias("__imp__sub_8357C8B4"))) PPC_WEAK_FUNC(sub_8357C8B4);
PPC_FUNC_IMPL(__imp__sub_8357C8B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8357C8B8"))) PPC_WEAK_FUNC(sub_8357C8B8);
PPC_FUNC_IMPL(__imp__sub_8357C8B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lwz r3,9760(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9760);
	// b 0x825832e0
	sub_825832E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8357C8C4"))) PPC_WEAK_FUNC(sub_8357C8C4);
PPC_FUNC_IMPL(__imp__sub_8357C8C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8357C8C8"))) PPC_WEAK_FUNC(sub_8357C8C8);
PPC_FUNC_IMPL(__imp__sub_8357C8C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,-20700
	ctx.r10.s64 = ctx.r11.s64 + -20700;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82574ba8
	ctx.lr = 0x8357C8F4;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8357c93c
	if (cr6.eq) goto loc_8357C93C;
	// li r11,-2
	ctx.r11.s64 = -2;
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
loc_8357C904:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8357c904
	if (!cr0.eq) goto loc_8357C904;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bgt cr6,0x8357c93c
	if (cr6.gt) goto loc_8357C93C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8357C93C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8357C93C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83585328
	ctx.lr = 0x8357C944;
	sub_83585328(ctx, base);
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

__attribute__((alias("__imp__sub_8357C958"))) PPC_WEAK_FUNC(sub_8357C958);
PPC_FUNC_IMPL(__imp__sub_8357C958) {
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
	// bl 0x8357c6e8
	ctx.lr = 0x8357C978;
	sub_8357C6E8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8357c998
	if (cr6.eq) goto loc_8357C998;
	// bl 0x82595188
	ctx.lr = 0x8357C988;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x8357C998;
	sub_825952B8(ctx, base);
loc_8357C998:
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

__attribute__((alias("__imp__sub_8357C9B4"))) PPC_WEAK_FUNC(sub_8357C9B4);
PPC_FUNC_IMPL(__imp__sub_8357C9B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8357C9B8"))) PPC_WEAK_FUNC(sub_8357C9B8);
PPC_FUNC_IMPL(__imp__sub_8357C9B8) {
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
	// bl 0x8357c8c8
	ctx.lr = 0x8357C9D8;
	sub_8357C8C8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8357c9f8
	if (cr6.eq) goto loc_8357C9F8;
	// bl 0x82595188
	ctx.lr = 0x8357C9E8;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x8357C9F8;
	sub_825952B8(ctx, base);
loc_8357C9F8:
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

__attribute__((alias("__imp__sub_8357CA14"))) PPC_WEAK_FUNC(sub_8357CA14);
PPC_FUNC_IMPL(__imp__sub_8357CA14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8357CA18"))) PPC_WEAK_FUNC(sub_8357CA18);
PPC_FUNC_IMPL(__imp__sub_8357CA18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lwz r3,9816(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9816);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8357CA24"))) PPC_WEAK_FUNC(sub_8357CA24);
PPC_FUNC_IMPL(__imp__sub_8357CA24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8357CA28"))) PPC_WEAK_FUNC(sub_8357CA28);
PPC_FUNC_IMPL(__imp__sub_8357CA28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lwz r3,9820(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9820);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8357CA34"))) PPC_WEAK_FUNC(sub_8357CA34);
PPC_FUNC_IMPL(__imp__sub_8357CA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8357CA38"))) PPC_WEAK_FUNC(sub_8357CA38);
PPC_FUNC_IMPL(__imp__sub_8357CA38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lwz r3,9824(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9824);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8357CA44"))) PPC_WEAK_FUNC(sub_8357CA44);
PPC_FUNC_IMPL(__imp__sub_8357CA44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8357CA48"))) PPC_WEAK_FUNC(sub_8357CA48);
PPC_FUNC_IMPL(__imp__sub_8357CA48) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8357CA70;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8357CA88;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8357cab0
	if (cr6.eq) goto loc_8357CAB0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8357cab0
	if (cr6.eq) goto loc_8357CAB0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8357CAAC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8357cab4
	goto loc_8357CAB4;
loc_8357CAB0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8357CAB4:
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

__attribute__((alias("__imp__sub_8357CACC"))) PPC_WEAK_FUNC(sub_8357CACC);
PPC_FUNC_IMPL(__imp__sub_8357CACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8357CAD0"))) PPC_WEAK_FUNC(sub_8357CAD0);
PPC_FUNC_IMPL(__imp__sub_8357CAD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8357CAD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8357CAF4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8357CB0C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8357cb3c
	if (cr6.eq) goto loc_8357CB3C;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8357cb3c
	if (cr6.eq) goto loc_8357CB3C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8357CB34;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8357CB3C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8357CB48"))) PPC_WEAK_FUNC(sub_8357CB48);
PPC_FUNC_IMPL(__imp__sub_8357CB48) {
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
	// bl 0x83565088
	ctx.lr = 0x8357CB60;
	sub_83565088(ctx, base);
	// lis r11,-32214
	ctx.r11.s64 = -2111176704;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// addi r8,r11,-5184
	ctx.r8.s64 = ctx.r11.s64 + -5184;
	// addi r7,r10,-20544
	ctx.r7.s64 = ctx.r10.s64 + -20544;
	// addi r6,r9,-20440
	ctx.r6.s64 = ctx.r9.s64 + -20440;
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r6,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r6.u32);
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

__attribute__((alias("__imp__sub_8357CB9C"))) PPC_WEAK_FUNC(sub_8357CB9C);
PPC_FUNC_IMPL(__imp__sub_8357CB9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8357CBA0"))) PPC_WEAK_FUNC(sub_8357CBA0);
PPC_FUNC_IMPL(__imp__sub_8357CBA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r11,-24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -24);
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8357CBB4"))) PPC_WEAK_FUNC(sub_8357CBB4);
PPC_FUNC_IMPL(__imp__sub_8357CBB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8357CBB8"))) PPC_WEAK_FUNC(sub_8357CBB8);
PPC_FUNC_IMPL(__imp__sub_8357CBB8) {
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
	// bl 0x83565088
	ctx.lr = 0x8357CBD0;
	sub_83565088(ctx, base);
	// lis r11,-32214
	ctx.r11.s64 = -2111176704;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// addi r8,r11,-5184
	ctx.r8.s64 = ctx.r11.s64 + -5184;
	// addi r7,r10,-20424
	ctx.r7.s64 = ctx.r10.s64 + -20424;
	// addi r6,r9,-20440
	ctx.r6.s64 = ctx.r9.s64 + -20440;
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r6,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r6.u32);
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

__attribute__((alias("__imp__sub_8357CC0C"))) PPC_WEAK_FUNC(sub_8357CC0C);
PPC_FUNC_IMPL(__imp__sub_8357CC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8357CC10"))) PPC_WEAK_FUNC(sub_8357CC10);
PPC_FUNC_IMPL(__imp__sub_8357CC10) {
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
	// bl 0x83565088
	ctx.lr = 0x8357CC28;
	sub_83565088(ctx, base);
	// lis r11,-32214
	ctx.r11.s64 = -2111176704;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// addi r8,r11,-5184
	ctx.r8.s64 = ctx.r11.s64 + -5184;
	// addi r7,r10,-20288
	ctx.r7.s64 = ctx.r10.s64 + -20288;
	// addi r6,r9,-20440
	ctx.r6.s64 = ctx.r9.s64 + -20440;
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r6,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r6.u32);
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

__attribute__((alias("__imp__sub_8357CC64"))) PPC_WEAK_FUNC(sub_8357CC64);
PPC_FUNC_IMPL(__imp__sub_8357CC64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8357CC68"))) PPC_WEAK_FUNC(sub_8357CC68);
PPC_FUNC_IMPL(__imp__sub_8357CC68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lis r10,-32214
	ctx.r10.s64 = -2111176704;
	// addi r9,r11,-20544
	ctx.r9.s64 = ctx.r11.s64 + -20544;
	// addi r8,r10,-5184
	ctx.r8.s64 = ctx.r10.s64 + -5184;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r8.u32);
	// b 0x83565188
	sub_83565188(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8357CC84"))) PPC_WEAK_FUNC(sub_8357CC84);
PPC_FUNC_IMPL(__imp__sub_8357CC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8357CC88"))) PPC_WEAK_FUNC(sub_8357CC88);
PPC_FUNC_IMPL(__imp__sub_8357CC88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lwz r3,9828(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9828);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8357CC94"))) PPC_WEAK_FUNC(sub_8357CC94);
PPC_FUNC_IMPL(__imp__sub_8357CC94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8357CC98"))) PPC_WEAK_FUNC(sub_8357CC98);
PPC_FUNC_IMPL(__imp__sub_8357CC98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lwz r3,9828(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9828);
	// b 0x825832e0
	sub_825832E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8357CCA4"))) PPC_WEAK_FUNC(sub_8357CCA4);
PPC_FUNC_IMPL(__imp__sub_8357CCA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8357CCA8"))) PPC_WEAK_FUNC(sub_8357CCA8);
PPC_FUNC_IMPL(__imp__sub_8357CCA8) {
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
	// bl 0x83565bb8
	ctx.lr = 0x8357CCC0;
	sub_83565BB8(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-20128
	ctx.r10.s64 = ctx.r11.s64 + -20128;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_8357CCE4"))) PPC_WEAK_FUNC(sub_8357CCE4);
PPC_FUNC_IMPL(__imp__sub_8357CCE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8357CCE8"))) PPC_WEAK_FUNC(sub_8357CCE8);
PPC_FUNC_IMPL(__imp__sub_8357CCE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r10,r11,-20128
	ctx.r10.s64 = ctx.r11.s64 + -20128;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x83565fa0
	sub_83565FA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8357CCF8"))) PPC_WEAK_FUNC(sub_8357CCF8);
PPC_FUNC_IMPL(__imp__sub_8357CCF8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// b 0x8357ce88
	sub_8357CE88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8357CD00"))) PPC_WEAK_FUNC(sub_8357CD00);
PPC_FUNC_IMPL(__imp__sub_8357CD00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lwz r3,9816(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9816);
	// b 0x825832e0
	sub_825832E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8357CD0C"))) PPC_WEAK_FUNC(sub_8357CD0C);
PPC_FUNC_IMPL(__imp__sub_8357CD0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8357CD10"))) PPC_WEAK_FUNC(sub_8357CD10);
PPC_FUNC_IMPL(__imp__sub_8357CD10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lwz r3,9820(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9820);
	// b 0x825832e0
	sub_825832E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8357CD1C"))) PPC_WEAK_FUNC(sub_8357CD1C);
PPC_FUNC_IMPL(__imp__sub_8357CD1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8357CD20"))) PPC_WEAK_FUNC(sub_8357CD20);
PPC_FUNC_IMPL(__imp__sub_8357CD20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lwz r3,9824(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9824);
	// b 0x825832e0
	sub_825832E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8357CD2C"))) PPC_WEAK_FUNC(sub_8357CD2C);
PPC_FUNC_IMPL(__imp__sub_8357CD2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8357CD30"))) PPC_WEAK_FUNC(sub_8357CD30);
PPC_FUNC_IMPL(__imp__sub_8357CD30) {
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
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r31,r11,9836
	ctx.r31.s64 = ctx.r11.s64 + 9836;
	// lwz r11,9856(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9856);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8357cd7c
	if (!cr6.eq) goto loc_8357CD7C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,9856(r10)
	PPC_STORE_U32(ctx.r10.u32 + 9856, ctx.r11.u32);
	// bl 0x83a5f308
	ctx.lr = 0x8357CD70;
	sub_83A5F308(ctx, base);
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-23040
	ctx.r3.s64 = ctx.r11.s64 + -23040;
	// bl 0x831cdcc8
	ctx.lr = 0x8357CD7C;
	sub_831CDCC8(ctx, base);
loc_8357CD7C:
	// lis r30,-31744
	ctx.r30.s64 = -2080374784;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r31,9816(r30)
	PPC_STORE_U32(ctx.r30.u32 + 9816, ctx.r31.u32);
	// bl 0x83585dc8
	ctx.lr = 0x8357CD8C;
	sub_83585DC8(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lwz r3,9816(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9816);
	// addi r4,r11,-20624
	ctx.r4.s64 = ctx.r11.s64 + -20624;
	// bl 0x83a7a980
	ctx.lr = 0x8357CD9C;
	sub_83A7A980(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r3,9816(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9816);
	// bl 0x82583338
	ctx.lr = 0x8357CDA8;
	sub_82583338(ctx, base);
	// bl 0x83564ee0
	ctx.lr = 0x8357CDAC;
	sub_83564EE0(ctx, base);
	// lwz r11,9816(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9816);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83585d68
	ctx.lr = 0x8357CDBC;
	sub_83585D68(ctx, base);
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

__attribute__((alias("__imp__sub_8357CDD4"))) PPC_WEAK_FUNC(sub_8357CDD4);
PPC_FUNC_IMPL(__imp__sub_8357CDD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8357CDD8"))) PPC_WEAK_FUNC(sub_8357CDD8);
PPC_FUNC_IMPL(__imp__sub_8357CDD8) {
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
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r31,r11,9860
	ctx.r31.s64 = ctx.r11.s64 + 9860;
	// lwz r11,9880(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9880);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8357ce24
	if (!cr6.eq) goto loc_8357CE24;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,9880(r10)
	PPC_STORE_U32(ctx.r10.u32 + 9880, ctx.r11.u32);
	// bl 0x83a5f308
	ctx.lr = 0x8357CE18;
	sub_83A5F308(ctx, base);
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-23024
	ctx.r3.s64 = ctx.r11.s64 + -23024;
	// bl 0x831cdcc8
	ctx.lr = 0x8357CE24;
	sub_831CDCC8(ctx, base);
loc_8357CE24:
	// lis r30,-31744
	ctx.r30.s64 = -2080374784;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r31,9820(r30)
	PPC_STORE_U32(ctx.r30.u32 + 9820, ctx.r31.u32);
	// bl 0x83585dc8
	ctx.lr = 0x8357CE34;
	sub_83585DC8(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lwz r3,9820(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9820);
	// addi r4,r11,-20608
	ctx.r4.s64 = ctx.r11.s64 + -20608;
	// bl 0x83a7a980
	ctx.lr = 0x8357CE44;
	sub_83A7A980(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r3,9820(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9820);
	// bl 0x82583338
	ctx.lr = 0x8357CE50;
	sub_82583338(ctx, base);
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lwz r3,9816(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9816);
	// bl 0x825832e0
	ctx.lr = 0x8357CE5C;
	sub_825832E0(ctx, base);
	// lwz r11,9820(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9820);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83585d68
	ctx.lr = 0x8357CE6C;
	sub_83585D68(ctx, base);
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

__attribute__((alias("__imp__sub_8357CE84"))) PPC_WEAK_FUNC(sub_8357CE84);
PPC_FUNC_IMPL(__imp__sub_8357CE84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8357CE88"))) PPC_WEAK_FUNC(sub_8357CE88);
PPC_FUNC_IMPL(__imp__sub_8357CE88) {
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
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lis r10,-32214
	ctx.r10.s64 = -2111176704;
	// addi r9,r11,-20544
	ctx.r9.s64 = ctx.r11.s64 + -20544;
	// addi r8,r10,-5184
	ctx.r8.s64 = ctx.r10.s64 + -5184;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x83565188
	ctx.lr = 0x8357CEC0;
	sub_83565188(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8357cee0
	if (cr6.eq) goto loc_8357CEE0;
	// bl 0x82595188
	ctx.lr = 0x8357CED0;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x8357CEE0;
	sub_825952B8(ctx, base);
loc_8357CEE0:
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

__attribute__((alias("__imp__sub_8357CEFC"))) PPC_WEAK_FUNC(sub_8357CEFC);
PPC_FUNC_IMPL(__imp__sub_8357CEFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8357CF00"))) PPC_WEAK_FUNC(sub_8357CF00);
PPC_FUNC_IMPL(__imp__sub_8357CF00) {
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
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r31,r11,9884
	ctx.r31.s64 = ctx.r11.s64 + 9884;
	// lwz r11,9904(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9904);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8357cf4c
	if (!cr6.eq) goto loc_8357CF4C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,9904(r10)
	PPC_STORE_U32(ctx.r10.u32 + 9904, ctx.r11.u32);
	// bl 0x83a5f308
	ctx.lr = 0x8357CF40;
	sub_83A5F308(ctx, base);
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-23008
	ctx.r3.s64 = ctx.r11.s64 + -23008;
	// bl 0x831cdcc8
	ctx.lr = 0x8357CF4C;
	sub_831CDCC8(ctx, base);
loc_8357CF4C:
	// lis r30,-31744
	ctx.r30.s64 = -2080374784;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r31,9824(r30)
	PPC_STORE_U32(ctx.r30.u32 + 9824, ctx.r31.u32);
	// bl 0x83585dc8
	ctx.lr = 0x8357CF5C;
	sub_83585DC8(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lwz r3,9824(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9824);
	// addi r4,r11,-20584
	ctx.r4.s64 = ctx.r11.s64 + -20584;
	// bl 0x83a7a980
	ctx.lr = 0x8357CF6C;
	sub_83A7A980(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r3,9824(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9824);
	// bl 0x82583338
	ctx.lr = 0x8357CF78;
	sub_82583338(ctx, base);
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lwz r3,9816(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9816);
	// bl 0x825832e0
	ctx.lr = 0x8357CF84;
	sub_825832E0(ctx, base);
	// lwz r11,9824(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9824);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83585d68
	ctx.lr = 0x8357CF94;
	sub_83585D68(ctx, base);
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

__attribute__((alias("__imp__sub_8357CFAC"))) PPC_WEAK_FUNC(sub_8357CFAC);
PPC_FUNC_IMPL(__imp__sub_8357CFAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8357CFB0"))) PPC_WEAK_FUNC(sub_8357CFB0);
PPC_FUNC_IMPL(__imp__sub_8357CFB0) {
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
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r31,r11,9908
	ctx.r31.s64 = ctx.r11.s64 + 9908;
	// lwz r11,9928(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9928);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8357cffc
	if (!cr6.eq) goto loc_8357CFFC;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,9928(r10)
	PPC_STORE_U32(ctx.r10.u32 + 9928, ctx.r11.u32);
	// bl 0x83a5f308
	ctx.lr = 0x8357CFF0;
	sub_83A5F308(ctx, base);
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-22992
	ctx.r3.s64 = ctx.r11.s64 + -22992;
	// bl 0x831cdcc8
	ctx.lr = 0x8357CFFC;
	sub_831CDCC8(ctx, base);
loc_8357CFFC:
	// lis r30,-31744
	ctx.r30.s64 = -2080374784;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r31,9828(r30)
	PPC_STORE_U32(ctx.r30.u32 + 9828, ctx.r31.u32);
	// bl 0x83585dc8
	ctx.lr = 0x8357D00C;
	sub_83585DC8(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lwz r3,9828(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9828);
	// addi r4,r11,-20564
	ctx.r4.s64 = ctx.r11.s64 + -20564;
	// bl 0x83a7a980
	ctx.lr = 0x8357D01C;
	sub_83A7A980(ctx, base);
	// li r4,96
	ctx.r4.s64 = 96;
	// lwz r3,9828(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9828);
	// bl 0x82583338
	ctx.lr = 0x8357D028;
	sub_82583338(ctx, base);
	// bl 0x83565440
	ctx.lr = 0x8357D02C;
	sub_83565440(ctx, base);
	// lwz r11,9828(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9828);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83585d68
	ctx.lr = 0x8357D03C;
	sub_83585D68(ctx, base);
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

__attribute__((alias("__imp__sub_8357D054"))) PPC_WEAK_FUNC(sub_8357D054);
PPC_FUNC_IMPL(__imp__sub_8357D054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8357D058"))) PPC_WEAK_FUNC(sub_8357D058);
PPC_FUNC_IMPL(__imp__sub_8357D058) {
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
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-20128
	ctx.r10.s64 = ctx.r11.s64 + -20128;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x83565fa0
	ctx.lr = 0x8357D084;
	sub_83565FA0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8357d0a4
	if (cr6.eq) goto loc_8357D0A4;
	// bl 0x82595188
	ctx.lr = 0x8357D094;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x8357D0A4;
	sub_825952B8(ctx, base);
loc_8357D0A4:
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

__attribute__((alias("__imp__sub_8357D0C0"))) PPC_WEAK_FUNC(sub_8357D0C0);
PPC_FUNC_IMPL(__imp__sub_8357D0C0) {
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
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82574ba8
	ctx.lr = 0x8357D0E4;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8357d0f0
	if (cr6.eq) goto loc_8357D0F0;
	// bl 0x83565458
	ctx.lr = 0x8357D0F0;
	sub_83565458(ctx, base);
loc_8357D0F0:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_8357D114"))) PPC_WEAK_FUNC(sub_8357D114);
PPC_FUNC_IMPL(__imp__sub_8357D114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8357D118"))) PPC_WEAK_FUNC(sub_8357D118);
PPC_FUNC_IMPL(__imp__sub_8357D118) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// lwz r11,-24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r4,-24
	ctx.r4.s64 = ctx.r4.s64 + -24;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8357D144;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x8259f070
	ctx.lr = 0x8357D160;
	sub_8259F070(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82574ba8
	ctx.lr = 0x8357D16C;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8357d1b4
	if (cr6.eq) goto loc_8357D1B4;
	// li r11,-2
	ctx.r11.s64 = -2;
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
loc_8357D17C:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8357d17c
	if (!cr0.eq) goto loc_8357D17C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bgt cr6,0x8357d1b4
	if (cr6.gt) goto loc_8357D1B4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8357D1B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8357D1B4:
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

__attribute__((alias("__imp__sub_8357D1CC"))) PPC_WEAK_FUNC(sub_8357D1CC);
PPC_FUNC_IMPL(__imp__sub_8357D1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8357D1D0"))) PPC_WEAK_FUNC(sub_8357D1D0);
PPC_FUNC_IMPL(__imp__sub_8357D1D0) {
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
	// stb r4,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r4.u8);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// addi r10,r11,-20072
	ctx.r10.s64 = ctx.r11.s64 + -20072;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x835cc8d0
	ctx.lr = 0x8357D208;
	sub_835CC8D0(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x835cc8d0
	ctx.lr = 0x8357D214;
	sub_835CC8D0(ctx, base);
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

__attribute__((alias("__imp__sub_8357D230"))) PPC_WEAK_FUNC(sub_8357D230);
PPC_FUNC_IMPL(__imp__sub_8357D230) {
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
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,-20072
	ctx.r10.s64 = ctx.r11.s64 + -20072;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82574ba8
	ctx.lr = 0x8357D25C;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8357d268
	if (cr6.eq) goto loc_8357D268;
	// bl 0x83565458
	ctx.lr = 0x8357D268;
	sub_83565458(ctx, base);
loc_8357D268:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82574ba8
	ctx.lr = 0x8357D274;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8357d280
	if (cr6.eq) goto loc_8357D280;
	// bl 0x83565458
	ctx.lr = 0x8357D280;
	sub_83565458(ctx, base);
loc_8357D280:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r11,21716
	ctx.r10.s64 = ctx.r11.s64 + 21716;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_8357D2A0"))) PPC_WEAK_FUNC(sub_8357D2A0);
PPC_FUNC_IMPL(__imp__sub_8357D2A0) {
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
	// bl 0x8357d230
	ctx.lr = 0x8357D2C0;
	sub_8357D230(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8357d2d8
	if (cr6.eq) goto loc_8357D2D8;
	// bl 0x82416268
	ctx.lr = 0x8357D2D4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8357D2D8:
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

__attribute__((alias("__imp__sub_8357D2F0"))) PPC_WEAK_FUNC(sub_8357D2F0);
PPC_FUNC_IMPL(__imp__sub_8357D2F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,-20068
	ctx.r10.s64 = ctx.r11.s64 + -20068;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82574ba8
	ctx.lr = 0x8357D31C;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8357d364
	if (cr6.eq) goto loc_8357D364;
	// li r11,-2
	ctx.r11.s64 = -2;
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
loc_8357D32C:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8357d32c
	if (!cr0.eq) goto loc_8357D32C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bgt cr6,0x8357d364
	if (cr6.gt) goto loc_8357D364;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8357D364;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8357D364:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r11,21716
	ctx.r10.s64 = ctx.r11.s64 + 21716;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_8357D384"))) PPC_WEAK_FUNC(sub_8357D384);
PPC_FUNC_IMPL(__imp__sub_8357D384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8357D388"))) PPC_WEAK_FUNC(sub_8357D388);
PPC_FUNC_IMPL(__imp__sub_8357D388) {
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
	// bl 0x8357d2f0
	ctx.lr = 0x8357D3A8;
	sub_8357D2F0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8357d3c0
	if (cr6.eq) goto loc_8357D3C0;
	// bl 0x82416268
	ctx.lr = 0x8357D3BC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8357D3C0:
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

__attribute__((alias("__imp__sub_8357D3D8"))) PPC_WEAK_FUNC(sub_8357D3D8);
PPC_FUNC_IMPL(__imp__sub_8357D3D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8357D3E0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,-20064
	ctx.r10.s64 = ctx.r11.s64 + -20064;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// std r30,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r30.u64);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8259f070
	ctx.lr = 0x8357D41C;
	sub_8259F070(ctx, base);
	// std r30,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r30.u64);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8259f070
	ctx.lr = 0x8357D430;
	sub_8259F070(ctx, base);
	// std r30,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r30.u64);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8259f070
	ctx.lr = 0x8357D444;
	sub_8259F070(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82574ba8
	ctx.lr = 0x8357D450;
	sub_82574BA8(ctx, base);
	// li r30,-2
	ctx.r30.s64 = -2;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8357d498
	if (cr6.eq) goto loc_8357D498;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
loc_8357D460:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ea = ctx.r9.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stwcx. r10,0,r9
	ea = ctx.r9.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8357d460
	if (!cr0.eq) goto loc_8357D460;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bgt cr6,0x8357d498
	if (cr6.gt) goto loc_8357D498;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8357D498;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8357D498:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82574ba8
	ctx.lr = 0x8357D4A4;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8357d4e8
	if (cr6.eq) goto loc_8357D4E8;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
loc_8357D4B0:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ea = ctx.r9.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stwcx. r10,0,r9
	ea = ctx.r9.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8357d4b0
	if (!cr0.eq) goto loc_8357D4B0;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bgt cr6,0x8357d4e8
	if (cr6.gt) goto loc_8357D4E8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8357D4E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8357D4E8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82574ba8
	ctx.lr = 0x8357D4F4;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8357d538
	if (cr6.eq) goto loc_8357D538;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
loc_8357D500:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ea = ctx.r9.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stwcx. r10,0,r9
	ea = ctx.r9.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8357d500
	if (!cr0.eq) goto loc_8357D500;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bgt cr6,0x8357d538
	if (cr6.gt) goto loc_8357D538;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8357D538;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8357D538:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8357D544"))) PPC_WEAK_FUNC(sub_8357D544);
PPC_FUNC_IMPL(__imp__sub_8357D544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8357D548"))) PPC_WEAK_FUNC(sub_8357D548);
PPC_FUNC_IMPL(__imp__sub_8357D548) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,-20064
	ctx.r10.s64 = ctx.r11.s64 + -20064;
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// bl 0x82574ba8
	ctx.lr = 0x8357D578;
	sub_82574BA8(ctx, base);
	// li r31,-2
	ctx.r31.s64 = -2;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8357d5c0
	if (cr6.eq) goto loc_8357D5C0;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
loc_8357D588:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ea = ctx.r9.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stwcx. r10,0,r9
	ea = ctx.r9.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8357d588
	if (!cr0.eq) goto loc_8357D588;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bgt cr6,0x8357d5c0
	if (cr6.gt) goto loc_8357D5C0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8357D5C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8357D5C0:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// bl 0x82574ba8
	ctx.lr = 0x8357D5CC;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8357d610
	if (cr6.eq) goto loc_8357D610;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
loc_8357D5D8:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ea = ctx.r9.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stwcx. r10,0,r9
	ea = ctx.r9.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8357d5d8
	if (!cr0.eq) goto loc_8357D5D8;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bgt cr6,0x8357d610
	if (cr6.gt) goto loc_8357D610;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8357D610;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8357D610:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x82574ba8
	ctx.lr = 0x8357D61C;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8357d660
	if (cr6.eq) goto loc_8357D660;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
loc_8357D628:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ea = ctx.r9.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stwcx. r10,0,r9
	ea = ctx.r9.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8357d628
	if (!cr0.eq) goto loc_8357D628;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bgt cr6,0x8357d660
	if (cr6.gt) goto loc_8357D660;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8357D660;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8357D660:
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r10,r11,-30936
	ctx.r10.s64 = ctx.r11.s64 + -30936;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_8357D684"))) PPC_WEAK_FUNC(sub_8357D684);
PPC_FUNC_IMPL(__imp__sub_8357D684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8357D688"))) PPC_WEAK_FUNC(sub_8357D688);
PPC_FUNC_IMPL(__imp__sub_8357D688) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8357D690;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x835ce930
	ctx.lr = 0x8357D6A4;
	sub_835CE930(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// std r31,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r31.u64);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82574ba8
	ctx.lr = 0x8357D6C0;
	sub_82574BA8(ctx, base);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82574ba8
	ctx.lr = 0x8357D6D0;
	sub_82574BA8(ctx, base);
	// li r29,-2
	ctx.r29.s64 = -2;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8357d718
	if (cr6.eq) goto loc_8357D718;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
loc_8357D6E0:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ea = ctx.r9.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r29,r11
	ctx.r10.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stwcx. r10,0,r9
	ea = ctx.r9.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8357d6e0
	if (!cr0.eq) goto loc_8357D6E0;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bgt cr6,0x8357d718
	if (cr6.gt) goto loc_8357D718;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8357D718;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8357D718:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x835ce930
	ctx.lr = 0x8357D724;
	sub_835CE930(ctx, base);
	// std r31,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r31.u64);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82574ba8
	ctx.lr = 0x8357D73C;
	sub_82574BA8(ctx, base);
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82574ba8
	ctx.lr = 0x8357D74C;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8357d790
	if (cr6.eq) goto loc_8357D790;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
loc_8357D758:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ea = ctx.r9.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r29,r11
	ctx.r10.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stwcx. r10,0,r9
	ea = ctx.r9.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8357d758
	if (!cr0.eq) goto loc_8357D758;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bgt cr6,0x8357d790
	if (cr6.gt) goto loc_8357D790;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8357D790;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8357D790:
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x835ce930
	ctx.lr = 0x8357D79C;
	sub_835CE930(ctx, base);
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82574ba8
	ctx.lr = 0x8357D7B4;
	sub_82574BA8(ctx, base);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82574ba8
	ctx.lr = 0x8357D7C4;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8357d808
	if (cr6.eq) goto loc_8357D808;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
loc_8357D7D0:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ea = ctx.r9.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r29,r11
	ctx.r10.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stwcx. r10,0,r9
	ea = ctx.r9.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8357d7d0
	if (!cr0.eq) goto loc_8357D7D0;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bgt cr6,0x8357d808
	if (cr6.gt) goto loc_8357D808;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8357D808;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8357D808:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8357d83c
	if (cr6.eq) goto loc_8357D83C;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8357d83c
	if (cr6.eq) goto loc_8357D83C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8357d83c
	if (cr6.eq) goto loc_8357D83C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8357D83C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8357D83C:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82574ba8
	ctx.lr = 0x8357D848;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8357d854
	if (cr6.eq) goto loc_8357D854;
	// bl 0x83565458
	ctx.lr = 0x8357D854;
	sub_83565458(ctx, base);
loc_8357D854:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82574ba8
	ctx.lr = 0x8357D860;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8357d86c
	if (cr6.eq) goto loc_8357D86C;
	// bl 0x83565458
	ctx.lr = 0x8357D86C;
	sub_83565458(ctx, base);
loc_8357D86C:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82574ba8
	ctx.lr = 0x8357D878;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8357d8bc
	if (cr6.eq) goto loc_8357D8BC;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
loc_8357D884:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ea = ctx.r9.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r29,r11
	ctx.r10.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stwcx. r10,0,r9
	ea = ctx.r9.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8357d884
	if (!cr0.eq) goto loc_8357D884;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bgt cr6,0x8357d8bc
	if (cr6.gt) goto loc_8357D8BC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8357D8BC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8357D8BC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8357D8C4"))) PPC_WEAK_FUNC(sub_8357D8C4);
PPC_FUNC_IMPL(__imp__sub_8357D8C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8357D8C8"))) PPC_WEAK_FUNC(sub_8357D8C8);
PPC_FUNC_IMPL(__imp__sub_8357D8C8) {
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
	// bl 0x8357d548
	ctx.lr = 0x8357D8E8;
	sub_8357D548(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8357d908
	if (cr6.eq) goto loc_8357D908;
	// bl 0x82595188
	ctx.lr = 0x8357D8F8;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x8357D908;
	sub_825952B8(ctx, base);
loc_8357D908:
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

__attribute__((alias("__imp__sub_8357D924"))) PPC_WEAK_FUNC(sub_8357D924);
PPC_FUNC_IMPL(__imp__sub_8357D924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8357D928"))) PPC_WEAK_FUNC(sub_8357D928);
PPC_FUNC_IMPL(__imp__sub_8357D928) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-20044
	ctx.r9.s64 = ctx.r10.s64 + -20044;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// std r11,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r11.u64);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8259f070
	ctx.lr = 0x8357D96C;
	sub_8259F070(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574ba8
	ctx.lr = 0x8357D978;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8357d9c0
	if (cr6.eq) goto loc_8357D9C0;
	// li r11,-2
	ctx.r11.s64 = -2;
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
loc_8357D988:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8357d988
	if (!cr0.eq) goto loc_8357D988;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bgt cr6,0x8357d9c0
	if (cr6.gt) goto loc_8357D9C0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8357D9C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8357D9C0:
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

__attribute__((alias("__imp__sub_8357D9DC"))) PPC_WEAK_FUNC(sub_8357D9DC);
PPC_FUNC_IMPL(__imp__sub_8357D9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8357D9E0"))) PPC_WEAK_FUNC(sub_8357D9E0);
PPC_FUNC_IMPL(__imp__sub_8357D9E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,-20044
	ctx.r10.s64 = ctx.r11.s64 + -20044;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82574ba8
	ctx.lr = 0x8357DA0C;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8357da54
	if (cr6.eq) goto loc_8357DA54;
	// li r11,-2
	ctx.r11.s64 = -2;
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
loc_8357DA1C:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8357da1c
	if (!cr0.eq) goto loc_8357DA1C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bgt cr6,0x8357da54
	if (cr6.gt) goto loc_8357DA54;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8357DA54;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8357DA54:
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r10,r11,-30936
	ctx.r10.s64 = ctx.r11.s64 + -30936;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_8357DA74"))) PPC_WEAK_FUNC(sub_8357DA74);
PPC_FUNC_IMPL(__imp__sub_8357DA74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8357DA78"))) PPC_WEAK_FUNC(sub_8357DA78);
PPC_FUNC_IMPL(__imp__sub_8357DA78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x835ce930
	ctx.lr = 0x8357DA98;
	sub_835CE930(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82574ba8
	ctx.lr = 0x8357DAB4;
	sub_82574BA8(ctx, base);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82574ba8
	ctx.lr = 0x8357DAC4;
	sub_82574BA8(ctx, base);
	// li r31,-2
	ctx.r31.s64 = -2;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8357db0c
	if (cr6.eq) goto loc_8357DB0C;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
loc_8357DAD4:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ea = ctx.r9.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stwcx. r10,0,r9
	ea = ctx.r9.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8357dad4
	if (!cr0.eq) goto loc_8357DAD4;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bgt cr6,0x8357db0c
	if (cr6.gt) goto loc_8357DB0C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8357DB0C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8357DB0C:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8357db28
	if (cr6.eq) goto loc_8357DB28;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8357DB28;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8357DB28:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82574ba8
	ctx.lr = 0x8357DB34;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8357db78
	if (cr6.eq) goto loc_8357DB78;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
loc_8357DB40:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ea = ctx.r9.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stwcx. r10,0,r9
	ea = ctx.r9.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8357db40
	if (!cr0.eq) goto loc_8357DB40;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bgt cr6,0x8357db78
	if (cr6.gt) goto loc_8357DB78;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8357DB78;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8357DB78:
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

__attribute__((alias("__imp__sub_8357DB90"))) PPC_WEAK_FUNC(sub_8357DB90);
PPC_FUNC_IMPL(__imp__sub_8357DB90) {
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
	// bl 0x8357d9e0
	ctx.lr = 0x8357DBB0;
	sub_8357D9E0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8357dbd0
	if (cr6.eq) goto loc_8357DBD0;
	// bl 0x82595188
	ctx.lr = 0x8357DBC0;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x8357DBD0;
	sub_825952B8(ctx, base);
loc_8357DBD0:
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

__attribute__((alias("__imp__sub_8357DBEC"))) PPC_WEAK_FUNC(sub_8357DBEC);
PPC_FUNC_IMPL(__imp__sub_8357DBEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8357DBF0"))) PPC_WEAK_FUNC(sub_8357DBF0);
PPC_FUNC_IMPL(__imp__sub_8357DBF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8357DBF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31744
	ctx.r30.s64 = -2080374784;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r3,9816(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9816);
	// bl 0x825832d8
	ctx.lr = 0x8357DC10;
	sub_825832D8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8357dc84
	if (!cr6.eq) goto loc_8357DC84;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// std r30,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r30.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// bl 0x82574ba8
	ctx.lr = 0x8357DC30;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8357dcc8
	if (cr6.eq) goto loc_8357DCC8;
	// li r11,-2
	ctx.r11.s64 = -2;
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
loc_8357DC40:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8357dc40
	if (!cr0.eq) goto loc_8357DC40;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bgt cr6,0x8357dcc8
	if (cr6.gt) goto loc_8357DCC8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8357DC78;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8357DC84:
	// lwz r3,9816(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9816);
	// bl 0x825832d8
	ctx.lr = 0x8357DC8C;
	sub_825832D8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8357DCA0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// std r30,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r30.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82574ba8
	ctx.lr = 0x8357DCBC;
	sub_82574BA8(ctx, base);
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x833d6d90
	ctx.lr = 0x8357DCC8;
	sub_833D6D90(ctx, base);
loc_8357DCC8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8357DCD4"))) PPC_WEAK_FUNC(sub_8357DCD4);
PPC_FUNC_IMPL(__imp__sub_8357DCD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8357DCD8"))) PPC_WEAK_FUNC(sub_8357DCD8);
PPC_FUNC_IMPL(__imp__sub_8357DCD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8357DCE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31744
	ctx.r30.s64 = -2080374784;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r3,9820(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9820);
	// bl 0x825832d8
	ctx.lr = 0x8357DCF8;
	sub_825832D8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8357dd6c
	if (!cr6.eq) goto loc_8357DD6C;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// std r30,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r30.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// bl 0x82574ba8
	ctx.lr = 0x8357DD18;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8357ddb0
	if (cr6.eq) goto loc_8357DDB0;
	// li r11,-2
	ctx.r11.s64 = -2;
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
loc_8357DD28:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8357dd28
	if (!cr0.eq) goto loc_8357DD28;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bgt cr6,0x8357ddb0
	if (cr6.gt) goto loc_8357DDB0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8357DD60;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8357DD6C:
	// lwz r3,9820(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9820);
	// bl 0x825832d8
	ctx.lr = 0x8357DD74;
	sub_825832D8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8357DD88;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// std r30,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r30.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82574ba8
	ctx.lr = 0x8357DDA4;
	sub_82574BA8(ctx, base);
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x833d6d90
	ctx.lr = 0x8357DDB0;
	sub_833D6D90(ctx, base);
loc_8357DDB0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8357DDBC"))) PPC_WEAK_FUNC(sub_8357DDBC);
PPC_FUNC_IMPL(__imp__sub_8357DDBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8357DDC0"))) PPC_WEAK_FUNC(sub_8357DDC0);
PPC_FUNC_IMPL(__imp__sub_8357DDC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8357DDC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31744
	ctx.r30.s64 = -2080374784;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r3,9824(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9824);
	// bl 0x825832d8
	ctx.lr = 0x8357DDE0;
	sub_825832D8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8357de54
	if (!cr6.eq) goto loc_8357DE54;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// std r30,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r30.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// bl 0x82574ba8
	ctx.lr = 0x8357DE00;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8357de98
	if (cr6.eq) goto loc_8357DE98;
	// li r11,-2
	ctx.r11.s64 = -2;
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
loc_8357DE10:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8357de10
	if (!cr0.eq) goto loc_8357DE10;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bgt cr6,0x8357de98
	if (cr6.gt) goto loc_8357DE98;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8357DE48;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8357DE54:
	// lwz r3,9824(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9824);
	// bl 0x825832d8
	ctx.lr = 0x8357DE5C;
	sub_825832D8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8357DE70;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// std r30,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r30.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82574ba8
	ctx.lr = 0x8357DE8C;
	sub_82574BA8(ctx, base);
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x833d6d90
	ctx.lr = 0x8357DE98;
	sub_833D6D90(ctx, base);
loc_8357DE98:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8357DEA4"))) PPC_WEAK_FUNC(sub_8357DEA4);
PPC_FUNC_IMPL(__imp__sub_8357DEA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8357DEA8"))) PPC_WEAK_FUNC(sub_8357DEA8);
PPC_FUNC_IMPL(__imp__sub_8357DEA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8357DEB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8357df40
	if (cr6.eq) goto loc_8357DF40;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8357df40
	if (cr6.eq) goto loc_8357DF40;
	// bl 0x835653a8
	ctx.lr = 0x8357DEDC;
	sub_835653A8(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x835653a8
	ctx.lr = 0x8357DEE4;
	sub_835653A8(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8357d1d0
	ctx.lr = 0x8357DEF8;
	sub_8357D1D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8357dbf0
	ctx.lr = 0x8357DF04;
	sub_8357DBF0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// std r30,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r30.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82574ba8
	ctx.lr = 0x8357DF20;
	sub_82574BA8(ctx, base);
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x833d6d90
	ctx.lr = 0x8357DF2C;
	sub_833D6D90(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8357d230
	ctx.lr = 0x8357DF34;
	sub_8357D230(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8357DF40:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// std r30,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r30.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// bl 0x82574ba8
	ctx.lr = 0x8357DF58;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8357dfa0
	if (cr6.eq) goto loc_8357DFA0;
	// li r11,-2
	ctx.r11.s64 = -2;
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
loc_8357DF68:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8357df68
	if (!cr0.eq) goto loc_8357DF68;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bgt cr6,0x8357dfa0
	if (cr6.gt) goto loc_8357DFA0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8357DFA0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8357DFA0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8357DFAC"))) PPC_WEAK_FUNC(sub_8357DFAC);
PPC_FUNC_IMPL(__imp__sub_8357DFAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8357DFB0"))) PPC_WEAK_FUNC(sub_8357DFB0);
PPC_FUNC_IMPL(__imp__sub_8357DFB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8357DFB8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8357DFD4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8357e06c
	if (cr6.eq) goto loc_8357E06C;
	// li r27,-2
	ctx.r27.s64 = -2;
loc_8357DFE8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8357E004;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x83580d58
	ctx.lr = 0x8357E010;
	sub_83580D58(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82574ba8
	ctx.lr = 0x8357E01C;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8357e060
	if (cr6.eq) goto loc_8357E060;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
loc_8357E028:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ea = ctx.r9.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r27,r11
	ctx.r10.u64 = ctx.r27.u64 + ctx.r11.u64;
	// stwcx. r10,0,r9
	ea = ctx.r9.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8357e028
	if (!cr0.eq) goto loc_8357E028;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bgt cr6,0x8357e060
	if (cr6.gt) goto loc_8357E060;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8357E060;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8357E060:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, xer);
	// blt cr6,0x8357dfe8
	if (cr6.lt) goto loc_8357DFE8;
loc_8357E06C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8357E074"))) PPC_WEAK_FUNC(sub_8357E074);
PPC_FUNC_IMPL(__imp__sub_8357E074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8357E078"))) PPC_WEAK_FUNC(sub_8357E078);
PPC_FUNC_IMPL(__imp__sub_8357E078) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8357E080;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8357dea8
	ctx.lr = 0x8357E090;
	sub_8357DEA8(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,-20068
	ctx.r10.s64 = ctx.r11.s64 + -20068;
	// std r31,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r31.u64);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stb r31,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r31.u8);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// bl 0x8259f070
	ctx.lr = 0x8357E0B8;
	sub_8259F070(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8357dcd8
	ctx.lr = 0x8357E0C4;
	sub_8357DCD8(ctx, base);
	// std r31,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r31.u64);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82574ba8
	ctx.lr = 0x8357E0DC;
	sub_82574BA8(ctx, base);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82574ba8
	ctx.lr = 0x8357E0EC;
	sub_82574BA8(ctx, base);
	// li r31,-2
	ctx.r31.s64 = -2;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8357e134
	if (cr6.eq) goto loc_8357E134;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
loc_8357E0FC:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ea = ctx.r9.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stwcx. r10,0,r9
	ea = ctx.r9.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8357e0fc
	if (!cr0.eq) goto loc_8357E0FC;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bgt cr6,0x8357e134
	if (cr6.gt) goto loc_8357E134;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8357E134;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8357E134:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8357d2f0
	ctx.lr = 0x8357E13C;
	sub_8357D2F0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82574ba8
	ctx.lr = 0x8357E148;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8357e18c
	if (cr6.eq) goto loc_8357E18C;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
loc_8357E154:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ea = ctx.r9.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stwcx. r10,0,r9
	ea = ctx.r9.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8357e154
	if (!cr0.eq) goto loc_8357E154;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bgt cr6,0x8357e18c
	if (cr6.gt) goto loc_8357E18C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8357E18C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8357E18C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8357E198"))) PPC_WEAK_FUNC(sub_8357E198);
PPC_FUNC_IMPL(__imp__sub_8357E198) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8357E1A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8357dea8
	ctx.lr = 0x8357E1B0;
	sub_8357DEA8(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,-20068
	ctx.r10.s64 = ctx.r11.s64 + -20068;
	// std r31,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r31.u64);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stb r31,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r31.u8);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// bl 0x8259f070
	ctx.lr = 0x8357E1D8;
	sub_8259F070(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8357ddc0
	ctx.lr = 0x8357E1E4;
	sub_8357DDC0(ctx, base);
	// std r31,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r31.u64);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82574ba8
	ctx.lr = 0x8357E1FC;
	sub_82574BA8(ctx, base);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82574ba8
	ctx.lr = 0x8357E20C;
	sub_82574BA8(ctx, base);
	// li r31,-2
	ctx.r31.s64 = -2;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8357e254
	if (cr6.eq) goto loc_8357E254;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
loc_8357E21C:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ea = ctx.r9.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stwcx. r10,0,r9
	ea = ctx.r9.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8357e21c
	if (!cr0.eq) goto loc_8357E21C;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bgt cr6,0x8357e254
	if (cr6.gt) goto loc_8357E254;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8357E254;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8357E254:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8357d2f0
	ctx.lr = 0x8357E25C;
	sub_8357D2F0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82574ba8
	ctx.lr = 0x8357E268;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8357e2ac
	if (cr6.eq) goto loc_8357E2AC;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
loc_8357E274:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ea = ctx.r9.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stwcx. r10,0,r9
	ea = ctx.r9.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8357e274
	if (!cr0.eq) goto loc_8357E274;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bgt cr6,0x8357e2ac
	if (cr6.gt) goto loc_8357E2AC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8357E2AC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8357E2AC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8357E2B8"))) PPC_WEAK_FUNC(sub_8357E2B8);
PPC_FUNC_IMPL(__imp__sub_8357E2B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8357E2C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x83522ab0
	ctx.lr = 0x8357E2D4;
	sub_83522AB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8357e310
	if (!cr6.eq) goto loc_8357E310;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
loc_8357E2F4:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r29,r10
	ctx.r9.u64 = ctx.r29.u64 + ctx.r10.u64;
	// stwcx. r9,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8357e2f4
	if (!cr0.eq) goto loc_8357E2F4;
loc_8357E310:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8357e35c
	if (cr6.eq) goto loc_8357E35C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// bl 0x83522ea8
	ctx.lr = 0x8357E340;
	sub_83522EA8(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// bl 0x83522040
	ctx.lr = 0x8357E350;
	sub_83522040(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x83521f50
	ctx.lr = 0x8357E35C;
	sub_83521F50(ctx, base);
loc_8357E35C:
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,-20632
	ctx.r4.s64 = ctx.r11.s64 + -20632;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x835228e0
	ctx.lr = 0x8357E370;
	sub_835228E0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8357e3ac
	if (!cr6.eq) goto loc_8357E3AC;
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
loc_8357E38C:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ea = ctx.r9.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r29,r11
	ctx.r10.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stwcx. r10,0,r9
	ea = ctx.r9.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8357e38c
	if (!cr0.eq) goto loc_8357E38C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8357E3AC:
	// bl 0x83521f50
	ctx.lr = 0x8357E3B0;
	sub_83521F50(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x83521f50
	ctx.lr = 0x8357E3B8;
	sub_83521F50(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8357E3C4"))) PPC_WEAK_FUNC(sub_8357E3C4);
PPC_FUNC_IMPL(__imp__sub_8357E3C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8357E3C8"))) PPC_WEAK_FUNC(sub_8357E3C8);
PPC_FUNC_IMPL(__imp__sub_8357E3C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8357E3D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8357e41c
	if (!cr6.eq) goto loc_8357E41C;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
loc_8357E3FC:
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
	// bne 0x8357e3fc
	if (!cr0.eq) goto loc_8357E3FC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8357E41C:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8357e450
	if (!cr6.eq) goto loc_8357E450;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8357e2b8
	ctx.lr = 0x8357E434;
	sub_8357E2B8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x83522040
	ctx.lr = 0x8357E444;
	sub_83522040(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x83521f50
	ctx.lr = 0x8357E450;
	sub_83521F50(ctx, base);
loc_8357E450:
	// bl 0x83574ee0
	ctx.lr = 0x8357E454;
	sub_83574EE0(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// std r31,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r31.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82574ba8
	ctx.lr = 0x8357E470;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8357e47c
	if (cr6.eq) goto loc_8357E47C;
	// bl 0x83565458
	ctx.lr = 0x8357E47C;
	sub_83565458(ctx, base);
loc_8357E47C:
	// std r31,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r31.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82574ba8
	ctx.lr = 0x8357E490;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8357e49c
	if (cr6.eq) goto loc_8357E49C;
	// bl 0x83565458
	ctx.lr = 0x8357E49C;
	sub_83565458(ctx, base);
loc_8357E49C:
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lwz r3,9828(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9828);
	// bl 0x825832e0
	ctx.lr = 0x8357E4A8;
	sub_825832E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x83577d18
	ctx.lr = 0x8357E4C0;
	sub_83577D18(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x82574ba8
	ctx.lr = 0x8357E4CC;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8357e4d8
	if (cr6.eq) goto loc_8357E4D8;
	// bl 0x83565458
	ctx.lr = 0x8357E4D8;
	sub_83565458(ctx, base);
loc_8357E4D8:
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82574ba8
	ctx.lr = 0x8357E4E8;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8357e4f4
	if (cr6.eq) goto loc_8357E4F4;
	// bl 0x83565458
	ctx.lr = 0x8357E4F4;
	sub_83565458(ctx, base);
loc_8357E4F4:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8357e550
	if (cr6.eq) goto loc_8357E550;
	// bl 0x83565260
	ctx.lr = 0x8357E504;
	sub_83565260(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8357e550
	if (cr6.eq) goto loc_8357E550;
	// bl 0x8357bbc8
	ctx.lr = 0x8357E514;
	sub_8357BBC8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x83577d18
	ctx.lr = 0x8357E52C;
	sub_83577D18(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8357d0c0
	ctx.lr = 0x8357E538;
	sub_8357D0C0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82574ba8
	ctx.lr = 0x8357E544;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8357e550
	if (cr6.eq) goto loc_8357E550;
	// bl 0x83565458
	ctx.lr = 0x8357E550;
	sub_83565458(ctx, base);
loc_8357E550:
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// stb r31,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r31.u8);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r10,r11,-20072
	ctx.r10.s64 = ctx.r11.s64 + -20072;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// bl 0x835cc8d0
	ctx.lr = 0x8357E56C;
	sub_835CC8D0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x835cc8d0
	ctx.lr = 0x8357E578;
	sub_835CC8D0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8357dbf0
	ctx.lr = 0x8357E584;
	sub_8357DBF0(ctx, base);
	// std r31,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r31.u64);
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82574ba8
	ctx.lr = 0x8357E59C;
	sub_82574BA8(ctx, base);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82574ba8
	ctx.lr = 0x8357E5AC;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8357e5f4
	if (cr6.eq) goto loc_8357E5F4;
	// li r11,-2
	ctx.r11.s64 = -2;
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
loc_8357E5BC:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8357e5bc
	if (!cr0.eq) goto loc_8357E5BC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bgt cr6,0x8357e5f4
	if (cr6.gt) goto loc_8357E5F4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8357E5F4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8357E5F4:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8357d230
	ctx.lr = 0x8357E5FC;
	sub_8357D230(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82574ba8
	ctx.lr = 0x8357E608;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8357e614
	if (cr6.eq) goto loc_8357E614;
	// bl 0x83565458
	ctx.lr = 0x8357E614;
	sub_83565458(ctx, base);
loc_8357E614:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82574ba8
	ctx.lr = 0x8357E620;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8357e62c
	if (cr6.eq) goto loc_8357E62C;
	// bl 0x83565458
	ctx.lr = 0x8357E62C;
	sub_83565458(ctx, base);
loc_8357E62C:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83521f50
	ctx.lr = 0x8357E634;
	sub_83521F50(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8357E640"))) PPC_WEAK_FUNC(sub_8357E640);
PPC_FUNC_IMPL(__imp__sub_8357E640) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8357E648;
	__savegprlr_27(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8357e694
	if (!cr6.eq) goto loc_8357E694;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_8357E674:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ea = ctx.r11.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r30,r10
	ctx.r9.u64 = ctx.r30.u64 + ctx.r10.u64;
	// stwcx. r9,0,r11
	ea = ctx.r11.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8357e674
	if (!cr0.eq) goto loc_8357E674;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8357E694:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8357e6c8
	if (!cr6.eq) goto loc_8357E6C8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8357e2b8
	ctx.lr = 0x8357E6AC;
	sub_8357E2B8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x83522040
	ctx.lr = 0x8357E6BC;
	sub_83522040(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x83521f50
	ctx.lr = 0x8357E6C8;
	sub_83521F50(ctx, base);
loc_8357E6C8:
	// bl 0x83574ee0
	ctx.lr = 0x8357E6CC;
	sub_83574EE0(ctx, base);
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,9828(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9828);
	// bl 0x825832e0
	ctx.lr = 0x8357E6DC;
	sub_825832E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r7,4
	ctx.r7.s64 = 4;
	// bl 0x83577d18
	ctx.lr = 0x8357E6F4;
	sub_83577D18(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// std r31,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r31.u64);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// bl 0x82574ba8
	ctx.lr = 0x8357E70C;
	sub_82574BA8(ctx, base);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82574ba8
	ctx.lr = 0x8357E71C;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8357e728
	if (cr6.eq) goto loc_8357E728;
	// bl 0x83565458
	ctx.lr = 0x8357E728;
	sub_83565458(ctx, base);
loc_8357E728:
	// bl 0x8357bbc8
	ctx.lr = 0x8357E72C;
	sub_8357BBC8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r7,4
	ctx.r7.s64 = 4;
	// bl 0x83577d18
	ctx.lr = 0x8357E744;
	sub_83577D18(ctx, base);
	// std r31,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r31.u64);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x82574ba8
	ctx.lr = 0x8357E758;
	sub_82574BA8(ctx, base);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82574ba8
	ctx.lr = 0x8357E768;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8357e774
	if (cr6.eq) goto loc_8357E774;
	// bl 0x83565458
	ctx.lr = 0x8357E774;
	sub_83565458(ctx, base);
loc_8357E774:
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// stb r30,164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 164, ctx.r30.u8);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r10,r11,-20072
	ctx.r10.s64 = ctx.r11.s64 + -20072;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// bl 0x835cc8d0
	ctx.lr = 0x8357E790;
	sub_835CC8D0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x835cc8d0
	ctx.lr = 0x8357E79C;
	sub_835CC8D0(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8357dbf0
	ctx.lr = 0x8357E7A8;
	sub_8357DBF0(ctx, base);
	// std r31,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r31.u64);
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x82574ba8
	ctx.lr = 0x8357E7C0;
	sub_82574BA8(ctx, base);
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82574ba8
	ctx.lr = 0x8357E7D0;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8357e818
	if (cr6.eq) goto loc_8357E818;
	// li r11,-2
	ctx.r11.s64 = -2;
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
loc_8357E7E0:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8357e7e0
	if (!cr0.eq) goto loc_8357E7E0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bgt cr6,0x8357e818
	if (cr6.gt) goto loc_8357E818;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8357E818;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8357E818:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8357d230
	ctx.lr = 0x8357E820;
	sub_8357D230(ctx, base);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x83565338
	ctx.lr = 0x8357E828;
	sub_83565338(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8357e8a0
	if (!cr6.eq) goto loc_8357E8A0;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595718
	ctx.lr = 0x8357E844;
	sub_82595718(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8357e890
	if (cr6.eq) goto loc_8357E890;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x835652d0
	ctx.lr = 0x8357E85C;
	sub_835652D0(ctx, base);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x835652d0
	ctx.lr = 0x8357E868;
	sub_835652D0(ctx, base);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x835652d0
	ctx.lr = 0x8357E874;
	sub_835652D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// bl 0x8357d3d8
	ctx.lr = 0x8357E888;
	sub_8357D3D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8357e894
	goto loc_8357E894;
loc_8357E890:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_8357E894:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83576630
	ctx.lr = 0x8357E8A0;
	sub_83576630(ctx, base);
loc_8357E8A0:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82574ba8
	ctx.lr = 0x8357E8AC;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8357e8b8
	if (cr6.eq) goto loc_8357E8B8;
	// bl 0x83565458
	ctx.lr = 0x8357E8B8;
	sub_83565458(ctx, base);
loc_8357E8B8:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82574ba8
	ctx.lr = 0x8357E8C4;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8357e8d0
	if (cr6.eq) goto loc_8357E8D0;
	// bl 0x83565458
	ctx.lr = 0x8357E8D0;
	sub_83565458(ctx, base);
loc_8357E8D0:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83521f50
	ctx.lr = 0x8357E8D8;
	sub_83521F50(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

